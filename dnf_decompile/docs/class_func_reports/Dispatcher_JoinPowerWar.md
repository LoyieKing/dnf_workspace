# Dispatcher_JoinPowerWar

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821701a Dispatcher_JoinPowerWar::dispatch_sig  [0x0821701a-0x8217045] ===
 821701a:	55                   	push   %ebp
 821701b:	89 e5                	mov    %esp,%ebp
 821701d:	83 ec 28             	sub    $0x28,%esp
 8217020:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8217027:	00 
 8217028:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821702f:	00 
 8217030:	c7 44 24 04 40 da bc 	movl   $0x8bcda40,0x4(%esp)
 8217037:	08 
 8217038:	c7 04 24 d3 c8 00 00 	movl   $0xc8d3,(%esp)
 821703f:	e8 93 98 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8217044:	c9                   	leave
 8217045:	c3                   	ret

```

```c
// Dispatcher_JoinPowerWar::dispatch_sig @ 0x821701a

/* Dispatcher_JoinPowerWar::dispatch_sig(CUser*, PacketBuf&) */

void Dispatcher_JoinPowerWar::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  LineFunc(0xc8d3,"virtual int Dispatcher_JoinPowerWar::dispatch_sig(CUser*, PacketBuf&)",0,0);
  return;
}

```

