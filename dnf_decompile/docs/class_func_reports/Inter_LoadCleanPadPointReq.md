# Inter_LoadCleanPadPointReq

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d553e Inter_LoadCleanPadPointReq::dispatch_sig  [0x084d553e-0x84d5585] ===
 84d553e:	55                   	push   %ebp
 84d553f:	89 e5                	mov    %esp,%ebp
 84d5541:	83 ec 28             	sub    $0x28,%esp
 84d5544:	e8 57 9a f5 ff       	call   842efa0 <_ZN20DB_LoadCleanPadPoint11makeRequestEv>
 84d5549:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d5550:	00 
 84d5551:	c7 44 24 08 1d 37 00 	movl   $0x371d,0x8(%esp)
 84d5558:	00 
 84d5559:	c7 44 24 04 80 c6 c8 	movl   $0x8c8c680,0x4(%esp)
 84d5560:	08 
 84d5561:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5564:	89 04 24             	mov    %eax,(%esp)
 84d5567:	e8 ac a1 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d556c:	c7 44 24 04 b4 91 c8 	movl   $0x8c891b4,0x4(%esp)
 84d5573:	08 
 84d5574:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5577:	89 04 24             	mov    %eax,(%esp)
 84d557a:	e8 09 a2 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d557f:	b8 00 00 00 00       	mov    $0x0,%eax
 84d5584:	c9                   	leave
 84d5585:	c3                   	ret

```

```c
// Inter_LoadCleanPadPointReq::dispatch_sig @ 0x84d553e

/* Inter_LoadCleanPadPointReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCleanPadPointReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  DB_LoadCleanPadPoint::makeRequest();
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_LoadCleanPadPointReq::dispatch_sig(CUser*, char*, int)",
                     0x371d,0);
  cMyTrace::operator()(local_1c,"Get CleanPad point Request");
  return 0;
}

```

