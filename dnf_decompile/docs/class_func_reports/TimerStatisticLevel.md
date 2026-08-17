# TimerStatisticLevel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## CalcNextTime

```asm
// === 0863591a TimerStatisticLevel::CalcNextTime  [0x0863591a-0x8635a2b] ===
 863591a:	55                   	push   %ebp
 863591b:	89 e5                	mov    %esp,%ebp
 863591d:	81 ec 88 00 00 00    	sub    $0x88,%esp
 8635923:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 863592a:	e8 6f 63 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863592f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8635932:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8635935:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635939:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863593c:	89 04 24             	mov    %eax,(%esp)
 863593f:	e8 1c 8a a4 ff       	call   807e360 <localtime_r@plt>
 8635944:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8635948:	8b 45 bc             	mov    -0x44(%ebp),%eax
 863594b:	89 45 90             	mov    %eax,-0x70(%ebp)
 863594e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8635951:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8635954:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8635957:	89 45 98             	mov    %eax,-0x68(%ebp)
 863595a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 863595d:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8635960:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8635963:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8635966:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8635969:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 863596c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 863596f:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8635972:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8635975:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8635978:	8b 45 dc             	mov    -0x24(%ebp),%eax
 863597b:	89 45 b0             	mov    %eax,-0x50(%ebp)
 863597e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8635981:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8635984:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8635987:	89 45 b8             	mov    %eax,-0x48(%ebp)
 863598a:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8635991:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8635998:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 863599f:	eb 2b                	jmp    86359cc <_ZN19TimerStatisticLevel12CalcNextTimeEv+0xb2>
 86359a1:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 86359a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86359a7:	8b 04 85 24 ce 3a 09 	mov    0x93ace24(,%eax,4),%eax
 86359ae:	39 c2                	cmp    %eax,%edx
 86359b0:	7c 16                	jl     86359c8 <_ZN19TimerStatisticLevel12CalcNextTimeEv+0xae>
 86359b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86359b5:	83 c0 01             	add    $0x1,%eax
 86359b8:	8b 04 85 24 ce 3a 09 	mov    0x93ace24(,%eax,4),%eax
 86359bf:	89 45 98             	mov    %eax,-0x68(%ebp)
 86359c2:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 86359c6:	eb 10                	jmp    86359d8 <_ZN19TimerStatisticLevel12CalcNextTimeEv+0xbe>
 86359c8:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 86359cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86359cf:	f7 d0                	not    %eax
 86359d1:	c1 e8 1f             	shr    $0x1f,%eax
 86359d4:	84 c0                	test   %al,%al
 86359d6:	75 c9                	jne    86359a1 <_ZN19TimerStatisticLevel12CalcNextTimeEv+0x87>
 86359d8:	8d 45 90             	lea    -0x70(%ebp),%eax
 86359db:	89 04 24             	mov    %eax,(%esp)
 86359de:	e8 3d 8e a4 ff       	call   807e820 <mktime@plt>
 86359e3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86359e6:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 86359ea:	83 f0 01             	xor    $0x1,%eax
 86359ed:	84 c0                	test   %al,%al
 86359ef:	75 08                	jne    86359f9 <_ZN19TimerStatisticLevel12CalcNextTimeEv+0xdf>
 86359f1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86359f4:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 86359f7:	7e 1f                	jle    8635a18 <_ZN19TimerStatisticLevel12CalcNextTimeEv+0xfe>
 86359f9:	a1 24 ce 3a 09       	mov    0x93ace24,%eax
 86359fe:	89 45 98             	mov    %eax,-0x68(%ebp)
 8635a01:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8635a04:	83 c0 01             	add    $0x1,%eax
 8635a07:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8635a0a:	8d 45 90             	lea    -0x70(%ebp),%eax
 8635a0d:	89 04 24             	mov    %eax,(%esp)
 8635a10:	e8 0b 8e a4 ff       	call   807e820 <mktime@plt>
 8635a15:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8635a18:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 8635a1f:	e8 63 c1 07 00       	call   86b1b87 <_Z12get_rand_inti>
 8635a24:	01 45 ec             	add    %eax,-0x14(%ebp)
 8635a27:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8635a2a:	c9                   	leave
 8635a2b:	c3                   	ret

```

```c
// TimerStatisticLevel::CalcNextTime @ 0x863591a

/* TimerStatisticLevel::CalcNextTime() */

int TimerStatisticLevel::CalcNextTime(void)

{
  int iVar1;
  tm local_74;
  tm local_48;
  int local_1c;
  time_t local_18;
  char local_11;
  int local_10;
  
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_1c,&local_48);
  local_11 = '\0';
  local_74.tm_hour = local_48.tm_hour;
  local_74.tm_mday = local_48.tm_mday;
  local_74.tm_mon = local_48.tm_mon;
  local_74.tm_year = local_48.tm_year;
  local_74.tm_wday = local_48.tm_wday;
  local_74.tm_yday = local_48.tm_yday;
  local_74.tm_isdst = local_48.tm_isdst;
  local_74.tm_gmtoff = local_48.tm_gmtoff;
  local_74.tm_zone = local_48.tm_zone;
  local_74.tm_min = 0;
  local_74.tm_sec = 0;
  local_10 = 3;
  do {
    if (local_10 < 0) {
LAB_086359d8:
      local_18 = mktime(&local_74);
      if ((local_11 != '\x01') || (local_18 < local_1c)) {
        local_74.tm_hour = m_nTimeTable;
        local_74.tm_mday = local_74.tm_mday + 1;
        local_18 = mktime(&local_74);
      }
      iVar1 = get_rand_int(300);
      return local_18 + iVar1;
    }
    if ((&m_nTimeTable)[local_10] <= local_48.tm_hour) {
      local_74.tm_hour = (&m_nTimeTable)[local_10 + 1];
      local_11 = '\x01';
      goto LAB_086359d8;
    }
    local_10 = local_10 + -1;
  } while( true );
}

```

---

## dispatch_sig

```asm
// === 086358ac TimerStatisticLevel::dispatch_sig  [0x086358ac-0x8635919] ===
 86358ac:	55                   	push   %ebp
 86358ad:	89 e5                	mov    %esp,%ebp
 86358af:	53                   	push   %ebx
 86358b0:	83 ec 24             	sub    $0x24,%esp
 86358b3:	e8 ef 4a aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86358b8:	89 04 24             	mov    %eax,(%esp)
 86358bb:	e8 f0 77 09 00       	call   86cd0b0 <_ZN9GameWorld30UpdateStatistic4ChannelUserLevEv>
 86358c0:	e8 55 00 00 00       	call   863591a <_ZN19TimerStatisticLevel12CalcNextTimeEv>
 86358c5:	89 c3                	mov    %eax,%ebx
 86358c7:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86358ce:	e8 cb 63 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86358d3:	29 c3                	sub    %eax,%ebx
 86358d5:	e8 a2 0b ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86358da:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 86358e1:	00 
 86358e2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86358e9:	00 
 86358ea:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86358ee:	c7 44 24 0c 55 00 00 	movl   $0x55,0xc(%esp)
 86358f5:	00 
 86358f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86358fd:	00 
 86358fe:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8635905:	00 
 8635906:	89 04 24             	mov    %eax,(%esp)
 8635909:	e8 08 b5 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863590e:	b8 01 00 00 00       	mov    $0x1,%eax
 8635913:	83 c4 24             	add    $0x24,%esp
 8635916:	5b                   	pop    %ebx
 8635917:	5d                   	pop    %ebp
 8635918:	c3                   	ret
 8635919:	90                   	nop

```

```c
// TimerStatisticLevel::dispatch_sig @ 0x86358ac

/* TimerStatisticLevel::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStatisticLevel::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  TimerQueue *pTVar3;
  
  G_GameWorld();
  GameWorld::UpdateStatistic4ChannelUserLev();
  iVar1 = CalcNextTime();
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,0,0x55,iVar1 - iVar2,0,0);
  return 1;
}

```

