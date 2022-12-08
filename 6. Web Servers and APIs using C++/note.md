#1 install Docker community version for free.
#2 install Atom - A hacker text editor.
#3 create docker file 
FROM gcc:7.3.0

RUN apt-get -qq update
RUN apt-get -qq upgrade
RUN apt-get -qq install cmake

RUN apt-get -qq install libboost-all-dev=1.62.0.1
RUN apt-get -qq install build-essential libtcmalloc-minimal4 && \
  ln -s /usr/lib/libtcmalloc_minimal.so.4 /usr/lib/libtcmalloc_minimal.so

#4 Build docker file:  "docker build -t cppbox ."
#5 Run docker file: "docker run -ti cppbox bash" 