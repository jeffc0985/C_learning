//建構元的多載
#include <iostream>
using namespace std;

class Cwin
{
    private :
        char id;
        int height, width;
    public :
        Cwin(char i, int w, int h)
        {
            id = i;
            width = w;
            height = h;
            cout << "Cwin(char i, int w, int h)被呼叫了..." << endl;
        }

        Cwin()
        {
            id = 'Z';
            width = 100;
            height = 100;
            cout << "Cwin()被呼叫了..." << endl;
        }

        void show_member()
        {
            cout << "Window " << id << ": ";
            cout << "width = " << width << ", height = " << height << endl;
        }
};

int main()
{
    Cwin win1('A',80,48);
    Cwin win2;      //注意沒有引數不可加括號 Cwin win2();

    win1.show_member();
    win2.show_member();

    return 0;
}