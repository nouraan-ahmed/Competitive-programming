    #include <iostream>
    #include <vector>
     
    using namespace std;
     
    struct Node
    {
        int data;
        Node* left;
        Node* right;
    };
     
     
    Node* Insert_BST(Node* node, int key) {
        Node* t=node ;
        //base case
        if (!node) {
            //create new node
            t = (Node*)malloc(sizeof(Node));
            t->data = key;
            t->right = NULL;
            t->left = NULL;
            return t;
        }
        Node* l = NULL;
        Node* r = NULL;
        //recursive call
        if (key < node->data) {
            l = Insert_BST(node->left, key);
            node->left =l;
        }
        else if (key >= node->data) {
            r = Insert_BST(node->right, key);
            node->right =r;
        }
     
        return t;
    }
     
     
    int calc_height_tree(Node* node) {
        int ll=0;
        int rr=0;
        int maximum = 0;
        //base case
        if (!node) {
            return 0;
        }
     
            //recursive call
        else {
            ll=calc_height_tree(node->left) ;
            rr=calc_height_tree(node->right);
            if (ll > rr) {
                maximum = ll;
            }
            else if (ll <= rr) {
                maximum = rr;
            }
            return 1 + maximum;
        }
    }
     
     
    int is_balanced_tree(Node* root) {
        int ll=0;
        int rr=0;
        //base case
        if (!root) {
            return 1;
        }
        ll=calc_height_tree(root->left) ;
        rr=calc_height_tree(root->right);
        //recursive call
        if (abs(ll - rr) <= 1) {
            if (is_balanced_tree(root->left) && is_balanced_tree(root->right)) {
                return 1;
            }
            else {
                return 0;
            }
        }
        else {
            return 0;
        }
    }
     
     
     
    int main()
    {
        int x;
        int val;
        int n;
        cin >> n;
        //enter the elements of the tree
     
        Node* root = NULL;
     
        for (int i = 0;i < n;i++) {
            cin >> val;
            root = Insert_BST(root, val);
        }
     
        x = is_balanced_tree(root);
        if (x == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
