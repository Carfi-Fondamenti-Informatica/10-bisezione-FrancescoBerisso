#include <iostream>
#include <valarray>
#include <cmath>
#include <iomanip>
using namespace std;
float f(float y){
    float x = pow(y, 2) * cos(y) + 1;
    return x;
}
int main(){
    float a = 0, b = 0, x = 0, err = 0;
    do{
        cout << "inserire estremi";
        cin >> a >> b;
    }while(f(a) * f(b) >= 0);
    do{
        x = (a + b) / 2;
        if(f(x) == 0){
            cout << setprecision(4) << x << endl;
            cout << setprecision(4) << f(x) << endl;
        }
        else{
            if(f(a) * f(b) < 0){
                b = x;
            }
            else{
                a = x;
            }
            err = abs((b - a) / 2);
        }
    }while(err >= 1 * pow(M_E, -6));
    cout << setprecision(4) << x << endl;
    cout << setprecision(4) << f(x) << endl;
    return 0;
}
