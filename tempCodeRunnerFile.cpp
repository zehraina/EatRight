#incldue <"bits/stdc++.h">
using namespace std;

int main(){

    int candidate=-1;
    int vote=0;
    int arr[]={9, 9, 5, 9, 4, 9, 9, 3, 2, 9};
int n=10;

for (int i=0;i<n;i++){
    
    if (vote==0){
        candidate=arr[i];
    }
    
    else if (candidate==arr[i]){
        vote++;
    }
    
    else
    vote--;
}

int c=0;
for (int i=0;i<n;i++){
    if (arr[i]==candidate){
        c++;
    }
}

if (c>n/2) cout<<candidate;
else cout<<-1;


}

