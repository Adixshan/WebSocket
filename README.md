# 🖥️ WebSocket Client (C++)

A **C++ WebSocket Client** that connects to an echo server, sends messages, and receives responses. This project demonstrates **network communication**, **threading**, and usage of the **GN build system**.

## 📌 Features

- ✅ Connects to a WebSocket echo server (`wss://echo.websocket.events`)  
- ✅ Sends & receives text messages in real-time  
- ✅ Command-line interface (CLI) for user interaction  
- ✅ Handles errors & disconnections gracefully  
- ✅ Uses GN (Generate Ninja) build system  
- ✅ Compatible with GCC & Clang  
- ✅ Optional SSL/TLS support for secure connections  

## 📂 Project Structure

WebSocketClient/ │── src/ │ ├── main.cpp │ ├── WebSocketClient.h │ ├── WebSocketClient.cpp │ ├── CommandLineInterface.h │ ├── CommandLineInterface.cpp │ ├── MessageHandler.h │ ├── MessageHandler.cpp │── tests/ │ ├── WebSocketClientTest.cpp │ ├── MessageHandlerTest.cpp │── out/ # (Build output directory) │── BUILD.gn # (GN build configuration file) │── README.md │── .gitignore

bash
Copy
Edit

## 🛠️ Installation & Setup  

### **🔹 Clone the Repository**
```sh
git clone https://github.com/your-username/WebSocketClient.git
cd WebSocketClient
🔹 Install Dependencies
For Windows (MSYS2)
sh
Copy
Edit
pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-ninja mingw-w64-x86_64-gn
For Linux (Ubuntu)
sh
Copy
Edit
sudo apt update
sudo apt install g++ ninja-build gn
🏗️ Build & Run
🔹 Generate Build Files
sh
Copy
Edit
gn gen out/Debug
🔹 Compile Using Ninja
sh
Copy
Edit
ninja -C out/Debug
🔹 Run the Application
sh
Copy
Edit
out/Debug/WebSocketClient
🔥 Example Output
yaml
Copy
Edit
Connected to server: wss://echo.websocket.events
Sending: Hello WebSocket!
Received: Hello WebSocket!
Sending: Test Message
Received: Test Message
Disconnected from server.
 
 
