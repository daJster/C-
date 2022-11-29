#include<cstdio>


class Mere {
public:
  virtual void message(){
    printf("je suis la classe Mere\n");
  }
};


class Fille : public Mere {
public:
  virtual void message(){
    printf("je suis la classe Fille\n");
  }
};




int main(){
  // intro
  // Fille *fille= new Fille;

  // fille->message();

  // Mere *mere=fille;
  // mere->message();

  // printf("Mere: %d\n", (int)sizeof(Mere));
  // printf("Fille: %d\n",(int)sizeof(Fille));


  //ex 2

  Fille *f = new Fille();
  Mere &m = *f;

  m.message();

  delete &m;
}




/*
int main(){
Mere *mere=NULL;

mere->message();
}
*/
