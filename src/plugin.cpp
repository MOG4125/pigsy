#define CPLUG_IMPLEMENTATION
#include "../cplug/cplug.h"

// This is the core logic that processes audio
void process(float** inputs, float** outputs, int frames) {
    for (int i = 0; i < frames; i++) {
        // Simple passthrough (input to output)
        outputs[0][i] = inputs[0][i];
        outputs[1][i] = inputs[1][i];
    }
}

// CPLUG required boilerplate
void cplug_init(void) {}
void cplug_process(float** inputs, float** outputs, int frames) {
    process(inputs, outputs, frames);
}
