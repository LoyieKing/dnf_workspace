# _S_format_float

`_ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc`

`std::__num_base::_S_format_float(std::ios_base const&, char*, char)`

| 类 | 地址 |
|---|---|
| `std::__num_base` | `0x08727220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08727220  _ZNSt10__num_base15_S_format_floatERKSt8ios_basePcc
#           std::__num_base::_S_format_float(std::ios_base const&, char*, char)
# range [0x08727220, 0x087272cf]
08727220 +0x00:  push   %ebp
08727221 +0x01:  mov    %esp,%ebp
08727223 +0x03:  mov    0x8(%ebp),%eax
08727226 +0x06:  push   %ebx
08727227 +0x07:  mov    0xc(%ebp),%ecx
0872722a +0x0a:  movzbl 0x10(%ebp),%ebx
0872722e +0x0e:  mov    0xc(%eax),%edx
08727231 +0x11:  movb   $0x25,(%ecx)
08727234 +0x14:  lea    0x1(%ecx),%eax
08727237 +0x17:  test   $0x8,%dh
0872723a +0x1a:  je     08727243 <+0x23>
0872723c +0x1c:  movb   $0x2b,0x1(%ecx)
08727240 +0x20:  lea    0x2(%ecx),%eax
08727243 +0x23:  test   $0x4,%dh
08727246 +0x26:  je     0872724e <+0x2e>
08727248 +0x28:  movb   $0x23,(%eax)
0872724b +0x2b:  add    $0x1,%eax
0872724e +0x2e:  test   %bl,%bl
08727250 +0x30:  movb   $0x2e,(%eax)
08727253 +0x33:  lea    0x2(%eax),%ecx
08727256 +0x36:  movb   $0x2a,0x1(%eax)
0872725a +0x3a:  je     08727262 <+0x42>
0872725c +0x3c:  mov    %bl,0x2(%eax)
0872725f +0x3f:  lea    0x3(%eax),%ecx
08727262 +0x42:  mov    %edx,%eax
08727264 +0x44:  and    $0x104,%eax
08727269 +0x49:  cmp    $0x4,%eax
0872726c +0x4c:  je     087272b8 <+0x98>
0872726e +0x4e:  cmp    $0x100,%eax
08727273 +0x53:  je     08727298 <+0x78>
08727275 +0x55:  and    $0x4000,%edx
0872727b +0x5b:  cmp    $0x1,%edx
0872727e +0x5e:  sbb    %eax,%eax
08727280 +0x60:  and    $0x20,%eax
08727283 +0x63:  add    $0x47,%eax
08727286 +0x66:  mov    %al,(%ecx)
08727288 +0x68:  add    $0x1,%ecx
0872728b +0x6b:  movb   $0x0,(%ecx)
0872728e +0x6e:  pop    %ebx
0872728f +0x6f:  pop    %ebp
08727290 +0x70:  ret
08727291 +0x71:  lea    0x0(%esi,%eiz,1),%esi
08727298 +0x78:  and    $0x4000,%edx
0872729e +0x7e:  cmp    $0x1,%edx
087272a1 +0x81:  sbb    %eax,%eax
087272a3 +0x83:  and    $0x20,%eax
087272a6 +0x86:  add    $0x45,%eax
087272a9 +0x89:  mov    %al,(%ecx)
087272ab +0x8b:  add    $0x1,%ecx
087272ae +0x8e:  movb   $0x0,(%ecx)
087272b1 +0x91:  pop    %ebx
087272b2 +0x92:  pop    %ebp
087272b3 +0x93:  ret
087272b4 +0x94:  lea    0x0(%esi,%eiz,1),%esi
087272b8 +0x98:  movb   $0x66,(%ecx)
087272bb +0x9b:  add    $0x1,%ecx
087272be +0x9e:  movb   $0x0,(%ecx)
087272c1 +0xa1:  pop    %ebx
087272c2 +0xa2:  pop    %ebp
087272c3 +0xa3:  ret
087272c4 +0xa4:  nop
087272c5 +0xa5:  nop
087272c6 +0xa6:  nop
087272c7 +0xa7:  nop
087272c8 +0xa8:  nop
087272c9 +0xa9:  nop
087272ca +0xaa:  nop
087272cb +0xab:  nop
087272cc +0xac:  nop
087272cd +0xad:  nop
087272ce +0xae:  nop
087272cf +0xaf:  nop
```

## 反编译 C

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
