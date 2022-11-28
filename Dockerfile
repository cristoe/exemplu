FROM gcc:latest
WORKDIR /usr/src/folder
COPY MAP.c .
RUN gcc -o MAP MAP.c -lstdc++
CMD ["./MAP"]