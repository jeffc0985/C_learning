//類別內函數的相互呼叫
#include <iostream>
using namespace std;

class Cwin
{
    public :
        char id;
        int width;
        int height;

        int area()
        {
            return width * height;
        }

        void show()
        {
            cout << "Window " << id <<", area = " << area() << endl;
        }
};

int main()
{
    Cwin win1;
    win1.id = 'A';
    win1.width = 60;
    win1.height = 48;
    
    win1.show();

    return 0;
}