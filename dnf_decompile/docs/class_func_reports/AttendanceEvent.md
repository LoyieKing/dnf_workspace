# AttendanceEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AttendanceEvent

```asm
// === 080c828c AttendanceEvent::AttendanceEvent  [0x080c828c-0x80c82a7] ===
 80c828c:	55                   	push   %ebp
 80c828d:	89 e5                	mov    %esp,%ebp
 80c828f:	83 ec 18             	sub    $0x18,%esp
 80c8292:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8295:	89 04 24             	mov    %eax,(%esp)
 80c8298:	e8 8f 2b 04 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 80c829d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82a0:	c7 00 a8 5b b2 08    	movl   $0x8b25ba8,(%eax)
 80c82a6:	c9                   	leave
 80c82a7:	c3                   	ret

```

```c
// AttendanceEvent::AttendanceEvent @ 0x80c828c

/* AttendanceEvent::AttendanceEvent() */

void __thiscall AttendanceEvent::AttendanceEvent(AttendanceEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__AttendanceEvent_08b25ba8;
  return;
}

```

---

## EndEvent

```asm
// === 080c83f4 AttendanceEvent::EndEvent  [0x080c83f4-0x80c8445] ===
 80c83f4:	55                   	push   %ebp
 80c83f5:	89 e5                	mov    %esp,%ebp
 80c83f7:	83 ec 28             	sub    $0x28,%esp
 80c83fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80c83fd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c8404:	00 
 80c8405:	89 04 24             	mov    %eax,(%esp)
 80c8408:	e8 d5 00 00 00       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80c840d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c8414:	00 
 80c8415:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 80c841c:	00 
 80c841d:	c7 44 24 04 20 5b b2 	movl   $0x8b25b20,0x4(%esp)
 80c8424:	08 
 80c8425:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c8428:	89 04 24             	mov    %eax,(%esp)
 80c842b:	e8 e8 72 48 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80c8430:	c7 44 24 04 eb 4e b2 	movl   $0x8b24eeb,0x4(%esp)
 80c8437:	08 
 80c8438:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c843b:	89 04 24             	mov    %eax,(%esp)
 80c843e:	e8 45 73 48 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80c8443:	c9                   	leave
 80c8444:	c3                   	ret
 80c8445:	90                   	nop

```

```c
// AttendanceEvent::EndEvent @ 0x80c83f4

/* AttendanceEvent::EndEvent() */

void __thiscall AttendanceEvent::EndEvent(AttendanceEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void AttendanceEvent::EndEvent()",0x23,0);
  cMyTrace::operator()(local_1c,"Attendacne Event End!");
  return;
}

```

---

## StartEvent

```asm
// === 080c82f6 AttendanceEvent::StartEvent  [0x080c82f6-0x80c8311] ===
 80c82f6:	55                   	push   %ebp
 80c82f7:	89 e5                	mov    %esp,%ebp
 80c82f9:	83 ec 18             	sub    $0x18,%esp
 80c82fc:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80c8306:	00 
 80c8307:	89 04 24             	mov    %eax,(%esp)
 80c830a:	e8 d3 01 00 00       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80c830f:	c9                   	leave
 80c8310:	c3                   	ret
 80c8311:	90                   	nop

```

```c
// AttendanceEvent::StartEvent @ 0x80c82f6

/* AttendanceEvent::StartEvent() */

void __thiscall AttendanceEvent::StartEvent(AttendanceEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}

```

---

## StartEvent_080c8312

```asm
// === 080c8312 AttendanceEvent::StartEvent  [0x080c8312-0x80c83f3] ===
 80c8312:	55                   	push   %ebp
 80c8313:	89 e5                	mov    %esp,%ebp
 80c8315:	56                   	push   %esi
 80c8316:	53                   	push   %ebx
 80c8317:	83 ec 30             	sub    $0x30,%esp
 80c831a:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 80c831e:	89 c2                	mov    %eax,%edx
 80c8320:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8323:	66 89 50 04          	mov    %dx,0x4(%eax)
 80c8327:	0f b7 45 0e          	movzwl 0xe(%ebp),%eax
 80c832b:	89 c2                	mov    %eax,%edx
 80c832d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8330:	66 89 50 06          	mov    %dx,0x6(%eax)
 80c8334:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8337:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80c833b:	66 85 c0             	test   %ax,%ax
 80c833e:	7f 48                	jg     80c8388 <_ZN15AttendanceEvent10StartEventE10Word_Param+0x76>
 80c8340:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8343:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 80c8347:	0f bf d0             	movswl %ax,%edx
 80c834a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c834d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80c8351:	98                   	cwtl
 80c8352:	89 54 24 18          	mov    %edx,0x18(%esp)
 80c8356:	89 44 24 14          	mov    %eax,0x14(%esp)
 80c835a:	c7 44 24 10 80 4e b2 	movl   $0x8b24e80,0x10(%esp)
 80c8361:	08 
 80c8362:	c7 44 24 0c 19 00 00 	movl   $0x19,0xc(%esp)
 80c8369:	00 
 80c836a:	c7 44 24 08 60 5b b2 	movl   $0x8b25b60,0x8(%esp)
 80c8371:	08 
 80c8372:	c7 44 24 04 ad 4e b2 	movl   $0x8b24ead,0x4(%esp)
 80c8379:	08 
 80c837a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80c8381:	e8 84 b8 a0 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80c8386:	eb 64                	jmp    80c83ec <_ZN15AttendanceEvent10StartEventE10Word_Param+0xda>
 80c8388:	8b 45 08             	mov    0x8(%ebp),%eax
 80c838b:	8b 00                	mov    (%eax),%eax
 80c838d:	83 c0 08             	add    $0x8,%eax
 80c8390:	8b 10                	mov    (%eax),%edx
 80c8392:	8b 45 08             	mov    0x8(%ebp),%eax
 80c8395:	89 04 24             	mov    %eax,(%esp)
 80c8398:	ff d2                	call   *%edx
 80c839a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c839d:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 80c83a1:	0f bf f0             	movswl %ax,%esi
 80c83a4:	8b 45 08             	mov    0x8(%ebp),%eax
 80c83a7:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 80c83ab:	0f bf d8             	movswl %ax,%ebx
 80c83ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80c83b5:	00 
 80c83b6:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 80c83bd:	00 
 80c83be:	c7 44 24 04 60 5b b2 	movl   $0x8b25b60,0x4(%esp)
 80c83c5:	08 
 80c83c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c83c9:	89 04 24             	mov    %eax,(%esp)
 80c83cc:	e8 47 73 48 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80c83d1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80c83d5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80c83d9:	c7 44 24 04 c4 4e b2 	movl   $0x8b24ec4,0x4(%esp)
 80c83e0:	08 
 80c83e1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80c83e4:	89 04 24             	mov    %eax,(%esp)
 80c83e7:	e8 9c 73 48 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80c83ec:	83 c4 30             	add    $0x30,%esp
 80c83ef:	5b                   	pop    %ebx
 80c83f0:	5e                   	pop    %esi
 80c83f1:	5d                   	pop    %ebp
 80c83f2:	c3                   	ret
 80c83f3:	90                   	nop

```

```c
// AttendanceEvent::StartEvent @ 0x80c8312

/* AttendanceEvent::StartEvent(Word_Param) */

void __thiscall AttendanceEvent::StartEvent(AttendanceEvent *this,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  cMyTrace local_1c [16];
  
  *(undefined2 *)(this + 4) = (undefined2)param_2;
  *(undefined2 *)(this + 6) = param_2._2_2_;
  if (*(short *)(this + 4) < 1) {
    LogManager::logFormat
              (1,"AttendanceEvent.cpp","virtual void AttendanceEvent::StartEvent(Word_Param)",0x19,
               "Attendance(AddInfo:%d,%d) Event Start Error!",(int)*(short *)(this + 4),
               (int)*(short *)(this + 6));
  }
  else {
    (**(code **)(*(int *)this + 8))(this);
    sVar1 = *(short *)(this + 6);
    sVar2 = *(short *)(this + 4);
    cMyTrace::cMyTrace(local_1c,"virtual void AttendanceEvent::StartEvent(Word_Param)",0x1d,0);
    cMyTrace::operator()(local_1c,"Attendance(AddInfo:%d,%d) Event Start!",(int)sVar2,(int)sVar1);
  }
  return;
}

```

---

## getRewordItem

```asm
// === 080c8446 AttendanceEvent::getRewordItem  [0x080c8446-0x80c8467] ===
 80c8446:	55                   	push   %ebp
 80c8447:	89 e5                	mov    %esp,%ebp
 80c8449:	83 ec 28             	sub    $0x28,%esp
 80c844c:	8b 55 08             	mov    0x8(%ebp),%edx
 80c844f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80c8452:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c8456:	89 04 24             	mov    %eax,(%esp)
 80c8459:	e8 72 00 00 00       	call   80c84d0 <_ZN10CEventBase10GetAddInfoEv>
 80c845e:	83 ec 04             	sub    $0x4,%esp
 80c8461:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 80c8465:	98                   	cwtl
 80c8466:	c9                   	leave
 80c8467:	c3                   	ret

```

```c
// AttendanceEvent::getRewordItem @ 0x80c8446

/* AttendanceEvent::getRewordItem() */

int AttendanceEvent::getRewordItem(void)

{
  undefined2 local_10;
  
  CEventBase::GetAddInfo();
  return (int)local_10;
}

```

---

## ~AttendanceEvent

```asm
// === 080c82a8 AttendanceEvent::~AttendanceEvent  [0x080c82a8-0x80c82d7] ===
 80c82a8:	55                   	push   %ebp
 80c82a9:	89 e5                	mov    %esp,%ebp
 80c82ab:	83 ec 18             	sub    $0x18,%esp
 80c82ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82b1:	c7 00 a8 5b b2 08    	movl   $0x8b25ba8,(%eax)
 80c82b7:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82ba:	89 04 24             	mov    %eax,(%esp)
 80c82bd:	e8 90 2b 04 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80c82c2:	b8 00 00 00 00       	mov    $0x0,%eax
 80c82c7:	84 c0                	test   %al,%al
 80c82c9:	74 0b                	je     80c82d6 <_ZN15AttendanceEventD1Ev+0x2e>
 80c82cb:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82ce:	89 04 24             	mov    %eax,(%esp)
 80c82d1:	e8 1a c2 65 00       	call   87244f0 <_ZdlPv>
 80c82d6:	c9                   	leave
 80c82d7:	c3                   	ret

```

```c
// AttendanceEvent::~AttendanceEvent @ 0x80c82a8

/* WARNING: Removing unreachable block (ram,0x080c82cb) */
/* AttendanceEvent::~AttendanceEvent() */

void __thiscall AttendanceEvent::~AttendanceEvent(AttendanceEvent *this)

{
  *(undefined ***)this = &PTR__AttendanceEvent_08b25ba8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~AttendanceEvent_080c82d8

```asm
// === 080c82d8 AttendanceEvent::~AttendanceEvent  [0x080c82d8-0x80c82f5] ===
 80c82d8:	55                   	push   %ebp
 80c82d9:	89 e5                	mov    %esp,%ebp
 80c82db:	83 ec 18             	sub    $0x18,%esp
 80c82de:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82e1:	89 04 24             	mov    %eax,(%esp)
 80c82e4:	e8 bf ff ff ff       	call   80c82a8 <_ZN15AttendanceEventD1Ev>
 80c82e9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c82ec:	89 04 24             	mov    %eax,(%esp)
 80c82ef:	e8 fc c1 65 00       	call   87244f0 <_ZdlPv>
 80c82f4:	c9                   	leave
 80c82f5:	c3                   	ret

```

```c
// AttendanceEvent::~AttendanceEvent @ 0x80c82d8

/* AttendanceEvent::~AttendanceEvent() */

void __thiscall AttendanceEvent::~AttendanceEvent(AttendanceEvent *this)

{
  ~AttendanceEvent(this);
  operator_delete(this);
  return;
}

```

