# IChecksum

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## IChecksum

```asm
// === 0809de70 IChecksum::IChecksum  [0x0809de70-0x809de87] ===
 809de70:	55                   	push   %ebp
 809de71:	89 e5                	mov    %esp,%ebp
 809de73:	8b 45 08             	mov    0x8(%ebp),%eax
 809de76:	c7 00 c8 3b b1 08    	movl   $0x8b13bc8,(%eax)
 809de7c:	8b 45 08             	mov    0x8(%ebp),%eax
 809de7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 809de82:	89 50 04             	mov    %edx,0x4(%eax)
 809de85:	5d                   	pop    %ebp
 809de86:	c3                   	ret
 809de87:	90                   	nop

```

```c
// IChecksum::IChecksum @ 0x809de70

/* IChecksum::IChecksum(CRYPTO_CHECKSUM_TYPE) */

void __thiscall IChecksum::IChecksum(IChecksum *this,undefined4 param_2)

{
  *(undefined ***)this = &PTR__IChecksum_08b13bc8;
  *(undefined4 *)(this + 4) = param_2;
  return;
}

```

---

## IChecksum_0809decc

```asm
// === 0809decc IChecksum::IChecksum  [0x0809decc-0x809dee5] ===
 809decc:	55                   	push   %ebp
 809decd:	89 e5                	mov    %esp,%ebp
 809decf:	8b 45 08             	mov    0x8(%ebp),%eax
 809ded2:	c7 00 c8 3b b1 08    	movl   $0x8b13bc8,(%eax)
 809ded8:	8b 45 0c             	mov    0xc(%ebp),%eax
 809dedb:	8b 50 04             	mov    0x4(%eax),%edx
 809dede:	8b 45 08             	mov    0x8(%ebp),%eax
 809dee1:	89 50 04             	mov    %edx,0x4(%eax)
 809dee4:	5d                   	pop    %ebp
 809dee5:	c3                   	ret

```

```c
// IChecksum::IChecksum @ 0x809decc

/* IChecksum::IChecksum(IChecksum const&) */

void __thiscall IChecksum::IChecksum(IChecksum *this,IChecksum *param_1)

{
  *(undefined ***)this = &PTR__IChecksum_08b13bc8;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}

```

---

## operator=

```asm
// === 0809dee6 IChecksum::operator=  [0x0809dee6-0x809deef] ===
 809dee6:	55                   	push   %ebp
 809dee7:	89 e5                	mov    %esp,%ebp
 809dee9:	8b 45 08             	mov    0x8(%ebp),%eax
 809deec:	5d                   	pop    %ebp
 809deed:	c3                   	ret
 809deee:	90                   	nop
 809deef:	90                   	nop

```

```c
// IChecksum::operator= @ 0x809dee6

/* IChecksum::TEMPNAMEPLACEHOLDERVALUE(IChecksum const&) */

IChecksum * __thiscall IChecksum::operator=(IChecksum *this,IChecksum *param_1)

{
  return this;
}

```

---

## ~IChecksum

```asm
// === 0809de88 IChecksum::~IChecksum  [0x0809de88-0x809dead] ===
 809de88:	55                   	push   %ebp
 809de89:	89 e5                	mov    %esp,%ebp
 809de8b:	83 ec 18             	sub    $0x18,%esp
 809de8e:	8b 45 08             	mov    0x8(%ebp),%eax
 809de91:	c7 00 c8 3b b1 08    	movl   $0x8b13bc8,(%eax)
 809de97:	b8 00 00 00 00       	mov    $0x0,%eax
 809de9c:	84 c0                	test   %al,%al
 809de9e:	74 0b                	je     809deab <_ZN9IChecksumD1Ev+0x23>
 809dea0:	8b 45 08             	mov    0x8(%ebp),%eax
 809dea3:	89 04 24             	mov    %eax,(%esp)
 809dea6:	e8 45 66 68 00       	call   87244f0 <_ZdlPv>
 809deab:	c9                   	leave
 809deac:	c3                   	ret
 809dead:	90                   	nop

```

```c
// IChecksum::~IChecksum @ 0x809de88

/* WARNING: Removing unreachable block (ram,0x0809dea0) */
/* IChecksum::~IChecksum() */

void __thiscall IChecksum::~IChecksum(IChecksum *this)

{
  *(undefined ***)this = &PTR__IChecksum_08b13bc8;
  return;
}

```

---

## ~IChecksum_0809deae

```asm
// === 0809deae IChecksum::~IChecksum  [0x0809deae-0x809decb] ===
 809deae:	55                   	push   %ebp
 809deaf:	89 e5                	mov    %esp,%ebp
 809deb1:	83 ec 18             	sub    $0x18,%esp
 809deb4:	8b 45 08             	mov    0x8(%ebp),%eax
 809deb7:	89 04 24             	mov    %eax,(%esp)
 809deba:	e8 c9 ff ff ff       	call   809de88 <_ZN9IChecksumD1Ev>
 809debf:	8b 45 08             	mov    0x8(%ebp),%eax
 809dec2:	89 04 24             	mov    %eax,(%esp)
 809dec5:	e8 26 66 68 00       	call   87244f0 <_ZdlPv>
 809deca:	c9                   	leave
 809decb:	c3                   	ret

```

```c
// IChecksum::~IChecksum @ 0x809deae

/* IChecksum::~IChecksum() */

void __thiscall IChecksum::~IChecksum(IChecksum *this)

{
  ~IChecksum(this);
  operator_delete(this);
  return;
}

```

