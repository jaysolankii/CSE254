#include<bits/stdc++.h>
using namespace std;


int main(){
int n,m;
cout<<"Enter n: ";
cin>>n;
cout<<"Enter m: ";
cin>>m;
int a[n],b[m],c[n+m];
cout<<"enter array a: ";
for(int i=0;i<n;i++){
    cin>>a[i];}
cout<<"enter array b: ";
for(int i=0;i<m;i++){
    cin>>b[i];}

int j=0,k=0;
for(int i=0;i<n+m;i++){
    if(j>=n){
c[i]=b[k];
k++;
continue;}
if(k>=m){
c[i]=a[j];
j++;
continue;}

if(a[j]>b[k]){
 c[i]=b[k];
 k++;}
 else if(a[j]<=b[k]){
 c[i]=a[j];
 j++;}}
 
for(int i=0;i<n+m;i++){
 cout<<c[i]<<" ";}

return 0;}