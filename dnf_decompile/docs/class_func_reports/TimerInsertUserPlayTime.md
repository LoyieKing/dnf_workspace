# TimerInsertUserPlayTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 08636d44 TimerInsertUserPlayTime::RegistNextTimer  [0x08636d44-0x8636e05] ===
 8636d44:	55                   	push   %ebp
 8636d45:	89 e5                	mov    %esp,%ebp
 8636d47:	83 ec 68             	sub    $0x68,%esp
 8636d4a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8636d51:	e8 48 4f a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8636d56:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8636d59:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8636d5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636d60:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636d63:	89 04 24             	mov    %eax,(%esp)
 8636d66:	e8 f5 75 a4 ff       	call   807e360 <localtime_r@plt>
 8636d6b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8636d6e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636d71:	8b 40 08             	mov    0x8(%eax),%eax
 8636d74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8636d77:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636d7a:	c7 40 08 04 00 00 00 	movl   $0x4,0x8(%eax)
 8636d81:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636d84:	c7 40 04 1e 00 00 00 	movl   $0x1e,0x4(%eax)
 8636d8b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636d8e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8636d94:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636d97:	89 04 24             	mov    %eax,(%esp)
 8636d9a:	e8 81 7a a4 ff       	call   807e820 <mktime@plt>
 8636d9f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8636da2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8636da5:	8b 40 08             	mov    0x8(%eax),%eax
 8636da8:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8636dab:	7f 07                	jg     8636db4 <_ZN23TimerInsertUserPlayTime15RegistNextTimerEv+0x70>
 8636dad:	81 45 f0 80 51 01 00 	addl   $0x15180,-0x10(%ebp)
 8636db4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8636db7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8636dba:	89 d1                	mov    %edx,%ecx
 8636dbc:	29 c1                	sub    %eax,%ecx
 8636dbe:	89 c8                	mov    %ecx,%eax
 8636dc0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8636dc3:	e8 b4 f6 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 8636dc8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8636dcf:	00 
 8636dd0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8636dd7:	00 
 8636dd8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8636ddb:	89 54 24 10          	mov    %edx,0x10(%esp)
 8636ddf:	c7 44 24 0c 69 00 00 	movl   $0x69,0xc(%esp)
 8636de6:	00 
 8636de7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8636dee:	00 
 8636def:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8636df6:	00 
 8636df7:	89 04 24             	mov    %eax,(%esp)
 8636dfa:	e8 17 a0 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8636dff:	b8 01 00 00 00       	mov    $0x1,%eax
 8636e04:	c9                   	leave
 8636e05:	c3                   	ret

```

```c
// TimerInsertUserPlayTime::RegistNextTimer @ 0x8636d44

/* TimerInsertUserPlayTime::RegistNextTimer() */

undefined4 TimerInsertUserPlayTime::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  local_1c->tm_hour = 4;
  local_1c->tm_min = 0x1e;
  local_1c->tm_sec = 0;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x69,local_10,0,0);
  return 1;
}

```

---

## dispatch_sig

```asm
// === 08636d0a TimerInsertUserPlayTime::dispatch_sig  [0x08636d0a-0x8636d43] ===
 8636d0a:	55                   	push   %ebp
 8636d0b:	89 e5                	mov    %esp,%ebp
 8636d0d:	83 ec 28             	sub    $0x28,%esp
 8636d10:	e8 90 5e fd ff       	call   860cba5 <_Z35GetInstanceUserPlayTimeStatisticMgrv>
 8636d15:	89 04 24             	mov    %eax,(%esp)
 8636d18:	e8 f7 5f fd ff       	call   860cd14 <_ZN25CUserPlayTimeStatisticMgr18InsertUserPlayTimeEv>
 8636d1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8636d20:	89 04 24             	mov    %eax,(%esp)
 8636d23:	e8 1c 00 00 00       	call   8636d44 <_ZN23TimerInsertUserPlayTime15RegistNextTimerEv>
 8636d28:	88 45 f7             	mov    %al,-0x9(%ebp)
 8636d2b:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8636d2f:	83 f0 01             	xor    $0x1,%eax
 8636d32:	84 c0                	test   %al,%al
 8636d34:	74 07                	je     8636d3d <_ZN23TimerInsertUserPlayTime12dispatch_sigEiij+0x33>
 8636d36:	b8 00 00 00 00       	mov    $0x0,%eax
 8636d3b:	eb 05                	jmp    8636d42 <_ZN23TimerInsertUserPlayTime12dispatch_sigEiij+0x38>
 8636d3d:	b8 01 00 00 00       	mov    $0x1,%eax
 8636d42:	c9                   	leave
 8636d43:	c3                   	ret

```

```c
// TimerInsertUserPlayTime::dispatch_sig @ 0x8636d0a

/* TimerInsertUserPlayTime::dispatch_sig(int, int, unsigned int) */

bool TimerInsertUserPlayTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  CUserPlayTimeStatisticMgr *this;
  
  this = (CUserPlayTimeStatisticMgr *)GetInstanceUserPlayTimeStatisticMgr();
  CUserPlayTimeStatisticMgr::InsertUserPlayTime(this);
  cVar1 = RegistNextTimer();
  return cVar1 == '\x01';
}

```

