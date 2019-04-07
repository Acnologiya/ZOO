#include<conio.h>
#include<fstream.h>
#include<string.h>

class animal{

	 protected:

	 char name[30],id[10];
	 float age,weight;


	 public:
	 void getid()
	 {
	  cout<<"\nEnter animal ID number : ";
	  cin>>id;
	  cout<<"\nEnter animal name :";
	  cin>>name;
	 };


	 };

class fileinfoot:public animal{

		     public:
		     void fil()
		     {
		      fstream x("ZOO.txt",ios::out|ios::app);
		      x.width(10);
		      x<<endl;
		      x<<name;
		      x.width(20);
		      x<<id;
		      x.width(20);
		      x<<age;
		      x.width(20);
		      x<<weight;
		      x.close();

		     }

} ;
class Mammal: public fileinfoot{
		    public:
		   void performance()
		   {
		    getid();
		    cout<<"\nWhat is the age of the mammal?\n\t";
		    cin>>age;
		    cout<<"\nWhat is the weight of the mammal?\n\t";
		    cin>>weight;
		    file();
		   }
void file();


};

      void  Mammal::file()
		 {
		  char fil[20];
		  strcpy(fil,id);
		  strcat(fil,".txt");
		  ofstream x(fil);
		  x<<"\nNAME: "<<name<<endl;
		  x<<"\nID NUMBER: "<<id<<endl;
		  x<<"\nTYPE: MAMMAL\n";
		  x<<"\nAGE: "<<age<<endl;
		  x<<"\nWEIGHT: "<<weight<<endl;
		  x.close();
		       fstream y("MAMMAL.txt",ios::out|ios::app);
		      y<<endl;
		      y.width(10);
		      y<<name;
		      y.width(20);
		      y<<id;
		      y.width(20);
		      y<<age;
		      y.width(20);
		      y<<weight;
		      y.close();


		 }

class Reptile: public fileinfoot{
		    public:
		   void performance()
		   {
		    getid();
		    cout<<"\nWhat is the age of the reptile?\n\t";
		    cin>>age;
		    cout<<"\nWhat is the weight of the reptile?\n\t";
		    cin>>weight;
		    file();
		   }
		   void file();

};
 void Reptile::file()
		 {
		  char fil[20];
		  strcpy(fil,id);
		  strcat(fil,".txt");
		  ofstream x(fil);
		  x<<"\nNAME:"<<name<<endl;
		  x<<"\nID NUMBER: "<<id<<endl;
		  x<<"\nTYPE: REPTILE";
		  x<<"\nAGE: "<<age;
		  x<<"\nWEIGHT: "<<weight;
		  x.close();
		       fstream y("REPTILE.txt",ios::out|ios::app);
		      y<<endl;
		      y.width(10);
		      y<<name;
		      y.width(20);
		      y<<id;
		      y.width(20);
		      y<<age;
		      y.width(20);
		      y<<weight;
		      y.close();
		 }

class Bird:public fileinfoot{
		    public:
		   void performance()
		   {float age,weight;
		    getid();
		    cout<<"\nWhat is the age of the bird?\n\t";
		    cin>>age;
		    cout<<"\nWhat is the weight of the bird?\n\t";
		    cin>>weight;
		    file();
		   }
		    void file();

};
 void Bird:: file()
		 {
		  char fil[20];
		  float age,weight;
		  strcpy(fil,id);
		  strcat(fil,".txt");
		  ofstream x(fil);
		  x<<"\nNAME: "<<name<<endl;
		  x<<"\nID: "<<id<<endl;
		  x<<"\nTYPE: Bird\n";
		  x<<"\nAGE: "<<age;
		  x<<"\nWEIGHT: "<<weight;
		  x.close();
		   fstream y("BIRD.txt",ios::out|ios::app);
		      y<<endl;
		      y.width(10);
		      y<<name;
		      y.width(20);
		      y<<id;
		      y.width(20);
		      y<<age;
		      y.width(20);
		      y<<weight;
		      y.close();



		 }

class Fish: public fileinfoot{
		public:
		   void performance()
		   {float age,weight;
		    getid();
		    cout<<"\nWhat is the age of the fish?\n\t";
		    cin>>age;
		    cout<<"\nWhat is the weight of the fish?\n\t";
		    cin>>weight;
		    file();
		   }
		    void file();

};
 void Fish:: file()
		 {
		  char fil[20];
		  float age,weight;
		  strcpy(fil,id);
		  strcat(fil,".txt");
		  ofstream x(fil);
		  x<<"\nNAME: "<<name<<endl;
		  x<<"\nID NUMBER: "<<id<<endl;
		  x<<"\nTYPE: FISH";
		  x<<"\nAGE: "<<age;
		  x<<"\nWEIGHT: "<<weight;
		  x.close();
		  fstream y("FISH.txt",ios::out|ios::app);
		      y<<endl;
		      y.width(30);
		      y<<name;
		      y.width(20);
		      y<<id;
		      y.width(20);
		      y<<age;
		      y.width(20);
		      y<<weight;
		      y.close();
		 }



class add{
	 public:
	 add();
	 };
     add::add(){
	  Mammal m;
	  Reptile r;
	  Fish f;
	  Bird b;
	  int co;
	  while(1)
	  {clrscr();
	  cout<<"\n1.Mammal\n2.Reptile\n3.Bird\n4.Fish\n5.Exit\n";
	  cout<<"\n\tEnter the type of animal you want to add : ";
	  cin>>co;
	  if(co==5)
	  break;
	  if(co==1)
	  {
	m.performance();
	m.fil();
	  }
	   if(co==2)
	  { r.performance();
	   r.fil();
	   }
	   if(co==3)
	   {
	  b.performance();
	   b.fil();
	   }
	   if(co==4)
	   {
	   f.performance();
	   f.fil();
	  }
	  }
	 }




class search{

public:
void find();
} ;
void search::find(){
	    int i;
	    char id[20],c;
	    while(1)
	    {
	     clrscr();
	    cout<<"1.All mammals\n2.All reptiles\n";
	    cout<<"3.All birds\n4.All fish\n5.Search by ID number\n6.Exit";
	    cout<<"\n\n\tEnter the type of animal you want to search : ";
	    cin>>i;
	    if(i==6)
	    break;
	    if(i==1)
	  {ifstream x("MAMMAL.txt");
	   cout<<"\nMAMMAL Informations in the ordr Name,ID number,Age,Weight\n";
	   while(x)
	   { x.get(c);
	     cout<<c;

	   }
	   getch();
	   x.close();
	  }
	  if(i==2)
	  {ifstream x("REPTILE.txt");
	   cout<<"REPTILE Informations in the ordr Name,ID number,Age,Weight\n\n";
	   while(x)
	   { x.get(c);
	     cout<<c;
	   }
	   getch();
	   x.close();
	  }
	  if(i==3)
	  {ifstream x("BIRD.txt");
	   cout<<"BIRD Informations in the ordr Name,ID number,Age,Weight\n\n";
	   while(x)
	   { x.get(c);
	     cout<<c;
	   }
	   getch();
	   x.close();
	  }
	  if(i==4)
	  {ifstream x("FISH.txt");
	   cout<<"FISH Informations in the ordr Name,ID number,Age,Weight\n\n";
	   while(x)
	   { x.get(c);
	     cout<<c;
	   }
	   getch();
	   x.close();
	  }
	  if(i==5)
	  {clrscr();
	   cout<<"Enter the ID number:";
	   cin>>id;
	   char fil[20];
	  strcpy(fil,id);
	   strcat(fil,".txt");
	   ifstream x(fil);
	    while(x)
	   { x.get(c);
	     cout<<c;
	   }
	   getch();
	   x.close();
	  }
	  }

}


int main()
{
  int c;
 clrscr();

 while(1)
 {
  clrscr();
  cout<<"1.Add\n2.Search\n3.Exit\n\n";
  cout<<"Enter your choice : ";
  cin>>c;
  if(c==3)
     break;
  else if(c==1)
     {
      add a;
     }
  else if(c==2)
     {
     search f;
     f.find();
     }

 }

 return 0;
}
