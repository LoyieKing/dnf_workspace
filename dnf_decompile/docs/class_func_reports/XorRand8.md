# XorRand8

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## XorRand8

```asm
// === 08adfc92 XorRand8::XorRand8  [0x08adfc92-0x8adfca7] ===
 8adfc92:	55                   	push   %ebp
 8adfc93:	89 e5                	mov    %esp,%ebp
 8adfc95:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfc98:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8adfc9e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8adfca5:	5d                   	pop    %ebp
 8adfca6:	c3                   	ret
 8adfca7:	90                   	nop

```

```c
// XorRand8::XorRand8 @ 0x8adfc92

/* DWARF original prototype: void XorRand8(XorRand8 * this) */

void __thiscall XorRand8::XorRand8(XorRand8 *this)

{
  *(undefined4 *)&this->m_counter = 0;
  *(undefined4 *)((int)&this->m_counter + 4) = 0;
  return;
}

```

---

## XorRand8_08adfca8

```asm
// === 08adfca8 XorRand8::XorRand8  [0x08adfca8-0x8adfcc9] ===
 8adfca8:	55                   	push   %ebp
 8adfca9:	89 e5                	mov    %esp,%ebp
 8adfcab:	83 ec 08             	sub    $0x8,%esp
 8adfcae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adfcb1:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8adfcb4:	8b 45 10             	mov    0x10(%ebp),%eax
 8adfcb7:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8adfcba:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8adfcbd:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8adfcc0:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8adfcc3:	89 01                	mov    %eax,(%ecx)
 8adfcc5:	89 51 04             	mov    %edx,0x4(%ecx)
 8adfcc8:	c9                   	leave
 8adfcc9:	c3                   	ret

```

```c
// XorRand8::XorRand8 @ 0x8adfca8

/* DWARF original prototype: void XorRand8(XorRand8 * this, uint64 seed) */

void __thiscall XorRand8::XorRand8(XorRand8 *this,uint64 seed)

{
  this->m_counter = seed;
  return;
}

```

---

## getInt64

```asm
// === 08adfcec XorRand8::getInt64  [0x08adfcec-0x8adfcff] ===
 8adfcec:	55                   	push   %ebp
 8adfced:	89 e5                	mov    %esp,%ebp
 8adfcef:	83 ec 18             	sub    $0x18,%esp
 8adfcf2:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfcf5:	89 04 24             	mov    %eax,(%esp)
 8adfcf8:	e8 03 00 00 00       	call   8adfd00 <_ZN8XorRand89getUInt64Ev>
 8adfcfd:	c9                   	leave
 8adfcfe:	c3                   	ret
 8adfcff:	90                   	nop

```

```c
// XorRand8::getInt64 @ 0x8adfcec

/* DWARF original prototype: int64 getInt64(XorRand8 * this) */

int64 __thiscall XorRand8::getInt64(XorRand8 *this)

{
  uint64 uVar1;
  
  uVar1 = getUInt64(this);
  return uVar1;
}

```

---

## getStaticInt64

```asm
// === 08adfea0 XorRand8::getStaticInt64  [0x08adfea0-0x8adfec5] ===
 8adfea0:	55                   	push   %ebp
 8adfea1:	89 e5                	mov    %esp,%ebp
 8adfea3:	83 ec 28             	sub    $0x28,%esp
 8adfea6:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfea9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adfeac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adfeaf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adfeb2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adfeb5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8adfeb8:	89 04 24             	mov    %eax,(%esp)
 8adfebb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adfebf:	e8 02 00 00 00       	call   8adfec6 <_ZN8XorRand815getStaticUInt64Ey>
 8adfec4:	c9                   	leave
 8adfec5:	c3                   	ret

```

```c
// XorRand8::getStaticInt64 @ 0x8adfea0

int64 __thiscall XorRand8::getStaticInt64(XorRand8 *this,uint64 seed)

{
  uint64 uVar1;
  undefined4 in_stack_ffffffdc;
  
  uVar1 = getStaticUInt64(this,CONCAT44(in_stack_ffffffdc,(undefined4)seed));
  return uVar1;
}

```

---

## getStaticInt64_08ae0022

```asm
// === 08ae0022 XorRand8::getStaticInt64  [0x08ae0022-0x8ae0033] ===
 8ae0022:	55                   	push   %ebp
 8ae0023:	89 e5                	mov    %esp,%ebp
 8ae0025:	83 ec 08             	sub    $0x8,%esp
 8ae0028:	e8 07 00 00 00       	call   8ae0034 <_ZN8XorRand815getStaticUInt64Ev>
 8ae002d:	89 c2                	mov    %eax,%edx
 8ae002f:	c1 fa 1f             	sar    $0x1f,%edx
 8ae0032:	c9                   	leave
 8ae0033:	c3                   	ret

```

```c
// XorRand8::getStaticInt64 @ 0x8ae0022

int64 XorRand8::getStaticInt64(void)

{
  uint64 uVar1;
  
  uVar1 = getStaticUInt64();
  return (int64)(int)uVar1;
}

```

---

## getStaticUInt64

```asm
// === 08adfec6 XorRand8::getStaticUInt64  [0x08adfec6-0x8ae0021] ===
 8adfec6:	55                   	push   %ebp
 8adfec7:	89 e5                	mov    %esp,%ebp
 8adfec9:	57                   	push   %edi
 8adfeca:	56                   	push   %esi
 8adfecb:	53                   	push   %ebx
 8adfecc:	83 ec 4c             	sub    $0x4c,%esp
 8adfecf:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfed2:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8adfed5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adfed8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8adfedb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8adfede:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8adfee1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfee4:	0f b6 00             	movzbl (%eax),%eax
 8adfee7:	0f b6 c0             	movzbl %al,%eax
 8adfeea:	8b 0c c5 c0 3c e3 08 	mov    0x8e33cc0(,%eax,8),%ecx
 8adfef1:	8b 1c c5 c4 3c e3 08 	mov    0x8e33cc4(,%eax,8),%ebx
 8adfef8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfefb:	83 c0 01             	add    $0x1,%eax
 8adfefe:	0f b6 00             	movzbl (%eax),%eax
 8adff01:	0f b6 c0             	movzbl %al,%eax
 8adff04:	8b 14 c5 c4 44 e3 08 	mov    0x8e344c4(,%eax,8),%edx
 8adff0b:	8b 04 c5 c0 44 e3 08 	mov    0x8e344c0(,%eax,8),%eax
 8adff12:	89 ce                	mov    %ecx,%esi
 8adff14:	31 c6                	xor    %eax,%esi
 8adff16:	89 df                	mov    %ebx,%edi
 8adff18:	31 d7                	xor    %edx,%edi
 8adff1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adff1d:	83 c0 02             	add    $0x2,%eax
 8adff20:	0f b6 00             	movzbl (%eax),%eax
 8adff23:	0f b6 c0             	movzbl %al,%eax
 8adff26:	8b 14 c5 c4 4c e3 08 	mov    0x8e34cc4(,%eax,8),%edx
 8adff2d:	8b 04 c5 c0 4c e3 08 	mov    0x8e34cc0(,%eax,8),%eax
 8adff34:	89 f1                	mov    %esi,%ecx
 8adff36:	31 c1                	xor    %eax,%ecx
 8adff38:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 8adff3b:	89 f9                	mov    %edi,%ecx
 8adff3d:	31 d1                	xor    %edx,%ecx
 8adff3f:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8adff42:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adff45:	83 c0 03             	add    $0x3,%eax
 8adff48:	0f b6 00             	movzbl (%eax),%eax
 8adff4b:	0f b6 c0             	movzbl %al,%eax
 8adff4e:	8b 14 c5 c4 54 e3 08 	mov    0x8e354c4(,%eax,8),%edx
 8adff55:	8b 04 c5 c0 54 e3 08 	mov    0x8e354c0(,%eax,8),%eax
 8adff5c:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8adff5f:	31 c1                	xor    %eax,%ecx
 8adff61:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 8adff64:	8b 4d b4             	mov    -0x4c(%ebp),%ecx
 8adff67:	31 d1                	xor    %edx,%ecx
 8adff69:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 8adff6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adff6f:	83 c0 04             	add    $0x4,%eax
 8adff72:	0f b6 00             	movzbl (%eax),%eax
 8adff75:	0f b6 c0             	movzbl %al,%eax
 8adff78:	8b 14 c5 c4 5c e3 08 	mov    0x8e35cc4(,%eax,8),%edx
 8adff7f:	8b 04 c5 c0 5c e3 08 	mov    0x8e35cc0(,%eax,8),%eax
 8adff86:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8adff89:	31 c1                	xor    %eax,%ecx
 8adff8b:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8adff8e:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8adff91:	31 d1                	xor    %edx,%ecx
 8adff93:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 8adff96:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adff99:	83 c0 05             	add    $0x5,%eax
 8adff9c:	0f b6 00             	movzbl (%eax),%eax
 8adff9f:	0f b6 c0             	movzbl %al,%eax
 8adffa2:	8b 14 c5 c4 64 e3 08 	mov    0x8e364c4(,%eax,8),%edx
 8adffa9:	8b 04 c5 c0 64 e3 08 	mov    0x8e364c0(,%eax,8),%eax
 8adffb0:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8adffb3:	31 c1                	xor    %eax,%ecx
 8adffb5:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 8adffb8:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8adffbb:	31 d1                	xor    %edx,%ecx
 8adffbd:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 8adffc0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adffc3:	83 c0 06             	add    $0x6,%eax
 8adffc6:	0f b6 00             	movzbl (%eax),%eax
 8adffc9:	0f b6 c0             	movzbl %al,%eax
 8adffcc:	8b 14 c5 c4 6c e3 08 	mov    0x8e36cc4(,%eax,8),%edx
 8adffd3:	8b 04 c5 c0 6c e3 08 	mov    0x8e36cc0(,%eax,8),%eax
 8adffda:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 8adffdd:	31 c1                	xor    %eax,%ecx
 8adffdf:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8adffe2:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8adffe5:	31 d1                	xor    %edx,%ecx
 8adffe7:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8adffea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adffed:	83 c0 07             	add    $0x7,%eax
 8adfff0:	0f b6 00             	movzbl (%eax),%eax
 8adfff3:	0f b6 c0             	movzbl %al,%eax
 8adfff6:	8b 14 c5 c4 74 e3 08 	mov    0x8e374c4(,%eax,8),%edx
 8adfffd:	8b 04 c5 c0 74 e3 08 	mov    0x8e374c0(,%eax,8),%eax
 8ae0004:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8ae0007:	31 c1                	xor    %eax,%ecx
 8ae0009:	89 4d a8             	mov    %ecx,-0x58(%ebp)
 8ae000c:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8ae000f:	31 d1                	xor    %edx,%ecx
 8ae0011:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 8ae0014:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8ae0017:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8ae001a:	83 c4 4c             	add    $0x4c,%esp
 8ae001d:	5b                   	pop    %ebx
 8ae001e:	5e                   	pop    %esi
 8ae001f:	5f                   	pop    %edi
 8ae0020:	5d                   	pop    %ebp
 8ae0021:	c3                   	ret

```

```c
// XorRand8::getStaticUInt64 @ 0x8adfec6

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint64 __thiscall XorRand8::getStaticUInt64(XorRand8 *this,uint64 seed)

{
  uint uVar1;
  uint uVar2;
  byte bStack_27;
  byte bStack_26;
  byte bStack_25;
  
                    /* Unresolved local var: uint8 * c@[???] */
  uVar1 = (uint)this >> 8 & 0xff;
  uVar2 = (uint)this >> 0x10 & 0xff;
  bStack_27 = (byte)(seed >> 8);
  bStack_26 = (byte)(seed >> 0x10);
  bStack_25 = (byte)(seed >> 0x18);
  return CONCAT44(*(uint *)((int)ms_table0 + ((uint)this & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table1 + uVar1 * 8 + 4) ^
                  *(uint *)((int)ms_table2 + uVar2 * 8 + 4) ^
                  *(uint *)((int)ms_table3 + ((uint)this >> 0x18) * 8 + 4) ^
                  *(uint *)((int)ms_table4 + ((uint)seed & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table5 + (uint)bStack_27 * 8 + 4) ^
                  *(uint *)((int)ms_table6 + (uint)bStack_26 * 8 + 4) ^
                  *(uint *)((int)ms_table7 + (uint)bStack_25 * 8 + 4),
                  (uint)ms_table0[(uint)this & 0xff] ^ (uint)ms_table1[uVar1] ^
                  (uint)ms_table2[uVar2] ^ (uint)ms_table3[(uint)this >> 0x18] ^
                  (uint)ms_table4[(uint)seed & 0xff] ^ (uint)ms_table5[bStack_27] ^
                  (uint)ms_table6[bStack_26] ^ (uint)ms_table7[bStack_25]);
}

```

---

## getStaticUInt64_08ae0034

```asm
// === 08ae0034 XorRand8::getStaticUInt64  [0x08ae0034-0x8ae0205] ===
 8ae0034:	55                   	push   %ebp
 8ae0035:	89 e5                	mov    %esp,%ebp
 8ae0037:	56                   	push   %esi
 8ae0038:	53                   	push   %ebx
 8ae0039:	83 ec 70             	sub    $0x70,%esp
 8ae003c:	65 0f b6 05 e8 ff ff 	movzbl %gs:0xffffffe8,%eax
 8ae0043:	ff 
 8ae0044:	83 f0 01             	xor    $0x1,%eax
 8ae0047:	84 c0                	test   %al,%al
 8ae0049:	74 47                	je     8ae0092 <_ZN8XorRand815getStaticUInt64Ev+0x5e>
 8ae004b:	e8 e0 dd 59 ff       	call   807de30 <clock@plt>
 8ae0050:	89 c3                	mov    %eax,%ebx
 8ae0052:	89 c6                	mov    %eax,%esi
 8ae0054:	c1 fe 1f             	sar    $0x1f,%esi
 8ae0057:	e8 e4 e6 59 ff       	call   807e740 <pthread_self@plt>
 8ae005c:	ba 00 00 00 00       	mov    $0x0,%edx
 8ae0061:	01 d8                	add    %ebx,%eax
 8ae0063:	11 f2                	adc    %esi,%edx
 8ae0065:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ae0068:	89 55 f4             	mov    %edx,-0xc(%ebp)
 8ae006b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ae006e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ae0071:	89 04 24             	mov    %eax,(%esp)
 8ae0074:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ae0078:	e8 49 fe ff ff       	call   8adfec6 <_ZN8XorRand815getStaticUInt64Ey>
 8ae007d:	65 a3 f0 ff ff ff    	mov    %eax,%gs:0xfffffff0
 8ae0083:	65 89 15 f4 ff ff ff 	mov    %edx,%gs:0xfffffff4
 8ae008a:	65 c6 05 e8 ff ff ff 	movb   $0x1,%gs:0xffffffe8
 8ae0091:	01 
 8ae0092:	65 a1 f0 ff ff ff    	mov    %gs:0xfffffff0,%eax
 8ae0098:	65 8b 15 f4 ff ff ff 	mov    %gs:0xfffffff4,%edx
 8ae009f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ae00a2:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8ae00a5:	83 c0 01             	add    $0x1,%eax
 8ae00a8:	83 d2 00             	adc    $0x0,%edx
 8ae00ab:	65 a3 f0 ff ff ff    	mov    %eax,%gs:0xfffffff0
 8ae00b1:	65 89 15 f4 ff ff ff 	mov    %edx,%gs:0xfffffff4
 8ae00b8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ae00bb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ae00be:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae00c1:	0f b6 00             	movzbl (%eax),%eax
 8ae00c4:	0f b6 c0             	movzbl %al,%eax
 8ae00c7:	8b 0c c5 c0 3c e3 08 	mov    0x8e33cc0(,%eax,8),%ecx
 8ae00ce:	8b 1c c5 c4 3c e3 08 	mov    0x8e33cc4(,%eax,8),%ebx
 8ae00d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae00d8:	83 c0 01             	add    $0x1,%eax
 8ae00db:	0f b6 00             	movzbl (%eax),%eax
 8ae00de:	0f b6 c0             	movzbl %al,%eax
 8ae00e1:	8b 14 c5 c4 44 e3 08 	mov    0x8e344c4(,%eax,8),%edx
 8ae00e8:	8b 04 c5 c0 44 e3 08 	mov    0x8e344c0(,%eax,8),%eax
 8ae00ef:	89 ce                	mov    %ecx,%esi
 8ae00f1:	31 c6                	xor    %eax,%esi
 8ae00f3:	89 75 a8             	mov    %esi,-0x58(%ebp)
 8ae00f6:	89 de                	mov    %ebx,%esi
 8ae00f8:	31 d6                	xor    %edx,%esi
 8ae00fa:	89 75 ac             	mov    %esi,-0x54(%ebp)
 8ae00fd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae0100:	83 c0 02             	add    $0x2,%eax
 8ae0103:	0f b6 00             	movzbl (%eax),%eax
 8ae0106:	0f b6 c0             	movzbl %al,%eax
 8ae0109:	8b 14 c5 c4 4c e3 08 	mov    0x8e34cc4(,%eax,8),%edx
 8ae0110:	8b 04 c5 c0 4c e3 08 	mov    0x8e34cc0(,%eax,8),%eax
 8ae0117:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 8ae011a:	31 c1                	xor    %eax,%ecx
 8ae011c:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 8ae011f:	8b 75 ac             	mov    -0x54(%ebp),%esi
 8ae0122:	31 d6                	xor    %edx,%esi
 8ae0124:	89 75 b4             	mov    %esi,-0x4c(%ebp)
 8ae0127:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae012a:	83 c0 03             	add    $0x3,%eax
 8ae012d:	0f b6 00             	movzbl (%eax),%eax
 8ae0130:	0f b6 c0             	movzbl %al,%eax
 8ae0133:	8b 14 c5 c4 54 e3 08 	mov    0x8e354c4(,%eax,8),%edx
 8ae013a:	8b 04 c5 c0 54 e3 08 	mov    0x8e354c0(,%eax,8),%eax
 8ae0141:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8ae0144:	31 c1                	xor    %eax,%ecx
 8ae0146:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 8ae0149:	8b 75 b4             	mov    -0x4c(%ebp),%esi
 8ae014c:	31 d6                	xor    %edx,%esi
 8ae014e:	89 75 bc             	mov    %esi,-0x44(%ebp)
 8ae0151:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae0154:	83 c0 04             	add    $0x4,%eax
 8ae0157:	0f b6 00             	movzbl (%eax),%eax
 8ae015a:	0f b6 c0             	movzbl %al,%eax
 8ae015d:	8b 14 c5 c4 5c e3 08 	mov    0x8e35cc4(,%eax,8),%edx
 8ae0164:	8b 04 c5 c0 5c e3 08 	mov    0x8e35cc0(,%eax,8),%eax
 8ae016b:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8ae016e:	31 c1                	xor    %eax,%ecx
 8ae0170:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8ae0173:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8ae0176:	31 d6                	xor    %edx,%esi
 8ae0178:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 8ae017b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae017e:	83 c0 05             	add    $0x5,%eax
 8ae0181:	0f b6 00             	movzbl (%eax),%eax
 8ae0184:	0f b6 c0             	movzbl %al,%eax
 8ae0187:	8b 14 c5 c4 64 e3 08 	mov    0x8e364c4(,%eax,8),%edx
 8ae018e:	8b 04 c5 c0 64 e3 08 	mov    0x8e364c0(,%eax,8),%eax
 8ae0195:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8ae0198:	31 c1                	xor    %eax,%ecx
 8ae019a:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 8ae019d:	8b 75 c4             	mov    -0x3c(%ebp),%esi
 8ae01a0:	31 d6                	xor    %edx,%esi
 8ae01a2:	89 75 cc             	mov    %esi,-0x34(%ebp)
 8ae01a5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae01a8:	83 c0 06             	add    $0x6,%eax
 8ae01ab:	0f b6 00             	movzbl (%eax),%eax
 8ae01ae:	0f b6 c0             	movzbl %al,%eax
 8ae01b1:	8b 14 c5 c4 6c e3 08 	mov    0x8e36cc4(,%eax,8),%edx
 8ae01b8:	8b 04 c5 c0 6c e3 08 	mov    0x8e36cc0(,%eax,8),%eax
 8ae01bf:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 8ae01c2:	31 c1                	xor    %eax,%ecx
 8ae01c4:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8ae01c7:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8ae01ca:	31 d6                	xor    %edx,%esi
 8ae01cc:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 8ae01cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ae01d2:	83 c0 07             	add    $0x7,%eax
 8ae01d5:	0f b6 00             	movzbl (%eax),%eax
 8ae01d8:	0f b6 c0             	movzbl %al,%eax
 8ae01db:	8b 14 c5 c4 74 e3 08 	mov    0x8e374c4(,%eax,8),%edx
 8ae01e2:	8b 04 c5 c0 74 e3 08 	mov    0x8e374c0(,%eax,8),%eax
 8ae01e9:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8ae01ec:	31 c1                	xor    %eax,%ecx
 8ae01ee:	89 4d a0             	mov    %ecx,-0x60(%ebp)
 8ae01f1:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8ae01f4:	31 d6                	xor    %edx,%esi
 8ae01f6:	89 75 a4             	mov    %esi,-0x5c(%ebp)
 8ae01f9:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8ae01fc:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8ae01ff:	83 c4 70             	add    $0x70,%esp
 8ae0202:	5b                   	pop    %ebx
 8ae0203:	5e                   	pop    %esi
 8ae0204:	5d                   	pop    %ebp
 8ae0205:	c3                   	ret

```

```c
// XorRand8::getStaticUInt64 @ 0x8ae0034

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint64 XorRand8::getStaticUInt64(void)

{
  uint uVar1;
  uint uVar2;
  pthread_t pVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int in_GS_OFFSET;
  uint64 uVar8;
  undefined4 in_stack_ffffff8c;
  
                    /* Unresolved local var: uint64 s_counter@[???]
                       Unresolved local var: bool s_isCounterInited@[???]
                       Unresolved local var: uint64 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  if (*(char *)(in_GS_OFFSET + -0x18) != '\x01') {
                    /* Unresolved local var: uint64 seed@[???] */
    uVar2 = clock();
    pVar3 = pthread_self();
    uVar8 = getStaticUInt64((XorRand8 *)(pVar3 + uVar2),
                            CONCAT44(in_stack_ffffff8c,
                                     ((int)uVar2 >> 0x1f) + (uint)CARRY4(pVar3,uVar2)));
    *(uint64 *)(in_GS_OFFSET + -0x10) = uVar8;
    *(undefined1 *)(in_GS_OFFSET + -0x18) = 1;
  }
  uVar2 = *(uint *)(in_GS_OFFSET + -0x10);
  uVar1 = *(uint *)(in_GS_OFFSET + -0xc);
  *(uint *)(in_GS_OFFSET + -0x10) = uVar2 + 1;
  *(uint *)(in_GS_OFFSET + -0xc) = uVar1 + (0xfffffffe < uVar2);
  uVar4 = uVar2 >> 8 & 0xff;
  uVar5 = uVar2 >> 0x10 & 0xff;
  uVar6 = uVar1 >> 8 & 0xff;
  uVar7 = uVar1 >> 0x10 & 0xff;
  return CONCAT44(*(uint *)((int)ms_table0 + (uVar2 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table1 + uVar4 * 8 + 4) ^
                  *(uint *)((int)ms_table2 + uVar5 * 8 + 4) ^
                  *(uint *)((int)ms_table3 + (uVar2 >> 0x18) * 8 + 4) ^
                  *(uint *)((int)ms_table4 + (uVar1 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table5 + uVar6 * 8 + 4) ^
                  *(uint *)((int)ms_table6 + uVar7 * 8 + 4) ^
                  *(uint *)((int)ms_table7 + (uVar1 >> 0x18) * 8 + 4),
                  (uint)ms_table0[uVar2 & 0xff] ^ (uint)ms_table1[uVar4] ^ (uint)ms_table2[uVar5] ^
                  (uint)ms_table3[uVar2 >> 0x18] ^ (uint)ms_table4[uVar1 & 0xff] ^
                  (uint)ms_table5[uVar6] ^ (uint)ms_table6[uVar7] ^ (uint)ms_table7[uVar1 >> 0x18]);
}

```

---

## getUInt64

```asm
// === 08adfd00 XorRand8::getUInt64  [0x08adfd00-0x8adfe6b] ===
 8adfd00:	55                   	push   %ebp
 8adfd01:	89 e5                	mov    %esp,%ebp
 8adfd03:	57                   	push   %edi
 8adfd04:	56                   	push   %esi
 8adfd05:	53                   	push   %ebx
 8adfd06:	83 ec 44             	sub    $0x44,%esp
 8adfd09:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfd0c:	8b 50 04             	mov    0x4(%eax),%edx
 8adfd0f:	8b 00                	mov    (%eax),%eax
 8adfd11:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8adfd14:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 8adfd17:	83 c0 01             	add    $0x1,%eax
 8adfd1a:	83 d2 00             	adc    $0x0,%edx
 8adfd1d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8adfd20:	89 01                	mov    %eax,(%ecx)
 8adfd22:	89 51 04             	mov    %edx,0x4(%ecx)
 8adfd25:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8adfd28:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8adfd2b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfd2e:	0f b6 00             	movzbl (%eax),%eax
 8adfd31:	0f b6 c0             	movzbl %al,%eax
 8adfd34:	8b 0c c5 c0 3c e3 08 	mov    0x8e33cc0(,%eax,8),%ecx
 8adfd3b:	8b 1c c5 c4 3c e3 08 	mov    0x8e33cc4(,%eax,8),%ebx
 8adfd42:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfd45:	83 c0 01             	add    $0x1,%eax
 8adfd48:	0f b6 00             	movzbl (%eax),%eax
 8adfd4b:	0f b6 c0             	movzbl %al,%eax
 8adfd4e:	8b 14 c5 c4 44 e3 08 	mov    0x8e344c4(,%eax,8),%edx
 8adfd55:	8b 04 c5 c0 44 e3 08 	mov    0x8e344c0(,%eax,8),%eax
 8adfd5c:	89 ce                	mov    %ecx,%esi
 8adfd5e:	31 c6                	xor    %eax,%esi
 8adfd60:	89 df                	mov    %ebx,%edi
 8adfd62:	31 d7                	xor    %edx,%edi
 8adfd64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfd67:	83 c0 02             	add    $0x2,%eax
 8adfd6a:	0f b6 00             	movzbl (%eax),%eax
 8adfd6d:	0f b6 c0             	movzbl %al,%eax
 8adfd70:	8b 14 c5 c4 4c e3 08 	mov    0x8e34cc4(,%eax,8),%edx
 8adfd77:	8b 04 c5 c0 4c e3 08 	mov    0x8e34cc0(,%eax,8),%eax
 8adfd7e:	89 f1                	mov    %esi,%ecx
 8adfd80:	31 c1                	xor    %eax,%ecx
 8adfd82:	89 4d b8             	mov    %ecx,-0x48(%ebp)
 8adfd85:	89 f9                	mov    %edi,%ecx
 8adfd87:	31 d1                	xor    %edx,%ecx
 8adfd89:	89 4d bc             	mov    %ecx,-0x44(%ebp)
 8adfd8c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfd8f:	83 c0 03             	add    $0x3,%eax
 8adfd92:	0f b6 00             	movzbl (%eax),%eax
 8adfd95:	0f b6 c0             	movzbl %al,%eax
 8adfd98:	8b 14 c5 c4 54 e3 08 	mov    0x8e354c4(,%eax,8),%edx
 8adfd9f:	8b 04 c5 c0 54 e3 08 	mov    0x8e354c0(,%eax,8),%eax
 8adfda6:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8adfda9:	31 c1                	xor    %eax,%ecx
 8adfdab:	89 4d c0             	mov    %ecx,-0x40(%ebp)
 8adfdae:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8adfdb1:	31 d1                	xor    %edx,%ecx
 8adfdb3:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 8adfdb6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfdb9:	83 c0 04             	add    $0x4,%eax
 8adfdbc:	0f b6 00             	movzbl (%eax),%eax
 8adfdbf:	0f b6 c0             	movzbl %al,%eax
 8adfdc2:	8b 14 c5 c4 5c e3 08 	mov    0x8e35cc4(,%eax,8),%edx
 8adfdc9:	8b 04 c5 c0 5c e3 08 	mov    0x8e35cc0(,%eax,8),%eax
 8adfdd0:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8adfdd3:	31 c1                	xor    %eax,%ecx
 8adfdd5:	89 4d c8             	mov    %ecx,-0x38(%ebp)
 8adfdd8:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 8adfddb:	31 d1                	xor    %edx,%ecx
 8adfddd:	89 4d cc             	mov    %ecx,-0x34(%ebp)
 8adfde0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfde3:	83 c0 05             	add    $0x5,%eax
 8adfde6:	0f b6 00             	movzbl (%eax),%eax
 8adfde9:	0f b6 c0             	movzbl %al,%eax
 8adfdec:	8b 14 c5 c4 64 e3 08 	mov    0x8e364c4(,%eax,8),%edx
 8adfdf3:	8b 04 c5 c0 64 e3 08 	mov    0x8e364c0(,%eax,8),%eax
 8adfdfa:	8b 4d c8             	mov    -0x38(%ebp),%ecx
 8adfdfd:	31 c1                	xor    %eax,%ecx
 8adfdff:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8adfe02:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 8adfe05:	31 d1                	xor    %edx,%ecx
 8adfe07:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8adfe0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfe0d:	83 c0 06             	add    $0x6,%eax
 8adfe10:	0f b6 00             	movzbl (%eax),%eax
 8adfe13:	0f b6 c0             	movzbl %al,%eax
 8adfe16:	8b 14 c5 c4 6c e3 08 	mov    0x8e36cc4(,%eax,8),%edx
 8adfe1d:	8b 04 c5 c0 6c e3 08 	mov    0x8e36cc0(,%eax,8),%eax
 8adfe24:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8adfe27:	31 c1                	xor    %eax,%ecx
 8adfe29:	89 4d d8             	mov    %ecx,-0x28(%ebp)
 8adfe2c:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8adfe2f:	31 d1                	xor    %edx,%ecx
 8adfe31:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 8adfe34:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adfe37:	83 c0 07             	add    $0x7,%eax
 8adfe3a:	0f b6 00             	movzbl (%eax),%eax
 8adfe3d:	0f b6 c0             	movzbl %al,%eax
 8adfe40:	8b 14 c5 c4 74 e3 08 	mov    0x8e374c4(,%eax,8),%edx
 8adfe47:	8b 04 c5 c0 74 e3 08 	mov    0x8e374c0(,%eax,8),%eax
 8adfe4e:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8adfe51:	31 c1                	xor    %eax,%ecx
 8adfe53:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 8adfe56:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8adfe59:	31 d1                	xor    %edx,%ecx
 8adfe5b:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8adfe5e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8adfe61:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8adfe64:	83 c4 44             	add    $0x44,%esp
 8adfe67:	5b                   	pop    %ebx
 8adfe68:	5e                   	pop    %esi
 8adfe69:	5f                   	pop    %edi
 8adfe6a:	5d                   	pop    %ebp
 8adfe6b:	c3                   	ret

```

```c
// XorRand8::getUInt64 @ 0x8adfd00

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DWARF original prototype: uint64 getUInt64(XorRand8 * this) */

uint64 __thiscall XorRand8::getUInt64(XorRand8 *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
                    /* Unresolved local var: uint64 value@[???]
                       Unresolved local var: uint8 * c@[???] */
  uVar1 = *(uint *)((int)&this->m_counter + 4);
  uVar2 = (uint)this->m_counter;
  *(uint *)&this->m_counter = uVar2 + 1;
  *(uint *)((int)&this->m_counter + 4) = uVar1 + (0xfffffffe < uVar2);
  uVar3 = uVar2 >> 8 & 0xff;
  uVar4 = uVar2 >> 0x10 & 0xff;
  uVar5 = uVar1 >> 8 & 0xff;
  uVar6 = uVar1 >> 0x10 & 0xff;
  return CONCAT44(*(uint *)((int)ms_table0 + (uVar2 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table1 + uVar3 * 8 + 4) ^
                  *(uint *)((int)ms_table2 + uVar4 * 8 + 4) ^
                  *(uint *)((int)ms_table3 + (uVar2 >> 0x18) * 8 + 4) ^
                  *(uint *)((int)ms_table4 + (uVar1 & 0xff) * 8 + 4) ^
                  *(uint *)((int)ms_table5 + uVar5 * 8 + 4) ^
                  *(uint *)((int)ms_table6 + uVar6 * 8 + 4) ^
                  *(uint *)((int)ms_table7 + (uVar1 >> 0x18) * 8 + 4),
                  (uint)ms_table0[uVar2 & 0xff] ^ (uint)ms_table1[uVar3] ^ (uint)ms_table2[uVar4] ^
                  (uint)ms_table3[uVar2 >> 0x18] ^ (uint)ms_table4[uVar1 & 0xff] ^
                  (uint)ms_table5[uVar5] ^ (uint)ms_table6[uVar6] ^ (uint)ms_table7[uVar1 >> 0x18]);
}

```

---

## max

```asm
// === 08adfe90 XorRand8::max  [0x08adfe90-0x8adfe9f] ===
 8adfe90:	55                   	push   %ebp
 8adfe91:	89 e5                	mov    %esp,%ebp
 8adfe93:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8adfe98:	ba ff ff ff ff       	mov    $0xffffffff,%edx
 8adfe9d:	5d                   	pop    %ebp
 8adfe9e:	c3                   	ret
 8adfe9f:	90                   	nop

```

```c
// XorRand8::max @ 0x8adfe90

/* DWARF original prototype: uint64 max(XorRand8 * this) */

uint64 __thiscall XorRand8::max(XorRand8 *this)

{
  return 0xffffffffffffffff;
}

```

---

## min

```asm
// === 08adfe80 XorRand8::min  [0x08adfe80-0x8adfe8f] ===
 8adfe80:	55                   	push   %ebp
 8adfe81:	89 e5                	mov    %esp,%ebp
 8adfe83:	b8 00 00 00 00       	mov    $0x0,%eax
 8adfe88:	ba 00 00 00 00       	mov    $0x0,%edx
 8adfe8d:	5d                   	pop    %ebp
 8adfe8e:	c3                   	ret
 8adfe8f:	90                   	nop

```

```c
// XorRand8::min @ 0x8adfe80

/* DWARF original prototype: uint64 min(XorRand8 * this) */

uint64 __thiscall XorRand8::min(XorRand8 *this)

{
  return 0;
}

```

---

## operator

```asm
// === 08adfe6c XorRand8::operator  [0x08adfe6c-0x8adfe7f] ===
 8adfe6c:	55                   	push   %ebp
 8adfe6d:	89 e5                	mov    %esp,%ebp
 8adfe6f:	83 ec 08             	sub    $0x8,%esp
 8adfe72:	8b 45 08             	mov    0x8(%ebp),%eax
 8adfe75:	89 04 24             	mov    %eax,(%esp)
 8adfe78:	e8 83 fe ff ff       	call   8adfd00 <_ZN8XorRand89getUInt64Ev>
 8adfe7d:	c9                   	leave
 8adfe7e:	c3                   	ret
 8adfe7f:	90                   	nop

```

```c
// XorRand8::operator @ 0x8adfe6c

/* DWARF original prototype: uint64 operator()(XorRand8 * this) */

uint64 __thiscall XorRand8::operator()(XorRand8 *this)

{
  uint64 uVar1;
  
  uVar1 = getUInt64(this);
  return uVar1;
}

```

---

## seed

```asm
// === 08adfcca XorRand8::seed  [0x08adfcca-0x8adfceb] ===
 8adfcca:	55                   	push   %ebp
 8adfccb:	89 e5                	mov    %esp,%ebp
 8adfccd:	83 ec 08             	sub    $0x8,%esp
 8adfcd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adfcd3:	89 45 f8             	mov    %eax,-0x8(%ebp)
 8adfcd6:	8b 45 10             	mov    0x10(%ebp),%eax
 8adfcd9:	89 45 fc             	mov    %eax,-0x4(%ebp)
 8adfcdc:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8adfcdf:	8b 45 f8             	mov    -0x8(%ebp),%eax
 8adfce2:	8b 55 fc             	mov    -0x4(%ebp),%edx
 8adfce5:	89 01                	mov    %eax,(%ecx)
 8adfce7:	89 51 04             	mov    %edx,0x4(%ecx)
 8adfcea:	c9                   	leave
 8adfceb:	c3                   	ret

```

```c
// XorRand8::seed @ 0x8adfcca

/* DWARF original prototype: void seed(XorRand8 * this, uint64 seed) */

void __thiscall XorRand8::seed(XorRand8 *this,uint64 seed)

{
  this->m_counter = seed;
  return;
}

```

