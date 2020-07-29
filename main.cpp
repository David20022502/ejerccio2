#include <iostream>
using namespace std;
int factorial(int x, int y);
int main()
 {
   int a,b, sumas;
  cout << "ingrese un numero: " << endl;
  cin >> a >>b;
  cout << "el division es: " << factorial(a,b) << endl; 
}
int factorial(int x, int y)
{
  double divid;

   if(x<y)
   {
     divid=0;
   }
   else
   {
      divid = 1+factorial(x-y,y);
   }
 return divid;

}