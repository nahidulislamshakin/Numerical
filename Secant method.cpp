#include<bits/stdc++.h>
using namespace std;

double equation(double x)
{

    double fx = 3*x-cos(x)-1;
    return fx;
}

void solve()
{
    double a, b, c,d, root[100],functionOfa,functionOfc,functionOfb;
    int i, j, maxiteration=100, index;
    bool isRootFinded = false;

    for(i=1; i<maxiteration; i++)
    {
      //  functionOfa = equation(a);
        //functionOfb = equation(b);


       // c=((a*functionOfb)-(b*functionOfa))/(functionOfb-functionOfa);
        root[0]=0;
        root[1]=1;
        a=root[i];
        b=root[i-1];
          functionOfa = equation(a);
        functionOfb = equation(b);

        root[i+1]=a-(((a-b)*functionOfa)/(functionOfa-functionOfb));
        if(i>0)
        {
            for(j=i; j>=0; j--)
            {
                if(root[i+1]==root[j])
                {
                    isRootFinded = true;
                    index = j;
                    break;
                }
            }
        }
        if(isRootFinded == true) break;
       // functionOfc = equation(c);
       // if(functionOfa*functionOfc<=0) b = c;
       // else a = c;

    }
    cout<<"Equation is 3*x-cos(x)-1.\nGiven range is a = 0 and b = 1\n"<<endl;
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

