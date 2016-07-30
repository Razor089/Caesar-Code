# Caesar-Code

Caesar è un programma scritto in cpp durante un po' del mio tempo libero,
ho voluto creare un programma che prendesse in input un file e lo criptasse
usando il cifrario di Cesare.

------------------------
- ISTRUZIONI PER L'USO -
------------------------

1) Per prima cosa bisogna compilare il progetto es. ("g++ Caesar.cpp -o Caesar.out")

2) Per utilizzare il programma bisogna dirgli che cosa deve fare, se deve criptare un file oppure lo deve criptare. Quindi quando si lancia l'applicazione da Terminale bisogna prima specificare con un numero cosa si intende fare (0 per criptare, 1 per decriptare) poi si passa il nome del file da criptare.

3) Dopo che il programma ha criptato un file, genera un file chiamato "Hidden.txt" che contiene il testo oscurato e un file "Key.txt" che contiene  la chiave usata per cifrare il testo. Quando si decritta il file non è necessario passare anche il nome del file perché il programma lo prende in automatico, deve essere solo nella stessa cartella.

4) Se avete già usato il programma per criptare un file, se volete decriptarlo dovete innanzitutto dire al programma che volete decrittare il file generato "hidden.txt" quindi es. (./Caesar.out 1) poi inserire anche la chiave per decriptare il file es. (./Caesar.out 1 5). La chiave viene generata automaticamente dal programma e salvata su un file chiamato "Key.txt". -ATTENZIONE- Se si esegue di nuovo il programma su un altro file nella stessa cartella, il file "Key.txt" viene sovrascritto dal nuovo file generato.
