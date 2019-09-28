

all:
	-rm -rf build
	mkdir build
	cmake -S src -B build
	make -C build

clean:
	-rm -rf build
