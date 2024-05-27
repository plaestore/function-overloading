                        // Function overloading//
#include <iostream>

using namespace std;

    void printNumber(int x){
    cout <<"I am printing an integer "<< x << endl;
    }
    void printNumber(float x){
    cout <<"Now im printing a float "<< x << endl;
    }

int main()
{
   int a = 54;
   float b = 43.89;


   printNumber(a);
   printNumber(b);

    return 0;
}
