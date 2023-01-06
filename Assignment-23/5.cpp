#include <iostream>

using namespace std;

int main()
{
    float height, length, width, volume;

    cout<<"Enter Height, Length, Width"<<endl;
    cin>>height;
    cin>>length;
    cin>>width;

    volume = height*length*width;

    cout<< "Volume = " << volume << " units(cube)"<<endl;


    return 0;
}