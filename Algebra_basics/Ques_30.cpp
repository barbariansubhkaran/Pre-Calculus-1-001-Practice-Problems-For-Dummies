#include "headers.h"

int main()
{
      cout << "Enter values in the form of :- " << '\n';
      cout << "|a^2 - b^2| - |c^2 - d^2| / (e^2 - f^2)^2" << '\n';



      double a = 0.0, b = 0.0, c = 0.0, d = 0.0, e = 0.0, f = 0.0;

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


      cout << "The answer is : " << '\n';

        double x = pow(a,2);

        double y = pow(b,2);
        double z = pow(c,2);
        double u = pow(d,2);
        double v = pow(e,2);
        double w = pow(f,2);

        double t = v - w;





        cout << ((double(abs(x -y))) - (double (abs(z - u))) )/ (pow(t,2)) << endl;;




      return 0;
}
