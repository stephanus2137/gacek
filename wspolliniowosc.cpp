//gacek

#include <iostream>

using namespace std;

struct punkt{
    int x, y;
};

int wzn;
punkt A, B, C;

int wyznacznik(int a, int b, int c, int d, int e, int f){
    return a * d + c * f + e * b - e * d - c * b - a * f;
}

int main(){
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    wzn = wyznacznik(A.x, A.y, B.x, B.y, C.x, C.y);
    if(wzn == 0){
        cout << "tak" << "\n";
        if((min(A.x, B.x) <= C.x) && (max(A.x, B.x) >= C.x) && (min(A.y, B.y) <= C.y) && (max(A.y, B.y) >= C.x)){
            cout << "lezy na prostej AB" << "\n";
        }
        else{
            cout << "nie lezy na prostej AB" << "\n";
        }
    }
    else{
        cout << "nie" << "\n";
    }

    return 0;
}