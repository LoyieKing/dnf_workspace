# CCoinEventOnCharCreate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## CCoinEventOnCharCreate

```asm
// === 0810a914 CCoinEventOnCharCreate::CCoinEventOnCharCreate  [0x0810a914-0x810a939] ===
 810a914:	55                   	push   %ebp
 810a915:	89 e5                	mov    %esp,%ebp
 810a917:	83 ec 18             	sub    $0x18,%esp
 810a91a:	8b 45 08             	mov    0x8(%ebp),%eax
 810a91d:	89 04 24             	mov    %eax,(%esp)
 810a920:	e8 07 05 00 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 810a925:	8b 45 08             	mov    0x8(%ebp),%eax
 810a928:	c7 00 68 ac b4 08    	movl   $0x8b4ac68,(%eax)
 810a92e:	8b 45 08             	mov    0x8(%ebp),%eax
 810a931:	c7 40 0c 05 00 00 00 	movl   $0x5,0xc(%eax)
 810a938:	c9                   	leave
 810a939:	c3                   	ret

```

```c
// CCoinEventOnCharCreate::CCoinEventOnCharCreate @ 0x810a914

/* CCoinEventOnCharCreate::CCoinEventOnCharCreate() */

void __thiscall CCoinEventOnCharCreate::CCoinEventOnCharCreate(CCoinEventOnCharCreate *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CCoinEventOnCharCreate_08b4ac68;
  *(undefined4 *)(this + 0xc) = 5;
  return;
}

```

---

## EndEvent

```asm
// === 0810aa42 CCoinEventOnCharCreate::EndEvent  [0x0810aa42-0x810aa9c] ===
 810aa42:	55                   	push   %ebp
 810aa43:	89 e5                	mov    %esp,%ebp
 810aa45:	83 ec 28             	sub    $0x28,%esp
 810aa48:	8b 45 08             	mov    0x8(%ebp),%eax
 810aa4b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810aa52:	00 
 810aa53:	89 04 24             	mov    %eax,(%esp)
 810aa56:	e8 87 da fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810aa5b:	8b 45 08             	mov    0x8(%ebp),%eax
 810aa5e:	c7 40 0c 05 00 00 00 	movl   $0x5,0xc(%eax)
 810aa65:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810aa6c:	00 
 810aa6d:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 810aa74:	00 
 810aa75:	c7 44 24 04 30 ac b4 	movl   $0x8b4ac30,0x4(%esp)
 810aa7c:	08 
 810aa7d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810aa80:	89 04 24             	mov    %eax,(%esp)
 810aa83:	e8 90 4c 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810aa88:	c7 44 24 04 c4 a4 b4 	movl   $0x8b4a4c4,0x4(%esp)
 810aa8f:	08 
 810aa90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810aa93:	89 04 24             	mov    %eax,(%esp)
 810aa96:	e8 ed 4c 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810aa9b:	c9                   	leave
 810aa9c:	c3                   	ret

```

```c
// CCoinEventOnCharCreate::EndEvent @ 0x810aa42

/* CCoinEventOnCharCreate::EndEvent() */

void __thiscall CCoinEventOnCharCreate::EndEvent(CCoinEventOnCharCreate *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  *(undefined4 *)(this + 0xc) = 5;
  cMyTrace::cMyTrace(local_1c,"EndEvent",0x24,0);
  cMyTrace::operator()(local_1c,"Coin Event On Char Create End!");
  return;
}

```

---

## StartEvent

```asm
// === 0810a988 CCoinEventOnCharCreate::StartEvent  [0x0810a988-0x810a9e3] ===
 810a988:	55                   	push   %ebp
 810a989:	89 e5                	mov    %esp,%ebp
 810a98b:	83 ec 28             	sub    $0x28,%esp
 810a98e:	8b 45 08             	mov    0x8(%ebp),%eax
 810a991:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a998:	00 
 810a999:	89 04 24             	mov    %eax,(%esp)
 810a99c:	e8 41 db fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a9a1:	8b 45 08             	mov    0x8(%ebp),%eax
 810a9a4:	c7 40 0c 05 00 00 00 	movl   $0x5,0xc(%eax)
 810a9ab:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810a9b2:	00 
 810a9b3:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 810a9ba:	00 
 810a9bb:	c7 44 24 04 44 ac b4 	movl   $0x8b4ac44,0x4(%esp)
 810a9c2:	08 
 810a9c3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a9c6:	89 04 24             	mov    %eax,(%esp)
 810a9c9:	e8 4a 4d 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810a9ce:	c7 44 24 04 a0 a4 b4 	movl   $0x8b4a4a0,0x4(%esp)
 810a9d5:	08 
 810a9d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810a9d9:	89 04 24             	mov    %eax,(%esp)
 810a9dc:	e8 a7 4d 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810a9e1:	c9                   	leave
 810a9e2:	c3                   	ret
 810a9e3:	90                   	nop

```

```c
// CCoinEventOnCharCreate::StartEvent @ 0x810a988

/* CCoinEventOnCharCreate::StartEvent() */

void __thiscall CCoinEventOnCharCreate::StartEvent(CCoinEventOnCharCreate *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 0xc) = 5;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x15,0);
  cMyTrace::operator()(local_1c,"Coin Event On Char Create Start!");
  return;
}

```

---

## StartEvent_0810a9e4

```asm
// === 0810a9e4 CCoinEventOnCharCreate::StartEvent  [0x0810a9e4-0x810aa41] ===
 810a9e4:	55                   	push   %ebp
 810a9e5:	89 e5                	mov    %esp,%ebp
 810a9e7:	83 ec 28             	sub    $0x28,%esp
 810a9ea:	8b 45 08             	mov    0x8(%ebp),%eax
 810a9ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 810a9f4:	00 
 810a9f5:	89 04 24             	mov    %eax,(%esp)
 810a9f8:	e8 e5 da fb ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 810a9fd:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 810aa01:	0f b7 d0             	movzwl %ax,%edx
 810aa04:	8b 45 08             	mov    0x8(%ebp),%eax
 810aa07:	89 50 0c             	mov    %edx,0xc(%eax)
 810aa0a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810aa11:	00 
 810aa12:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 810aa19:	00 
 810aa1a:	c7 44 24 04 39 ac b4 	movl   $0x8b4ac39,0x4(%esp)
 810aa21:	08 
 810aa22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810aa25:	89 04 24             	mov    %eax,(%esp)
 810aa28:	e8 eb 4c 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810aa2d:	c7 44 24 04 a0 a4 b4 	movl   $0x8b4a4a0,0x4(%esp)
 810aa34:	08 
 810aa35:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810aa38:	89 04 24             	mov    %eax,(%esp)
 810aa3b:	e8 48 4d 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810aa40:	c9                   	leave
 810aa41:	c3                   	ret

```

```c
// CCoinEventOnCharCreate::StartEvent @ 0x810a9e4

/* CCoinEventOnCharCreate::StartEvent(Word_Param) */

void __thiscall CCoinEventOnCharCreate::StartEvent(CCoinEventOnCharCreate *this,ushort param_2)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(uint *)(this + 0xc) = (uint)param_2;
  cMyTrace::cMyTrace(local_1c,"StartEvent",0x1c,0);
  cMyTrace::operator()(local_1c,"Coin Event On Char Create Start!");
  return;
}

```

---

## ~CCoinEventOnCharCreate

```asm
// === 0810a93a CCoinEventOnCharCreate::~CCoinEventOnCharCreate  [0x0810a93a-0x810a969] ===
 810a93a:	55                   	push   %ebp
 810a93b:	89 e5                	mov    %esp,%ebp
 810a93d:	83 ec 18             	sub    $0x18,%esp
 810a940:	8b 45 08             	mov    0x8(%ebp),%eax
 810a943:	c7 00 68 ac b4 08    	movl   $0x8b4ac68,(%eax)
 810a949:	8b 45 08             	mov    0x8(%ebp),%eax
 810a94c:	89 04 24             	mov    %eax,(%esp)
 810a94f:	e8 fe 04 00 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 810a954:	b8 00 00 00 00       	mov    $0x0,%eax
 810a959:	84 c0                	test   %al,%al
 810a95b:	74 0b                	je     810a968 <_ZN22CCoinEventOnCharCreateD1Ev+0x2e>
 810a95d:	8b 45 08             	mov    0x8(%ebp),%eax
 810a960:	89 04 24             	mov    %eax,(%esp)
 810a963:	e8 88 9b 61 00       	call   87244f0 <_ZdlPv>
 810a968:	c9                   	leave
 810a969:	c3                   	ret

```

```c
// CCoinEventOnCharCreate::~CCoinEventOnCharCreate @ 0x810a93a

/* WARNING: Removing unreachable block (ram,0x0810a95d) */
/* CCoinEventOnCharCreate::~CCoinEventOnCharCreate() */

void __thiscall CCoinEventOnCharCreate::~CCoinEventOnCharCreate(CCoinEventOnCharCreate *this)

{
  *(undefined ***)this = &PTR__CCoinEventOnCharCreate_08b4ac68;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CCoinEventOnCharCreate_0810a96a

```asm
// === 0810a96a CCoinEventOnCharCreate::~CCoinEventOnCharCreate  [0x0810a96a-0x810a987] ===
 810a96a:	55                   	push   %ebp
 810a96b:	89 e5                	mov    %esp,%ebp
 810a96d:	83 ec 18             	sub    $0x18,%esp
 810a970:	8b 45 08             	mov    0x8(%ebp),%eax
 810a973:	89 04 24             	mov    %eax,(%esp)
 810a976:	e8 bf ff ff ff       	call   810a93a <_ZN22CCoinEventOnCharCreateD1Ev>
 810a97b:	8b 45 08             	mov    0x8(%ebp),%eax
 810a97e:	89 04 24             	mov    %eax,(%esp)
 810a981:	e8 6a 9b 61 00       	call   87244f0 <_ZdlPv>
 810a986:	c9                   	leave
 810a987:	c3                   	ret

```

```c
// CCoinEventOnCharCreate::~CCoinEventOnCharCreate @ 0x810a96a

/* CCoinEventOnCharCreate::~CCoinEventOnCharCreate() */

void __thiscall CCoinEventOnCharCreate::~CCoinEventOnCharCreate(CCoinEventOnCharCreate *this)

{
  ~CCoinEventOnCharCreate(this);
  operator_delete(this);
  return;
}

```

