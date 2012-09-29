/********************************************************/
/********************************************************/
/*************titaNWare x_titanyum_x@hotmail.com*********/
/********************************************************/
/********************************************************/
/********************************************************/

#include <iostream>
#include <cstdio>

using namespace std;

void printScreenBinary(unsigned int);

int main (void)
{
    unsigned int hexNumber1 = 0x3AB;
    unsigned int hexNumber2 = 0xFC9;
    unsigned int andOp;
    unsigned int orOp;
    unsigned int xorOp;
    unsigned int complementOp;
    unsigned int pause;

    andOp        =  hexNumber1 & hexNumber2;
    orOp         =  hexNumber1 | hexNumber2;
    xorOp        =  hexNumber1 ^ hexNumber2;
    complementOp = ~hexNumber1;

    printf("Number1... \nHexadecimal = %X\nInteger = %d\n",hexNumber1,hexNumber1);
    cout << "Binary = ";
    printScreenBinary(hexNumber1);

    cout << endl << endl;

    printf("Number2... \nHexadecimal = %X\nInteger = %d\n",hexNumber2,hexNumber2);
    cout << "Binary = ";
    printScreenBinary(hexNumber2);

    cout << endl << endl;
    cout << "------------------------------------------------------------\n";
    cout << "Number1 & Number2 \n";
    cout << "Number 1  = " ;printScreenBinary(hexNumber1);
    cout << "Number 2  = " ;printScreenBinary(hexNumber2);
    cout << "Result is = ";printScreenBinary(andOp);
    cout << "------------------------------------------------------------";

    cout << endl << endl;
    cout << "------------------------------------------------------------\n";
    cout << "Number1 | Number2 \n";
    cout << "Number 1  = " ;printScreenBinary(hexNumber1);
    cout << "Number 2  = " ;printScreenBinary(hexNumber2);
    cout << "Result is = ";printScreenBinary(orOp);
    cout << "------------------------------------------------------------";

    cout << endl << endl;
    cout << "------------------------------------------------------------\n";
    cout << "Number1 ^ Number2 \n";
    cout << "Number 1  = " ;printScreenBinary(hexNumber1);
    cout << "Number 2  = " ;printScreenBinary(hexNumber2);
    cout << "Result is = ";printScreenBinary(xorOp);
    cout << "------------------------------------------------------------";

    cout << endl << endl;
    cout << "------------------------------------------------------------\n";
    cout << "~Number1\n";
    cout << "Number 1  = " ;printScreenBinary(hexNumber1);
    cout << "Result is = ";printScreenBinary(complementOp);
    cout << "------------------------------------------------------------";

    cin >> pause;
    return 0;
}

void printScreenBinary(unsigned int number)
{
    unsigned int counter;
    unsigned int mask = 1 << 31;

    for(counter=1;counter<=32;counter++)
    {
        if(number & mask) cout << "1";
        else cout << "0";
        number <<=1;

        if(counter % 8 == 0)
        cout << " ";
    }
    cout << "\n";
}


