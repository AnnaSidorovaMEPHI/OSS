echo $USER $HOME
a=$(echo -n  $USER | wc -m)
b=$(echo -n  $HOME | wc -m)
echo $(($a+$b)) 

