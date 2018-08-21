#include <iostream>
#include <unistd.h>

using namespace std;

class Car
{
public:
    Car(string c = "red",string b = "redflag",float o=0)
        :color(c),brand(b),oil(o){}


    void addGas(float oilMount)
    {
        oil += oilMount;
    }


    void run()
    {
        while(1)
        {
            if(oil > 0)
            {
                cout<<"running ........."<<oil<<endl;
                sleep(1);
                oil -= 10;
            }
            else
            {
                cout<<"need add gas"<<endl;
                break;
            }
        }
    }


private:
    string color;
    string brand;
    float  oil;
};

int main()
{
    Car c;
    c.addGas(200);
    c.run();
    return 0;
}
