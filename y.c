#include <stdio.h>

bool is_y(char* s){
  for (size_t i = 0; i < 256; ++i) {
    if(s[i] == 'y'){
      return true;
    }
  }

  return false;
}


void print(char* y){
  while(1){
    printf("%s\n",y );
  }
}

int main(int argc, char *argv[])
{

  char* y = "y";
  if(argc > 1){
    FILE *fp = fopen(argv[1], "r");
    char buf[256]; // Should be more than needed
    do {
      fgets(buf, sizeof(buf), fp);
      printf("%s\n", buf);
    }
    while(fp = NULL);


    if(is_y(buf)){
      print("y");
    } else {
      printf("ERR: no `y` found in the file, Skipping\n");
    }
  }
  return 0;
}

