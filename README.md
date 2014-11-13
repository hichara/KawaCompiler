Compilateur KAWA
================

1. Objet

Objet
-----
LLVM est une infrastructure modulaire permettant la réalisation de
chaînes de compilation et conçue pour l'optimisation. Elle met en oeuvre
une représentation intermédiaire du code qui permet de découpler les
langages de l'architecture. Nore objectif est de réaliser, à l'aide de
l'infrastructure LLVM, un comilateur pour un langage jouet, que nous
appellerons Kawa, ce dernier doit supporter:
 	- Les classes, les classes abstraites, les interfaces
	- L'héritage
	- Le polymorphisme
	- Le système de types sera composé des types primitifs
	  (int, float, etc.), des classes et des interfaces
	- Les instructions de contrôle telles ques (if/else, for,
	  while/do, switch, etc.).
	- Les méthodes seront définies de manière identique à Java
	  execpté que les paramètres pourront être préfixés du mot clé
	  **value** (transmission par valeur au lieu de référence)


