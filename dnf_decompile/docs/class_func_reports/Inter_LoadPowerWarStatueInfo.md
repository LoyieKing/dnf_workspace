# Inter_LoadPowerWarStatueInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084da3be Inter_LoadPowerWarStatueInfo::dispatch_sig  [0x084da3be-0x84da3e5] ===
 84da3be:	55                   	push   %ebp
 84da3bf:	89 e5                	mov    %esp,%ebp
 84da3c1:	83 ec 28             	sub    $0x28,%esp
 84da3c4:	8b 45 10             	mov    0x10(%ebp),%eax
 84da3c7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84da3ca:	a1 50 be 40 09       	mov    0x940be50,%eax
 84da3cf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84da3d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84da3d6:	89 04 24             	mov    %eax,(%esp)
 84da3d9:	e8 70 49 fa ff       	call   847ed4e <_ZN13CPowerManager25SetPowerWarUserStatueInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFO>
 84da3de:	b8 00 00 00 00       	mov    $0x0,%eax
 84da3e3:	c9                   	leave
 84da3e4:	c3                   	ret
 84da3e5:	90                   	nop

```

```c
// Inter_LoadPowerWarStatueInfo::dispatch_sig @ 0x84da3be

/* Inter_LoadPowerWarStatueInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPowerWarStatueInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CPowerManager::SetPowerWarUserStatueInfo
            (GlobalData::s_power_manager,(SIG_LOAD_POWER_WAR_STATUE_INFO *)param_3);
  return 0;
}

```

