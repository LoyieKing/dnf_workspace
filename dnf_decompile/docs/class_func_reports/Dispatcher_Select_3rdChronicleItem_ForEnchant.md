# Dispatcher_Select_3rdChronicleItem_ForEnchant

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081d3420 Dispatcher_Select_3rdChronicleItem_ForEnchant::process  [0x081d3420-0x81d3439] ===
 81d3420:	55                   	push   %ebp
 81d3421:	89 e5                	mov    %esp,%ebp
 81d3423:	83 ec 10             	sub    $0x10,%esp
 81d3426:	8b 45 14             	mov    0x14(%ebp),%eax
 81d3429:	89 45 f8             	mov    %eax,-0x8(%ebp)
 81d342c:	8b 45 10             	mov    0x10(%ebp),%eax
 81d342f:	89 45 fc             	mov    %eax,-0x4(%ebp)
 81d3432:	b8 00 00 00 00       	mov    $0x0,%eax
 81d3437:	c9                   	leave
 81d3438:	c3                   	ret
 81d3439:	90                   	nop

```

```c
// Dispatcher_Select_3rdChronicleItem_ForEnchant::process @ 0x81d3420

/* Dispatcher_Select_3rdChronicleItem_ForEnchant::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Select_3rdChronicleItem_ForEnchant::process
          (CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  return 0;
}

```

---

## read

```asm
// === 081d3416 Dispatcher_Select_3rdChronicleItem_ForEnchant::read  [0x081d3416-0x81d341f] ===
 81d3416:	55                   	push   %ebp
 81d3417:	89 e5                	mov    %esp,%ebp
 81d3419:	b8 00 00 00 00       	mov    $0x0,%eax
 81d341e:	5d                   	pop    %ebp
 81d341f:	c3                   	ret

```

```c
// Dispatcher_Select_3rdChronicleItem_ForEnchant::read @ 0x81d3416

/* Dispatcher_Select_3rdChronicleItem_ForEnchant::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Select_3rdChronicleItem_ForEnchant::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

