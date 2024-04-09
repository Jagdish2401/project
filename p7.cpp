#include<iostream>
using namespace std;

class complex
{
    float r,i;
    public:
    void getdata()
    {
        cout<<"enter a real number:"<<endl;
        cin>>r;
        cout<<"enter a imagnary number:"<<endl;
        cin>>i;
    }
    void display_data()
    {
        if(i>=0)
            cout<<r<<"+"<<i<<"i"<<endl;
        else
            cout<<r<<i<<"i"<<endl;
    }
    complex operator +(complex &x)
    {
        complex temp;
        temp.r=r+x.r;
        temp.i=i+x.i;
        return temp;
    }
    complex operator -(complex &x)
    {
        complex temp;
        temp.r=r-x.r;
        temp.i=i-x.i;
        return temp;
    }
    complex operator *(complex &x)
    {
        complex temp;
        temp.r=(r*x.r)-(i*x.i);
        temp.i=(r*x.i)+(i*x.r);

        return temp;
    }
    complex operator /(complex &x)
    {
        complex temp;
        temp.r=((r*x.r)+(i*x.i))/((x.r*x.r)+(x.i*x.i));
        temp.i=((i*x.r)-(r*x.i))/((x.r*x.r)+(x.i*x.i));

        return temp;
    }
    complex operator !()
    {
        complex temp;
        temp.r=-r;
        temp.i=-i;
        return temp;
    }
};

int main()
{
    char ch;
    complex o1,o2,o3;
    o1.getdata();
    o2.getdata();
    cout<<"choose operation ......";
    cout<<"\n (+)Addition";
    cout<<"\n (-)Subtraction";
    cout<<"\n (*)Multiplication";
    cout<<"\n (/)Division";
    cout<<"\n (!)Negation";
    cout <<"\n Enter Your Choice : ";
    cin>>ch;
    switch (ch)
    {
    case '+':
        o3=o1+o2;
        o3.display_data();
        break;
    case '-':
        o3=o1-o2;
        o3.display_data();
        break;
    case '*':
        o3=o1*o2;
        o3.display_data();
        break;
    case '/':
        o3=o1/o2;
        o3.display_data();
        break;
    case '!':
        o1=!o1;
        o1.display_data();
        o2=!o2;
        o2.display_data();
        break;
    default:
        break;
    }
    return 0;
}
