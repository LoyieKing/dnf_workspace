# Dispatcher_Secede_Power

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820ba64 Dispatcher_Secede_Power::dispatch_sig  [0x0820ba64-0x820ba8f] ===
 820ba64:	55                   	push   %ebp
 820ba65:	89 e5                	mov    %esp,%ebp
 820ba67:	83 ec 28             	sub    $0x28,%esp
 820ba6a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820ba71:	00 
 820ba72:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820ba79:	00 
 820ba7a:	c7 44 24 04 e0 df bc 	movl   $0x8bcdfe0,0x4(%esp)
 820ba81:	08 
 820ba82:	c7 04 24 1a a9 00 00 	movl   $0xa91a,(%esp)
 820ba89:	e8 49 4e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820ba8e:	c9                   	leave
 820ba8f:	c3                   	ret

```

```c
// Dispatcher_Secede_Power::dispatch_sig @ 0x820ba64

/* Dispatcher_Secede_Power::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_Secede_Power::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xa91a,"virtual int Dispatcher_Secede_Power::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}

```

