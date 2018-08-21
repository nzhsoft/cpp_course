#include <iostream>

using namespace std;

//1,引用是一种，声明关系。不开辟空间，必须要初始化,不能单独存在。
//与被别名的变量拥有相同数据类型。
//2,声明关系，一旦确立，不可变更。
//3,可以对引用，再次引用，也就是对一个变量，可以建立多个引用，此时
//引用间是种平行关系。
//4,辨别&  在=左右，单双目来判断

int main()
{
    int a  = 100;
    int & ra = a;
    cout<<"a = "<<a<<endl;
    cout<<"ra= "<<ra<<endl;
    cout<<"&a  = "<<&a<<endl;
    cout<<"&ra = "<<&ra<<endl;
    cout<<"sizeof(a) = "<<sizeof(a)
        <<"  sizeof(ra) = "<<sizeof(ra)<<endl;

//    int b;
//    int &ra  = b;

    int & xra  = a;
    int & yra  = a;
    int & zra  = yra;


    //&  取地址，按位与，引用

    double mm;
    double & rm = mm;  // = &mm   // a&b


    return 0;
}
