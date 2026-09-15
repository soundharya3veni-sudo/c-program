import java.util.*;

class Solution {

    public int getCount(Node root, int k) {
        ArrayList<Integer> costs = new ArrayList<>();

        // Find the level of every leaf
        findLeaves(root, 1, costs);

        // Cheapest leaf costs first
        Collections.sort(costs);

        int count = 0;

        for (int cost : costs) {
            if (k >= cost) {
                k -= cost;
                count++;
            } else {
                break;
            }
        }

        return count;
    }

    private void findLeaves(Node root, int level, ArrayList<Integer> costs) {
        if (root == null) {
            return;
        }

        // Leaf node
        if (root.left == null && root.right == null) {
            costs.add(level);
            return;
        }

        findLeaves(root.left, level + 1, costs);
        findLeaves(root.right, level + 1, costs);
    }
}
