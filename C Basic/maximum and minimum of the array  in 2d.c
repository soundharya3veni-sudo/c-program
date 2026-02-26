#include<stdio.h>
int main()
 public class SecondHighestSalary {
    public static int findSecondHighest(int[][] salary, int R, int C) {
        int highest = Integer.MIN_VALUE;
        int secondHighest = Integer.MIN_VALUE;

        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                int current = salary[i][j];

                if (current > highest) {
                    secondHighest = highest;
                    highest = current;
                } 
                else if (current > secondHighest && current < highest) {
                    secondHighest = current;
                }
            }
        }

        if (secondHighest == Integer.MIN_VALUE) {
            throw new RuntimeException("No second highest distinct salary found");
        }

        return secondHighest;
    }

    public static void main(String[] args) {
        int[][] salary = {
            {5000, 7000, 6000},
            {8000, 7000, 9000},
            {7500, 6500, 9000}
        };

        System.out.println("Second Highest Salary: " +
            findSecondHighest(salary, 3, 3));
    }
}
