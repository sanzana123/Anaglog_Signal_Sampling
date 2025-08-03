# Bare-Metal ADC Initialization on TM4C123G
This project demonstrates how to configure and initialize the Analog-to-Digital Converter (ADC) in a bare-metal embedded system using the TM4C123GXL (Tiva C Series) microcontroller.

# 🔧 Features
- Initializes ADC0 for single-sample mode.
- Uses PE3 (AIN0) as the analog input pin.
- Configures ADC0 Sample Sequencer 0 (SS0).
- Sets up system clock to 40MHz.

# 📁 Files
- main.c: Contains system clock and ADC initialization logic.
- clock.h, wait.h: Utility headers for clock and delay configuration.

# 🛠️ How to Build and Run
- Board: TM4C123GXL LaunchPad
- Toolchain: Code Composer Studio

## Steps:
- Import the code into your IDE or build environment.
- Ensure you include the provided clock.h, wait.h, and tm4c123gh6pm.h files.
- Connect your analog signal to PE3.
- Flash to your board and observe ADC sampling behavior.

#📌 Notes
The project does not include interrupt-based sampling or averaging.
You can extend this by adding UART output or LED indications for ADC thresholds.

