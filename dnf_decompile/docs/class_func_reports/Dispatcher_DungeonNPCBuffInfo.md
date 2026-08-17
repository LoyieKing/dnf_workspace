# Dispatcher_DungeonNPCBuffInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08223bb6 Dispatcher_DungeonNPCBuffInfo::dispatch_sig  [0x08223bb6-0x8223bbf] ===
 8223bb6:	55                   	push   %ebp
 8223bb7:	89 e5                	mov    %esp,%ebp
 8223bb9:	b8 00 00 00 00       	mov    $0x0,%eax
 8223bbe:	5d                   	pop    %ebp
 8223bbf:	c3                   	ret

```

```c
// Dispatcher_DungeonNPCBuffInfo::dispatch_sig @ 0x8223bb6

/* Dispatcher_DungeonNPCBuffInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_DungeonNPCBuffInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  return 0;
}

```

