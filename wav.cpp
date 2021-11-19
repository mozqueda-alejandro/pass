 #include "wav.h"
#include <fstream>
#include <string>

void readFile (const std::string &filename){

	//declares ifstream obj that will take in a  binary file
	std::ifstream file(fileName, std::ios::binary | std::ios::in);

	//if file successful opens…. 
	if(file.is_open()){
		//cast as char* (single byte = 8 bit), advances FILE*
	file.read((char*)&waveHeader, sizeof(wav_header));
	//dynamically declare array
	Buffer = new unsigned char[waveHeader.data_]
	//read audio data
	file.read((char*)buffer,waveHeader.data_bytes);
	file.close();
	}
}
