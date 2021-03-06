#include<iostream>
#include<string>
using namespace std;

class People{
    private:
        string name;
        int age;
        string address;
    public: 
        People();       //ham tao
        ~People();      //ham huy
        void setName(string name);
        void setAge(int age);
        void setAdd(string add);
        string getName();
        int getAge();
        string getAdd();
        void disInfo();
        void setInfor();
};

People::People(){
    this->name = "";
    this->age = 0;
    this->address = "";
}

People::~People(){

}

void People::setName(string name){
    this->name = name;
}

void People::setAge(int age){
    this->age = age;
}

void People::setAdd(string add){
    this->name = add;
}

string People::getName(){
    return this->name;
}

int People::getAge(){
    return this->age;
}

string People::getAdd(){
    return this->address;
}

void People::disInfo(){
    cout << "Thong tin ve nguoi: \n";
    cout << "Ten: "<< this->name << endl;
    cout << "Tuoi: "<< this->age << endl;
    cout << "Dia chi: "<< this->address << endl;
}

void People::setInfor(){
    cout << "Nhap thong tin: " << endl;
    cout << "Ten: ";
    fflush(stdin);
    getline(cin, this->name);
    cout << "Tuoi: ";
    cin >> this->age;
    cout << "Dia chi: ";
    fflush(stdin);
    getline(cin, this->address);
}

class Students: public People{
    string id;
    float math;
    float physical;
    float chemistry;
    public:
        Students();
        ~Students();
        void setInfor();
        void setID(string id);
        string getID();
        float GPA();
        void disInfo();
};  

Students::Students(){
    this->id = "";
    this->math = this->physical = this->chemistry = 0;
}

Students::~Students(){

}

void Students::setID(string id){
    this->id = id;
}

string Students::getID(){
    return this->id;
}

float Students::GPA(){
    float avg = (this->math + this->physical + this->chemistry)/3;
    return avg;
}

void Students::setInfor(){
    People::setInfor();     //nap chong ham
    cout << "Ma sv: ";
    getline(cin, this->id);
    cout << "Toan: ";
    cin >> this->math;
    cout << "Ly: ";
    cin >> this->physical;
    cout << "Hoa: ";
    cin >> this->chemistry;
}

void Students::disInfo(){
    People::disInfo();
    cout << "Ma sv: " << this->id << endl 
        << "Toan: " << this->math << endl 
        << "Ly: " << this->physical << endl
        << "Hoa: " << this->chemistry << endl
        << "Diem tb: " << GPA() << endl;
 }

int main(){
    Students st1;
    st1.setInfor();
    st1.disInfo();
    return 0;
}