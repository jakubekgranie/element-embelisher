#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
	(C) Jakub Namyslak, 10.01.2024
	All rights reserved

	More at:
	- https://shatterwares.com
	- https://github.com/jakubekgranie
*/

int main()
{
	// program configuration
	string config[] = { 
						"input.txt", // input file
						"output.txt", // output file
						"unit" // identifier
					   };
	char ignore[] = {' '};
	bool nbsp = false;

    cout << "Element Embelisher (C) 2025 jakubekgranie.\n All rights reserved.\n----------\n[BASE] Opening '" << config[0] << "'...\n";
	fstream file;
	file.open(config[0], ios::in);
	if (file.good()) {
		cout << "Success! File opened.\n----------\n[READ] Reading the file...\n";
		string data, final;
		for (size_t i = 0; getline(file, data); i++) {
			unsigned int difference = 0;
			bool internalSpace = false;
			for (size_t j = 0; j < data.length(); j++) {
				bool banned = false;
				if (!internalSpace && data[j] != ' ')
					internalSpace = true;
				for (size_t k = 0; k < sizeof(ignore); k++)
					if (data[j] == ignore[k]) {
						if (data[j] == ' ' && nbsp || internalSpace)
							final += "&nbsp;";
						else
							final += data[j];
						difference++;
						banned = true;
						break;
					}
				if(!banned)
					final += "<span id=\"" + config[2] + "-" + to_string(i) + "-" + to_string(j - difference) + "\">" + data[j] + "</span>";
			}
			final += "<br>\n";
		}
		cout << "[READ] Closing file...\n";
		file.close();
		cout << "[WRITE] Writing to '" << config[1] << "'...\n";
		file.open(config[1], ios::out);
		if(file.good())
			file << final;
		else {
			cout << "[WRITE] Error! Cannot open the file!";
			return 1;
		}
		cout << "[WRITE] Writing completed. Closing file...";
		file.close();
	}
	else {
		cout << "[READ] Error! Cannot open the file!";
		file.close();
		file.open(config[0], ios::out);
		file << "This is your input file. Insert the text to be embelished here.";
		file.close();
	}
	cout << "\n[BASE] Operations completed.\n----------\n\n";
	return 0;
}#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/*
	(C) Jakub Namyslak, 10.01.2024
	All rights reserved

	More at:
	- https://shatterwares.com
	- https://github.com/jakubekgranie
*/

int main()
{
	// program configuration
	string config[] = { 
						"input.txt", // input file
						"output.txt", // output file
						"unit" // identifier
					   };
	char ignore[] = {' '};
	bool nbsp = false;

    cout << "Element Embelisher (C) 2025 jakubekgranie.\n All rights reserved.\n----------\n[BASE] Opening '" << config[0] << "'...\n";
	fstream file;
	file.open(config[0], ios::in);
	if (file.good()) {
		cout << "Success! File opened.\n----------\n[READ] Reading the file...\n";
		string data, final;
		for (size_t i = 0; getline(file, data); i++) {
			unsigned int difference = 0;
			bool internalSpace = false;
			for (size_t j = 0; j < data.length(); j++) {
				bool banned = false;
				if (!internalSpace && data[j] != ' ')
					internalSpace = true;
				for (size_t k = 0; k < sizeof(ignore); k++)
					if (data[j] == ignore[k]) {
						if (data[j] == ' ' && nbsp || internalSpace)
							final += "&nbsp;";
						else
							final += data[j];
						difference++;
						banned = true;
						break;
					}
				if(!banned)
					final += "<span id=\"" + config[2] + "-" + to_string(i) + "-" + to_string(j - difference) + "\">" + data[j] + "</span>";
			}
			final += "<br>\n";
		}
		cout << "[READ] Closing file...\n";
		file.close();
		cout << "[WRITE] Writing to '" << config[1] << "'...\n";
		file.open(config[1], ios::out);
		if(file.good())
			file << final;
		else {
			cout << "[WRITE] Error! Cannot open the file!";
			return 1;
		}
		cout << "[WRITE] Writing completed. Closing file...";
		file.close();
	}
	else {
		cout << "[READ] Error! Cannot open the file!";
		file.close();
		file.open(config[0], ios::out);
		file << "This is your input file. Insert the text to be embelished here.";
		file.close();
	}
	cout << "\n[BASE] Operations completed.\n----------\n\n";
	return 0;
}