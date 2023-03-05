#include <iostream>
#include <cmath>

using namespace std;

int main(){
   int a{2},b{18},c{2};

   auto discriminant = (b * b) - (4 * a * c);
   int divisor = 2 * a;

   cout << a << "x2 + " << b << "x + " << c<<'\n';
   if(discriminant > 0){

     auto xPlus = (-1*b + sqrt(discriminant)) / divisor;
     auto xLess = (-1*b - sqrt(discriminant)) / divisor;

     cout << "Has two results : " << '\n';
     cout << "x = " << xPlus << '\n';
     cout << "x = " << xLess;

   }else if(discriminant == 0){
     cout << "Has one solution : " << '\n';
     auto x = -1*b / divisor;

     cout << "x = " << x;
   }else{
     cout << "Has complex results" << '\n';
     auto real = (-1 * b) / divisor;
     auto imaginaryCoeficient = -1*discriminant;
     cout << "imaginary x = " << real << " + " << imaginaryCoeficient << "* sqrt(-1)"<< '\n';
     cout << "imaginary x = " << real << " - " << imaginaryCoeficient << "* sqrt(-1)"<< '\n';
   }
   return 0;
}
