//結構(struct)與類別(class)
#include <iostream>
using namespace std;

struct window
{
    char id;
    int width;
    int height;
};
int area(struct window);

int main()
{
    window win1;
    cout << "視窗名稱:";
    cin >> win1.id;
  
    cout << "寬度:";
    cin >> win1.width;
    
    cout << "高度:";
    cin >> win1.height; 

    cout << "視窗" << win1.id << "的面積為:" << area(win1) << endl;

    return 0;
}

int area(struct window win)
{
    return win.width * win.height;
}

