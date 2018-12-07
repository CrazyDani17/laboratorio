#include <iostream>

using namespace std;

class Link{
public:
    string value;
    Link(const string& v, Link* p=0,Link* s=0):value(v),prev(p),succ(s){}
    void print();
    Link* insert(Link* n);
    Link* erase();
    bool find(string s);
    const Link* find(const string& s)const;
    Link* next() const{return succ;}
    Link* previus() const{return prev;}
private:
    Link* prev;
    Link* succ;
};

Link* Link::insert(Link* n)
{
    if(n==0) return this;
    if(this==0) return n;
    n->succ=this;
    if(this->prev) this ->prev->succ=n;
    n->prev=this->prev;
    this->prev=n;
    return n;
}

bool Link::find(string s)
{
    Link* tmp=this;
    bool encontrado;
    while(tmp->prev!=NULL)
    {
        tmp=tmp->prev;
    }
    while(tmp->succ!=NULL){
        encontrado=(tmp->succ->value==s||tmp->value==s);
        tmp=tmp->succ;
    }
    return encontrado;
}
const char *findX(const char *s, const char *x);
void to_lower(char* s);

int main()
{
    char hola[5]={'h','e','l','l','o'};
    char el[2]={'e','l'};
    const char *cadena= hola;
    const char *cadena2= el;
    char hey[3]={'H','E','Y'};
    char *c= hey;
    cout<<findX(cadena,cadena2)<<endl;
    to_lower(c);
    cout<<hey[0]<<endl;
    cout<<hey[1]<<endl;
    cout<<hey[2]<<endl;
	cout<<"hola"<<endl;
	Link *nord_god1= new Link("Thor");
	Link *nord_god2= new Link("Odin");
	Link *nord_god3= new Link("Freia");
	nord_god3->insert(nord_god1);
	nord_god1->insert(nord_god2);
    cout<<"¿Thor esta dentro?"<<nord_god2->find("Thor")<<endl;
    return 0;
}

const char *findX(const char *s, const char *x){
    const char *temp= s;
    const char *temp2= x;
    int i=0;
    int j=0;
    int f=0;
    while(temp2[i]!='\0'){
        while(temp[j]!='\0'){
           if(temp2[i]==temp[j])
           {
               f=1;
               temp=temp+j;
               return temp;
           }
            j++;
        }
        i++;
    }
    if(f==0){return NULL;}
}
void to_lower(char* s){
    int i=0;
    int a='a';
    int b='A';
    int x=a-b;
    while(s[i]!='\0'){
        s[i]=s[i]+x;
        i++;
    }
}

