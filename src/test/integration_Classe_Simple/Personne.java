package integration_classeSimple;

public class Personne {
	
	public static int nbre = 0;
	public int nbre2 = 0;
	
	// attributs
	private String prenom;
	private String nom;
	private int age;
	
	// méthode
	public void initialise(String P, String N, int age){
	this.prenom=P;
	this,prenom = p;//doit me signaler une erreur
	this.nom=N;
	this.age=age;
	}
	
	 public static int getnbreinstance(){
		 nbre = nbre+1;
		 nbre2 = nbre2 +1; //ne doit pas marcher car nbre2 n'est pas de type static
		 return nbre;//doit m'afficher une erreur il manque le type de retour pour la methode
	 }
	 
	 
	public void initialise(Personne P){
		prenom=P.prenom;
		nom=P.nom;
		this.age=P.age;
	}
	
	/*
	 * 
	 * doit me signaler une erreur car accoladde manquante 
	 */
	public void initialise1(Personne P){
		prenom=P.prenom;
		nom=P.nom;
		this.age=P.age;
	
	
	// méthode identifie permet d'afficher le nom prenom et age
	public void identifie(){
		String ss = prenom+","+nom+","+age;
			printS(ss);
	}
	
	// constructeurs avec parametre
	public Personne(String P, String N, int age){
		getnbreinstance();
	 initialise(P,N,age);
	 printS(ss);// doit me signaler une erreur semantique variable déclarer au sein d'une autre méthode
	}

	public Personne(Personne P){
		getnbreinstance();
	initialise(P);
	}
	
	//constructeur sans parametre
	public Personne(){
		getnbreinstance();
		this.prenom ="x";
		this.age = 25;
		this.prenom ="joie";
		identifie();
	}
	
	//-------->cette methode ne doit pas passer car il existe déja une méthode nommée initialise avec les memes parametres
			public void initialise(String P, String N, int age){
			this.prenom=P;
			this.nom=N;
			this.age=age;
			this.identifie();
			}
}
