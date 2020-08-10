#include <iostream>
#include <cmath>
#include <conio.h>
 
using namespace std;
 
int main()
{
int x1, x2,x3, y1, y2, y3, z1, z2, z3;
double AB, BC, AC,ab,bc,ac, p, s, S;
 
cout << "x1: ";
cin >> x1;
cout << "x2: ";
cin >> x2;
cout << "x3: ";
cin >> x3;
 
cout << "y1: ";
cin >> y1;
cout << "y2: ";
cin >> y2;
cout << "y3: ";
cin >> y3;
 
cout << "z1: ";
cin >> z1;
cout << "z2: ";
cin >> z2;
cout << "z3: ";
cin >> z3;
 
 
    AB = ((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
    ab = sqrt(AB);
 
    BC = ((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3)+(z2-z3)*(z2-z3));
    bc = sqrt(BC);
 
    AC = ((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)+(z1-z3)*(z1-z3));
    ac = sqrt(AC);
 
    p = ((ab + ac + bc)/3);
 
    S = ((p - AB) * (p - AC) * ( p - BC ) * p);
 
    s = sqrt(S);
 
    cout << "S = " << s << endl;
 
return 0;
}
