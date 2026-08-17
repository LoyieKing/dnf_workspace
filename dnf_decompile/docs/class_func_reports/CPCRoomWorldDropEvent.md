# CPCRoomWorldDropEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CPCRoomWorldDropEvent

```asm
// === 082677f8 CPCRoomWorldDropEvent::CPCRoomWorldDropEvent  [0x082677f8-0x8267813] ===
 82677f8:	55                   	push   %ebp
 82677f9:	89 e5                	mov    %esp,%ebp
 82677fb:	83 ec 18             	sub    $0x18,%esp
 82677fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8267801:	89 04 24             	mov    %eax,(%esp)
 8267804:	e8 23 36 ea ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 8267809:	8b 45 08             	mov    0x8(%ebp),%eax
 826780c:	c7 00 88 03 bf 08    	movl   $0x8bf0388,(%eax)
 8267812:	c9                   	leave
 8267813:	c3                   	ret

```

```c
// CPCRoomWorldDropEvent::CPCRoomWorldDropEvent @ 0x82677f8

/* CPCRoomWorldDropEvent::CPCRoomWorldDropEvent() */

void __thiscall CPCRoomWorldDropEvent::CPCRoomWorldDropEvent(CPCRoomWorldDropEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CPCRoomWorldDropEvent_08bf0388;
  return;
}

```

---

## ~CPCRoomWorldDropEvent

```asm
// === 08267814 CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent  [0x08267814-0x8267843] ===
 8267814:	55                   	push   %ebp
 8267815:	89 e5                	mov    %esp,%ebp
 8267817:	83 ec 18             	sub    $0x18,%esp
 826781a:	8b 45 08             	mov    0x8(%ebp),%eax
 826781d:	c7 00 88 03 bf 08    	movl   $0x8bf0388,(%eax)
 8267823:	8b 45 08             	mov    0x8(%ebp),%eax
 8267826:	89 04 24             	mov    %eax,(%esp)
 8267829:	e8 24 36 ea ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 826782e:	b8 00 00 00 00       	mov    $0x0,%eax
 8267833:	84 c0                	test   %al,%al
 8267835:	74 0b                	je     8267842 <_ZN21CPCRoomWorldDropEventD1Ev+0x2e>
 8267837:	8b 45 08             	mov    0x8(%ebp),%eax
 826783a:	89 04 24             	mov    %eax,(%esp)
 826783d:	e8 ae cc 4b 00       	call   87244f0 <_ZdlPv>
 8267842:	c9                   	leave
 8267843:	c3                   	ret

```

```c
// CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent @ 0x8267814

/* WARNING: Removing unreachable block (ram,0x08267837) */
/* CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent() */

void __thiscall CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent(CPCRoomWorldDropEvent *this)

{
  *(undefined ***)this = &PTR__CPCRoomWorldDropEvent_08bf0388;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~CPCRoomWorldDropEvent_08267844

```asm
// === 08267844 CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent  [0x08267844-0x8267861] ===
 8267844:	55                   	push   %ebp
 8267845:	89 e5                	mov    %esp,%ebp
 8267847:	83 ec 18             	sub    $0x18,%esp
 826784a:	8b 45 08             	mov    0x8(%ebp),%eax
 826784d:	89 04 24             	mov    %eax,(%esp)
 8267850:	e8 bf ff ff ff       	call   8267814 <_ZN21CPCRoomWorldDropEventD1Ev>
 8267855:	8b 45 08             	mov    0x8(%ebp),%eax
 8267858:	89 04 24             	mov    %eax,(%esp)
 826785b:	e8 90 cc 4b 00       	call   87244f0 <_ZdlPv>
 8267860:	c9                   	leave
 8267861:	c3                   	ret

```

```c
// CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent @ 0x8267844

/* CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent() */

void __thiscall CPCRoomWorldDropEvent::~CPCRoomWorldDropEvent(CPCRoomWorldDropEvent *this)

{
  ~CPCRoomWorldDropEvent(this);
  operator_delete(this);
  return;
}

```

