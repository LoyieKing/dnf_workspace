# Dispatcher_Join_Power

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820ba38 Dispatcher_Join_Power::dispatch_sig  [0x0820ba38-0x820ba63] ===
 820ba38:	55                   	push   %ebp
 820ba39:	89 e5                	mov    %esp,%ebp
 820ba3b:	83 ec 38             	sub    $0x38,%esp
 820ba3e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820ba45:	00 
 820ba46:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820ba4d:	00 
 820ba4e:	c7 44 24 04 40 e0 bc 	movl   $0x8bce040,0x4(%esp)
 820ba55:	08 
 820ba56:	c7 04 24 a7 a8 00 00 	movl   $0xa8a7,(%esp)
 820ba5d:	e8 75 4e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820ba62:	c9                   	leave
 820ba63:	c3                   	ret

```

```c
// Dispatcher_Join_Power::dispatch_sig @ 0x820ba38

/* Dispatcher_Join_Power::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_Join_Power::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xa8a7,"virtual int Dispatcher_Join_Power::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}

```

