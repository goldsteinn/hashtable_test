CXX=g++
CXXFLAGS=-O3 -ggdb -march=native

K=INT32
V=INT32
K_LEN=0
V_LEN=0
ISIZE=0
LEN=10
QR=0
RR=0
IFR=0
QFR=0
RFR=0

all:
	$(CXX) $(CXXFLAGS) driver.cpp -DK_$(K) -DV_$(V) -DK_LEN=$(K_LEN) -DV_LEN=$(V_LEN) -DINIT_SIZE=$(ISIZE) -DTEST_LEN=$(LEN) -DQUERY_RATE=$(QR) -DREMOVE_RATE=$(RR) -DINSERT_FAILURE_RATE=$(IFR) -DQUERY_FAILURE_RATE=$(QFR) -DREMOVE_FAILURE_RATE=$(RFR) -c
	$(CXX) $(CXXFLAGS) driver.o -o driver-K=$(K)-V=$(V)-K_LEN=$(K_LEN)-V_LEN=$(V_LEN)-ISIZE=$(INIT_SIZE)-LEN=$(LEN)-QR=$(QR)-RR=$(RR)-IFR=$(IFR)-QFR=$(QFR)-RFR=$(RFR)

clean:
	rm -rf *~ *#* *.o driver-K=*-V=* my_table/*~
