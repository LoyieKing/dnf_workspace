# CEventStayTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CEventStayTime

```asm
// === 0816c066 CEventStayTime::CEventStayTime  [0x0816c066-0x816c089] ===
 816c066:	55                   	push   %ebp
 816c067:	89 e5                	mov    %esp,%ebp
 816c069:	83 ec 18             	sub    $0x18,%esp
 816c06c:	8b 45 08             	mov    0x8(%ebp),%eax
 816c06f:	89 04 24             	mov    %eax,(%esp)
 816c072:	e8 b5 ed f9 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 816c077:	8b 45 08             	mov    0x8(%ebp),%eax
 816c07a:	c7 00 c8 0d b8 08    	movl   $0x8b80dc8,(%eax)
 816c080:	8b 45 08             	mov    0x8(%ebp),%eax
 816c083:	c6 40 09 01          	movb   $0x1,0x9(%eax)
 816c087:	c9                   	leave
 816c088:	c3                   	ret
 816c089:	90                   	nop

```

```c
// CEventStayTime::CEventStayTime @ 0x816c066

/* CEventStayTime::CEventStayTime() */

void __thiscall CEventStayTime::CEventStayTime(CEventStayTime *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CEventStayTime_08b80dc8;
  this[9] = (CEventStayTime)0x1;
  return;
}

```

---

## EndEvent

```asm
// === 0816be60 CEventStayTime::EndEvent  [0x0816be60-0x816bebb] ===
 816be60:	55                   	push   %ebp
 816be61:	89 e5                	mov    %esp,%ebp
 816be63:	83 ec 28             	sub    $0x28,%esp
 816be66:	c7 44 24 10 df 00 b8 	movl   $0x8b800df,0x10(%esp)
 816be6d:	08 
 816be6e:	c7 44 24 0c 1b 00 00 	movl   $0x1b,0xc(%esp)
 816be75:	00 
 816be76:	c7 44 24 08 40 0d b8 	movl   $0x8b80d40,0x8(%esp)
 816be7d:	08 
 816be7e:	c7 44 24 04 fc 00 b8 	movl   $0x8b800fc,0x4(%esp)
 816be85:	08 
 816be86:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 816be8d:	e8 78 7d 96 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 816be92:	8b 45 08             	mov    0x8(%ebp),%eax
 816be95:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 816be9c:	8b 45 08             	mov    0x8(%ebp),%eax
 816be9f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 816bea6:	8b 45 08             	mov    0x8(%ebp),%eax
 816bea9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816beb0:	00 
 816beb1:	89 04 24             	mov    %eax,(%esp)
 816beb4:	e8 29 c6 f5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 816beb9:	c9                   	leave
 816beba:	c3                   	ret
 816bebb:	90                   	nop

```

```c
// CEventStayTime::EndEvent @ 0x816be60

/* CEventStayTime::EndEvent() */

void __thiscall CEventStayTime::EndEvent(CEventStayTime *this)

{
  LogManager::logFormat
            (1,"localtaiwan/Event/EventStayTimeCharacter.cpp",
             "virtual void CEventStayTime::EndEvent()",0x1b,"[CEventStayTime] End Event.");
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  CEventBase::SetEventFlag((CEventBase *)this,false);
  return;
}

```

---

## IsFirstReset

```asm
// === 0816bed4 CEventStayTime::IsFirstReset  [0x0816bed4-0x816bef9] ===
 816bed4:	55                   	push   %ebp
 816bed5:	89 e5                	mov    %esp,%ebp
 816bed7:	8b 45 08             	mov    0x8(%ebp),%eax
 816beda:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 816bede:	84 c0                	test   %al,%al
 816bee0:	74 0e                	je     816bef0 <_ZN14CEventStayTime12IsFirstResetEv+0x1c>
 816bee2:	8b 45 08             	mov    0x8(%ebp),%eax
 816bee5:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 816bee9:	b8 01 00 00 00       	mov    $0x1,%eax
 816beee:	eb 07                	jmp    816bef7 <_ZN14CEventStayTime12IsFirstResetEv+0x23>
 816bef0:	8b 45 08             	mov    0x8(%ebp),%eax
 816bef3:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 816bef7:	5d                   	pop    %ebp
 816bef8:	c3                   	ret
 816bef9:	90                   	nop

```

```c
// CEventStayTime::IsFirstReset @ 0x816bed4

/* CEventStayTime::IsFirstReset() */

CEventStayTime __thiscall CEventStayTime::IsFirstReset(CEventStayTime *this)

{
  CEventStayTime CVar1;
  
  if (this[9] == (CEventStayTime)0x0) {
    CVar1 = this[9];
  }
  else {
    this[9] = (CEventStayTime)0x0;
    CVar1 = (CEventStayTime)0x1;
  }
  return CVar1;
}

```

---

## RegistNextTimer

```asm
// === 0816befa CEventStayTime::RegistNextTimer  [0x0816befa-0x816bf69] ===
 816befa:	55                   	push   %ebp
 816befb:	89 e5                	mov    %esp,%ebp
 816befd:	53                   	push   %ebx
 816befe:	83 ec 24             	sub    $0x24,%esp
 816bf01:	8b 45 08             	mov    0x8(%ebp),%eax
 816bf04:	8b 00                	mov    (%eax),%eax
 816bf06:	83 c0 34             	add    $0x34,%eax
 816bf09:	8b 10                	mov    (%eax),%edx
 816bf0b:	8b 45 08             	mov    0x8(%ebp),%eax
 816bf0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816bf15:	00 
 816bf16:	89 04 24             	mov    %eax,(%esp)
 816bf19:	ff d2                	call   *%edx
 816bf1b:	83 f0 01             	xor    $0x1,%eax
 816bf1e:	84 c0                	test   %al,%al
 816bf20:	75 41                	jne    816bf63 <_ZN14CEventStayTime15RegistNextTimerEv+0x69>
 816bf22:	8b 45 08             	mov    0x8(%ebp),%eax
 816bf25:	8b 58 10             	mov    0x10(%eax),%ebx
 816bf28:	e8 4f a5 f8 ff       	call   80f647c <_Z12G_TimerQueuev>
 816bf2d:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 816bf34:	00 
 816bf35:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 816bf3c:	00 
 816bf3d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 816bf41:	c7 44 24 0c ad 00 00 	movl   $0xad,0xc(%esp)
 816bf48:	00 
 816bf49:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 816bf50:	00 
 816bf51:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816bf58:	00 
 816bf59:	89 04 24             	mov    %eax,(%esp)
 816bf5c:	e8 b5 4e 4c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 816bf61:	eb 01                	jmp    816bf64 <_ZN14CEventStayTime15RegistNextTimerEv+0x6a>
 816bf63:	90                   	nop
 816bf64:	83 c4 24             	add    $0x24,%esp
 816bf67:	5b                   	pop    %ebx
 816bf68:	5d                   	pop    %ebp
 816bf69:	c3                   	ret

```

```c
// CEventStayTime::RegistNextTimer @ 0x816befa

/* CEventStayTime::RegistNextTimer() */

void __thiscall CEventStayTime::RegistNextTimer(CEventStayTime *this)

{
  undefined4 uVar1;
  char cVar2;
  TimerQueue *pTVar3;
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 == '\x01') {
    uVar1 = *(undefined4 *)(this + 0x10);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,2,0,0xad,uVar1,0,0);
  }
  return;
}

```

---

## StartEvent

```asm
// === 0816bda0 CEventStayTime::StartEvent  [0x0816bda0-0x816be17] ===
 816bda0:	55                   	push   %ebp
 816bda1:	89 e5                	mov    %esp,%ebp
 816bda3:	56                   	push   %esi
 816bda4:	53                   	push   %ebx
 816bda5:	83 ec 20             	sub    $0x20,%esp
 816bda8:	8b 45 08             	mov    0x8(%ebp),%eax
 816bdab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816bdb2:	00 
 816bdb3:	89 04 24             	mov    %eax,(%esp)
 816bdb6:	e8 27 c7 f5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 816bdbb:	8b 45 08             	mov    0x8(%ebp),%eax
 816bdbe:	8b 70 10             	mov    0x10(%eax),%esi
 816bdc1:	8b 45 08             	mov    0x8(%ebp),%eax
 816bdc4:	8b 58 0c             	mov    0xc(%eax),%ebx
 816bdc7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816bdce:	00 
 816bdcf:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 816bdd6:	00 
 816bdd7:	c7 44 24 04 80 0d b8 	movl   $0x8b80d80,0x4(%esp)
 816bdde:	08 
 816bddf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bde2:	89 04 24             	mov    %eax,(%esp)
 816bde5:	e8 2e 39 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816bdea:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816bdee:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816bdf2:	c7 44 24 04 a4 00 b8 	movl   $0x8b800a4,0x4(%esp)
 816bdf9:	08 
 816bdfa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bdfd:	89 04 24             	mov    %eax,(%esp)
 816be00:	e8 83 39 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816be05:	8b 45 08             	mov    0x8(%ebp),%eax
 816be08:	89 04 24             	mov    %eax,(%esp)
 816be0b:	e8 ea 00 00 00       	call   816befa <_ZN14CEventStayTime15RegistNextTimerEv>
 816be10:	83 c4 20             	add    $0x20,%esp
 816be13:	5b                   	pop    %ebx
 816be14:	5e                   	pop    %esi
 816be15:	5d                   	pop    %ebp
 816be16:	c3                   	ret
 816be17:	90                   	nop

```

```c
// CEventStayTime::StartEvent @ 0x816bda0

/* CEventStayTime::StartEvent() */

void __thiscall CEventStayTime::StartEvent(CEventStayTime *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_1c [16];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  uVar1 = *(undefined4 *)(this + 0x10);
  uVar2 = *(undefined4 *)(this + 0xc);
  cMyTrace::cMyTrace(local_1c,"virtual void CEventStayTime::StartEvent()",10,0);
  cMyTrace::operator()
            (local_1c,"[Taiwan, StayEvent] Start! StayTime:%dMin, CheckTime:%dMin",uVar2,uVar1);
  RegistNextTimer(this);
  return;
}

```

---

## StartEvent_0816be18

```asm
// === 0816be18 CEventStayTime::StartEvent  [0x0816be18-0x816be5f] ===
 816be18:	55                   	push   %ebp
 816be19:	89 e5                	mov    %esp,%ebp
 816be1b:	83 ec 18             	sub    $0x18,%esp
 816be1e:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 816be22:	0f b7 c0             	movzwl %ax,%eax
 816be25:	c1 e0 02             	shl    $0x2,%eax
 816be28:	89 c2                	mov    %eax,%edx
 816be2a:	c1 e2 04             	shl    $0x4,%edx
 816be2d:	29 c2                	sub    %eax,%edx
 816be2f:	8b 45 08             	mov    0x8(%ebp),%eax
 816be32:	89 50 0c             	mov    %edx,0xc(%eax)
 816be35:	0f b7 45 0e          	movzwl 0xe(%ebp),%eax
 816be39:	0f b7 c0             	movzwl %ax,%eax
 816be3c:	c1 e0 02             	shl    $0x2,%eax
 816be3f:	89 c2                	mov    %eax,%edx
 816be41:	c1 e2 04             	shl    $0x4,%edx
 816be44:	29 c2                	sub    %eax,%edx
 816be46:	8b 45 08             	mov    0x8(%ebp),%eax
 816be49:	89 50 10             	mov    %edx,0x10(%eax)
 816be4c:	8b 45 08             	mov    0x8(%ebp),%eax
 816be4f:	8b 00                	mov    (%eax),%eax
 816be51:	83 c0 08             	add    $0x8,%eax
 816be54:	8b 10                	mov    (%eax),%edx
 816be56:	8b 45 08             	mov    0x8(%ebp),%eax
 816be59:	89 04 24             	mov    %eax,(%esp)
 816be5c:	ff d2                	call   *%edx
 816be5e:	c9                   	leave
 816be5f:	c3                   	ret

```

```c
// CEventStayTime::StartEvent @ 0x816be18

/* CEventStayTime::StartEvent(Word_Param) */

void __thiscall CEventStayTime::StartEvent(CEventStayTime *this,uint param_2)

{
  *(uint *)(this + 0xc) = (param_2 & 0xffff) * 0x3c;
  *(uint *)(this + 0x10) = (param_2 >> 0x10) * 0x3c;
  (**(code **)(*(int *)this + 8))(this);
  return;
}

```

---

## dailyresetData

```asm
// === 0816bf6a CEventStayTime::dailyresetData  [0x0816bf6a-0x816c065] ===
 816bf6a:	55                   	push   %ebp
 816bf6b:	89 e5                	mov    %esp,%ebp
 816bf6d:	56                   	push   %esi
 816bf6e:	53                   	push   %ebx
 816bf6f:	83 ec 20             	sub    $0x20,%esp
 816bf72:	8b 45 08             	mov    0x8(%ebp),%eax
 816bf75:	8b 00                	mov    (%eax),%eax
 816bf77:	83 c0 34             	add    $0x34,%eax
 816bf7a:	8b 10                	mov    (%eax),%edx
 816bf7c:	8b 45 08             	mov    0x8(%ebp),%eax
 816bf7f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816bf86:	00 
 816bf87:	89 04 24             	mov    %eax,(%esp)
 816bf8a:	ff d2                	call   *%edx
 816bf8c:	83 f0 01             	xor    $0x1,%eax
 816bf8f:	84 c0                	test   %al,%al
 816bf91:	0f 85 c4 00 00 00    	jne    816c05b <_ZN14CEventStayTime14dailyresetDataEv+0xf1>
 816bf97:	8b 45 08             	mov    0x8(%ebp),%eax
 816bf9a:	89 04 24             	mov    %eax,(%esp)
 816bf9d:	e8 32 ff ff ff       	call   816bed4 <_ZN14CEventStayTime12IsFirstResetEv>
 816bfa2:	84 c0                	test   %al,%al
 816bfa4:	0f 85 b4 00 00 00    	jne    816c05e <_ZN14CEventStayTime14dailyresetDataEv+0xf4>
 816bfaa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 816bfaf:	c7 44 24 08 4a 00 00 	movl   $0x4a,0x8(%esp)
 816bfb6:	00 
 816bfb7:	c7 44 24 04 fc 00 b8 	movl   $0x8b800fc,0x4(%esp)
 816bfbe:	08 
 816bfbf:	89 04 24             	mov    %eax,(%esp)
 816bfc2:	e8 bf 3a 12 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 816bfc7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 816bfce:	00 
 816bfcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 816bfd3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816bfd6:	89 04 24             	mov    %eax,(%esp)
 816bfd9:	e8 48 cc f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 816bfde:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 816bfe5:	ff 
 816bfe6:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 816bfed:	00 
 816bfee:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816bff1:	89 04 24             	mov    %eax,(%esp)
 816bff4:	e8 57 79 ff ff       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 816bff9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816bffc:	89 04 24             	mov    %eax,(%esp)
 816bfff:	e8 4a cc f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 816c004:	89 04 24             	mov    %eax,(%esp)
 816c007:	e8 28 01 00 00       	call   816c134 <_ZN12CStreamGuard11GetInBufferIN6Taiwan21SigResetStayTimeEventEEEPT_v>
 816c00c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816c00f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816c013:	74 39                	je     816c04e <_ZN14CEventStayTime14dailyresetDataEv+0xe4>
 816c015:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 816c01a:	8d 55 ec             	lea    -0x14(%ebp),%edx
 816c01d:	89 54 24 08          	mov    %edx,0x8(%esp)
 816c021:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 816c028:	00 
 816c029:	89 04 24             	mov    %eax,(%esp)
 816c02c:	e8 ad 4f 40 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 816c031:	eb 1b                	jmp    816c04e <_ZN14CEventStayTime14dailyresetDataEv+0xe4>
 816c033:	89 d3                	mov    %edx,%ebx
 816c035:	89 c6                	mov    %eax,%esi
 816c037:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816c03a:	89 04 24             	mov    %eax,(%esp)
 816c03d:	e8 90 08 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816c042:	89 f0                	mov    %esi,%eax
 816c044:	89 da                	mov    %ebx,%edx
 816c046:	89 04 24             	mov    %eax,(%esp)
 816c049:	e8 02 77 97 00       	call   8ae3750 <_Unwind_Resume>
 816c04e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 816c051:	89 04 24             	mov    %eax,(%esp)
 816c054:	e8 79 08 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 816c059:	eb 04                	jmp    816c05f <_ZN14CEventStayTime14dailyresetDataEv+0xf5>
 816c05b:	90                   	nop
 816c05c:	eb 01                	jmp    816c05f <_ZN14CEventStayTime14dailyresetDataEv+0xf5>
 816c05e:	90                   	nop
 816c05f:	83 c4 20             	add    $0x20,%esp
 816c062:	5b                   	pop    %ebx
 816c063:	5e                   	pop    %esi
 816c064:	5d                   	pop    %ebp
 816c065:	c3                   	ret

```

```c
// CEventStayTime::dailyresetData @ 0x816bf6a

/* CEventStayTime::dailyresetData() */

void __thiscall CEventStayTime::dailyresetData(CEventStayTime *this)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *this_00;
  CStreamGuard local_18 [8];
  SigResetStayTimeEvent *local_10;
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if ((cVar1 == '\x01') && (cVar1 = IsFirstReset(this), cVar1 == '\0')) {
    pSVar2 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Event/EventStayTimeCharacter.cpp",0x4a);
    CStreamGuard::CStreamGuard(local_18,pSVar2,true);
                    /* try { // try from 0816bff4 to 0816c030 has its CatchHandler @ 0816c033 */
    Taiwan::internal_stream(local_18,7,0xffffffff);
    this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<Taiwan::SigResetStayTimeEvent>(this_00);
    if (local_10 != (SigResetStayTimeEvent *)0x0) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    }
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}

```

---

## getIntervalStayTime

```asm
// === 0816bec8 CEventStayTime::getIntervalStayTime  [0x0816bec8-0x816bed3] ===
 816bec8:	55                   	push   %ebp
 816bec9:	89 e5                	mov    %esp,%ebp
 816becb:	8b 45 08             	mov    0x8(%ebp),%eax
 816bece:	8b 40 10             	mov    0x10(%eax),%eax
 816bed1:	5d                   	pop    %ebp
 816bed2:	c3                   	ret
 816bed3:	90                   	nop

```

```c
// CEventStayTime::getIntervalStayTime @ 0x816bec8

/* CEventStayTime::getIntervalStayTime() */

undefined4 __thiscall CEventStayTime::getIntervalStayTime(CEventStayTime *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## getRewardStayTime

```asm
// === 0816bebc CEventStayTime::getRewardStayTime  [0x0816bebc-0x816bec7] ===
 816bebc:	55                   	push   %ebp
 816bebd:	89 e5                	mov    %esp,%ebp
 816bebf:	8b 45 08             	mov    0x8(%ebp),%eax
 816bec2:	8b 40 0c             	mov    0xc(%eax),%eax
 816bec5:	5d                   	pop    %ebp
 816bec6:	c3                   	ret
 816bec7:	90                   	nop

```

```c
// CEventStayTime::getRewardStayTime @ 0x816bebc

/* CEventStayTime::getRewardStayTime() */

undefined4 __thiscall CEventStayTime::getRewardStayTime(CEventStayTime *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## ~CEventStayTime

```asm
// === 0816c08a CEventStayTime::~CEventStayTime  [0x0816c08a-0x816c0b9] ===
 816c08a:	55                   	push   %ebp
 816c08b:	89 e5                	mov    %esp,%ebp
 816c08d:	83 ec 18             	sub    $0x18,%esp
 816c090:	8b 45 08             	mov    0x8(%ebp),%eax
 816c093:	c7 00 c8 0d b8 08    	movl   $0x8b80dc8,(%eax)
 816c099:	8b 45 08             	mov    0x8(%ebp),%eax
 816c09c:	89 04 24             	mov    %eax,(%esp)
 816c09f:	e8 ae ed f9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 816c0a4:	b8 00 00 00 00       	mov    $0x0,%eax
 816c0a9:	84 c0                	test   %al,%al
 816c0ab:	74 0b                	je     816c0b8 <_ZN14CEventStayTimeD1Ev+0x2e>
 816c0ad:	8b 45 08             	mov    0x8(%ebp),%eax
 816c0b0:	89 04 24             	mov    %eax,(%esp)
 816c0b3:	e8 38 84 5b 00       	call   87244f0 <_ZdlPv>
 816c0b8:	c9                   	leave
 816c0b9:	c3                   	ret

```

```c
// CEventStayTime::~CEventStayTime @ 0x816c08a

/* WARNING: Removing unreachable block (ram,0x0816c0ad) */
/* CEventStayTime::~CEventStayTime() */

void __thiscall CEventStayTime::~CEventStayTime(CEventStayTime *this)

{
  *(undefined ***)this = &PTR__CEventStayTime_08b80dc8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CEventStayTime_0816c0ba

```asm
// === 0816c0ba CEventStayTime::~CEventStayTime  [0x0816c0ba-0x816c0d7] ===
 816c0ba:	55                   	push   %ebp
 816c0bb:	89 e5                	mov    %esp,%ebp
 816c0bd:	83 ec 18             	sub    $0x18,%esp
 816c0c0:	8b 45 08             	mov    0x8(%ebp),%eax
 816c0c3:	89 04 24             	mov    %eax,(%esp)
 816c0c6:	e8 bf ff ff ff       	call   816c08a <_ZN14CEventStayTimeD1Ev>
 816c0cb:	8b 45 08             	mov    0x8(%ebp),%eax
 816c0ce:	89 04 24             	mov    %eax,(%esp)
 816c0d1:	e8 1a 84 5b 00       	call   87244f0 <_ZdlPv>
 816c0d6:	c9                   	leave
 816c0d7:	c3                   	ret

```

```c
// CEventStayTime::~CEventStayTime @ 0x816c0ba

/* CEventStayTime::~CEventStayTime() */

void __thiscall CEventStayTime::~CEventStayTime(CEventStayTime *this)

{
  ~CEventStayTime(this);
  operator_delete(this);
  return;
}

```

