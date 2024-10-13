#include <iostream>
using namespace std;

int somma(int n1,int n2){
    int somm;
    somm=n1+n2;
    return somm;
}

int sottrazione (int n1, int n2){
    int sot;
    sot= n1-n2;
    return sot;
}

int moltiplicazione (int n1, int n2){
    int molt;
    molt=n1*n2;
    return molt;
}

float divisione (float n1, float n2){
    float div;
    div= n1/n2;
    return div;
}

int main() {
    int a, v, somm;
    string c;

    v = 0;
    cout << v << endl;
    cin >> c;
    while (c != "x") {
        while (c == "r") {
            v = 0;
            cout << v << endl;
            cin >> c;
        }
        cin >> a;
        if (c == "+") {
            v = somma(v, a);
        }
        if (c == "-") {
            v = sottrazione(v, a);
        }
        if (c == "/") {
            v = divisione(v, a);
        }
        if (c == "*") {
            v = moltiplicazione(v, a);
        }
        cout << v << endl;
        cin >> c;
    }
    return 0;
}