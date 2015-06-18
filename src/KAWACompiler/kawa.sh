#!/bin/sh

usage() {
	echo "Usage: kawa [-m KAWA_FILE] | [-h]"
	echo "OPTIONS:"
	echo "\tm KAWA_FILE : lance la compilation de KAWA_FILE en mode monolitique"
	echo "\th           : affiche l'aide"
	exit 0
}

monoc(){
	echo "compilation du fichier $1 en mode monolitique";
	./kawac -m $1
	exit $?
}

if [ $# = 0 ];
then
	usage
fi

while getopts m:h opts; do
 case ${opts} in
  h) usage;;
  m) monoc ${OPTARG} ;;
 esac
done

exit 0

