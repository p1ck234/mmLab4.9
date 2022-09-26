#include <iostream>
using namespace std;

float f(float x, float y)
{
return x + y;
}

int main()
{
int n = 4;
float a[20][2], b[20], x = 0.0, y = 0.0, x1=0.0, x2 =0.0, max = -100;
a[0][0] = 7; a[0][1] = 5; b[0] = 28;
a[1][0] = -5; a[1][1] = 4; b[1] = 7;
a[2][0] = 1; a[2][1] = 2; b[2] = 5;
a[3][0] = 1; a[3][1] = 3; b[3] = 9;

for(int i=0;i<n;i++)
for(int j =0;j<n;j++)
if (abs(a[i][0] * a[j][1] - a[i][1] * a[j][0]) > 0.001) {
x = (b[i] * a[j][1] - a[i][1] * b[j]) / (a[i][0] * a[j][1] - a[i][1] * a[j][0]);
y = (a[i][0] * b[j] - b[i] * a[j][0]) / (a[i][0] * a[j][1] - a[i][1] * a[j][0]);
int t = 1;
cout << x << " = " << y << " " <<i << " " << j << " " << endl;
for (int k = 0; k < n; k++)
switch (k)
{
case 1:if (a[k][0] * x + a[k][1] * y <= b[k]) t = 0; //знаки из своих уравнений
case 2:if (a[k][0] * x + a[k][1] * y <= b[k]) t = 0;
case 3:if (a[k][0] * x + a[k][1] * y >= b[k]) t = 0;
case 4:if (a[k][0] * x + a[k][1] * y == b[k]) t = 0;
}
cout << t << endl;
if ((t)>max && (f(x, y)) > max) { max = (f(x, y)); x1 = x; x2 = y; }
}
cout << x1 << " " << x2 << " " << max << endl;
}

