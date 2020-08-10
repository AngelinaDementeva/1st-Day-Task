#include <iostream>
using namespace std;

int product(int Px, int Py, int Ax, int Ay, int Bx, int By)
{
  return (Bx - Ax) * (Py - Ay) - (By - Ay) * (Px - Ax);
}

int main()
{
  int x, y, x1, y1, x2, y2, x3, y3, x4, y4;
  std::cin >> x >> y >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  int 
    p1 = product(x, y, x1, y1, x2, y2),
    p2 = product(x, y, x2, y2, x3, y3),
    p3 = product(x, y, x3, y3, x4, y4),
    p4 = product(x, y, x4, y4, x1, y1);

  if ((p1 < 0 && p2 < 0 && p3 < 0 && p4 < 0) ||
      (p1 > 0 && p2 > 0 && p3 > 0 && p4 > 0))
    std::cout << "Vhodit" << std::endl;
  else
    std::cout << "Ne vhodit" << std::endl;
}
