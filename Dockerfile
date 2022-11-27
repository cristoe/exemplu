FROM gcc:latest
WORKDIR /usr/src/folder
COPY cristina.c .
RUN gcc -o cristina cristina.c -lstdc++
CMD ["./cristina"]