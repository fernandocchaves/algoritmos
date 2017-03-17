import java.util.Scanner;
import java.io.IOException;

public class Main {
	
    public static void main(String[] args) throws IOException {
      Scanner in = new Scanner(System.in);
      
      int a = in.nextInt();
      int b = in.nextInt();
      int soma = a + b;

      System.out.println( "X = " + soma );
    }
}