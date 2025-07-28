//建構元
#include <iostream>
using namespace std;

class Cwin
{
    private :
        char id;
        int width, height;
    public :
        Cwin (char i, int w, int h) //可視為一種特殊的函數,用以初始化成員
        {
            id = i;
            width = w;
            height = h;
            cout << "建構元被呼叫了..." << endl;
        }

        void show_data()
        {
            cout << "Window " << id << ", width = " << width;
            cout << ", height = " << height << endl;
        }

};

int main()
{
    Cwin win1('A',100,80);
    Cwin win2('B',60,48);

    win1.show_data();
    win2.show_data();

    return 0;
}