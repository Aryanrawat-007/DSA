/*#include<iostream>
#include<string>
using namespace std;
class shoppingorder{
    private:
    string orderid;
    string productname;
    int quantityordered;
    double unitprice;
    public:
    shoppingorder(string id,string name,int qty,double price){
        orderid=id;
        productname=name;
        quantityordered=(qty>0)?qty:0;
        unitprice=(price>0.0)?price:0.0;
    }
    double orderamount(){
        return quantityordered*unitprice;
    }
    void display(){
        cout<<orderid<<endl;
        cout<<productname<<endl;
        cout<<quantityordered<<endl;
        cout<<unitprice<<endl;
        cout<<"total"<<orderamount()<<endl;
    }
};
int main(){
    shoppingorder s("109","aryan",5,100.0);
    s.display();
    return 0;
}



#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x,y;
    public:
    point(int a=0,int b=0){
        x=a;
        y=b;
    }
    point operator+(point p){
        return x+p.x+p.y;
    }
    double operator-(point p) {
        return sqrt((x - p.x) * (x - p.x)
                  + (y - p.y) * (y - p.y));
    }
    bool operator==(point p){
        return x==p.x && y==p.y;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
int main(){
    point p1(2,3);
    point p2(5,7);
    point p3=p1+p2;
    p3.display();
    point p4=p1-p2;
    p4.display();
    if(p1==p2){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
    return 0;
}




#include<iostream>
using namespace std;
class gamer{
    int a[7];
    public:
    void input(){
        cout<<"ENETR DATA"<<endl;
       for(int i=0;i<7;i++){
        cin>>a[i];
       }
    }
    int calculatetotalscore(){
        int sum=0;
        for(int i=0;i<7;i++){
        sum+=a[i];
        }
        return sum;
    }

};
int main(){
    int n,y;
    cout<<"NO OF GAMER"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
       gamer g[n];
       g[n].input();
       y[i]=g[n].calculatetotalscore();
    }
    gamer sia;
    sia.input();
    int x=sia.calculatetotalscore();
    int count=0;
    for(int i=0;i<n;i++){
        if(y[i]>x){
            count++;
        }
    }
    cout<<"NO OF GAME WHICH HASE HIGHER SCORE"<<count<<endl;
    return 0;

}


#include<iostream>
using namespace std;
class time{
    int hr,min;
    public:
    time(int hour=0,int minutes=0){
        hr=hour+minutes/60;
        min=minutes%60;
    }
    time operator+(time t){
        return time(hr+t.hr,min+t.min);
    }
    time operator-(time t){
        int a=hr*60+min;
        int b=t.hr*60+t.min;
        int diff=a-b;
        if(diff<0){
            diff=-diff;
        }
        return time(diff/60,diff%60);
    }
    bool operator==(time t){
        return hr==t.hr && min==t.min;
    }
    void display(){
        cout<<hr<<":"<<min<<endl;
    }
};
int main(){
    time t1(3,40);
    time t2(2,30);
    time t3=t1+t2;
    t3.display();
    time t4=t1-t2;
    t4.display();
    if(t1==t2){
        cout<<"EQUAL"<<endl;
    }
    cout<<"NOT EQUAL"<<endl;
    return 0;
}



#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,n;
    cout<<"ENTER STRING"<<endl;
    getline(cin,str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' &&
        str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' ){
            n+=str[i];
        }
    }
    cout << "String without vowels: " << n;
    return 0;
}


#include<iostream>
using namespace std;
class counter{
    int count;
    public:
    counter(){
        count=2;
    }
    counter operator++(){
        count++;
    }
    void display(){
        cout<<count<<endl;
    }
};
int main(){
    counter c;
    ++c;
    c.display();
    return 0;
}

*/


#include<iostream>
using namespace std;
class circle{
    float radius;
    public:
    circle(float r=1){
        radius=r;
    }
    bool operator==(circle c){
        return radius==c.radius;
    }
    bool operator<(circle c){
        return radius<c.radius;
    }
    bool operator>(circle c){
        return radius>c.radius;
    }
};
int main(){
    circle c1(5);
    circle c2(3);
    circle c3(5);
    if(c1==c3){
        cout<<"equal"<<endl;
    }
    if (c2 < c1)
        cout << "c2 is smaller than c1" << endl;
    if (c1 > c2)
        cout << "c1 is greater than c2" << endl;

    return 0;
}