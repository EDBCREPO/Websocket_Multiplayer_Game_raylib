time g++ -o main main.cpp -I./include -L./lib -lraylib -lssl -lcrypto -std=c++11
 ./main ?mode=server # Run As Server
#./main ?mode=client # Run As Client