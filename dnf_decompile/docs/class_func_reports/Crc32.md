# Crc32

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## crc32

```asm
// === 08ad34ae Crc32::crc32  [0x08ad34ae-0x8ad3503] ===
 8ad34ae:	55                   	push   %ebp
 8ad34af:	89 e5                	mov    %esp,%ebp
 8ad34b1:	a1 3c 1e 50 09       	mov    0x9501e3c,%eax
 8ad34b6:	85 c0                	test   %eax,%eax
 8ad34b8:	75 05                	jne    8ad34bf <_ZN5Crc325crc32EjPKcj+0x11>
 8ad34ba:	e8 61 ff ff ff       	call   8ad3420 <_ZL14make_crc_tablev>
 8ad34bf:	f7 55 08             	notl   0x8(%ebp)
 8ad34c2:	eb 29                	jmp    8ad34ed <_ZN5Crc325crc32EjPKcj+0x3f>
 8ad34c4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad34c7:	89 c2                	mov    %eax,%edx
 8ad34c9:	c1 ea 08             	shr    $0x8,%edx
 8ad34cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad34cf:	0f b6 00             	movzbl (%eax),%eax
 8ad34d2:	0f b6 c0             	movzbl %al,%eax
 8ad34d5:	33 45 08             	xor    0x8(%ebp),%eax
 8ad34d8:	25 ff 00 00 00       	and    $0xff,%eax
 8ad34dd:	8b 04 85 40 1a 50 09 	mov    0x9501a40(,%eax,4),%eax
 8ad34e4:	31 d0                	xor    %edx,%eax
 8ad34e6:	89 45 08             	mov    %eax,0x8(%ebp)
 8ad34e9:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 8ad34ed:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad34f1:	0f 95 c0             	setne  %al
 8ad34f4:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 8ad34f8:	84 c0                	test   %al,%al
 8ad34fa:	75 c8                	jne    8ad34c4 <_ZN5Crc325crc32EjPKcj+0x16>
 8ad34fc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad34ff:	f7 d0                	not    %eax
 8ad3501:	5d                   	pop    %ebp
 8ad3502:	c3                   	ret
 8ad3503:	90                   	nop

```

```c
// Crc32::crc32 @ 0x8ad34ae

uint32 Crc32::crc32(uint32 crc,char *buf,size_t len)

{
  bool bVar1;
  
  if (crc_table[0xff] == 0) {
    make_crc_table();
  }
  crc = ~crc;
  while (bVar1 = len != 0, len = len - 1, bVar1) {
    crc = crc_table[((byte)*buf ^ crc) & 0xff] ^ crc >> 8;
    buf = buf + 1;
  }
  return ~crc;
}

```

---

## getCrc32Table

```asm
// === 08ad3504 Crc32::getCrc32Table  [0x08ad3504-0x8ad351b] ===
 8ad3504:	55                   	push   %ebp
 8ad3505:	89 e5                	mov    %esp,%ebp
 8ad3507:	a1 3c 1e 50 09       	mov    0x9501e3c,%eax
 8ad350c:	85 c0                	test   %eax,%eax
 8ad350e:	75 05                	jne    8ad3515 <_ZN5Crc3213getCrc32TableEv+0x11>
 8ad3510:	e8 0b ff ff ff       	call   8ad3420 <_ZL14make_crc_tablev>
 8ad3515:	b8 40 1a 50 09       	mov    $0x9501a40,%eax
 8ad351a:	5d                   	pop    %ebp
 8ad351b:	c3                   	ret

```

```c
// Crc32::getCrc32Table @ 0x8ad3504

uint32 * Crc32::getCrc32Table(void)

{
  if (crc_table[0xff] == 0) {
    make_crc_table();
  }
  return crc_table;
}

```

