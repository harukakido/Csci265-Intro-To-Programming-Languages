//Haruka Kido
//haruka.kido@ndus.edu
//CSci 265. Program 1, C++

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int func1()
{
//Part 1: Asks user to input integer value as number of seconds and converts input to hours, minutes, and seconds as output
    cout << "Part 1 - Convert from seconds\n";
    int time = 0;
    int h = 0;
    int m = 0;
    int s = 0;
 
    //user input of time as seconds
    cout << "Seconds: ";
    cin >> time;
 
    //conversions to hours, mins, and secs
    h = time/3600;
    time = time%3600; //new time
    m = time/60;
    time = time%60; //new time
    s = time;
 
    //displays output
    cout << "This is "<< h <<" hours, " << m << " minutes, and "<< s << " seconds.";

    return 0;
}

int func2()
{
//Part 2: Asks user to input 4 integer values as numbers of quarters, dimes, nickels, and pennies and converts input to dollars and cents as output    
    cout << "\n\n";
    cout << "Part 2 - Convert to dollars\n";
    int quarters, dimes, nickels, pennies;

    //coin user inputs
    cout << "Quarters: ";
    cin >> quarters;
    cout << "Dimes: ";
    cin >> dimes;
    cout << "Nickels: ";
    cin >> nickels;
    cout << "Pennies: ";
    cin >> pennies;

    //conversions
    int cents = 25*quarters + 10*dimes + 5*nickels + pennies;
    int dollar = cents/100;
    cents = cents%100; //remaining cents

    cout << "This is equal to $"<< dollar << "." << cents; //displays output
    return 0;
}

int func3()
{
//Part 3: Asks user to input first name, last name, address, city, state, and zip code (all strings) and outputs formatted inputs in 2 ways
    cout << "\n\n";
    cout << "Part 3 - Work with output\n";
   
    string firstname;
    cout << "First Name: ";
    getline(cin, firstname);
    
    string lastname, address, city, state, zipcode;
    cout << "Last Name: ";
    getline(cin, lastname);
    cout << "Address: ";
    getline(cin, address);
    cout << "City: ";
    getline(cin, city);
    cout << "State: " ;
    getline(cin, state);
    cout << "Zip Code: ";
    getline(cin, zipcode);
    
    //divider cout for newline
    cout << "\n";

    //format output 1: using exactly 1 print statement
    cout << firstname << " " << lastname << "\n" << address << "\n" << city << ", " << state << "  " << zipcode << std::endl;

    //divider cout for newline
    cout << "\n";
  
    //format output 2: using exactly 6 print statements
    cout << left << firstname;
    cout << left << " " << lastname << "\n";
    cout << left << address << "\n";
    cout << left << city << ", ";
    cout << left << state << "  ";
    cout << left << zipcode;
    
    return 0;
}

int main()
{
    func1();
    func2();
    func3();
    return 0;
}
