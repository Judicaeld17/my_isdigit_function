int my_isdigit(char num){
    if ((num>= 0 && num<=9)|| (num>= '0' && num <= '9')){
        return 1;
    }
    return 0;
}