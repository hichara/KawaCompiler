package mise_en_jambes;

public class Fille {

	// Attributs
	public double F_numDouble;

	protected char F_lettre;

	private int F_numInt;
	private String F_nom;
	private final char F_CONST = 'F';
	private int F_value;
	
	// Constructeurs
	public Fille(){
		F_value = -1;
		F_numInt = 100;
		F_nom = "100";
		F_numDouble = 100.0;
		F_lettre = '1';
	}
	
	public Fille(int num, String nom, double numD, char lettre){
		F_value = -1;
		this.F_numInt = num;
		this.F_nom = nom;
		this.F_numDouble = numD;
		this.F_lettre = lettre;
	}
	
	
	// Méthode d'affichage
	public String toString(){
		print("Je suis dans la classe <Fille> : \n\tCONST = "+F_CONST+" - value = "+F_value+" - numInt = "+F_numInt+" - nom = "+F_nom+" - numDouble = "+F_numDouble+" - lettre = "+F_lettre);
	}

	// Getter && Setter
	public char getLettre() {
		return F_lettre;
	}

	public void setLettre(char lettre) {
		this.F_lettre = lettre;
	}

	public char getCONST() {
		return F_CONST;
	}

	public double getNumDouble() {
		return F_numDouble;
	}

	public void setNumDouble(double numDouble) {
		this.F_numDouble = numDouble;
	}

	public int getNumInt() {
		return F_numInt;
	}

	public void setNumInt(int numInt) {
		this.F_numInt = numInt;
	}

	public String getNom() {
		return F_nom;
	}

	public void setNom(String nom) {
		this.F_nom = nom;
	}

	public int getValue() {
		return F_value;
	}

	private void setValue(int value) {
		this.F_value = value;
	}
	
	public void modifyValue(){
		setValue(9999);
	}
	// methode qui ne doit pas marcher
	public void setCONST(char value) {
		F_CONST = value;
	}
	
	
	
}
