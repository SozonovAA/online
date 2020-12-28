#include <iostream>
using namespace std;

void ch3_task1(){
  int a=0;
 cout<<"Введите число от 1 до 9:";
 cin>>a;
 for(int i=1; i<21; i++){
   for(int j=1; j<11; j++){
     cout<<a*j*i;
   }
   cout<<endl;
 }
}


// void ch3_task3(){//проблемы с библиотекой...
// cout<<"Введите число из шести цифр:";
// long itog;
// int count=0;
// char a;
// while((a=getche())!='\r'){
//   a-=48;
//   cout<<"test"<<a;
//   itog+=(a*(10^(6-count)));
// }
// cout<<"Вы ввели:"<<itog;
// }

//эквивалент калькулятор: вводим число, операцию, число
//получаем ответ
//выполнил, надо учесть что работа в пределах инт
void ch3_task4(){
  int input_i[3];
  char input_ch[3];
  char flag=0;
  while(!flag){
    cout<<"Введите выражение:";
    cin>>input_ch;
    input_i[0]=input_ch[0]-48;
    input_i[2]=input_ch[2]-48;
    cout<<endl<<"Pезультат:";
    switch(input_ch[1]){
      case 43://+
        cout<<input_i[0]+input_i[2];
        break;
      case 45://-
        cout<<input_i[0]-input_i[2];
        break;
      case 42://*
        cout<<input_i[0]*input_i[2];
        break;
      case 47:// /
        cout<<(static_cast<float>(input_i[0])/static_cast<float>(input_i[2]));
        break;          

    }
    cout<<endl<<"Продолжить? (y/n):";
    cin>>input_ch;
    if(input_ch[0]=='y') flag=0;
    else if (input_ch[0]=='n')  {
      flag=1;
      cout<<endl<<"Конец сессии!";
    }
  }
}
void ch3_task5(){
  for(int i=0; i<20; i++){
    cout<<setw(10-i/2)<<right;
    if((i%2)==1){
      for(int j=0; j<i;j++){
         cout<<"+";
      }
      cout<<endl;
    }
  }
}