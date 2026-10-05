#include <iostream>
using namespace std;
struct node
{
    int val;
    node *left;
    node *right;
    node(int data){
        val=data;
        left=right=NULL;
    }
};
int main(){
    int A,B,C;

    node *root= new node(A);
    root -> left= new node(B);
    root -> left= new node(B);
    root -> left= new node(B);
}
