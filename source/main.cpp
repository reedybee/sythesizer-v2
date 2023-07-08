#include "wavheader/wavheader.h"
#include "osc/oscillator.h"
#include "util/util.h"

uint16 sampleRate = 44100;
uint16 numChannels = 1;
uint16 duration = 5;

float phase;

int main() {

    int numSamples = sampleRate * numChannels * duration;
    float* data = new float[numSamples];
    for (int i = 0; i < numSamples; i++) {
        data[i] = SineOscillator(phase, 550, sampleRate);
    }
    WriteWaveFile("simplesine", data, numSamples, numChannels, sampleRate);
}

