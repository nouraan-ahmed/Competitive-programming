class Node {
    public:
    Node* ch[26];
    bool wordend;
    Node(){
        for(int i=0;i<26;i++){
            ch[i]=NULL;
        }
        wordend=false;
    }
};
class Trie {
private:
    Node* t;
public:
    Trie() {
        t=new Node();
    }
    ~Trie(){
        for(int i=0;i<26;i++){
            delete(t->ch[i]);
        }
    }
    
    void insert(string word) {
        Node* T = t;
        for(char c:word){
            if(T->ch[c-'a']==NULL){
                T->ch[c-'a'] = new Node();
            }
            T=T->ch[c-'a'];
        }
        T->wordend=true;
    }
    
    bool search(string word) {
        Node* T = t;
        for(char c:word){
            if(T->ch[c-'a']==NULL){
                return false;
            }
            T=T->ch[c-'a'];
        }
        return T->wordend;
    }
    
    bool startsWith(string prefix) {
        Node* T = t;
        for(char c:prefix){
            if(T->ch[c-'a']==NULL){
                return false;
            }
            T=T->ch[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
