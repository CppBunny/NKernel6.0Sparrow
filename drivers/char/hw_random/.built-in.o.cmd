cmd_drivers/char/hw_random/built-in.o :=  /usr/local/share/arm-eabi-4.7/bin/arm-eabi-ld -EL    -r -o drivers/char/hw_random/built-in.o drivers/char/hw_random/rng-core.o drivers/char/hw_random/msm_rng.o drivers/char/hw_random/fips_drbg.o drivers/char/hw_random/ctr_drbg.o drivers/char/hw_random/msm_fips_selftest.o 
