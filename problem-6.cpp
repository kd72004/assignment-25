#include<iostream>
using namespace std;
class Square
{
    private:
        int number;
        int squ;
        static int count;
    public:
        void set_number(int n)
        {
            number=n;
        }

        void cal_squ(void)
        {
            squ=number*number;
            Square::count++;
        }

        int get_number()
        {
            return number;
        }

        int get_square()
        {
            return squ;
        }

        static void count_cal()
        {
            cout<<Square::count<<endl;
        }
};
int Square::count=0;

int main()
{
    Square s1,s2;
    s1.set_number(12);
    s2.set_number(10);
    s1.cal_squ();
    s2.cal_squ();
    cout<<s1.get_number()<<" -> "<<s1.get_square()<<endl;
    cout<<s2.get_number()<<" -> "<<s2.get_square()<<endl;
    Square::count_cal();
}
