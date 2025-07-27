//利用公有函數存取私有成員
#include <iostream>
using namespace std;

class Cwin
{
    private :
        char id;
        int width;
        int height;
    public :
        int area()
        {
            return width * height;
        }

        void show_area()
        {
            if (area() == 0)    //if input error
                cout << "Window " << id << ", area = NULL" << endl;
            else
                cout << "Window " << id << ", area = " << area() << endl;

        }

        void set_data(char i, int w, int h)
        {
            id = i;

            if (w > 0 && h > 0)
            {
                width = w;
                height = h;
            }
            else    //如果有一個參數小於0
            {
                width = 0;
                height = 0;
                cout << "Input error!" << endl;
            }
        }
};

int main()
{
    Cwin win1, win2;
    
    //win1.set_data('A',80,48);
    win2.set_data('B',-10,90);

    //win1.show_area();
    win2.show_area();

    return 0;
}