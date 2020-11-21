#include <iostream>
#include<graphics.h>
using namespace std;

class Sort{
 int arr[5] , bs , sw , ins , sh;
 public:
     void input(){
         cout<<"\nEnter 5 elements\n";
         for(int i=0 ; i<=4 ; i++)
         cin>>arr[i];
     }
     void bubble(){
     int a[5] , temp ,i;
    bs = 0;
     for(i=0 ; i<=4 ; i++)
        a[i] = arr[i];
       for(int j=4 ; j>=1 ; j--){
        for(int k=0 ; k<j ; k++)
     if(a[k]>a[k+1]){
        temp = a[k+1];
        a[k+1] = a[k];
        a[k] = temp;
        bs++;
     }
     for(i=0 ; i<5 ; i++)
        cout<<a[i]<<"  ";
     cout<<endl;
     }
     cout<<"\nNumber of swapping: "<<bs<<endl;
     }
     //for backened
          void bubbleb(){
     int a[5] , temp ,i;
      bs = 0;
     for(i=0 ; i<=4 ; i++)
        a[i] = arr[i];
       for(int j=4 ; j>=1 ; j--){
        for(int k=0 ; k<j ; k++)
     if(a[k]>a[k+1]){
        temp = a[k+1];
        a[k+1] = a[k];
        a[k] = temp;
        bs++;
     }
     }
     }
     void insert(){
     int a[5] , temp , j ,i,l;
      ins = 0;
     for(int k=0 ; k<=4 ; k++)
        a[k] = arr[k];
     for( i=1 ; i<=4 ; i++){
        temp = a[i];
        for( j=i-1 ; j>=0 && temp<a[j] ; j--){
                ins++;
            a[j+1] = a[j];
        }
            a[j+1] = temp;
            for(l=0 ; l<=4 ; l++)
                cout<<a[l]<<"   ";
            cout<<endl;
     }
      cout<<"\nNumber of shifting element: "<<ins<<endl;
     }
     //for backened
    void insertb(){
     int a[4] , temp , j ,i,l;
      ins = 0;
     for(int k=0 ; k<=4 ; k++)
        a[k] = arr[k];
     for( i=1 ; i<=4 ; i++){
        temp = a[i];
        for( j=i-1 ; j>=0 && temp<a[j] ; j--){
                ins++;
            a[j+1] = a[j];
        }
        a[j+1] = temp;
     }
     }
     void select(){
     int a[5] , temp , loc , min , i , l;
    sw = 0;
     for(int k=0 ; k<=4 ; k++)
        a[k] = arr[k];
        for( i=0 ; i<4 ; i++){
            min = a[i];
            loc = i;
            for(int j=i+1 ; j<=4 ; j++)
            if(min>a[j]){
                min = a[j];
                loc = j;
            }
            if(loc!=i){
            temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
            sw++;
            }
             for(l=0 ; l<=4 ; l++)
        cout<<a[l]<<"   ";
        cout<<endl;
        }
        cout<<"\ntotal swaps: "<<sw<<endl;
     }
     //for backened
          void selectb(){
     int a[5] , temp , loc , min , i , l;
     sw = 0;
     for(int k=0 ; k<=4 ; k++)
        a[k] = arr[k];
        for( i=0 ; i<4 ; i++){
            min = a[i];
            loc = i;
            for(int j=i+1 ; j<=4 ; j++)
            if(min>a[j]){
                min = a[j];
                loc = j;
            }
            if(loc!=i){
            temp = a[loc];
            a[loc] = a[i];
            a[i] = temp;
            sw++;
            }
        }
     }
     //for backened
     void shellb(){
         int gap,i,j,temp , a[5];
         sh=0;
         for(int k=0 ; k<=4 ; k++)
        a[k] = arr[k];
        for(i=4;i>=1;i--)
          {
             for(j=0;j<5-i;j++)
             if(a[j]>a[j+i])
            {
               temp=a[j];
               a[j]=a[j+i];
               a[j+i]=temp;
               sh++;
           }
      }}
       void shell(){
         int gap,i,j,temp , a[5];
         sh=0;
         for(int k=0 ; k<=4 ; k++)
        a[k] = arr[k];
        	for(i=4;i>=1;i--)
          {
for(j=0;j<5-i;j++)
if(a[j]>a[j+i])
{
temp=a[j];
a[j]=a[j+i];
a[j+i]=temp;
sh++;
}
// shalt++;
 for(int n=0;n<5;n++)
    cout<<a[n]<<" ";
 cout<<endl;
}
cout<<endl<<sh;
            }
     void compare(){
     int com[4]={bs,ins,sw,sh};
     int min = 0, loc = 0;
     min = com[0];
     for(int i=0 ; i<=3 ; i++)
     if(min>com[i]){
        min = com[i];
        loc = i;
     }
     if(loc==0)
        cout<<"\nlowest number of swapping is bubble sort\n";
     if(loc==1)
        cout<<"\nlowest number of swapping is insertion sort\n";
     if(loc==2)
        cout<<"\nlowest number of swapping is selection sort\n";
        if(loc==3)
            cout<<"\nlowest number of swapping is shell sort\n";
     }
     void graph(){
        int gd = DETECT,gm,i;
         initgraph(&gd,&gm,"c:\\tc\\bgi");
          outtextxy(150,70,"GRAPH");
          outtextxy(80,100,"B for BUBBLE SORT");
          outtextxy(80,140,"S for SELECTION SORT");
          outtextxy(80,170,"I for INSERTION SORT");
          outtextxy(80,200,"H for SHELL SORT");
          outtextxy(125,290,"B");
          outtextxy(165,290,"I");
          outtextxy(205,290,"S");
          outtextxy(245,290,"H");
          rectangle(120,270-bs,160,410);
          rectangle(160,270-ins,200,410);
          rectangle(200,270-sw,240,410);
          rectangle(240,270-sh,280,410);
          }
};
int main()
{
    Sort s1;
    char c;
    do{
        s1.input();
        cout<<"\nEnter choice:   Bubble(b),Selection(s),Insertion(i),Shell(h)\n";
        cin>>c;
        switch(c){
    case 'b':
        s1.bubble();
        s1.insertb();
        s1.selectb();
        s1.shellb();
        break;
    case 's':
        s1.select();
        s1.bubbleb();
        s1.insertb();
        s1.shellb();
        break;
    case 'i':
        s1.insert();
        s1.bubbleb();
        s1.selectb();
        s1.shellb();
        break;
    case 'h':
        s1.shell();
        s1.bubbleb();
        s1.selectb();
        s1.insertb();
        break;
    }
    s1.compare();
    delay(500);
    s1.graph();
    cout<<"\nDo you want to enter more or not(y/n)\n";
    cin>>c;
    }
    while(c!='n');
    return 0;
}
