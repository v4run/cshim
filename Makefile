all: shim.so app

shim.so: shim.c
	cc -shared -o shim.so shim.c

app: main.c
	cc -o app main.c

.PHONY: clean
clean:
	rm -rf shim.so app

.PHONY: up
up:
	docker compose up

.PHONY: down
down:
	docker compose down

.PHONY: build
build:
	docker compose build
