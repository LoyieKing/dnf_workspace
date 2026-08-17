# Inter_LoadBreakAwayPreventSystem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d928c Inter_LoadBreakAwayPreventSystem::dispatch_sig  [0x084d928c-0x84d92b3] ===
 84d928c:	55                   	push   %ebp
 84d928d:	89 e5                	mov    %esp,%ebp
 84d928f:	83 ec 28             	sub    $0x28,%esp
 84d9292:	8b 45 10             	mov    0x10(%ebp),%eax
 84d9295:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d9298:	a1 6c f7 41 09       	mov    0x941f76c,%eax
 84d929d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d92a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d92a4:	89 04 24             	mov    %eax,(%esp)
 84d92a7:	e8 f2 31 e4 ff       	call   831c49e <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER>
 84d92ac:	b8 00 00 00 00       	mov    $0x0,%eax
 84d92b1:	c9                   	leave
 84d92b2:	c3                   	ret
 84d92b3:	90                   	nop

```

```c
// Inter_LoadBreakAwayPreventSystem::dispatch_sig @ 0x84d928c

/* Inter_LoadBreakAwayPreventSystem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadBreakAwayPreventSystem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  break_away_prevent::CBreakAwayPreventSystem::loadDbData
            (GlobalData::s_BreakAwaySys,(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *)param_3);
  return 0;
}

```

