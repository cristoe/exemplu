FROM gcc:latest
WORKDIR /usr/src/folder
COPY map.c .
RUN gcc -o map map.c -lstdc++
CMD ["./map"]