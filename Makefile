CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -Ofast -mavx -mfma -msse -mmmx
BINS=./euler_new ./euler_old

all: $(BINS)

clean:
	rm -rf $(BINS)

hyperfine: all
	hyperfine --warmup=100 --runs=100000 $(BINS)
