# HUB75 LED Matrix Driver for Raspberry Pi Pico (PlatformIO / Arduino)

This project is aimed at driving HUB75 LED Matrix panels using a Raspberry Pi Pico (RP2040 microcontroller) using PlatformIO and Arduino. It provides a simple example for drawing to an LED matrix using the Adafruit GFX library. I have only tested this code with a 64x64 matrix, but I don't see why it shouldn't work with 128x128. The project is based on the work of **pitschu/RP2040matrix-v2** and **Bodmer/Adafruit-GFX-Library**.

## Features

- **Flexible Drawing**: The project makes LED matrices compatible with Adafruit's GFX library, enabling users to leverage its rich set of graphics primitives for display manipulation and text display.
- **FreeRTOS Elimination**: The project removes the dependency on FreeRTOS. This way it can be used with the Pico W which currently has issues with FreeRTOS (https://github.com/earlephilhower/arduino-pico/pull/1395)
- **Anti-Flicker by using PIO and BCM Modulation**: BCM modulation is used to remove flickering. The data is sent to the display using PIO for very fast update rates without occupying the main processor.

## Getting Started

To get started with this project, follow these steps:

1. **Clone the Repository**: Clone the repository to your local machine.
2. **Hardware Setup**: Connect your Raspberry Pi Pico to the HUB75 LED Matrix panel according to the schematic here: https://github.com/pitschu/RP2040matrix-v2/tree/master/hardware.
3. **Software Installation:**
   - Install PlatformIO for VS Code if you haven't already.
   - Open the project in VS Code.
   - Build and upload the project to your Raspberry Pi Pico.

## Credits and Acknowledgments

This project builds upon the work of the following contributors:

- **pitschu/RP2040matrix-v2**: For providing the initial groundwork and hardware interfacing for driving HUB75 LED Matrix panels with Raspberry Pi Pico's PIO.
- **Bodmer/Adafruit-GFX-Library**: For the core graphics library, enabling compatibility with Adafruit's GFX library and enhancing the display manipulation capabilities of the project.

## Support and Contributions

For any issues, feedback, or contributions, please feel free to open an issue or pull request.