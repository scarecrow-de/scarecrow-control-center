#!/bin/sh

LIST=""
for i in $1/panels/*/scarecrow-*panel.desktop.in.in $1/panels/*/data/scarecrow-*panel.desktop.in.in; do
	basename=`basename $i`
	LIST="$LIST `echo $basename | sed 's/scarecrow-//' | sed 's/-panel.desktop.in.in/ /'`"
done
echo -n $LIST | tr " " "\n" | sort | tr "\n" " "
