#include<iostream>
#include<vector>
using namespace std;

string men [] = {"A", "B", "C", "D", "E", "F"};
string women [] = {"1", "2", "3", "4", "5", "6", "7", "8"};
vector<string> v;

int main()
{
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<8; j++)
        {
            v.push_back(men[i] + women[j]);
//          cout<<men[i] + women[j]<<endl;
        }
    }
    int br=0;

    for(int i1=0; i1<v.size(); i1++)
    {
        for(int i2=i1+1; i2<v.size(); i2++)
        {
            if(v[i1][0]==v[i2][0]||v[i1][1]==v[i2][1])
                continue;
            for(int i3=i2+1; i3<v.size(); i3++)
            {
                if(v[i1][0]==v[i3][0]||v[i1][1]==v[i3][1])
                    continue;
                if(v[i2][0]==v[i3][0]||v[i2][1]==v[i3][1])
                    continue;
                for(int i4=i3+1; i4<v.size(); i4++)
                {
                    if(v[i1][0]==v[i4][0]||v[i1][1]==v[i4][1])
                        continue;
                    if(v[i2][0]==v[i4][0]||v[i2][1]==v[i4][1])
                        continue;
                    if(v[i3][0]==v[i4][0]||v[i3][1]==v[i4][1])
                        continue;

                    cout<<v[i1]<< " "<<v[i2]<< " "<<v[i3]<< " "<<v[i4]<< " "<<endl;
                    br++;

                }
            }
        }

    }

    cout<<br<<endl;

}
