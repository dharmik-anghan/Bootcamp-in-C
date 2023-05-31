#include <iostream>
#include <string>

using namespace std;

class Item
{
    public:
        int item_no;
        string item_name;
        int item_price;

};

class Discount : public Item
{
    public:
        int discount_percent, discounted_price;

        int getDisPrice()
        {
            return discounted_price;
        }
        int getItemPrice()
        {
            return item_price;
        }

        void accept()
        {
            cout<<"Enter Item Name : ";
            cin.ignore();
            getline(cin, item_name);
            cout<<endl;
            cout<<"Enter Item No : ";
            cin>>item_no;
            cout<<endl;
            cout<<"Enter Item Price : ";
            cin>>item_price;
            cout<<endl;
            cout<<"Enter Discount Percent : ";
            cin>>discount_percent;
            cout<<"-------------------------------------"<<endl;
        }

        void display()
        {
            discounted_price =  (discount_percent*item_price)/100;
            cout<<"Item Name : ";
            cout<<item_name;
            cout<<endl;

            cout<<"Item No : ";
            cout<<item_no;
            cout<<endl;

            cout<<"Item Price : ";
            cout<<item_price;
            cout<<endl;

            cout<<"Discount Percent : ";
            cout<<discount_percent;
            cout<<endl;

            cout<<"Discount Price : ";
            cout<<item_price - discounted_price;
            cout<<endl;

            cout<<"-------------------------------------"<<endl;
        }
};

int main()
{
    int n, total_price =0, total_discount=0;
    cout<<"How many items you want to enter? : ";
    cin>>n;
    Discount *itemDis = new Discount[n];

    for(int i = 0; i < n;i++)
    {
        itemDis[i].accept();
    }
    for(int i = 0; i < n;i++)
    {
        itemDis[i].display();
    }
    for(int i = 0; i < n;i++)
    {
        total_price = total_price + itemDis[i].getItemPrice();
                
        total_discount = total_discount + itemDis[i].getDisPrice();
    }
    
    cout<<"Total Price : ";
    cout<<total_price;
    cout<<endl;

    cout<<"Total Discount : ";
    cout<<total_discount;
    cout<<endl;

    cout<<"Payable Amount : ";
    cout<<total_price-total_discount;
    cout<<endl;

    delete[] itemDis;
    return 0;
}