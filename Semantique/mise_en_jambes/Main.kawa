package mise_en_jambes;

public class Main {

	public static void main(String[] a){
		
		// Fille
		
		// => Doit marcher
		Fille f1 = new Fille();
		Fille f2 = new Fille(-20, "-20", -20.0, '2');
		
		print("=== PARTIE FONCTIONNELLE ===\n\n");
		
		print("(G)Lettre de f1 : "+f1.getLettre()); // G => Getter 
		f1.setLettre('x');
		print("(G)Lettre de f1 : "+f1.getLettre());
		print("\n");
		
		printf("(G)Nom de f1 : "+f1.getNom());
		f1.setNom(""+'x');
		printf("(G)Nom de f1 : "+f1.getNom());
		print("\n");

		print("(Public) numDouble de f1 : "+f1.F_numDouble);
		f1.setNumDouble(10);
		print("(Public) numDouble de f1 : "+f1.F_numDouble);
		print("\n");

		print("(G) value de f1 : "+f1.getValue());
		f1.modifyValue();
		print("(G) value de f1 : "+f1.getValue());
		print("\n");

		print("F1 : "+f1);
		printf("F2 : "+f2);
	
	
		// => Erreur 
		print("=== PARTIE ERONNEE === \n\n");
		
		// Erreur sur les types
		Fille f3 = new Fille(20.0, "20", 20.0, '2');	// arg1 faux
		Fille f4 = new Fille(20, 20, 20.0, '2');		// arg2 faux
		Fille f5 = new Fille(20, "20", "10", '2');		// arg3 faux
		Fille f6 = new Fille(20, "20", 20.0, "20");		// arg4 faux
		
		// Erreur sur la visibilité et accessibilité
		print("(P)Lettre de f1 : "+f1.F_lettre);		// lettre est protected
		f1.numInt = 20;									// numInt est private
		f1.setCONST('z');  								// CONST est une constance
		f1.setValue(200);								// setValue() est private
	
	}
	
}
