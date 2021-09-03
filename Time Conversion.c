char* timeConversion(char* s) {
        int x;
        char *str;
        if(s[8] == 'A' || s[8] == 'a'){
            x = atoi(s);
            if(x == 12){
                s[0] = '0';
                s[1] = '0';
            }
            s[8] = '\0';
        }
        else{
            x = atoi(s);
            if(x != 12){
                str = (char*) malloc(12*sizeof(char));
                sprintf(str,"%d",x+12);
                s[0] = str[0];
                s[1] = str[1];
            }    
            s[8] = '\0';
        }
    return s;
}
