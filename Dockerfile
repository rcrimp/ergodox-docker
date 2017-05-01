FROM ubuntu:14.04

RUN apt-get update && \
    apt-get install -y git-core && \
    apt-get install -y gcc-avr binutils-avr avr-libc make

VOLUME /compiled

COPY firmware/ /firmware/
COPY start.sh /

CMD [ "./start.sh" ]