void caesarCipher(msg[],s,enc[]){
    while(msg[i]!='/0'){
        enc[i] = char(int(msg[i])+s);
        i++;
    }
}