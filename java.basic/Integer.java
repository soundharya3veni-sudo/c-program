class Solution {

    public int partyHouse(ArrayList<ArrayList<Integer>> adj) {
        int n = adj.size();

        // Find farthest node from house 1
        int[] first = bfs(1, adj);
        int farthest = first[0];

        // Find diameter
        int[] second = bfs(farthest, adj);
        int diameter = second[1];

        // Minimum possible maximum distance
        return (diameter + 1) / 2;
    }

    private int[] bfs(int start, ArrayList<ArrayList<Integer>> adj) {
        int n = adj.size();

        boolean[] visited = new boolean[n + 1];
        int[] distance = new int[n + 1];

        Queue<Integer> queue = new LinkedList<>();

        queue.offer(start);
        visited[start] = true;

        int farthest = start;

        while (!queue.isEmpty()) {
            int u = queue.poll();

            for (int v : adj.get(u - 1)) {
                if (!visited[v]) {
                    visited[v] = true;
                    distance[v] = distance[u] + 1;
                    queue.offer(v);

                    if (distance[v] > distance[farthest]) {
                        farthest = v;
                    }
                }
            }
        }

        return new int[]{farthest, distance[farthest]};
    }
}
