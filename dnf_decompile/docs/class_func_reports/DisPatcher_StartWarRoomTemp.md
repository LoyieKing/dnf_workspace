# DisPatcher_StartWarRoomTemp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08201b06 DisPatcher_StartWarRoomTemp::dispatch_sig  [0x08201b06-0x8201b31] ===
 8201b06:	55                   	push   %ebp
 8201b07:	89 e5                	mov    %esp,%ebp
 8201b09:	83 ec 28             	sub    $0x28,%esp
 8201b0c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8201b13:	00 
 8201b14:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8201b1b:	00 
 8201b1c:	c7 44 24 04 00 f6 bc 	movl   $0x8bcf600,0x4(%esp)
 8201b23:	08 
 8201b24:	c7 04 24 37 97 00 00 	movl   $0x9737,(%esp)
 8201b2b:	e8 a7 ed 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8201b30:	c9                   	leave
 8201b31:	c3                   	ret

```

```c
// DisPatcher_StartWarRoomTemp::dispatch_sig @ 0x8201b06

/* DisPatcher_StartWarRoomTemp::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_StartWarRoomTemp::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x9737,"virtual int DisPatcher_StartWarRoomTemp::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}

```

