# Timer_Schedule_MidNight

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegistNextTimer

```asm
// === 0863a9a2 Timer_Schedule_MidNight::RegistNextTimer  [0x0863a9a2-0x863aa8f] ===
 863a9a2:	55                   	push   %ebp
 863a9a3:	89 e5                	mov    %esp,%ebp
 863a9a5:	83 ec 78             	sub    $0x78,%esp
 863a9a8:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863a9af:	e8 ea 12 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863a9b4:	05 80 51 01 00       	add    $0x15180,%eax
 863a9b9:	89 45 d8             	mov    %eax,-0x28(%ebp)
 863a9bc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 863a9bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 863a9c3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 863a9c6:	89 04 24             	mov    %eax,(%esp)
 863a9c9:	e8 92 39 a4 ff       	call   807e360 <localtime_r@plt>
 863a9ce:	89 45 ec             	mov    %eax,-0x14(%ebp)
 863a9d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863a9d4:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 863a9db:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863a9de:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 863a9e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863a9e8:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 863a9ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 863a9f1:	89 04 24             	mov    %eax,(%esp)
 863a9f4:	e8 27 3e a4 ff       	call   807e820 <mktime@plt>
 863a9f9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 863a9fc:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863aa03:	e8 96 12 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863aa08:	8b 55 f0             	mov    -0x10(%ebp),%edx
 863aa0b:	89 d1                	mov    %edx,%ecx
 863aa0d:	29 c1                	sub    %eax,%ecx
 863aa0f:	89 c8                	mov    %ecx,%eax
 863aa11:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863aa14:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863aa1b:	00 
 863aa1c:	c7 44 24 08 26 16 00 	movl   $0x1626,0x8(%esp)
 863aa23:	00 
 863aa24:	c7 44 24 04 20 80 ce 	movl   $0x8ce8020,0x4(%esp)
 863aa2b:	08 
 863aa2c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 863aa2f:	89 04 24             	mov    %eax,(%esp)
 863aa32:	e8 e1 4c f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 863aa37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863aa3a:	89 44 24 08          	mov    %eax,0x8(%esp)
 863aa3e:	c7 44 24 04 dc 70 ce 	movl   $0x8ce70dc,0x4(%esp)
 863aa45:	08 
 863aa46:	8d 45 dc             	lea    -0x24(%ebp),%eax
 863aa49:	89 04 24             	mov    %eax,(%esp)
 863aa4c:	e8 37 4d f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 863aa51:	e8 26 ba ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863aa56:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 863aa5d:	00 
 863aa5e:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863aa65:	00 
 863aa66:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863aa69:	89 54 24 10          	mov    %edx,0x10(%esp)
 863aa6d:	c7 44 24 0c 9a 00 00 	movl   $0x9a,0xc(%esp)
 863aa74:	00 
 863aa75:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 863aa7c:	00 
 863aa7d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 863aa84:	00 
 863aa85:	89 04 24             	mov    %eax,(%esp)
 863aa88:	e8 89 63 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863aa8d:	c9                   	leave
 863aa8e:	c3                   	ret
 863aa8f:	90                   	nop

```

```c
// Timer_Schedule_MidNight::RegistNextTimer @ 0x863a9a2

/* Timer_Schedule_MidNight::RegistNextTimer() */

void Timer_Schedule_MidNight::RegistNextTimer(void)

{
  TimerQueue *pTVar1;
  tm local_58;
  int local_2c;
  cMyTrace local_28 [16];
  tm *local_18;
  int local_14;
  int local_10;
  
  local_2c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = local_2c + 0x15180;
  local_18 = localtime_r(&local_2c,&local_58);
  local_18->tm_hour = 0;
  local_18->tm_min = 0;
  local_18->tm_sec = 0;
  local_14 = mktime(local_18);
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_10 = local_14 - local_10;
  cMyTrace::cMyTrace(local_28,"static void Timer_Schedule_MidNight::RegistNextTimer()",0x1626,0);
  cMyTrace::operator()(local_28,"RegistNextTimer Schedule_MidNight delta %d\n",local_10);
  pTVar1 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar1,2,0,0x9a,local_10,0,0);
  return;
}

```

---

## dispatch_sig

```asm
// === 0863a982 Timer_Schedule_MidNight::dispatch_sig  [0x0863a982-0x863a9a1] ===
 863a982:	55                   	push   %ebp
 863a983:	89 e5                	mov    %esp,%ebp
 863a985:	83 ec 08             	sub    $0x8,%esp
 863a988:	a1 f8 f7 41 09       	mov    0x941f7f8,%eax
 863a98d:	83 c0 01             	add    $0x1,%eax
 863a990:	a3 f8 f7 41 09       	mov    %eax,0x941f7f8
 863a995:	e8 08 00 00 00       	call   863a9a2 <_ZN23Timer_Schedule_MidNight15RegistNextTimerEv>
 863a99a:	b8 01 00 00 00       	mov    $0x1,%eax
 863a99f:	c9                   	leave
 863a9a0:	c3                   	ret
 863a9a1:	90                   	nop

```

```c
// Timer_Schedule_MidNight::dispatch_sig @ 0x863a982

/* Timer_Schedule_MidNight::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_Schedule_MidNight::dispatch_sig(int param_1,int param_2,uint param_3)

{
  GlobalData::g_GoldControlDateFlag = GlobalData::g_GoldControlDateFlag + 1;
  RegistNextTimer();
  return 1;
}

```

