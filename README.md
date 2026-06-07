# Pigsy

Pigsy is a lightweight automated pipeline to turn audio logic into cross-platform plugins.

## How to use
1. **Generate**: Use AI or Pure Data to generate your audio processing code.
2. **Upload**: Place your C++ logic into the `generated_code/plugin.cpp` file.
3. **Automate**: Push to GitHub. The Actions tab will compile your VST3/CLAP files automatically.

## Dependencies
This repo uses [CPLUG](https://github.com/Tremus/CPLUG) as a submodule to handle the plugin interface.
