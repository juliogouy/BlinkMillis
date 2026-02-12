# CLAUDE.md

## Project Overview

Arduino UNO R4 WiFi project that blinks the built-in LED using `millis()` and connects to a WiFi network.

## Tech Stack

- **Board**: Arduino UNO R4 WiFi
- **Library**: WiFiS3 (built-in for UNO R4 WiFi)
- **Language**: C++ (Arduino)

## Project Structure

- `BlinkMillis.ino` — Main sketch (WiFi connection + non-blocking LED blink)
- `BlinkMillis.md` — Project documentation (Typora/Markdown)

## Conventions

- Use `millis()` for timing instead of `delay()` to keep the loop non-blocking
- WiFi credentials are defined as constants at the top of the sketch
- Serial output at 115200 baud for debugging
- Wait for valid DHCP IP before proceeding after WiFi connection

## Build & Upload

Open `BlinkMillis.ino` in Arduino IDE, select **Arduino UNO R4 WiFi** as the board, and upload.
