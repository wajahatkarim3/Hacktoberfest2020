import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		// Write your code here
    Scanner sc=new Scanner(System.in);
	        int n=sc.nextInt();

	        int tem=1,power=0;
	        int decimal=0;
	        for (int j=0;j<n;j++) {
	            if(n==0) {
	                break;
	            } else {
	                while(n>0) {
	                    tem=n%10;
	                    decimal+=(tem*(Math.pow(2,power)));
	                    n=n/10;
	                    power++;
	                }
	            }    
	        } 
	        System.out.println(decimal);
	}
}
