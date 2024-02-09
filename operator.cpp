#include <iostream>
using namespace std;

int main()
{
    int number_1;
    int number_2;
    float number_3;
    int sum;
    int sub;
    int mul;
    float div;
    float rem;
    float result_1;
    float result_2;
    float result_3;
    float result_4;



    number_1=10;
    number_2=15;
    number_3=20;


    sum=number_1+number_2;
    sub=number_2-number_3;
    mul=number_2*number_3;
    div=number_3/number_2;
    rem=number_2%number_1;

    result_1=number_1%number_2*number_1+number_3;
    result_2=number_1*number_2%number_1+number_3;
    result_3=number_1/number_2+number_1*number_3;//=>10/15+10*20



    cout<<"number_1+number_2:"<<sum<<endl;//25
    cout<<sub<<endl;//-5
    cout<<mul<<endl;//300
    cout<<"number_3/number_2:"<<div<<endl;//1.33
    cout<<"remainder is:"<<rem<<endl;//5
    cout<<result_1<<endl;//120
    cout<<result_2<<endl;//20
    cout<<result_3<<endl;//200

    return 0;
}

