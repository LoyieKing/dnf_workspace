# Inter_ReloadPowerWarRanker

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dceec Inter_ReloadPowerWarRanker::dispatch_sig  [0x084dceec-0x84dcf49] ===
 84dceec:	55                   	push   %ebp
 84dceed:	89 e5                	mov    %esp,%ebp
 84dceef:	83 ec 28             	sub    $0x28,%esp
 84dcef2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84dcef9:	00 
 84dcefa:	c7 44 24 08 2b 48 00 	movl   $0x482b,0x8(%esp)
 84dcf01:	00 
 84dcf02:	c7 44 24 04 20 bd c8 	movl   $0x8c8bd20,0x4(%esp)
 84dcf09:	08 
 84dcf0a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dcf0d:	89 04 24             	mov    %eax,(%esp)
 84dcf10:	e8 03 28 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84dcf15:	c7 44 24 04 dc 98 c8 	movl   $0x8c898dc,0x4(%esp)
 84dcf1c:	08 
 84dcf1d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84dcf20:	89 04 24             	mov    %eax,(%esp)
 84dcf23:	e8 60 28 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84dcf28:	a1 50 be 40 09       	mov    0x940be50,%eax
 84dcf2d:	89 04 24             	mov    %eax,(%esp)
 84dcf30:	e8 a9 26 fa ff       	call   847f5de <_ZN13CPowerManager12ClearMVPInfoEv>
 84dcf35:	a1 50 be 40 09       	mov    0x940be50,%eax
 84dcf3a:	89 04 24             	mov    %eax,(%esp)
 84dcf3d:	e8 bc 25 fa ff       	call   847f4fe <_ZN13CPowerManager14LoadRankerInfoEv>
 84dcf42:	b8 00 00 00 00       	mov    $0x0,%eax
 84dcf47:	c9                   	leave
 84dcf48:	c3                   	ret
 84dcf49:	90                   	nop

```

```c
// Inter_ReloadPowerWarRanker::dispatch_sig @ 0x84dceec

/* Inter_ReloadPowerWarRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReloadPowerWarRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_ReloadPowerWarRanker::dispatch_sig(CUser*, char*, int)",
                     0x482b,0);
  cMyTrace::operator()(local_1c,"Receive Packet_Request_Reload_Power_War_Ranker");
  CPowerManager::ClearMVPInfo(GlobalData::s_power_manager);
  CPowerManager::LoadRankerInfo();
  return 0;
}

```

