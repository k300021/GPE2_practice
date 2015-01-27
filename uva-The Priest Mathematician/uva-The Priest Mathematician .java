import java.math.*;
import java.util.Scanner;

public class Main {
	public static void main(String args[]){
		
 	  	BigInteger f[] = new BigInteger[10010];
 	  	f[0] = BigInteger.valueOf(0);
		f[1] = BigInteger.valueOf(1);
		int i = 2;
		int k = 1;
		int numcase = 10000;
		while(i <= numcase){
			BigInteger index = BigInteger.valueOf(1).shiftLeft(k);
			for(int j=0; j<k+1 && i<=numcase; ++j){
				f[i] = f[i-1].add(index);
				++i;
			}
			++k;
		}  
		Scanner input = new Scanner(System.in);
		while(input.hasNext()){
			int n = input.nextInt();
			System.out.println(f[n]); 		
		}
	}
}
