#include<iostream>
using namespace std;

class  Complex 
{
    private:
        int real;
        int img;
    public:
        void set_data(int r,int i)
        {
            real=r;
            img=i;
        }
        void display_data(void)
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main()
{
    Complex c1,c2;
    c1.set_data(12,33);
    c2.set_data(9,100);
    c1.display_data();
    c2.display_data();
    return 0;
}