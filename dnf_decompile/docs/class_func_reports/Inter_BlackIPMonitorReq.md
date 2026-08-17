# Inter_BlackIPMonitorReq

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d8608 Inter_BlackIPMonitorReq::dispatch_sig  [0x084d8608-0x84d864f] ===
 84d8608:	55                   	push   %ebp
 84d8609:	89 e5                	mov    %esp,%ebp
 84d860b:	83 ec 28             	sub    $0x28,%esp
 84d860e:	e8 6d a8 f5 ff       	call   8432e80 <_ZN17DB_BlackIPMonitor11makeRequestEv>
 84d8613:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d861a:	00 
 84d861b:	c7 44 24 08 28 3f 00 	movl   $0x3f28,0x8(%esp)
 84d8622:	00 
 84d8623:	c7 44 24 04 60 c2 c8 	movl   $0x8c8c260,0x4(%esp)
 84d862a:	08 
 84d862b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d862e:	89 04 24             	mov    %eax,(%esp)
 84d8631:	e8 e2 70 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d8636:	c7 44 24 04 f7 93 c8 	movl   $0x8c893f7,0x4(%esp)
 84d863d:	08 
 84d863e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d8641:	89 04 24             	mov    %eax,(%esp)
 84d8644:	e8 3f 71 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d8649:	b8 00 00 00 00       	mov    $0x0,%eax
 84d864e:	c9                   	leave
 84d864f:	c3                   	ret

```

```c
// Inter_BlackIPMonitorReq::dispatch_sig @ 0x84d8608

/* Inter_BlackIPMonitorReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitorReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  DB_BlackIPMonitor::makeRequest();
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_BlackIPMonitorReq::dispatch_sig(CUser*, char*, int)",0x3f28,
                     0);
  cMyTrace::operator()(local_1c,"Get BlackIPMonitor Request");
  return 0;
}

```

