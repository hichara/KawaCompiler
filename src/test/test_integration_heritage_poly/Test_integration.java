package test_integration_heritage;

public class Test_integration {
	public static void main(String arg[]){
		//System.out.println(new enseignant("Jean","Dupont",30,27).identite());
		
		enseignant e= new enseignant("Lucile","Dumas",56,61);
				affiche(e);
				personne p = new personne("Jean","Dupont",30);
				affiche(p);
		}
	
	/*
	Le système devra exécuter l’instruction System.out.println(e.toString()) où e est un objet enseignant. Il va chercher une méthode toString
	dans la hiérarchie des classes menant à la classe enseignant en commençant par la dernière :
	•dans la classe enseignant, il ne trouve pas de méthode toString()
	•dans la classe mère personne, il ne trouve pas de méthode toString()
	•dans la classe mère Object, il trouve la méthode toString() et l'exécute
	*/
	
	/*
	 * Par contre si je decommnente les methodes toString de la classe mere 
	 * et celle de la classe fille les resultats seront pas les meme
	 * */
	public static void affiche(Object obj){
		System.out.println(obj.toString());
		}
}
