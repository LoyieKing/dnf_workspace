# CPowerWarVictoriousEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CPowerWarVictoriousEvent

```asm
// === 0826891c CPowerWarVictoriousEvent::CPowerWarVictoriousEvent  [0x0826891c-0x8268937] ===
 826891c:	55                   	push   %ebp
 826891d:	89 e5                	mov    %esp,%ebp
 826891f:	83 ec 18             	sub    $0x18,%esp
 8268922:	8b 45 08             	mov    0x8(%ebp),%eax
 8268925:	89 04 24             	mov    %eax,(%esp)
 8268928:	e8 ff 24 ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 826892d:	8b 45 08             	mov    0x8(%ebp),%eax
 8268930:	c7 00 28 21 bf 08    	movl   $0x8bf2128,(%eax)
 8268936:	c9                   	leave
 8268937:	c3                   	ret

```

```c
// CPowerWarVictoriousEvent::CPowerWarVictoriousEvent @ 0x826891c

/* CPowerWarVictoriousEvent::CPowerWarVictoriousEvent() */

void __thiscall CPowerWarVictoriousEvent::CPowerWarVictoriousEvent(CPowerWarVictoriousEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPowerWarVictoriousEvent_08bf2128;
  return;
}

```

---

## EndEvent

```asm
// === 08268b4a CPowerWarVictoriousEvent::EndEvent  [0x08268b4a-0x8268bca] ===
 8268b4a:	55                   	push   %ebp
 8268b4b:	89 e5                	mov    %esp,%ebp
 8268b4d:	83 ec 28             	sub    $0x28,%esp
 8268b50:	8b 45 08             	mov    0x8(%ebp),%eax
 8268b53:	8b 00                	mov    (%eax),%eax
 8268b55:	83 c0 34             	add    $0x34,%eax
 8268b58:	8b 10                	mov    (%eax),%edx
 8268b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8268b5d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268b64:	00 
 8268b65:	89 04 24             	mov    %eax,(%esp)
 8268b68:	ff d2                	call   *%edx
 8268b6a:	84 c0                	test   %al,%al
 8268b6c:	74 5b                	je     8268bc9 <_ZN24CPowerWarVictoriousEvent8EndEventEv+0x7f>
 8268b6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8268b71:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268b78:	00 
 8268b79:	89 04 24             	mov    %eax,(%esp)
 8268b7c:	e8 61 f9 e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268b81:	8b 45 08             	mov    0x8(%ebp),%eax
 8268b84:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 8268b8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8268b8d:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 8268b93:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268b9a:	00 
 8268b9b:	c7 44 24 08 41 00 00 	movl   $0x41,0x8(%esp)
 8268ba2:	00 
 8268ba3:	c7 44 24 04 40 20 bf 	movl   $0x8bf2040,0x4(%esp)
 8268baa:	08 
 8268bab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268bae:	89 04 24             	mov    %eax,(%esp)
 8268bb1:	e8 62 6b 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268bb6:	c7 44 24 04 b4 13 bf 	movl   $0x8bf13b4,0x4(%esp)
 8268bbd:	08 
 8268bbe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8268bc1:	89 04 24             	mov    %eax,(%esp)
 8268bc4:	e8 bf 6b 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268bc9:	c9                   	leave
 8268bca:	c3                   	ret

```

```c
// CPowerWarVictoriousEvent::EndEvent @ 0x8268b4a

/* CPowerWarVictoriousEvent::EndEvent() */

void __thiscall CPowerWarVictoriousEvent::EndEvent(CPowerWarVictoriousEvent *this)

{
  char cVar1;
  cMyTrace local_1c [24];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 != '\0') {
    CEventBase::SetEventFlag((CEventBase *)this,false);
    *(undefined2 *)(this + 10) = 0;
    *(undefined2 *)(this + 0xc) = 0;
    cMyTrace::cMyTrace(local_1c,"virtual void CPowerWarVictoriousEvent::EndEvent()",0x41,0);
    cMyTrace::operator()(local_1c,"Power War Victorious Event End");
  }
  return;
}

```

---

## StartEvent

```asm
// === 08268986 CPowerWarVictoriousEvent::StartEvent  [0x08268986-0x8268a67] ===
 8268986:	55                   	push   %ebp
 8268987:	89 e5                	mov    %esp,%ebp
 8268989:	53                   	push   %ebx
 826898a:	83 ec 44             	sub    $0x44,%esp
 826898d:	8b 45 08             	mov    0x8(%ebp),%eax
 8268990:	8b 00                	mov    (%eax),%eax
 8268992:	83 c0 34             	add    $0x34,%eax
 8268995:	8b 10                	mov    (%eax),%edx
 8268997:	8b 45 08             	mov    0x8(%ebp),%eax
 826899a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82689a1:	00 
 82689a2:	89 04 24             	mov    %eax,(%esp)
 82689a5:	ff d2                	call   *%edx
 82689a7:	83 f0 01             	xor    $0x1,%eax
 82689aa:	84 c0                	test   %al,%al
 82689ac:	0f 84 b0 00 00 00    	je     8268a62 <_ZN24CPowerWarVictoriousEvent10StartEventEv+0xdc>
 82689b2:	8b 45 08             	mov    0x8(%ebp),%eax
 82689b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82689bc:	00 
 82689bd:	89 04 24             	mov    %eax,(%esp)
 82689c0:	e8 1d fb e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 82689c5:	e8 d1 37 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82689ca:	8b 80 fc a6 00 00    	mov    0xa6fc(%eax),%eax
 82689d0:	c1 e0 02             	shl    $0x2,%eax
 82689d3:	89 c2                	mov    %eax,%edx
 82689d5:	c1 e2 04             	shl    $0x4,%edx
 82689d8:	89 d1                	mov    %edx,%ecx
 82689da:	29 c1                	sub    %eax,%ecx
 82689dc:	89 c8                	mov    %ecx,%eax
 82689de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82689e1:	e8 96 da e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 82689e6:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 82689ed:	00 
 82689ee:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82689f5:	00 
 82689f6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82689f9:	89 54 24 10          	mov    %edx,0x10(%esp)
 82689fd:	c7 44 24 0c 8b 00 00 	movl   $0x8b,0xc(%esp)
 8268a04:	00 
 8268a05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8268a0c:	00 
 8268a0d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8268a14:	00 
 8268a15:	89 04 24             	mov    %eax,(%esp)
 8268a18:	e8 f9 83 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8268a1d:	e8 5f 37 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8268a22:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 8268a28:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268a2f:	00 
 8268a30:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 8268a37:	00 
 8268a38:	c7 44 24 04 e0 20 bf 	movl   $0x8bf20e0,0x4(%esp)
 8268a3f:	08 
 8268a40:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8268a43:	89 04 24             	mov    %eax,(%esp)
 8268a46:	e8 cd 6c 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268a4b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8268a4f:	c7 44 24 04 84 13 bf 	movl   $0x8bf1384,0x4(%esp)
 8268a56:	08 
 8268a57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8268a5a:	89 04 24             	mov    %eax,(%esp)
 8268a5d:	e8 26 6d 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268a62:	83 c4 44             	add    $0x44,%esp
 8268a65:	5b                   	pop    %ebx
 8268a66:	5d                   	pop    %ebp
 8268a67:	c3                   	ret

```

```c
// CPowerWarVictoriousEvent::StartEvent @ 0x8268986

/* CPowerWarVictoriousEvent::StartEvent() */

void __thiscall CPowerWarVictoriousEvent::StartEvent(CPowerWarVictoriousEvent *this)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  TimerQueue *pTVar4;
  cMyTrace local_20 [16];
  int local_10;
  
  cVar2 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag((CEventBase *)this,true);
    iVar3 = G_CDataManager();
    local_10 = *(int *)(iVar3 + 0xa6fc) * 0x3c;
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x8b,local_10,0,0);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_20,"virtual void CPowerWarVictoriousEvent::StartEvent()",0x22,0);
    cMyTrace::operator()(local_20,"Power War Victorious Event Start! server(%d)",uVar1);
  }
  return;
}

```

---

## StartEvent_08268a68

```asm
// === 08268a68 CPowerWarVictoriousEvent::StartEvent  [0x08268a68-0x8268b49] ===
 8268a68:	55                   	push   %ebp
 8268a69:	89 e5                	mov    %esp,%ebp
 8268a6b:	53                   	push   %ebx
 8268a6c:	83 ec 44             	sub    $0x44,%esp
 8268a6f:	8b 45 08             	mov    0x8(%ebp),%eax
 8268a72:	8b 00                	mov    (%eax),%eax
 8268a74:	83 c0 34             	add    $0x34,%eax
 8268a77:	8b 10                	mov    (%eax),%edx
 8268a79:	8b 45 08             	mov    0x8(%ebp),%eax
 8268a7c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8268a83:	00 
 8268a84:	89 04 24             	mov    %eax,(%esp)
 8268a87:	ff d2                	call   *%edx
 8268a89:	83 f0 01             	xor    $0x1,%eax
 8268a8c:	84 c0                	test   %al,%al
 8268a8e:	0f 84 b0 00 00 00    	je     8268b44 <_ZN24CPowerWarVictoriousEvent10StartEventE10Word_Param+0xdc>
 8268a94:	8b 45 08             	mov    0x8(%ebp),%eax
 8268a97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8268a9e:	00 
 8268a9f:	89 04 24             	mov    %eax,(%esp)
 8268aa2:	e8 3b fa e5 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 8268aa7:	e8 ef 36 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8268aac:	8b 80 fc a6 00 00    	mov    0xa6fc(%eax),%eax
 8268ab2:	c1 e0 02             	shl    $0x2,%eax
 8268ab5:	89 c2                	mov    %eax,%edx
 8268ab7:	c1 e2 04             	shl    $0x4,%edx
 8268aba:	89 d1                	mov    %edx,%ecx
 8268abc:	29 c1                	sub    %eax,%ecx
 8268abe:	89 c8                	mov    %ecx,%eax
 8268ac0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8268ac3:	e8 b4 d9 e8 ff       	call   80f647c <_Z12G_TimerQueuev>
 8268ac8:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8268acf:	00 
 8268ad0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8268ad7:	00 
 8268ad8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8268adb:	89 54 24 10          	mov    %edx,0x10(%esp)
 8268adf:	c7 44 24 0c 8b 00 00 	movl   $0x8b,0xc(%esp)
 8268ae6:	00 
 8268ae7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8268aee:	00 
 8268aef:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8268af6:	00 
 8268af7:	89 04 24             	mov    %eax,(%esp)
 8268afa:	e8 17 83 3c 00       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8268aff:	e8 7d 36 e6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8268b04:	8b 98 b0 01 00 00    	mov    0x1b0(%eax),%ebx
 8268b0a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8268b11:	00 
 8268b12:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 8268b19:	00 
 8268b1a:	c7 44 24 04 80 20 bf 	movl   $0x8bf2080,0x4(%esp)
 8268b21:	08 
 8268b22:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8268b25:	89 04 24             	mov    %eax,(%esp)
 8268b28:	e8 eb 6b 2e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8268b2d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8268b31:	c7 44 24 04 84 13 bf 	movl   $0x8bf1384,0x4(%esp)
 8268b38:	08 
 8268b39:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8268b3c:	89 04 24             	mov    %eax,(%esp)
 8268b3f:	e8 44 6c 2e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8268b44:	83 c4 44             	add    $0x44,%esp
 8268b47:	5b                   	pop    %ebx
 8268b48:	5d                   	pop    %ebp
 8268b49:	c3                   	ret

```

```c
// CPowerWarVictoriousEvent::StartEvent @ 0x8268a68

/* CPowerWarVictoriousEvent::StartEvent(Word_Param) */

void CPowerWarVictoriousEvent::StartEvent(CEventBase *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  TimerQueue *pTVar4;
  cMyTrace local_20 [16];
  int local_10;
  
  cVar2 = (**(code **)(*(int *)param_1 + 0x34))(param_1,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag(param_1,true);
    iVar3 = G_CDataManager();
    local_10 = *(int *)(iVar3 + 0xa6fc) * 0x3c;
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x8b,local_10,0,0);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_20,"virtual void CPowerWarVictoriousEvent::StartEvent(Word_Param)",0x34
                       ,0);
    cMyTrace::operator()(local_20,"Power War Victorious Event Start! server(%d)",uVar1);
  }
  return;
}

```

---

## ~CPowerWarVictoriousEvent

```asm
// === 08268938 CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent  [0x08268938-0x8268967] ===
 8268938:	55                   	push   %ebp
 8268939:	89 e5                	mov    %esp,%ebp
 826893b:	83 ec 18             	sub    $0x18,%esp
 826893e:	8b 45 08             	mov    0x8(%ebp),%eax
 8268941:	c7 00 28 21 bf 08    	movl   $0x8bf2128,(%eax)
 8268947:	8b 45 08             	mov    0x8(%ebp),%eax
 826894a:	89 04 24             	mov    %eax,(%esp)
 826894d:	e8 00 25 ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 8268952:	b8 00 00 00 00       	mov    $0x0,%eax
 8268957:	84 c0                	test   %al,%al
 8268959:	74 0b                	je     8268966 <_ZN24CPowerWarVictoriousEventD1Ev+0x2e>
 826895b:	8b 45 08             	mov    0x8(%ebp),%eax
 826895e:	89 04 24             	mov    %eax,(%esp)
 8268961:	e8 8a bb 4b 00       	call   87244f0 <_ZdlPv>
 8268966:	c9                   	leave
 8268967:	c3                   	ret

```

```c
// CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent @ 0x8268938

/* WARNING: Removing unreachable block (ram,0x0826895b) */
/* CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent() */

void __thiscall CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent(CPowerWarVictoriousEvent *this)

{
  *(undefined ***)this = &PTR__CPowerWarVictoriousEvent_08bf2128;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPowerWarVictoriousEvent_08268968

```asm
// === 08268968 CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent  [0x08268968-0x8268985] ===
 8268968:	55                   	push   %ebp
 8268969:	89 e5                	mov    %esp,%ebp
 826896b:	83 ec 18             	sub    $0x18,%esp
 826896e:	8b 45 08             	mov    0x8(%ebp),%eax
 8268971:	89 04 24             	mov    %eax,(%esp)
 8268974:	e8 bf ff ff ff       	call   8268938 <_ZN24CPowerWarVictoriousEventD1Ev>
 8268979:	8b 45 08             	mov    0x8(%ebp),%eax
 826897c:	89 04 24             	mov    %eax,(%esp)
 826897f:	e8 6c bb 4b 00       	call   87244f0 <_ZdlPv>
 8268984:	c9                   	leave
 8268985:	c3                   	ret

```

```c
// CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent @ 0x8268968

/* CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent() */

void __thiscall CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent(CPowerWarVictoriousEvent *this)

{
  ~CPowerWarVictoriousEvent(this);
  operator_delete(this);
  return;
}

```

