#include<bits/stdc++.h>
using namespace std;

double equation(double x)
{
    double fx = 3*x-cos(x)-1;
    return fx;
}

void solve()
{
    double a=0, b=1, c, root[100],functionOfa,functionOfc;
    int i, j, maxiteration=100, index;
    bool isRootFinded = false;

    for(i=0; i<maxiteration; i++)
    {
        c=(a+b)/2;
        root[i]=c;
        if(i>0)
        {
            for(j=i-1; j>=0; j--)
            {
                if(root[i]==root[j])
                {
                    isRootFinded = true;
                    index = j;
                    break;
                }
            }
        }
        if(isRootFinded == true) break;
        functionOfa = equation(a);
        functionOfc = equation(c);
        if(functionOfa*functionOfc<=0) b = c;
        else a = c;

    }
    cout<<"Equation is 3*x-cos(x)-1.\nGiven range is a = -100 and b = 100\n"<<endl;
    if(isRootFinded==true) cout<<"Root = "<<root[index]<<endl;
    else cout<<"Root is not present in the given range"<<endl;
}

int main()
{
    int t;
    cout<<"Test Cases : ";
    cin>>t;
    cout<<endl;
    while(t--)
    {
        solve();
    }

    return 0;
}

