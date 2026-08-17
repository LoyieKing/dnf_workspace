# CUserGlobalInfoHandle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CUserGlobalInfoHandle

```asm
// === 086ad820 CUserGlobalInfoHandle::CUserGlobalInfoHandle  [0x086ad820-0x86ad859] ===
 86ad820:	55                   	push   %ebp
 86ad821:	89 e5                	mov    %esp,%ebp
 86ad823:	83 ec 10             	sub    $0x10,%esp
 86ad826:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad829:	c7 80 00 00 01 00 01 	movl   $0x1,0x10000(%eax)
 86ad830:	00 00 00 
 86ad833:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86ad83a:	eb 0e                	jmp    86ad84a <_ZN21CUserGlobalInfoHandleC1Ev+0x2a>
 86ad83c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86ad83f:	8b 55 08             	mov    0x8(%ebp),%edx
 86ad842:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 86ad846:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86ad84a:	81 7d fc fe ff 00 00 	cmpl   $0xfffe,-0x4(%ebp)
 86ad851:	0f 9e c0             	setle  %al
 86ad854:	84 c0                	test   %al,%al
 86ad856:	75 e4                	jne    86ad83c <_ZN21CUserGlobalInfoHandleC1Ev+0x1c>
 86ad858:	c9                   	leave
 86ad859:	c3                   	ret

```

```c
// CUserGlobalInfoHandle::CUserGlobalInfoHandle @ 0x86ad820

/* CUserGlobalInfoHandle::CUserGlobalInfoHandle() */

void __thiscall CUserGlobalInfoHandle::CUserGlobalInfoHandle(CUserGlobalInfoHandle *this)

{
  int local_8;
  
  *(undefined4 *)(this + 0x10000) = 1;
  for (local_8 = 0; local_8 < 0xffff; local_8 = local_8 + 1) {
    this[local_8] = (CUserGlobalInfoHandle)0x0;
  }
  return;
}

```

---

## find_uniqueid

```asm
// === 086ad8c2 CUserGlobalInfoHandle::find_uniqueid  [0x086ad8c2-0x86ad90f] ===
 86ad8c2:	55                   	push   %ebp
 86ad8c3:	89 e5                	mov    %esp,%ebp
 86ad8c5:	83 ec 10             	sub    $0x10,%esp
 86ad8c8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad8cb:	8b 80 00 00 01 00    	mov    0x10000(%eax),%eax
 86ad8d1:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86ad8d4:	eb 24                	jmp    86ad8fa <_ZN21CUserGlobalInfoHandle13find_uniqueidEv+0x38>
 86ad8d6:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86ad8d9:	8b 55 08             	mov    0x8(%ebp),%edx
 86ad8dc:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 86ad8e0:	83 f0 01             	xor    $0x1,%eax
 86ad8e3:	84 c0                	test   %al,%al
 86ad8e5:	74 0f                	je     86ad8f6 <_ZN21CUserGlobalInfoHandle13find_uniqueidEv+0x34>
 86ad8e7:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86ad8ea:	8b 55 08             	mov    0x8(%ebp),%edx
 86ad8ed:	c6 04 02 01          	movb   $0x1,(%edx,%eax,1)
 86ad8f1:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86ad8f4:	eb 17                	jmp    86ad90d <_ZN21CUserGlobalInfoHandle13find_uniqueidEv+0x4b>
 86ad8f6:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86ad8fa:	81 7d fc fe ff 00 00 	cmpl   $0xfffe,-0x4(%ebp)
 86ad901:	0f 9e c0             	setle  %al
 86ad904:	84 c0                	test   %al,%al
 86ad906:	75 ce                	jne    86ad8d6 <_ZN21CUserGlobalInfoHandle13find_uniqueidEv+0x14>
 86ad908:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86ad90d:	c9                   	leave
 86ad90e:	c3                   	ret
 86ad90f:	90                   	nop

```

```c
// CUserGlobalInfoHandle::find_uniqueid @ 0x86ad8c2

/* CUserGlobalInfoHandle::find_uniqueid() */

int __thiscall CUserGlobalInfoHandle::find_uniqueid(CUserGlobalInfoHandle *this)

{
  int local_8;
  
  local_8 = *(int *)(this + 0x10000);
  while( true ) {
    if (0xfffe < local_8) {
      return -1;
    }
    if (this[local_8] != (CUserGlobalInfoHandle)0x1) break;
    local_8 = local_8 + 1;
  }
  this[local_8] = (CUserGlobalInfoHandle)0x1;
  return local_8;
}

```

---

## get_uniqueid

```asm
// === 086ad910 CUserGlobalInfoHandle::get_uniqueid  [0x086ad910-0x86ad95d] ===
 86ad910:	55                   	push   %ebp
 86ad911:	89 e5                	mov    %esp,%ebp
 86ad913:	83 ec 14             	sub    $0x14,%esp
 86ad916:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad919:	89 04 24             	mov    %eax,(%esp)
 86ad91c:	e8 a1 ff ff ff       	call   86ad8c2 <_ZN21CUserGlobalInfoHandle13find_uniqueidEv>
 86ad921:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86ad924:	83 7d fc ff          	cmpl   $0xffffffff,-0x4(%ebp)
 86ad928:	0f 94 c0             	sete   %al
 86ad92b:	84 c0                	test   %al,%al
 86ad92d:	74 1b                	je     86ad94a <_ZN21CUserGlobalInfoHandle12get_uniqueidEv+0x3a>
 86ad92f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad932:	c7 80 00 00 01 00 01 	movl   $0x1,0x10000(%eax)
 86ad939:	00 00 00 
 86ad93c:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad93f:	89 04 24             	mov    %eax,(%esp)
 86ad942:	e8 7b ff ff ff       	call   86ad8c2 <_ZN21CUserGlobalInfoHandle13find_uniqueidEv>
 86ad947:	89 45 fc             	mov    %eax,-0x4(%ebp)
 86ad94a:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86ad94d:	8d 50 01             	lea    0x1(%eax),%edx
 86ad950:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad953:	89 90 00 00 01 00    	mov    %edx,0x10000(%eax)
 86ad959:	8b 45 fc             	mov    -0x4(%ebp),%eax
 86ad95c:	c9                   	leave
 86ad95d:	c3                   	ret

```

```c
// CUserGlobalInfoHandle::get_uniqueid @ 0x86ad910

/* CUserGlobalInfoHandle::get_uniqueid() */

int __thiscall CUserGlobalInfoHandle::get_uniqueid(CUserGlobalInfoHandle *this)

{
  int local_8;
  
  local_8 = find_uniqueid(this);
  if (local_8 == -1) {
    *(undefined4 *)(this + 0x10000) = 1;
    local_8 = find_uniqueid(this);
  }
  *(int *)(this + 0x10000) = local_8 + 1;
  return local_8;
}

```

---

## reset_uniqueid_flag

```asm
// === 086ad95e CUserGlobalInfoHandle::reset_uniqueid_flag  [0x086ad95e-0x86ad977] ===
 86ad95e:	55                   	push   %ebp
 86ad95f:	89 e5                	mov    %esp,%ebp
 86ad961:	83 ec 04             	sub    $0x4,%esp
 86ad964:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ad967:	66 89 45 fc          	mov    %ax,-0x4(%ebp)
 86ad96b:	0f b7 45 fc          	movzwl -0x4(%ebp),%eax
 86ad96f:	8b 55 08             	mov    0x8(%ebp),%edx
 86ad972:	c6 04 02 00          	movb   $0x0,(%edx,%eax,1)
 86ad976:	c9                   	leave
 86ad977:	c3                   	ret

```

```c
// CUserGlobalInfoHandle::reset_uniqueid_flag @ 0x86ad95e

/* CUserGlobalInfoHandle::reset_uniqueid_flag(unsigned short) */

void __thiscall
CUserGlobalInfoHandle::reset_uniqueid_flag(CUserGlobalInfoHandle *this,ushort param_1)

{
  this[param_1] = (CUserGlobalInfoHandle)0x0;
  return;
}

```

---

## ~CUserGlobalInfoHandle

```asm
// === 086ad85a CUserGlobalInfoHandle::~CUserGlobalInfoHandle  [0x086ad85a-0x86ad85e] ===
 86ad85a:	55                   	push   %ebp
 86ad85b:	89 e5                	mov    %esp,%ebp
 86ad85d:	5d                   	pop    %ebp
 86ad85e:	c3                   	ret

```

```c
// CUserGlobalInfoHandle::~CUserGlobalInfoHandle @ 0x86ad85a

/* CUserGlobalInfoHandle::~CUserGlobalInfoHandle() */

void __thiscall CUserGlobalInfoHandle::~CUserGlobalInfoHandle(CUserGlobalInfoHandle *this)

{
  return;
}

```

