#include<bits/stdc++.h>
using namespace std;
int main(){
char a[] = "abcdebfghcd";
int n = strlen(a);
int cur_len = 1;
int max_len = 1;
int last_occ;
int visited[256];
for(int i=0;i<26;i++){
visited[i] = -1;
}
visited[a[0]-'a'] = 0;
for(int i=1;i<n;i++){
last_occ = visited[a[i]-'a'];
if(last_occ==-1 || i-cur_len>last_occ){
cur_len++;
max_len = max(max_len,cur_len);
}
else{
max_len = max(max_len,cur_len);
cur_len = i - last_occ;
}
visited[a[i]-'a'] = i;
}
max_len = max(max_len,cur_len);
cout<<max_len<<endl;
return 0;
}
