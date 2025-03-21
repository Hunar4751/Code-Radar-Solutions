void caesarCipher(message[],shift,encrypted[]){
    while(message[i]!='/0'){
        encrypted[i] = char(int(message[i])+shift);
        i++;
    }
}