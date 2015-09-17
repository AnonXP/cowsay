#include<iostream>
#include<string>

int nspace;
int x = 0;
std::string text = "error";
std::string cowascii[6] = {
  "\\ ^__^",
  " \\(oo)\\___________",
  "  (__)\\           )",
  "      ||--------u |",
  "      ||         ||"
};

void space() {
  while(x < ((nspace / 2) + 1)) {
    std::cout<<" ";
    x++;
  }
  x = 0;
}

int main(int argc, char* argv[]) {
  if(argc < 2)
    std::cout<<"Usage: cowsay \"<TEXT>\"";
  else {
    text = argv[1];
    if(text == "-about") {
      std::cout<<"Written by AnonXP in C++"<<std::endl<<
      "cowsay is open-source and if you paid for this, you've been scammed";
    }
    else {
      nspace = text.size();
      std::cout<<" ";
      while(x < (nspace)) {
        std::cout<<"_";
        x++;
      }
      x = 0;
      std::cout<<std::endl<<"<"<<text<<">"<<std::endl;
      std::cout<<" ";
      while(x < (nspace)) {
        std::cout<<"-";
        x++;
      }
      x = 0;
      std::cout<<std::endl;
      space();
      std::cout<<cowascii[0]<<std::endl;
      space();
      std::cout<<cowascii[1]<<std::endl;
      space();
      std::cout<<cowascii[2]<<std::endl;
      space();
      std::cout<<cowascii[3]<<std::endl;
      space();
      std::cout<<cowascii[4];
    }
  }
}
