#include <iostream>
#include <cmath>
using namespace std;
double triangleArea(double x, double y, double z)
{
    double area;
    double s = (x+y+z)/2;
    if(x+y>z && y+z>x && x+z >y)
        area = sqrt(s*(s-x)*(s-y)*(s-z));
    else
        throw -1;
    return area;
}
int main()
{
    int a, b,c;
    float area;
    try{
        while(1)
        {
            cin>>a>>b>>c;
            if(a>0&&b>0&&c>0)
            {
                area = triangleArea(a,b,c);
                cout<<"Area:"<<area<<endl;
            }
        }
    }catch(double e){
        cout<<"输入的三角形不合法"<<endl;
    }
    catch(...){
        cout<<"捕猎到了未知异常"<<endl;
    }
    cout<<"main over"<<endl;
    return 0;
}
