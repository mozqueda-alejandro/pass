#ifndef WAV_H
#define WAV_H


#include "WAVEHEADER.h"

class Wav {

    unsigned char* buffer = nullptr;
    wav_header waveHeader;
public:
    virtual ~Wav();
		void readFile(const std::string &fileName);
    void writeFile(const std::string &outFileName);
    unsigned char *getBuffer();
    int getBufferSize() const;
};


#endif