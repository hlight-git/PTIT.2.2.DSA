#include<bits/stdc++.h>
using namespace std;
#define setIO() ios::sync_with_stdio(false); cin.tie(0);
#define all(a) a.begin(),a.end()
#define fill(x,b) memset((x),b,sizeof((x)))
#define fill2D(x,r,c,b) memset((x),b, sizeof(x[0][0]) * r * c)
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<ii> vpii;
int test = 1 , MULTI_TEST = 1; 

void Input(){
  
}   
void Solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++) cin >> a[i];
	sort(a,a+n);
    int res = n , mid = n/2;
    for(int i = 0; i < n/2 && mid < n; i++ ){
        while(mid < n){
            if(2*a[i] <= a[mid]){
                res--;
                mid++;
                break;
            }
            else mid++;
        }
	}
    cout<< res << '\n';
}
int main(){
    setIO();
    if(MULTI_TEST == 1) cin >> test;
    for(int i = 1 ; i <= test ; i++){Input(); Solve();}
    return 0;
}