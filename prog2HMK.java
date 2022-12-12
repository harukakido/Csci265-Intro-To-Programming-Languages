//Haruka Kido
//haruka.kido@ndus.edu
//CSci 265. Program 2, Java

import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int tot = 0;
    int tot_credit_hrs = 0;
    int credit_passed = 0;
    int classes_passed = 0;
    int fcredit1 = 0;
    int fcredit2 = 0;
    int fclasses1 = 0;
    int fclasses2 = 0;

    System.out.print("Enter the number of classes taken this semester: ");
    int num_classes = input.nextInt();
        
    while (true)
    {
        System.out.print("Enter Class Name: (Type X if none and to continue to calculate GPA): ");
        char classname = input.next().charAt(0);
        System.out.print("Enter Number of Credits and Grade separated by a space (Type 0 and X, separated by a space, to Calculate GPA): ");
        int credit_hrs = input.nextInt();
        char lettergrade = input.next().charAt(0);
        if (credit_hrs == 0 && lettergrade == 'X') 
        break;
        switch(lettergrade)
        {
            case 'A': tot = tot + (credit_hrs * 4);
            break;
            case 'a': tot = tot + (credit_hrs * 4);
            break;
            case 'B': tot = tot + (credit_hrs * 3);
            break;
            case 'b': tot = tot + (credit_hrs * 3);
            break;
            case 'C': tot = tot + (credit_hrs * 2);
            break;
            case 'c': tot = tot + (credit_hrs * 2);
            break;
            case 'D': tot = tot + (credit_hrs * 1);
            break;
            case 'd': tot = tot + (credit_hrs * 1);
            break;
            case 'F': tot = tot + (credit_hrs * 0);
            fcredit1 = credit_hrs;
            fclasses1 = 1;
            break;
            case 'f': tot = tot + (credit_hrs * 0);
            fcredit2 = credit_hrs;
            fclasses2 = 1;
            break;
            default:
            break;
        }
        tot_credit_hrs = tot_credit_hrs + credit_hrs;
    }

    float gpa = tot/(float)(tot_credit_hrs);
    credit_passed = tot_credit_hrs - fcredit1 - fcredit2;
    classes_passed = num_classes - fclasses1 - fclasses2;

    System.out.println(" ");
    System.out.print("GPA:               ");
    System.out.printf("%.3f", gpa);
    System.out.println(" ");
    System.out.println("Credits attempts       " + tot_credit_hrs);
    System.out.println("Credits passed         " + credit_passed);
    System.out.println("Classes attempted      " + num_classes);
    System.out.println("Classes passed         " + classes_passed); 
    }
}

