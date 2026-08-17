# Tick

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 19

---

## Tick

```asm
// === 08ade828 Tick::Tick  [0x08ade828-0x8ade835] ===
 8ade828:	55                   	push   %ebp
 8ade829:	89 e5                	mov    %esp,%ebp
 8ade82b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade82e:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ade834:	5d                   	pop    %ebp
 8ade835:	c3                   	ret

```

```c
// Tick::Tick @ 0x8ade828

/* DWARF original prototype: void Tick(Tick * this) */

void __thiscall Tick::Tick(Tick *this)

{
  this->value_ = 0;
  return;
}

```

---

## Tick_08ade836

```asm
// === 08ade836 Tick::Tick  [0x08ade836-0x8ade843] ===
 8ade836:	55                   	push   %ebp
 8ade837:	89 e5                	mov    %esp,%ebp
 8ade839:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade83c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade83f:	89 10                	mov    %edx,(%eax)
 8ade841:	5d                   	pop    %ebp
 8ade842:	c3                   	ret
 8ade843:	90                   	nop

```

```c
// Tick::Tick @ 0x8ade836

/* DWARF original prototype: void Tick(Tick * this, uint32 value) */

void __thiscall Tick::Tick(Tick *this,uint32 value)

{
  this->value_ = value;
  return;
}

```

---

## getInternalValue

```asm
// === 08ade8c8 Tick::getInternalValue  [0x08ade8c8-0x8ade8d1] ===
 8ade8c8:	55                   	push   %ebp
 8ade8c9:	89 e5                	mov    %esp,%ebp
 8ade8cb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade8ce:	8b 00                	mov    (%eax),%eax
 8ade8d0:	5d                   	pop    %ebp
 8ade8d1:	c3                   	ret

```

```c
// Tick::getInternalValue @ 0x8ade8c8

/* DWARF original prototype: uint32 getInternalValue(Tick * this) */

uint32 __thiscall Tick::getInternalValue(Tick *this)

{
  return this->value_;
}

```

---

## now

```asm
// === 08ade844 Tick::now  [0x08ade844-0x8ade869] ===
 8ade844:	55                   	push   %ebp
 8ade845:	89 e5                	mov    %esp,%ebp
 8ade847:	53                   	push   %ebx
 8ade848:	83 ec 14             	sub    $0x14,%esp
 8ade84b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ade84e:	e8 17 00 00 00       	call   8ade86a <_ZN4Tick18nowAsInternalValueEv>
 8ade853:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade857:	89 1c 24             	mov    %ebx,(%esp)
 8ade85a:	e8 d7 ff ff ff       	call   8ade836 <_ZN4TickC1Ej>
 8ade85f:	89 d8                	mov    %ebx,%eax
 8ade861:	83 c4 14             	add    $0x14,%esp
 8ade864:	5b                   	pop    %ebx
 8ade865:	5d                   	pop    %ebp
 8ade866:	c2 04 00             	ret    $0x4
 8ade869:	90                   	nop

```

```c
// Tick::now @ 0x8ade844

Tick * Tick::now(Tick *__return_storage_ptr__)

{
  uint32 value;
  
  value = nowAsInternalValue();
  Tick(__return_storage_ptr__,value);
  return __return_storage_ptr__;
}

```

---

## nowAsInternalValue

```asm
// === 08ade86a Tick::nowAsInternalValue  [0x08ade86a-0x8ade8b5] ===
 8ade86a:	55                   	push   %ebp
 8ade86b:	89 e5                	mov    %esp,%ebp
 8ade86d:	53                   	push   %ebx
 8ade86e:	83 ec 24             	sub    $0x24,%esp
 8ade871:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ade874:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade878:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8ade87f:	e8 cc fc 59 ff       	call   807e550 <clock_gettime@plt>
 8ade884:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ade887:	89 c2                	mov    %eax,%edx
 8ade889:	c1 fa 1f             	sar    $0x1f,%edx
 8ade88c:	69 d8 e8 03 00 00    	imul   $0x3e8,%eax,%ebx
 8ade892:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8ade895:	ba 83 de 1b 43       	mov    $0x431bde83,%edx
 8ade89a:	89 c8                	mov    %ecx,%eax
 8ade89c:	f7 ea                	imul   %edx
 8ade89e:	c1 fa 12             	sar    $0x12,%edx
 8ade8a1:	89 c8                	mov    %ecx,%eax
 8ade8a3:	c1 f8 1f             	sar    $0x1f,%eax
 8ade8a6:	89 d1                	mov    %edx,%ecx
 8ade8a8:	29 c1                	sub    %eax,%ecx
 8ade8aa:	89 c8                	mov    %ecx,%eax
 8ade8ac:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8ade8af:	83 c4 24             	add    $0x24,%esp
 8ade8b2:	5b                   	pop    %ebx
 8ade8b3:	5d                   	pop    %ebp
 8ade8b4:	c3                   	ret
 8ade8b5:	90                   	nop

```

```c
// Tick::nowAsInternalValue @ 0x8ade86a

uint32 Tick::nowAsInternalValue(void)

{
  timespec local_14;
  
                    /* Unresolved local var: timespec ts@[???] */
  clock_gettime(1,&local_14);
  return local_14.tv_sec * 1000 + local_14.tv_nsec / 1000000;
}

```

---

## operator!=

```asm
// === 08ade9a0 Tick::operator!=  [0x08ade9a0-0x8ade9b1] ===
 8ade9a0:	55                   	push   %ebp
 8ade9a1:	89 e5                	mov    %esp,%ebp
 8ade9a3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade9a6:	8b 10                	mov    (%eax),%edx
 8ade9a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade9ab:	39 c2                	cmp    %eax,%edx
 8ade9ad:	0f 95 c0             	setne  %al
 8ade9b0:	5d                   	pop    %ebp
 8ade9b1:	c3                   	ret

```

```c
// Tick::operator!= @ 0x8ade9a0

/* DWARF original prototype: bool operator!=(Tick * this, Tick tick) */

bool __thiscall Tick::operator!=(Tick *this,Tick tick)

{
  return this->value_ != tick.value_;
}

```

---

## operator+

```asm
// === 08ade920 Tick::operator+  [0x08ade920-0x8ade94b] ===
 8ade920:	55                   	push   %ebp
 8ade921:	89 e5                	mov    %esp,%ebp
 8ade923:	53                   	push   %ebx
 8ade924:	83 ec 08             	sub    $0x8,%esp
 8ade927:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ade92a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade92d:	8b 10                	mov    (%eax),%edx
 8ade92f:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade932:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ade935:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade939:	89 1c 24             	mov    %ebx,(%esp)
 8ade93c:	e8 f5 fe ff ff       	call   8ade836 <_ZN4TickC1Ej>
 8ade941:	89 d8                	mov    %ebx,%eax
 8ade943:	83 c4 08             	add    $0x8,%esp
 8ade946:	5b                   	pop    %ebx
 8ade947:	5d                   	pop    %ebp
 8ade948:	c2 04 00             	ret    $0x4
 8ade94b:	90                   	nop

```

```c
// Tick::operator+ @ 0x8ade920

/* DWARF original prototype: Tick operator+(Tick * this, int32 span) */

Tick __thiscall Tick::operator+(Tick *this,int32 span)

{
  int in_stack_0000000c;
  
  Tick(this,*(int *)span + in_stack_0000000c);
  return (Tick)(uint32)this;
}

```

---

## operator+=

```asm
// === 08ade8f0 Tick::operator+=  [0x08ade8f0-0x8ade907] ===
 8ade8f0:	55                   	push   %ebp
 8ade8f1:	89 e5                	mov    %esp,%ebp
 8ade8f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade8f6:	8b 10                	mov    (%eax),%edx
 8ade8f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade8fb:	01 c2                	add    %eax,%edx
 8ade8fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade900:	89 10                	mov    %edx,(%eax)
 8ade902:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade905:	5d                   	pop    %ebp
 8ade906:	c3                   	ret
 8ade907:	90                   	nop

```

```c
// Tick::operator+= @ 0x8ade8f0

/* DWARF original prototype: Tick * operator+=(Tick * this, int32 span) */

Tick * __thiscall Tick::operator+=(Tick *this,int32 span)

{
  this->value_ = this->value_ + span;
  return this;
}

```

---

## operator-

```asm
// === 08ade94c Tick::operator-  [0x08ade94c-0x8ade979] ===
 8ade94c:	55                   	push   %ebp
 8ade94d:	89 e5                	mov    %esp,%ebp
 8ade94f:	53                   	push   %ebx
 8ade950:	83 ec 08             	sub    $0x8,%esp
 8ade953:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ade956:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade959:	8b 10                	mov    (%eax),%edx
 8ade95b:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade95e:	89 d1                	mov    %edx,%ecx
 8ade960:	29 c1                	sub    %eax,%ecx
 8ade962:	89 c8                	mov    %ecx,%eax
 8ade964:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade968:	89 1c 24             	mov    %ebx,(%esp)
 8ade96b:	e8 c6 fe ff ff       	call   8ade836 <_ZN4TickC1Ej>
 8ade970:	89 d8                	mov    %ebx,%eax
 8ade972:	83 c4 08             	add    $0x8,%esp
 8ade975:	5b                   	pop    %ebx
 8ade976:	5d                   	pop    %ebp
 8ade977:	c2 04 00             	ret    $0x4

```

```c
// Tick::operator- @ 0x8ade94c

/* DWARF original prototype: Tick operator-(Tick * this, int32 span) */

Tick __thiscall Tick::operator-(Tick *this,int32 span)

{
  int in_stack_0000000c;
  
  Tick(this,*(int *)span - in_stack_0000000c);
  return (Tick)(uint32)this;
}

```

---

## operator-=

```asm
// === 08ade908 Tick::operator-=  [0x08ade908-0x8ade91f] ===
 8ade908:	55                   	push   %ebp
 8ade909:	89 e5                	mov    %esp,%ebp
 8ade90b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade90e:	8b 10                	mov    (%eax),%edx
 8ade910:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade913:	29 c2                	sub    %eax,%edx
 8ade915:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade918:	89 10                	mov    %edx,(%eax)
 8ade91a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade91d:	5d                   	pop    %ebp
 8ade91e:	c3                   	ret
 8ade91f:	90                   	nop

```

```c
// Tick::operator-= @ 0x8ade908

/* DWARF original prototype: Tick * operator-=(Tick * this, int32 span) */

Tick * __thiscall Tick::operator-=(Tick *this,int32 span)

{
  this->value_ = this->value_ - span;
  return this;
}

```

---

## operator-_08ade97a

```asm
// === 08ade97a Tick::operator-  [0x08ade97a-0x8ade98d] ===
 8ade97a:	55                   	push   %ebp
 8ade97b:	89 e5                	mov    %esp,%ebp
 8ade97d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade980:	8b 10                	mov    (%eax),%edx
 8ade982:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade985:	89 d1                	mov    %edx,%ecx
 8ade987:	29 c1                	sub    %eax,%ecx
 8ade989:	89 c8                	mov    %ecx,%eax
 8ade98b:	5d                   	pop    %ebp
 8ade98c:	c3                   	ret
 8ade98d:	90                   	nop

```

```c
// Tick::operator- @ 0x8ade97a

/* DWARF original prototype: int32 operator-(Tick * this, Tick tick) */

int32 __thiscall Tick::operator-(Tick *this,Tick tick)

{
  return this->value_ - tick.value_;
}

```

---

## operator=

```asm
// === 08ade8e0 Tick::operator=  [0x08ade8e0-0x8ade8ef] ===
 8ade8e0:	55                   	push   %ebp
 8ade8e1:	89 e5                	mov    %esp,%ebp
 8ade8e3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade8e6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade8e9:	89 10                	mov    %edx,(%eax)
 8ade8eb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade8ee:	5d                   	pop    %ebp
 8ade8ef:	c3                   	ret

```

```c
// Tick::operator= @ 0x8ade8e0

/* DWARF original prototype: Tick * operator=(Tick * this, Tick tick) */

Tick * __thiscall Tick::operator=(Tick *this,Tick tick)

{
  this->value_ = (uint32)tick;
  return this;
}

```

---

## operator==

```asm
// === 08ade98e Tick::operator==  [0x08ade98e-0x8ade99f] ===
 8ade98e:	55                   	push   %ebp
 8ade98f:	89 e5                	mov    %esp,%ebp
 8ade991:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade994:	8b 10                	mov    (%eax),%edx
 8ade996:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade999:	39 c2                	cmp    %eax,%edx
 8ade99b:	0f 94 c0             	sete   %al
 8ade99e:	5d                   	pop    %ebp
 8ade99f:	c3                   	ret

```

```c
// Tick::operator== @ 0x8ade98e

/* DWARF original prototype: bool operator==(Tick * this, Tick tick) */

bool __thiscall Tick::operator==(Tick *this,Tick tick)

{
  return this->value_ == tick.value_;
}

```

---

## operator_gt_

```asm
// === 08ade9e0 Tick::operator>  [0x08ade9e0-0x8ade9f7] ===
 8ade9e0:	55                   	push   %ebp
 8ade9e1:	89 e5                	mov    %esp,%ebp
 8ade9e3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade9e6:	8b 10                	mov    (%eax),%edx
 8ade9e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade9eb:	89 d1                	mov    %edx,%ecx
 8ade9ed:	29 c1                	sub    %eax,%ecx
 8ade9ef:	89 c8                	mov    %ecx,%eax
 8ade9f1:	85 c0                	test   %eax,%eax
 8ade9f3:	0f 9f c0             	setg   %al
 8ade9f6:	5d                   	pop    %ebp
 8ade9f7:	c3                   	ret

```

```c
// Tick::operator> @ 0x8ade9e0

/* DWARF original prototype: bool operator>(Tick * this, Tick tick) */

bool __thiscall Tick::operator>(Tick *this,Tick tick)

{
  return this->value_ != tick.value_ && -1 < (int)(this->value_ - tick.value_);
}

```

---

## operator_gt_=

```asm
// === 08ade9f8 Tick::operator>=  [0x08ade9f8-0x8adea0f] ===
 8ade9f8:	55                   	push   %ebp
 8ade9f9:	89 e5                	mov    %esp,%ebp
 8ade9fb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade9fe:	8b 10                	mov    (%eax),%edx
 8adea00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adea03:	89 d1                	mov    %edx,%ecx
 8adea05:	29 c1                	sub    %eax,%ecx
 8adea07:	89 c8                	mov    %ecx,%eax
 8adea09:	f7 d0                	not    %eax
 8adea0b:	c1 e8 1f             	shr    $0x1f,%eax
 8adea0e:	5d                   	pop    %ebp
 8adea0f:	c3                   	ret

```

```c
// Tick::operator>= @ 0x8ade9f8

/* DWARF original prototype: bool operator>=(Tick * this, Tick tick) */

bool __thiscall Tick::operator>=(Tick *this,Tick tick)

{
  return (bool)((byte)~(byte)(this->value_ - tick.value_ >> 0x18) >> 7);
}

```

---

## operator_lt_

```asm
// === 08ade9b2 Tick::operator<  [0x08ade9b2-0x8ade9c7] ===
 8ade9b2:	55                   	push   %ebp
 8ade9b3:	89 e5                	mov    %esp,%ebp
 8ade9b5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade9b8:	8b 10                	mov    (%eax),%edx
 8ade9ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade9bd:	89 d1                	mov    %edx,%ecx
 8ade9bf:	29 c1                	sub    %eax,%ecx
 8ade9c1:	89 c8                	mov    %ecx,%eax
 8ade9c3:	c1 e8 1f             	shr    $0x1f,%eax
 8ade9c6:	5d                   	pop    %ebp
 8ade9c7:	c3                   	ret

```

```c
// Tick::operator< @ 0x8ade9b2

/* DWARF original prototype: bool operator<(Tick * this, Tick tick) */

bool __thiscall Tick::operator<(Tick *this,Tick tick)

{
  return SUB41(this->value_ - tick.value_ >> 0x1f,0);
}

```

---

## operator_lt_=

```asm
// === 08ade9c8 Tick::operator<=  [0x08ade9c8-0x8ade9df] ===
 8ade9c8:	55                   	push   %ebp
 8ade9c9:	89 e5                	mov    %esp,%ebp
 8ade9cb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade9ce:	8b 10                	mov    (%eax),%edx
 8ade9d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade9d3:	89 d1                	mov    %edx,%ecx
 8ade9d5:	29 c1                	sub    %eax,%ecx
 8ade9d7:	89 c8                	mov    %ecx,%eax
 8ade9d9:	85 c0                	test   %eax,%eax
 8ade9db:	0f 9e c0             	setle  %al
 8ade9de:	5d                   	pop    %ebp
 8ade9df:	c3                   	ret

```

```c
// Tick::operator<= @ 0x8ade9c8

/* DWARF original prototype: bool operator<=(Tick * this, Tick tick) */

bool __thiscall Tick::operator<=(Tick *this,Tick tick)

{
  return this->value_ == tick.value_ || (int)(this->value_ - tick.value_) < 0;
}

```

---

## setInternalValue

```asm
// === 08ade8d2 Tick::setInternalValue  [0x08ade8d2-0x8ade8df] ===
 8ade8d2:	55                   	push   %ebp
 8ade8d3:	89 e5                	mov    %esp,%ebp
 8ade8d5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade8d8:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade8db:	89 10                	mov    %edx,(%eax)
 8ade8dd:	5d                   	pop    %ebp
 8ade8de:	c3                   	ret
 8ade8df:	90                   	nop

```

```c
// Tick::setInternalValue @ 0x8ade8d2

/* DWARF original prototype: void setInternalValue(Tick * this, uint32 value) */

void __thiscall Tick::setInternalValue(Tick *this,uint32 value)

{
  this->value_ = value;
  return;
}

```

---

## setNow

```asm
// === 08ade8b6 Tick::setNow  [0x08ade8b6-0x8ade8c7] ===
 8ade8b6:	55                   	push   %ebp
 8ade8b7:	89 e5                	mov    %esp,%ebp
 8ade8b9:	83 ec 08             	sub    $0x8,%esp
 8ade8bc:	e8 a9 ff ff ff       	call   8ade86a <_ZN4Tick18nowAsInternalValueEv>
 8ade8c1:	8b 55 08             	mov    0x8(%ebp),%edx
 8ade8c4:	89 02                	mov    %eax,(%edx)
 8ade8c6:	c9                   	leave
 8ade8c7:	c3                   	ret

```

```c
// Tick::setNow @ 0x8ade8b6

/* DWARF original prototype: void setNow(Tick * this) */

void __thiscall Tick::setNow(Tick *this)

{
  uint32 uVar1;
  
  uVar1 = nowAsInternalValue();
  this->value_ = uVar1;
  return;
}

```

