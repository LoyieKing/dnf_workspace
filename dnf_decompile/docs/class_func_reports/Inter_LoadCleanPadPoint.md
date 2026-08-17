# Inter_LoadCleanPadPoint

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d5586 Inter_LoadCleanPadPoint::dispatch_sig  [0x084d5586-0x84d55a3] ===
 84d5586:	55                   	push   %ebp
 84d5587:	89 e5                	mov    %esp,%ebp
 84d5589:	83 ec 28             	sub    $0x28,%esp
 84d558c:	8b 45 10             	mov    0x10(%ebp),%eax
 84d558f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d5592:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d5595:	89 04 24             	mov    %eax,(%esp)
 84d5598:	e8 43 36 c2 ff       	call   80f8be0 <_ZN8WongWork12CMCAPManager19setPointPerHackTypeEPi>
 84d559d:	b8 00 00 00 00       	mov    $0x0,%eax
 84d55a2:	c9                   	leave
 84d55a3:	c3                   	ret

```

```c
// Inter_LoadCleanPadPoint::dispatch_sig @ 0x84d5586

/* Inter_LoadCleanPadPoint::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCleanPadPoint::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  WongWork::CMCAPManager::setPointPerHackType((int *)param_3);
  return 0;
}

```

