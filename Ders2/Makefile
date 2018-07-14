obj-m += khello.o
obj-m += khello2.o

all:
				make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
				make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
