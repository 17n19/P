#include <iostream>
using namespace std;

char* write_chars(char* dest, const char* st)
{


for(int i = 0; st[i] != '\0'; i++,dest++){
  *dest = st[i];
}

  return dest;
}

void escape(char* src, char* dest)
{

  char m[5] = "&lt;";
  char n[5] = "&gt;";
  char dc[7] = "&quot;";

  for (int i = 0; src[i] != '\0'; i++)
  {
    char str[2] = {src[i], '\0'};
    dest = write_chars(dest, (src[i] == '<' ? "&lt;" : src[i] == '>' ? n : src[i] == '\"' ? dc : str));
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
