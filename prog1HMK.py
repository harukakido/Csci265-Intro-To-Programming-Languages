#Haruka Kido
#haruka.kido@ndus.edu
#CSci 265. Program 1, Python

def p1(input):
#Part 1: Asks user to input integer value as number of seconds and converts input to hours, minutes, and seconds as output
    print("Part 1 - Convert from seconds")
    input = int(input("Seconds: "))
    hour = input // 3600
    input %= 3600
    minutes = input // 60
    input %= 60
    seconds = input
    print("This is " + str(hour) + " hours, " + str(minutes) + " minutes " + str(seconds) + " seconds.") #displays output


def p2():
#Part 2: Asks user to input 4 integer values as numbers of quarters, dimes, nickels, and pennies and converts input to dollars and cents as output
    print("Part 2 - Convert to dollars")
    def Input ():
        quarters = input("Quarters: ")
        dimes = input("Dimes: ")
        nickels = input("Nickels: ")
        pennies = input("Pennies: ")
        return ([quarters,dimes,nickels,pennies])

    def CalcCurrencyAmt(c):
        quarters = c[0]
        dimes = c[1]
        nickels = c[2]
        pennies = c[3]
    
        total = 25*int(quarters) + 10*int(dimes) + 5*int(nickels) + int(pennies)
        currAmt = float(total)/100
        return([total,currAmt])

    c = Input()

    conversion = CalcCurrencyAmt(c)
    print("This is equal to $" + str(conversion[1])) #displays output


def p3():
#Part 3: Asks user to input first name, last name, address, city, state, and zip code (all strings) and outputs formatted inputs in 2 ways
    print("Part 3 - Work with output")
    first_name = input("First Name: ") #string first name
    last_name = input("Last Name: ") #string last name
    address = input("Address: ") #string address
    city = input("City: ") #string city
    state = input("State: ") #string state abbreviation
    zip_code = input("Zip Code: ") #string zip code

    #divider print statement
    print("\n")

    #format output 1: using exactly 1 print statement
    print(str(first_name) + " " + str(last_name) + " \n" + str(address) + " \n" + str(city) + ", " + str(state.upper()) + "  " + str(zip_code))

    #divider print statement
    print("\n")

    #format output 2: using exactly 6 print statements
    print(first_name, end=" ")
    print(last_name, end="\n")
    print(address, end="\n")
    print(city, end=", ")
    print(state.upper(), end="  ")
    print(zip_code)

if __name__ == '__main__':
  
    p1(input)
    print("\n")
    p2()
    print("\n")
    p3()
