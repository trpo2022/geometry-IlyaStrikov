CFLAGS = -Wall -Wextra -Werror

all: geometry

geometry: bin/geometry

bin/geometry: obj/src/geometry/geometry.o obj/src/libgeo/libgeo.a
	gcc -c -I src $(CFLAGS) -o $@ $< -lm
	
obj/src/geometry/geometry.o: src/geometry/geometry.cpp
	gcc -c -I src $(CFLAGS) -o $@ $< -lm	
	
obj/src/libgeo/libgeo.a: obj/src/libgeo/Check.o obj/src/libgeo/circle_area.o obj/src/libgeo/circle_perimeter.o obj/src/libgeo/triangle_area.o obj/src/libgeo/triangle_perimeter.o
	ar rcs $@ $^

obj/src/libgeo/Check.o: src/libgeo/Check.cpp
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libgeo/circle_area.o: src/libgeo/circle_area.cpp
	gcc -c -I src $(CFLAGS) -o $@ $< -lm	
	
obj/src/libgeo/circle_perimeter.o: src/libgeo/circle_perimeter.cpp
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libgeo/triangle_area.o: src/libgeo/triangle_area.cpp
	gcc -c -I src $(CFLAGS) -o $@ $< -lm

obj/src/libgeo/triangle_perimeter.o: src/libgeo/triangle_perimeter.cpp
	gcc -c -I src $(CFLAGS) -o $@ $< -lm	
	
main.o: test/main.c
	gcc -c $(CCFLAGS) -o $@ $< -lm

test_geo.o: test/test_geo.c
	gcc -c $(CCFLAGS) -o $@ $< -lm



.PHONY: clean

clean:
	rm obj/src/libgeo/*.a obj/src/libgeo/*.o obj/src/geometry/*.o bin/geometry
