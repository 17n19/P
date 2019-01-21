#include <iostream>
using namespace std;

char* write_chars(char* dest, const char* st){
    int j=0;
    while (st[j] != '\0'){
        *dest = st[j];
        j++;
        dest++;
    }
    return dest;
}

void escape(char* src, char *dest){
    int i=0;
    while (src[i] != '\0'){
        char str = src[i];
        if (src[i] == '<')
            dest = write_chars(dest,"&lt;");
        else if (src[i] == '>')
            dest = write_chars(dest,"&gt;");
        else if (src[i] == '\"')
            dest = write_chars(dest,"&quot;");
        else
            dest = write_chars(dest,new char(src[i]));
        i++;
    }
    *dest = '\0';
}

main()
{
  char st[1000];
  char out[1000];
  int l;

  cin.getline(st,1000);
  escape(st,out);

  cout << out << endl;
}
