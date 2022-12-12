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

#6 create a Volume: docker run -v <host>:<container> -ti <image> bash
   -v: create a volume option
   <host directory> the directory on the host machine
   <container directory> the directory on the docker container
   <image> the name os image to run.


#01_06: https://github.com/ipkn/crow download cpp file from this website.

  + to run the server with port 8080 we need to add -p before running the docker.
  + docker run -ti cppbox -p 8080:8080 -e PORT 8080 bash



#8 share docker image:
  + Log in to Docker hub
      + docker login --usernam= xxx
      + docker images [to see the image on our machines.] --> check images ID (88fabdb90f7e)
  + Tag the image
      + docker tag 88fabdb90f7e ph0123/cppbox:latest
  + Push the image
      + docker push ph0123/cppbox
  + Verify the push: check it on hub.docker.com


