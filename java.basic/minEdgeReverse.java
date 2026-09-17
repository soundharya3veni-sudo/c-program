import java.util.*;

class Solution {

    static class Pair {
        int node;
        int cost;

        Pair(int node, int cost) {
            this.node = node;
            this.cost = cost;
        }
    }

    public int minimumEdgeReversal(int[][] edges, int n, int src, int dst) {

        ArrayList<ArrayList<Pair>> graph = new ArrayList<>();

        for (int i = 0; i <= n; i++) {
            graph.add(new ArrayList<>());
        }

        // Build graph
        for (int[] edge : edges) {
            int u = edge[0];
            int v = edge[1];

            // Original direction: cost 0
            graph.get(u).add(new Pair(v, 0));

            // Reverse direction: cost 1
            graph.get(v).add(new Pair(u, 1));
        }

        int[] dist = new int[n + 1];
        Arrays.fill(dist, Integer.MAX_VALUE);

        Deque<Integer> dq = new ArrayDeque<>();

        dist[src] = 0;
        dq.addFirst(src);

        while (!dq.isEmpty()) {

            int u = dq.pollFirst();

            for (Pair p : graph.get(u)) {

                int v = p.node;
                int cost = p.cost;

                if (dist[u] + cost < dist[v]) {

                    dist[v] = dist[u] + cost;

                    if (cost == 0) {
                        dq.addFirst(v);
                    } else {
                        dq.addLast(v);
                    }
                }
            }
        }

        if (dist[dst] == Integer.MAX_VALUE) {
            return -1;
        }

        return dist[dst];
    }
}
