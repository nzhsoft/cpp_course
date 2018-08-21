#include <iostream>
using namespace std;

void myswap(int & a, int &b){
    int t = a;
    a = b;
    b = t;
}

void myswap(int * pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}
void myswap(double & a, double &b){
    double t = a;
    a = b;
    b = t;
}
//void myswap(long & a, long &b){
//    long t = a;
//    a = b;
//    b = t;
//}

int main(){
    long a = 2; long b = 3;
    myswap((int*)&a,(int*)&b); //ambiguous
    cout<<a<<b<<endl;
    return 0;
}
