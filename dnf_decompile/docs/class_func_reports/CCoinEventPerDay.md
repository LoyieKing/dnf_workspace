# CCoinEventPerDay

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CCoinEventPerDay

```asm
// === 0810ab10 CCoinEventPerDay::CCoinEventPerDay  [0x0810ab10-0x810ab47] ===
 810ab10:	55                   	push   %ebp
 810ab11:	89 e5                	mov    %esp,%ebp
 810ab13:	83 ec 18             	sub    $0x18,%esp
 810ab16:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab19:	89 04 24             	mov    %eax,(%esp)
 810ab1c:	e8 0b 03 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 810ab21:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab24:	c7 00 08 b4 b4 08    	movl   $0x8b4b408,(%eax)
 810ab2a:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab2d:	c6 40 09 01          	movb   $0x1,0x9(%eax)
 810ab31:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab34:	c6 40 0a 01          	movb   $0x1,0xa(%eax)
 810ab38:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab3b:	c6 40 0b 01          	movb   $0x1,0xb(%eax)
 810ab3f:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab42:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 810ab46:	c9                   	leave
 810ab47:	c3                   	ret

```

```c
// CCoinEventPerDay::CCoinEventPerDay @ 0x810ab10

/* CCoinEventPerDay::CCoinEventPerDay() */

void __thiscall CCoinEventPerDay::CCoinEventPerDay(CCoinEventPerDay *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCoinEventPerDay_08b4b408;
  this[9] = (CCoinEventPerDay)0x1;
  this[10] = (CCoinEventPerDay)0x1;
  this[0xb] = (CCoinEventPerDay)0x1;
  this[0xc] = (CCoinEventPerDay)0x1;
  return;
}

```

---

## EndEvent

```asm
// === 0810aca8 CCoinEventPerDay::EndEvent  [0x0810aca8-0x810ad15] ===
 810aca8:	55                   	push   %ebp
 810aca9:	89 e5                	mov    %esp,%ebp
 810acab:	83 ec 28             	sub    $0x28,%esp
 810acae:	8b 45 08             	mov    0x8(%ebp),%eax
 810acb1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810acb8:	00 
 810acb9:	89 04 24             	mov    %eax,(%esp)
 810acbc:	e8 21 d8 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810acc1:	8b 45 08             	mov    0x8(%ebp),%eax
 810acc4:	c6 40 09 01          	movb   $0x1,0x9(%eax)
 810acc8:	8b 45 08             	mov    0x8(%ebp),%eax
 810accb:	c6 40 0a 01          	movb   $0x1,0xa(%eax)
 810accf:	8b 45 08             	mov    0x8(%ebp),%eax
 810acd2:	c6 40 0b 01          	movb   $0x1,0xb(%eax)
 810acd6:	8b 45 08             	mov    0x8(%ebp),%eax
 810acd9:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 810acdd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810ace4:	00 
 810ace5:	c7 44 24 08 63 00 00 	movl   $0x63,0x8(%esp)
 810acec:	00 
 810aced:	c7 44 24 04 d0 b3 b4 	movl   $0x8b4b3d0,0x4(%esp)
 810acf4:	08 
 810acf5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810acf8:	89 04 24             	mov    %eax,(%esp)
 810acfb:	e8 18 4a 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810ad00:	c7 44 24 04 3b ad b4 	movl   $0x8b4ad3b,0x4(%esp)
 810ad07:	08 
 810ad08:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810ad0b:	89 04 24             	mov    %eax,(%esp)
 810ad0e:	e8 75 4a 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810ad13:	c9                   	leave
 810ad14:	c3                   	ret
 810ad15:	90                   	nop

```

```c
// CCoinEventPerDay::EndEvent @ 0x810aca8

/* CCoinEventPerDay::EndEvent() */

void __thiscall CCoinEventPerDay::EndEvent(CCoinEventPerDay *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  this[9] = (CCoinEventPerDay)0x1;
  this[10] = (CCoinEventPerDay)0x1;
  this[0xb] = (CCoinEventPerDay)0x1;
  this[0xc] = (CCoinEventPerDay)0x1;
  cMyTrace::cMyTrace(local_1c,"EndEvent",99,0);
  cMyTrace::operator()(local_1c,"Coin Event Per Day End");
  return;
}

```

---

## GetCoinNoPerDay

```asm
// === 0810ad16 CCoinEventPerDay::GetCoinNoPerDay  [0x0810ad16-0x810ad48] ===
 810ad16:	55                   	push   %ebp
 810ad17:	89 e5                	mov    %esp,%ebp
 810ad19:	83 7d 0c 11          	cmpl   $0x11,0xc(%ebp)
 810ad1d:	7f 0c                	jg     810ad2b <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi+0x15>
 810ad1f:	8b 45 08             	mov    0x8(%ebp),%eax
 810ad22:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 810ad26:	0f b6 c0             	movzbl %al,%eax
 810ad29:	eb 1c                	jmp    810ad47 <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi+0x31>
 810ad2b:	83 7d 0c 1a          	cmpl   $0x1a,0xc(%ebp)
 810ad2f:	7f 0c                	jg     810ad3d <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi+0x27>
 810ad31:	8b 45 08             	mov    0x8(%ebp),%eax
 810ad34:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 810ad38:	0f b6 c0             	movzbl %al,%eax
 810ad3b:	eb 0a                	jmp    810ad47 <_ZN16CCoinEventPerDay15GetCoinNoPerDayEi+0x31>
 810ad3d:	8b 45 08             	mov    0x8(%ebp),%eax
 810ad40:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 810ad44:	0f b6 c0             	movzbl %al,%eax
 810ad47:	5d                   	pop    %ebp
 810ad48:	c3                   	ret

```

```c
// CCoinEventPerDay::GetCoinNoPerDay @ 0x810ad16

/* CCoinEventPerDay::GetCoinNoPerDay(int) */

CCoinEventPerDay __thiscall CCoinEventPerDay::GetCoinNoPerDay(CCoinEventPerDay *this,int param_1)

{
  CCoinEventPerDay CVar1;
  
  if (param_1 < 0x12) {
    CVar1 = this[9];
  }
  else if (param_1 < 0x1b) {
    CVar1 = this[10];
  }
  else {
    CVar1 = this[0xb];
  }
  return CVar1;
}

```

---

## StartEvent

```asm
// === 0810ab96 CCoinEventPerDay::StartEvent  [0x0810ab96-0x810ac03] ===
 810ab96:	55                   	push   %ebp
 810ab97:	89 e5                	mov    %esp,%ebp
 810ab99:	83 ec 28             	sub    $0x28,%esp
 810ab9c:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab9f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810aba6:	00 
 810aba7:	89 04 24             	mov    %eax,(%esp)
 810abaa:	e8 33 d9 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810abaf:	8b 45 08             	mov    0x8(%ebp),%eax
 810abb2:	c6 40 09 01          	movb   $0x1,0x9(%eax)
 810abb6:	8b 45 08             	mov    0x8(%ebp),%eax
 810abb9:	c6 40 0a 01          	movb   $0x1,0xa(%eax)
 810abbd:	8b 45 08             	mov    0x8(%ebp),%eax
 810abc0:	c6 40 0b 01          	movb   $0x1,0xb(%eax)
 810abc4:	8b 45 08             	mov    0x8(%ebp),%eax
 810abc7:	c6 40 0c 01          	movb   $0x1,0xc(%eax)
 810abcb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810abd2:	00 
 810abd3:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 810abda:	00 
 810abdb:	c7 44 24 04 e4 b3 b4 	movl   $0x8b4b3e4,0x4(%esp)
 810abe2:	08 
 810abe3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810abe6:	89 04 24             	mov    %eax,(%esp)
 810abe9:	e8 2a 4b 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810abee:	c7 44 24 04 e0 ac b4 	movl   $0x8b4ace0,0x4(%esp)
 810abf5:	08 
 810abf6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810abf9:	89 04 24             	mov    %eax,(%esp)
 810abfc:	e8 87 4b 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810ac01:	c9                   	leave
 810ac02:	c3                   	ret
 810ac03:	90                   	nop

```

```c
// CCoinEventPerDay::StartEvent @ 0x810ab96

/* CCoinEventPerDay::StartEvent() */

void __thiscall CCoinEventPerDay::StartEvent(CCoinEventPerDay *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  this[9] = (CCoinEventPerDay)0x1;
  this[10] = (CCoinEventPerDay)0x1;
  this[0xb] = (CCoinEventPerDay)0x1;
  this[0xc] = (CCoinEventPerDay)0x1;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x38,0);
  cMyTrace::operator()(local_1c,"Coin Event Per Day Start!");
  return;
}

```

---

## StartEvent_0810ac04

```asm
// === 0810ac04 CCoinEventPerDay::StartEvent  [0x0810ac04-0x810aca7] ===
 810ac04:	55                   	push   %ebp
 810ac05:	89 e5                	mov    %esp,%ebp
 810ac07:	57                   	push   %edi
 810ac08:	56                   	push   %esi
 810ac09:	53                   	push   %ebx
 810ac0a:	83 ec 4c             	sub    $0x4c,%esp
 810ac0d:	8b 45 08             	mov    0x8(%ebp),%eax
 810ac10:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810ac17:	00 
 810ac18:	89 04 24             	mov    %eax,(%esp)
 810ac1b:	e8 c2 d8 fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810ac20:	8d 55 0c             	lea    0xc(%ebp),%edx
 810ac23:	8b 45 08             	mov    0x8(%ebp),%eax
 810ac26:	8b 12                	mov    (%edx),%edx
 810ac28:	89 50 09             	mov    %edx,0x9(%eax)
 810ac2b:	8b 45 08             	mov    0x8(%ebp),%eax
 810ac2e:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 810ac32:	0f b6 c0             	movzbl %al,%eax
 810ac35:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 810ac38:	8b 45 08             	mov    0x8(%ebp),%eax
 810ac3b:	0f b6 40 0b          	movzbl 0xb(%eax),%eax
 810ac3f:	0f b6 f8             	movzbl %al,%edi
 810ac42:	8b 45 08             	mov    0x8(%ebp),%eax
 810ac45:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 810ac49:	0f b6 f0             	movzbl %al,%esi
 810ac4c:	8b 45 08             	mov    0x8(%ebp),%eax
 810ac4f:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 810ac53:	0f b6 d8             	movzbl %al,%ebx
 810ac56:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810ac5d:	00 
 810ac5e:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 810ac65:	00 
 810ac66:	c7 44 24 04 d9 b3 b4 	movl   $0x8b4b3d9,0x4(%esp)
 810ac6d:	08 
 810ac6e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810ac71:	89 04 24             	mov    %eax,(%esp)
 810ac74:	e8 9f 4a 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810ac79:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 810ac7c:	89 44 24 14          	mov    %eax,0x14(%esp)
 810ac80:	89 7c 24 10          	mov    %edi,0x10(%esp)
 810ac84:	89 74 24 0c          	mov    %esi,0xc(%esp)
 810ac88:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810ac8c:	c7 44 24 04 fc ac b4 	movl   $0x8b4acfc,0x4(%esp)
 810ac93:	08 
 810ac94:	8d 45 d8             	lea    -0x28(%ebp),%eax
 810ac97:	89 04 24             	mov    %eax,(%esp)
 810ac9a:	e8 e9 4a 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810ac9f:	83 c4 4c             	add    $0x4c,%esp
 810aca2:	5b                   	pop    %ebx
 810aca3:	5e                   	pop    %esi
 810aca4:	5f                   	pop    %edi
 810aca5:	5d                   	pop    %ebp
 810aca6:	c3                   	ret
 810aca7:	90                   	nop

```

```c
// CCoinEventPerDay::StartEvent @ 0x810ac04

/* CCoinEventPerDay::StartEvent(Word_Param) */

void __thiscall CCoinEventPerDay::StartEvent(CCoinEventPerDay *this,undefined4 param_2)

{
  CCoinEventPerDay CVar1;
  CCoinEventPerDay CVar2;
  CCoinEventPerDay CVar3;
  CCoinEventPerDay CVar4;
  cMyTrace local_2c [28];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 9) = param_2;
  CVar1 = this[0xc];
  CVar2 = this[0xb];
  CVar3 = this[10];
  CVar4 = this[9];
  cMyTrace::cMyTrace(local_2c,"StartEvent",0x41,0);
  cMyTrace::operator()
            (local_2c,"Coin Event Per Day Start! coin(%d) coin(%d) coin(%d) coin(%d) ",
             (uint)(byte)CVar4,(uint)(byte)CVar3,(uint)(byte)CVar2,(uint)(byte)CVar1);
  return;
}

```

---

## ~CCoinEventPerDay

```asm
// === 0810ab48 CCoinEventPerDay::~CCoinEventPerDay  [0x0810ab48-0x810ab77] ===
 810ab48:	55                   	push   %ebp
 810ab49:	89 e5                	mov    %esp,%ebp
 810ab4b:	83 ec 18             	sub    $0x18,%esp
 810ab4e:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab51:	c7 00 08 b4 b4 08    	movl   $0x8b4b408,(%eax)
 810ab57:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab5a:	89 04 24             	mov    %eax,(%esp)
 810ab5d:	e8 f0 02 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810ab62:	b8 00 00 00 00       	mov    $0x0,%eax
 810ab67:	84 c0                	test   %al,%al
 810ab69:	74 0b                	je     810ab76 <_ZN16CCoinEventPerDayD1Ev+0x2e>
 810ab6b:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab6e:	89 04 24             	mov    %eax,(%esp)
 810ab71:	e8 7a 99 61 00       	call   87244f0 <_ZdlPv>
 810ab76:	c9                   	leave
 810ab77:	c3                   	ret

```

```c
// CCoinEventPerDay::~CCoinEventPerDay @ 0x810ab48

/* WARNING: Removing unreachable block (ram,0x0810ab6b) */
/* CCoinEventPerDay::~CCoinEventPerDay() */

void __thiscall CCoinEventPerDay::~CCoinEventPerDay(CCoinEventPerDay *this)

{
  *(undefined ***)this = &PTR__CCoinEventPerDay_08b4b408;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CCoinEventPerDay_0810ab78

```asm
// === 0810ab78 CCoinEventPerDay::~CCoinEventPerDay  [0x0810ab78-0x810ab95] ===
 810ab78:	55                   	push   %ebp
 810ab79:	89 e5                	mov    %esp,%ebp
 810ab7b:	83 ec 18             	sub    $0x18,%esp
 810ab7e:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab81:	89 04 24             	mov    %eax,(%esp)
 810ab84:	e8 bf ff ff ff       	call   810ab48 <_ZN16CCoinEventPerDayD1Ev>
 810ab89:	8b 45 08             	mov    0x8(%ebp),%eax
 810ab8c:	89 04 24             	mov    %eax,(%esp)
 810ab8f:	e8 5c 99 61 00       	call   87244f0 <_ZdlPv>
 810ab94:	c9                   	leave
 810ab95:	c3                   	ret

```

```c
// CCoinEventPerDay::~CCoinEventPerDay @ 0x810ab78

/* CCoinEventPerDay::~CCoinEventPerDay() */

void __thiscall CCoinEventPerDay::~CCoinEventPerDay(CCoinEventPerDay *this)

{
  ~CCoinEventPerDay(this);
  operator_delete(this);
  return;
}

```

