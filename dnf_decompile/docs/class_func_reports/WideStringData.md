# WideStringData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## create

```asm
// === 08ad999a WideStringData::create  [0x08ad999a-0x8ad99cb] ===
 8ad999a:	55                   	push   %ebp
 8ad999b:	89 e5                	mov    %esp,%ebp
 8ad999d:	83 ec 28             	sub    $0x28,%esp
 8ad99a0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad99a3:	83 c0 01             	add    $0x1,%eax
 8ad99a6:	c1 e0 02             	shl    $0x2,%eax
 8ad99a9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad99ac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad99af:	89 04 24             	mov    %eax,(%esp)
 8ad99b2:	e8 41 cf ff ff       	call   8ad68f8 <_ZN10StringData6createEi>
 8ad99b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad99ba:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ad99be:	75 07                	jne    8ad99c7 <_ZN14WideStringData6createEi+0x2d>
 8ad99c0:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad99c5:	eb 03                	jmp    8ad99ca <_ZN14WideStringData6createEi+0x30>
 8ad99c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad99ca:	c9                   	leave
 8ad99cb:	c3                   	ret

```

```c
// WideStringData::create @ 0x8ad999a

WideStringData * WideStringData::create(int32 length)

{
  StringData *pSVar1;
  
                    /* Unresolved local var: int32 size@[???]
                       Unresolved local var: WideStringData * data@[???] */
  pSVar1 = StringData::create((length + 1) * 4);
  if (pSVar1 == (StringData *)0x0) {
    pSVar1 = (StringData *)0x0;
  }
  return (WideStringData *)pSVar1;
}

```

---

## createTerminated

```asm
// === 08ad99cc WideStringData::createTerminated  [0x08ad99cc-0x8ad99fd] ===
 8ad99cc:	55                   	push   %ebp
 8ad99cd:	89 e5                	mov    %esp,%ebp
 8ad99cf:	83 ec 28             	sub    $0x28,%esp
 8ad99d2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad99d5:	89 04 24             	mov    %eax,(%esp)
 8ad99d8:	e8 bd ff ff ff       	call   8ad999a <_ZN14WideStringData6createEi>
 8ad99dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad99e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad99e3:	89 04 24             	mov    %eax,(%esp)
 8ad99e6:	e8 a3 ff ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad99eb:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad99ee:	c1 e2 02             	shl    $0x2,%edx
 8ad99f1:	01 d0                	add    %edx,%eax
 8ad99f3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ad99f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad99fc:	c9                   	leave
 8ad99fd:	c3                   	ret

```

```c
// WideStringData::createTerminated @ 0x8ad99cc

WideStringData * WideStringData::createTerminated(int32 length)

{
  WideStringData *this;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  this = create(length);
  pwVar1 = getBuffer(this);
  pwVar1[length] = 0;
  return this;
}

```

---

## getBuffer

```asm
// === 08ad998e WideStringData::getBuffer  [0x08ad998e-0x8ad9999] ===
 8ad998e:	55                   	push   %ebp
 8ad998f:	89 e5                	mov    %esp,%ebp
 8ad9991:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9994:	83 c0 08             	add    $0x8,%eax
 8ad9997:	5d                   	pop    %ebp
 8ad9998:	c3                   	ret
 8ad9999:	90                   	nop

```

```c
// WideStringData::getBuffer @ 0x8ad998e

/* DWARF original prototype: wchar * getBuffer(WideStringData * this) */

wchar * __thiscall WideStringData::getBuffer(WideStringData *this)

{
  return (wchar *)(this + 1);
}

```

---

## getLength

```asm
// === 08ad997c WideStringData::getLength  [0x08ad997c-0x8ad998d] ===
 8ad997c:	55                   	push   %ebp
 8ad997d:	89 e5                	mov    %esp,%ebp
 8ad997f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9982:	8b 40 04             	mov    0x4(%eax),%eax
 8ad9985:	c1 e8 02             	shr    $0x2,%eax
 8ad9988:	83 e8 01             	sub    $0x1,%eax
 8ad998b:	5d                   	pop    %ebp
 8ad998c:	c3                   	ret
 8ad998d:	90                   	nop

```

```c
// WideStringData::getLength @ 0x8ad997c

/* DWARF original prototype: int32 getLength(WideStringData * this) */

int32 __thiscall WideStringData::getLength(WideStringData *this)

{
  return ((uint)(this->super_StringData).size_ >> 2) - 1;
}

```

