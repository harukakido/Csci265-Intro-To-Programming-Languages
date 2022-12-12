//Haruka Kido
//haruka.kido@ndus.edu
//CSci 265. Program 2, C++

#include <iostream>
#include <iomanip>
 
using namespace std;
int main(int argc, char *argv[])
{
    int totalNumClasses;
	double A = 4.0;
	double B = 3.0;
	double C = 2.0;
	double D = 1.0;
	double F = 0.0;
	string class_name;
	string letter_grade;
 	int credit;
    double calc = 0;
    double totalpoints = 0;
    double totalcredit = 0;
    double gpa = 0;
    int credits_passed = 0;
    int classes_passed = 0;
    int fcredit = 0;
    int fclass = 0;
    int x;
  
    cout << "Enter the number of classes taken this semester: ";
    cin >> totalNumClasses;
  
 	for(;;)
    {   
        cout << "\nEnter a class: ";
        cin >> class_name;
        cin.ignore();
        cout << "Enter the number of credits: ";
        cin >> credit;
        cout << "Enter your letter grade: ";
        cin >> letter_grade;
        cin.ignore();
			   
		if(letter_grade == "a" || letter_grade == "A")
		{
			calc = credit * A;
		}
		else if(letter_grade == "b" || letter_grade == "B")
		{
			calc = credit * B;
		}
		else if(letter_grade == "c" || letter_grade == "C")
		{
			calc = credit * C;
		}
		else if(letter_grade == "d" || letter_grade == "D")
		{
			calc = credit * D;
		}
		else if(letter_grade == "f" || letter_grade == "F")
		{
			calc = credit * F;
			fcredit = credit;
			fclass = 1;
		}	   
		else
		{
			break;
		}
	
          totalcredit = totalcredit + credit;
          totalpoints = totalpoints + calc;
          
		  cout << "\nContinue? Enter 1 for Yes or 2 for No: ";
		  cin >> x;
		  if(x == 2)
		  {
		  	break;
		  }      
 	}
                
    gpa = totalpoints/totalcredit;
    credits_passed = totalcredit - fcredit;
    classes_passed = totalNumClasses - fclass;
                    
          cout << "\n";
          std::cout << "GPA:                 " << std::fixed << std::setprecision(3) << gpa;
          cout << "\n";
          cout << "Credits attempts         " << std::fixed << std::setprecision(0) << totalcredit;
          cout << "\n";
          cout << "Credits passed           " << credits_passed;
          cout << "\n";
          cout << "Classes attempted        " << totalNumClasses;
          cout << "\n";
          cout << "Classes passed           " << classes_passed;
    
	return 0;
}
