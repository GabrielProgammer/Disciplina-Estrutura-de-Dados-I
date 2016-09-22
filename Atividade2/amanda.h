typedef struct gaveta {

 float dimensoescompri ;
 float dimensoelarg
 float espaçoocupado;
 float areatotal;
 float espaçolivre;
 float desgate;
 float movimento;
 float repolso ;
 float objetocompri;
 float objetolarg;
 float objetototal;
} Gaveta ;
  void verdimensoes(Gaveta *a , float comprimento , float largura );
  void areadagaveta(Gaveta *a,  float comprimento , float largura );
  void espaçolivre(Gaveta *a , float areatotal , float espaçpocupado);
  void espaçoocupado(Gaveta *a, float aretatotal float espaçolivre,  );
  void desgatedagaveta( Gaveta*a , float comprimento , float largura );
  void movimentodagaveta( Gaveta *a , float movimento );
  void repolso (Gaveta *a , float repolso, float movimento);
  void objetoinserido (Gaveta *a,  float objetocompri, float objetolarg, float espasolivre);
