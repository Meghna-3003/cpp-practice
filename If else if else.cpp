# include <iostream>
using namespace std;
int main(){
    int grade;
    cout<<"enter your marks:"<<endl;
    cin>> grade;
    if (grade>=90){
        cout<<"grade="<<'A'<<"\n"<<endl;
    }else if(grade>=80 && grade<90){
        cout<<"grade="<<'B'<<"\n"<<endl;
    }else if (grade>=70 && grade<80){
        cout<<"grade="<<'C'<<"\n"<<endl;
    }else if(grade>=60 && grade<70){
        cout<<"grade="<<'D'<<"\n"<<endl;
    }else if(grade>=50 && grade<60){
        cout<<"grade="<<'E'<<"\n"<<endl;
    }else if(grade>=40 && grade<50){
        cout<<"grade="<<'F'<<"\n"<<endl;
    }else if(grade>=30 && grade<40){
        cout<<"grade="<<'G'<<"\n"<<endl;
    }else if(grade>=20 && grade<30){
        cout<<"grade="<<'H'<<"\n"<<endl;
    }else if(grade>=10 && grade<20){
        cout<<"grade="<<'FAILURE'<<"\n"<<endl;
    }else{
        cout<<"retest";
    }
    system("pause");
    return 0;
}