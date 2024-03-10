#include "headers.h"

int main()
{

    cout << "Enter values in the form of : - " << '\n';

   cout << "(sqrt(a - b) + sqrt(c*(d - e)) / (sqrt(f^2 - g^2))" << '\n';

   double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0, f = 0.0, g = 0.0;

   cout << "Enter value of a :- " << '\n';
   cin >> a;

   cout << "Enter value of b :- " << '\n';
   cin >> b;

   cout << "Enter value of c :- " << '\n';
   cin >> c;

   cout << "Enter value of d :- " << '\n';
   cin >> d;

   cout << "Enter value of e :- " << '\n';
   cin >> e;

   cout << "Enter value of f :- " << '\n';
   cin >> f;

   cout << "Enter value of g :- " << '\n';
   cin >> g;



  cout << "The answer is : " << '\n';

    cout << '\n' << '\n';

  cout << (sqrt(a - b) + sqrt(c*(d - e))) / (sqrt(pow(f,2) - pow(g,2))) << endl;




     return 0;
}
