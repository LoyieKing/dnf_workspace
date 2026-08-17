# EventNewCharacterReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## EndEvent

```asm
// === 0816bc98 EventNewCharacterReward::EndEvent  [0x0816bc98-0x816bce9] ===
 816bc98:	55                   	push   %ebp
 816bc99:	89 e5                	mov    %esp,%ebp
 816bc9b:	83 ec 28             	sub    $0x28,%esp
 816bc9e:	8b 45 08             	mov    0x8(%ebp),%eax
 816bca1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816bca8:	00 
 816bca9:	89 04 24             	mov    %eax,(%esp)
 816bcac:	e8 31 c8 f5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 816bcb1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816bcb8:	00 
 816bcb9:	c7 44 24 08 2f 00 00 	movl   $0x2f,0x8(%esp)
 816bcc0:	00 
 816bcc1:	c7 44 24 04 60 ff b7 	movl   $0x8b7ff60,0x4(%esp)
 816bcc8:	08 
 816bcc9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bccc:	89 04 24             	mov    %eax,(%esp)
 816bccf:	e8 44 3a 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816bcd4:	c7 44 24 04 24 f3 b7 	movl   $0x8b7f324,0x4(%esp)
 816bcdb:	08 
 816bcdc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bcdf:	89 04 24             	mov    %eax,(%esp)
 816bce2:	e8 a1 3a 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816bce7:	c9                   	leave
 816bce8:	c3                   	ret
 816bce9:	90                   	nop

```

```c
// EventNewCharacterReward::EndEvent @ 0x816bc98

/* EventNewCharacterReward::EndEvent() */

void __thiscall EventNewCharacterReward::EndEvent(EventNewCharacterReward *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void EventNewCharacterReward::EndEvent()",0x2f,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventCharacterBonus] Event stop!");
  return;
}

```

---

## EventNewCharacterReward

```asm
// === 0816bac4 EventNewCharacterReward::EventNewCharacterReward  [0x0816bac4-0x816baf3] ===
 816bac4:	55                   	push   %ebp
 816bac5:	89 e5                	mov    %esp,%ebp
 816bac7:	83 ec 18             	sub    $0x18,%esp
 816baca:	8b 45 08             	mov    0x8(%ebp),%eax
 816bacd:	89 04 24             	mov    %eax,(%esp)
 816bad0:	e8 57 f3 f9 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 816bad5:	8b 45 08             	mov    0x8(%ebp),%eax
 816bad8:	c7 00 28 00 b8 08    	movl   $0x8b80028,(%eax)
 816bade:	8b 45 08             	mov    0x8(%ebp),%eax
 816bae1:	c7 40 0c ff ff ff ff 	movl   $0xffffffff,0xc(%eax)
 816bae8:	8b 45 08             	mov    0x8(%ebp),%eax
 816baeb:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 816baf2:	c9                   	leave
 816baf3:	c3                   	ret

```

```c
// EventNewCharacterReward::EventNewCharacterReward @ 0x816bac4

/* EventNewCharacterReward::EventNewCharacterReward() */

void __thiscall EventNewCharacterReward::EventNewCharacterReward(EventNewCharacterReward *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__EventNewCharacterReward_08b80028;
  *(undefined4 *)(this + 0xc) = 0xffffffff;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

```

---

## StartEvent

```asm
// === 0816bb42 EventNewCharacterReward::StartEvent  [0x0816bb42-0x816bb93] ===
 816bb42:	55                   	push   %ebp
 816bb43:	89 e5                	mov    %esp,%ebp
 816bb45:	83 ec 28             	sub    $0x28,%esp
 816bb48:	8b 45 08             	mov    0x8(%ebp),%eax
 816bb4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 816bb52:	00 
 816bb53:	89 04 24             	mov    %eax,(%esp)
 816bb56:	e8 87 c9 f5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 816bb5b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816bb62:	00 
 816bb63:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 816bb6a:	00 
 816bb6b:	c7 44 24 04 e0 ff b7 	movl   $0x8b7ffe0,0x4(%esp)
 816bb72:	08 
 816bb73:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bb76:	89 04 24             	mov    %eax,(%esp)
 816bb79:	e8 9a 3b 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816bb7e:	c7 44 24 04 60 f2 b7 	movl   $0x8b7f260,0x4(%esp)
 816bb85:	08 
 816bb86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bb89:	89 04 24             	mov    %eax,(%esp)
 816bb8c:	e8 f7 3b 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816bb91:	c9                   	leave
 816bb92:	c3                   	ret
 816bb93:	90                   	nop

```

```c
// EventNewCharacterReward::StartEvent @ 0x816bb42

/* EventNewCharacterReward::StartEvent() */

void __thiscall EventNewCharacterReward::StartEvent(EventNewCharacterReward *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void EventNewCharacterReward::StartEvent()",0x16,0);
  cMyTrace::operator()(local_1c,"[Taiwan, EventCharacterBonus] Event start!");
  return;
}

```

---

## StartEvent_0816bb94

```asm
// === 0816bb94 EventNewCharacterReward::StartEvent  [0x0816bb94-0x816bc97] ===
 816bb94:	55                   	push   %ebp
 816bb95:	89 e5                	mov    %esp,%ebp
 816bb97:	56                   	push   %esi
 816bb98:	53                   	push   %ebx
 816bb99:	83 ec 30             	sub    $0x30,%esp
 816bb9c:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 816bba0:	0f b7 d0             	movzwl %ax,%edx
 816bba3:	8b 45 08             	mov    0x8(%ebp),%eax
 816bba6:	89 50 0c             	mov    %edx,0xc(%eax)
 816bba9:	0f b7 45 0e          	movzwl 0xe(%ebp),%eax
 816bbad:	0f b7 d0             	movzwl %ax,%edx
 816bbb0:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbb3:	89 50 10             	mov    %edx,0x10(%eax)
 816bbb6:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbb9:	8b 40 0c             	mov    0xc(%eax),%eax
 816bbbc:	89 c2                	mov    %eax,%edx
 816bbbe:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbc1:	66 89 50 04          	mov    %dx,0x4(%eax)
 816bbc5:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbc8:	8b 40 10             	mov    0x10(%eax),%eax
 816bbcb:	89 c2                	mov    %eax,%edx
 816bbcd:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbd0:	66 89 50 06          	mov    %dx,0x6(%eax)
 816bbd4:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbd7:	8b 40 0c             	mov    0xc(%eax),%eax
 816bbda:	85 c0                	test   %eax,%eax
 816bbdc:	78 69                	js     816bc47 <_ZN23EventNewCharacterReward10StartEventE10Word_Param+0xb3>
 816bbde:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbe1:	8b 40 0c             	mov    0xc(%eax),%eax
 816bbe4:	83 f8 0a             	cmp    $0xa,%eax
 816bbe7:	7f 5e                	jg     816bc47 <_ZN23EventNewCharacterReward10StartEventE10Word_Param+0xb3>
 816bbe9:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbec:	8b 70 10             	mov    0x10(%eax),%esi
 816bbef:	8b 45 08             	mov    0x8(%ebp),%eax
 816bbf2:	8b 58 0c             	mov    0xc(%eax),%ebx
 816bbf5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816bbfc:	00 
 816bbfd:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 816bc04:	00 
 816bc05:	c7 44 24 04 a0 ff b7 	movl   $0x8b7ffa0,0x4(%esp)
 816bc0c:	08 
 816bc0d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 816bc10:	89 04 24             	mov    %eax,(%esp)
 816bc13:	e8 00 3b 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816bc18:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816bc1c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816bc20:	c7 44 24 04 8c f2 b7 	movl   $0x8b7f28c,0x4(%esp)
 816bc27:	08 
 816bc28:	8d 45 d8             	lea    -0x28(%ebp),%eax
 816bc2b:	89 04 24             	mov    %eax,(%esp)
 816bc2e:	e8 55 3b 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816bc33:	8b 45 08             	mov    0x8(%ebp),%eax
 816bc36:	8b 00                	mov    (%eax),%eax
 816bc38:	83 c0 08             	add    $0x8,%eax
 816bc3b:	8b 10                	mov    (%eax),%edx
 816bc3d:	8b 45 08             	mov    0x8(%ebp),%eax
 816bc40:	89 04 24             	mov    %eax,(%esp)
 816bc43:	ff d2                	call   *%edx
 816bc45:	eb 4a                	jmp    816bc91 <_ZN23EventNewCharacterReward10StartEventE10Word_Param+0xfd>
 816bc47:	8b 45 08             	mov    0x8(%ebp),%eax
 816bc4a:	8b 70 10             	mov    0x10(%eax),%esi
 816bc4d:	8b 45 08             	mov    0x8(%ebp),%eax
 816bc50:	8b 58 0c             	mov    0xc(%eax),%ebx
 816bc53:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 816bc5a:	00 
 816bc5b:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 816bc62:	00 
 816bc63:	c7 44 24 04 a0 ff b7 	movl   $0x8b7ffa0,0x4(%esp)
 816bc6a:	08 
 816bc6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bc6e:	89 04 24             	mov    %eax,(%esp)
 816bc71:	e8 a2 3a 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 816bc76:	89 74 24 0c          	mov    %esi,0xc(%esp)
 816bc7a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 816bc7e:	c7 44 24 04 d4 f2 b7 	movl   $0x8b7f2d4,0x4(%esp)
 816bc85:	08 
 816bc86:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816bc89:	89 04 24             	mov    %eax,(%esp)
 816bc8c:	e8 f7 3a 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816bc91:	83 c4 30             	add    $0x30,%esp
 816bc94:	5b                   	pop    %ebx
 816bc95:	5e                   	pop    %esi
 816bc96:	5d                   	pop    %ebp
 816bc97:	c3                   	ret

```

```c
// EventNewCharacterReward::StartEvent @ 0x816bb94

/* EventNewCharacterReward::StartEvent(Word_Param) */

void __thiscall EventNewCharacterReward::StartEvent(EventNewCharacterReward *this,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  cMyTrace local_2c [16];
  cMyTrace local_1c [16];
  
  *(uint *)(this + 0xc) = param_2 & 0xffff;
  *(uint *)(this + 0x10) = param_2 >> 0x10;
  *(short *)(this + 4) = (short)*(undefined4 *)(this + 0xc);
  *(short *)(this + 6) = (short)*(undefined4 *)(this + 0x10);
  if ((*(int *)(this + 0xc) < 0) || (10 < *(int *)(this + 0xc))) {
    uVar1 = *(undefined4 *)(this + 0x10);
    uVar2 = *(undefined4 *)(this + 0xc);
    cMyTrace::cMyTrace(local_1c,"virtual void EventNewCharacterReward::StartEvent(Word_Param)",0x27,
                       0);
    cMyTrace::operator()
              (local_1c,
               "[Taiwan, EventCharacterBonus] Invalid event parameters (job:%d, exp_ratio:%d)",uVar2
               ,uVar1);
  }
  else {
    uVar1 = *(undefined4 *)(this + 0x10);
    uVar2 = *(undefined4 *)(this + 0xc);
    cMyTrace::cMyTrace(local_2c,"virtual void EventNewCharacterReward::StartEvent(Word_Param)",0x22,
                       0);
    cMyTrace::operator()
              (local_2c,"[Taiwan, EventCharacterBonus] Event parameters (job:%d, exp_ratio:%d)",
               uVar2,uVar1);
    (**(code **)(*(int *)this + 8))(this);
  }
  return;
}

```

---

## eventCharacterJob

```asm
// === 0816bd22 EventNewCharacterReward::eventCharacterJob  [0x0816bd22-0x816bd2c] ===
 816bd22:	55                   	push   %ebp
 816bd23:	89 e5                	mov    %esp,%ebp
 816bd25:	8b 45 08             	mov    0x8(%ebp),%eax
 816bd28:	8b 40 0c             	mov    0xc(%eax),%eax
 816bd2b:	5d                   	pop    %ebp
 816bd2c:	c3                   	ret

```

```c
// EventNewCharacterReward::eventCharacterJob @ 0x816bd22

/* EventNewCharacterReward::eventCharacterJob() */

undefined4 __thiscall EventNewCharacterReward::eventCharacterJob(EventNewCharacterReward *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## eventExpRatio

```asm
// === 0816bd06 EventNewCharacterReward::eventExpRatio  [0x0816bd06-0x816bd21] ===
 816bd06:	55                   	push   %ebp
 816bd07:	89 e5                	mov    %esp,%ebp
 816bd09:	83 ec 04             	sub    $0x4,%esp
 816bd0c:	8b 45 08             	mov    0x8(%ebp),%eax
 816bd0f:	8b 40 10             	mov    0x10(%eax),%eax
 816bd12:	89 45 fc             	mov    %eax,-0x4(%ebp)
 816bd15:	db 45 fc             	fildl  -0x4(%ebp)
 816bd18:	d9 05 14 00 b8 08    	flds   0x8b80014
 816bd1e:	de f9                	fdivrp %st,%st(1)
 816bd20:	c9                   	leave
 816bd21:	c3                   	ret

```

```c
// EventNewCharacterReward::eventExpRatio @ 0x816bd06

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EventNewCharacterReward::eventExpRatio() */

longdouble __thiscall EventNewCharacterReward::eventExpRatio(EventNewCharacterReward *this)

{
  return (longdouble)*(int *)(this + 0x10) / (longdouble)_DAT_08b80014;
}

```

---

## isEventCharacter

```asm
// === 0816bcea EventNewCharacterReward::isEventCharacter  [0x0816bcea-0x816bd05] ===
 816bcea:	55                   	push   %ebp
 816bceb:	89 e5                	mov    %esp,%ebp
 816bced:	8b 45 08             	mov    0x8(%ebp),%eax
 816bcf0:	8b 40 0c             	mov    0xc(%eax),%eax
 816bcf3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 816bcf6:	75 07                	jne    816bcff <_ZN23EventNewCharacterReward16isEventCharacterEi+0x15>
 816bcf8:	b8 01 00 00 00       	mov    $0x1,%eax
 816bcfd:	eb 05                	jmp    816bd04 <_ZN23EventNewCharacterReward16isEventCharacterEi+0x1a>
 816bcff:	b8 00 00 00 00       	mov    $0x0,%eax
 816bd04:	5d                   	pop    %ebp
 816bd05:	c3                   	ret

```

```c
// EventNewCharacterReward::isEventCharacter @ 0x816bcea

/* EventNewCharacterReward::isEventCharacter(int) */

bool __thiscall EventNewCharacterReward::isEventCharacter(EventNewCharacterReward *this,int param_1)

{
  return *(int *)(this + 0xc) == param_1;
}

```

---

## ~EventNewCharacterReward

```asm
// === 0816baf4 EventNewCharacterReward::~EventNewCharacterReward  [0x0816baf4-0x816bb23] ===
 816baf4:	55                   	push   %ebp
 816baf5:	89 e5                	mov    %esp,%ebp
 816baf7:	83 ec 18             	sub    $0x18,%esp
 816bafa:	8b 45 08             	mov    0x8(%ebp),%eax
 816bafd:	c7 00 28 00 b8 08    	movl   $0x8b80028,(%eax)
 816bb03:	8b 45 08             	mov    0x8(%ebp),%eax
 816bb06:	89 04 24             	mov    %eax,(%esp)
 816bb09:	e8 44 f3 f9 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 816bb0e:	b8 00 00 00 00       	mov    $0x0,%eax
 816bb13:	84 c0                	test   %al,%al
 816bb15:	74 0b                	je     816bb22 <_ZN23EventNewCharacterRewardD1Ev+0x2e>
 816bb17:	8b 45 08             	mov    0x8(%ebp),%eax
 816bb1a:	89 04 24             	mov    %eax,(%esp)
 816bb1d:	e8 ce 89 5b 00       	call   87244f0 <_ZdlPv>
 816bb22:	c9                   	leave
 816bb23:	c3                   	ret

```

```c
// EventNewCharacterReward::~EventNewCharacterReward @ 0x816baf4

/* WARNING: Removing unreachable block (ram,0x0816bb17) */
/* EventNewCharacterReward::~EventNewCharacterReward() */

void __thiscall EventNewCharacterReward::~EventNewCharacterReward(EventNewCharacterReward *this)

{
  *(undefined ***)this = &PTR__EventNewCharacterReward_08b80028;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~EventNewCharacterReward_0816bb24

```asm
// === 0816bb24 EventNewCharacterReward::~EventNewCharacterReward  [0x0816bb24-0x816bb41] ===
 816bb24:	55                   	push   %ebp
 816bb25:	89 e5                	mov    %esp,%ebp
 816bb27:	83 ec 18             	sub    $0x18,%esp
 816bb2a:	8b 45 08             	mov    0x8(%ebp),%eax
 816bb2d:	89 04 24             	mov    %eax,(%esp)
 816bb30:	e8 bf ff ff ff       	call   816baf4 <_ZN23EventNewCharacterRewardD1Ev>
 816bb35:	8b 45 08             	mov    0x8(%ebp),%eax
 816bb38:	89 04 24             	mov    %eax,(%esp)
 816bb3b:	e8 b0 89 5b 00       	call   87244f0 <_ZdlPv>
 816bb40:	c9                   	leave
 816bb41:	c3                   	ret

```

```c
// EventNewCharacterReward::~EventNewCharacterReward @ 0x816bb24

/* EventNewCharacterReward::~EventNewCharacterReward() */

void __thiscall EventNewCharacterReward::~EventNewCharacterReward(EventNewCharacterReward *this)

{
  ~EventNewCharacterReward(this);
  operator_delete(this);
  return;
}

```

