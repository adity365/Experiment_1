#include <iostream>
using namespace std;

int main(){

    int a,b;
    cout <<"Enter the value of first number " << endl;
    cin >> a;

    cout <<"Enter the value of Second number " << endl;
    cin >> b;

    int sum = a + b;
    cout << "The sum of the two numbers entered is " << sum << endl;

    int prod = a*b;
    cout << "The product of the two numbers entered is " << prod << endl;

    int c;
    cout << "Enter a number " << endl;
    cin >> c;

    if(c%2==0){
        cout << "The number entered is an even number " << endl;
    }else {
        cout << "The number entered is an odd number " << endl;
    }

    int d;
    cout << "Enter the year you want to check it is a leap year or not " << endl;
    cin >> d;
    if((d% 400 == 0)||(d % 100 != 0) && (d % 4 == 0)){
        cout << "The year entered is a leap year " << endl;
    }else {
        cout << "The year entered is not a leap year " << endl;
    }
    
}