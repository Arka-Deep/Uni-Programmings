import java.util.*;
public class marks {
        public static void main(String[] args) {
            int arr[]=new int[4];
            Scanner sc =new Scanner(System.in);
            System.out.println("Enter marks of 4 Subjects");
            for(int i=0;i<4;i++){
                arr[i]=sc.nextInt();
            }
            float avg=0;
            for(float x:arr){
                avg+=x;
            }
            avg/=4;

            char grade;
            grade=avg>=90?'O':avg>=80?'E':avg>=70?'A':avg>=60?'B':'F';
            System.out.println("Average is "+avg);
            System.out.println("Final grade = "+grade);
            
        }
}
