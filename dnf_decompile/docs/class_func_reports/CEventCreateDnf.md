# CEventCreateDnf

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## CEventCreateDnf

```asm
// === 08163aa4 CEventCreateDnf::CEventCreateDnf  [0x08163aa4-0x8163ae7] ===
 8163aa4:	55                   	push   %ebp
 8163aa5:	89 e5                	mov    %esp,%ebp
 8163aa7:	83 ec 18             	sub    $0x18,%esp
 8163aaa:	8b 45 08             	mov    0x8(%ebp),%eax
 8163aad:	89 04 24             	mov    %eax,(%esp)
 8163ab0:	e8 77 73 fa ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8163ab5:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ab8:	c7 00 c8 cb b7 08    	movl   $0x8b7cbc8,(%eax)
 8163abe:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ac1:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8163ac8:	8b 45 08             	mov    0x8(%ebp),%eax
 8163acb:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8163acf:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ad2:	c6 40 11 00          	movb   $0x0,0x11(%eax)
 8163ad6:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ad9:	66 c7 40 12 00 00    	movw   $0x0,0x12(%eax)
 8163adf:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ae2:	c6 40 14 00          	movb   $0x0,0x14(%eax)
 8163ae6:	c9                   	leave
 8163ae7:	c3                   	ret

```

```c
// CEventCreateDnf::CEventCreateDnf @ 0x8163aa4

/* CEventCreateDnf::CEventCreateDnf() */

void __thiscall CEventCreateDnf::CEventCreateDnf(CEventCreateDnf *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CEventCreateDnf_08b7cbc8;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CEventCreateDnf)0x0;
  this[0x11] = (CEventCreateDnf)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (CEventCreateDnf)0x0;
  return;
}

```

---

## EndEvent

```asm
// === 08163cd0 CEventCreateDnf::EndEvent  [0x08163cd0-0x8163d4b] ===
 8163cd0:	55                   	push   %ebp
 8163cd1:	89 e5                	mov    %esp,%ebp
 8163cd3:	83 ec 28             	sub    $0x28,%esp
 8163cd6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8163cdd:	00 
 8163cde:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8163ce5:	00 
 8163ce6:	c7 44 24 04 a0 ca b7 	movl   $0x8b7caa0,0x4(%esp)
 8163ced:	08 
 8163cee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8163cf1:	89 04 24             	mov    %eax,(%esp)
 8163cf4:	e8 1f ba 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8163cf9:	c7 44 24 04 88 bb b7 	movl   $0x8b7bb88,0x4(%esp)
 8163d00:	08 
 8163d01:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8163d04:	89 04 24             	mov    %eax,(%esp)
 8163d07:	e8 7c ba 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8163d0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d0f:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8163d13:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d16:	c6 40 11 00          	movb   $0x0,0x11(%eax)
 8163d1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d1d:	66 c7 40 12 00 00    	movw   $0x0,0x12(%eax)
 8163d23:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163d2a:	00 
 8163d2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d2e:	89 04 24             	mov    %eax,(%esp)
 8163d31:	e8 1c 05 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 8163d36:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d39:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163d40:	00 
 8163d41:	89 04 24             	mov    %eax,(%esp)
 8163d44:	e8 99 47 f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8163d49:	c9                   	leave
 8163d4a:	c3                   	ret
 8163d4b:	90                   	nop

```

```c
// CEventCreateDnf::EndEvent @ 0x8163cd0

/* CEventCreateDnf::EndEvent() */

void __thiscall CEventCreateDnf::EndEvent(CEventCreateDnf *this)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void CEventCreateDnf::EndEvent()",0x38,0);
  cMyTrace::operator()(local_1c,"[Taiwan, CreateDnfEvent] End Event.");
  this[0x10] = (CEventCreateDnf)0x0;
  this[0x11] = (CEventCreateDnf)0x0;
  *(undefined2 *)(this + 0x12) = 0;
  setState(this,0);
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## GetRate

```asm
// === 08164260 CEventCreateDnf::GetRate  [0x08164260-0x816426b] ===
 8164260:	55                   	push   %ebp
 8164261:	89 e5                	mov    %esp,%ebp
 8164263:	8b 45 08             	mov    0x8(%ebp),%eax
 8164266:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 816426a:	5d                   	pop    %ebp
 816426b:	c3                   	ret

```

```c
// CEventCreateDnf::GetRate @ 0x8164260

/* CEventCreateDnf::GetRate() */

undefined2 __thiscall CEventCreateDnf::GetRate(CEventCreateDnf *this)

{
  return *(undefined2 *)(this + 0x16);
}

```

---

## GetState

```asm
// === 08164246 CEventCreateDnf::GetState  [0x08164246-0x8164251] ===
 8164246:	55                   	push   %ebp
 8164247:	89 e5                	mov    %esp,%ebp
 8164249:	8b 45 08             	mov    0x8(%ebp),%eax
 816424c:	8b 40 0c             	mov    0xc(%eax),%eax
 816424f:	5d                   	pop    %ebp
 8164250:	c3                   	ret
 8164251:	90                   	nop

```

```c
// CEventCreateDnf::GetState @ 0x8164246

/* CEventCreateDnf::GetState() */

undefined4 __thiscall CEventCreateDnf::GetState(CEventCreateDnf *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## IsRewardCondition

```asm
// === 08164092 CEventCreateDnf::IsRewardCondition  [0x08164092-0x81640d3] ===
 8164092:	55                   	push   %ebp
 8164093:	89 e5                	mov    %esp,%ebp
 8164095:	83 ec 18             	sub    $0x18,%esp
 8164098:	8b 45 08             	mov    0x8(%ebp),%eax
 816409b:	89 04 24             	mov    %eax,(%esp)
 816409e:	e8 a3 01 00 00       	call   8164246 <_ZN15CEventCreateDnf8GetStateEv>
 81640a3:	83 f8 02             	cmp    $0x2,%eax
 81640a6:	75 14                	jne    81640bc <_ZN15CEventCreateDnf17IsRewardConditionEv+0x2a>
 81640a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81640ab:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 81640af:	66 83 f8 64          	cmp    $0x64,%ax
 81640b3:	75 07                	jne    81640bc <_ZN15CEventCreateDnf17IsRewardConditionEv+0x2a>
 81640b5:	b8 01 00 00 00       	mov    $0x1,%eax
 81640ba:	eb 05                	jmp    81640c1 <_ZN15CEventCreateDnf17IsRewardConditionEv+0x2f>
 81640bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81640c1:	84 c0                	test   %al,%al
 81640c3:	74 07                	je     81640cc <_ZN15CEventCreateDnf17IsRewardConditionEv+0x3a>
 81640c5:	b8 01 00 00 00       	mov    $0x1,%eax
 81640ca:	eb 05                	jmp    81640d1 <_ZN15CEventCreateDnf17IsRewardConditionEv+0x3f>
 81640cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81640d1:	c9                   	leave
 81640d2:	c3                   	ret
 81640d3:	90                   	nop

```

```c
// CEventCreateDnf::IsRewardCondition @ 0x8164092

/* CEventCreateDnf::IsRewardCondition() */

undefined1 __thiscall CEventCreateDnf::IsRewardCondition(CEventCreateDnf *this)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = GetState(this);
  if ((iVar2 == 2) && (*(short *)(this + 0x16) == 100)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## RegistNextTimer

```asm
// === 08163d4c CEventCreateDnf::RegistNextTimer  [0x08163d4c-0x8163e7b] ===
 8163d4c:	55                   	push   %ebp
 8163d4d:	89 e5                	mov    %esp,%ebp
 8163d4f:	53                   	push   %ebx
 8163d50:	83 ec 74             	sub    $0x74,%esp
 8163d53:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d56:	8b 00                	mov    (%eax),%eax
 8163d58:	83 c0 34             	add    $0x34,%eax
 8163d5b:	8b 10                	mov    (%eax),%edx
 8163d5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163d67:	00 
 8163d68:	89 04 24             	mov    %eax,(%esp)
 8163d6b:	ff d2                	call   *%edx
 8163d6d:	83 f0 01             	xor    $0x1,%eax
 8163d70:	84 c0                	test   %al,%al
 8163d72:	0f 85 fc 00 00 00    	jne    8163e74 <_ZN15CEventCreateDnf15RegistNextTimerEv+0x128>
 8163d78:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8163d7f:	e8 1a 7f f6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8163d84:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8163d87:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8163d8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8163d8e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8163d91:	89 04 24             	mov    %eax,(%esp)
 8163d94:	e8 c7 a5 f1 ff       	call   807e360 <localtime_r@plt>
 8163d99:	8b 45 08             	mov    0x8(%ebp),%eax
 8163d9c:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8163da0:	0f b6 c0             	movzbl %al,%eax
 8163da3:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8163da6:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 8163dad:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 8163db4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8163db7:	89 04 24             	mov    %eax,(%esp)
 8163dba:	e8 61 aa f1 ff       	call   807e820 <mktime@plt>
 8163dbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8163dc2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8163dc5:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 8163dc8:	7c 13                	jl     8163ddd <_ZN15CEventCreateDnf15RegistNextTimerEv+0x91>
 8163dca:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8163dd1:	00 
 8163dd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8163dd5:	89 04 24             	mov    %eax,(%esp)
 8163dd8:	e8 75 04 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 8163ddd:	8b 45 08             	mov    0x8(%ebp),%eax
 8163de0:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163de4:	0f b7 d8             	movzwl %ax,%ebx
 8163de7:	e8 90 26 f9 ff       	call   80f647c <_Z12G_TimerQueuev>
 8163dec:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8163df3:	00 
 8163df4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8163dfb:	00 
 8163dfc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8163e00:	c7 44 24 0c ae 00 00 	movl   $0xae,0xc(%esp)
 8163e07:	00 
 8163e08:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8163e0f:	00 
 8163e10:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8163e17:	00 
 8163e18:	89 04 24             	mov    %eax,(%esp)
 8163e1b:	e8 f6 cf 4c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8163e20:	8b 45 08             	mov    0x8(%ebp),%eax
 8163e23:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163e27:	0f b7 d8             	movzwl %ax,%ebx
 8163e2a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8163e31:	e8 68 7e f6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8163e36:	01 c3                	add    %eax,%ebx
 8163e38:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8163e3f:	00 
 8163e40:	c7 44 24 08 55 00 00 	movl   $0x55,0x8(%esp)
 8163e47:	00 
 8163e48:	c7 44 24 04 60 ca b7 	movl   $0x8b7ca60,0x4(%esp)
 8163e4f:	08 
 8163e50:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8163e53:	89 04 24             	mov    %eax,(%esp)
 8163e56:	e8 bd b8 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8163e5b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8163e5f:	c7 44 24 04 ac bb b7 	movl   $0x8b7bbac,0x4(%esp)
 8163e66:	08 
 8163e67:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8163e6a:	89 04 24             	mov    %eax,(%esp)
 8163e6d:	e8 16 b9 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8163e72:	eb 01                	jmp    8163e75 <_ZN15CEventCreateDnf15RegistNextTimerEv+0x129>
 8163e74:	90                   	nop
 8163e75:	83 c4 74             	add    $0x74,%esp
 8163e78:	5b                   	pop    %ebx
 8163e79:	5d                   	pop    %ebp
 8163e7a:	c3                   	ret
 8163e7b:	90                   	nop

```

```c
// CEventCreateDnf::RegistNextTimer @ 0x8163d4c

/* CEventCreateDnf::RegistNextTimer() */

void __thiscall CEventCreateDnf::RegistNextTimer(CEventCreateDnf *this)

{
  undefined2 uVar1;
  ushort uVar2;
  char cVar3;
  TimerQueue *pTVar4;
  int iVar5;
  tm local_50;
  int local_24;
  cMyTrace local_20 [16];
  time_t local_10;
  
  cVar3 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar3 == '\x01') {
    local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_24,&local_50);
    local_50.tm_hour = (int)(byte)this[0x11];
    local_50.tm_min = 0;
    local_50.tm_sec = 0;
    local_10 = mktime(&local_50);
    if (local_24 <= local_10) {
      setState(this,2);
    }
    uVar1 = *(undefined2 *)(this + 0x12);
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0xae,uVar1,0,0);
    uVar2 = *(ushort *)(this + 0x12);
    iVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    cMyTrace::cMyTrace(local_20,"void CEventCreateDnf::RegistNextTimer()",0x55,0);
    cMyTrace::operator()
              (local_20,"[Taiwan, CreateDnfEvent] next db load time:%d",(uint)uVar2 + iVar5);
  }
  return;
}

```

---

## RegistStartTimer

```asm
// === 08163e7c CEventCreateDnf::RegistStartTimer  [0x08163e7c-0x8164091] ===
 8163e7c:	55                   	push   %ebp
 8163e7d:	89 e5                	mov    %esp,%ebp
 8163e7f:	53                   	push   %ebx
 8163e80:	81 ec 94 00 00 00    	sub    $0x94,%esp
 8163e86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8163e89:	88 45 94             	mov    %al,-0x6c(%ebp)
 8163e8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8163e8f:	8b 00                	mov    (%eax),%eax
 8163e91:	83 c0 34             	add    $0x34,%eax
 8163e94:	8b 10                	mov    (%eax),%edx
 8163e96:	8b 45 08             	mov    0x8(%ebp),%eax
 8163e99:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163ea0:	00 
 8163ea1:	89 04 24             	mov    %eax,(%esp)
 8163ea4:	ff d2                	call   *%edx
 8163ea6:	83 f0 01             	xor    $0x1,%eax
 8163ea9:	84 c0                	test   %al,%al
 8163eab:	0f 85 d7 01 00 00    	jne    8164088 <_ZN15CEventCreateDnf16RegistStartTimerEb+0x20c>
 8163eb1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8163eb8:	00 
 8163eb9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8163ec0:	00 
 8163ec1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163ec8:	00 
 8163ec9:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ecc:	89 04 24             	mov    %eax,(%esp)
 8163ecf:	e8 00 02 00 00       	call   81640d4 <_ZN15CEventCreateDnf12SetEventInfoEiii>
 8163ed4:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8163edb:	e8 be 7d f6 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8163ee0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8163ee3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8163ee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8163eea:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8163eed:	89 04 24             	mov    %eax,(%esp)
 8163ef0:	e8 6b a4 f1 ff       	call   807e360 <localtime_r@plt>
 8163ef5:	8b 45 08             	mov    0x8(%ebp),%eax
 8163ef8:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8163efc:	0f b6 c0             	movzbl %al,%eax
 8163eff:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8163f02:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8163f09:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8163f10:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8163f13:	89 04 24             	mov    %eax,(%esp)
 8163f16:	e8 05 a9 f1 ff       	call   807e820 <mktime@plt>
 8163f1b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8163f1e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8163f21:	39 45 f0             	cmp    %eax,-0x10(%ebp)
 8163f24:	0f 8c 98 00 00 00    	jl     8163fc2 <_ZN15CEventCreateDnf16RegistStartTimerEb+0x146>
 8163f2a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163f31:	00 
 8163f32:	8b 45 08             	mov    0x8(%ebp),%eax
 8163f35:	89 04 24             	mov    %eax,(%esp)
 8163f38:	e8 15 03 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 8163f3d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8163f40:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8163f43:	89 d3                	mov    %edx,%ebx
 8163f45:	29 c3                	sub    %eax,%ebx
 8163f47:	e8 30 25 f9 ff       	call   80f647c <_Z12G_TimerQueuev>
 8163f4c:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8163f53:	00 
 8163f54:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8163f5b:	00 
 8163f5c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8163f60:	c7 44 24 0c ae 00 00 	movl   $0xae,0xc(%esp)
 8163f67:	00 
 8163f68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8163f6f:	00 
 8163f70:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8163f77:	00 
 8163f78:	89 04 24             	mov    %eax,(%esp)
 8163f7b:	e8 96 ce 4c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8163f80:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8163f87:	00 
 8163f88:	c7 44 24 08 6e 00 00 	movl   $0x6e,0x8(%esp)
 8163f8f:	00 
 8163f90:	c7 44 24 04 20 ca b7 	movl   $0x8b7ca20,0x4(%esp)
 8163f97:	08 
 8163f98:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8163f9b:	89 04 24             	mov    %eax,(%esp)
 8163f9e:	e8 75 b7 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8163fa3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8163fa6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8163faa:	c7 44 24 04 ac bb b7 	movl   $0x8b7bbac,0x4(%esp)
 8163fb1:	08 
 8163fb2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8163fb5:	89 04 24             	mov    %eax,(%esp)
 8163fb8:	e8 cb b7 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8163fbd:	e9 c7 00 00 00       	jmp    8164089 <_ZN15CEventCreateDnf16RegistStartTimerEb+0x20d>
 8163fc2:	e8 cd 7a ff ff       	call   815ba94 <_ZN26DBSelectCreateDnfEventInfo11makeRequestEv>
 8163fc7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8163fce:	00 
 8163fcf:	8b 45 08             	mov    0x8(%ebp),%eax
 8163fd2:	89 04 24             	mov    %eax,(%esp)
 8163fd5:	e8 78 02 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 8163fda:	8b 45 08             	mov    0x8(%ebp),%eax
 8163fdd:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163fe1:	0f b7 c0             	movzwl %ax,%eax
 8163fe4:	03 45 f0             	add    -0x10(%ebp),%eax
 8163fe7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8163fea:	eb 0d                	jmp    8163ff9 <_ZN15CEventCreateDnf16RegistStartTimerEb+0x17d>
 8163fec:	8b 45 08             	mov    0x8(%ebp),%eax
 8163fef:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163ff3:	0f b7 c0             	movzwl %ax,%eax
 8163ff6:	01 45 f4             	add    %eax,-0xc(%ebp)
 8163ff9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8163ffc:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 8163fff:	0f 9c c0             	setl   %al
 8164002:	84 c0                	test   %al,%al
 8164004:	75 e6                	jne    8163fec <_ZN15CEventCreateDnf16RegistStartTimerEb+0x170>
 8164006:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8164009:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816400c:	89 d3                	mov    %edx,%ebx
 816400e:	29 c3                	sub    %eax,%ebx
 8164010:	e8 67 24 f9 ff       	call   80f647c <_Z12G_TimerQueuev>
 8164015:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 816401c:	00 
 816401d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8164024:	00 
 8164025:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8164029:	c7 44 24 0c ae 00 00 	movl   $0xae,0xc(%esp)
 8164030:	00 
 8164031:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8164038:	00 
 8164039:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8164040:	00 
 8164041:	89 04 24             	mov    %eax,(%esp)
 8164044:	e8 cd cd 4c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8164049:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8164050:	00 
 8164051:	c7 44 24 08 7e 00 00 	movl   $0x7e,0x8(%esp)
 8164058:	00 
 8164059:	c7 44 24 04 20 ca b7 	movl   $0x8b7ca20,0x4(%esp)
 8164060:	08 
 8164061:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8164064:	89 04 24             	mov    %eax,(%esp)
 8164067:	e8 ac b6 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816406c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816406f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8164073:	c7 44 24 04 ac bb b7 	movl   $0x8b7bbac,0x4(%esp)
 816407a:	08 
 816407b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 816407e:	89 04 24             	mov    %eax,(%esp)
 8164081:	e8 02 b7 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8164086:	eb 01                	jmp    8164089 <_ZN15CEventCreateDnf16RegistStartTimerEb+0x20d>
 8164088:	90                   	nop
 8164089:	81 c4 94 00 00 00    	add    $0x94,%esp
 816408f:	5b                   	pop    %ebx
 8164090:	5d                   	pop    %ebp
 8164091:	c3                   	ret

```

```c
// CEventCreateDnf::RegistStartTimer @ 0x8163e7c

/* CEventCreateDnf::RegistStartTimer(bool) */

void CEventCreateDnf::RegistStartTimer(bool param_1)

{
  char cVar1;
  TimerQueue *pTVar2;
  int iVar3;
  undefined3 in_stack_00000005;
  tm local_64;
  int local_38;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  cVar1 = (**(code **)(*(int *)_param_1 + 0x34))(_param_1,0);
  if (cVar1 == '\x01') {
    SetEventInfo(_param_1,0,0,0);
    local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_38,&local_64);
    local_64.tm_hour = (int)(byte)_param_1[0x10];
    local_64.tm_min = 0;
    local_64.tm_sec = 0;
    local_14 = mktime(&local_64);
    if (local_14 < local_38) {
      DBSelectCreateDnfEventInfo::makeRequest();
      setState(_param_1,1);
      for (local_10 = (uint)*(ushort *)(_param_1 + 0x12) + local_14; local_10 < local_38;
          local_10 = local_10 + (uint)*(ushort *)(_param_1 + 0x12)) {
      }
      iVar3 = local_10 - local_38;
      pTVar2 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar2,2,0,0xae,iVar3,0,0);
      cMyTrace::cMyTrace(local_24,"void CEventCreateDnf::RegistStartTimer(bool)",0x7e,0);
      cMyTrace::operator()(local_24,"[Taiwan, CreateDnfEvent] next db load time:%d",local_10);
    }
    else {
      setState(_param_1,0);
      iVar3 = local_14 - local_38;
      pTVar2 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar2,2,0,0xae,iVar3,0,0);
      cMyTrace::cMyTrace(local_34,"void CEventCreateDnf::RegistStartTimer(bool)",0x6e,0);
      cMyTrace::operator()(local_34,"[Taiwan, CreateDnfEvent] next db load time:%d",local_14);
    }
  }
  return;
}

```

---

## SendReward

```asm
// === 0816426c CEventCreateDnf::SendReward  [0x0816426c-0x816451d] ===
 816426c:	55                   	push   %ebp
 816426d:	89 e5                	mov    %esp,%ebp
 816426f:	57                   	push   %edi
 8164270:	56                   	push   %esi
 8164271:	53                   	push   %ebx
 8164272:	81 ec ec 03 00 00    	sub    $0x3ec,%esp
 8164278:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816427b:	89 04 24             	mov    %eax,(%esp)
 816427e:	e8 53 07 fd ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8164283:	8b 45 08             	mov    0x8(%ebp),%eax
 8164286:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 816428a:	0f b6 d8             	movzbl %al,%ebx
 816428d:	e8 75 06 00 00       	call   8164907 <_ZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEv>
 8164292:	8d 50 04             	lea    0x4(%eax),%edx
 8164295:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8164299:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816429c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81642a0:	89 14 24             	mov    %edx,(%esp)
 81642a3:	e8 fe c0 95 00       	call   8ac03a6 <_ZN20CreateDnfEventSciprt11GetItemInfoERSt6vectorISt4pairIiiESaIS2_EEi>
 81642a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81642af:	00 
 81642b0:	c7 44 24 08 38 bc b7 	movl   $0x8b7bc38,0x8(%esp)
 81642b7:	08 
 81642b8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81642bf:	00 
 81642c0:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 81642c7:	e8 32 15 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 81642cc:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81642d3:	00 
 81642d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81642d8:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 81642db:	89 04 24             	mov    %eax,(%esp)
 81642de:	e8 ed 95 f1 ff       	call   807d8d0 <strncpy@plt>
 81642e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81642ea:	00 
 81642eb:	c7 44 24 08 51 bc b7 	movl   $0x8b7bc51,0x8(%esp)
 81642f2:	08 
 81642f3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81642fa:	00 
 81642fb:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8164302:	e8 f7 14 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8164307:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 816430e:	00 
 816430f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164313:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 8164319:	89 04 24             	mov    %eax,(%esp)
 816431c:	e8 af 95 f1 ff       	call   807d8d0 <strncpy@plt>
 8164321:	8d 85 46 fc ff ff    	lea    -0x3ba(%ebp),%eax
 8164327:	89 c3                	mov    %eax,%ebx
 8164329:	be 09 00 00 00       	mov    $0x9,%esi
 816432e:	eb 0e                	jmp    816433e <_ZN15CEventCreateDnf10SendRewardEP5CUser+0xd2>
 8164330:	89 1c 24             	mov    %ebx,(%esp)
 8164333:	e8 1c 75 f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8164338:	83 c3 3d             	add    $0x3d,%ebx
 816433b:	83 ee 01             	sub    $0x1,%esi
 816433e:	83 fe ff             	cmp    $0xffffffff,%esi
 8164341:	0f 95 c0             	setne  %al
 8164344:	84 c0                	test   %al,%al
 8164346:	75 e8                	jne    8164330 <_ZN15CEventCreateDnf10SendRewardEP5CUser+0xc4>
 8164348:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 816434f:	00 
 8164350:	8d 85 46 fc ff ff    	lea    -0x3ba(%ebp),%eax
 8164356:	89 44 24 04          	mov    %eax,0x4(%esp)
 816435a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816435d:	89 04 24             	mov    %eax,(%esp)
 8164360:	e8 af 26 3f 00       	call   8556a14 <_ZN8WongWork14CMailBoxHelper25MakeSystemMultiMailPostalERSt6vectorISt4pairIiiESaIS3_EEP10Inven_Itemj>
 8164365:	8b 45 0c             	mov    0xc(%ebp),%eax
 8164368:	89 04 24             	mov    %eax,(%esp)
 816436b:	e8 20 79 f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8164370:	89 c6                	mov    %eax,%esi
 8164372:	8d 85 a8 fe ff ff    	lea    -0x158(%ebp),%eax
 8164378:	89 04 24             	mov    %eax,(%esp)
 816437b:	e8 30 a0 f1 ff       	call   807e3b0 <strlen@plt>
 8164380:	89 c7                	mov    %eax,%edi
 8164382:	8b 45 0c             	mov    0xc(%ebp),%eax
 8164385:	89 04 24             	mov    %eax,(%esp)
 8164388:	e8 c1 78 f6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 816438d:	89 c3                	mov    %eax,%ebx
 816438f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8164392:	89 04 24             	mov    %eax,(%esp)
 8164395:	e8 7a 94 f7 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 816439a:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81643a1:	00 
 81643a2:	89 74 24 20          	mov    %esi,0x20(%esp)
 81643a6:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 81643ad:	00 
 81643ae:	89 7c 24 18          	mov    %edi,0x18(%esp)
 81643b2:	8d 95 a8 fe ff ff    	lea    -0x158(%ebp),%edx
 81643b8:	89 54 24 14          	mov    %edx,0x14(%esp)
 81643bc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81643c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81643c7:	00 
 81643c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81643cc:	8d 85 46 fc ff ff    	lea    -0x3ba(%ebp),%eax
 81643d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81643d6:	8d 45 b6             	lea    -0x4a(%ebp),%eax
 81643d9:	89 04 24             	mov    %eax,(%esp)
 81643dc:	e8 87 27 3f 00       	call   8556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>
 81643e1:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81643e4:	89 04 24             	mov    %eax,(%esp)
 81643e7:	e8 60 99 42 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81643ec:	c7 44 24 08 58 02 00 	movl   $0x258,0x8(%esp)
 81643f3:	00 
 81643f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81643fb:	00 
 81643fc:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81643ff:	89 04 24             	mov    %eax,(%esp)
 8164402:	e8 f5 74 f6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8164407:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816440e:	00 
 816440f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8164412:	89 04 24             	mov    %eax,(%esp)
 8164415:	e8 06 75 f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 816441a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816441d:	89 04 24             	mov    %eax,(%esp)
 8164420:	e8 ef 93 f7 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8164425:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164429:	8d 45 a8             	lea    -0x58(%ebp),%eax
 816442c:	89 04 24             	mov    %eax,(%esp)
 816442f:	e8 ec 74 f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8164434:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 816443b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816443e:	89 04 24             	mov    %eax,(%esp)
 8164441:	e8 ce 93 f7 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 8164446:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8164449:	eb 4b                	jmp    8164496 <_ZN15CEventCreateDnf10SendRewardEP5CUser+0x22a>
 816444b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 816444e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164452:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8164455:	89 04 24             	mov    %eax,(%esp)
 8164458:	e8 47 64 f8 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 816445d:	8b 00                	mov    (%eax),%eax
 816445f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164463:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8164466:	89 04 24             	mov    %eax,(%esp)
 8164469:	e8 ce 74 f6 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 816446e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8164471:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164475:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8164478:	89 04 24             	mov    %eax,(%esp)
 816447b:	e8 24 64 f8 ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 8164480:	8b 40 04             	mov    0x4(%eax),%eax
 8164483:	89 44 24 04          	mov    %eax,0x4(%esp)
 8164487:	8d 45 a8             	lea    -0x58(%ebp),%eax
 816448a:	89 04 24             	mov    %eax,(%esp)
 816448d:	e8 8e 74 f6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8164492:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8164496:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8164499:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 816449c:	0f 92 c0             	setb   %al
 816449f:	84 c0                	test   %al,%al
 81644a1:	75 a8                	jne    816444b <_ZN15CEventCreateDnf10SendRewardEP5CUser+0x1df>
 81644a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81644aa:	00 
 81644ab:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81644ae:	89 04 24             	mov    %eax,(%esp)
 81644b1:	e8 a2 74 f6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81644b6:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81644b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81644bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81644c0:	89 04 24             	mov    %eax,(%esp)
 81644c3:	e8 f2 40 4e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81644c8:	eb 15                	jmp    81644df <_ZN15CEventCreateDnf10SendRewardEP5CUser+0x273>
 81644ca:	89 d3                	mov    %edx,%ebx
 81644cc:	89 c6                	mov    %eax,%esi
 81644ce:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81644d1:	89 04 24             	mov    %eax,(%esp)
 81644d4:	e8 a7 99 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81644d9:	89 f0                	mov    %esi,%eax
 81644db:	89 da                	mov    %ebx,%edx
 81644dd:	eb 0d                	jmp    81644ec <_ZN15CEventCreateDnf10SendRewardEP5CUser+0x280>
 81644df:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81644e2:	89 04 24             	mov    %eax,(%esp)
 81644e5:	e8 96 99 42 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81644ea:	eb 1b                	jmp    8164507 <_ZN15CEventCreateDnf10SendRewardEP5CUser+0x29b>
 81644ec:	89 d3                	mov    %edx,%ebx
 81644ee:	89 c6                	mov    %eax,%esi
 81644f0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81644f3:	89 04 24             	mov    %eax,(%esp)
 81644f6:	e8 ef 04 fd ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81644fb:	89 f0                	mov    %esi,%eax
 81644fd:	89 da                	mov    %ebx,%edx
 81644ff:	89 04 24             	mov    %eax,(%esp)
 8164502:	e8 49 f2 97 00       	call   8ae3750 <_Unwind_Resume>
 8164507:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 816450a:	89 04 24             	mov    %eax,(%esp)
 816450d:	e8 d8 04 fd ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 8164512:	81 c4 ec 03 00 00    	add    $0x3ec,%esp
 8164518:	5b                   	pop    %ebx
 8164519:	5e                   	pop    %esi
 816451a:	5f                   	pop    %edi
 816451b:	5d                   	pop    %ebp
 816451c:	c3                   	ret
 816451d:	90                   	nop

```

```c
// CEventCreateDnf::SendReward @ 0x816426c

/* CEventCreateDnf::SendReward(CUser*) */

void __thiscall CEventCreateDnf::SendReward(CEventCreateDnf *this,CUser *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  Inven_Item *this_00;
  Inven_Item local_3be [610];
  char local_15c [256];
  PacketGuard local_5c [14];
  char local_4e [30];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_30 [12];
  uint local_24;
  uint local_20;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_30);
                    /* try { // try from 0816428d to 081643eb has its CatchHandler @ 081644ec */
  iVar1 = ARAD::Singleton<CreateDnfEventSciprtServer>::Get();
  CreateDnfEventSciprt::GetItemInfo((vector *)(iVar1 + 4),(int)local_30);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "tw_cb_launching_title_01",(bool *)0x0);
  strncpy(local_4e,pcVar2,0x1d);
  pcVar2 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_81",(bool *)0x0);
  strncpy(local_15c,pcVar2,0xff);
  this_00 = local_3be;
  for (iVar1 = 9; iVar1 != -1; iVar1 = iVar1 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  WongWork::CMailBoxHelper::MakeSystemMultiMailPostal((vector *)local_30,local_3be,10);
  uVar3 = CUser::GetServerGroup(param_1);
  sVar4 = strlen(local_15c);
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  uVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_30);
  WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
            (local_4e,local_3be,uVar6,0,uVar5,local_15c,sVar4,0,uVar3,0);
  PacketGuard::PacketGuard(local_5c);
                    /* try { // try from 08164402 to 081644c7 has its CatchHandler @ 081644ca */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_5c,1,600);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,1);
  iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_30);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,iVar1);
  local_24 = 0;
  local_20 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(local_30);
  for (; local_24 < local_20; local_24 = local_24 + 1) {
    piVar7 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              (local_30,local_24);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_5c,*piVar7);
    iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      (local_30,local_24);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_5c,*(int *)(iVar1 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_5c,true);
  CUser::Send(param_1,local_5c);
                    /* try { // try from 081644e5 to 081644e9 has its CatchHandler @ 081644ec */
  PacketGuard::~PacketGuard(local_5c);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_30);
  return;
}

```

---

## SetEventInfo

```asm
// === 081640d4 CEventCreateDnf::SetEventInfo  [0x081640d4-0x8164245] ===
 81640d4:	55                   	push   %ebp
 81640d5:	89 e5                	mov    %esp,%ebp
 81640d7:	53                   	push   %ebx
 81640d8:	83 ec 44             	sub    $0x44,%esp
 81640db:	8b 45 08             	mov    0x8(%ebp),%eax
 81640de:	89 04 24             	mov    %eax,(%esp)
 81640e1:	e8 60 01 00 00       	call   8164246 <_ZN15CEventCreateDnf8GetStateEv>
 81640e6:	83 f8 02             	cmp    $0x2,%eax
 81640e9:	75 25                	jne    8164110 <_ZN15CEventCreateDnf12SetEventInfoEiii+0x3c>
 81640eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81640ee:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81640f2:	0f b6 c0             	movzbl %al,%eax
 81640f5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81640f8:	7e 16                	jle    8164110 <_ZN15CEventCreateDnf12SetEventInfoEiii+0x3c>
 81640fa:	8b 45 08             	mov    0x8(%ebp),%eax
 81640fd:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8164101:	0f b6 c0             	movzbl %al,%eax
 8164104:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8164107:	7f 07                	jg     8164110 <_ZN15CEventCreateDnf12SetEventInfoEiii+0x3c>
 8164109:	b8 01 00 00 00       	mov    $0x1,%eax
 816410e:	eb 05                	jmp    8164115 <_ZN15CEventCreateDnf12SetEventInfoEiii+0x41>
 8164110:	b8 00 00 00 00       	mov    $0x0,%eax
 8164115:	84 c0                	test   %al,%al
 8164117:	74 49                	je     8164162 <_ZN15CEventCreateDnf12SetEventInfoEiii+0x8e>
 8164119:	8b 45 08             	mov    0x8(%ebp),%eax
 816411c:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 8164120:	0f b7 d8             	movzwl %ax,%ebx
 8164123:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816412a:	00 
 816412b:	c7 44 24 08 8e 00 00 	movl   $0x8e,0x8(%esp)
 8164132:	00 
 8164133:	c7 44 24 04 e0 c9 b7 	movl   $0x8b7c9e0,0x4(%esp)
 816413a:	08 
 816413b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 816413e:	89 04 24             	mov    %eax,(%esp)
 8164141:	e8 d2 b5 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8164146:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816414a:	c7 44 24 04 dc bb b7 	movl   $0x8b7bbdc,0x4(%esp)
 8164151:	08 
 8164152:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8164155:	89 04 24             	mov    %eax,(%esp)
 8164158:	e8 2b b6 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816415d:	e9 dd 00 00 00       	jmp    816423f <_ZN15CEventCreateDnf12SetEventInfoEiii+0x16b>
 8164162:	8b 45 08             	mov    0x8(%ebp),%eax
 8164165:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8164169:	0f b6 c0             	movzbl %al,%eax
 816416c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 816416f:	7f 61                	jg     81641d2 <_ZN15CEventCreateDnf12SetEventInfoEiii+0xfe>
 8164171:	8b 45 08             	mov    0x8(%ebp),%eax
 8164174:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8164178:	0f b6 c0             	movzbl %al,%eax
 816417b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 816417e:	7e 52                	jle    81641d2 <_ZN15CEventCreateDnf12SetEventInfoEiii+0xfe>
 8164180:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8164187:	00 
 8164188:	8b 45 08             	mov    0x8(%ebp),%eax
 816418b:	89 04 24             	mov    %eax,(%esp)
 816418e:	e8 bf 00 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 8164193:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816419a:	00 
 816419b:	c7 44 24 08 95 00 00 	movl   $0x95,0x8(%esp)
 81641a2:	00 
 81641a3:	c7 44 24 04 e0 c9 b7 	movl   $0x8b7c9e0,0x4(%esp)
 81641aa:	08 
 81641ab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81641ae:	89 04 24             	mov    %eax,(%esp)
 81641b1:	e8 62 b5 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81641b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81641b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81641bd:	c7 44 24 04 0c bc b7 	movl   $0x8b7bc0c,0x4(%esp)
 81641c4:	08 
 81641c5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81641c8:	89 04 24             	mov    %eax,(%esp)
 81641cb:	e8 b8 b5 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81641d0:	eb 50                	jmp    8164222 <_ZN15CEventCreateDnf12SetEventInfoEiii+0x14e>
 81641d2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81641d9:	00 
 81641da:	8b 45 08             	mov    0x8(%ebp),%eax
 81641dd:	89 04 24             	mov    %eax,(%esp)
 81641e0:	e8 6d 00 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 81641e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81641ec:	00 
 81641ed:	c7 44 24 08 9a 00 00 	movl   $0x9a,0x8(%esp)
 81641f4:	00 
 81641f5:	c7 44 24 04 e0 c9 b7 	movl   $0x8b7c9e0,0x4(%esp)
 81641fc:	08 
 81641fd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164200:	89 04 24             	mov    %eax,(%esp)
 8164203:	e8 10 b5 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8164208:	8b 45 10             	mov    0x10(%ebp),%eax
 816420b:	89 44 24 08          	mov    %eax,0x8(%esp)
 816420f:	c7 44 24 04 dc bb b7 	movl   $0x8b7bbdc,0x4(%esp)
 8164216:	08 
 8164217:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816421a:	89 04 24             	mov    %eax,(%esp)
 816421d:	e8 66 b5 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8164222:	8b 45 10             	mov    0x10(%ebp),%eax
 8164225:	89 c2                	mov    %eax,%edx
 8164227:	8b 45 08             	mov    0x8(%ebp),%eax
 816422a:	66 89 50 16          	mov    %dx,0x16(%eax)
 816422e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8164232:	74 0b                	je     816423f <_ZN15CEventCreateDnf12SetEventInfoEiii+0x16b>
 8164234:	8b 45 14             	mov    0x14(%ebp),%eax
 8164237:	89 c2                	mov    %eax,%edx
 8164239:	8b 45 08             	mov    0x8(%ebp),%eax
 816423c:	88 50 14             	mov    %dl,0x14(%eax)
 816423f:	83 c4 44             	add    $0x44,%esp
 8164242:	5b                   	pop    %ebx
 8164243:	5d                   	pop    %ebp
 8164244:	c3                   	ret
 8164245:	90                   	nop

```

```c
// CEventCreateDnf::SetEventInfo @ 0x81640d4

/* CEventCreateDnf::SetEventInfo(int, int, int) */

void __thiscall
CEventCreateDnf::SetEventInfo(CEventCreateDnf *this,int param_1,int param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  iVar3 = GetState(this);
  if (((iVar3 == 2) && (param_1 < (int)(uint)(byte)this[0x10])) &&
     ((int)(uint)(byte)this[0x11] <= param_1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *(ushort *)(this + 0x16);
    cMyTrace::cMyTrace(local_3c,"void CEventCreateDnf::SetEventInfo(int, int, int)",0x8e,0);
    cMyTrace::operator()(local_3c,"[Taiwan, CreateDnfEvent] State:kReward rate:%d",(uint)uVar1);
  }
  else {
    if ((param_1 < (int)(uint)(byte)this[0x10]) || ((int)(uint)(byte)this[0x11] <= param_1)) {
      setState(this,2);
      cMyTrace::cMyTrace(local_1c,"void CEventCreateDnf::SetEventInfo(int, int, int)",0x9a,0);
      cMyTrace::operator()(local_1c,"[Taiwan, CreateDnfEvent] State:kReward rate:%d",param_2);
    }
    else {
      setState(this,1);
      cMyTrace::cMyTrace(local_2c,"void CEventCreateDnf::SetEventInfo(int, int, int)",0x95,0);
      cMyTrace::operator()(local_2c,"[Taiwan, CreateDnfEvent] State:kIng rate:%d",param_2);
    }
    *(short *)(this + 0x16) = (short)param_2;
    if (param_3 != 0) {
      this[0x14] = SUB41(param_3,0);
    }
  }
  return;
}

```

---

## StartEvent

```asm
// === 08163b36 CEventCreateDnf::StartEvent  [0x08163b36-0x8163bdf] ===
 8163b36:	55                   	push   %ebp
 8163b37:	89 e5                	mov    %esp,%ebp
 8163b39:	57                   	push   %edi
 8163b3a:	56                   	push   %esi
 8163b3b:	53                   	push   %ebx
 8163b3c:	83 ec 3c             	sub    $0x3c,%esp
 8163b3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b42:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8163b49:	00 
 8163b4a:	89 04 24             	mov    %eax,(%esp)
 8163b4d:	e8 90 49 f6 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8163b52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8163b59:	00 
 8163b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b5d:	89 04 24             	mov    %eax,(%esp)
 8163b60:	e8 ed 06 00 00       	call   8164252 <_ZN15CEventCreateDnf8setStateENS_5State1TE>
 8163b65:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8163b6c:	00 
 8163b6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b70:	89 04 24             	mov    %eax,(%esp)
 8163b73:	e8 04 03 00 00       	call   8163e7c <_ZN15CEventCreateDnf16RegistStartTimerEb>
 8163b78:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b7b:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163b7f:	0f b7 f8             	movzwl %ax,%edi
 8163b82:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b85:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8163b89:	0f b6 f0             	movzbl %al,%esi
 8163b8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b8f:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8163b93:	0f b6 d8             	movzbl %al,%ebx
 8163b96:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8163b9d:	00 
 8163b9e:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8163ba5:	00 
 8163ba6:	c7 44 24 04 20 cb b7 	movl   $0x8b7cb20,0x4(%esp)
 8163bad:	08 
 8163bae:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8163bb1:	89 04 24             	mov    %eax,(%esp)
 8163bb4:	e8 5f bb 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8163bb9:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8163bbd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8163bc1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8163bc5:	c7 44 24 04 c0 ba b7 	movl   $0x8b7bac0,0x4(%esp)
 8163bcc:	08 
 8163bcd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8163bd0:	89 04 24             	mov    %eax,(%esp)
 8163bd3:	e8 b0 bb 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8163bd8:	83 c4 3c             	add    $0x3c,%esp
 8163bdb:	5b                   	pop    %ebx
 8163bdc:	5e                   	pop    %esi
 8163bdd:	5f                   	pop    %edi
 8163bde:	5d                   	pop    %ebp
 8163bdf:	c3                   	ret

```

```c
// CEventCreateDnf::StartEvent @ 0x8163b36

/* CEventCreateDnf::StartEvent() */

void __thiscall CEventCreateDnf::StartEvent(CEventCreateDnf *this)

{
  CEventCreateDnf CVar1;
  CEventCreateDnf CVar2;
  ushort uVar3;
  cMyTrace local_2c [28];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  setState(this,0);
  RegistStartTimer(SUB41(this,0));
  uVar3 = *(ushort *)(this + 0x12);
  CVar1 = this[0x11];
  CVar2 = this[0x10];
  cMyTrace::cMyTrace(local_2c,"virtual void CEventCreateDnf::StartEvent()",0x1d,0);
  cMyTrace::operator()
            (local_2c,
             "[Taiwan, CreateDnfEvent] Start! startTime:%2dh, endTime:%2dh, reLoadInterval:%d",
             (uint)(byte)CVar2,(uint)(byte)CVar1,(uint)uVar3);
  return;
}

```

---

## StartEvent_08163be0

```asm
// === 08163be0 CEventCreateDnf::StartEvent  [0x08163be0-0x8163ccf] ===
 8163be0:	55                   	push   %ebp
 8163be1:	89 e5                	mov    %esp,%ebp
 8163be3:	83 ec 38             	sub    $0x38,%esp
 8163be6:	8d 45 0c             	lea    0xc(%ebp),%eax
 8163be9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8163bec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8163bef:	0f b6 10             	movzbl (%eax),%edx
 8163bf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8163bf5:	88 50 10             	mov    %dl,0x10(%eax)
 8163bf8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8163bfb:	0f b6 50 01          	movzbl 0x1(%eax),%edx
 8163bff:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c02:	88 50 11             	mov    %dl,0x11(%eax)
 8163c05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8163c08:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8163c0c:	0f b6 c0             	movzbl %al,%eax
 8163c0f:	c1 e0 02             	shl    $0x2,%eax
 8163c12:	89 c2                	mov    %eax,%edx
 8163c14:	c1 e2 04             	shl    $0x4,%edx
 8163c17:	66 29 c2             	sub    %ax,%dx
 8163c1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c1d:	66 89 50 12          	mov    %dx,0x12(%eax)
 8163c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c24:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8163c28:	3c 17                	cmp    $0x17,%al
 8163c2a:	77 39                	ja     8163c65 <_ZN15CEventCreateDnf10StartEventE10Word_Param+0x85>
 8163c2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c2f:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8163c33:	3c 17                	cmp    $0x17,%al
 8163c35:	77 2e                	ja     8163c65 <_ZN15CEventCreateDnf10StartEventE10Word_Param+0x85>
 8163c37:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c3a:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163c3e:	66 83 f8 3b          	cmp    $0x3b,%ax
 8163c42:	76 21                	jbe    8163c65 <_ZN15CEventCreateDnf10StartEventE10Word_Param+0x85>
 8163c44:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c47:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163c4b:	66 3d 10 0e          	cmp    $0xe10,%ax
 8163c4f:	77 14                	ja     8163c65 <_ZN15CEventCreateDnf10StartEventE10Word_Param+0x85>
 8163c51:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c54:	8b 00                	mov    (%eax),%eax
 8163c56:	83 c0 08             	add    $0x8,%eax
 8163c59:	8b 10                	mov    (%eax),%edx
 8163c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c5e:	89 04 24             	mov    %eax,(%esp)
 8163c61:	ff d2                	call   *%edx
 8163c63:	eb 68                	jmp    8163ccd <_ZN15CEventCreateDnf10StartEventE10Word_Param+0xed>
 8163c65:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c68:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 8163c6c:	0f b7 c8             	movzwl %ax,%ecx
 8163c6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c72:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 8163c76:	0f b6 d0             	movzbl %al,%edx
 8163c79:	8b 45 08             	mov    0x8(%ebp),%eax
 8163c7c:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 8163c80:	0f b6 c0             	movzbl %al,%eax
 8163c83:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8163c87:	89 54 24 18          	mov    %edx,0x18(%esp)
 8163c8b:	89 44 24 14          	mov    %eax,0x14(%esp)
 8163c8f:	c7 44 24 10 10 bb b7 	movl   $0x8b7bb10,0x10(%esp)
 8163c96:	08 
 8163c97:	c7 44 24 0c 31 00 00 	movl   $0x31,0xc(%esp)
 8163c9e:	00 
 8163c9f:	c7 44 24 08 e0 ca b7 	movl   $0x8b7cae0,0x8(%esp)
 8163ca6:	08 
 8163ca7:	c7 44 24 04 60 bb b7 	movl   $0x8b7bb60,0x4(%esp)
 8163cae:	08 
 8163caf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8163cb6:	e8 4f ff 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8163cbb:	8b 45 08             	mov    0x8(%ebp),%eax
 8163cbe:	8b 00                	mov    (%eax),%eax
 8163cc0:	83 c0 0c             	add    $0xc,%eax
 8163cc3:	8b 10                	mov    (%eax),%edx
 8163cc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8163cc8:	89 04 24             	mov    %eax,(%esp)
 8163ccb:	ff d2                	call   *%edx
 8163ccd:	c9                   	leave
 8163cce:	c3                   	ret
 8163ccf:	90                   	nop

```

```c
// CEventCreateDnf::StartEvent @ 0x8163be0

/* CEventCreateDnf::StartEvent(Word_Param) */

void __thiscall CEventCreateDnf::StartEvent(CEventCreateDnf *this,undefined4 param_2)

{
  this[0x10] = param_2._0_1_;
  this[0x11] = param_2._1_1_;
  *(ushort *)(this + 0x12) = (ushort)param_2._2_1_ * 0x40 + (ushort)param_2._2_1_ * -4;
  if (((((byte)this[0x10] < 0x18) && ((byte)this[0x11] < 0x18)) && (0x3b < *(ushort *)(this + 0x12))
      ) && (*(ushort *)(this + 0x12) < 0xe11)) {
    (**(code **)(*(int *)this + 8))(this);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/Event/EventCreateDnf.cpp",
               "virtual void CEventCreateDnf::StartEvent(Word_Param)",0x31,
               "[Taiwan, CreateDnfEvent] Error! startTime:%2dh, endTime:%2dh, reLoadInterval:%d",
               (uint)(byte)this[0x10],(uint)(byte)this[0x11],(uint)*(ushort *)(this + 0x12));
    (**(code **)(*(int *)this + 0xc))(this);
  }
  return;
}

```

---

## setState

```asm
// === 08164252 CEventCreateDnf::setState  [0x08164252-0x816425f] ===
 8164252:	55                   	push   %ebp
 8164253:	89 e5                	mov    %esp,%ebp
 8164255:	8b 45 08             	mov    0x8(%ebp),%eax
 8164258:	8b 55 0c             	mov    0xc(%ebp),%edx
 816425b:	89 50 0c             	mov    %edx,0xc(%eax)
 816425e:	5d                   	pop    %ebp
 816425f:	c3                   	ret

```

```c
// CEventCreateDnf::setState @ 0x8164252

/* CEventCreateDnf::setState(CEventCreateDnf::State::T) */

void __thiscall CEventCreateDnf::setState(CEventCreateDnf *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0xc) = param_2;
  return;
}

```

---

## ~CEventCreateDnf

```asm
// === 08163ae8 CEventCreateDnf::~CEventCreateDnf  [0x08163ae8-0x8163b17] ===
 8163ae8:	55                   	push   %ebp
 8163ae9:	89 e5                	mov    %esp,%ebp
 8163aeb:	83 ec 18             	sub    $0x18,%esp
 8163aee:	8b 45 08             	mov    0x8(%ebp),%eax
 8163af1:	c7 00 c8 cb b7 08    	movl   $0x8b7cbc8,(%eax)
 8163af7:	8b 45 08             	mov    0x8(%ebp),%eax
 8163afa:	89 04 24             	mov    %eax,(%esp)
 8163afd:	e8 50 73 fa ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8163b02:	b8 00 00 00 00       	mov    $0x0,%eax
 8163b07:	84 c0                	test   %al,%al
 8163b09:	74 0b                	je     8163b16 <_ZN15CEventCreateDnfD1Ev+0x2e>
 8163b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b0e:	89 04 24             	mov    %eax,(%esp)
 8163b11:	e8 da 09 5c 00       	call   87244f0 <_ZdlPv>
 8163b16:	c9                   	leave
 8163b17:	c3                   	ret

```

```c
// CEventCreateDnf::~CEventCreateDnf @ 0x8163ae8

/* WARNING: Removing unreachable block (ram,0x08163b0b) */
/* CEventCreateDnf::~CEventCreateDnf() */

void __thiscall CEventCreateDnf::~CEventCreateDnf(CEventCreateDnf *this)

{
  *(undefined ***)this = &PTR__CEventCreateDnf_08b7cbc8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CEventCreateDnf_08163b18

```asm
// === 08163b18 CEventCreateDnf::~CEventCreateDnf  [0x08163b18-0x8163b35] ===
 8163b18:	55                   	push   %ebp
 8163b19:	89 e5                	mov    %esp,%ebp
 8163b1b:	83 ec 18             	sub    $0x18,%esp
 8163b1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b21:	89 04 24             	mov    %eax,(%esp)
 8163b24:	e8 bf ff ff ff       	call   8163ae8 <_ZN15CEventCreateDnfD1Ev>
 8163b29:	8b 45 08             	mov    0x8(%ebp),%eax
 8163b2c:	89 04 24             	mov    %eax,(%esp)
 8163b2f:	e8 bc 09 5c 00       	call   87244f0 <_ZdlPv>
 8163b34:	c9                   	leave
 8163b35:	c3                   	ret

```

```c
// CEventCreateDnf::~CEventCreateDnf @ 0x8163b18

/* CEventCreateDnf::~CEventCreateDnf() */

void __thiscall CEventCreateDnf::~CEventCreateDnf(CEventCreateDnf *this)

{
  ~CEventCreateDnf(this);
  operator_delete(this);
  return;
}

```

