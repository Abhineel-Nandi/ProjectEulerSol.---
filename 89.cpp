string toroman(int num)
{
    string result = "";
    for(int i=0; i<num/1000;++i) result += 'M';
    num %= 1000;
    if(num/100 == 4)
    {
        result += "CD";
        num %= 100;
    } else if(num/100 == 9)
    {
        result += "CM";
        num %= 100;
    } else
    {
        if (num / 100 >= 5) result += 'D';
        for (int i = 0;i<(num/100)%5;++i) result += 'C';
        num %= 100;
    }
    if(num/10 == 4)
    {
        result += "XL";
        num %= 10;
    } else if(num/10 == 9)
    {
        result += "XC";
        num %= 10;
    } else
    {
        if (num / 10 >= 5) result += 'L';
        for (int i = 0;i<(num/10)%5;++i) result += 'X';
        num %= 10;
    }
    
    if(num == 4) result += "IV";
    else if(num == 9) result += "IX";
    else
    { 
        if (num >= 5) result += 'V';
        for (int i = 0;i<num%5;++i) result += 'I';
    }
    
    return result;
}

int fromroman(string num)
{
    int inum = 0;
    char last = '0';
    
    for(int i =0; i<num.size();++i)
    {
        switch(num[i])
        {
            case 'M': if(last == 'C') inum += 800;
                      else inum += 1000;  
                      break;
            case 'D': if(last == 'C') inum += 300;
                      else inum += 500;  
                      break;
            case 'C': if(last == 'X') inum += 80;
                      else inum += 100;  
                      break;
            case 'L': if(last == 'X') inum += 30;
                      else inum += 50;  
                      break;
            case 'X': if(last == 'I') inum += 8;
                      else inum += 10;  
                      break;
            case 'V': if(last == 'I') inum += 3;
                      else inum += 5;  
                      break;
            case 'I': inum += 1;
                      break;
        }
        last = num[i];
    }
    return inum;
}

int main()
{
    ifstream romnums("roman.txt");
    string num, betternum;
    int saved = 0;
    for(int i=0 ; i<1000;i++)
    {
        getline(romnums,num, '\n');
        betternum = toroman(fromroman(num));
        saved += (num.size() - betternum.size()); 
    }
    cout << saved << endl;
}