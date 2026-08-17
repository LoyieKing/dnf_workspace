# Taiwan__GarenaAuthData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## getGcaType

```asm
// === 08173008 Taiwan::GarenaAuthData::getGcaType  [0x08173008-0x8173021] ===
 8173008:	55                   	push   %ebp
 8173009:	89 e5                	mov    %esp,%ebp
 817300b:	83 ec 18             	sub    $0x18,%esp
 817300e:	8b 45 08             	mov    0x8(%ebp),%eax
 8173011:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 8173015:	0f b7 c0             	movzwl %ax,%eax
 8173018:	89 04 24             	mov    %eax,(%esp)
 817301b:	e8 70 ae f0 ff       	call   807de90 <ntohs@plt>
 8173020:	c9                   	leave
 8173021:	c3                   	ret

```

```c
// Taiwan::GarenaAuthData::getGcaType @ 0x8173008

/* Taiwan::GarenaAuthData::getGcaType() */

void __thiscall Taiwan::GarenaAuthData::getGcaType(GarenaAuthData *this)

{
  ntohs(*(uint16_t *)(this + 0x28));
  return;
}

```

---

## getGoldMemberType

```asm
// === 0817304e Taiwan::GarenaAuthData::getGoldMemberType  [0x0817304e-0x8173059] ===
 817304e:	55                   	push   %ebp
 817304f:	89 e5                	mov    %esp,%ebp
 8173051:	8b 45 08             	mov    0x8(%ebp),%eax
 8173054:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 8173058:	5d                   	pop    %ebp
 8173059:	c3                   	ret

```

```c
// Taiwan::GarenaAuthData::getGoldMemberType @ 0x817304e

/* Taiwan::GarenaAuthData::getGoldMemberType() */

GarenaAuthData __thiscall Taiwan::GarenaAuthData::getGoldMemberType(GarenaAuthData *this)

{
  return this[0x2a];
}

```

---

## getMobileAuth

```asm
// === 08173022 Taiwan::GarenaAuthData::getMobileAuth  [0x08173022-0x8173033] ===
 8173022:	55                   	push   %ebp
 8173023:	89 e5                	mov    %esp,%ebp
 8173025:	8b 45 08             	mov    0x8(%ebp),%eax
 8173028:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 817302c:	3c 01                	cmp    $0x1,%al
 817302e:	0f 94 c0             	sete   %al
 8173031:	5d                   	pop    %ebp
 8173032:	c3                   	ret
 8173033:	90                   	nop

```

```c
// Taiwan::GarenaAuthData::getMobileAuth @ 0x8173022

/* Taiwan::GarenaAuthData::getMobileAuth() */

bool __thiscall Taiwan::GarenaAuthData::getMobileAuth(GarenaAuthData *this)

{
  return this[0x2c] == (GarenaAuthData)0x1;
}

```

---

## getPatchTime

```asm
// === 08173042 Taiwan::GarenaAuthData::getPatchTime  [0x08173042-0x817304d] ===
 8173042:	55                   	push   %ebp
 8173043:	89 e5                	mov    %esp,%ebp
 8173045:	8b 45 08             	mov    0x8(%ebp),%eax
 8173048:	8b 40 64             	mov    0x64(%eax),%eax
 817304b:	5d                   	pop    %ebp
 817304c:	c3                   	ret
 817304d:	90                   	nop

```

```c
// Taiwan::GarenaAuthData::getPatchTime @ 0x8173042

/* Taiwan::GarenaAuthData::getPatchTime() */

undefined4 __thiscall Taiwan::GarenaAuthData::getPatchTime(GarenaAuthData *this)

{
  return *(undefined4 *)(this + 100);
}

```

---

## getTimeStamp

```asm
// === 08172fea Taiwan::GarenaAuthData::getTimeStamp  [0x08172fea-0x8173007] ===
 8172fea:	55                   	push   %ebp
 8172feb:	89 e5                	mov    %esp,%ebp
 8172fed:	83 ec 18             	sub    $0x18,%esp
 8172ff0:	8b 45 08             	mov    0x8(%ebp),%eax
 8172ff3:	8b 40 24             	mov    0x24(%eax),%eax
 8172ff6:	89 04 24             	mov    %eax,(%esp)
 8172ff9:	e8 82 ab f0 ff       	call   807db80 <ntohl@plt>
 8172ffe:	8b 55 08             	mov    0x8(%ebp),%edx
 8173001:	8b 52 64             	mov    0x64(%edx),%edx
 8173004:	01 d0                	add    %edx,%eax
 8173006:	c9                   	leave
 8173007:	c3                   	ret

```

```c
// Taiwan::GarenaAuthData::getTimeStamp @ 0x8172fea

/* Taiwan::GarenaAuthData::getTimeStamp() */

int __thiscall Taiwan::GarenaAuthData::getTimeStamp(GarenaAuthData *this)

{
  uint32_t uVar1;
  
  uVar1 = ntohl(*(uint32_t *)(this + 0x24));
  return uVar1 + *(int *)(this + 100);
}

```

---

## getUid

```asm
// === 08172fc8 Taiwan::GarenaAuthData::getUid  [0x08172fc8-0x8172fdd] ===
 8172fc8:	55                   	push   %ebp
 8172fc9:	89 e5                	mov    %esp,%ebp
 8172fcb:	83 ec 18             	sub    $0x18,%esp
 8172fce:	8b 45 08             	mov    0x8(%ebp),%eax
 8172fd1:	8b 00                	mov    (%eax),%eax
 8172fd3:	89 04 24             	mov    %eax,(%esp)
 8172fd6:	e8 a5 ab f0 ff       	call   807db80 <ntohl@plt>
 8172fdb:	c9                   	leave
 8172fdc:	c3                   	ret
 8172fdd:	90                   	nop

```

```c
// Taiwan::GarenaAuthData::getUid @ 0x8172fc8

/* Taiwan::GarenaAuthData::getUid() */

void __thiscall Taiwan::GarenaAuthData::getUid(GarenaAuthData *this)

{
  ntohl(*(uint32_t *)this);
  return;
}

```

---

## getUname

```asm
// === 08172fde Taiwan::GarenaAuthData::getUname  [0x08172fde-0x8172fe9] ===
 8172fde:	55                   	push   %ebp
 8172fdf:	89 e5                	mov    %esp,%ebp
 8172fe1:	8b 45 08             	mov    0x8(%ebp),%eax
 8172fe4:	83 c0 04             	add    $0x4,%eax
 8172fe7:	5d                   	pop    %ebp
 8172fe8:	c3                   	ret
 8172fe9:	90                   	nop

```

```c
// Taiwan::GarenaAuthData::getUname @ 0x8172fde

/* Taiwan::GarenaAuthData::getUname() */

GarenaAuthData * __thiscall Taiwan::GarenaAuthData::getUname(GarenaAuthData *this)

{
  return this + 4;
}

```

---

## setPatchTime

```asm
// === 08173034 Taiwan::GarenaAuthData::setPatchTime  [0x08173034-0x8173041] ===
 8173034:	55                   	push   %ebp
 8173035:	89 e5                	mov    %esp,%ebp
 8173037:	8b 45 08             	mov    0x8(%ebp),%eax
 817303a:	8b 55 0c             	mov    0xc(%ebp),%edx
 817303d:	89 50 64             	mov    %edx,0x64(%eax)
 8173040:	5d                   	pop    %ebp
 8173041:	c3                   	ret

```

```c
// Taiwan::GarenaAuthData::setPatchTime @ 0x8173034

/* Taiwan::GarenaAuthData::setPatchTime(unsigned int) */

void __thiscall Taiwan::GarenaAuthData::setPatchTime(GarenaAuthData *this,uint param_1)

{
  *(uint *)(this + 100) = param_1;
  return;
}

```

