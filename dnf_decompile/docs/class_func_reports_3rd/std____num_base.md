# std____num_base

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## _S_format_float

```asm
// === 08727220 std::__num_base::_S_format_float  [0x08727220-0x87272cf] ===
 8727220:	55                   	push   %ebp
 8727221:	89 e5                	mov    %esp,%ebp
 8727223:	8b 45 08             	mov    0x8(%ebp),%eax
 8727226:	53                   	push   %ebx
 8727227:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 872722a:	0f b6 5d 10          	movzbl 0x10(%ebp),%ebx
 872722e:	8b 50 0c             	mov    0xc(%eax),%edx
 8727231:	c6 01 25             	movb   $0x25,(%ecx)
 8727234:	8d 41 01             	lea    0x1(%ecx),%eax
 8727237:	f6 c6 08             	test   $0x8,%dh
 872723a:	74 07                	je     8727243 <_ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc+0x23>
 872723c:	c6 41 01 2b          	movb   $0x2b,0x1(%ecx)
 8727240:	8d 41 02             	lea    0x2(%ecx),%eax
 8727243:	f6 c6 04             	test   $0x4,%dh
 8727246:	74 06                	je     872724e <_ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc+0x2e>
 8727248:	c6 00 23             	movb   $0x23,(%eax)
 872724b:	83 c0 01             	add    $0x1,%eax
 872724e:	84 db                	test   %bl,%bl
 8727250:	c6 00 2e             	movb   $0x2e,(%eax)
 8727253:	8d 48 02             	lea    0x2(%eax),%ecx
 8727256:	c6 40 01 2a          	movb   $0x2a,0x1(%eax)
 872725a:	74 06                	je     8727262 <_ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc+0x42>
 872725c:	88 58 02             	mov    %bl,0x2(%eax)
 872725f:	8d 48 03             	lea    0x3(%eax),%ecx
 8727262:	89 d0                	mov    %edx,%eax
 8727264:	25 04 01 00 00       	and    $0x104,%eax
 8727269:	83 f8 04             	cmp    $0x4,%eax
 872726c:	74 4a                	je     87272b8 <_ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc+0x98>
 872726e:	3d 00 01 00 00       	cmp    $0x100,%eax
 8727273:	74 23                	je     8727298 <_ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc+0x78>
 8727275:	81 e2 00 40 00 00    	and    $0x4000,%edx
 872727b:	83 fa 01             	cmp    $0x1,%edx
 872727e:	19 c0                	sbb    %eax,%eax
 8727280:	83 e0 20             	and    $0x20,%eax
 8727283:	83 c0 47             	add    $0x47,%eax
 8727286:	88 01                	mov    %al,(%ecx)
 8727288:	83 c1 01             	add    $0x1,%ecx
 872728b:	c6 01 00             	movb   $0x0,(%ecx)
 872728e:	5b                   	pop    %ebx
 872728f:	5d                   	pop    %ebp
 8727290:	c3                   	ret
 8727291:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8727298:	81 e2 00 40 00 00    	and    $0x4000,%edx
 872729e:	83 fa 01             	cmp    $0x1,%edx
 87272a1:	19 c0                	sbb    %eax,%eax
 87272a3:	83 e0 20             	and    $0x20,%eax
 87272a6:	83 c0 45             	add    $0x45,%eax
 87272a9:	88 01                	mov    %al,(%ecx)
 87272ab:	83 c1 01             	add    $0x1,%ecx
 87272ae:	c6 01 00             	movb   $0x0,(%ecx)
 87272b1:	5b                   	pop    %ebx
 87272b2:	5d                   	pop    %ebp
 87272b3:	c3                   	ret
 87272b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87272b8:	c6 01 66             	movb   $0x66,(%ecx)
 87272bb:	83 c1 01             	add    $0x1,%ecx
 87272be:	c6 01 00             	movb   $0x0,(%ecx)
 87272c1:	5b                   	pop    %ebx
 87272c2:	5d                   	pop    %ebp
 87272c3:	c3                   	ret
 87272c4:	90                   	nop
 87272c5:	90                   	nop
 87272c6:	90                   	nop
 87272c7:	90                   	nop
 87272c8:	90                   	nop
 87272c9:	90                   	nop
 87272ca:	90                   	nop
 87272cb:	90                   	nop
 87272cc:	90                   	nop
 87272cd:	90                   	nop
 87272ce:	90                   	nop
 87272cf:	90                   	nop

```

```c
// std::__num_base::_S_format_float @ 0x8727220

/* std::__num_base::_S_format_float(std::ios_base const&, char*, char) */

void std::__num_base::_S_format_float(ios_base *param_1,char *param_2,char param_3)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  *param_2 = '%';
  pcVar2 = param_2 + 1;
  if ((uVar1 & 0x800) != 0) {
    param_2[1] = '+';
    pcVar2 = param_2 + 2;
  }
  if ((uVar1 & 0x400) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '.';
  pcVar3 = pcVar2 + 2;
  pcVar2[1] = '*';
  if (param_3 != '\0') {
    pcVar2[2] = param_3;
    pcVar3 = pcVar2 + 3;
  }
  if ((uVar1 & 0x104) != 4) {
    if ((uVar1 & 0x104) != 0x100) {
      *pcVar3 = (-((uVar1 & 0x4000) == 0) & 0x20U) + 0x47;
      pcVar3[1] = '\0';
      return;
    }
    *pcVar3 = (-((uVar1 & 0x4000) == 0) & 0x20U) + 0x45;
    pcVar3[1] = '\0';
    return;
  }
  *pcVar3 = 'f';
  pcVar3[1] = '\0';
  return;
}

```

