# AvatarVariation__colorRGB

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## colorRGB

```asm
// === 088d43f0 AvatarVariation::colorRGB::colorRGB  [0x088d43f0-0x88d4409] ===
 88d43f0:	55                   	push   %ebp
 88d43f1:	89 e5                	mov    %esp,%ebp
 88d43f3:	8b 45 08             	mov    0x8(%ebp),%eax
 88d43f6:	c6 00 ff             	movb   $0xff,(%eax)
 88d43f9:	8b 45 08             	mov    0x8(%ebp),%eax
 88d43fc:	c6 40 01 ff          	movb   $0xff,0x1(%eax)
 88d4400:	8b 45 08             	mov    0x8(%ebp),%eax
 88d4403:	c6 40 02 ff          	movb   $0xff,0x2(%eax)
 88d4407:	5d                   	pop    %ebp
 88d4408:	c3                   	ret
 88d4409:	90                   	nop

```

```c
// AvatarVariation::colorRGB::colorRGB @ 0x88d43f0

/* AvatarVariation::colorRGB::colorRGB() */

void __thiscall AvatarVariation::colorRGB::colorRGB(colorRGB *this)

{
  *this = (colorRGB)0xff;
  this[1] = (colorRGB)0xff;
  this[2] = (colorRGB)0xff;
  return;
}

```

---

## operator==

```asm
// === 088d440a AvatarVariation::colorRGB::operator==  [0x088d440a-0x88d444e] ===
 88d440a:	55                   	push   %ebp
 88d440b:	89 e5                	mov    %esp,%ebp
 88d440d:	8b 45 08             	mov    0x8(%ebp),%eax
 88d4410:	0f b6 10             	movzbl (%eax),%edx
 88d4413:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d4416:	0f b6 00             	movzbl (%eax),%eax
 88d4419:	38 c2                	cmp    %al,%dl
 88d441b:	75 2b                	jne    88d4448 <_ZN15AvatarVariation8colorRGBeqERKS0_+0x3e>
 88d441d:	8b 45 08             	mov    0x8(%ebp),%eax
 88d4420:	0f b6 50 01          	movzbl 0x1(%eax),%edx
 88d4424:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d4427:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 88d442b:	38 c2                	cmp    %al,%dl
 88d442d:	75 19                	jne    88d4448 <_ZN15AvatarVariation8colorRGBeqERKS0_+0x3e>
 88d442f:	8b 45 08             	mov    0x8(%ebp),%eax
 88d4432:	0f b6 50 02          	movzbl 0x2(%eax),%edx
 88d4436:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d4439:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 88d443d:	38 c2                	cmp    %al,%dl
 88d443f:	75 07                	jne    88d4448 <_ZN15AvatarVariation8colorRGBeqERKS0_+0x3e>
 88d4441:	b8 01 00 00 00       	mov    $0x1,%eax
 88d4446:	eb 05                	jmp    88d444d <_ZN15AvatarVariation8colorRGBeqERKS0_+0x43>
 88d4448:	b8 00 00 00 00       	mov    $0x0,%eax
 88d444d:	5d                   	pop    %ebp
 88d444e:	c3                   	ret

```

```c
// AvatarVariation::colorRGB::operator== @ 0x88d440a

/* AvatarVariation::colorRGB::TEMPNAMEPLACEHOLDERVALUE(AvatarVariation::colorRGB const&) */

undefined4 __thiscall AvatarVariation::colorRGB::operator==(colorRGB *this,colorRGB *param_1)

{
  undefined4 uVar1;
  
  if (((*this == *param_1) && (this[1] == param_1[1])) && (this[2] == param_1[2])) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

