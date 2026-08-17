# std__money_base

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## _S_construct_pattern

```asm
// === 0871fa80 std::money_base::_S_construct_pattern  [0x0871fa80-0x871fc0f] ===
 871fa80:	55                   	push   %ebp
 871fa81:	89 e5                	mov    %esp,%ebp
 871fa83:	0f b6 55 14          	movzbl 0x14(%ebp),%edx
 871fa87:	53                   	push   %ebx
 871fa88:	8b 45 08             	mov    0x8(%ebp),%eax
 871fa8b:	0f b6 5d 0c          	movzbl 0xc(%ebp),%ebx
 871fa8f:	0f b6 4d 10          	movzbl 0x10(%ebp),%ecx
 871fa93:	80 fa 04             	cmp    $0x4,%dl
 871fa96:	76 18                	jbe    871fab0 <_ZNSt10money_base20_S_construct_patternEccc+0x30>
 871fa98:	c6 00 00             	movb   $0x0,(%eax)
 871fa9b:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 871fa9f:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 871faa3:	c6 40 03 00          	movb   $0x0,0x3(%eax)
 871faa7:	5b                   	pop    %ebx
 871faa8:	5d                   	pop    %ebp
 871faa9:	c2 04 00             	ret    $0x4
 871faac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 871fab0:	0f b6 d2             	movzbl %dl,%edx
 871fab3:	ff 24 95 6c 11 d0 08 	jmp    *0x8d0116c(,%edx,4)
 871faba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 871fac0:	84 db                	test   %bl,%bl
 871fac2:	0f 84 c8 00 00 00    	je     871fb90 <_ZNSt10money_base20_S_construct_patternEccc+0x110>
 871fac8:	84 c9                	test   %cl,%cl
 871faca:	c6 00 03             	movb   $0x3,(%eax)
 871facd:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 871fad1:	75 64                	jne    871fb37 <_ZNSt10money_base20_S_construct_patternEccc+0xb7>
 871fad3:	c6 40 02 04          	movb   $0x4,0x2(%eax)
 871fad7:	c6 40 03 00          	movb   $0x0,0x3(%eax)
 871fadb:	5b                   	pop    %ebx
 871fadc:	5d                   	pop    %ebp
 871fadd:	c2 04 00             	ret    $0x4
 871fae0:	84 c9                	test   %cl,%cl
 871fae2:	0f 84 90 00 00 00    	je     871fb78 <_ZNSt10money_base20_S_construct_patternEccc+0xf8>
 871fae8:	84 db                	test   %bl,%bl
 871faea:	0f 84 10 01 00 00    	je     871fc00 <_ZNSt10money_base20_S_construct_patternEccc+0x180>
 871faf0:	c6 00 02             	movb   $0x2,(%eax)
 871faf3:	c6 40 02 04          	movb   $0x4,0x2(%eax)
 871faf7:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 871fafb:	c6 40 03 03          	movb   $0x3,0x3(%eax)
 871faff:	5b                   	pop    %ebx
 871fb00:	5d                   	pop    %ebp
 871fb01:	c2 04 00             	ret    $0x4
 871fb04:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 871fb08:	84 c9                	test   %cl,%cl
 871fb0a:	c6 00 03             	movb   $0x3,(%eax)
 871fb0d:	74 51                	je     871fb60 <_ZNSt10money_base20_S_construct_patternEccc+0xe0>
 871fb0f:	84 db                	test   %bl,%bl
 871fb11:	0f 84 b1 00 00 00    	je     871fbc8 <_ZNSt10money_base20_S_construct_patternEccc+0x148>
 871fb17:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 871fb1b:	c6 40 03 04          	movb   $0x4,0x3(%eax)
 871fb1f:	c6 40 02 01          	movb   $0x1,0x2(%eax)
 871fb23:	5b                   	pop    %ebx
 871fb24:	5d                   	pop    %ebp
 871fb25:	c2 04 00             	ret    $0x4
 871fb28:	84 db                	test   %bl,%bl
 871fb2a:	74 1c                	je     871fb48 <_ZNSt10money_base20_S_construct_patternEccc+0xc8>
 871fb2c:	84 c9                	test   %cl,%cl
 871fb2e:	c6 00 02             	movb   $0x2,(%eax)
 871fb31:	c6 40 01 03          	movb   $0x3,0x1(%eax)
 871fb35:	74 9c                	je     871fad3 <_ZNSt10money_base20_S_construct_patternEccc+0x53>
 871fb37:	c6 40 02 01          	movb   $0x1,0x2(%eax)
 871fb3b:	c6 40 03 04          	movb   $0x4,0x3(%eax)
 871fb3f:	5b                   	pop    %ebx
 871fb40:	5d                   	pop    %ebp
 871fb41:	c2 04 00             	ret    $0x4
 871fb44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 871fb48:	84 c9                	test   %cl,%cl
 871fb4a:	c6 00 04             	movb   $0x4,(%eax)
 871fb4d:	74 59                	je     871fba8 <_ZNSt10money_base20_S_construct_patternEccc+0x128>
 871fb4f:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 871fb53:	c6 40 02 02          	movb   $0x2,0x2(%eax)
 871fb57:	c6 40 03 03          	movb   $0x3,0x3(%eax)
 871fb5b:	e9 47 ff ff ff       	jmp    871faa7 <_ZNSt10money_base20_S_construct_patternEccc+0x27>
 871fb60:	84 db                	test   %bl,%bl
 871fb62:	74 54                	je     871fbb8 <_ZNSt10money_base20_S_construct_patternEccc+0x138>
 871fb64:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 871fb68:	c6 40 02 04          	movb   $0x4,0x2(%eax)
 871fb6c:	c6 40 03 00          	movb   $0x0,0x3(%eax)
 871fb70:	5b                   	pop    %ebx
 871fb71:	5d                   	pop    %ebp
 871fb72:	c2 04 00             	ret    $0x4
 871fb75:	8d 76 00             	lea    0x0(%esi),%esi
 871fb78:	84 db                	test   %bl,%bl
 871fb7a:	74 74                	je     871fbf0 <_ZNSt10money_base20_S_construct_patternEccc+0x170>
 871fb7c:	c6 00 02             	movb   $0x2,(%eax)
 871fb7f:	c6 40 01 04          	movb   $0x4,0x1(%eax)
 871fb83:	c6 40 02 03          	movb   $0x3,0x2(%eax)
 871fb87:	c6 40 03 00          	movb   $0x0,0x3(%eax)
 871fb8b:	5b                   	pop    %ebx
 871fb8c:	5d                   	pop    %ebp
 871fb8d:	c2 04 00             	ret    $0x4
 871fb90:	84 c9                	test   %cl,%cl
 871fb92:	c6 00 04             	movb   $0x4,(%eax)
 871fb95:	74 41                	je     871fbd8 <_ZNSt10money_base20_S_construct_patternEccc+0x158>
 871fb97:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 871fb9b:	c6 40 02 03          	movb   $0x3,0x2(%eax)
 871fb9f:	c6 40 03 02          	movb   $0x2,0x3(%eax)
 871fba3:	e9 ff fe ff ff       	jmp    871faa7 <_ZNSt10money_base20_S_construct_patternEccc+0x27>
 871fba8:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 871fbac:	c6 40 02 03          	movb   $0x3,0x2(%eax)
 871fbb0:	eb ba                	jmp    871fb6c <_ZNSt10money_base20_S_construct_patternEccc+0xec>
 871fbb2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 871fbb8:	c6 40 01 04          	movb   $0x4,0x1(%eax)
 871fbbc:	c6 40 02 02          	movb   $0x2,0x2(%eax)
 871fbc0:	eb aa                	jmp    871fb6c <_ZNSt10money_base20_S_construct_patternEccc+0xec>
 871fbc2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 871fbc8:	c6 40 01 04          	movb   $0x4,0x1(%eax)
 871fbcc:	c6 40 03 02          	movb   $0x2,0x3(%eax)
 871fbd0:	e9 4a ff ff ff       	jmp    871fb1f <_ZNSt10money_base20_S_construct_patternEccc+0x9f>
 871fbd5:	8d 76 00             	lea    0x0(%esi),%esi
 871fbd8:	c6 40 01 03          	movb   $0x3,0x1(%eax)
 871fbdc:	c6 40 02 02          	movb   $0x2,0x2(%eax)
 871fbe0:	c6 40 03 00          	movb   $0x0,0x3(%eax)
 871fbe4:	e9 be fe ff ff       	jmp    871faa7 <_ZNSt10money_base20_S_construct_patternEccc+0x27>
 871fbe9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 871fbf0:	c6 00 04             	movb   $0x4,(%eax)
 871fbf3:	c6 40 01 02          	movb   $0x2,0x1(%eax)
 871fbf7:	eb 8a                	jmp    871fb83 <_ZNSt10money_base20_S_construct_patternEccc+0x103>
 871fbf9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 871fc00:	c6 00 04             	movb   $0x4,(%eax)
 871fc03:	c6 40 02 02          	movb   $0x2,0x2(%eax)
 871fc07:	e9 eb fe ff ff       	jmp    871faf7 <_ZNSt10money_base20_S_construct_patternEccc+0x77>
 871fc0c:	90                   	nop
 871fc0d:	90                   	nop
 871fc0e:	90                   	nop
 871fc0f:	90                   	nop

```

```c
// std::money_base::_S_construct_pattern @ 0x871fa80

/* std::money_base::_S_construct_pattern(char, char, char) */

void __thiscall
std::money_base::_S_construct_pattern(money_base *this,char param_1,char param_2,char param_3)

{
  switch(param_3) {
  case '\0':
  case '\x01':
    *this = (money_base)0x3;
    if (param_2 != '\0') {
      if (param_1 == '\0') {
        this[1] = (money_base)0x4;
        this[3] = (money_base)0x2;
      }
      else {
        this[1] = (money_base)0x2;
        this[3] = (money_base)0x4;
      }
      this[2] = (money_base)0x1;
      return;
    }
    if (param_1 == '\0') {
      this[1] = (money_base)0x4;
      this[2] = (money_base)0x2;
    }
    else {
      this[1] = (money_base)0x2;
      this[2] = (money_base)0x4;
    }
    break;
  case '\x02':
    if (param_2 == '\0') {
      if (param_1 == '\0') {
        *this = (money_base)0x4;
        this[1] = (money_base)0x2;
      }
      else {
        *this = (money_base)0x2;
        this[1] = (money_base)0x4;
      }
      this[2] = (money_base)0x3;
      this[3] = (money_base)0x0;
      return;
    }
    if (param_1 == '\0') {
      *this = (money_base)0x4;
      this[2] = (money_base)0x2;
    }
    else {
      *this = (money_base)0x2;
      this[2] = (money_base)0x4;
    }
    this[1] = (money_base)0x1;
    this[3] = (money_base)0x3;
    return;
  case '\x03':
    if (param_1 == '\0') {
      *this = (money_base)0x4;
      if (param_2 != '\0') {
        this[1] = (money_base)0x1;
        this[2] = (money_base)0x3;
        this[3] = (money_base)0x2;
        return;
      }
      this[1] = (money_base)0x3;
      this[2] = (money_base)0x2;
      this[3] = (money_base)0x0;
      return;
    }
    *this = (money_base)0x3;
    this[1] = (money_base)0x2;
joined_r0x0871fb35:
    if (param_2 == '\0') {
      this[2] = (money_base)0x4;
      this[3] = (money_base)0x0;
      return;
    }
    this[2] = (money_base)0x1;
    this[3] = (money_base)0x4;
    return;
  case '\x04':
    if (param_1 != '\0') {
      *this = (money_base)0x2;
      this[1] = (money_base)0x3;
      goto joined_r0x0871fb35;
    }
    *this = (money_base)0x4;
    if (param_2 != '\0') {
      this[1] = (money_base)0x1;
      this[2] = (money_base)0x2;
      this[3] = (money_base)0x3;
      return;
    }
    this[1] = (money_base)0x2;
    this[2] = (money_base)0x3;
    break;
  default:
    *this = (money_base)0x0;
    this[1] = (money_base)0x0;
    this[2] = (money_base)0x0;
    this[3] = (money_base)0x0;
    return;
  }
  this[3] = (money_base)0x0;
  return;
}

```

