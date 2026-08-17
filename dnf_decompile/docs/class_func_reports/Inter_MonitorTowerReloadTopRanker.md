# Inter_MonitorTowerReloadTopRanker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d334a Inter_MonitorTowerReloadTopRanker::dispatch_sig  [0x084d334a-0x84d3363] ===
 84d334a:	55                   	push   %ebp
 84d334b:	89 e5                	mov    %esp,%ebp
 84d334d:	83 ec 18             	sub    $0x18,%esp
 84d3350:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84d3357:	e8 b4 75 f5 ff       	call   842a910 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb>
 84d335c:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3361:	c9                   	leave
 84d3362:	c3                   	ret
 84d3363:	90                   	nop

```

```c
// Inter_MonitorTowerReloadTopRanker::dispatch_sig @ 0x84d334a

/* Inter_MonitorTowerReloadTopRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorTowerReloadTopRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  DB_DeathTowerLoadTopRanker::makeRequest(true);
  return 0;
}

```

