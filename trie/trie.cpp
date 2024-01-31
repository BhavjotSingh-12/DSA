#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char data){
        this -> data = data;
        for(int i = 0;i<26;i++){
            children[i] = NULL;

        }
        isTerminal = false;
    }
};

class Trie{
    public:

    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(string word, TrieNode* root){

        //base case
        if(word.length() == 0){
            root -> isTerminal = true;
            return;
        }

        TrieNode* child;
        int index = word[0] - 'A';

        //present in children of root
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }

        //absent in children of root
        else{
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        //RECURSION
        insertUtil(word.substr(1),child);
    }
    void insertTrie(string word){
        insertUtil(word, root);
    }

    bool searchUtil(string word, TrieNode* root){

        //base case
        if(word.length() == 0){
            return root -> isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present in the children of root
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }

        //absent in children of root
        else{
            return false;
        }

        //RECURSION
        return searchUtil(word.substr(1),child);
    }

    bool searchTrie(string word) {
        return searchUtil(word,root);
    }   
};

int main(){

    Trie *t1 = new Trie();

    t1 -> insertTrie("BHAVJOT");
    t1 -> insertTrie("VISHU");
    t1 -> insertTrie("HELLO");

    cout<<"Present or Not "<< t1 -> searchTrie("VISHU");
    
    
    return 0;
}
