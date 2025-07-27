//封裝
#include <iostream>
using namespace std;

class Cwin
{
    private :
        char id = 'A';
        int width = 80;
        int height = 48;
    public :
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
    
    win1.show_area();
    //win1.width = 50 將報錯
    return 0;
}