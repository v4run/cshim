# shim

Example of a library shim in c. Adds a shim for `malloc` and `free`.

## Running

```shell
make up
```

### Sample output

```shell
docker compose logs shimapp
```

```
shimapp-1  | Allocating 4 bytes at: 0xffffb50e7870
shimapp-1  | 0xffffb50e7870 (10)
shimapp-1  | Freeing 0xffffb50e7870
```

```shell
docker compose logs app
```

```
app-1  | 0xffff90838820 (10)
```
