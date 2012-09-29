/********************************************************/
/********************************************************/
/*************titaNWare x_titanyum_x@hotmail.com*********/
/********************************************************/
/********************************************************/
/********************************************************/

#include <iostream>

using namespace std;

long sumForLoop(unsigned int);
long sumWhileLoop(unsigned int);
long sumDoWhileLoop(unsigned int);

int main (void)
{
    unsigned int number;
    char pause;

    cout << "Please enter a number : ";
    cin >> number;

    cout << "\nUsing for loop\n"
         << "Sum of the numbers between "
         << "0 and " << number << endl
         << sumForLoop(number);

    cout << "\n\n";

    cout << "\nUsing while loop\n"
         << "Sum of the numbers between "
         << "0 and " << number << endl
         << sumWhileLoop(number);

    cout << "\n\n";

    cout << "\nUsing do while loop\n"
         << "Sum of the numbers between "
         << "0 and " << number << endl
         << sumDoWhileLoop(number);

    cin >> pause;
    return 0;
}

long sumForLoop(unsigned int number)
{
    unsigned int counter;
    long sum=0;

    for(counter=number;counter>0;counter--)
    {
        sum += counter;
    }
    return sum;
}

long sumWhileLoop(unsigned int number)
{
    unsigned int counter;
    long sum=0;

    counter=number;
    while(counter > 0)
    {
        sum += counter;
        counter--;
    }
    return sum;
}

long sumDoWhileLoop(unsigned int number)
{
    unsigned int counter;
    long sum=0;

    counter = number;
    do
    {
        sum += counter;
        counter--;
    }while(counter > 0);

    return sum;
}




