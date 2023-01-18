#include <iostream>
using namespace std;

class Box
{
    private:
        int length, width, hight, vloume;
    public:
        Box()
        {
           
        }
        void input()
        {
            cout<<"Enter Lenth, Width and Hight: "<<endl;
            int l,w,h;

            cin>>l>>w>>h;

            length = l;
            width = w;
            hight = h;
        }
        int getLenth()
        {
            return length;
        }
        int getWidth()
        {
            return width;
        }
        int getHight()
        {
            return hight;
        }

        int getVolume()
        {
            return vloume;
        }
        void calculateVolume()
        {
            vloume = length*width*hight;
        }
};

int main()
{
    Box v1; 

    v1.input();
    v1.calculateVolume();
    cout<<"Volume = "<<v1.getVolume()<<endl;

    return 0;
}