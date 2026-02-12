# BlinkMillis

Arduino UNO R4 WiFi project that blinks the built-in LED using `millis()` and connects to a WiFi network.

## Features

- **Non-blocking LED blink**: Uses `millis()` instead of `delay()` to toggle the built-in LED every 1 second, keeping the main loop free for other tasks.
- **WiFi connectivity**: Connects to a WiFi network at startup with automatic retry on failure and waits for a valid DHCP-assigned IP address.

## Hardware

- Arduino UNO R4 WiFi

## Configuration

| Parameter        | Default    | Description                  |
| ---------------- | ---------- | ---------------------------- |
| `WIFI_SSID`      | `Baloo`    | WiFi network name            |
| `WIFI_PASS`      | `Pswd123$` | WiFi password                |
| `BLINK_INTERVAL` | `500`      | LED toggle interval (ms)     |
| `Serial baud`    | `115200`   | Serial monitor baud rate     |

## Serial Output

Once uploaded, open the Serial Monitor at 115200 baud to see:

```
Connecting to Baloo
WiFi connected, waiting for IP...
...
IP address: 192.168.x.x
```

## Upload

1. Open `BlinkMillis.ino` in the Arduino IDE.
2. Select **Arduino UNO R4 WiFi** as the board.
3. Click **Upload**.
