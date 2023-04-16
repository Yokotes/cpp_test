#include <iostream>
#include <cstring>

using namespace std;

void format_string(char *&string, char *replaces[]) {
  if (!replaces[0]) {
    return;
  }
  cout << "Working" << endl;

  char *newString = new char[255];
  int offset = 0;
  int replaceIndex = 0;

  for(int i = 0; i < strlen(string); i++) {
    if (string[i] == '%') {
      strcat(newString, replaces[replaceIndex]);
      offset += strlen(replaces[replaceIndex]) - 1; // -1 to remove EOL
      replaceIndex++;
      continue;
    }
    newString[i + offset] = string[i];
  }

  string = newString;
}

int main(int argc, char *argv[]) {
  if (argc < 2) return -1;

  char *string = argv[1];
  char *replaces[255]{};

  for (int i = 0; i < argc -2; i++) {
    replaces[i] = argv[i + 2];
  }

  // Simple function to replace all `%` in string with values
  format_string(string, replaces);

  cout << "result: " << string << endl;

  return 0;
}