#include "WebSocketClient.h"
#include <iostream>
#include <thread>  // ✅ Required for std::thread & std::this_thread
#include <chrono>  // ✅ Required for std::chrono

WebSocketClient::WebSocketClient(const std::string& url) : serverUrl(url), isConnected(false) {}

WebSocketClient::~WebSocketClient() {
    disconnect();
}

void WebSocketClient::connect() {
    isConnected = true;
    std::cout << "Connected to server: " << serverUrl << std::endl;
    
    // ✅ Use lambda to start a thread correctly
    std::thread([this]() { handleIncomingMessages(); }).detach();
}

void WebSocketClient::sendMessage(const std::string& message) {
    if (isConnected) {
        std::cout << "Sending: " << message << std::endl;
    } else {
        std::cerr << "Error: Not connected to server." << std::endl;
    }
}

void WebSocketClient::disconnect() {
    if (isConnected) {
        isConnected = false;
        std::cout << "Disconnected from server." << std::endl;
    }
}

void WebSocketClient::handleIncomingMessages() {
    while (isConnected) {
        std::this_thread::sleep_for(std::chrono::seconds(2));  // ✅ Ensure correct namespace
        std::cout << "Received: Echoed message" << std::endl;
    }
}
