import java.util.*;
public class calc {
    int a ,b;
    float c=0;
    Scanner sc =new Scanner(System.in);


    public void menu(){
		System.out.println("1->ADD");
		System.out.println("2->Subtract");
		System.out.println("3->Multiply");
		System.out.println("4->Divide");
		System.out.println("5->Exit");
	}

    public void insert(){
        System.out.println("Enter two numbers");
		a = sc.nextInt();
		
		b = sc.nextInt();

    }
    public void add(){
        insert();
		c=a+b;
		System.out.println(c);
	}
    public void sub(){
        insert();
		c=a-b;
		System.out.println(c);
	}
    public void mul(){
        insert();
		c=a*b;
		System.out.println(c);
	}
     public void div(){
        insert();
		c=a/b;
		System.out.println(c);
	}

    public static void main(String[] args) {
        int ch;
        calc obj=new calc();
        while(true){
            obj.menu();
            System.out.println("Enter choice");
            ch=obj.sc.nextInt();
            switch(ch){
                case 1:
                    obj.add();
                    break;

                case 2:
                    obj.sub();
                    break;

                case 3:
                    obj.mul();
                    break;

                case 4:
                    obj.div();
                    break;

                case 5:
                    System.exit(0);
                    break;

                default:
                    System.out.println("Enter a valid choice");

            }
        }
    }


}
