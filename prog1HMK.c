//Haruka Kido
//haruka.kido@ndus.edu
//CSci 265. Program 1, C

#include <stdio.h>
#include <string.h>

int main() 
{
    //Part 1: Asks user to input integer value as number of seconds and converts input to hours, minutes, and seconds as output
    printf("Part 1 – Convert from seconds");
    printf("\n");

	int input, hours, mins, secs;
	printf("Seconds: ");
	scanf("%d", &input);
	
	hours = (input/3600); 
	mins = (input - (3600*hours))/60;
	secs = (input - (3600*hours) - (60*mins));
	
	printf("This is %d hours, %d minutes and %d seconds.",hours,mins,secs); //displays output

    //divider print statement
    printf("\n");
    printf("\n");
    
    
    //Part 2: Asks user to input 4 integer values as numbers of quarters, dimes, nickels, and pennies and converts input to dollars and cents as output
    printf("Part 2 – Convert to dollars");
    printf("\n");

    int quarters, dimes, nickels, pennies;

    printf("Quarters: ");
    scanf("%d", &quarters);
    printf("Dimes: ");
    scanf("%d", &dimes);
    printf("Nickels: ");
    scanf("%d", &nickels);
    printf("Pennies: ");
    scanf("%d", &pennies);
    
    int dollars = 0;
    int cents = 0;

    //Equivalencies in cents
    cents += quarters * 25;
    cents += dimes * 10;
    cents += nickels * 5;
    cents += pennies;
    
    //Equivalencies in dollars and cents
    dollars = cents/100;
    cents = cents%100;

    printf("This is equal to $%d.%d", dollars, cents); //displays output

    //divider print statement
    printf("\n\n");
    
    
    //Part 3: Asks user to input first name, last name, address, city, state, and zip code (all strings) and outputs formatted inputs in 2 ways
    printf("Part 3 - Work with output");
    printf("\n");
    
    //array of chars
    char firstname[20], lastname[20], address[40], city[20], state[20], zipcode[20];
    char c;
    while((c = getchar()) != '\n' && c != EOF);
    
    //user inputs
    printf("First Name: ");
    fgets(firstname, 19, stdin);
    firstname[strcspn(firstname, "[\r\n]")] = 0;
    
    printf("Last Name: ");
    fgets(lastname, 19, stdin);
    lastname[strcspn(lastname, "[\r\n]")] = 0;
    
    printf("Address: ");
    fgets(address, 39, stdin);
    address[strcspn(address, "[\r\n]")] = 0;
    
    printf("City: ");
    fgets(city, 19, stdin);
    city[strcspn(city, "[\r\n]")] = 0;
    
    printf("State: ");
    fgets(state, 19, stdin);
    state[strcspn(state, "[\r\n]")] = 0;
    
    printf("Zip Code: ");
    fgets(zipcode, 19, stdin);
    zipcode[strcspn(zipcode, "[\r\n]")] = 0;
    
    //divider print statement
    printf("\n");
    
    //format output 1: using exactly 1 print statement
    printf("%s %s\n%s \n%s, %s  %s\n", firstname, lastname, address, city, state, zipcode);
    
    //divider print statement
    printf("\n");
    
    //format output 2: using exactly 6 print statements
    printf("%s", firstname);
    printf(" %s\n", lastname);
    printf("%s", address);
    printf("\n%s, ", city);
    printf("%s ", state);
    printf("%s\n", zipcode);
    
    return 0;
}
