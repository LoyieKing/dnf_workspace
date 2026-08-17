# yaSSL__ServerKeyBase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## get_length

```asm
// === 08746e50 yaSSL::ServerKeyBase::get_length  [0x08746e50-0x8746e5f] ===
 8746e50:	55                   	push   %ebp
 8746e51:	31 c0                	xor    %eax,%eax
 8746e53:	89 e5                	mov    %esp,%ebp
 8746e55:	5d                   	pop    %ebp
 8746e56:	c3                   	ret
 8746e57:	90                   	nop
 8746e58:	90                   	nop
 8746e59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerKeyBase::get_length @ 0x8746e50

/* yaSSL::ServerKeyBase::get_length() const */

undefined4 yaSSL::ServerKeyBase::get_length(void)

{
  return 0;
}

```

---

## get_serverKey

```asm
// === 08746e60 yaSSL::ServerKeyBase::get_serverKey  [0x08746e60-0x8746e6f] ===
 8746e60:	55                   	push   %ebp
 8746e61:	31 c0                	xor    %eax,%eax
 8746e63:	89 e5                	mov    %esp,%ebp
 8746e65:	5d                   	pop    %ebp
 8746e66:	c3                   	ret
 8746e67:	90                   	nop
 8746e68:	90                   	nop
 8746e69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerKeyBase::get_serverKey @ 0x8746e60

/* yaSSL::ServerKeyBase::get_serverKey() const */

undefined4 yaSSL::ServerKeyBase::get_serverKey(void)

{
  return 0;
}

```

