BUILD_DIR := .
SRC_DIR := ../src

CFLAG = -Wall
CC = g++

all: helloWorld DataTypes swapNumbers

helloWorld: ${SRC_DIR}/helloWorld.cpp
	${CC} ${CFLAG} ${SRC_DIR}/helloWorld.cpp -o ${BUILD_DIR}/helloWorld.o

dataTypes: ${SRC_DIR}/dataTypes.cpp
	${CC} ${CFLAG} ${SRC_DIR}/dataTypes.cpp -o ${BUILD_DIR}/dataTypes.o

swapNumbers: ${SRC_DIR}/swapNumbers.cpp
	${CC} ${CFLAG} ${SRC_DIR}/swapNumbers.cpp -o ${BUILD_DIR}/swapNumbers.o

clean:
	rm -r $(BUILD_DIR)/*.o