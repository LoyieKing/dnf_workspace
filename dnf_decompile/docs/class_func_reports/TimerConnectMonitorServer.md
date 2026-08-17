# TimerConnectMonitorServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 086380bc TimerConnectMonitorServer::dispatch_sig  [0x086380bc-0x863819f] ===
 86380bc:	55                   	push   %ebp
 86380bd:	89 e5                	mov    %esp,%ebp
 86380bf:	56                   	push   %esi
 86380c0:	53                   	push   %ebx
 86380c1:	83 ec 20             	sub    $0x20,%esp
 86380c4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 86380c9:	c7 44 24 08 aa 0e 00 	movl   $0xeaa,0x8(%esp)
 86380d0:	00 
 86380d1:	c7 44 24 04 0e 6d ce 	movl   $0x8ce6d0e,0x4(%esp)
 86380d8:	08 
 86380d9:	89 04 24             	mov    %eax,(%esp)
 86380dc:	e8 a5 79 c5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 86380e1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86380e8:	00 
 86380e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 86380ed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86380f0:	89 04 24             	mov    %eax,(%esp)
 86380f3:	e8 2e 0b a9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 86380f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86380fb:	89 04 24             	mov    %eax,(%esp)
 86380fe:	e8 43 0b a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8638103:	c7 44 24 04 21 01 00 	movl   $0x121,0x4(%esp)
 863810a:	00 
 863810b:	89 04 24             	mov    %eax,(%esp)
 863810e:	e8 43 0b a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8638113:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638116:	89 04 24             	mov    %eax,(%esp)
 8638119:	e8 28 0b a9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 863811e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8638125:	ff 
 8638126:	89 04 24             	mov    %eax,(%esp)
 8638129:	e8 28 0b a9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 863812e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638131:	89 04 24             	mov    %eax,(%esp)
 8638134:	e8 15 0b a9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8638139:	89 04 24             	mov    %eax,(%esp)
 863813c:	e8 ad 51 00 00       	call   863d2ee <_ZN12CStreamGuard11GetInBufferI25Packet_Tcp_Server_ConnectEEPT_v>
 8638141:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638144:	8b 45 10             	mov    0x10(%ebp),%eax
 8638147:	89 c2                	mov    %eax,%edx
 8638149:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863814c:	88 50 0a             	mov    %dl,0xa(%eax)
 863814f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8638154:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8638157:	89 54 24 08          	mov    %edx,0x8(%esp)
 863815b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8638162:	00 
 8638163:	89 04 24             	mov    %eax,(%esp)
 8638166:	e8 73 8e f3 ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 863816b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8638170:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8638173:	89 04 24             	mov    %eax,(%esp)
 8638176:	e8 57 47 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 863817b:	89 d8                	mov    %ebx,%eax
 863817d:	83 c4 20             	add    $0x20,%esp
 8638180:	5b                   	pop    %ebx
 8638181:	5e                   	pop    %esi
 8638182:	5d                   	pop    %ebp
 8638183:	c3                   	ret
 8638184:	89 d3                	mov    %edx,%ebx
 8638186:	89 c6                	mov    %eax,%esi
 8638188:	8d 45 ec             	lea    -0x14(%ebp),%eax
 863818b:	89 04 24             	mov    %eax,(%esp)
 863818e:	e8 3f 47 fe ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8638193:	89 f0                	mov    %esi,%eax
 8638195:	89 da                	mov    %ebx,%edx
 8638197:	89 04 24             	mov    %eax,(%esp)
 863819a:	e8 b1 b5 4a 00       	call   8ae3750 <_Unwind_Resume>
 863819f:	90                   	nop

```

```c
// TimerConnectMonitorServer::dispatch_sig @ 0x86380bc

/* TimerConnectMonitorServer::dispatch_sig(int, int, unsigned int) */

undefined4 TimerConnectMonitorServer::dispatch_sig(int param_1,int param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  Packet_Tcp_Server_Connect *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"TimerDispatcher.cpp",0xeaa);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0863810e to 0863816a has its CatchHandler @ 08638184 */
  CStreamGuard::operator<<(pCVar2,0x121);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Packet_Tcp_Server_Connect>(pCVar2);
  local_10[10] = SUB41(param_3,0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## registNextTimer

```asm
// === 086381a0 TimerConnectMonitorServer::registNextTimer  [0x086381a0-0x86381e1] ===
 86381a0:	55                   	push   %ebp
 86381a1:	89 e5                	mov    %esp,%ebp
 86381a3:	83 ec 28             	sub    $0x28,%esp
 86381a6:	e8 d1 e2 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 86381ab:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86381b2:	00 
 86381b3:	8b 55 10             	mov    0x10(%ebp),%edx
 86381b6:	89 54 24 14          	mov    %edx,0x14(%esp)
 86381ba:	8b 55 08             	mov    0x8(%ebp),%edx
 86381bd:	89 54 24 10          	mov    %edx,0x10(%esp)
 86381c1:	c7 44 24 0c 7a 00 00 	movl   $0x7a,0xc(%esp)
 86381c8:	00 
 86381c9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86381cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 86381d0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86381d7:	00 
 86381d8:	89 04 24             	mov    %eax,(%esp)
 86381db:	e8 36 8c ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86381e0:	c9                   	leave
 86381e1:	c3                   	ret

```

```c
// TimerConnectMonitorServer::registNextTimer @ 0x86381a0

/* TimerConnectMonitorServer::registNextTimer(long, int, int) */

void TimerConnectMonitorServer::registNextTimer(long param_1,int param_2,int param_3)

{
  TimerQueue *pTVar1;
  
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,param_2,0x7a,param_1,param_3,0);
  return;
}

```

