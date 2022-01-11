SI 1d 2b 3c 4a 5b
SII1
a)2754578
c1=8 n=275457 c2=7
c1>c2 => s=1
c1=7 n=27545 c2=5
c1>c2 => s=1
c1=5 n=2754 c2=4
c1>c2 =>s=1
c1=4 n=275 c2=5
c1<c2 => s=-1
(c1-c2)*s=-1*(-1)=1>0
c1=5 n=27 c2=7
c1<c2 => s=-1
c1=7 n=2 c2=2
c1>c2 => s=1
c1=2 n=0 c2=0
c1>c2 => s=1
se afisaza 1 0
b)27 21
c)#include <iostream>

using namespace std;

int main() {
    int n,c1,c2,s;
    cin>>n;
    c1=n%10;
    n=n/10;
    c2=n%10;
    if(c1==c2){
        s=0;
    }
    else if(c1>c2){
        s=1;
    }
    else  s=-1;
    do while((c1-c2)*s<=0){
        c1=n%10;
        n=n/10;
        c2=n%10;
    }
    cout<<s<<" "<<n;
}
d)‎citeşte n (număr natural, n>9)
c1->n%10; n->[n/10]; c2->n%10
┌dacă c1=c2 atunci s->0
│altfel
│┌dacă c1>c2 atunci s->1
││altfel s->-1
│└■
└■
  daca (c1-c2)*s≤0 atunci 
  c1->n%10; n->[n/10]; c2->n%10
  scrie s,' ',n

2) struct cerc{
	struct{int x
	int y}centru
	char raza
}fig

