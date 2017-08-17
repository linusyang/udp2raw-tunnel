FROM privatelo/cross-multi:latest
ADD . /udp2raw
RUN \
  cd /udp2raw && \
  mv makefile.docker makefile && \
  make
