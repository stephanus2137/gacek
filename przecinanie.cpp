//gacek

#include <iostream>

using namespace std;

struct punkt{
    int x;
    int y;
};

int wyznacznik(int a, int b, int c, int d, int e, int f){
    return a * d + c * f + e * b - e * d - c * b - a * f;
}

int main(){
    int ile, wzn;
    bool pc = false, pd = false;
    cin >> ile;
    punkt A, B, C, D;
    for(int i = 0; i < ile; i++){
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
        wzn = wyznacznik(A.x, A.y, B.x, B.y, C.x, C.y);
        if((wzn == 0) && (min(A.x, B.x) <= C.x) && (max(A.x, B.x) >= C.x) && (min(A.y, B.y) <= C.y) && (max(A.y, B.y) >= C.x)){
            cout << "TAK";
        }
        else{
            if(wzn > 0){
                pc = true;
            }
            wzn = wyznacznik(A.x, A.y, B.x, B.y, D.x, D.y);
            if((wzn == 0) && (min(A.x, B.x) <= D.x) && (max(A.x, B.x) >= D.x) && (min(A.y, B.y) <= D.y) && (max(A.y, B.y) >= D.x)){
                cout << "TAK" << "\n";
            }
            else{
                if(wzn > 0){
                    pd = true;
                }
                if((pc == true) && (pd == false)){
                    cout << "TAK" << "\n";
                }
                else if((pc == false) && (pd == true)){
                    cout << "TAK" << "\n";
                }
                else{
                    cout << "NIE" << "\n";
                }
            }
        }
    }
}