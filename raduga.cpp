#include "raduga.h"
#include<iostream>
using namespace std;

vector::vector(long double x, long double y)
{
    this->x = x;
    this->y = y;
}

point::point(long double x, long double y)
{
    this->x = x;
    this->y = y;
}




raduga::raduga(long double b, long double R, long double L)
{
    this->b = b;
    this->R = R;
    this->L = L;
}

void raduga::beam(long double& px1, long double& py1, long double& px2, long double& py2,
    long double& px3, long double& py3, long double& px4, long double& py4)
{

    long double rad = 3.141592 / 180, p = 3.141592, n1 = 1, as1, as2, bnR, a1, a2, ksi, n2;
    n2 = 1.322 + 3905 / (L * L);
    as1 = asin(b / R);
    bnR = b / (n2 * R);
    as2 = asin(bnR);
    ksi = -2 * as1 + 4 * as2;
    a1 = atan(b / sqrt(R * R - b * b));
    a2 = asin(sin(a1) / n2);
    py1 = b;
    px1 = (-sqrt(R * R - b * b));



    ////////Этап 1 - нахождения координаты падения на внутреннюю стенку окружности преломленного луча
    point K(0, 0), Oc(0, 0), C(0, 0), lo(0, 0);
    K.x = -2 * R;
    K.y = b;
    C.x = -(sqrt(R * R - b * b));
    C.y = b;


    vector O(0, 0), S(0, 0), Ss(0, 0);
    S.x = C.x - K.x;
    S.y = C.y - K.y;
    O.x = Oc.x - C.x;
    O.y = Oc.y - C.y;
    long double On, Sn;
    On = (sqrt(O.x * O.x + O.y * O.y));
    Sn = (sqrt(S.x * S.x + S.y * S.y));

    O.x = O.x / On;
    O.y = O.y / On;
    S.x = S.x / Sn;
    S.y = S.y / Sn;

    long double OS, G;
    OS = sqrt(O.x * O.x * S.x * S.x + O.y * O.y * S.y * S.y);
    G = (sqrt((n2 * n2) - (n1 * n1) + (OS * OS))) - OS;
    Ss.x = S.x + G * O.x;
    Ss.y = S.y + G * O.y;
    


    long double x, y, x2, D, k, t, c, d, longb;

    k = Ss.y / Ss.x;
    t = -C.x * Ss.y / Ss.x + C.y;
    D = (4 * k * k * t * t) - 4 * (1 + k * k) * (t * t - R * R);
    x2 = (-2 * k * t + sqrt(D)) / (2 * (k * k + 1));
    x = x2;
    y = k * x + t;
    Ss.x = x;
    Ss.y = y;
    px2 = x;
    py2 = y;

    ///////"Этап 2 - нахлждения координаты пересечения окружности отраженным лучем///////
    K.x = Ss.x;
    K.y = Ss.y;
    lo.x = -(sqrt(R * R - b * b));
    lo.y = b;
    point ot(0, 0), ot2(0, 0);
    ot.x = lo.x - K.x;
    ot.y = lo.y - K.y;
    ot2.x = ot.x * cos(a2 * 2) - ot.y * sin(a2 * 2);
    ot2.y = ot.x * sin(a2 * 2) + ot.y * cos(a2 * 2);
    ot.x = ot2.x + K.x;
    ot.y = ot2.y + K.y;

    px3 = ot.x;
    py3 = ot.y;

    ////////"Этап 3 - нахождения вылетившего вектора из капли///////////

    K.x = ot.x;
    K.y = ot.y;
    lo.x = -2 * R;
    lo.y = ot.y;
    ot.x = lo.x - K.x;
    ot.y = lo.y - K.y;
    ot2.x = ot.x * cos(ksi) - ot.y * sin(ksi);
    ot2.y = ot.x * sin(ksi) + ot.y * cos(ksi);
    ot.x = ot2.x + K.x;
    ot.y = ot2.y + K.y;

    ot2.x = ot.x - px3;
    ot2.y = ot.y - py3;
    ot2.x = ot2.x * 100 + px3;
    ot2.y = ot2.y * 100 + py3;




    px4 = ot2.x;
    py4 = ot2.y;


}
