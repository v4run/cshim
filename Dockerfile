FROM alpine:3.18
RUN apk add --update gcc make musl-dev
COPY . /project
WORKDIR /project
RUN make clean all
ENTRYPOINT ["/project/app"]
