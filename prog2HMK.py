#Haruka Kido
#haruka.kido@ndus.edu
#CSci 265. Program 2, Python

def main():

    #Initialization of variables
    totalclass = 0
    totalNumClasses = 0
    totalNumCredits = 0
    numClassesPassed = 0
    totalHonorPoints = 0
    totalCreditsPassed = 0

    #Enter class, num of credits, and grade
    totalclass = input("Enter number of classes taken this semester: ")
    class_name = input("Enter a class: ")
    num_credits = int(input("Enter the number of credits: "))
    lettergrade = input("Enter your grade: ").upper()

    if(lettergrade == 'A'):
        totalHonorPoints = totalHonorPoints + (num_credits*4)
        numClassesPassed = numClassesPassed+1
        totalCreditsPassed = totalCreditsPassed+num_credits

    elif(lettergrade == 'B'):
        totalHonorPoints = totalHonorPoints + (num_credits*3)
        numClassesPassed = numClassesPassed+1
        totalCreditsPassed = totalCreditsPassed+num_credits

    elif(lettergrade == 'C'):
        totalHonorPoints = totalHonorPoints + (num_credits*2)
        numClassesPassed = numClassesPassed+1
        totalCreditsPassed = totalCreditsPassed+num_credits

    elif(lettergrade == 'D'):
        totalHonorPoints = totalHonorPoints + (num_credits*1)
        numClassesPassed = numClassesPassed+1
        totalCreditsPassed = totalCreditsPassed+num_credits
        
    elif(lettergrade == 'F'):
        totalHonorPoints = totalHonorPoints + (num_credits*0)    

    totalNumCredits = totalNumCredits + num_credits
    totalNumClasses = totalNumClasses+1
    
    while(True):
    
        class_name = input("Enter the next class: ")
        if(class_name == ''):
            break

        num_credits = int(input("Enter the number of credits: "))
        lettergrade = input("Enter your grade: ").upper()

        if(lettergrade == 'A'):
            totalHonorPoints = totalHonorPoints + (num_credits*4)
            numClassesPassed = numClassesPassed+1
            totalCreditsPassed = totalCreditsPassed+num_credits

        elif(lettergrade == 'B'):
            totalHonorPoints = totalHonorPoints + (num_credits*3)
            numClassesPassed = numClassesPassed+1
            totalCreditsPassed = totalCreditsPassed+num_credits

        elif(lettergrade == 'C'):
            totalHonorPoints = totalHonorPoints + (num_credits*2)
            numClassesPassed = numClassesPassed+1
            totalCreditsPassed = totalCreditsPassed+num_credits

        elif(lettergrade == 'D'):
            totalHonorPoints = totalHonorPoints + (num_credits*1)
            numClassesPassed = numClassesPassed+1
            totalCreditsPassed = totalCreditsPassed+num_credits
            
        elif(lettergrade == 'F'):
            totalHonorPoints = totalHonorPoints + (num_credits*0)

        totalNumCredits = totalNumCredits = totalNumCredits + num_credits
        totalNumClasses = totalNumClasses+1

    gpa = totalHonorPoints/totalNumCredits

    print('\n')
    print('{:<25} {:>5.3f}'.format('GPA', gpa))
    print('{:<25} {:>5}'.format('Credits attempts', totalNumCredits))
    print('{:<25} {:>5}'.format('Credits passed', totalCreditsPassed))
    print('{:<25} {:>5}'.format('Classes attempted', totalNumClasses))
    print('{:<25} {:>5}'.format('Classes passed', numClassesPassed))
    
main()
