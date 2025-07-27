//公有成員的隱患
#include <iostream>
using namespace std;

class Cwin
{
    public:
        char id = 'A';
        int width = 60;
        int height = 48;

        int area()
        {
            return width * height;
        }

        void show_area()
        {
            cout << "Window " << id << ", area = " << area() << endl;
        }
};

int main()
{
    Cwin win1;

    win1.height = -10;  //假設不小心更改了不合理高度
    win1.show_area();   //-600

    return 0;
}