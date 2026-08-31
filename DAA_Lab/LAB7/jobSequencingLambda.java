import java.util.*;

class Main {

    static class Job {
        char id;
        int deadline;
        int profit;

        Job(char id, int deadline, int profit) {
            this.id = id;
            this.deadline = deadline;
            this.profit = profit;
        }
    }

    public static void main(String[] args) {

        // Input
        Job[] jobs = {
            new Job('A', 2, 100),
            new Job('B', 1, 19),
            new Job('C', 2, 27),
            new Job('D', 1, 25),
            new Job('E', 3, 15)
        };

        // Step 1: Sort jobs according to decreasing profit
        Arrays.sort(jobs, (a, b) -> b.profit - a.profit);

        // Find maximum deadline
        int maxDeadline = 0;

        for (Job j : jobs) {
            maxDeadline = Math.max(maxDeadline, j.deadline);
        }

        // slots[i] stores the job scheduled at slot i
        char[] slots = new char[maxDeadline + 1];

        // false means slot is empty
        boolean[] occupied = new boolean[maxDeadline + 1];

        int totalProfit = 0;
        int jobCount = 0;

        // Step 2: Schedule each job
        for (Job j : jobs) {

            // Start from the latest possible slot
            for (int slot = j.deadline; slot >= 1; slot--) {

                if (!occupied[slot]) {

                    occupied[slot] = true;
                    slots[slot] = j.id;

                    totalProfit += j.profit;
                    jobCount++;

                    break;
                }
            }
            if(jobCount == maxDeadline)
                break;
        }

        // Output
        System.out.println("Jobs scheduled:");

        for (int i = 1; i <= maxDeadline; i++) {
            if (occupied[i]) {
                System.out.println("Slot " + i + " -> Job " + slots[i]);
            }
        }

        System.out.println("Number of jobs = " + jobCount);
        System.out.println("Maximum Profit = " + totalProfit);
    }
}