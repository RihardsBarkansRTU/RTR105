#!c/msys64/usr/bin

#windowsam vajag wxt terminālu[?]

set term png

set output "ludzu_strada.png"


plot [-2*pi:2*pi] sin(x)
