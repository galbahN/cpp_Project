#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

float inRadians(float degrees)
{
    // This function converts an angle from degrees to radians.
    // It takes a single parameter, 'degrees', representing the angle in degrees.
    // The function returns the equivalent angle in radians.
    return (degrees*3.14159)/180;
}



int main()
{
    float num1,num2,PI,degrees,radians; // Variables to store user inputs (num1 and num2) and the constant PI.
    int op;


    beginning: // Label used for the goto loop to indicate the starting point of the loop.

    system("clear");//The system is use to clear the screen console window of commands and any output generated by them.

    cout<<"what operator do you want to use \n\n";
    cout<<"1 = ADDITION \n\n";
    cout<<"2 = SUBTRACTION \n\n";
    cout<<"3 = MULTIPLICATION \n\n";
    cout<<"4 = DIVISION \n\n";
    cout<<"5 = SQUARE ROOT \n\n";
    cout<<"6 = EXPONENT\n\n";
    cout<<"7 = SINE\n\n";
    cout<<"8 = COSINE\n\n";
    cout<<"9 = TAGENT\n\n";
    cout<<"10 = INVERSE  COSINE\n\n";
    cout<<"11 = INVERSE SINE\n\n";
    cout<<"12 = INVERSE TAGENT\n\n";
    cout<<"13 = LOG\n\n";
    cout<<"14 = LOG WITH BASE 10\n\n";
    cout<<"ENTER THE FUNCTION THAT YOU WANT TO PERFORM : ";
    cin>>op;
    PI=3.14159;//This assigns the value 3.14159 to the variable PI.


    system("clear");//This line clears the console screen.

    switch(op)
    {
       case 1:
           //ADDITION
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            system("clear");
            cout << "ADDITION = " << (num1 + num2) << endl;
            break;

        case 2:
            //SUBTRACTION
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            system("clear");
            cout << "SUBTRACTION = " << (num1 - num2) << endl;
            break;

        case 3:
            //MULTIPLICATION
            cout << "Enter first number: \n";
            cin >> num1;
            cout << "Enter second number: \n";
            cin >> num2;
            system("clear");
            cout << "MULTIPLICATION = " << (num1 * num2) << endl;
            break;

        case 4:
            //DIVISION
            cout << "Enter first number: \n";
            cin >> num1;
            cout << "Enter second number: \n";
            cin >> num2;
            system("clear");
            if (num2 != 0){
                cout << "DIVISION = " << (num1 / num2) << endl;
            }
            else{
                cout << "Error: Division by zero.\n";
            }
            break;

        case 5:
            //SQUARE ROOT
            cout << "What number would you like to find the square root of: ";
            cin >> num1;
            system("clear");
            cout << "SQUARE ROOT = "<<sqrt(num1)<<endl;
            break;

        case 6:
            //EXPONENT
            cout << "Enter base number: ";
            cin >> num1;
            cout << "Enter exponent: ";
            cin >> num2;
            system("clear");
            cout << "EXPONENT = " << pow(num1,num2) << endl;
            break;

        //CASE 7 TO CASE 12 DEALS WITH TRIGNOMETRIC FUNCTION
       case 7:

            int radOrDeg;
            cout << "Choose between radians and degrees:" << endl;
            cout << "1 = Radians\n" << endl;
            cout << "2 = Degrees\n" << endl;
            cin >> radOrDeg;
            cout << "You selected: " << radOrDeg << endl;

            switch (radOrDeg)
            {
                case 1:
                    cout << "Enter the number to find its sine: ";
                    cin >> num1;
                    system("clear");
                    //THE RESULT IS CALCULATED BY CONVERTING THE USERS INPUT(DEGREES) INTO RADIANS
                    cout << "THE RESULT IS CALCULATED BY CONVERTING THE USERS INPUT(DEGREES) INTO RADIANS." << endl;
                    cout << "SIN(" <<num1<<  ")= " << sin(num1) << endl;
                    break;

                case 2:
                    cout << "Enter an angle in degrees: ";
                    cin >> degrees;
                    radians = inRadians(degrees);
                    system("clear");
                    //THE RESULT IS CALCULATED IN DEGREES
                    cout << "THE RESULT IS CALCULATED IN DEGREES." << endl;
                    cout << "SIN(" <<degrees<<  ")= " << sin(radians) << endl;
                    break;
            }
            break;


         case 8:

            cout << "Choose between radians and degrees:" << endl;
            cout << "1 = Radians\n" << endl;
            cout << "2 = Degrees\n" << endl;
            cin >> radOrDeg;
            cout << "You selected: " << radOrDeg << endl;

            switch (radOrDeg)
            {
                case 1:
                    cout << "Enter the number to find its sine: ";
                    cin >> num1;
                    system("clear");
                    //THE RESULT IS CALCULATED BY CONVERTING THE USERS INPUT(DEGREES) INTO RADIANS
                    cout << "THE RESULT IS CALCULATED BY CONVERTING THE USERS INPUT(DEGREES) INTO RADIANS." << endl;
                    cout << "COS(" <<num1<<  ")= " << cos(num1) << endl;
                    break;

                case 2:
                    cout << "Enter an angle in degrees: ";
                    cin >> degrees;
                    radians = inRadians(degrees);
                    system("clear");
                    //THE RESULT IS CALCULATED IN DEGREES
                    cout << "THE RESULT IS CALCULATED IN DEGREES." << endl;
                    cout << "COS(" <<degrees<< ")= " << cos(radians) << endl;
                    break;
            }
            break;

         case 9:

            cout << "Choose between radians and degrees:" << endl;
            cout << "1 = Radians\n" << endl;
            cout << "2 = Degrees\n" << endl;
            cin >> radOrDeg;
            cout << "You selected: " << radOrDeg << endl;

            switch (radOrDeg)
            {
                case 1:
                    cout << "Enter the number to find its sine: ";
                    cin >> num1;
                    system("clear");
                    //THE RESULT IS CALCULATED BY CONVERTING THE USERS INPUT(DEGREES) INTO RADIANS
                    cout << "THE RESULT IS CALCULATED BY CONVERTING THE USERS INPUT(DEGREES) INTO RADIANS." << endl;
                    cout << "TAN(" <<num1<<  ")= " << tan(num1) << endl;
                    break;

                case 2:
                    cout << "Enter an angle in degrees: ";
                    cin >> degrees;
                    radians = inRadians(degrees);
                    system("clear");
                    //THE RESULT IS CALCULATED IN DEGREES
                    cout << "THE RESULT IS CALCULATED IN DEGREES." << endl;
                    cout << "TAN(" <<degrees<<  ")= " << tan(radians) << endl;
                    break;
            }
            break;
        //NUMBERS -1 T0 1 IS USED IN THE CALCULATION OF TRIGNOMETRIC INVERSE.
         case 10:
            cout << "Numbers -1 to 1 is used in calculating the inverse." << endl;
            cout << "Enter the number to find its inverse cosine: ";
            cin >> num1;
            system("clear");
            cout << "INVERSE OF COSINE = "<<acos(num1)*180/PI<<endl;
            break;

         case 11:
            cout << "Numbers -1 to 1 is used in calculating the inverse." << endl;
            cout << "Enter the number to find its inverse sine: ";
            cin >> num1;
            system("clear");
            cout << "INVERSE OF SIN = "<<asin(num1)*180/PI<<endl;
            break;

         case 12:
            cout << "Numbers -1 to 1 is used in calculating the inverse." << endl;
            cout << "Enter the number to find its inverse tangent: ";
            cin >> num1;
            system("clear");
            cout << "INVERSE OF TAN = "<<atan(num1)*180/PI<<endl;
            break;

         case 13:
            cout << "What number would you like to perform the Log operator on: ";
            cin >> num1;
            system("clear");
            cout << "LOG = "<<log(num1)<<endl;
            break;

        case 14:
            cout << "What number would you like to find the Log base 10 of: ";
            cin >> num1;
            system("clear");
            cout << "LOG WITH BASE 10 = "<<log10(num1)<<endl;
            break;

        default:
            cout << "Invalid operation.\n\n";

    }

char operation1; // input in variable operation1 should be a character.eg alphhabet

    cout<<"\nDO YOU WANT TO CONTINUE WITH  YOUR CALCULATION? (Y/N)"<<endl;//These lines prompt the user to continue or exit the calculation and read the input into the variable operation1.
    cin>>operation1;

    if(operation1 == 'Y' || operation1 == 'y')//This if statement checks if the user wants to continue the calculation and if so,
    {                                        //it uses a goto statement to jump to the beginning label

        goto beginning;
    }
return 0;
}