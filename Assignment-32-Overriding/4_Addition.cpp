#include <iostream>
using namespace std;

class Addition
{
    private:
        double x,y,z;
        double sum=0;
    public:
        int add(int x,int y){
            this->x = x;
            this->y = y;
            sum = x+y;
            return sum;
        }
        double add(double x,int y){
            this->x = x;
            this->y = y;
            sum = x+y;
            return sum;
        }
        double add(int x,double y){
            this->x = x;
            this->y = y;
            sum = x+y;
            return sum;
        }
        double add(double x,double y){
            this->x = x;
            this->y = y;
            sum = x+y;
            return sum;
        }
        int add(int x,int y, int z){
            this->x = x;
            this->y = y;
            this->z = z;
            sum = x+y+z;
            return sum;
        }
        double add(double x,double y, double z){
            this->x = x;
            this->y = y;
            this->z = z;
            sum = x+y+z;
            return sum;
        }
};
int main()
{
    Addition add;
    cout<<"Sum is : "<<add.add(10,15)<<endl;
    cout<<"Sum of three number is : "<<add.add(4,5,6)<<endl;
    cout<<"Sum is : "<<add.add(10.6,15)<<endl;
    cout<<"Sum of three number is : "<<add.add(4.6,5.7,6.9)<<endl;
    cout<<"Sum is : "<<add.add(10.7,15.9)<<endl;
    cout<<"Sum is : "<<add.add(4,5.6)<<endl;
    
    return 0;
}