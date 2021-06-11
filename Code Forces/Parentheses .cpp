    #include <iostream>
    #include <string>
    #include <string.h>
     
    using namespace std;
     
    struct Node {
        int data;
        Node* next;
    }*top = NULL;
     
     
    int is_stk_empty() {
        return (top == NULL) ? 1 : 0;
    }
     
     
    int is_stk_full() {
        Node* tmp = new Node;
        return (tmp == NULL) ? 1 : 0;
    }
     
     
    void push(char x) {
        //valid even for the first node
        Node* tmp = new Node;
        if (!is_stk_full()) {
            tmp->data = x;
            tmp->next = top;
            top = tmp;
        }
    }
     
     
    void pop()
    {
        Node* tmp;
        if (!is_stk_empty()) {
            tmp = top;
            top = top->next;
            delete(tmp);
        }
    }
     
     
     
    int is_balanced(string s) {
        int countpop = 0;
        int countpush = 0;
        for (int i = 0;i < s.length();i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '<' || s[i] == '[') {
                push(s[i]);
                countpush++;
            }
            else if (s[i] == ')' || s[i] == '}' || s[i] == '>' || s[i] == ']') {
                if (!is_stk_empty()) {
                    if (s[i] == ')' && top->data == '(') {
                        pop();
                        countpop++;
                    }
                    //ascii code for the brackets opening and closing are different by 2
                    else if (s[i] == top->data + 2) {
                        pop();
                        countpop++;
                    }
                    else {
                        return 0;
                    }
                }
                else return 0;
            }
        }
        if (countpop == countpush) return 1;
        else return 0;
    }
     
    int main()
    {
        int n; //no. of strings to check if it's balanced or not
        cin >> n;
     
        string str = "";
        int x;
     
     
        for (int i = 0;i < n;i++) {
            cin >> str;
            x = is_balanced(str) ? 1 : 0;
            if (x) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
     
     
    }
