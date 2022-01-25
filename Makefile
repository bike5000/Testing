CC=gcc
CFLAGS=
EXE_NAME=exe

PROJECT_HOME_DIR ?= .
TESTING_DIR ?= $(PROJECT_HOME_DIR)

HEADERS_DIR = $(TESTING_DIR)/headers
C_DIR = $(TESTING_DIR)/C_files
BUILD_DIR=$(TESTING_DIR)/build

DEP = $(HEADERS_DIR)

testmake: $(C_DIR) $(DEP)
	mkdir -p $(BUILD_DIR)
	cd $(BUILD_DIR) && \
	C_INCLUDE_PATH=.$(DEP) gcc -c .$(C_DIR)/*.c $(CFLAGS) && \
	gcc -o $(EXE_NAME) *.o

test:
	./$(BUILD_DIR)/$(EXE_NAME)

.PHONY: clean

clean:
	rm -rf $(BUILD_DIR)
