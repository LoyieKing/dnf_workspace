# CCoinRefillEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CCoinRefillEvent

```asm
// === 0832bdf4 CCoinRefillEvent::CCoinRefillEvent  [0x0832bdf4-0x832be2d] ===
 832bdf4:	55                   	push   %ebp
 832bdf5:	89 e5                	mov    %esp,%ebp
 832bdf7:	83 ec 18             	sub    $0x18,%esp
 832bdfa:	8b 45 08             	mov    0x8(%ebp),%eax
 832bdfd:	89 04 24             	mov    %eax,(%esp)
 832be00:	e8 27 f0 dd ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 832be05:	8b 45 08             	mov    0x8(%ebp),%eax
 832be08:	c7 00 a8 ab c2 08    	movl   $0x8c2aba8,(%eax)
 832be0e:	8b 45 08             	mov    0x8(%ebp),%eax
 832be11:	83 c0 0c             	add    $0xc,%eax
 832be14:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 832be1b:	00 
 832be1c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 832be23:	ff 
 832be24:	89 04 24             	mov    %eax,(%esp)
 832be27:	e8 94 1e d5 ff       	call   807dcc0 <memset@plt>
 832be2c:	c9                   	leave
 832be2d:	c3                   	ret

```

```c
// CCoinRefillEvent::CCoinRefillEvent @ 0x832bdf4

/* CCoinRefillEvent::CCoinRefillEvent() */

void __thiscall CCoinRefillEvent::CCoinRefillEvent(CCoinRefillEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCoinRefillEvent_08c2aba8;
  memset(this + 0xc,-1,0x14);
  return;
}

```

---

## EndEvent

```asm
// === 0832c048 CCoinRefillEvent::EndEvent  [0x0832c048-0x832c0b7] ===
 832c048:	55                   	push   %ebp
 832c049:	89 e5                	mov    %esp,%ebp
 832c04b:	83 ec 28             	sub    $0x28,%esp
 832c04e:	8b 45 08             	mov    0x8(%ebp),%eax
 832c051:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 832c058:	00 
 832c059:	89 04 24             	mov    %eax,(%esp)
 832c05c:	e8 81 c4 d9 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 832c061:	8b 45 08             	mov    0x8(%ebp),%eax
 832c064:	83 c0 0c             	add    $0xc,%eax
 832c067:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 832c06e:	00 
 832c06f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 832c076:	ff 
 832c077:	89 04 24             	mov    %eax,(%esp)
 832c07a:	e8 41 1c d5 ff       	call   807dcc0 <memset@plt>
 832c07f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832c086:	00 
 832c087:	c7 44 24 08 4f 00 00 	movl   $0x4f,0x8(%esp)
 832c08e:	00 
 832c08f:	c7 44 24 04 20 ab c2 	movl   $0x8c2ab20,0x4(%esp)
 832c096:	08 
 832c097:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832c09a:	89 04 24             	mov    %eax,(%esp)
 832c09d:	e8 76 36 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 832c0a2:	c7 44 24 04 98 9e c2 	movl   $0x8c29e98,0x4(%esp)
 832c0a9:	08 
 832c0aa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832c0ad:	89 04 24             	mov    %eax,(%esp)
 832c0b0:	e8 d3 36 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 832c0b5:	c9                   	leave
 832c0b6:	c3                   	ret
 832c0b7:	90                   	nop

```

```c
// CCoinRefillEvent::EndEvent @ 0x832c048

/* CCoinRefillEvent::EndEvent() */

void __thiscall CCoinRefillEvent::EndEvent(CCoinRefillEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  memset(this + 0xc,-1,0x14);
  cMyTrace::cMyTrace(local_1c,"virtual void CCoinRefillEvent::EndEvent()",0x4f,0);
  cMyTrace::operator()(local_1c,"Coin Refill Event End");
  return;
}

```

---

## StartEvent

```asm
// === 0832be7c CCoinRefillEvent::StartEvent  [0x0832be7c-0x832be81] ===
 832be7c:	55                   	push   %ebp
 832be7d:	89 e5                	mov    %esp,%ebp
 832be7f:	5d                   	pop    %ebp
 832be80:	c3                   	ret
 832be81:	90                   	nop

```

```c
// CCoinRefillEvent::StartEvent @ 0x832be7c

/* CCoinRefillEvent::StartEvent() */

void CCoinRefillEvent::StartEvent(void)

{
  return;
}

```

---

## StartEvent_0832be82

```asm
// === 0832be82 CCoinRefillEvent::StartEvent  [0x0832be82-0x832c047] ===
 832be82:	55                   	push   %ebp
 832be83:	89 e5                	mov    %esp,%ebp
 832be85:	57                   	push   %edi
 832be86:	56                   	push   %esi
 832be87:	53                   	push   %ebx
 832be88:	83 ec 4c             	sub    $0x4c,%esp
 832be8b:	8b 45 08             	mov    0x8(%ebp),%eax
 832be8e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 832be95:	00 
 832be96:	89 04 24             	mov    %eax,(%esp)
 832be99:	e8 44 c6 d9 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 832be9e:	8b 45 08             	mov    0x8(%ebp),%eax
 832bea1:	83 c0 0c             	add    $0xc,%eax
 832bea4:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 832beab:	00 
 832beac:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 832beb3:	ff 
 832beb4:	89 04 24             	mov    %eax,(%esp)
 832beb7:	e8 04 1e d5 ff       	call   807dcc0 <memset@plt>
 832bebc:	e8 c0 02 da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 832bec1:	8b 90 7c 03 00 00    	mov    0x37c(%eax),%edx
 832bec7:	8b 45 08             	mov    0x8(%ebp),%eax
 832beca:	89 50 10             	mov    %edx,0x10(%eax)
 832becd:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 832bed1:	0f b7 d0             	movzwl %ax,%edx
 832bed4:	8b 45 08             	mov    0x8(%ebp),%eax
 832bed7:	89 50 14             	mov    %edx,0x14(%eax)
 832beda:	0f b7 45 0e          	movzwl 0xe(%ebp),%eax
 832bede:	0f b7 d0             	movzwl %ax,%edx
 832bee1:	8b 45 08             	mov    0x8(%ebp),%eax
 832bee4:	89 50 18             	mov    %edx,0x18(%eax)
 832bee7:	8b 45 08             	mov    0x8(%ebp),%eax
 832beea:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 832bef1:	eb 4d                	jmp    832bf40 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0xbe>
 832bef3:	8b 45 08             	mov    0x8(%ebp),%eax
 832bef6:	8b 40 0c             	mov    0xc(%eax),%eax
 832bef9:	8d 50 01             	lea    0x1(%eax),%edx
 832befc:	8b 45 08             	mov    0x8(%ebp),%eax
 832beff:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832bf03:	83 f8 17             	cmp    $0x17,%eax
 832bf06:	7e 14                	jle    832bf1c <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0x9a>
 832bf08:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf0b:	8b 40 0c             	mov    0xc(%eax),%eax
 832bf0e:	8d 50 01             	lea    0x1(%eax),%edx
 832bf11:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf14:	c7 44 90 0c ff ff ff 	movl   $0xffffffff,0xc(%eax,%edx,4)
 832bf1b:	ff 
 832bf1c:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf1f:	8b 40 0c             	mov    0xc(%eax),%eax
 832bf22:	8d 50 01             	lea    0x1(%eax),%edx
 832bf25:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf28:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832bf2c:	83 f8 ff             	cmp    $0xffffffff,%eax
 832bf2f:	74 21                	je     832bf52 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0xd0>
 832bf31:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf34:	8b 40 0c             	mov    0xc(%eax),%eax
 832bf37:	8d 50 01             	lea    0x1(%eax),%edx
 832bf3a:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf3d:	89 50 0c             	mov    %edx,0xc(%eax)
 832bf40:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf43:	8b 40 0c             	mov    0xc(%eax),%eax
 832bf46:	83 f8 03             	cmp    $0x3,%eax
 832bf49:	0f 96 c0             	setbe  %al
 832bf4c:	84 c0                	test   %al,%al
 832bf4e:	75 a3                	jne    832bef3 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0x71>
 832bf50:	eb 01                	jmp    832bf53 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0xd1>
 832bf52:	90                   	nop
 832bf53:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 832bf5a:	eb 71                	jmp    832bfcd <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0x14b>
 832bf5c:	c7 45 dc 19 00 00 00 	movl   $0x19,-0x24(%ebp)
 832bf63:	c7 45 e0 05 00 00 00 	movl   $0x5,-0x20(%ebp)
 832bf6a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832bf6d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 832bf70:	eb 26                	jmp    832bf98 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0x116>
 832bf72:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 832bf75:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf78:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832bf7c:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 832bf7f:	7d 13                	jge    832bf94 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0x112>
 832bf81:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 832bf84:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf87:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832bf8b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 832bf8e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832bf91:	89 45 e0             	mov    %eax,-0x20(%ebp)
 832bf94:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 832bf98:	8b 45 08             	mov    0x8(%ebp),%eax
 832bf9b:	8b 40 0c             	mov    0xc(%eax),%eax
 832bf9e:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 832bfa1:	0f 9d c0             	setge  %al
 832bfa4:	84 c0                	test   %al,%al
 832bfa6:	75 ca                	jne    832bf72 <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0xf0>
 832bfa8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832bfab:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 832bfae:	8b 45 08             	mov    0x8(%ebp),%eax
 832bfb1:	8b 4c 88 0c          	mov    0xc(%eax,%ecx,4),%ecx
 832bfb5:	8b 45 08             	mov    0x8(%ebp),%eax
 832bfb8:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 832bfbc:	8b 55 d8             	mov    -0x28(%ebp),%edx
 832bfbf:	8b 45 08             	mov    0x8(%ebp),%eax
 832bfc2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 832bfc5:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 832bfc9:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 832bfcd:	8b 45 08             	mov    0x8(%ebp),%eax
 832bfd0:	8b 40 0c             	mov    0xc(%eax),%eax
 832bfd3:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 832bfd6:	0f 9d c0             	setge  %al
 832bfd9:	84 c0                	test   %al,%al
 832bfdb:	0f 85 7b ff ff ff    	jne    832bf5c <_ZN16CCoinRefillEvent10StartEventE10Word_Param+0xda>
 832bfe1:	8b 45 08             	mov    0x8(%ebp),%eax
 832bfe4:	89 04 24             	mov    %eax,(%esp)
 832bfe7:	e8 12 02 00 00       	call   832c1fe <_ZNK16CCoinRefillEvent21registNextRefillTimerEv>
 832bfec:	8b 45 08             	mov    0x8(%ebp),%eax
 832bfef:	8b 78 18             	mov    0x18(%eax),%edi
 832bff2:	8b 45 08             	mov    0x8(%ebp),%eax
 832bff5:	8b 70 14             	mov    0x14(%eax),%esi
 832bff8:	8b 45 08             	mov    0x8(%ebp),%eax
 832bffb:	8b 58 10             	mov    0x10(%eax),%ebx
 832bffe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832c005:	00 
 832c006:	c7 44 24 08 48 00 00 	movl   $0x48,0x8(%esp)
 832c00d:	00 
 832c00e:	c7 44 24 04 60 ab c2 	movl   $0x8c2ab60,0x4(%esp)
 832c015:	08 
 832c016:	8d 45 c8             	lea    -0x38(%ebp),%eax
 832c019:	89 04 24             	mov    %eax,(%esp)
 832c01c:	e8 f7 36 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 832c021:	89 7c 24 10          	mov    %edi,0x10(%esp)
 832c025:	89 74 24 0c          	mov    %esi,0xc(%esp)
 832c029:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832c02d:	c7 44 24 04 64 9e c2 	movl   $0x8c29e64,0x4(%esp)
 832c034:	08 
 832c035:	8d 45 c8             	lea    -0x38(%ebp),%eax
 832c038:	89 04 24             	mov    %eax,(%esp)
 832c03b:	e8 48 37 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 832c040:	83 c4 4c             	add    $0x4c,%esp
 832c043:	5b                   	pop    %ebx
 832c044:	5e                   	pop    %esi
 832c045:	5f                   	pop    %edi
 832c046:	5d                   	pop    %ebp
 832c047:	c3                   	ret

```

```c
// CCoinRefillEvent::StartEvent @ 0x832be82

/* CCoinRefillEvent::StartEvent(Word_Param) */

void __thiscall CCoinRefillEvent::StartEvent(CCoinRefillEvent *this,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_3c [16];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  memset(this + 0xc,-1,0x14);
  iVar4 = G_CEnvironment();
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar4 + 0x37c);
  *(uint *)(this + 0x14) = param_2 & 0xffff;
  *(uint *)(this + 0x18) = param_2 >> 0x10;
  *(undefined4 *)(this + 0xc) = 0;
  while (*(uint *)(this + 0xc) < 4) {
    if (0x17 < *(int *)(this + (*(int *)(this + 0xc) + 1) * 4 + 0xc)) {
      *(undefined4 *)(this + (*(int *)(this + 0xc) + 1) * 4 + 0xc) = 0xffffffff;
    }
    if (*(int *)(this + (*(int *)(this + 0xc) + 1) * 4 + 0xc) == -1) break;
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  for (local_2c = 1; local_2c <= *(int *)(this + 0xc); local_2c = local_2c + 1) {
    local_28 = 0x19;
    local_24 = 5;
    for (local_20 = local_2c; local_20 <= *(int *)(this + 0xc); local_20 = local_20 + 1) {
      if (*(int *)(this + local_20 * 4 + 0xc) < local_28) {
        local_28 = *(int *)(this + local_20 * 4 + 0xc);
        local_24 = local_20;
      }
    }
    *(undefined4 *)(this + local_24 * 4 + 0xc) = *(undefined4 *)(this + local_2c * 4 + 0xc);
    *(int *)(this + local_2c * 4 + 0xc) = local_28;
  }
  registNextRefillTimer(this);
  uVar1 = *(undefined4 *)(this + 0x18);
  uVar2 = *(undefined4 *)(this + 0x14);
  uVar3 = *(undefined4 *)(this + 0x10);
  cMyTrace::cMyTrace(local_3c,"virtual void CCoinRefillEvent::StartEvent(Word_Param)",0x48,0);
  cMyTrace::operator()
            (local_3c,"Coin Refill Event Start! time(%d) time(%d) time(%d)",uVar3,uVar2,uVar1);
  return;
}

```

---

## getLastEventTime

```asm
// === 0832c0b8 CCoinRefillEvent::getLastEventTime  [0x0832c0b8-0x832c147] ===
 832c0b8:	55                   	push   %ebp
 832c0b9:	89 e5                	mov    %esp,%ebp
 832c0bb:	83 ec 58             	sub    $0x58,%esp
 832c0be:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 832c0c5:	e8 d4 fb d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 832c0ca:	89 45 f0             	mov    %eax,-0x10(%ebp)
 832c0cd:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 832c0d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c0d4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 832c0d7:	89 04 24             	mov    %eax,(%esp)
 832c0da:	e8 81 22 d5 ff       	call   807e360 <localtime_r@plt>
 832c0df:	8b 55 cc             	mov    -0x34(%ebp),%edx
 832c0e2:	8b 45 08             	mov    0x8(%ebp),%eax
 832c0e5:	8b 40 10             	mov    0x10(%eax),%eax
 832c0e8:	39 c2                	cmp    %eax,%edx
 832c0ea:	7d 0f                	jge    832c0fb <_ZNK16CCoinRefillEvent16getLastEventTimeEv+0x43>
 832c0ec:	8b 45 08             	mov    0x8(%ebp),%eax
 832c0ef:	8b 50 0c             	mov    0xc(%eax),%edx
 832c0f2:	8b 45 08             	mov    0x8(%ebp),%eax
 832c0f5:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c0f9:	eb 4a                	jmp    832c145 <_ZNK16CCoinRefillEvent16getLastEventTimeEv+0x8d>
 832c0fb:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 832c102:	eb 24                	jmp    832c128 <_ZNK16CCoinRefillEvent16getLastEventTimeEv+0x70>
 832c104:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 832c107:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832c10a:	8b 45 08             	mov    0x8(%ebp),%eax
 832c10d:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c111:	39 c1                	cmp    %eax,%ecx
 832c113:	7d 0f                	jge    832c124 <_ZNK16CCoinRefillEvent16getLastEventTimeEv+0x6c>
 832c115:	8b 45 f4             	mov    -0xc(%ebp),%eax
 832c118:	8d 50 ff             	lea    -0x1(%eax),%edx
 832c11b:	8b 45 08             	mov    0x8(%ebp),%eax
 832c11e:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c122:	eb 21                	jmp    832c145 <_ZNK16CCoinRefillEvent16getLastEventTimeEv+0x8d>
 832c124:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832c128:	8b 45 08             	mov    0x8(%ebp),%eax
 832c12b:	8b 40 0c             	mov    0xc(%eax),%eax
 832c12e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 832c131:	0f 9d c0             	setge  %al
 832c134:	84 c0                	test   %al,%al
 832c136:	75 cc                	jne    832c104 <_ZNK16CCoinRefillEvent16getLastEventTimeEv+0x4c>
 832c138:	8b 45 08             	mov    0x8(%ebp),%eax
 832c13b:	8b 50 0c             	mov    0xc(%eax),%edx
 832c13e:	8b 45 08             	mov    0x8(%ebp),%eax
 832c141:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c145:	c9                   	leave
 832c146:	c3                   	ret
 832c147:	90                   	nop

```

```c
// CCoinRefillEvent::getLastEventTime @ 0x832c0b8

/* CCoinRefillEvent::getLastEventTime() const */

undefined4 __thiscall CCoinRefillEvent::getLastEventTime(CCoinRefillEvent *this)

{
  undefined4 uVar1;
  tm local_40;
  time_t local_14;
  int local_10;
  
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_14,&local_40);
  if (local_40.tm_hour < *(int *)(this + 0x10)) {
    uVar1 = *(undefined4 *)(this + *(int *)(this + 0xc) * 4 + 0xc);
  }
  else {
    for (local_10 = 2; local_10 <= *(int *)(this + 0xc); local_10 = local_10 + 1) {
      if (local_40.tm_hour < *(int *)(this + local_10 * 4 + 0xc)) {
        return *(undefined4 *)(this + (local_10 + -1) * 4 + 0xc);
      }
    }
    uVar1 = *(undefined4 *)(this + *(int *)(this + 0xc) * 4 + 0xc);
  }
  return uVar1;
}

```

---

## getNextEventTime

```asm
// === 0832c148 CCoinRefillEvent::getNextEventTime  [0x0832c148-0x832c1fd] ===
 832c148:	55                   	push   %ebp
 832c149:	89 e5                	mov    %esp,%ebp
 832c14b:	53                   	push   %ebx
 832c14c:	83 ec 14             	sub    $0x14,%esp
 832c14f:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 832c156:	eb 43                	jmp    832c19b <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x53>
 832c158:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832c15b:	8b 45 08             	mov    0x8(%ebp),%eax
 832c15e:	8b 5c 90 0c          	mov    0xc(%eax,%edx,4),%ebx
 832c162:	e8 1a 00 da ff       	call   80cc181 <_Z14G_CEnvironmentv>
 832c167:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 832c16d:	39 c3                	cmp    %eax,%ebx
 832c16f:	0f 94 c0             	sete   %al
 832c172:	84 c0                	test   %al,%al
 832c174:	75 20                	jne    832c196 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x4e>
 832c176:	8b 45 0c             	mov    0xc(%ebp),%eax
 832c179:	8b 48 08             	mov    0x8(%eax),%ecx
 832c17c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832c17f:	8b 45 08             	mov    0x8(%ebp),%eax
 832c182:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c186:	39 c1                	cmp    %eax,%ecx
 832c188:	7d 0d                	jge    832c197 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x4f>
 832c18a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 832c18d:	8b 45 08             	mov    0x8(%ebp),%eax
 832c190:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c194:	eb 62                	jmp    832c1f8 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0xb0>
 832c196:	90                   	nop
 832c197:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 832c19b:	8b 45 08             	mov    0x8(%ebp),%eax
 832c19e:	8b 40 0c             	mov    0xc(%eax),%eax
 832c1a1:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 832c1a4:	0f 9d c0             	setge  %al
 832c1a7:	84 c0                	test   %al,%al
 832c1a9:	75 ad                	jne    832c158 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x10>
 832c1ab:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 832c1b2:	eb 2e                	jmp    832c1e2 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x9a>
 832c1b4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832c1b7:	8b 45 08             	mov    0x8(%ebp),%eax
 832c1ba:	8b 5c 90 0c          	mov    0xc(%eax,%edx,4),%ebx
 832c1be:	e8 be ff d9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 832c1c3:	8b 80 7c 03 00 00    	mov    0x37c(%eax),%eax
 832c1c9:	39 c3                	cmp    %eax,%ebx
 832c1cb:	0f 95 c0             	setne  %al
 832c1ce:	84 c0                	test   %al,%al
 832c1d0:	74 0c                	je     832c1de <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x96>
 832c1d2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 832c1d5:	8b 45 08             	mov    0x8(%ebp),%eax
 832c1d8:	8b 44 90 0c          	mov    0xc(%eax,%edx,4),%eax
 832c1dc:	eb 1a                	jmp    832c1f8 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0xb0>
 832c1de:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 832c1e2:	8b 45 08             	mov    0x8(%ebp),%eax
 832c1e5:	8b 40 0c             	mov    0xc(%eax),%eax
 832c1e8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 832c1eb:	0f 9d c0             	setge  %al
 832c1ee:	84 c0                	test   %al,%al
 832c1f0:	75 c2                	jne    832c1b4 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm+0x6c>
 832c1f2:	8b 45 08             	mov    0x8(%ebp),%eax
 832c1f5:	8b 40 10             	mov    0x10(%eax),%eax
 832c1f8:	83 c4 14             	add    $0x14,%esp
 832c1fb:	5b                   	pop    %ebx
 832c1fc:	5d                   	pop    %ebp
 832c1fd:	c3                   	ret

```

```c
// CCoinRefillEvent::getNextEventTime @ 0x832c148

/* CCoinRefillEvent::getNextEventTime(tm const&) const */

undefined4 __thiscall CCoinRefillEvent::getNextEventTime(CCoinRefillEvent *this,tm *param_1)

{
  int iVar1;
  int iVar2;
  int local_14;
  int local_10;
  
  local_14 = 1;
  while( true ) {
    if (*(int *)(this + 0xc) < local_14) {
      local_10 = 1;
      while( true ) {
        if (*(int *)(this + 0xc) < local_10) {
          return *(undefined4 *)(this + 0x10);
        }
        iVar1 = *(int *)(this + local_10 * 4 + 0xc);
        iVar2 = G_CEnvironment();
        if (iVar1 != *(int *)(iVar2 + 0x37c)) break;
        local_10 = local_10 + 1;
      }
      return *(undefined4 *)(this + local_10 * 4 + 0xc);
    }
    iVar1 = *(int *)(this + local_14 * 4 + 0xc);
    iVar2 = G_CEnvironment();
    if ((iVar1 != *(int *)(iVar2 + 0x37c)) &&
       (param_1->tm_hour < *(int *)(this + local_14 * 4 + 0xc))) break;
    local_14 = local_14 + 1;
  }
  return *(undefined4 *)(this + local_14 * 4 + 0xc);
}

```

---

## registNextRefillTimer

```asm
// === 0832c1fe CCoinRefillEvent::registNextRefillTimer  [0x0832c1fe-0x832c358] ===
 832c1fe:	55                   	push   %ebp
 832c1ff:	89 e5                	mov    %esp,%ebp
 832c201:	53                   	push   %ebx
 832c202:	81 ec 94 00 00 00    	sub    $0x94,%esp
 832c208:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 832c20f:	e8 8a fa d9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 832c214:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 832c217:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832c21a:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c21e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 832c221:	89 04 24             	mov    %eax,(%esp)
 832c224:	e8 37 21 d5 ff       	call   807e360 <localtime_r@plt>
 832c229:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 832c22c:	89 45 88             	mov    %eax,-0x78(%ebp)
 832c22f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 832c232:	89 45 8c             	mov    %eax,-0x74(%ebp)
 832c235:	8b 45 bc             	mov    -0x44(%ebp),%eax
 832c238:	89 45 90             	mov    %eax,-0x70(%ebp)
 832c23b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 832c23e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 832c241:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 832c244:	89 45 98             	mov    %eax,-0x68(%ebp)
 832c247:	8b 45 c8             	mov    -0x38(%ebp),%eax
 832c24a:	89 45 9c             	mov    %eax,-0x64(%ebp)
 832c24d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 832c250:	89 45 a0             	mov    %eax,-0x60(%ebp)
 832c253:	8b 45 d0             	mov    -0x30(%ebp),%eax
 832c256:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 832c259:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 832c25c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 832c25f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 832c262:	89 45 ac             	mov    %eax,-0x54(%ebp)
 832c265:	8b 45 dc             	mov    -0x24(%ebp),%eax
 832c268:	89 45 b0             	mov    %eax,-0x50(%ebp)
 832c26b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 832c26e:	89 44 24 04          	mov    %eax,0x4(%esp)
 832c272:	8b 45 08             	mov    0x8(%ebp),%eax
 832c275:	89 04 24             	mov    %eax,(%esp)
 832c278:	e8 cb fe ff ff       	call   832c148 <_ZNK16CCoinRefillEvent16getNextEventTimeERK2tm>
 832c27d:	89 45 90             	mov    %eax,-0x70(%ebp)
 832c280:	8b 55 90             	mov    -0x70(%ebp),%edx
 832c283:	8b 45 bc             	mov    -0x44(%ebp),%eax
 832c286:	39 c2                	cmp    %eax,%edx
 832c288:	7d 09                	jge    832c293 <_ZNK16CCoinRefillEvent21registNextRefillTimerEv+0x95>
 832c28a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 832c28d:	83 c0 01             	add    $0x1,%eax
 832c290:	89 45 94             	mov    %eax,-0x6c(%ebp)
 832c293:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 832c29a:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 832c2a1:	8d 45 88             	lea    -0x78(%ebp),%eax
 832c2a4:	89 04 24             	mov    %eax,(%esp)
 832c2a7:	e8 74 25 d5 ff       	call   807e820 <mktime@plt>
 832c2ac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 832c2af:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832c2b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832c2b5:	89 d1                	mov    %edx,%ecx
 832c2b7:	29 c1                	sub    %eax,%ecx
 832c2b9:	89 c8                	mov    %ecx,%eax
 832c2bb:	85 c0                	test   %eax,%eax
 832c2bd:	0f 88 8c 00 00 00    	js     832c34f <_ZNK16CCoinRefillEvent21registNextRefillTimerEv+0x151>
 832c2c3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 832c2c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 832c2c9:	89 d3                	mov    %edx,%ebx
 832c2cb:	29 c3                	sub    %eax,%ebx
 832c2cd:	e8 aa a1 dc ff       	call   80f647c <_Z12G_TimerQueuev>
 832c2d2:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 832c2d9:	00 
 832c2da:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 832c2e1:	00 
 832c2e2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 832c2e6:	c7 44 24 0c 65 00 00 	movl   $0x65,0xc(%esp)
 832c2ed:	00 
 832c2ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 832c2f5:	00 
 832c2f6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 832c2fd:	00 
 832c2fe:	89 04 24             	mov    %eax,(%esp)
 832c301:	e8 10 4b 30 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 832c306:	8d 45 e0             	lea    -0x20(%ebp),%eax
 832c309:	89 04 24             	mov    %eax,(%esp)
 832c30c:	e8 5f 23 d5 ff       	call   807e670 <ctime@plt>
 832c311:	89 c3                	mov    %eax,%ebx
 832c313:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 832c31a:	00 
 832c31b:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 832c322:	00 
 832c323:	c7 44 24 04 e0 aa c2 	movl   $0x8c2aae0,0x4(%esp)
 832c32a:	08 
 832c32b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832c32e:	89 04 24             	mov    %eax,(%esp)
 832c331:	e8 e2 33 22 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 832c336:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 832c33a:	c7 44 24 04 ae 9e c2 	movl   $0x8c29eae,0x4(%esp)
 832c341:	08 
 832c342:	8d 45 e8             	lea    -0x18(%ebp),%eax
 832c345:	89 04 24             	mov    %eax,(%esp)
 832c348:	e8 3b 34 22 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 832c34d:	eb 01                	jmp    832c350 <_ZNK16CCoinRefillEvent21registNextRefillTimerEv+0x152>
 832c34f:	90                   	nop
 832c350:	81 c4 94 00 00 00    	add    $0x94,%esp
 832c356:	5b                   	pop    %ebx
 832c357:	5d                   	pop    %ebp
 832c358:	c3                   	ret

```

```c
// CCoinRefillEvent::registNextRefillTimer @ 0x832c1fe

/* CCoinRefillEvent::registNextRefillTimer() const */

void __thiscall CCoinRefillEvent::registNextRefillTimer(CCoinRefillEvent *this)

{
  TimerQueue *pTVar1;
  char *pcVar2;
  int iVar3;
  tm local_7c;
  tm local_50;
  time_t local_24;
  int local_20;
  cMyTrace local_1c [20];
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_20,&local_50);
  local_7c.tm_sec = local_50.tm_sec;
  local_7c.tm_min = local_50.tm_min;
  local_7c.tm_hour = local_50.tm_hour;
  local_7c.tm_mday = local_50.tm_mday;
  local_7c.tm_mon = local_50.tm_mon;
  local_7c.tm_year = local_50.tm_year;
  local_7c.tm_wday = local_50.tm_wday;
  local_7c.tm_yday = local_50.tm_yday;
  local_7c.tm_isdst = local_50.tm_isdst;
  local_7c.tm_gmtoff = local_50.tm_gmtoff;
  local_7c.tm_zone = local_50.tm_zone;
  local_7c.tm_hour = getNextEventTime(this,&local_50);
  if (local_7c.tm_hour < local_50.tm_hour) {
    local_7c.tm_mday = local_7c.tm_mday + 1;
  }
  local_7c.tm_min = 0;
  local_7c.tm_sec = 0;
  local_24 = mktime(&local_7c);
  if (-1 < local_24 - local_20) {
    iVar3 = local_24 - local_20;
    pTVar1 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar1,2,0,0x65,iVar3,0,0);
    pcVar2 = ctime(&local_24);
    cMyTrace::cMyTrace(local_1c,"void CCoinRefillEvent::registNextRefillTimer() const",0x88,0);
    cMyTrace::operator()(local_1c,"Next coin refill time is %s",pcVar2);
  }
  return;
}

```

---

## ~CCoinRefillEvent

```asm
// === 0832be2e CCoinRefillEvent::~CCoinRefillEvent  [0x0832be2e-0x832be5d] ===
 832be2e:	55                   	push   %ebp
 832be2f:	89 e5                	mov    %esp,%ebp
 832be31:	83 ec 18             	sub    $0x18,%esp
 832be34:	8b 45 08             	mov    0x8(%ebp),%eax
 832be37:	c7 00 a8 ab c2 08    	movl   $0x8c2aba8,(%eax)
 832be3d:	8b 45 08             	mov    0x8(%ebp),%eax
 832be40:	89 04 24             	mov    %eax,(%esp)
 832be43:	e8 0a f0 dd ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 832be48:	b8 00 00 00 00       	mov    $0x0,%eax
 832be4d:	84 c0                	test   %al,%al
 832be4f:	74 0b                	je     832be5c <_ZN16CCoinRefillEventD1Ev+0x2e>
 832be51:	8b 45 08             	mov    0x8(%ebp),%eax
 832be54:	89 04 24             	mov    %eax,(%esp)
 832be57:	e8 94 86 3f 00       	call   87244f0 <_ZdlPv>
 832be5c:	c9                   	leave
 832be5d:	c3                   	ret

```

```c
// CCoinRefillEvent::~CCoinRefillEvent @ 0x832be2e

/* WARNING: Removing unreachable block (ram,0x0832be51) */
/* CCoinRefillEvent::~CCoinRefillEvent() */

void __thiscall CCoinRefillEvent::~CCoinRefillEvent(CCoinRefillEvent *this)

{
  *(undefined ***)this = &PTR__CCoinRefillEvent_08c2aba8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CCoinRefillEvent_0832be5e

```asm
// === 0832be5e CCoinRefillEvent::~CCoinRefillEvent  [0x0832be5e-0x832be7b] ===
 832be5e:	55                   	push   %ebp
 832be5f:	89 e5                	mov    %esp,%ebp
 832be61:	83 ec 18             	sub    $0x18,%esp
 832be64:	8b 45 08             	mov    0x8(%ebp),%eax
 832be67:	89 04 24             	mov    %eax,(%esp)
 832be6a:	e8 bf ff ff ff       	call   832be2e <_ZN16CCoinRefillEventD1Ev>
 832be6f:	8b 45 08             	mov    0x8(%ebp),%eax
 832be72:	89 04 24             	mov    %eax,(%esp)
 832be75:	e8 76 86 3f 00       	call   87244f0 <_ZdlPv>
 832be7a:	c9                   	leave
 832be7b:	c3                   	ret

```

```c
// CCoinRefillEvent::~CCoinRefillEvent @ 0x832be5e

/* CCoinRefillEvent::~CCoinRefillEvent() */

void __thiscall CCoinRefillEvent::~CCoinRefillEvent(CCoinRefillEvent *this)

{
  ~CCoinRefillEvent(this);
  operator_delete(this);
  return;
}

```

