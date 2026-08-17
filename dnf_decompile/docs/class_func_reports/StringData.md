# StringData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## create

```asm
// === 08ad68f8 StringData::create  [0x08ad68f8-0x8ad6933] ===
 8ad68f8:	55                   	push   %ebp
 8ad68f9:	89 e5                	mov    %esp,%ebp
 8ad68fb:	83 ec 28             	sub    $0x28,%esp
 8ad68fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6901:	83 c0 08             	add    $0x8,%eax
 8ad6904:	89 04 24             	mov    %eax,(%esp)
 8ad6907:	e8 74 76 5a ff       	call   807df80 <malloc@plt>
 8ad690c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad690f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ad6913:	75 07                	jne    8ad691c <_ZN10StringData6createEi+0x24>
 8ad6915:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad691a:	eb 15                	jmp    8ad6931 <_ZN10StringData6createEi+0x39>
 8ad691c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad691f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad6925:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6928:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad692b:	89 50 04             	mov    %edx,0x4(%eax)
 8ad692e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6931:	c9                   	leave
 8ad6932:	c3                   	ret
 8ad6933:	90                   	nop

```

```c
// StringData::create @ 0x8ad68f8

StringData * StringData::create(int32 size)

{
  StringData *pSVar1;
  
                    /* Unresolved local var: StringData * data@[???] */
  pSVar1 = malloc(size + 8);
  if (pSVar1 == (StringData *)0x0) {
    pSVar1 = (StringData *)0x0;
  }
  else {
    pSVar1->refCount_ = 0;
    pSVar1->size_ = size;
  }
  return pSVar1;
}

```

---

## decRef

```asm
// === 08ad6890 StringData::decRef  [0x08ad6890-0x8ad68bf] ===
 8ad6890:	55                   	push   %ebp
 8ad6891:	89 e5                	mov    %esp,%ebp
 8ad6893:	83 ec 18             	sub    $0x18,%esp
 8ad6896:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad6899:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad689e:	89 c1                	mov    %eax,%ecx
 8ad68a0:	f7 d9                	neg    %ecx
 8ad68a2:	89 c8                	mov    %ecx,%eax
 8ad68a4:	f0 0f c1 02          	lock xadd %eax,(%edx)
 8ad68a8:	01 c8                	add    %ecx,%eax
 8ad68aa:	85 c0                	test   %eax,%eax
 8ad68ac:	0f 9e c0             	setle  %al
 8ad68af:	84 c0                	test   %al,%al
 8ad68b1:	74 0b                	je     8ad68be <_ZN10StringData6decRefEv+0x2e>
 8ad68b3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad68b6:	89 04 24             	mov    %eax,(%esp)
 8ad68b9:	e8 f2 74 5a ff       	call   807ddb0 <free@plt>
 8ad68be:	c9                   	leave
 8ad68bf:	c3                   	ret

```

```c
// StringData::decRef @ 0x8ad6890

/* DWARF original prototype: void decRef(StringData * this) */

void __thiscall StringData::decRef(StringData *this)

{
  int iVar1;
  
  LOCK();
  iVar1 = this->refCount_;
  this->refCount_ = this->refCount_ + -1;
  UNLOCK();
  if (iVar1 == 1 || iVar1 + -1 < 0) {
    free(this);
  }
  return;
}

```

---

## getBuffer

```asm
// === 08ad68ec StringData::getBuffer  [0x08ad68ec-0x8ad68f7] ===
 8ad68ec:	55                   	push   %ebp
 8ad68ed:	89 e5                	mov    %esp,%ebp
 8ad68ef:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad68f2:	83 c0 08             	add    $0x8,%eax
 8ad68f5:	5d                   	pop    %ebp
 8ad68f6:	c3                   	ret
 8ad68f7:	90                   	nop

```

```c
// StringData::getBuffer @ 0x8ad68ec

/* DWARF original prototype: byte * getBuffer(StringData * this) */

byte * __thiscall StringData::getBuffer(StringData *this)

{
  return (byte *)(this + 1);
}

```

---

## getSize

```asm
// === 08ad68e0 StringData::getSize  [0x08ad68e0-0x8ad68eb] ===
 8ad68e0:	55                   	push   %ebp
 8ad68e1:	89 e5                	mov    %esp,%ebp
 8ad68e3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad68e6:	8b 40 04             	mov    0x4(%eax),%eax
 8ad68e9:	5d                   	pop    %ebp
 8ad68ea:	c3                   	ret
 8ad68eb:	90                   	nop

```

```c
// StringData::getSize @ 0x8ad68e0

/* DWARF original prototype: int32 getSize(StringData * this) */

int32 __thiscall StringData::getSize(StringData *this)

{
  return this->size_;
}

```

---

## incRef

```asm
// === 08ad6884 StringData::incRef  [0x08ad6884-0x8ad688f] ===
 8ad6884:	55                   	push   %ebp
 8ad6885:	89 e5                	mov    %esp,%ebp
 8ad6887:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad688a:	f0 83 00 01          	lock addl $0x1,(%eax)
 8ad688e:	5d                   	pop    %ebp
 8ad688f:	c3                   	ret

```

```c
// StringData::incRef @ 0x8ad6884

/* DWARF original prototype: void incRef(StringData * this) */

void __thiscall StringData::incRef(StringData *this)

{
  LOCK();
  this->refCount_ = this->refCount_ + 1;
  UNLOCK();
  return;
}

```

---

## isShared

```asm
// === 08ad68d0 StringData::isShared  [0x08ad68d0-0x8ad68df] ===
 8ad68d0:	55                   	push   %ebp
 8ad68d1:	89 e5                	mov    %esp,%ebp
 8ad68d3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad68d6:	8b 00                	mov    (%eax),%eax
 8ad68d8:	83 f8 01             	cmp    $0x1,%eax
 8ad68db:	0f 9f c0             	setg   %al
 8ad68de:	5d                   	pop    %ebp
 8ad68df:	c3                   	ret

```

```c
// StringData::isShared @ 0x8ad68d0

/* DWARF original prototype: bool isShared(StringData * this) */

bool __thiscall StringData::isShared(StringData *this)

{
  return 1 < this->refCount_;
}

```

---

## isUnique

```asm
// === 08ad68c0 StringData::isUnique  [0x08ad68c0-0x8ad68cf] ===
 8ad68c0:	55                   	push   %ebp
 8ad68c1:	89 e5                	mov    %esp,%ebp
 8ad68c3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad68c6:	8b 00                	mov    (%eax),%eax
 8ad68c8:	83 f8 01             	cmp    $0x1,%eax
 8ad68cb:	0f 94 c0             	sete   %al
 8ad68ce:	5d                   	pop    %ebp
 8ad68cf:	c3                   	ret

```

```c
// StringData::isUnique @ 0x8ad68c0

/* DWARF original prototype: bool isUnique(StringData * this) */

bool __thiscall StringData::isUnique(StringData *this)

{
  return this->refCount_ == 1;
}

```

