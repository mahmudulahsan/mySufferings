#include<bits/stdc++.h>
using namespace std;

#define mod       1e9+7
#define pi        acos(-1)
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b)  (a/__gcd(a,b))*b
#define ll        long long
#define pb        push_back
#define endl      '\n'
#define yes       cout<<"YES"<<endl
#define no        cout<<"NO"<<endl
#define ios       ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);

int main()
{
    //ios

    int t; cin>>t;
    while(t--){
        int n, m, a, b;
        cin>>n>>m>>a>>b;
        if( (a!=n && b!=m) && (a!=1 && b!=1) ){
            cout<<"1 "<<m<<" "<<n<<" 1"<<endl;
        }
        else if( (a!=1 && b!=m) && (a!=n && b!=1) ){
            cout<<"1 "<<"1 "<<n<<" "<<m<<endl;
        }
        else if( a==1 && b==1 ){
            cout<<"1 "<<m<<" "<<n<<" 1"<<endl;
        }
        else{
            cout<<"1 "<<"1 "<<n<<" "<<m<<endl;
        }
    }
    //cout<<"Case "<<i++<<":"<<" "<<sz<<endl;


    return 0;
}
