#include <iostream>
using namespace std;
int main(){
    cout<<"欢迎运行本程序 本程序由LF011制作cloudline studio 联系方式ghzx1704@hotmail.com 祝各位初中同学考试顺利 中考取得好成绩"<<endl;
    cout<<"注意：本程序按照语文120，数学120，英语100的原始分计算，政治物理历史分别以80%折算，地理生物化学体育以50%折算 湖南常德适用"<<endl;
    cout<<"请输入语文成绩"<<endl;
    float c1;
    cin>>c1;
    cout<<"请输入数学成绩"<<endl;
    float c2;
    cin>>c2;
    cout<<"请输入英语成绩"<<endl;
    float c3;
    cin>>c3;
    cout<<"请输入政治成绩"<<endl;
    float c4;
    cin>>c4;
    cout<<"请输入历史成绩"<<endl;
    float c5;
    cin>>c5;
    cout<<"请输入地理成绩"<<endl;
    float c6;
    cin>>c6;
    cout<<"请输入生物成绩"<<endl;
    float c7;
    cin>>c7;
    cout<<"请输入物理成绩"<<endl;
    float c8;
    cin>>c8;
    cout<<"请输入化学成绩"<<endl;
    float c9;
    cin>>c9;
    cout<<"请输入体育成绩"<<endl;
    float c10;
    cin>>c10;
    cout<<"您的总分为"<<c1+c2+c3+c4*0.8+c5*0.8+c6*0.5+c7*0.5+c8*0.8+c9*0.5+c10*0.5<<"分"<<endl;
    system("pause");
    return 0;
}
