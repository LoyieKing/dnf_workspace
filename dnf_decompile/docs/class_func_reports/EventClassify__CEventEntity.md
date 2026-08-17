# EventClassify__CEventEntity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 14

---

## CEventEntity

```asm
// === 0810af40 EventClassify::CEventEntity::CEventEntity  [0x0810af40-0x810afc3] ===
 810af40:	55                   	push   %ebp
 810af41:	89 e5                	mov    %esp,%ebp
 810af43:	56                   	push   %esi
 810af44:	53                   	push   %ebx
 810af45:	83 ec 10             	sub    $0x10,%esp
 810af48:	8b 45 08             	mov    0x8(%ebp),%eax
 810af4b:	c7 00 48 d8 b4 08    	movl   $0x8b4d848,(%eax)
 810af51:	8b 45 08             	mov    0x8(%ebp),%eax
 810af54:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 810af58:	8b 45 08             	mov    0x8(%ebp),%eax
 810af5b:	83 c0 08             	add    $0x8,%eax
 810af5e:	89 04 24             	mov    %eax,(%esp)
 810af61:	e8 6a b6 5f 00       	call   87065d0 <_ZNSsC1Ev>
 810af66:	8b 45 08             	mov    0x8(%ebp),%eax
 810af69:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 810af70:	8b 45 08             	mov    0x8(%ebp),%eax
 810af73:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 810af7a:	8b 45 08             	mov    0x8(%ebp),%eax
 810af7d:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 810af84:	8b 45 08             	mov    0x8(%ebp),%eax
 810af87:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 810af8e:	8b 45 08             	mov    0x8(%ebp),%eax
 810af91:	83 c0 08             	add    $0x8,%eax
 810af94:	89 04 24             	mov    %eax,(%esp)
 810af97:	e8 34 de 5f 00       	call   8708dd0 <_ZNSs5clearEv>
 810af9c:	eb 1e                	jmp    810afbc <_ZN13EventClassify12CEventEntityC1Ev+0x7c>
 810af9e:	89 d3                	mov    %edx,%ebx
 810afa0:	89 c6                	mov    %eax,%esi
 810afa2:	8b 45 08             	mov    0x8(%ebp),%eax
 810afa5:	83 c0 08             	add    $0x8,%eax
 810afa8:	89 04 24             	mov    %eax,(%esp)
 810afab:	e8 30 cc 5f 00       	call   8707be0 <_ZNSsD1Ev>
 810afb0:	89 f0                	mov    %esi,%eax
 810afb2:	89 da                	mov    %ebx,%edx
 810afb4:	89 04 24             	mov    %eax,(%esp)
 810afb7:	e8 94 87 9d 00       	call   8ae3750 <_Unwind_Resume>
 810afbc:	83 c4 10             	add    $0x10,%esp
 810afbf:	5b                   	pop    %ebx
 810afc0:	5e                   	pop    %esi
 810afc1:	5d                   	pop    %ebp
 810afc2:	c3                   	ret
 810afc3:	90                   	nop

```

```c
// EventClassify::CEventEntity::CEventEntity @ 0x810af40

/* EventClassify::CEventEntity::CEventEntity() */

void __thiscall EventClassify::CEventEntity::CEventEntity(CEventEntity *this)

{
  *(undefined ***)this = &PTR__CEventEntity_08b4d848;
  this[4] = (CEventEntity)0x0;
  std::string::string((string *)(this + 8));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
                    /* try { // try from 0810af97 to 0810af9b has its CatchHandler @ 0810af9e */
  std::string::clear((string *)(this + 8));
  return;
}

```

---

## get_db_table_name

```asm
// === 0810b06c EventClassify::CEventEntity::get_db_table_name  [0x0810b06c-0x810b077] ===
 810b06c:	55                   	push   %ebp
 810b06d:	89 e5                	mov    %esp,%ebp
 810b06f:	8b 45 08             	mov    0x8(%ebp),%eax
 810b072:	83 c0 08             	add    $0x8,%eax
 810b075:	5d                   	pop    %ebp
 810b076:	c3                   	ret
 810b077:	90                   	nop

```

```c
// EventClassify::CEventEntity::get_db_table_name @ 0x810b06c

/* EventClassify::CEventEntity::get_db_table_name() */

CEventEntity * __thiscall EventClassify::CEventEntity::get_db_table_name(CEventEntity *this)

{
  return this + 8;
}

```

---

## get_event_end_time

```asm
// === 0810b0a0 EventClassify::CEventEntity::get_event_end_time  [0x0810b0a0-0x810b0ab] ===
 810b0a0:	55                   	push   %ebp
 810b0a1:	89 e5                	mov    %esp,%ebp
 810b0a3:	8b 45 08             	mov    0x8(%ebp),%eax
 810b0a6:	8b 40 10             	mov    0x10(%eax),%eax
 810b0a9:	5d                   	pop    %ebp
 810b0aa:	c3                   	ret
 810b0ab:	90                   	nop

```

```c
// EventClassify::CEventEntity::get_event_end_time @ 0x810b0a0

/* EventClassify::CEventEntity::get_event_end_time() */

undefined4 __thiscall EventClassify::CEventEntity::get_event_end_time(CEventEntity *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## get_event_record_type

```asm
// === 0810b052 EventClassify::CEventEntity::get_event_record_type  [0x0810b052-0x810b05d] ===
 810b052:	55                   	push   %ebp
 810b053:	89 e5                	mov    %esp,%ebp
 810b055:	8b 45 08             	mov    0x8(%ebp),%eax
 810b058:	8b 40 18             	mov    0x18(%eax),%eax
 810b05b:	5d                   	pop    %ebp
 810b05c:	c3                   	ret
 810b05d:	90                   	nop

```

```c
// EventClassify::CEventEntity::get_event_record_type @ 0x810b052

/* EventClassify::CEventEntity::get_event_record_type() */

undefined4 __thiscall EventClassify::CEventEntity::get_event_record_type(CEventEntity *this)

{
  return *(undefined4 *)(this + 0x18);
}

```

---

## get_event_start_time

```asm
// === 0810b094 EventClassify::CEventEntity::get_event_start_time  [0x0810b094-0x810b09f] ===
 810b094:	55                   	push   %ebp
 810b095:	89 e5                	mov    %esp,%ebp
 810b097:	8b 45 08             	mov    0x8(%ebp),%eax
 810b09a:	8b 40 0c             	mov    0xc(%eax),%eax
 810b09d:	5d                   	pop    %ebp
 810b09e:	c3                   	ret
 810b09f:	90                   	nop

```

```c
// EventClassify::CEventEntity::get_event_start_time @ 0x810b094

/* EventClassify::CEventEntity::get_event_start_time() */

undefined4 __thiscall EventClassify::CEventEntity::get_event_start_time(CEventEntity *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## is_eventing

```asm
// === 0810b016 EventClassify::CEventEntity::is_eventing  [0x0810b016-0x810b021] ===
 810b016:	55                   	push   %ebp
 810b017:	89 e5                	mov    %esp,%ebp
 810b019:	8b 45 08             	mov    0x8(%ebp),%eax
 810b01c:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 810b020:	5d                   	pop    %ebp
 810b021:	c3                   	ret

```

```c
// EventClassify::CEventEntity::is_eventing @ 0x810b016

/* EventClassify::CEventEntity::is_eventing() */

CEventEntity __thiscall EventClassify::CEventEntity::is_eventing(CEventEntity *this)

{
  return this[4];
}

```

---

## send_init_data

```asm
// === 0810b0ac EventClassify::CEventEntity::send_init_data  [0x0810b0ac-0x810b0cb] ===
 810b0ac:	55                   	push   %ebp
 810b0ad:	89 e5                	mov    %esp,%ebp
 810b0af:	83 ec 0c             	sub    $0xc,%esp
 810b0b2:	8b 4d 14             	mov    0x14(%ebp),%ecx
 810b0b5:	8b 55 18             	mov    0x18(%ebp),%edx
 810b0b8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 810b0bb:	66 89 4d fc          	mov    %cx,-0x4(%ebp)
 810b0bf:	88 55 f8             	mov    %dl,-0x8(%ebp)
 810b0c2:	88 45 f4             	mov    %al,-0xc(%ebp)
 810b0c5:	b8 00 00 00 00       	mov    $0x0,%eax
 810b0ca:	c9                   	leave
 810b0cb:	c3                   	ret

```

```c
// EventClassify::CEventEntity::send_init_data @ 0x810b0ac

/* EventClassify::CEventEntity::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool) */

undefined4
EventClassify::CEventEntity::send_init_data
          (CUser *param_1,PacketGuard *param_2,short param_3,uchar param_4,bool param_5)

{
  return 0;
}

```

---

## set_event_data

```asm
// === 0810b03a EventClassify::CEventEntity::set_event_data  [0x0810b03a-0x810b051] ===
 810b03a:	55                   	push   %ebp
 810b03b:	89 e5                	mov    %esp,%ebp
 810b03d:	8b 45 08             	mov    0x8(%ebp),%eax
 810b040:	8b 55 0c             	mov    0xc(%ebp),%edx
 810b043:	89 50 18             	mov    %edx,0x18(%eax)
 810b046:	8b 45 08             	mov    0x8(%ebp),%eax
 810b049:	8b 55 10             	mov    0x10(%ebp),%edx
 810b04c:	89 50 14             	mov    %edx,0x14(%eax)
 810b04f:	5d                   	pop    %ebp
 810b050:	c3                   	ret
 810b051:	90                   	nop

```

```c
// EventClassify::CEventEntity::set_event_data @ 0x810b03a

/* EventClassify::CEventEntity::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CEventEntity::set_event_data
          (CEventEntity *this,int param_1,InGameEventScript *param_2)

{
  *(int *)(this + 0x18) = param_1;
  *(InGameEventScript **)(this + 0x14) = param_2;
  return;
}

```

---

## set_event_end_time

```asm
// === 0810b086 EventClassify::CEventEntity::set_event_end_time  [0x0810b086-0x810b093] ===
 810b086:	55                   	push   %ebp
 810b087:	89 e5                	mov    %esp,%ebp
 810b089:	8b 45 08             	mov    0x8(%ebp),%eax
 810b08c:	8b 55 0c             	mov    0xc(%ebp),%edx
 810b08f:	89 50 10             	mov    %edx,0x10(%eax)
 810b092:	5d                   	pop    %ebp
 810b093:	c3                   	ret

```

```c
// EventClassify::CEventEntity::set_event_end_time @ 0x810b086

/* EventClassify::CEventEntity::set_event_end_time(int) */

void __thiscall EventClassify::CEventEntity::set_event_end_time(CEventEntity *this,int param_1)

{
  *(int *)(this + 0x10) = param_1;
  return;
}

```

---

## set_event_flag

```asm
// === 0810b022 EventClassify::CEventEntity::set_event_flag  [0x0810b022-0x810b039] ===
 810b022:	55                   	push   %ebp
 810b023:	89 e5                	mov    %esp,%ebp
 810b025:	83 ec 04             	sub    $0x4,%esp
 810b028:	8b 45 0c             	mov    0xc(%ebp),%eax
 810b02b:	88 45 fc             	mov    %al,-0x4(%ebp)
 810b02e:	8b 45 08             	mov    0x8(%ebp),%eax
 810b031:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 810b035:	88 50 04             	mov    %dl,0x4(%eax)
 810b038:	c9                   	leave
 810b039:	c3                   	ret

```

```c
// EventClassify::CEventEntity::set_event_flag @ 0x810b022

/* EventClassify::CEventEntity::set_event_flag(bool) */

void __thiscall EventClassify::CEventEntity::set_event_flag(CEventEntity *this,bool param_1)

{
  this[4] = (CEventEntity)param_1;
  return;
}

```

---

## set_event_record_type

```asm
// === 0810b05e EventClassify::CEventEntity::set_event_record_type  [0x0810b05e-0x810b06b] ===
 810b05e:	55                   	push   %ebp
 810b05f:	89 e5                	mov    %esp,%ebp
 810b061:	8b 45 08             	mov    0x8(%ebp),%eax
 810b064:	8b 55 0c             	mov    0xc(%ebp),%edx
 810b067:	89 50 18             	mov    %edx,0x18(%eax)
 810b06a:	5d                   	pop    %ebp
 810b06b:	c3                   	ret

```

```c
// EventClassify::CEventEntity::set_event_record_type @ 0x810b05e

/* EventClassify::CEventEntity::set_event_record_type(int) */

void __thiscall EventClassify::CEventEntity::set_event_record_type(CEventEntity *this,int param_1)

{
  *(int *)(this + 0x18) = param_1;
  return;
}

```

---

## set_event_start_time

```asm
// === 0810b078 EventClassify::CEventEntity::set_event_start_time  [0x0810b078-0x810b085] ===
 810b078:	55                   	push   %ebp
 810b079:	89 e5                	mov    %esp,%ebp
 810b07b:	8b 45 08             	mov    0x8(%ebp),%eax
 810b07e:	8b 55 0c             	mov    0xc(%ebp),%edx
 810b081:	89 50 0c             	mov    %edx,0xc(%eax)
 810b084:	5d                   	pop    %ebp
 810b085:	c3                   	ret

```

```c
// EventClassify::CEventEntity::set_event_start_time @ 0x810b078

/* EventClassify::CEventEntity::set_event_start_time(int) */

void __thiscall EventClassify::CEventEntity::set_event_start_time(CEventEntity *this,int param_1)

{
  *(int *)(this + 0xc) = param_1;
  return;
}

```

---

## ~CEventEntity

```asm
// === 0810afc4 EventClassify::CEventEntity::~CEventEntity  [0x0810afc4-0x810aff7] ===
 810afc4:	55                   	push   %ebp
 810afc5:	89 e5                	mov    %esp,%ebp
 810afc7:	83 ec 18             	sub    $0x18,%esp
 810afca:	8b 45 08             	mov    0x8(%ebp),%eax
 810afcd:	c7 00 48 d8 b4 08    	movl   $0x8b4d848,(%eax)
 810afd3:	8b 45 08             	mov    0x8(%ebp),%eax
 810afd6:	83 c0 08             	add    $0x8,%eax
 810afd9:	89 04 24             	mov    %eax,(%esp)
 810afdc:	e8 ff cb 5f 00       	call   8707be0 <_ZNSsD1Ev>
 810afe1:	b8 00 00 00 00       	mov    $0x0,%eax
 810afe6:	84 c0                	test   %al,%al
 810afe8:	74 0b                	je     810aff5 <_ZN13EventClassify12CEventEntityD1Ev+0x31>
 810afea:	8b 45 08             	mov    0x8(%ebp),%eax
 810afed:	89 04 24             	mov    %eax,(%esp)
 810aff0:	e8 fb 94 61 00       	call   87244f0 <_ZdlPv>
 810aff5:	c9                   	leave
 810aff6:	c3                   	ret
 810aff7:	90                   	nop

```

```c
// EventClassify::CEventEntity::~CEventEntity @ 0x810afc4

/* WARNING: Removing unreachable block (ram,0x0810afea) */
/* EventClassify::CEventEntity::~CEventEntity() */

void __thiscall EventClassify::CEventEntity::~CEventEntity(CEventEntity *this)

{
  *(undefined ***)this = &PTR__CEventEntity_08b4d848;
  std::string::~string((string *)(this + 8));
  return;
}

```

---

## ~CEventEntity_0810aff8

```asm
// === 0810aff8 EventClassify::CEventEntity::~CEventEntity  [0x0810aff8-0x810b015] ===
 810aff8:	55                   	push   %ebp
 810aff9:	89 e5                	mov    %esp,%ebp
 810affb:	83 ec 18             	sub    $0x18,%esp
 810affe:	8b 45 08             	mov    0x8(%ebp),%eax
 810b001:	89 04 24             	mov    %eax,(%esp)
 810b004:	e8 bb ff ff ff       	call   810afc4 <_ZN13EventClassify12CEventEntityD1Ev>
 810b009:	8b 45 08             	mov    0x8(%ebp),%eax
 810b00c:	89 04 24             	mov    %eax,(%esp)
 810b00f:	e8 dc 94 61 00       	call   87244f0 <_ZdlPv>
 810b014:	c9                   	leave
 810b015:	c3                   	ret

```

```c
// EventClassify::CEventEntity::~CEventEntity @ 0x810aff8

/* EventClassify::CEventEntity::~CEventEntity() */

void __thiscall EventClassify::CEventEntity::~CEventEntity(CEventEntity *this)

{
  ~CEventEntity(this);
  operator_delete(this);
  return;
}

```

