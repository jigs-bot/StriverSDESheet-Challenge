#include <bits/stdc++.h> 

class Trie{

    public:

    char data;

    bool term;

    Trie* child[26];

    Trie(char d){

        this->data=d;

        for(int i=0; i<26; i++){

            this->child[i]=NULL;

        }

        this->term=false;

    }

 

};

class T{

    public:

    Trie* t=NULL;

    

    T(){

        this->t=new Trie('-');

        

    }

    pair<bool,bool> fnd(string s, Trie* t){

         if(s.size()==0 ){

          

        if(t->term){

            return {true, true};

        }

        else  if(!t->term){

          return {true, false};

        }

            

        }

        if(t->child[s[0]-'a']){

            return fnd(s.substr(1), t->child[s[0]-'a']);

        }

        else{

          return {false, false};

        }

 

    }

    pair<bool,bool> f(string s){

       return  fnd(s, this->t);

    }

    void pt(string s, Trie* t){

        if(s.size()==0){

            t->term=true;

            return;

        }

        if(t->child[s[0]-'a']){

            pt(s.substr(1), t->child[s[0]-'a']);

        }

        else{

            Trie* n=new Trie(s[0]);

            t->child[s[0]-'a']=n;

            

            pt(s.substr(1), t->child[s[0]-'a']);

 

        }

    }

    void ins(string s){

        pt(s, this->t);

    }

};

void sol(T& n, string &s, string &t, int i, vector<string>&x){

    if(i>=s.size()){

        x.push_back(t);

        return;

    }

    string tp;

    for(int j=i; j<s.size(); j++){

        tp.push_back(s[j]);

        auto qp=n.f(tp);

        string z=t;

        if(qp.first){

            if(qp.second){

                z+=tp;

                z+=" ";

                sol(n, s, z, j+1, x);

            }

        }

        else{

            return;

        }

       

    }

}

vector<string> wordBreak(string &s, vector<string> &d)

{

    // Write your code here

    T n;

    for(auto& q: d){

        n.ins(q);

    }

    vector<string>x;

    string t;

   sol(n, s, t, 0, x);

    return x;

 

}