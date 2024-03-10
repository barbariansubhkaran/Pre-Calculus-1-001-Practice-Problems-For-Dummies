#include "headers.h"

int main()
{
      cout << "Enter values in the form of " << '\n';

      cout << "(sqrt(a^2 + (b * c))) / | d + e | " << '\n';

      double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0;

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



      cout << "The answer is : " << (sqrt( pow(a,2) + (b * c))) / double(abs( d + e)) << endl;






    return 0;
}
