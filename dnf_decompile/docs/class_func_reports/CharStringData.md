# CharStringData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## create

```asm
// === 08ad694e CharStringData::create  [0x08ad694e-0x8ad697d] ===
 8ad694e:	55                   	push   %ebp
 8ad694f:	89 e5                	mov    %esp,%ebp
 8ad6951:	83 ec 28             	sub    $0x28,%esp
 8ad6954:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6957:	83 c0 01             	add    $0x1,%eax
 8ad695a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad695d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad6960:	89 04 24             	mov    %eax,(%esp)
 8ad6963:	e8 90 ff ff ff       	call   8ad68f8 <_ZN10StringData6createEi>
 8ad6968:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad696b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ad696f:	75 07                	jne    8ad6978 <_ZN14CharStringData6createEi+0x2a>
 8ad6971:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad6976:	eb 03                	jmp    8ad697b <_ZN14CharStringData6createEi+0x2d>
 8ad6978:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad697b:	c9                   	leave
 8ad697c:	c3                   	ret
 8ad697d:	90                   	nop

```

```c
// CharStringData::create @ 0x8ad694e

CharStringData * CharStringData::create(int32 length)

{
  StringData *pSVar1;
  
                    /* Unresolved local var: int32 size@[???]
                       Unresolved local var: CharStringData * data@[???] */
  pSVar1 = StringData::create(length + 1);
  if (pSVar1 == (StringData *)0x0) {
    pSVar1 = (StringData *)0x0;
  }
  return (CharStringData *)pSVar1;
}

```

---

## createTerminated

```asm
// === 08ad697e CharStringData::createTerminated  [0x08ad697e-0x8ad69a9] ===
 8ad697e:	55                   	push   %ebp
 8ad697f:	89 e5                	mov    %esp,%ebp
 8ad6981:	83 ec 28             	sub    $0x28,%esp
 8ad6984:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6987:	89 04 24             	mov    %eax,(%esp)
 8ad698a:	e8 bf ff ff ff       	call   8ad694e <_ZN14CharStringData6createEi>
 8ad698f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6992:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6995:	89 04 24             	mov    %eax,(%esp)
 8ad6998:	e8 a5 ff ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad699d:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad69a0:	01 d0                	add    %edx,%eax
 8ad69a2:	c6 00 00             	movb   $0x0,(%eax)
 8ad69a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad69a8:	c9                   	leave
 8ad69a9:	c3                   	ret

```

```c
// CharStringData::createTerminated @ 0x8ad697e

CharStringData * CharStringData::createTerminated(int32 length)

{
  CharStringData *this;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * data@[???] */
  this = create(length);
  pcVar1 = getBuffer(this);
  pcVar1[length] = '\0';
  return this;
}

```

---

## getBuffer

```asm
// === 08ad6942 CharStringData::getBuffer  [0x08ad6942-0x8ad694d] ===
 8ad6942:	55                   	push   %ebp
 8ad6943:	89 e5                	mov    %esp,%ebp
 8ad6945:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6948:	83 c0 08             	add    $0x8,%eax
 8ad694b:	5d                   	pop    %ebp
 8ad694c:	c3                   	ret
 8ad694d:	90                   	nop

```

```c
// CharStringData::getBuffer @ 0x8ad6942

/* DWARF original prototype: char * getBuffer(CharStringData * this) */

char * __thiscall CharStringData::getBuffer(CharStringData *this)

{
  return (char *)(this + 1);
}

```

---

## getLength

```asm
// === 08ad6934 CharStringData::getLength  [0x08ad6934-0x8ad6941] ===
 8ad6934:	55                   	push   %ebp
 8ad6935:	89 e5                	mov    %esp,%ebp
 8ad6937:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad693a:	8b 40 04             	mov    0x4(%eax),%eax
 8ad693d:	83 e8 01             	sub    $0x1,%eax
 8ad6940:	5d                   	pop    %ebp
 8ad6941:	c3                   	ret

```

```c
// CharStringData::getLength @ 0x8ad6934

/* DWARF original prototype: int32 getLength(CharStringData * this) */

int32 __thiscall CharStringData::getLength(CharStringData *this)

{
  return (this->super_StringData).size_ + -1;
}

```

