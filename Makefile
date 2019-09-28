

all:
	-rm -rf build
	mkdir build
	cmake -S lib -B build
	make -C build

clean:
	-rm -rf build
