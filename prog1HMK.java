//Haruka Kido
//haruka.kido@ndus.edu
//CSci 265. Program 1, Java

import java.util.Scanner;
public class Main
{
//Part 1: Asks user to input integer value as number of seconds and converts input to hours, minutes, and seconds as output
	public static void main(String[] args) {
	    System.out.println("Part 1 - Convert from seconds");
		Scanner keyboard = new Scanner (System.in);
		
        int s;
        int m;
        int h;
        
        System.out.print("Seconds: ");
        
        //conversions
        s = keyboard.nextInt();
        h = s/3600;
        m= (s%3600) / 60;
        int totalsec = (s%3600) % 60;

        System.out.println("This is " + h + " hours, " + m + " minutes and " + totalsec + " seconds."); //displays output

//divider print statement
		System.out.println();

//Part 2: Asks user to input 4 integer values as numbers of quarters, dimes, nickels, and pennies and converts input to dollars and cents as output
        System.out.println("Part 2 - Convert to dollars");

        int q;
        int d;
        int n;
        int p;
      
        System.out.print("Quarters: ");
        q = keyboard.nextInt();
        keyboard.nextLine();
      
        System.out.print("Dimes: ");
        d = keyboard.nextInt();
        keyboard.nextLine();
      
        System.out.print("Nickels: ");
        n = keyboard.nextInt();
        keyboard.nextLine();
      
        System.out.print("Pennies: ");
        p = keyboard.nextInt();
        keyboard.nextLine();
      
        double total; //coins into dollar.cents for total
        //conversion for total
        total = (q*0.25) + (d*0.10) + (n*0.05) + (p*0.01); 
      
        System.out.print("This is equal to $"); //displays output 
        System.out.printf("%1.2f", total); //displays output using format specifier

//divider print statement
		System.out.println("\n");
		
//Part 3: Asks user to input first name, last name, address, city, state, and zip code (all strings) and outputs formatted inputs in 2 ways    
		System.out.println("Part 3 - Work with output");
   
        //asks for user input
		System.out.print("First Name: ");
		String first = keyboard.nextLine();
      
		System.out.print("Last Name: ");
		String last = keyboard.nextLine();
		
		System.out.print("Address: ");
		String address = keyboard.nextLine();
		
		System.out.print("City: ");
		String city = keyboard.nextLine();
		
		System.out.print("State: ");
		String state = keyboard.nextLine();
		
		System.out.print("Zip Code: ");
		String zipcode = keyboard.nextLine();
		
		//divider print statement
		System.out.println();
      
        //format output 1: using exactly 1 print statement
        System.out.println(first + " " + last + "\n" + address + "\n" + city + ", " + state.toUpperCase() + "  " + zipcode);
      
        //format output 2: using exactly 6 print statements
        System.out.println();
        System.out.println(first + " " + last); 
        System.out.println(address); 
        System.out.print(city + ", ");
        System.out.print(state.toUpperCase() + "  ");
        System.out.print(zipcode);
	}
}
