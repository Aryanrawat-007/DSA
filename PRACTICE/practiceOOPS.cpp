#include<iostream>
#include<string>
using namespace std;
class Customer{
    protected:
    int billamount;
    public:
    void getdata(){
        cout<<"ENTER BILL AMOUNT:"<<endl;
        cin>>billamount;
    }
    virtual void payableamount(){

    };
};
class RegularCustomer:public Customer{
    public:
    void payableamount() override{
    float dis=0;
    dis=0.1*billamount;

        cout<<"REGULAR AMOUN:"<<billamount<<endl;
        cout<<"PAYABLE AMOUNT:"<<billamount-dis<<endl;
    }
};
class premiumCustomer:public Customer{
    public:
    void payableamount() override{
    float dis=0;
    dis=0.2*billamount;

      cout<<"REGULAR AMOUN:"<<billamount<<endl;
        cout<<"PAYABLE AMOUNT:"<<billamount-dis<<endl;
    }
};
int main(){
   RegularCustomer r;
   premiumCustomer p;

   Customer*c;
   c=&r;
   c->getdata();
   c->payableamount();

   c=&p;
   c->getdata();
   c->payableamount();

   return 0;
}




//
class printer{
    protected:
    int noofpage;
    public:
    void getdata(){
        cout<<"ENTER NO OF PAGE:"<<endl;
        cin>>noofpage;
    }
        //PURE VIRTUAL HAI YE
    virtual void printcost()=0;
};
class BlackWhiteprinter:public printer{
    public:
    void printcost() override{
        int cost=0;
        cost=2*noofpage;

        cout<<"BLACK & WHITE"<<cost<<endl;
    }
};
class COLORPrinter:public printer{
    public:
    void printcost() override{
        int cost=0;
        cost=10*noofpage;

        cout<<"Color"<<cost<<endl;
    }
};
int main(){
    BlackWhiteprinter b;
    COLORPrinter c;

    printer *p;
    p=&b;
    p->getdata();
    p->printcost();

    p=&c;
    p->getdata();
    p->printcost();

    return 0;
}





class laptop{
    protected:
    string brand;
    float price;
    public:
    void showlaptop(){
      cout<<"ENTER BRAND: "<<endl;
      cin>>brand;
      cout<<"ENTER PRICE: "<<endl;
      cin>>price;

      cout<<"BRAND: "<<brand<<endl;
      cout<<"PRICE: "<<price<<endl;
    }
};
class gaminglaptop:public laptop{
    public:
    int ramsize;
    void showgaming(){
        cout<<"ENTER RAM SIZE: "<<endl;
        cin>>ramsize;

        cout<<"RAM SIZE IS: "<<ramsize<<endl;
    }
};
int main(){
    gaminglaptop g;
    g.showlaptop();
    g.showgaming();

    return 0;
}


class salary{
    protected:
    int bs;
    public:
    void data(){
       cout<<"ENTER YOUR BASIC SALARY:"<<endl;
       cin>>bs;

       cout<<"BASIC SALARY:"<<bs<<endl;
    }
};
class attendance{
    protected:
    int nod;
    public:
    void data1(){
       cout<<"ENTER YOUR DAY ATTEND:"<<endl;
       cin>>nod;

       cout<<"DAY ATTEND:"<<nod<<endl;
    }
};
class employee:public salary,public attendance{
    public:
    int fs;
    void check(){
    if(nod>0.9){
        fs=bs+bs*0.05;
    }

    cout<<"FINAL SALARY: "<<fs<<endl;
  }
};
int main(){
    employee e;
    e.data();
    e.data1();
    e.check();

    return 0;
}



//ASSIGNMENT Q1:
class empolyee{
    private:
    int salary;
    protected:
    int ecode;
    public:
    string name;
    empolyee(int s,int e,string n){
        salary=s;
        ecode=e;
        name=n;
    }
};
class manager:public empolyee{
    public:
    manager(int s, int e,string n):empolyee(s,e,n){}
    void show(){
        //cout<<"SALARY: "<<salary<<endl;    this will give error because salary in private mode
        cout<<"EMPOLYEE CODE: "<<ecode<<endl;
        cout<<"EMPLOYEE NAME: "<<name<<endl;
    }
};
class intern:protected empolyee{
    public:
    intern(int s, int e,string n):empolyee(s,e,n){}
    void show(){
        //cout<<"SALARY: "<<salary<<endl;    this will give error because salary in private mode
        cout<<"EMPOLYEE CODE: "<<ecode<<endl;
        cout<<"EMPLOYEE NAME: "<<name<<endl;
    }
};
class contractor:private empolyee{
    public:
    contractor(int s, int e,string n):empolyee(s,e,n){}
    void show(){
        //cout<<"SALARY: "<<salary<<endl;    this will give error because salary in private mode
        cout<<"EMPOLYEE CODE: "<<ecode<<endl;
        cout<<"EMPLOYEE NAME: "<<name<<endl;
    }
};
int main() {

    manager m(50000, 101, "Aman");
    intern i(15000, 102, "Rahul");
    contractor c(20000, 103, "Karan");

    m.show();
    i.show();
    c.show();

    // Manager object
    cout << m.name << endl;  // Correct

    // cout << m.employeeCode; // Error: protected
    // cout << m.salary;       // Error: private

    // Intern object
    // cout << i.name;         // Error: protected inheritance

    // Contractor object
    // cout << c.name;         // Error: private inheritance

    return 0;
}
    

//QUESTION 2: Yaad rakhna:
//- Diamond problem → Virtual inheritance.
//- Function ambiguity → Scope resolution operator ::
class device{
    protected:
    string brand;
    public:
    device(string n){
        brand=n;
    }
    void display(){
      cout<<"BRAND: "<<brand<<endl;  
    }
};
class camera:virtual public device{
    public:
    camera(int m) : device("") {
        mp = m;
    }
    int mp;
    void display(){
        cout<<"MEGAPIXEL:"<<mp<<endl; 
    }
};
class phone:virtual public device{
    public:

    phone(int s) : device("") {
        simslot = s;
    }
    int simslot;
    void display(){
        cout<<"NO OF SIM SLOT: "<<simslot<<endl;
    }
};    
class smartphone:public camera,public phone{
    public:
    smartphone(string n, int m, int s)
        : device(n), camera(m), phone(s) {
    }

    void display() {
        device::display();
        camera::display();
        phone::display();
    }
};
int main() {

    string b;
    int m, s;

    cin >> b >> m >> s;

    smartphone obj(b, m, s);

    obj.display();

    return 0;
}

//QUESTION 3:
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(string n) {
        name = n;
    }

    virtual float calculateSalary() = 0;
};

class FullTimeEmployee : public Employee {
    float salary;

public:
    FullTimeEmployee(string n, float s) : Employee(n) {
        salary = s;
    }

    float calculateSalary() override {
        return salary;
    }
};

class PartTimeEmployee : public Employee {
    int hours, rate;

public:
    PartTimeEmployee(string n, int h, int r) : Employee(n) {
        hours = h;
        rate = r;
    }

    float calculateSalary() override {
        return hours * rate;
    }
};

class Intern : public Employee {
public:
    Intern(string n) : Employee(n) {}

    float calculateSalary() override {
        return 15000;
    }
};

int main() {

    int N;
    char type;
    string name;

    Employee *e[100];

    cout << "Enter number of employees: ";
    cin >> N;

    for(int i = 0; i < N; i++) {

        cin >> type >> name;

        if(type == 'F') {
            float sal;
            cin >> sal;

            e[i] = new FullTimeEmployee(name, sal);
        }

        else if(type == 'P') {
            int h, r;
            cin >> h >> r;

            e[i] = new PartTimeEmployee(name, h, r);
        }

        else if(type == 'I') {
            e[i] = new Intern(name);
        }
    }

    float total = 0;

    cout << fixed << setprecision(2);

    for(int i = 0; i < N; i++) {

        cout << e[i]->calculateSalary() << endl;

        total += e[i]->calculateSalary();
    }

    cout << "Total Salary: Rs " << total << endl;

    for(int i = 0; i < N; i++) {
        delete e[i];
    }

    return 0;
}


#include <iostream>
using namespace std;

class Ride {
protected:
    float distance;

public:
    Ride(float d) {
        distance = d;
    }

    virtual float calculateFare() = 0;
    virtual void getRideType() = 0;
};

class BikeRide : public Ride {
public:
    BikeRide(float d) : Ride(d) {}

    float calculateFare() override {
        return distance * 8;
    }

    void getRideType() override {
        cout << "Bike Ride";
    }
};

class AutoRide : public Ride {
public:
    AutoRide(float d) : Ride(d) {}

    float calculateFare() override {
        return distance * 12 + 25;
    }

    void getRideType() override {
        cout << "Auto Ride";
    }
};

class CabRide : public Ride {
public:
    CabRide(float d) : Ride(d) {}

    float calculateFare() override {
        return distance * 15 + 50;
    }

    void getRideType() override {
        cout << "Cab Ride";
    }
};

int main() {
    int n;
    char code;
    float d, total = 0;

    Ride *r[100];

    cout << "Enter number of rides: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter ride code (B/A/C) and distance: ";
        cin >> code >> d;

        if(code == 'B' || code == 'b') {
            r[i] = new BikeRide(d);
        }
        else if(code == 'A' || code == 'a') {
            r[i] = new AutoRide(d);
        }
        else if(code == 'C' || code == 'c') {
            r[i] = new CabRide(d);
        }
        else {
            cout << "Invalid ride code!\n";
            i--;
            continue;
        }
    }

    cout << "\n----- RIDE DETAILS -----\n";

    for(int i = 0; i < n; i++) {
        r[i]->getRideType();

        float fare = r[i]->calculateFare();

        cout << " : Rs. " << fare << endl;

        total += fare;

        delete r[i];
    }

    cout << "\nTotal Fare = Rs. " << total;

    return 0;
}


//QUESTION 5:
#include <iostream>
using namespace std;

// Function template to sort array
template <class T>
void sortArray(T arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function template to find maximum
template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

// Function template to search element
template <class T>
int searchElement(T arr[], int n, T key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i + 1;
        }
    }

    return -1;
}

int main() {
    int n, pos;
    char type;

    cout << "Enter data type (i/f/c): ";
    cin >> type;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0 || n > 100) {
        cout << "Invalid array size!";
        return 0;
    }

    if(type == 'i') {
        int arr[100], key;

        cout << "Enter array elements: ";
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        cout << "Enter element to search: ";
        cin >> key;

        sortArray(arr, n);

        cout << "Sorted array: ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";

        cout << "\nMaximum element: " << findMax(arr, n);

        pos = searchElement(arr, n, key);

        if(pos != -1)
            cout << "\nElement found at position: " << pos;
        else
            cout << "\nElement not found";
    }   return 0;
}
    



//QUESTION 6:

#include <iostream>
#include <vector>
#include <map>
#include <list>
using namespace std;

int main() {
    int n;
    string name;

    vector<string> votes;
    map<string, int> voteCount;
    list<string> multipleVotes;

    cout << "Enter number of votes: ";
    cin >> n;

    // Read votes
    cout << "Enter candidate names:\n";

    for(int i = 0; i < n; i++) {
        cin >> name;

        votes.push_back(name);
        voteCount[name]++;
    }

    // Display vote count
    cout << "\n----- VOTE COUNT -----\n";

    int maxVotes = 0;
    string winner;

    for(auto it = voteCount.begin(); it != voteCount.end(); it++) {
        cout << it->first << " : " << it->second << endl;

        // Find winner
        if(it->second > maxVotes) {
            maxVotes = it->second;
            winner = it->first;
        }

        // Store candidates with more than one vote
        if(it->second > 1) {
            multipleVotes.push_back(it->first);
        }
    }

    // Display list
    cout << "\nCandidates with more than one vote:\n";

    for(auto it = multipleVotes.begin(); it != multipleVotes.end(); it++) {
        cout << *it << endl;
    }

    // Display winner
    cout << "\nWinner: " << winner;
    cout << "\nTotal votes: " << maxVotes;

    return 0;
}
*/
#include<iostream>
#include<list>
int main(){
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    auto it=l.begin();
    it++;
    l.insert(it,15);

    it=l.end();
    it--;
    l.insert(it,25);

    l.pop_back();
    l.pop_front();

    for(auto it =l.begin();it!=l.end();it++){
        cout<<*it<<" ";

        cout<<"total values: "<<l.size();
        cout<<"FIRST VALUE: "<<l.front();
    }
}





template<class T>
void sortarray(T a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;i<n-i-1;j++){
            if(a[j]>a[j+1]){
                T temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

template<class T>
T findMax(T a[],int n){
    T max=a[0]
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return max;
}

template<class T>
int searchkey(T a[],int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
        else{
            cout<<"NOT FOUND"<<endl;
        }
    }
}
