# XorRand4

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## XorRand4

```asm
// === 08adfa90 XorRand4::XorRand4  [0x08adfa90-0x8adfa9d] ===
 8adfa90:	55                   	push   %ebp
 8adfa91:	89 e5                	mov    %esp,%ebp
 8adfa93:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfa96:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8adfa9c:	5d                   	pop    %ebp
 8adfa9d:	c3                   	ret

```

```c
// XorRand4::XorRand4 @ 0x8adfa90

/* DWARF original prototype: void XorRand4(XorRand4 * this) */

void __thiscall XorRand4::XorRand4(XorRand4 *this)

{
  this->m_counter = 0;
  return;
}

```

---

## XorRand4_08adfa9e

```asm
// === 08adfa9e XorRand4::XorRand4  [0x08adfa9e-0x8adfaab] ===
 8adfa9e:	55                   	push   %ebp
 8adfa9f:	89 e5                	mov    %esp,%ebp
 8adfaa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfaa4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adfaa7:	89 10                	mov    %edx,(%eax)
 8adfaa9:	5d                   	pop    %ebp
 8adfaaa:	c3                   	ret
 8adfaab:	90                   	nop

```

```c
// XorRand4::XorRand4 @ 0x8adfa9e

/* DWARF original prototype: void XorRand4(XorRand4 * this, uint32 seed) */

void __thiscall XorRand4::XorRand4(XorRand4 *this,uint32 seed)

{
  this->m_counter = seed;
  return;
}

```

---

## getInt32

```asm
// === 08adfaba XorRand4::getInt32  [0x08adfaba-0x8adfacd] ===
 8adfaba:	55                   	push   %ebp
 8adfabb:	89 e5                	mov    %esp,%ebp
 8adfabd:	83 ec 18             	sub    $0x18,%esp
 8adfac0:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfac3:	89 04 24             	mov    %eax,(%esp)
 8adfac6:	e8 03 00 00 00       	call   8adface <_ZN8XorRand49getUInt32Ev>
 8adfacb:	c9                   	leave
 8adfacc:	c3                   	ret
 8adfacd:	90                   	nop

```

```c
// XorRand4::getInt32 @ 0x8adfaba

/* DWARF original prototype: int32 getInt32(XorRand4 * this) */

int32 __thiscall XorRand4::getInt32(XorRand4 *this)

{
  uint32 uVar1;
  
  uVar1 = getUInt32(this);
  return uVar1;
}

```

---

## getStaticInt32

```asm
// === 08adfb64 XorRand4::getStaticInt32  [0x08adfb64-0x8adfb77] ===
 8adfb64:	55                   	push   %ebp
 8adfb65:	89 e5                	mov    %esp,%ebp
 8adfb67:	83 ec 18             	sub    $0x18,%esp
 8adfb6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfb6d:	89 04 24             	mov    %eax,(%esp)
 8adfb70:	e8 03 00 00 00       	call   8adfb78 <_ZN8XorRand415getStaticUInt32Ej>
 8adfb75:	c9                   	leave
 8adfb76:	c3                   	ret
 8adfb77:	90                   	nop

```

```c
// XorRand4::getStaticInt32 @ 0x8adfb64

int32 XorRand4::getStaticInt32(uint32 seed)

{
  uint32 uVar1;
  
  uVar1 = getStaticUInt32(seed);
  return uVar1;
}

```

---

## getStaticInt32_08adfbd6

```asm
// === 08adfbd6 XorRand4::getStaticInt32  [0x08adfbd6-0x8adfbe3] ===
 8adfbd6:	55                   	push   %ebp
 8adfbd7:	89 e5                	mov    %esp,%ebp
 8adfbd9:	83 ec 08             	sub    $0x8,%esp
 8adfbdc:	e8 03 00 00 00       	call   8adfbe4 <_ZN8XorRand415getStaticUInt32Ev>
 8adfbe1:	c9                   	leave
 8adfbe2:	c3                   	ret
 8adfbe3:	90                   	nop

```

```c
// XorRand4::getStaticInt32 @ 0x8adfbd6

int32 XorRand4::getStaticInt32(void)

{
  uint32 uVar1;
  
  uVar1 = getStaticUInt32();
  return uVar1;
}

```

---

## getStaticUInt32

```asm
// === 08adfb78 XorRand4::getStaticUInt32  [0x08adfb78-0x8adfbd5] ===
 8adfb78:	55                   	push   %ebp
 8adfb79:	89 e5                	mov    %esp,%ebp
 8adfb7b:	83 ec 10             	sub    $0x10,%esp
 8adfb7e:	8d 45 08             	lea    0x8(%ebp),%eax
 8adfb81:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8adfb84:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfb87:	0f b6 00             	movzbl (%eax),%eax
 8adfb8a:	0f b6 c0             	movzbl %al,%eax
 8adfb8d:	8b 14 85 c0 2c e3 08 	mov    0x8e32cc0(,%eax,4),%edx
 8adfb94:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfb97:	83 c0 01             	add    $0x1,%eax
 8adfb9a:	0f b6 00             	movzbl (%eax),%eax
 8adfb9d:	0f b6 c0             	movzbl %al,%eax
 8adfba0:	8b 04 85 c0 30 e3 08 	mov    0x8e330c0(,%eax,4),%eax
 8adfba7:	31 c2                	xor    %eax,%edx
 8adfba9:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfbac:	83 c0 02             	add    $0x2,%eax
 8adfbaf:	0f b6 00             	movzbl (%eax),%eax
 8adfbb2:	0f b6 c0             	movzbl %al,%eax
 8adfbb5:	8b 04 85 c0 34 e3 08 	mov    0x8e334c0(,%eax,4),%eax
 8adfbbc:	31 c2                	xor    %eax,%edx
 8adfbbe:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfbc1:	83 c0 03             	add    $0x3,%eax
 8adfbc4:	0f b6 00             	movzbl (%eax),%eax
 8adfbc7:	0f b6 c0             	movzbl %al,%eax
 8adfbca:	8b 04 85 c0 38 e3 08 	mov    0x8e338c0(,%eax,4),%eax
 8adfbd1:	31 d0                	xor    %edx,%eax
 8adfbd3:	c9                   	leave
 8adfbd4:	c3                   	ret
 8adfbd5:	90                   	nop

```

```c
// XorRand4::getStaticUInt32 @ 0x8adfb78

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32 XorRand4::getStaticUInt32(uint32 seed)

{
                    /* Unresolved local var: uint8 * c@[???] */
  return ms_table3[seed >> 0x18] ^
         ms_table0[seed & 0xff] ^ ms_table1[seed >> 8 & 0xff] ^ ms_table2[seed >> 0x10 & 0xff];
}

```

---

## getStaticUInt32_08adfbe4

```asm
// === 08adfbe4 XorRand4::getStaticUInt32  [0x08adfbe4-0x8adfc91] ===
 8adfbe4:	55                   	push   %ebp
 8adfbe5:	89 e5                	mov    %esp,%ebp
 8adfbe7:	53                   	push   %ebx
 8adfbe8:	83 ec 24             	sub    $0x24,%esp
 8adfbeb:	65 0f b6 05 f8 ff ff 	movzbl %gs:0xfffffff8,%eax
 8adfbf2:	ff 
 8adfbf3:	83 f0 01             	xor    $0x1,%eax
 8adfbf6:	84 c0                	test   %al,%al
 8adfbf8:	74 2b                	je     8adfc25 <_ZN8XorRand415getStaticUInt32Ev+0x41>
 8adfbfa:	e8 31 e2 59 ff       	call   807de30 <clock@plt>
 8adfbff:	89 c3                	mov    %eax,%ebx
 8adfc01:	e8 3a eb 59 ff       	call   807e740 <pthread_self@plt>
 8adfc06:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8adfc09:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adfc0c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adfc0f:	89 04 24             	mov    %eax,(%esp)
 8adfc12:	e8 61 ff ff ff       	call   8adfb78 <_ZN8XorRand415getStaticUInt32Ej>
 8adfc17:	65 a3 fc ff ff ff    	mov    %eax,%gs:0xfffffffc
 8adfc1d:	65 c6 05 f8 ff ff ff 	movb   $0x1,%gs:0xfffffff8
 8adfc24:	01 
 8adfc25:	65 a1 fc ff ff ff    	mov    %gs:0xfffffffc,%eax
 8adfc2b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8adfc2e:	83 c0 01             	add    $0x1,%eax
 8adfc31:	65 a3 fc ff ff ff    	mov    %eax,%gs:0xfffffffc
 8adfc37:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8adfc3a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adfc3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adfc40:	0f b6 00             	movzbl (%eax),%eax
 8adfc43:	0f b6 c0             	movzbl %al,%eax
 8adfc46:	8b 14 85 c0 2c e3 08 	mov    0x8e32cc0(,%eax,4),%edx
 8adfc4d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adfc50:	83 c0 01             	add    $0x1,%eax
 8adfc53:	0f b6 00             	movzbl (%eax),%eax
 8adfc56:	0f b6 c0             	movzbl %al,%eax
 8adfc59:	8b 04 85 c0 30 e3 08 	mov    0x8e330c0(,%eax,4),%eax
 8adfc60:	31 c2                	xor    %eax,%edx
 8adfc62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adfc65:	83 c0 02             	add    $0x2,%eax
 8adfc68:	0f b6 00             	movzbl (%eax),%eax
 8adfc6b:	0f b6 c0             	movzbl %al,%eax
 8adfc6e:	8b 04 85 c0 34 e3 08 	mov    0x8e334c0(,%eax,4),%eax
 8adfc75:	31 c2                	xor    %eax,%edx
 8adfc77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adfc7a:	83 c0 03             	add    $0x3,%eax
 8adfc7d:	0f b6 00             	movzbl (%eax),%eax
 8adfc80:	0f b6 c0             	movzbl %al,%eax
 8adfc83:	8b 04 85 c0 38 e3 08 	mov    0x8e338c0(,%eax,4),%eax
 8adfc8a:	31 d0                	xor    %edx,%eax
 8adfc8c:	83 c4 24             	add    $0x24,%esp
 8adfc8f:	5b                   	pop    %ebx
 8adfc90:	5d                   	pop    %ebp
 8adfc91:	c3                   	ret

```

```c
// XorRand4::getStaticUInt32 @ 0x8adfbe4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint32 XorRand4::getStaticUInt32(void)

{
  uint uVar1;
  clock_t cVar2;
  pthread_t pVar3;
  uint32 uVar4;
  int in_GS_OFFSET;
  
                    /* Unresolved local var: uint32 s_counter@[???]
                       Unresolved local var: bool s_isCounterInited@[???]
                       Unresolved local var: uint32 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  if (*(char *)(in_GS_OFFSET + -8) != '\x01') {
                    /* Unresolved local var: uint32 seed@[???] */
    cVar2 = clock();
    pVar3 = pthread_self();
    uVar4 = getStaticUInt32(cVar2 + pVar3);
    *(uint32 *)(in_GS_OFFSET + -4) = uVar4;
    *(undefined1 *)(in_GS_OFFSET + -8) = 1;
  }
  uVar1 = *(uint *)(in_GS_OFFSET + -4);
  *(uint *)(in_GS_OFFSET + -4) = uVar1 + 1;
  return ms_table3[uVar1 >> 0x18] ^
         ms_table0[uVar1 & 0xff] ^ ms_table1[uVar1 >> 8 & 0xff] ^ ms_table2[uVar1 >> 0x10 & 0xff];
}

```

---

## getUInt32

```asm
// === 08adface XorRand4::getUInt32  [0x08adface-0x8adfb3b] ===
 8adface:	55                   	push   %ebp
 8adfacf:	89 e5                	mov    %esp,%ebp
 8adfad1:	83 ec 10             	sub    $0x10,%esp
 8adfad4:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfad7:	8b 00                	mov    (%eax),%eax
 8adfad9:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8adfadc:	8d 50 01             	lea    0x1(%eax),%edx
 8adfadf:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfae2:	89 10                	mov    %edx,(%eax)
 8adfae4:	8d 45 f8             	lea    -0x8(%ebp),%eax
 8adfae7:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8adfaea:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfaed:	0f b6 00             	movzbl (%eax),%eax
 8adfaf0:	0f b6 c0             	movzbl %al,%eax
 8adfaf3:	8b 14 85 c0 2c e3 08 	mov    0x8e32cc0(,%eax,4),%edx
 8adfafa:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfafd:	83 c0 01             	add    $0x1,%eax
 8adfb00:	0f b6 00             	movzbl (%eax),%eax
 8adfb03:	0f b6 c0             	movzbl %al,%eax
 8adfb06:	8b 04 85 c0 30 e3 08 	mov    0x8e330c0(,%eax,4),%eax
 8adfb0d:	31 c2                	xor    %eax,%edx
 8adfb0f:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfb12:	83 c0 02             	add    $0x2,%eax
 8adfb15:	0f b6 00             	movzbl (%eax),%eax
 8adfb18:	0f b6 c0             	movzbl %al,%eax
 8adfb1b:	8b 04 85 c0 34 e3 08 	mov    0x8e334c0(,%eax,4),%eax
 8adfb22:	31 c2                	xor    %eax,%edx
 8adfb24:	8b 45 fc             	mov    -0x4(%ebp),%eax
 8adfb27:	83 c0 03             	add    $0x3,%eax
 8adfb2a:	0f b6 00             	movzbl (%eax),%eax
 8adfb2d:	0f b6 c0             	movzbl %al,%eax
 8adfb30:	8b 04 85 c0 38 e3 08 	mov    0x8e338c0(,%eax,4),%eax
 8adfb37:	31 d0                	xor    %edx,%eax
 8adfb39:	c9                   	leave
 8adfb3a:	c3                   	ret
 8adfb3b:	90                   	nop

```

```c
// XorRand4::getUInt32 @ 0x8adface

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DWARF original prototype: uint32 getUInt32(XorRand4 * this) */

uint32 __thiscall XorRand4::getUInt32(XorRand4 *this)

{
  uint uVar1;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  uVar1 = this->m_counter;
  this->m_counter = uVar1 + 1;
  return ms_table3[uVar1 >> 0x18] ^
         ms_table0[uVar1 & 0xff] ^ ms_table1[uVar1 >> 8 & 0xff] ^ ms_table2[uVar1 >> 0x10 & 0xff];
}

```

---

## max

```asm
// === 08adfb5a XorRand4::max  [0x08adfb5a-0x8adfb63] ===
 8adfb5a:	55                   	push   %ebp
 8adfb5b:	89 e5                	mov    %esp,%ebp
 8adfb5d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8adfb62:	5d                   	pop    %ebp
 8adfb63:	c3                   	ret

```

```c
// XorRand4::max @ 0x8adfb5a

/* DWARF original prototype: uint32 max(XorRand4 * this) */

uint32 __thiscall XorRand4::max(XorRand4 *this)

{
  return 0xffffffff;
}

```

---

## min

```asm
// === 08adfb50 XorRand4::min  [0x08adfb50-0x8adfb59] ===
 8adfb50:	55                   	push   %ebp
 8adfb51:	89 e5                	mov    %esp,%ebp
 8adfb53:	b8 00 00 00 00       	mov    $0x0,%eax
 8adfb58:	5d                   	pop    %ebp
 8adfb59:	c3                   	ret

```

```c
// XorRand4::min @ 0x8adfb50

/* DWARF original prototype: uint32 min(XorRand4 * this) */

uint32 __thiscall XorRand4::min(XorRand4 *this)

{
  return 0;
}

```

---

## operator

```asm
// === 08adfb3c XorRand4::operator  [0x08adfb3c-0x8adfb4f] ===
 8adfb3c:	55                   	push   %ebp
 8adfb3d:	89 e5                	mov    %esp,%ebp
 8adfb3f:	83 ec 04             	sub    $0x4,%esp
 8adfb42:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfb45:	89 04 24             	mov    %eax,(%esp)
 8adfb48:	e8 81 ff ff ff       	call   8adface <_ZN8XorRand49getUInt32Ev>
 8adfb4d:	c9                   	leave
 8adfb4e:	c3                   	ret
 8adfb4f:	90                   	nop

```

```c
// XorRand4::operator @ 0x8adfb3c

/* DWARF original prototype: uint32 operator()(XorRand4 * this) */

uint32 __thiscall XorRand4::operator()(XorRand4 *this)

{
  uint32 uVar1;
  
  uVar1 = getUInt32(this);
  return uVar1;
}

```

---

## seed

```asm
// === 08adfaac XorRand4::seed  [0x08adfaac-0x8adfab9] ===
 8adfaac:	55                   	push   %ebp
 8adfaad:	89 e5                	mov    %esp,%ebp
 8adfaaf:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfab2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adfab5:	89 10                	mov    %edx,(%eax)
 8adfab7:	5d                   	pop    %ebp
 8adfab8:	c3                   	ret
 8adfab9:	90                   	nop

```

```c
// XorRand4::seed @ 0x8adfaac

/* DWARF original prototype: void seed(XorRand4 * this, uint32 seed) */

void __thiscall XorRand4::seed(XorRand4 *this,uint32 seed)

{
  this->m_counter = seed;
  return;
}

```

