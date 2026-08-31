
import java.util.*;

public class jobSeq{

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

        
        Job[] jobs = {
            new Job('A', 2, 100),
            new Job('B', 1, 19),
            new Job('C', 2, 27),
            new Job('D', 1, 25),
            new Job('E', 3, 15)
        };


        for (int i = 0; i < jobs.length - 1; i++) {
            for (int j = 0; j < jobs.length - i - 1; j++) {

                if (jobs[j].profit < jobs[j + 1].profit) {

                    Job temp = jobs[j];
                    jobs[j] = jobs[j + 1];
                    jobs[j + 1] = temp;
                }
            }
        }

        int maxDeadline = 0;

        for (int i = 0; i < jobs.length; i++) {
            if (jobs[i].deadline > maxDeadline) {
                maxDeadline = jobs[i].deadline;
            }
        }

        char[] slots = new char[maxDeadline + 1];

        boolean[] occupied = new boolean[maxDeadline + 1];

        int totalProfit = 0;
        int jobCount = 0;

        for (int i = 0; i < jobs.length; i++) {

            Job currentJob = jobs[i];


            for (int slot = currentJob.deadline; slot >= 1; slot--) {

                if (occupied[slot] == false) {

                    occupied[slot] = true;
                    slots[slot] = currentJob.id;

                    totalProfit = totalProfit + currentJob.profit;
                    jobCount = jobCount + 1;

                    break;
                }
            }

            if (jobCount == maxDeadline) {
                break;
            }
        }

        System.out.println("Jobs scheduled:");

        for (int i = 1; i <= maxDeadline; i++) {

            if (occupied[i] == true) {
                System.out.println("Slot " + i + " -> Job " + slots[i]);
            }
        }

        System.out.println("Number of jobs = " + jobCount);
        System.out.println("Maximum Profit = " + totalProfit);
    }
}

