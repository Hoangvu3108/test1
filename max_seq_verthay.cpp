#include <stdio.h>
#define MAX 1000
#define INPUT_PATH "input_x"
int a[MAX];
int n;
//void read_input(){
//FILE *f = fopen(INPUT_PATH, "r");
//fscanf(f, "%d", &n);
//for(int i = 0;i < n; i++){
//fscanf(f, "%d", &a[i]);
//}
//fclose(f);
//}
int find_max_subseq(){
int tracing_back[n + 1];
int max_sum = -1e10;
int csum = a[0];
int max_idsum;
for(int k = 1; k <n ; k++){
if(csum <0){
csum = 0;
tracing_back[k] = -1;
}
else{
tracing_back[k] = k-1;
}
csum += a[k];
if (csum > max_sum){
max_sum = csum;
max_idsum = k;
}
}
while (1){
if (tracing_back[max_idsum] != -1){
printf("%d ", a[max_idsum ]);
max_idsum = tracing_back[max_idsum];
}
else{
printf("%d ",a[max_idsum ]);
break;
}
}
return max_sum;
}
int main(){
//read_input();
  int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

find_max_subseq();
return 1;
}
