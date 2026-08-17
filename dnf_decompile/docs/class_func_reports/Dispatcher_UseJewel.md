# Dispatcher_UseJewel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08217bd6 Dispatcher_UseJewel::dispatch_sig  [0x08217bd6-0x8217c05] ===
 8217bd6:	55                   	push   %ebp
 8217bd7:	89 e5                	mov    %esp,%ebp
 8217bd9:	81 ec 88 02 00 00    	sub    $0x288,%esp
 8217bdf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217be6:	00 
 8217be7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8217bee:	00 
 8217bef:	c7 44 24 04 20 d9 bc 	movl   $0x8bcd920,0x4(%esp)
 8217bf6:	08 
 8217bf7:	c7 04 24 e2 c9 00 00 	movl   $0xc9e2,(%esp)
 8217bfe:	e8 d4 8c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217c03:	c9                   	leave
 8217c04:	c3                   	ret
 8217c05:	90                   	nop

```

```c
// Dispatcher_UseJewel::dispatch_sig @ 0x8217bd6

/* Dispatcher_UseJewel::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_UseJewel::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xc9e2,"virtual int Dispatcher_UseJewel::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}

```

