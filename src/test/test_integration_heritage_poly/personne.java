package test_integration_heritage;

public class personne{
private String prenom;
private String nom;
private int age;

public personne(String P, String N, int age){
this.prenom=P;
this.nom=N;
this.age=age;
}

public personne(personne P){
this.prenom=P.prenom;
this.nom=P.nom;
this.age=P.age;
}

public String identite(){
return "personne("+prenom+","+nom+","+age+")";
}
// accesseurs
public String getPrenom(){
return prenom;
}
public String getNom(){
return nom;
}
public int getAge(){
return age;
}
//modifieurs
public void setPrenom(String P){
this.prenom=P;
}
public void setNom(String N){
this.nom=N;
}
public void setAge(int age){
this.age=age;
}

	/*public String toString(){
	return "personne("+prenom+","+nom+","+age+")";
	}*/
}
