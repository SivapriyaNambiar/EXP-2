//Experiment 2 Finding the sizes of primitive datatypes 
#include <iostream>
using namespace std;

int main() 
{
    char a = 's';
    cout << "The size of a character is: "<< sizeof(a) << endl;
    int b = 123456;
    cout << "The size of an integer is: "<< sizeof(b) << endl;
    short int c = 1233;
    cout << "The size of a short integer is: "<< sizeof(c) << endl;
    long int d = 12739482;
    cout << "The size of a long integer is: "<< sizeof(d) << endl;
    long long int e = 122388728;
    cout << "The size of a long long integer is: "<< sizeof(e) << endl;
    float f = 27168.5;
    cout << "The sie of a float is: " << sizeof(f) << endl;
    double g = 84273923.89877;
    cout <<"The size of a double floating point is: "<< sizeof(g) << endl;
    long double h = 8742980.789793;
    cout<< "The size of long double floating point is: "<<sizeof(h) << endl;
    cout<< "The size of a wide character is: "<<sizeof(wchar_t) << endl;
    return 0;
}
