#make splitkb/kyria:javm:dfu
#make splitkb/kyria:default:dfu$1``
#qmk flash -kb splitkb/kyria -km javm_rp2040
#qmk flash -kb splitkb/kyria -km javm_rp2040 -e CONVERT_TO=promicro_rp2040
qmk flash -kb splitkb/kyria/rev3 -km via -e CONVERT_TO=liatris
