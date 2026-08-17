# DisPatcher_DieWarRoomCharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082022f6 DisPatcher_DieWarRoomCharacter::dispatch_sig  [0x082022f6-0x8202321] ===
 82022f6:	55                   	push   %ebp
 82022f7:	89 e5                	mov    %esp,%ebp
 82022f9:	83 ec 38             	sub    $0x38,%esp
 82022fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202303:	00 
 8202304:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820230b:	00 
 820230c:	c7 44 24 04 80 f4 bc 	movl   $0x8bcf480,0x4(%esp)
 8202313:	08 
 8202314:	c7 04 24 67 98 00 00 	movl   $0x9867,(%esp)
 820231b:	e8 b7 e5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8202320:	c9                   	leave
 8202321:	c3                   	ret

```

```c
// DisPatcher_DieWarRoomCharacter::dispatch_sig @ 0x82022f6

/* DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x9867,"virtual int DisPatcher_DieWarRoomCharacter::dispatch_sig(CUser*, PacketBuf&)",0,0
          );
  return;
}

```

