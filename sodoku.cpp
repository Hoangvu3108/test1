#include <stdio.h>
#include <stdlib.h>
#define INPUT_PATH "input_sodoku.txt"
int matrix[9][9];
int mark_col[9][10];
int mark_row[9][10];
int mark_square[3][3][10];
int nc = 0;
int empty_cells[82][2];
void init_mark(){
for( int i = 0; i < 9; i++){
for(int v = 1; v <=9; v++){
mark_col[i][v] = 1;
mark_row[i][v] = 1;
}
}
for(int i = 0; i <=2; i++){
for(int j = 0; j <=2; j++){
for(int v = 1; v <= 9 ; v++){
mark_square[i][j][v] = 1;
}
}
}
}
void read_input(){
FILE *fin = fopen(INPUT_PATH, "r");
int v;
for(int r = 0; r < 9; r++){
for(int c = 0; c < 9 ; c++){
fscanf(fin, "%d", &v);
matrix[r][c] = v;
if (v != 0){
mark_col[c][v] = 0;
mark_row[r][v] = 0;
mark_square[r/3][c/3][v] = 0;
}
else{
//v = 0
nc += 1;
empty_cells[nc][0] = r;
empty_cells[nc][1] = c;
}

}
}
}
int check(int v, int k){
int r = empty_cells[k][0];
int c = empty_cells[k][1];
return mark_row[r][v] && mark_col[c][v] && mark_square[r/3][c/3][v];
}
void solution(){
for(int r = 0; r < 9; r++){
for (int c = 0; c < 9; c++){
printf("%d ", matrix[r][c]);
}
printf("\n");
}
}
void Try(int k){
int r = empty_cells[k][0];
int c = empty_cells[k][1];
for(int v = 1; v <= 9; v++){
if(check(v,k)){
matrix[r][c] = v;
mark_row[r][v] = 0;
mark_col[c][v] = 0;
mark_square[r/3][c/3][v] = 0;
if(k==nc){
solution();
}
else{
Try(k+1);
}
mark_row[r][v] = 1;
mark_col[c][v] = 1;
mark_square[r/3][c/3][v] = 1;
}
}
}
int main(){
init_mark();
read_input();
Try(1);
return 1;
}
