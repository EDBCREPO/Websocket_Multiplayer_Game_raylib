# Websocket Multiplayer Game - raylib

This is a simple implementation of a real-time Multiplayer game using C++, raylib and nodepp

inspired by: [Create your own online multiplayer Game](https://medium.com/@EDBCBlog/create-your-own-online-multiplayer-small-fast-and-fun-with-raylib-nodepp-and-websockets-190f5c174094)

# Dependencies
```bash
📌 nodepp: https://github.com/NodeppOficial/nodepp
📌 raylib: https://www.raylib.com/
```

# Preview
[Image](https://github.com/user-attachments/assets/6651229c-5401-411b-b162-089f478dbd84)

# Build & Run
```bash
time g++ -o main main.cpp -I./include -L./lib -lraylib -lssl -lcrypto -std=c++11 
./main ?mode=server #Run As Server Mode
./main ?mode=client #Run As Client Mode
```
