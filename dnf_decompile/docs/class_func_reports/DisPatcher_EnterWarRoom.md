# DisPatcher_EnterWarRoom

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820229e DisPatcher_EnterWarRoom::dispatch_sig  [0x0820229e-0x82022c9] ===
 820229e:	55                   	push   %ebp
 820229f:	89 e5                	mov    %esp,%ebp
 82022a1:	83 ec 48             	sub    $0x48,%esp
 82022a4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82022ab:	00 
 82022ac:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82022b3:	00 
 82022b4:	c7 44 24 04 40 f5 bc 	movl   $0x8bcf540,0x4(%esp)
 82022bb:	08 
 82022bc:	c7 04 24 fb 97 00 00 	movl   $0x97fb,(%esp)
 82022c3:	e8 0f e6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82022c8:	c9                   	leave
 82022c9:	c3                   	ret

```

```c
// DisPatcher_EnterWarRoom::dispatch_sig @ 0x820229e

/* DisPatcher_EnterWarRoom::dispatch_sig(CUser*, PacketBuf&) */

void DisPatcher_EnterWarRoom::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0x97fb,"virtual int DisPatcher_EnterWarRoom::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}

```

