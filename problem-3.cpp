#include<iostream>
using namespace std;

class Factorial{
    private:
        int fact;
        int number;
    public:
        Factorial()
        {
            fact=1;
        }
        void set_data(int f)
        {
            number=f;
            cal();
        }
        void cal(void)
        {
            for(int i=1;i<=number;i++)
            {
                fact=fact*i;
            }
        }
        int get_data(void)
        { 
            return number;
        }
        int get_fact(void)
        {
            return fact;
        }
};

int main()
{
    Factorial f1,f2;
    f1.set_data(5);
    f2.set_data(6);
    cout<<"Factorail of "<<f1.get_data()<<" is "<<f1.get_fact()<<endl;
    cout<<"Factorail of "<<f2.get_data()<<" is "<<f2.get_fact()<<endl;
}