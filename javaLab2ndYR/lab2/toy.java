import java.util.*;
class collection{
    public int id;
    public String name;
    public int quant;
    public int price;
    public static int total;

    Scanner sc=new Scanner(System.in);
    public void accept(){
        System.out.println("Enter Toy->\nName \nId\nQuantity\nPrice");
        
        name=sc.nextLine();
        id=sc.nextInt();
        quant=sc.nextInt();
        price=sc.nextInt();
        total+=quant*price;
    }

    public void displayData(){
		System.out.println("Toy Id is : "+id);
		System.out.println("Toy Name is : "+name);
		System.out.println("Toy Price is : "+price);
		System.out.println("Toy Qty is : "+quant);
		System.out.println("Total Amount for this Toy is : "+quant*price);
	}

	public void displayTotalAmount(){
		System.out.println("Total Amount for all the Toys are "+total);
	}

}
public class toy {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);

        collection obj[];
        System.out.println("Enter the numbers of toys to accept");
        int num=sc.nextInt();
        obj=new collection[num];
        for(int i=0;i<num;i++){
            obj[i]=new collection();
            obj[i].accept();
        }
        for(int i=0;i<num;i++){
            obj[i].displayData();
        }
        obj[0].displayTotalAmount();

    }
    
}
