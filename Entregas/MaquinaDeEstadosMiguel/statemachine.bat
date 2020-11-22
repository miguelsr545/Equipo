echo compiling
gcc -c statemachine.c -o statemachine.o
gcc -c statemachine_elegir.c -o statemachine_elegir.o
gcc -c statemachine_acciones.c -o statemachine_acciones.o
gcc -o stm.exe statemachine.o statemachine_elegir.o statemachine_acciones.o
.\stm.exe
pause