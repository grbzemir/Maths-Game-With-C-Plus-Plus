#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<stddef.h>

using namespace std;

void Oyna();
void OyunBilgileri();

int main()

{

    system("color 3F");
    srand( (unsigned)time(NULL));

    char secim;

    do 

    {

        system("cls");
        cout<<"______________________________________________________"<<endl;
        cout<<"                   MATHS GAME                         "<<endl;
        cout<<"______________________________________________________"<<endl;

        cout<<"[1] Oyuna Basla"<<endl;
        cout<<"[2] Oyun Bilgileri"<<endl;
        cout<<"[3] Cikis"<<endl;

        cout<<"Seciminiz (1-4): ";
        cin>>secim;


        switch(secim)

        {

            case '1':

            Oyna();
            break;

            case '2':

            OyunBilgileri();
            break;

            case '3':

            cout<<"\nProgramdan Cikiliyor..."<<endl;
            exit(0);
            break;

            default:

            cout<<"\nHatali Secim!";
            continue;

        }



    }

    while(secim != '3');

    return 0;


}

 void Oyna()

  {

    int level;
    int limit;

    char secim;

    system("cls");
    cout<<"______________________________________________________"<<endl;
    cout<<"                   MATHS GAME                         "<<endl;
    cout<<"______________________________________________________"<<endl;

    cout<<"[1] Kolay"<<endl;
    cout<<"[2] Orta"<<endl;
    cout<<"[3] Zor"<<endl;
    cout<<"[4] Ana Menuye Don"<<endl;

    cout<<"Seciminiz (1-4): ";
    cin>>secim;

    switch(secim)

    {

        case '1':

        level = 1;
        limit = 10;
        break;

        case '2':

        level = 2;
        limit = 20;
        break;

        case '3':

        level = 3;
        limit = 100;
        break;

        case '4':

     
        break;

        default:

        cout<<"\nHatali Secim!";
        break;

    }

    float soru1;
    float soru2;
    float cevap;
    float dogruCevap;
    int dogruCevapNo=0;
    int toplamNo;
    toplamNo = 10;
    char operation;

  
   if(secim !='4')

   {

    for(int i=0;i<toplamNo;i++)

    {

        soru1 = rand() % limit;
        soru2 = rand() % limit;

        int islem = rand() % 4;

        switch(islem)

        {

            case 0:

            operation = '+';
            break;
            
            case 1:

            operation = '-';
            break;

            case 2:

            operation = '*';
            break;

        }
        
        cout<<"("<<(i+1)<<"). ";
        cout<<"\n"<<soru1<<" "<<operation<<" "<<soru2<<" = ";

        cin>>cevap;

        switch(operation)

        {

            case '+':

            dogruCevap = soru1 + soru2;
            break;

            case '-':

            dogruCevap = soru1 - soru2;
            break;

            case '*':

            dogruCevap = soru1 * soru2;
            break;

        }

        if(cevap == dogruCevap)

        {
            
            cout<<"wrong"<<endl;
            cout<<"\nDogru Cevap!"<<endl;
            dogruCevapNo++;

        }

        else

        {

            cout<<"\nYanlis Cevap!"<<endl;
            cout<<"Dogru Cevap: "<<dogruCevap<<endl;

        }

    }
  
    cout<<"\n\nToplam Soru: "<<toplamNo<<endl;
    cout<<"\n\nToplam Dogru Cevap: "<<dogruCevapNo<<endl;

    float puan = (float)dogruCevapNo/toplamNo * 100;

    cout<<"\n\nPuan: "<<puan<<endl;

    cout<<"Devam Etmek Icin Herhangi Bir Tusa Basiniz..."<<endl;
    getch();

    cout<<"\n\n[1] Ana Menuye Don";
    cout<<"\n[2] Cikis";

    cout<<"\nSeciminiz: ";
    cin>>secim;

    switch(secim)

    {

        case '1':

        return;
        break;

        case '2':

        cout<<"\nProgramdan Cikiliyor..."<<endl;
        exit(0);
        break;

        default:

        cout<<"\nHatali Secim!";
        break;

    }
    
}

}

  
  void OyunBilgileri()

  {

    system("cls");
    cout<<"______________________________________________________"<<endl;
    cout<<"                   OYUN BILGILER                      "<<endl;
    cout<<"______________________________________________________"<<endl;
    cout<<"Oyunun amaci 10 sorudan olusan bir testi basarili bir sekilde bitirmektir."<<endl;
    cout<<"Oyunun 3 seviyesi vardir."<<endl;
    cout<<"Kolay seviyede 10 soru sorulur."<<endl;
    cout<<"Orta seviyede 100 soru sorulur."<<endl;
    cout<<"Zor seviyede 1000 soru sorulur."<<endl;
    cout<<"Her soru 4 islemden biriyle yapilir."<<endl;
    cout<<"Her soru 10 saniye icinde cevaplanmali."<<endl;
    cout<<"Her soru 1 puan degerindedir."<<endl;
    cout<<"Basarilar!"<<endl;
    cout<<endl;

    cout<<"Devam Etmek Icin Herhangi Bir Tusa Basiniz..."<<endl;
    getch();

  }
  






