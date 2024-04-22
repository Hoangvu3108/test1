#include <stdio.h>

#define MAX 1000
float cost_matrix[MAX][MAX];
int n;
int itinerary[MAX];
int visited[MAX];
void init(){
for(int i = 1; i <= n; i++){

visited[i] = 0;

}

}
int check(int v, int k){
return 1 - visited[v];

}
void solution(){
for (int i = 1; i <= n ; i++){

printf("%d ", itinerary[i]);

}

printf("\n");

}
void Try(int k){
for(int v = 1; v <= n; v++){
if(check(v,k)){

itinerary[k] = v;

visited[v] = 1;
if(k==n){

solution();

}
else{

Try(k+1);

}

visited[v] = 0;

}

}

}
int main(){

init();

scanf("%d", &n);

Try(1);
return 0;

}

