#include<iostream>
#include <vector>
using namespace std;


int map[1001][1001]={0,};

int main()
{
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

    int n,m;
    int max_len=0;
    cin>>n>>m;

    for(int i =1;i<=n;i++)
    {
        string line; cin>>line;
        for(int j =0;j<line.length();j++)
        {
            map[i][j+1]=line[j]-'0';
        }
    }


    for(int i = 1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(map[i][j]!=0)
            {
                map[i][j]=min(map[i-1][j-1],min(map[i][j-1],map[i-1][j]))+1;
                if(max_len<map[i][j])max_len=map[i][j];
            }
        }
    }
    

    cout<<max_len*max_len<<endl;
    
     
}