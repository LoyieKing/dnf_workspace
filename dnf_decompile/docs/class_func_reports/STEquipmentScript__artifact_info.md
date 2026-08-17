# STEquipmentScript__artifact_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## artifact_info

```asm
// === 0898f084 STEquipmentScript::artifact_info::artifact_info  [0x0898f084-0x898f0fd] ===
 898f084:	55                   	push   %ebp
 898f085:	89 e5                	mov    %esp,%ebp
 898f087:	8b 45 08             	mov    0x8(%ebp),%eax
 898f08a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 898f090:	8b 45 08             	mov    0x8(%ebp),%eax
 898f093:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 898f09a:	8b 45 08             	mov    0x8(%ebp),%eax
 898f09d:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 898f0a4:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0a7:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0ac:	89 50 0c             	mov    %edx,0xc(%eax)
 898f0af:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0b2:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0b7:	89 50 10             	mov    %edx,0x10(%eax)
 898f0ba:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0bd:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0c2:	89 50 14             	mov    %edx,0x14(%eax)
 898f0c5:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0c8:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0cd:	89 50 18             	mov    %edx,0x18(%eax)
 898f0d0:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0d3:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0d8:	89 50 1c             	mov    %edx,0x1c(%eax)
 898f0db:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0de:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0e3:	89 50 20             	mov    %edx,0x20(%eax)
 898f0e6:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0e9:	ba 00 00 00 00       	mov    $0x0,%edx
 898f0ee:	89 50 24             	mov    %edx,0x24(%eax)
 898f0f1:	8b 45 08             	mov    0x8(%ebp),%eax
 898f0f4:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 898f0fb:	5d                   	pop    %ebp
 898f0fc:	c3                   	ret
 898f0fd:	90                   	nop

```

```c
// STEquipmentScript::artifact_info::artifact_info @ 0x898f084

/* STEquipmentScript::artifact_info::artifact_info() */

void __thiscall STEquipmentScript::artifact_info::artifact_info(artifact_info *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

```

---

## isUsable

```asm
// === 0898f0fe STEquipmentScript::artifact_info::isUsable  [0x0898f0fe-0x898f217] ===
 898f0fe:	55                   	push   %ebp
 898f0ff:	89 e5                	mov    %esp,%ebp
 898f101:	83 ec 10             	sub    $0x10,%esp
 898f104:	8b 45 08             	mov    0x8(%ebp),%eax
 898f107:	8b 00                	mov    (%eax),%eax
 898f109:	85 c0                	test   %eax,%eax
 898f10b:	0f 85 f2 00 00 00    	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f111:	8b 45 08             	mov    0x8(%ebp),%eax
 898f114:	8b 40 04             	mov    0x4(%eax),%eax
 898f117:	85 c0                	test   %eax,%eax
 898f119:	0f 85 e4 00 00 00    	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f11f:	8b 45 08             	mov    0x8(%ebp),%eax
 898f122:	8b 40 08             	mov    0x8(%eax),%eax
 898f125:	85 c0                	test   %eax,%eax
 898f127:	0f 85 d6 00 00 00    	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f12d:	8b 45 08             	mov    0x8(%ebp),%eax
 898f130:	d9 40 0c             	flds   0xc(%eax)
 898f133:	d9 ee                	fldz
 898f135:	da e9                	fucompp
 898f137:	df e0                	fnstsw %ax
 898f139:	9e                   	sahf
 898f13a:	0f 94 c0             	sete   %al
 898f13d:	0f 9b c2             	setnp  %dl
 898f140:	21 d0                	and    %edx,%eax
 898f142:	83 f0 01             	xor    $0x1,%eax
 898f145:	84 c0                	test   %al,%al
 898f147:	0f 85 b6 00 00 00    	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f14d:	8b 45 08             	mov    0x8(%ebp),%eax
 898f150:	d9 40 10             	flds   0x10(%eax)
 898f153:	d9 ee                	fldz
 898f155:	da e9                	fucompp
 898f157:	df e0                	fnstsw %ax
 898f159:	9e                   	sahf
 898f15a:	0f 94 c0             	sete   %al
 898f15d:	0f 9b c2             	setnp  %dl
 898f160:	21 d0                	and    %edx,%eax
 898f162:	83 f0 01             	xor    $0x1,%eax
 898f165:	84 c0                	test   %al,%al
 898f167:	0f 85 96 00 00 00    	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f16d:	8b 45 08             	mov    0x8(%ebp),%eax
 898f170:	d9 40 14             	flds   0x14(%eax)
 898f173:	d9 ee                	fldz
 898f175:	da e9                	fucompp
 898f177:	df e0                	fnstsw %ax
 898f179:	9e                   	sahf
 898f17a:	0f 94 c0             	sete   %al
 898f17d:	0f 9b c2             	setnp  %dl
 898f180:	21 d0                	and    %edx,%eax
 898f182:	83 f0 01             	xor    $0x1,%eax
 898f185:	84 c0                	test   %al,%al
 898f187:	75 7a                	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f189:	8b 45 08             	mov    0x8(%ebp),%eax
 898f18c:	d9 40 18             	flds   0x18(%eax)
 898f18f:	d9 ee                	fldz
 898f191:	da e9                	fucompp
 898f193:	df e0                	fnstsw %ax
 898f195:	9e                   	sahf
 898f196:	0f 94 c0             	sete   %al
 898f199:	0f 9b c2             	setnp  %dl
 898f19c:	21 d0                	and    %edx,%eax
 898f19e:	83 f0 01             	xor    $0x1,%eax
 898f1a1:	84 c0                	test   %al,%al
 898f1a3:	75 5e                	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f1a5:	8b 45 08             	mov    0x8(%ebp),%eax
 898f1a8:	d9 40 1c             	flds   0x1c(%eax)
 898f1ab:	d9 ee                	fldz
 898f1ad:	da e9                	fucompp
 898f1af:	df e0                	fnstsw %ax
 898f1b1:	9e                   	sahf
 898f1b2:	0f 94 c0             	sete   %al
 898f1b5:	0f 9b c2             	setnp  %dl
 898f1b8:	21 d0                	and    %edx,%eax
 898f1ba:	83 f0 01             	xor    $0x1,%eax
 898f1bd:	84 c0                	test   %al,%al
 898f1bf:	75 42                	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f1c1:	8b 45 08             	mov    0x8(%ebp),%eax
 898f1c4:	d9 40 20             	flds   0x20(%eax)
 898f1c7:	d9 ee                	fldz
 898f1c9:	da e9                	fucompp
 898f1cb:	df e0                	fnstsw %ax
 898f1cd:	9e                   	sahf
 898f1ce:	0f 94 c0             	sete   %al
 898f1d1:	0f 9b c2             	setnp  %dl
 898f1d4:	21 d0                	and    %edx,%eax
 898f1d6:	83 f0 01             	xor    $0x1,%eax
 898f1d9:	84 c0                	test   %al,%al
 898f1db:	75 26                	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f1dd:	8b 45 08             	mov    0x8(%ebp),%eax
 898f1e0:	d9 40 24             	flds   0x24(%eax)
 898f1e3:	d9 ee                	fldz
 898f1e5:	da e9                	fucompp
 898f1e7:	df e0                	fnstsw %ax
 898f1e9:	9e                   	sahf
 898f1ea:	0f 94 c0             	sete   %al
 898f1ed:	0f 9b c2             	setnp  %dl
 898f1f0:	21 d0                	and    %edx,%eax
 898f1f2:	83 f0 01             	xor    $0x1,%eax
 898f1f5:	84 c0                	test   %al,%al
 898f1f7:	75 0a                	jne    898f203 <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x105>
 898f1f9:	8b 45 08             	mov    0x8(%ebp),%eax
 898f1fc:	8b 40 28             	mov    0x28(%eax),%eax
 898f1ff:	85 c0                	test   %eax,%eax
 898f201:	74 07                	je     898f20a <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x10c>
 898f203:	b8 01 00 00 00       	mov    $0x1,%eax
 898f208:	eb 05                	jmp    898f20f <_ZNK17STEquipmentScript13artifact_info8isUsableEv+0x111>
 898f20a:	b8 00 00 00 00       	mov    $0x0,%eax
 898f20f:	88 45 ff             	mov    %al,-0x1(%ebp)
 898f212:	0f b6 45 ff          	movzbl -0x1(%ebp),%eax
 898f216:	c9                   	leave
 898f217:	c3                   	ret

```

```c
// STEquipmentScript::artifact_info::isUsable @ 0x898f0fe

/* STEquipmentScript::artifact_info::isUsable() const */

undefined1 __thiscall STEquipmentScript::artifact_info::isUsable(artifact_info *this)

{
  undefined1 uVar1;
  
  if ((((((*(int *)this == 0) && (*(int *)(this + 4) == 0)) && (*(int *)(this + 8) == 0)) &&
       ((*(float *)(this + 0xc) == 0.0 && (*(float *)(this + 0x10) == 0.0)))) &&
      ((*(float *)(this + 0x14) == 0.0 &&
       ((*(float *)(this + 0x18) == 0.0 && (*(float *)(this + 0x1c) == 0.0)))))) &&
     ((*(float *)(this + 0x20) == 0.0 &&
      ((*(float *)(this + 0x24) == 0.0 && (*(int *)(this + 0x28) == 0)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

