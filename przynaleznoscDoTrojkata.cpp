#include <bits/stdc++.h>

using namespace std;

struct punkt{
    int x;
    int y;
};

int wyznacznik(int a, int b, int c, int d, int e, int f){
    return a * d + c * f + e * b - e * d - c * b - a * f;
}

int main(){
    punkt A, B, C, D;
    punkt w;
    string pkt;
    int ile, maxx, maxy, minx, miny;
    bool p = false, d = false, t = false, ab, bc, ac;
    cin >> ile;
    for(int i = 0; i < ile; i++){
        cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
        w.y = max(max(A.y, B.y), C.y);
        if(A.y == w.y){
            w.x = A.x;
            pkt = "A";
        }
        else if(B.y == w.y){
            w.x = B.x;
            pkt = "B";
        }
        else if(C.y == w.y){
            w.x = C.x;
            pkt = "C";
        }
        if((pkt == "A") && (B.x < C.x)){
            if((wyznacznik(B.x, B.y, C.x, C.y, D.x, D.y) > 0) && (wyznacznik(B.x, B.y, A.x, A.y, D.x, D.y) < 0) && (wyznacznik(C.x, C.y, A.x, A.y, D.x, D.y) > 0)){
                cout << "TAK" << "\n";
            }
            else{
                cout << "NIE" << "\n";
            }
        }
        else if((pkt == "A") && (B.x > C.x)){
            if((wyznacznik(B.x, B.y, C.x, C.y, D.x, D.y) < 0) && (wyznacznik(B.x, B.y, A.x, A.y, D.x, D.y) > 0) && (wyznacznik(C.x, C.y, A.x, A.y, D.x, D.y) < 0)){
                cout << "TAK" << "\n";
            }
            else{
                cout << "NIE" << "\n";
            }
        }
        else if((pkt == "B") && (A.x < C.x)){
            if((wyznacznik(A.x, A.y, C.x, C.y, D.x, D.y) > 0) && (wyznacznik(A.x, A.y, B.x, B.y, D.x, D.y) < 0) && (wyznacznik(C.x, C.y, B.x, B.y, D.x, D.y) > 0)){
                cout << "TAK" << "\n";
            }
            else{
                cout << "NIE" << "\n";
            }
        }
        else if((pkt == "B") && (A.x > C.x)){
            if((wyznacznik(A.x, A.y, C.x, C.y, D.x, D.y) < 0) && (wyznacznik(A.x, A.y, B.x, B.y, D.x, D.y) > 0) && (wyznacznik(C.x, C.y, B.x, B.y, D.x, D.y) < 0)){
                cout << "TAK" << "\n";
            }
            else{
                cout << "NIE" << "\n";
            }
        }
        else if((pkt == "C") && (A.x < B.x)){
            if((wyznacznik(A.x, A.y, B.x, B.y, D.x, D.y) > 0) && (wyznacznik(A.x, A.y, C.x, C.y, D.x, D.y) < 0) && (wyznacznik(B.x, B.y, C.x, C.y, D.x, D.y) > 0)){
                cout << "TAK" << "\n";
            }
            else{
                cout << "NIE" << "\n";
            }
        }
        else if((pkt == "C") && (A.x > B.x)){
            if((wyznacznik(A.x, A.y, B.x, B.y, D.x, D.y) < 0) && (wyznacznik(A.x, A.y, C.x, C.y, D.x, D.y) > 0) && (wyznacznik(B.x, B.y, C.x, C.y, D.x, D.y) < 0)){
                cout << "TAK" << "\n";
            }
            else{
                cout << "NIE" << "\n";
            }
        }
        else if((wyznacznik(A.x, A.y, B.x, B.y, D.x, D.y) == 0) && (max(A.x, B.x) > D.x) && (max(A.y, B.y) > D.y) && (min(A.x, B.x) < D.x) && (min(A.y, B.y) < D.y)){
            cout << "TAK" << "\n";
        }
        else if((wyznacznik(A.x, A.y, C.x, C.y, D.x, D.y) == 0) && (max(A.x, C.x) > D.x) && (max(A.y, C.y) > D.y) && (min(A.x, C.x) < D.x) && (min(A.y, C.y) < D.y)){
            cout << "TAK" << "\n";
        }
        else if((wyznacznik(B.x, B.y, C.x, C.y, D.x, D.y) == 0) && (max(C.x, B.x) > D.x) && (max(C.y, B.y) > D.y) && (min(C.x, B.x) < D.x) && (min(C.y, B.y) < D.y)){
            cout << "TAK" << "\n";
        }
        else{
            cout << "NIE" << "\n";
        }
    }
}