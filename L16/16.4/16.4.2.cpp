#include <iostream>
using namespace std;

class Cwin      //宣告類別Cwin
{
    public :
        char id;
        int width;
        int height;

        int area()
        {
            return width * height;
        }
};

int main()
{
    Cwin win1;

    win1.id = 'A';
    win1.width = 80;
    win1.height = 60;

    cout << "Window " << win1.id << ":" << endl;
    cout << "area =  " << win1.area() << endl;
    cout << "sizeof(win1) = " << sizeof(win1) << endl;

    return 0;
}