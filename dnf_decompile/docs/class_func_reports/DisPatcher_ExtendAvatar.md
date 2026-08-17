# DisPatcher_ExtendAvatar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081eddec DisPatcher_ExtendAvatar::dispatch_sig  [0x081eddec-0x81eddf5] ===
 81eddec:	55                   	push   %ebp
 81edded:	89 e5                	mov    %esp,%ebp
 81eddef:	b8 00 00 00 00       	mov    $0x0,%eax
 81eddf4:	5d                   	pop    %ebp
 81eddf5:	c3                   	ret

```

```c
// DisPatcher_ExtendAvatar::dispatch_sig @ 0x81eddec

/* DisPatcher_ExtendAvatar::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_ExtendAvatar::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  return 0;
}

```

