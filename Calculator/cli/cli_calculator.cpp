#include <iostream>
#include <cstdlib> //this library added to use exit 0 function
//cmath is a library which allow us to do basic mathematical function if we needed
#include <cmath>

using namespace std;

int rnn = 0; //global variable 

void addition(); //we have just given a function name but we havent mention what it does which we will do below
void substraction();
void multiplication();
void division();
void factorial();
void power();
void square();
void cube();
void squareroot();


int main() //this is our main function from everything will be shown and operated
{
    char oprShowChoose; 
    char oprChoose;
    do 
    {
        cout << "===================================================" << endl;
        cout << "CLI Scientific Calculator" << endl;
        cout << "Created by Aman Arya" << endl;
        cout << "Linkedin: https://www.linkedin.com/in/aman-arya-0/ " << endl;
        cout << "Website: https://amnrya.blogspot.com/" << endl;
        cout << "===================================================" << endl;
        rnn++; //this will only come once after that it won't appear again
       
        //let user select if the want to choose number to select option or letters
        while(oprShowChoose!='0' && oprShowChoose!='1')//checks whether oprShowChoose value is not equal to 0 or 1 if yes than execute the statement or else
        {
            cout << endl;
            cout << " Press 0 to use operators using numbers(0-9)" << endl;
            cout << " Press 1 to use operators uging letters(a-z)" << endl;
            cout << "You entered: ";
            cin >> oprShowChoose; 

            switch(oprShowChoose)
            {
                case '0': cout << "\tnumbers(0-9) used for selecting operators"; break;
                case '1':{
                            cout << "\tletters(a-z) used for selecting operators"; 
                            cout << "\n\tCapital letters are also allowed";
                            break;
                        } 
                default: cout << "*** Please enter a legal value! ***" << endl;
            }
        }
    }while(rnn==0);

    do
    {
        if(oprShowChoose==0)
        {
            cout << endl;
            cout << "Enter 0 for Exit\n";
            cout << "Enter 1 for Addition\n";
            cout << "Enter 2 for Substraction\n";
            cout << "Enter 3 for Multipication\n";
            cout << "Enter 4 for Division\n";
            cout << "Enter 5 for Power\n";
            cout << "Enter 6 for Factorial\n";
            cout << "Enter 7 for Square\n";
            cout << "Enter 8 for Cube\n";
            cout << "Enter 9 for SquareRoot";
            switch(oprChoose)
            {
                case '0': exit(0);
                case '1': addition(); break;
                case '2': substraction(); break;
                case '3': multiplication(); break;
                case '4': division(); break;
                case '5': factorial(); break;
                case '6': power(); break;
                case '7': square(); break;
                case '8': cube(); break;
                case '9': squareroot(); break;
                default: cout << "*** Please enter a valid number! ***";
            }
        }
        else if(oprShowChoose==1)
        {
            cout << endl;
            cout << "Enter e for Exit\n";
            cout << "Enter a for Addition\n";
            cout << "Enter s for Substraction\n";
            cout << "Enter m for Multipication\n";
            cout << "Enter d for Division\n";
            cout << "Enter p for Power\n";
            cout << "Enter f for Factorial\n";
            cout << "Enter q for Square\n";
            cout << "Enter c for Cube\n";
            cout << "Enter r for SquareRoot";
            switch(oprChoose)
            {
                case 'e': exit(0);
                case 'a': addition(); break;
                case 's': substraction(); break;
                case 'm': multiplication(); break;
                case 'd': division(); break;
                case 'f': factorial(); break;
                case 'p': power(); break;
                case 'q': square(); break;
                case 'c': cube(); break;
                case 'r': squareroot(); break;
                default: cout << "*** Please enter a valid letter! ***";
            }
        }
        cout << ""
    } while ();
    



       
        
    
    
    //define variables
    //we are going to use procedural programming 
    //every function going to be different 
    return 0;
}

