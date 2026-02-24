#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *links[26];
    int pre = 0, end = 0;

    void put(char c) {
        links[c-'a'] = new Node();
    }

    Node* get(char c) {
        return links[c-'a'];
    }

    void increaseEnd() {
        end++;
    }

    void increasePrefix() {
        pre++;
    }

    void reducePrefix() {
        pre--;
    }

    void reduceEnd() {
        end--;
    }
};

class Trie {
    Node *root;
  public:
    Trie() {
        root = new Node();
    }

    void insert(string& s) {
        Node* node = root;
        for(int i = 0; i < s.size(); i++) {
            if(!node -> get(s[i])) {
                node -> put(s[i]);
            }
            node = node -> get(s[i]);
            node -> increasePrefix();
        }
        node -> increaseEnd();
    }

    bool search(string& s) {
        Node* node = root;
        for(int i = 0; i < s.size(); i++) {
            if(!node -> get(s[i])) return false;
        }
        return node -> end;
    }

    bool isprefix(string& s) {
        Node* node = root;
        for(int i = 0; i < s.size(); i++) {
            if(!node -> get(s[i])) return false;
        }
        return true;
    }

    int countWords(string& s) {
        Node* node = root;
        for(int i = 0; i < s.size(); i++) {
            if(!node -> get(s[i])) return 0;
        }
        return node -> end;
    }

    int countPrefix(string& s) {
        Node* node = root;
        for(int i = 0; i < s.size(); i++) {
            if(!node -> get(s[i])) return 0;
        }
        return node -> pre;
    } 

    void erase(string& s) {
        Node* node = root;
        for(int i = 0; i < s.size(); i++) {
            node = node -> get(s[i]);
            node -> reducePrefix();
        }
        node -> reduceEnd();
    }
};