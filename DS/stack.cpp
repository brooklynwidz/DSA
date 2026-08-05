#include <iostream>
using namespace std;

struct stack {
    int size;
    int top;
    int *s;
};

void push(stack *st){
    int choice, num;
    while (1){
        cin >> choice;
        
        if (choice  == 0){
            break;
        }
        
        cin >> num;
        
        if ((*st).top == (*st).size-1){
            cout << "overflow";
            break;
        }   

        else {
            (*st).top++;
            (*st).s[(*st).top] = num;
        }
    }
}

// void pop(stack *st){

// }

int main(){
    stack st;
    st.top = -1;
    st.size = 5;
    st.s = new int[st.size];
    push(&st);
}