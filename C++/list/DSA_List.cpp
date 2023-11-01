#include<iostream>

class Node{
    private:
        std :: string str;
        Node* p;
        Node* n; 
    public:
        Node() : str(""),p(0),n(0) {} // Default constructor
        Node(std::string str) : str(str) , p(0), n(0) {} // overloaded constructor when only str passed 
        Node(std::string str,Node* pr) : str(str) , p(pr) , n(0) {
            pr->n = this;
        } // When str and privous node passes

        void insert(Node* nn){ // new node ptr
            // setting new node ptr's
        
            nn->p = this->p;
            nn->p->n = nn; 
            nn->n = this;

            /* update current node ptr */                
             this->p = nn;            
        }
        void getStr(){
            std::cout<<this->str<<std::endl;
        }
        void getall(){
            std::cout<<"str : " <<this->str<<std::endl;
            std::cout<<"*p  : " <<this->p<<std::endl;
            std::cout<<"*n  : " <<this->n<<std::endl;
        }
};

int main(){

    Node moeen("moeen");
    Node junaid("junain",&moeen);
    Node aizaz("aizaz");

    junaid.insert(&aizaz); 
    moeen.getall();
    aizaz.getall();
    junaid.getall();
    return 0;
}