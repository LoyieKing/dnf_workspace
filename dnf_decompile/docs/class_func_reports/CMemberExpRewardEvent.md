# CMemberExpRewardEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CMemberExpRewardEvent

```asm
// === 081b291c CMemberExpRewardEvent::CMemberExpRewardEvent  [0x081b291c-0x81b2941] ===
 81b291c:	55                   	push   %ebp
 81b291d:	89 e5                	mov    %esp,%ebp
 81b291f:	83 ec 18             	sub    $0x18,%esp
 81b2922:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2925:	89 04 24             	mov    %eax,(%esp)
 81b2928:	e8 ff 84 f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b292d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2930:	c7 00 88 7b bb 08    	movl   $0x8bb7b88,(%eax)
 81b2936:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2939:	c7 40 0c 0a 00 00 00 	movl   $0xa,0xc(%eax)
 81b2940:	c9                   	leave
 81b2941:	c3                   	ret

```

```c
// CMemberExpRewardEvent::CMemberExpRewardEvent @ 0x81b291c

/* CMemberExpRewardEvent::CMemberExpRewardEvent() */

void __thiscall CMemberExpRewardEvent::CMemberExpRewardEvent(CMemberExpRewardEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CMemberExpRewardEvent_08bb7b88;
  *(undefined4 *)(this + 0xc) = 10;
  return;
}

```

---

## EndEvent

```asm
// === 081b2a5a CMemberExpRewardEvent::EndEvent  [0x081b2a5a-0x81b2ab5] ===
 81b2a5a:	55                   	push   %ebp
 81b2a5b:	89 e5                	mov    %esp,%ebp
 81b2a5d:	83 ec 28             	sub    $0x28,%esp
 81b2a60:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2a63:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81b2a6a:	00 
 81b2a6b:	89 04 24             	mov    %eax,(%esp)
 81b2a6e:	e8 6f 5a f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b2a73:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2a76:	c7 40 0c 0a 00 00 00 	movl   $0xa,0xc(%eax)
 81b2a7d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b2a84:	00 
 81b2a85:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81b2a8c:	00 
 81b2a8d:	c7 44 24 04 50 7b bb 	movl   $0x8bb7b50,0x4(%esp)
 81b2a94:	08 
 81b2a95:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2a98:	89 04 24             	mov    %eax,(%esp)
 81b2a9b:	e8 78 cc 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b2aa0:	c7 44 24 04 c3 74 bb 	movl   $0x8bb74c3,0x4(%esp)
 81b2aa7:	08 
 81b2aa8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2aab:	89 04 24             	mov    %eax,(%esp)
 81b2aae:	e8 d5 cc 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b2ab3:	c9                   	leave
 81b2ab4:	c3                   	ret
 81b2ab5:	90                   	nop

```

```c
// CMemberExpRewardEvent::EndEvent @ 0x81b2a5a

/* CMemberExpRewardEvent::EndEvent() */

void __thiscall CMemberExpRewardEvent::EndEvent(CMemberExpRewardEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 10;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x24,0);
  cMyTrace::operator()(local_1c,"Member Exp Reward Event");
  return;
}

```

---

## GetMemberExpRewardRatio

```asm
// === 081b2ab6 CMemberExpRewardEvent::GetMemberExpRewardRatio  [0x081b2ab6-0x81b2ac0] ===
 81b2ab6:	55                   	push   %ebp
 81b2ab7:	89 e5                	mov    %esp,%ebp
 81b2ab9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2abc:	8b 40 0c             	mov    0xc(%eax),%eax
 81b2abf:	5d                   	pop    %ebp
 81b2ac0:	c3                   	ret

```

```c
// CMemberExpRewardEvent::GetMemberExpRewardRatio @ 0x81b2ab6

/* CMemberExpRewardEvent::GetMemberExpRewardRatio() */

undefined4 __thiscall CMemberExpRewardEvent::GetMemberExpRewardRatio(CMemberExpRewardEvent *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## StartEvent

```asm
// === 081b2990 CMemberExpRewardEvent::StartEvent  [0x081b2990-0x81b29eb] ===
 81b2990:	55                   	push   %ebp
 81b2991:	89 e5                	mov    %esp,%ebp
 81b2993:	83 ec 28             	sub    $0x28,%esp
 81b2996:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2999:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b29a0:	00 
 81b29a1:	89 04 24             	mov    %eax,(%esp)
 81b29a4:	e8 39 5b f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b29a9:	8b 45 08             	mov    0x8(%ebp),%eax
 81b29ac:	c7 40 0c 0a 00 00 00 	movl   $0xa,0xc(%eax)
 81b29b3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b29ba:	00 
 81b29bb:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81b29c2:	00 
 81b29c3:	c7 44 24 04 64 7b bb 	movl   $0x8bb7b64,0x4(%esp)
 81b29ca:	08 
 81b29cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b29ce:	89 04 24             	mov    %eax,(%esp)
 81b29d1:	e8 42 cd 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b29d6:	c7 44 24 04 80 74 bb 	movl   $0x8bb7480,0x4(%esp)
 81b29dd:	08 
 81b29de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b29e1:	89 04 24             	mov    %eax,(%esp)
 81b29e4:	e8 9f cd 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b29e9:	c9                   	leave
 81b29ea:	c3                   	ret
 81b29eb:	90                   	nop

```

```c
// CMemberExpRewardEvent::StartEvent @ 0x81b2990

/* CMemberExpRewardEvent::StartEvent() */

void __thiscall CMemberExpRewardEvent::StartEvent(CMemberExpRewardEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 10;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x16,0);
  cMyTrace::operator()(local_1c,"Member Exp Reward Event Start!");
  return;
}

```

---

## StartEvent_081b29ec

```asm
// === 081b29ec CMemberExpRewardEvent::StartEvent  [0x081b29ec-0x81b2a59] ===
 81b29ec:	55                   	push   %ebp
 81b29ed:	89 e5                	mov    %esp,%ebp
 81b29ef:	53                   	push   %ebx
 81b29f0:	83 ec 24             	sub    $0x24,%esp
 81b29f3:	8b 45 08             	mov    0x8(%ebp),%eax
 81b29f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81b29fd:	00 
 81b29fe:	89 04 24             	mov    %eax,(%esp)
 81b2a01:	e8 dc 5a f1 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81b2a06:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 81b2a0a:	0f b7 d0             	movzwl %ax,%edx
 81b2a0d:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2a10:	89 50 0c             	mov    %edx,0xc(%eax)
 81b2a13:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 81b2a17:	0f b7 d8             	movzwl %ax,%ebx
 81b2a1a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81b2a21:	00 
 81b2a22:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81b2a29:	00 
 81b2a2a:	c7 44 24 04 59 7b bb 	movl   $0x8bb7b59,0x4(%esp)
 81b2a31:	08 
 81b2a32:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2a35:	89 04 24             	mov    %eax,(%esp)
 81b2a38:	e8 db cc 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81b2a3d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81b2a41:	c7 44 24 04 a0 74 bb 	movl   $0x8bb74a0,0x4(%esp)
 81b2a48:	08 
 81b2a49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81b2a4c:	89 04 24             	mov    %eax,(%esp)
 81b2a4f:	e8 34 cd 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81b2a54:	83 c4 24             	add    $0x24,%esp
 81b2a57:	5b                   	pop    %ebx
 81b2a58:	5d                   	pop    %ebp
 81b2a59:	c3                   	ret

```

```c
// CMemberExpRewardEvent::StartEvent @ 0x81b29ec

/* CMemberExpRewardEvent::StartEvent(Word_Param) */

void __thiscall CMemberExpRewardEvent::StartEvent(CMemberExpRewardEvent *this,ushort param_2)

{
  cMyTrace local_1c [20];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1d,0);
  cMyTrace::operator()(local_1c,"Member Exp Reward Event! ratio(%d)",(uint)param_2);
  return;
}

```

---

## ~CMemberExpRewardEvent

```asm
// === 081b2942 CMemberExpRewardEvent::~CMemberExpRewardEvent  [0x081b2942-0x81b2971] ===
 81b2942:	55                   	push   %ebp
 81b2943:	89 e5                	mov    %esp,%ebp
 81b2945:	83 ec 18             	sub    $0x18,%esp
 81b2948:	8b 45 08             	mov    0x8(%ebp),%eax
 81b294b:	c7 00 88 7b bb 08    	movl   $0x8bb7b88,(%eax)
 81b2951:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2954:	89 04 24             	mov    %eax,(%esp)
 81b2957:	e8 f6 84 f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b295c:	b8 00 00 00 00       	mov    $0x0,%eax
 81b2961:	84 c0                	test   %al,%al
 81b2963:	74 0b                	je     81b2970 <_ZN21CMemberExpRewardEventD1Ev+0x2e>
 81b2965:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2968:	89 04 24             	mov    %eax,(%esp)
 81b296b:	e8 80 1b 57 00       	call   87244f0 <_ZdlPv>
 81b2970:	c9                   	leave
 81b2971:	c3                   	ret

```

```c
// CMemberExpRewardEvent::~CMemberExpRewardEvent @ 0x81b2942

/* WARNING: Removing unreachable block (ram,0x081b2965) */
/* CMemberExpRewardEvent::~CMemberExpRewardEvent() */

void __thiscall CMemberExpRewardEvent::~CMemberExpRewardEvent(CMemberExpRewardEvent *this)

{
  *(undefined ***)this = &PTR__CMemberExpRewardEvent_08bb7b88;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CMemberExpRewardEvent_081b2972

```asm
// === 081b2972 CMemberExpRewardEvent::~CMemberExpRewardEvent  [0x081b2972-0x81b298f] ===
 81b2972:	55                   	push   %ebp
 81b2973:	89 e5                	mov    %esp,%ebp
 81b2975:	83 ec 18             	sub    $0x18,%esp
 81b2978:	8b 45 08             	mov    0x8(%ebp),%eax
 81b297b:	89 04 24             	mov    %eax,(%esp)
 81b297e:	e8 bf ff ff ff       	call   81b2942 <_ZN21CMemberExpRewardEventD1Ev>
 81b2983:	8b 45 08             	mov    0x8(%ebp),%eax
 81b2986:	89 04 24             	mov    %eax,(%esp)
 81b2989:	e8 62 1b 57 00       	call   87244f0 <_ZdlPv>
 81b298e:	c9                   	leave
 81b298f:	c3                   	ret

```

```c
// CMemberExpRewardEvent::~CMemberExpRewardEvent @ 0x81b2972

/* CMemberExpRewardEvent::~CMemberExpRewardEvent() */

void __thiscall CMemberExpRewardEvent::~CMemberExpRewardEvent(CMemberExpRewardEvent *this)

{
  ~CMemberExpRewardEvent(this);
  operator_delete(this);
  return;
}

```

