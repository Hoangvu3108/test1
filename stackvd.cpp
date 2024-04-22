#include <stdio.h>

#include <string.h>

#include <stdlib.h>
//using namespace std;

typedef struct Node{
char c;
struct Node * next;

} Node;

Node * front=NULL;

Node * makeNode(char c){

Node * node = (Node*) malloc(sizeof(Node));

node -> c = c;

node -> next = NULL;
return node;

}

Node * push_front(Node * newNode){
if (front == NULL){

front = newNode;
return front;

}

newNode->next = front;

front = newNode;
return front;

}

Node* top(){
return front;

}

Node * pop_front(){
if(front==NULL){
return NULL;

}

Node *pfront = front;

front = front->next;

free(pfront);
return front;

}
int check_valid_pair(char c1, char c2){
if(c1=='(' && c2==')'){
return 1;

}
if(c1=='[' && c2==']'){
return 1;

}
if(c1=='{' && c2=='}'){
return 1;

}
return 0;

}
int is_empty_s(){
if( front==NULL){
return 1;

}
return 0;

}
int check_valid_parenthesis2(char* s){
int n = strlen(s);
for( int i = 0; i < n; i++){
char c = s[i];
if (c=='(' || c=='[' || c=='{'){

push_front(makeNode(c));

}
else{
if (is_empty_s()){
return 0;

}
char v = top()->c;

pop_front();
if(not check_valid_pair(v,c)){
return 0;

}

}

}
if ( is_empty_s()==0){
return 0;

}
return 1;

}
int main() {
char *s = "[()]";

printf("%d\n", check_valid_parenthesis2(s));
return 0;

}
