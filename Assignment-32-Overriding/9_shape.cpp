#include <iostream>
#include <math.h>
using namespace std;

class Area
{   
    protected:
        float areaOfTriangle =0, areaOfRectangle = 0,areaOfCircle = 0;
    public:
        Area(){

        }
        Area(int length, int width){
            areaOfRectangle = length*width;
        }
        Area(int radius){
            areaOfCircle = 3.14*radius*radius;
        }
        Area(int a, int b, int c){
            float s = (a+b+c)/2.0;
            areaOfTriangle = sqrt(s*(s-a)*(s-b)*(s-c));
        }
        void displayTri(){
            if(areaOfTriangle == 0)
                cout<<"This is not valid triangle"<<endl;
            else
                cout<<"Area of triangle : "<<areaOfTriangle<<endl;
        }
        void displayCir(){
            cout<<"Area of Circle : "<<areaOfCircle<<endl;
        }
        void displayRec(){
            cout<<"Area of Rectangle : "<<areaOfRectangle<<endl;
        }

};

int main()
{
    while(true){
        cout<<"1. Calculate the area of triangle.\n";
        cout<<"2. Calculate the area of rectangle.\n";
        cout<<"3. Calculate the area of Circle.\n";
        cout<<"4. Exit.\n";
        cout<<"Enter your choice : ";
        int choice;
        cin>>choice;
        system("cls");
        
        if(choice == 1){
            cout<<"Enter the value of edges : ";
            int a,b,c;
            cin>>a>>b>>c;
            Area a1(a,b,c);            
            a1.displayTri();
        
        }
        else if(choice == 2){
            cout<<"Enter the value of length and width : ";
            int x,y;
            cin>>x>>y;
            Area a2(x,y);            
            a2.displayRec();
        }
        else if(choice == 3){
            cout<<"Enter the value of length and width : ";
            int x;
            cin>>x;
            Area a3(x);            
            a3.displayCir();
        }
        else if(choice == 4){
            exit(0);
        }
        else{
            cout<<"Enter Valid KEY Plzzz...\n";
        }
    }

    return 0;
}