package test_integrationClasseSimple;

import integration_classeSimple.Personne;

public class test_Personne {
	
	public static void main() {
		
		Personne p1;
		// -------> ne doit pas  marcher car les attributs de la classe personne sont de type private
			p1.prenom="Jean";
			p1.nom="Dupont";
			p1.age=30;
		
		//---->utilisation du constructeur sans parametre
		p1 = new Personne();
		
		//ne doit pas marcher  il n'exite pas de constructeur avec un seul para
		p1 = new Personne("akim");
		
		p1.initialise("Jean","Dupont",30);
		printS("p1=");
		p1.identifie();
		
		Personne p2 = new Personne();
				p2.initialise(p1);
				printS("p2=");
				p2.identifie();
				
		//----->utilisation du constructeur avec parametre
				Personne p3 = new Personne("Jean","Dupont",30);
						printS("p1=");
						p3.identifie();
						Personne p4 = new Personne(p1);
						printS("p2=");
						p4.identifie();
						
	getnbreinstance();//doit me signaler une erreur car getnbreinstance n'est pas déclarer dans test_Personne
	
	test_Personne.getnbreinstance();//doit me signaler également une erreur car getnbreinstance() ne peut etre call que par Personne
	
	int g = Personne.getnbreinstance();// pas d'erreur à ce niveau			
	}
}
