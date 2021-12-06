#! /bin/zsh

PATH=$1
CLASSNAME=$2
UCLASSNAME=$(printf "%s" "$2" | /usr/bin/tr '[:lower:]' '[:upper:]')

/usr/bin/head -2 Classnnn.hpp | /usr/bin/sed "s/nnn/$UCLASSNAME/gi" > $PATH/Class$CLASSNAME.hpp
echo >> $PATH/Class$CLASSNAME.hpp 
/usr/bin/grep -A100 'class' Classnnn.hpp | /usr/bin/sed "s/nnn/$CLASSNAME/gi" >> $PATH/Class$CLASSNAME.hpp
/bin/cat Classnnn.cpp | /usr/bin/sed "s/nnn/$CLASSNAME/gi" > $PATH/Class$CLASSNAME.cpp
