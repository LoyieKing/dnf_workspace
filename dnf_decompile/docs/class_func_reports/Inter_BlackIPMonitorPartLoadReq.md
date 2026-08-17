# Inter_BlackIPMonitorPartLoadReq

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d87a0 Inter_BlackIPMonitorPartLoadReq::dispatch_sig  [0x084d87a0-0x84d87e7] ===
 84d87a0:	55                   	push   %ebp
 84d87a1:	89 e5                	mov    %esp,%ebp
 84d87a3:	83 ec 28             	sub    $0x28,%esp
 84d87a6:	e8 73 ad f5 ff       	call   843351e <_ZN25DB_BlackIPMonitorPartLoad11makeRequestEv>
 84d87ab:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d87b2:	00 
 84d87b3:	c7 44 24 08 63 3f 00 	movl   $0x3f63,0x8(%esp)
 84d87ba:	00 
 84d87bb:	c7 44 24 04 a0 c1 c8 	movl   $0x8c8c1a0,0x4(%esp)
 84d87c2:	08 
 84d87c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d87c6:	89 04 24             	mov    %eax,(%esp)
 84d87c9:	e8 4a 6f 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d87ce:	c7 44 24 04 38 94 c8 	movl   $0x8c89438,0x4(%esp)
 84d87d5:	08 
 84d87d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d87d9:	89 04 24             	mov    %eax,(%esp)
 84d87dc:	e8 a7 6f 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d87e1:	b8 00 00 00 00       	mov    $0x0,%eax
 84d87e6:	c9                   	leave
 84d87e7:	c3                   	ret

```

```c
// Inter_BlackIPMonitorPartLoadReq::dispatch_sig @ 0x84d87a0

/* Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  DB_BlackIPMonitorPartLoad::makeRequest();
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser*, char*, int)"
                     ,0x3f63,0);
  cMyTrace::operator()(local_1c,"Get BlackIPMonitor Request Part Load");
  return 0;
}

```

