package test_integration_heritage;

class enseignant extends personne{
	
	// attributs
	private int section;
	// constructeur
	public enseignant(String P, String N, int age,int section){
	super(P,N,age);
	this.section = section;
	}
	
	/*
	 * ce constructeur doit generer une erreur car prenom, nom sont de type private
	 * Par contre il marchera si les types des attributs de personnes sont de type protected
	 * */ 
	/*public enseignant(String P, String N, int age,int section){
	this.prenom=P;
	this.nom=N
	this.age=age
	this.section=section;
	}*/
	
	/*public String toString(){
		return "enseignant("+super.toString()+","+section+")";
		}*/
}
