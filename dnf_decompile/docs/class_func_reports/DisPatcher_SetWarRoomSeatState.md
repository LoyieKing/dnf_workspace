# DisPatcher_SetWarRoomSeatState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082022ca DisPatcher_SetWarRoomSeatState::dispatch_sig  [0x082022ca-0x82022f5] ===
 82022ca:	55                   	push   %ebp
 82022cb:	89 e5                	mov    %esp,%ebp
 82022cd:	83 ec 38             	sub    $0x38,%esp
 82022d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82022d7:	00 
 82022d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82022df:	00 
 82022e0:	c7 44 24 04 e0 f4 bc 	movl   $0x8bcf4e0,0x4(%esp)
 82022e7:	08 
 82022e8:	c7 04 24 48 98 00 00 	movl   $0x9848,(%esp)
 82022ef:	e8 e3 e5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82022f4:	c9                   	leave
 82022f5:	c3                   	ret

```

```c
// DisPatcher_SetWarRoomSeatState::dispatch_sig @ 0x82022ca

/* DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x9848,"virtual int DisPatcher_SetWarRoomSeatState::dispatch_sig(CUser*, PacketBuf&)",0,0
          );
  return;
}

```

