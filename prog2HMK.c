//Haruka Kido
//haruka.kido@ndus.edu
//CSci 265. Program 2, C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int totalNumClasses = 0;
    char str[50], c;
    int i;
    int lettergrade[6];
    int totalfailclass;
    int classespassed = 0;
    float credit[6];
    float gpa = 0.0;
    float finalgpa = 0.0;
    float totcredit = 0.0;
    float credpassed, totalfailcred, failcred1, failcred2;
    
    printf("Enter letter grade and number of credits separated by a space (Type X 0 if finished with classes): \n");
    for (i=0; i<6; i++) {
        printf("Class %d: ", i+1);
        c = getchar();
        lettergrade[i] = c;
        scanf("%f", &credit[i]);
        getchar();
        }
    for (i=0; i<6; i++) {
        switch (lettergrade[i]) {
            case 'A':
                gpa = gpa + 4*credit[i];
                totcredit = totcredit + credit[i];
                break;
            case 'a':
                gpa = gpa + 4*credit[i];
                totcredit = totcredit + credit[i];
                break;        
            case 'B':
                gpa = gpa + 3*credit[i];
                totcredit = totcredit + credit[i];
                break;
            case 'b':
                gpa = gpa + 3*credit[i];
                totcredit = totcredit + credit[i];
                break;        
            case 'C':
                gpa = gpa + 2*credit[i];
                totcredit = totcredit + credit[i];
                break;
            case 'c':
                gpa = gpa + 2*credit[i];
                totcredit = totcredit + credit[i];
                break;        
            case 'D':
                gpa = gpa + 1*credit[i];
                totcredit = totcredit + credit[i];
                break;
            case 'd':
                gpa = gpa + 1*credit[i];
                totcredit = totcredit + credit[i];
                break;        
            case 'F':
                gpa = gpa + 0*credit[i];
                totcredit = totcredit + credit[i];
                failcred1 = credit[i];
                break;
            case 'f':
                gpa = gpa + 0*credit[i];
                totcredit = totcredit + credit[i];
                failcred2 = credit[i];
                break;
            case 'X':   
                gpa = gpa + 0*credit[i];
                break;
            default:
                exit(0);
            }
        }
        
        if (lettergrade[i] == 'f' || lettergrade[i] == 'F');
            classespassed = totalNumClasses - 1;
            
finalgpa = gpa/totcredit;
totalfailcred = failcred1 + failcred2;
credpassed = totcredit - totalfailcred;

printf("Enter number of classes taken this semester: ");
scanf("%d", &totalNumClasses);

printf("\n");
printf("GPA:                         %.3f\n", finalgpa);
printf("Credits attempts                 %.0f\n", totcredit);
printf("Credits passed                   %.0f\n", credpassed);
printf("Classes attempted                %d\n", totalNumClasses);
printf("Classes passed                   %d\n", classespassed);

return 0;
}
