#include <iostream>

using namespace std;
int main() {
    int n;
    cin>>n;
    int p_inv[n+1];
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        p_inv[k]=i;
    }
    for(int i=1;i<=n;i++)cout<<p_inv[p_inv[i]]<<endl;
    return 0;
}
