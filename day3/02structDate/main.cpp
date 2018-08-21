#include <iostream>

using namespace std;

struct Date
{
    void init()
    {
//        year = 2017;
//        month = 1;
//        day = 1;
        cin>>year>>month>>day;
    }
    void disDate()
    {
         cout<<"year:"<<year<<" month:"<<month<<" day:"
            <<day<<endl;
    }
    bool isLeapYear()
    {
        if((year%4==0&&year%100 !=0)||year%400 ==0)
        {
            return true;
        }
        else
            return false;
    }

    int year;
    int month;
    int day;
};


int main()
{
    Date d2;
    d2.init();
    d2.disDate();

    if(d2.isLeapYear())
        cout<<"LeapYear"<<endl;
    else
        cout<<"is not LeapYear"<<endl;

}

//%4 && !%100  || %400


int main1()
{
    Date d;    //Date d2;
    d.init();
    d.disDate();
    if(d.isLeapYear())
    {
        cout<<"Leap Year"<<endl;
    }
    else
        cout<<"not Leap Year"<<endl;

    return 0;
}
