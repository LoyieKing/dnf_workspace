# Inter_LoadPowerWarStatueRanker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da394 Inter_LoadPowerWarStatueRanker::dispatch_sig  [0x084da394-0x84da3bd] ===
 84da394:	55                   	push   %ebp
 84da395:	89 e5                	mov    %esp,%ebp
 84da397:	83 ec 28             	sub    $0x28,%esp
 84da39a:	8b 45 10             	mov    0x10(%ebp),%eax
 84da39d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84da3a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84da3a3:	89 c2                	mov    %eax,%edx
 84da3a5:	a1 50 be 40 09       	mov    0x940be50,%eax
 84da3aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da3ae:	89 04 24             	mov    %eax,(%esp)
 84da3b1:	e8 36 48 fa ff       	call   847ebec <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj>
 84da3b6:	b8 00 00 00 00       	mov    $0x0,%eax
 84da3bb:	c9                   	leave
 84da3bc:	c3                   	ret
 84da3bd:	90                   	nop

```

```c
// Inter_LoadPowerWarStatueRanker::dispatch_sig @ 0x84da394

/* Inter_LoadPowerWarStatueRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPowerWarStatueRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CPowerManager::SetPowerWarUserRankingInfo(GlobalData::s_power_manager,(uint *)param_3);
  return 0;
}

```

