cmd_security/built-in.o :=  /usr/local/share/arm-eabi-4.9/bin/arm-linux-gnueabi-ld -EL    -r -o security/built-in.o security/keys/built-in.o security/commoncap.o security/min_addr.o security/security.o security/capability.o security/selinux/built-in.o security/lsm_audit.o 
