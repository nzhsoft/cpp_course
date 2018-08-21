#include <iostream>

using namespace std;

class Server
{
public:
    Server(char n):_serverName(n){}

    void serveOne()
    {
        if(_openFlag &&_lastSeveredIdx<_turnCount)
        {
            _lastSeveredIdx++;
            cout<<"server "<<_serverName<<"serve for "<<_lastSeveredIdx<<endl;
        }

        if(_lastSeveredIdx >=_turnCount )
            _openFlag = false;
    }

    static int& getTurn()
    {
        return _turnCount;
    }

    static bool stillOpen()
    {
        return _openFlag;
    }


private:
    char _serverName;
    static  int  _turnCount;
    static  bool _openFlag;
    static  int  _lastSeveredIdx;
};
int Server::_turnCount = 0;
bool Server::_openFlag = true;
int  Server::_lastSeveredIdx = 0;

int main()
{
    Server a('A'),b('B'),c('C');
    cout<<"how many people int group:";
    int num;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        cout<<"idx:"<<++Server::getTurn()<<endl;
    }
    do
    {

        a.serveOne();
        b.serveOne();
        c.serveOne();
    } while(Server::stillOpen());


    return 0;
}
