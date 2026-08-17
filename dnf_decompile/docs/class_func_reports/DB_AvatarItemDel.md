# DB_AvatarItemDel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## DB_AvatarItemDel

```asm
// === 083ffc42 DB_AvatarItemDel::DB_AvatarItemDel  [0x083ffc42-0x83ffc5d] ===
 83ffc42:	55                   	push   %ebp
 83ffc43:	89 e5                	mov    %esp,%ebp
 83ffc45:	83 ec 18             	sub    $0x18,%esp
 83ffc48:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffc4b:	89 04 24             	mov    %eax,(%esp)
 83ffc4e:	e8 53 db 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 83ffc53:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffc56:	c7 00 f0 fc c5 08    	movl   $0x8c5fcf0,(%eax)
 83ffc5c:	c9                   	leave
 83ffc5d:	c3                   	ret

```

```c
// DB_AvatarItemDel::DB_AvatarItemDel @ 0x83ffc42

/* DB_AvatarItemDel::DB_AvatarItemDel() */

void __thiscall DB_AvatarItemDel::DB_AvatarItemDel(DB_AvatarItemDel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fcf0;
  return;
}

```

---

## DelAvatarItem

```asm
// === 083ffd46 DB_AvatarItemDel::DelAvatarItem  [0x083ffd46-0x83ffd4f] ===
 83ffd46:	55                   	push   %ebp
 83ffd47:	89 e5                	mov    %esp,%ebp
 83ffd49:	b8 01 00 00 00       	mov    $0x1,%eax
 83ffd4e:	5d                   	pop    %ebp
 83ffd4f:	c3                   	ret

```

```c
// DB_AvatarItemDel::DelAvatarItem @ 0x83ffd46

/* DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE&) */

undefined4 DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE *param_1)

{
  return 1;
}

```

---

## dispatch

```asm
// === 083ffcac DB_AvatarItemDel::dispatch  [0x083ffcac-0x83ffd45] ===
 83ffcac:	55                   	push   %ebp
 83ffcad:	89 e5                	mov    %esp,%ebp
 83ffcaf:	81 ec 28 07 00 00    	sub    $0x728,%esp
 83ffcb5:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffcb8:	8b 55 14             	mov    0x14(%ebp),%edx
 83ffcbb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 83ffcbf:	8b 55 10             	mov    0x10(%ebp),%edx
 83ffcc2:	89 54 24 08          	mov    %edx,0x8(%esp)
 83ffcc6:	8b 55 0c             	mov    0xc(%ebp),%edx
 83ffcc9:	89 54 24 04          	mov    %edx,0x4(%esp)
 83ffccd:	89 04 24             	mov    %eax,(%esp)
 83ffcd0:	e8 a7 c2 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 83ffcd5:	83 f0 01             	xor    $0x1,%eax
 83ffcd8:	84 c0                	test   %al,%al
 83ffcda:	74 07                	je     83ffce3 <_ZN16DB_AvatarItemDel8dispatchEiiP6Stream+0x37>
 83ffcdc:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffce1:	eb 61                	jmp    83ffd44 <_ZN16DB_AvatarItemDel8dispatchEiiP6Stream+0x98>
 83ffce3:	c7 44 24 08 0c 07 00 	movl   $0x70c,0x8(%esp)
 83ffcea:	00 
 83ffceb:	8d 85 eb f8 ff ff    	lea    -0x715(%ebp),%eax
 83ffcf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ffcf5:	8b 45 14             	mov    0x14(%ebp),%eax
 83ffcf8:	89 04 24             	mov    %eax,(%esp)
 83ffcfb:	e8 fa ca 21 00       	call   861c7fa <_ZN6Stream10get_binaryEPvi>
 83ffd00:	88 45 f7             	mov    %al,-0x9(%ebp)
 83ffd03:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83ffd07:	83 f0 01             	xor    $0x1,%eax
 83ffd0a:	84 c0                	test   %al,%al
 83ffd0c:	74 07                	je     83ffd15 <_ZN16DB_AvatarItemDel8dispatchEiiP6Stream+0x69>
 83ffd0e:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffd13:	eb 2f                	jmp    83ffd44 <_ZN16DB_AvatarItemDel8dispatchEiiP6Stream+0x98>
 83ffd15:	8d 85 eb f8 ff ff    	lea    -0x715(%ebp),%eax
 83ffd1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 83ffd1f:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffd22:	89 04 24             	mov    %eax,(%esp)
 83ffd25:	e8 1c 00 00 00       	call   83ffd46 <_ZN16DB_AvatarItemDel13DelAvatarItemER17SIG_AVATAR_DELETE>
 83ffd2a:	88 45 f7             	mov    %al,-0x9(%ebp)
 83ffd2d:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 83ffd31:	83 f0 01             	xor    $0x1,%eax
 83ffd34:	84 c0                	test   %al,%al
 83ffd36:	74 07                	je     83ffd3f <_ZN16DB_AvatarItemDel8dispatchEiiP6Stream+0x93>
 83ffd38:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffd3d:	eb 05                	jmp    83ffd44 <_ZN16DB_AvatarItemDel8dispatchEiiP6Stream+0x98>
 83ffd3f:	b8 01 00 00 00       	mov    $0x1,%eax
 83ffd44:	c9                   	leave
 83ffd45:	c3                   	ret

```

```c
// DB_AvatarItemDel::dispatch @ 0x83ffcac

/* DB_AvatarItemDel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AvatarItemDel::dispatch(DB_AvatarItemDel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_719 [1804];
  char local_d;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_d = Stream::get_binary(param_3,local_719,0x70c);
    if (local_d == '\x01') {
      cVar1 = DelAvatarItem((SIG_AVATAR_DELETE *)this);
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

## ~DB_AvatarItemDel

```asm
// === 083ffc5e DB_AvatarItemDel::~DB_AvatarItemDel  [0x083ffc5e-0x83ffc8d] ===
 83ffc5e:	55                   	push   %ebp
 83ffc5f:	89 e5                	mov    %esp,%ebp
 83ffc61:	83 ec 18             	sub    $0x18,%esp
 83ffc64:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffc67:	c7 00 f0 fc c5 08    	movl   $0x8c5fcf0,(%eax)
 83ffc6d:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffc70:	89 04 24             	mov    %eax,(%esp)
 83ffc73:	e8 00 27 ce ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 83ffc78:	b8 00 00 00 00       	mov    $0x0,%eax
 83ffc7d:	84 c0                	test   %al,%al
 83ffc7f:	74 0b                	je     83ffc8c <_ZN16DB_AvatarItemDelD1Ev+0x2e>
 83ffc81:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffc84:	89 04 24             	mov    %eax,(%esp)
 83ffc87:	e8 64 48 32 00       	call   87244f0 <_ZdlPv>
 83ffc8c:	c9                   	leave
 83ffc8d:	c3                   	ret

```

```c
// DB_AvatarItemDel::~DB_AvatarItemDel @ 0x83ffc5e

/* WARNING: Removing unreachable block (ram,0x083ffc81) */
/* DB_AvatarItemDel::~DB_AvatarItemDel() */

void __thiscall DB_AvatarItemDel::~DB_AvatarItemDel(DB_AvatarItemDel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fcf0;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_AvatarItemDel_083ffc8e

```asm
// === 083ffc8e DB_AvatarItemDel::~DB_AvatarItemDel  [0x083ffc8e-0x83ffcab] ===
 83ffc8e:	55                   	push   %ebp
 83ffc8f:	89 e5                	mov    %esp,%ebp
 83ffc91:	83 ec 18             	sub    $0x18,%esp
 83ffc94:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffc97:	89 04 24             	mov    %eax,(%esp)
 83ffc9a:	e8 bf ff ff ff       	call   83ffc5e <_ZN16DB_AvatarItemDelD1Ev>
 83ffc9f:	8b 45 08             	mov    0x8(%ebp),%eax
 83ffca2:	89 04 24             	mov    %eax,(%esp)
 83ffca5:	e8 46 48 32 00       	call   87244f0 <_ZdlPv>
 83ffcaa:	c9                   	leave
 83ffcab:	c3                   	ret

```

```c
// DB_AvatarItemDel::~DB_AvatarItemDel @ 0x83ffc8e

/* DB_AvatarItemDel::~DB_AvatarItemDel() */

void __thiscall DB_AvatarItemDel::~DB_AvatarItemDel(DB_AvatarItemDel *this)

{
  ~DB_AvatarItemDel(this);
  operator_delete(this);
  return;
}

```

