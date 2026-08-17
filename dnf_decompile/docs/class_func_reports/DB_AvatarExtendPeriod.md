# DB_AvatarExtendPeriod

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_AvatarExtendPeriod

```asm
// === 083ffab8 DB_AvatarExtendPeriod::DB_AvatarExtendPeriod  [0x083ffab8-0x83ffad3] ===
 83ffab8:	55                   	push   %ebp
 83ffab9:	89 e5                	mov    %esp,%ebp
 83ffabb:	83 ec 18             	sub    $0x18,%esp
 83ffabe:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffac1:	89 04 24             	mov    %eax,(%esp)
 83ffac4:	e8 dd dc 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 83ffac9:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffacc:	c7 00 08 fd c5 08    	movl   $0x8c5fd08,(%eax)
 83ffad2:	c9                   	leave
 83ffad3:	c3                   	ret

```

```c
// DB_AvatarExtendPeriod::DB_AvatarExtendPeriod @ 0x83ffab8

/* DB_AvatarExtendPeriod::DB_AvatarExtendPeriod() */

void __thiscall DB_AvatarExtendPeriod::DB_AvatarExtendPeriod(DB_AvatarExtendPeriod *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fd08;
  return;
}

```

---

## ExtendPeriod

```asm
// === 083ffbb4 DB_AvatarExtendPeriod::ExtendPeriod  [0x083ffbb4-0x83ffc41] ===
 83ffbb4:	55                   	push   %ebp
 83ffbb5:	89 e5                	mov    %esp,%ebp
 83ffbb7:	83 ec 38             	sub    $0x38,%esp
 83ffbba:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83ffbbf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83ffbc6:	00 
 83ffbc7:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83ffbce:	00 
 83ffbcf:	89 04 24             	mov    %eax,(%esp)
 83ffbd2:	e8 67 56 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83ffbd7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83ffbda:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ffbdd:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 83ffbe1:	0f b6 c8             	movzbl %al,%ecx
 83ffbe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ffbe7:	8b 10                	mov    (%eax),%edx
 83ffbe9:	8b 45 0c             	mov    0xc(%ebp),%eax
 83ffbec:	0f b7 40 05          	movzwl 0x5(%eax),%eax
 83ffbf0:	0f b7 c0             	movzwl %ax,%eax
 83ffbf3:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 83ffbf7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83ffbfb:	89 44 24 08          	mov    %eax,0x8(%esp)
 83ffbff:	c7 44 24 04 54 68 c3 	movl   $0x8c36854,0x4(%esp)
 83ffc06:	08 
 83ffc07:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ffc0a:	89 04 24             	mov    %eax,(%esp)
 83ffc0d:	e8 ae 45 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83ffc12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83ffc19:	00 
 83ffc1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83ffc1d:	89 04 24             	mov    %eax,(%esp)
 83ffc20:	e8 01 47 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83ffc25:	88 45 f3             	mov    %al,-0xd(%ebp)
 83ffc28:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 83ffc2c:	83 f0 01             	xor    $0x1,%eax
 83ffc2f:	84 c0                	test   %al,%al
 83ffc31:	74 07                	je     83ffc3a <_ZN21DB_AvatarExtendPeriod12ExtendPeriodER16SIG_AVATAR_RENEW+0x86>
 83ffc33:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffc38:	eb 05                	jmp    83ffc3f <_ZN21DB_AvatarExtendPeriod12ExtendPeriodER16SIG_AVATAR_RENEW+0x8b>
 83ffc3a:	b8 01 00 00 00       	mov    $0x1,%eax
 83ffc3f:	c9                   	leave
 83ffc40:	c3                   	ret
 83ffc41:	90                   	nop

```

```c
// DB_AvatarExtendPeriod::ExtendPeriod @ 0x83ffbb4

/* DB_AvatarExtendPeriod::ExtendPeriod(SIG_AVATAR_RENEW&) */

bool __thiscall
DB_AvatarExtendPeriod::ExtendPeriod(DB_AvatarExtendPeriod *this,SIG_AVATAR_RENEW *param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(this_00,
                   "upDate user_items set expire_date = adddate(expire_date, interval %d day) where charac_no=%u and slot=%d"
                   ,(uint)*(ushort *)(param_1 + 5),*(undefined4 *)param_1,(uint)(byte)param_1[4]);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}

```

---

## dispatch

```asm
// === 083ffb22 DB_AvatarExtendPeriod::dispatch  [0x083ffb22-0x83ffbb3] ===
 83ffb22:	55                   	push   %ebp
 83ffb23:	89 e5                	mov    %esp,%ebp
 83ffb25:	83 ec 28             	sub    $0x28,%esp
 83ffb28:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffb2b:	8b 55 14             	mov    0x14(%ebp),%edx
 83ffb2e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83ffb32:	8b 55 10             	mov    0x10(%ebp),%edx
 83ffb35:	89 54 24 08          	mov    %edx,0x8(%esp)
 83ffb39:	8b 55 0c             	mov    0xc(%ebp),%edx
 83ffb3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ffb40:	89 04 24             	mov    %eax,(%esp)
 83ffb43:	e8 34 c4 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 83ffb48:	83 f0 01             	xor    $0x1,%eax
 83ffb4b:	84 c0                	test   %al,%al
 83ffb4d:	74 07                	je     83ffb56 <_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream+0x34>
 83ffb4f:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffb54:	eb 5b                	jmp    83ffbb1 <_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream+0x8f>
 83ffb56:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 83ffb5d:	00 
 83ffb5e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83ffb61:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ffb65:	8b 45 14             	mov    0x14(%ebp),%eax
 83ffb68:	89 04 24             	mov    %eax,(%esp)
 83ffb6b:	e8 8a cc 21 00       	call   861c7fa <_ZN6Stream10get_binaryEPvi>
 83ffb70:	88 45 f7             	mov    %al,-0x9(%ebp)
 83ffb73:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83ffb77:	83 f0 01             	xor    $0x1,%eax
 83ffb7a:	84 c0                	test   %al,%al
 83ffb7c:	74 07                	je     83ffb85 <_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream+0x63>
 83ffb7e:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffb83:	eb 2c                	jmp    83ffbb1 <_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream+0x8f>
 83ffb85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83ffb88:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ffb8c:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffb8f:	89 04 24             	mov    %eax,(%esp)
 83ffb92:	e8 1d 00 00 00       	call   83ffbb4 <_ZN21DB_AvatarExtendPeriod12ExtendPeriodER16SIG_AVATAR_RENEW>
 83ffb97:	88 45 f7             	mov    %al,-0x9(%ebp)
 83ffb9a:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83ffb9e:	83 f0 01             	xor    $0x1,%eax
 83ffba1:	84 c0                	test   %al,%al
 83ffba3:	74 07                	je     83ffbac <_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream+0x8a>
 83ffba5:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffbaa:	eb 05                	jmp    83ffbb1 <_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream+0x8f>
 83ffbac:	b8 01 00 00 00       	mov    $0x1,%eax
 83ffbb1:	c9                   	leave
 83ffbb2:	c3                   	ret
 83ffbb3:	90                   	nop

```

```c
// DB_AvatarExtendPeriod::dispatch @ 0x83ffb22

/* DB_AvatarExtendPeriod::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AvatarExtendPeriod::dispatch(DB_AvatarExtendPeriod *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_AVATAR_RENEW local_14 [7];
  char local_d;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_d = Stream::get_binary(param_3,local_14,7);
    if (local_d == '\x01') {
      cVar1 = ExtendPeriod(this,local_14);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~DB_AvatarExtendPeriod

```asm
// === 083ffad4 DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod  [0x083ffad4-0x83ffb03] ===
 83ffad4:	55                   	push   %ebp
 83ffad5:	89 e5                	mov    %esp,%ebp
 83ffad7:	83 ec 18             	sub    $0x18,%esp
 83ffada:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffadd:	c7 00 08 fd c5 08    	movl   $0x8c5fd08,(%eax)
 83ffae3:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffae6:	89 04 24             	mov    %eax,(%esp)
 83ffae9:	e8 8a 28 ce ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 83ffaee:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffaf3:	84 c0                	test   %al,%al
 83ffaf5:	74 0b                	je     83ffb02 <_ZN21DB_AvatarExtendPeriodD1Ev+0x2e>
 83ffaf7:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffafa:	89 04 24             	mov    %eax,(%esp)
 83ffafd:	e8 ee 49 32 00       	call   87244f0 <_ZdlPv>
 83ffb02:	c9                   	leave
 83ffb03:	c3                   	ret

```

```c
// DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod @ 0x83ffad4

/* WARNING: Removing unreachable block (ram,0x083ffaf7) */
/* DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod() */

void __thiscall DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod(DB_AvatarExtendPeriod *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fd08;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_AvatarExtendPeriod_083ffb04

```asm
// === 083ffb04 DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod  [0x083ffb04-0x83ffb21] ===
 83ffb04:	55                   	push   %ebp
 83ffb05:	89 e5                	mov    %esp,%ebp
 83ffb07:	83 ec 18             	sub    $0x18,%esp
 83ffb0a:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffb0d:	89 04 24             	mov    %eax,(%esp)
 83ffb10:	e8 bf ff ff ff       	call   83ffad4 <_ZN21DB_AvatarExtendPeriodD1Ev>
 83ffb15:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffb18:	89 04 24             	mov    %eax,(%esp)
 83ffb1b:	e8 d0 49 32 00       	call   87244f0 <_ZdlPv>
 83ffb20:	c9                   	leave
 83ffb21:	c3                   	ret

```

```c
// DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod @ 0x83ffb04

/* DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod() */

void __thiscall DB_AvatarExtendPeriod::~DB_AvatarExtendPeriod(DB_AvatarExtendPeriod *this)

{
  ~DB_AvatarExtendPeriod(this);
  operator_delete(this);
  return;
}

```

