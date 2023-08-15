#include <iostream>
using namespace std;

double add(double num1, double num2)
{ // for addition of two numbers
     double add = num1 + num2;
     return add;
}

double sub(double num1, double num2)
{ // for subtraction of two numbers
     double sub = num1 - num2;
     return sub;
}

double mul(double num1, double num2)
{ // for multiplication of two numbers
     double mul = num1 * num2;
     return mul;
}

double divide(double num1, double num2)
{ // for division of two numbers
     double divide = num1 / num2;
     return divide;
}

int main()
{
     double i, num1, num2;
     cout << "Give Command" << endl;
     cin >> i;
     cin>>num1;
     cin>>num2;

     //"Please enter 1 for addition \n Please enter 2 for subtraction\n Please enter 3 for multiplication\nPlease enter 4 for division \n"


          if (i == 1)
          {
               cout << num1<<"+"<<num2<<"\n="<<add(num1, num2)<<endl;
          }
          else if (i == 2)
          {
               cout << num1<<"-"<<num2<<"\n="<<sub(num1, num2) << endl;
          }
          else if (i == 3)
          {
               cout <<num1<<"*"<<num2<<"\n="<< mul(num1, num2) << endl;
          }
          else if(i == 4)
          {
               cout << num1<<"/"<<num2<<"\n="<<divide(num1, num2) << endl;
          }
          else
          {
               cout << "Invalid Input";
          }

     
     return 0;
}