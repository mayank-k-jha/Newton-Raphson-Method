#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x[100];x[0]=0;
    float f_x;
    float d_f_x;
    int i=0;
    for(i=1;;i++){
        f_x=pow(i,i)-1000;
        if(f_x>0){break;}
    }
    x[0]=--i;int loc=0;
    for(int j=1;;j++){
        f_x=pow(x[j-1],x[j-1])-1000;
        d_f_x=pow(double(x[j-1]),double(x[j-1]))*(1+log10(x[j-1]));
        x[j]=x[j-1]-(f_x/d_f_x);
        x[j]=(x[j]*10000000)/10000000;
        loc=j;cout<<" " <<j<<" th iterative value "<<x[j]<<"0"<<endl;
        if(x[j-1]==x[j]){break;}
    }
    cout<<"\n Thus Root = "<<x[loc]<<"0";
    return 0;
}
