#include "headers.h"

int main()
{
       cout << "Enter values in the form of : " << '\n';

    cout << "(a + sqrt(b - (c * d) * (-e))) / f" << '\n';


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

     cout << '\n' << '\n';

    cout << "The answer is : " << (a + sqrt(b - (c * d) * (e))) / f << endl;




      return 0;
}
