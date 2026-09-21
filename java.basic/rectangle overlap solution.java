```java
import java.util.*;

class Solution {

    public int shortestPath(int[][] mat) {

        int n = mat.length;
        int m = mat[0].length;

        boolean[][] unsafe = new boolean[n][m];

        int[] dr = {-1, 1, 0, 0};
        int[] dc = {0, 0, -1, 1};

        // Mark landmine and its adjacent cells as unsafe
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (mat[i][j] == 0) {

                    unsafe[i][j] = true;

                    for (int k = 0; k < 4; k++) {

                        int nr = i + dr[k];
                        int nc = j + dc[k];

                        if (nr >= 0 && nr < n &&
                            nc >= 0 && nc < m) {

                            unsafe[nr][nc] = true;
                        }
                    }
                }
            }
        }

        Queue<int[]> queue = new LinkedList<>();
        boolean[][] visited = new boolean[n][m];

        // Start from all safe cells in first column
        for (int i = 0; i < n; i++) {

            if (!unsafe[i][0]) {

                queue.offer(new int[]{i, 0, 1});
                visited[i][0] = true;
            }
        }

        // BFS
        while (!queue.isEmpty()) {

            int[] current = queue.poll();

            int r = current[0];
            int c = current[1];
            int distance = current[2];

            // Reached last column
            if (c == m - 1) {
                return distance;
            }

            // Move in 4 directions
            for (int k = 0; k < 4; k++) {

                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < n &&
                    nc >= 0 && nc < m &&
                    !unsafe[nr][nc] &&
                    !visited[nr][nc]) {

                    visited[nr][nc] = true;

                    queue.offer(
                        new int[]{nr, nc, distance + 1}
                    );
                }
            }
        }

        return -1;
    }
}
```
