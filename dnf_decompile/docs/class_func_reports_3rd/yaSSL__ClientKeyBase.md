# yaSSL__ClientKeyBase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## get_clientKey

```asm
// === 08746f10 yaSSL::ClientKeyBase::get_clientKey  [0x08746f10-0x8746f1f] ===
 8746f10:	55                   	push   %ebp
 8746f11:	31 c0                	xor    %eax,%eax
 8746f13:	89 e5                	mov    %esp,%ebp
 8746f15:	5d                   	pop    %ebp
 8746f16:	c3                   	ret
 8746f17:	90                   	nop
 8746f18:	90                   	nop
 8746f19:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientKeyBase::get_clientKey @ 0x8746f10

/* yaSSL::ClientKeyBase::get_clientKey() const */

undefined4 yaSSL::ClientKeyBase::get_clientKey(void)

{
  return 0;
}

```

---

## get_length

```asm
// === 08746f00 yaSSL::ClientKeyBase::get_length  [0x08746f00-0x8746f0f] ===
 8746f00:	55                   	push   %ebp
 8746f01:	31 c0                	xor    %eax,%eax
 8746f03:	89 e5                	mov    %esp,%ebp
 8746f05:	5d                   	pop    %ebp
 8746f06:	c3                   	ret
 8746f07:	90                   	nop
 8746f08:	90                   	nop
 8746f09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ClientKeyBase::get_length @ 0x8746f00

/* yaSSL::ClientKeyBase::get_length() const */

undefined4 yaSSL::ClientKeyBase::get_length(void)

{
  return 0;
}

```

