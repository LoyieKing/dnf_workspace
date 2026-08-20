# _S_construct_pattern

`_ZNSt10money_base20_S_construct_patternEccc`

`std::money_base::_S_construct_pattern(char, char, char)`

| 类 | 地址 |
|---|---|
| `std::money_base` | `0x0871fa80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871fa80  _ZNSt10money_base20_S_construct_patternEccc
#           std::money_base::_S_construct_pattern(char, char, char)
# range [0x0871fa80, 0x0871fc0f]
0871fa80 +0x000:  push   %ebp
0871fa81 +0x001:  mov    %esp,%ebp
0871fa83 +0x003:  movzbl 0x14(%ebp),%edx
0871fa87 +0x007:  push   %ebx
0871fa88 +0x008:  mov    0x8(%ebp),%eax
0871fa8b +0x00b:  movzbl 0xc(%ebp),%ebx
0871fa8f +0x00f:  movzbl 0x10(%ebp),%ecx
0871fa93 +0x013:  cmp    $0x4,%dl
0871fa96 +0x016:  jbe    0871fab0 <+0x30>
0871fa98 +0x018:  movb   $0x0,(%eax)
0871fa9b +0x01b:  movb   $0x0,0x1(%eax)
0871fa9f +0x01f:  movb   $0x0,0x2(%eax)
0871faa3 +0x023:  movb   $0x0,0x3(%eax)
0871faa7 +0x027:  pop    %ebx
0871faa8 +0x028:  pop    %ebp
0871faa9 +0x029:  ret    $0x4
0871faac +0x02c:  lea    0x0(%esi,%eiz,1),%esi
0871fab0 +0x030:  movzbl %dl,%edx
0871fab3 +0x033:  jmp    *&data#a93bb8e8(.rodata)(,%edx,4)
0871faba +0x03a:  lea    0x0(%esi),%esi
0871fac0 +0x040:  test   %bl,%bl
0871fac2 +0x042:  je     0871fb90 <+0x110>
0871fac8 +0x048:  test   %cl,%cl
0871faca +0x04a:  movb   $0x3,(%eax)
0871facd +0x04d:  movb   $0x2,0x1(%eax)
0871fad1 +0x051:  jne    0871fb37 <+0xb7>
0871fad3 +0x053:  movb   $0x4,0x2(%eax)
0871fad7 +0x057:  movb   $0x0,0x3(%eax)
0871fadb +0x05b:  pop    %ebx
0871fadc +0x05c:  pop    %ebp
0871fadd +0x05d:  ret    $0x4
0871fae0 +0x060:  test   %cl,%cl
0871fae2 +0x062:  je     0871fb78 <+0xf8>
0871fae8 +0x068:  test   %bl,%bl
0871faea +0x06a:  je     0871fc00 <+0x180>
0871faf0 +0x070:  movb   $0x2,(%eax)
0871faf3 +0x073:  movb   $0x4,0x2(%eax)
0871faf7 +0x077:  movb   $0x1,0x1(%eax)
0871fafb +0x07b:  movb   $0x3,0x3(%eax)
0871faff +0x07f:  pop    %ebx
0871fb00 +0x080:  pop    %ebp
0871fb01 +0x081:  ret    $0x4
0871fb04 +0x084:  lea    0x0(%esi,%eiz,1),%esi
0871fb08 +0x088:  test   %cl,%cl
0871fb0a +0x08a:  movb   $0x3,(%eax)
0871fb0d +0x08d:  je     0871fb60 <+0xe0>
0871fb0f +0x08f:  test   %bl,%bl
0871fb11 +0x091:  je     0871fbc8 <+0x148>
0871fb17 +0x097:  movb   $0x2,0x1(%eax)
0871fb1b +0x09b:  movb   $0x4,0x3(%eax)
0871fb1f +0x09f:  movb   $0x1,0x2(%eax)
0871fb23 +0x0a3:  pop    %ebx
0871fb24 +0x0a4:  pop    %ebp
0871fb25 +0x0a5:  ret    $0x4
0871fb28 +0x0a8:  test   %bl,%bl
0871fb2a +0x0aa:  je     0871fb48 <+0xc8>
0871fb2c +0x0ac:  test   %cl,%cl
0871fb2e +0x0ae:  movb   $0x2,(%eax)
0871fb31 +0x0b1:  movb   $0x3,0x1(%eax)
0871fb35 +0x0b5:  je     0871fad3 <+0x53>
0871fb37 +0x0b7:  movb   $0x1,0x2(%eax)
0871fb3b +0x0bb:  movb   $0x4,0x3(%eax)
0871fb3f +0x0bf:  pop    %ebx
0871fb40 +0x0c0:  pop    %ebp
0871fb41 +0x0c1:  ret    $0x4
0871fb44 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
0871fb48 +0x0c8:  test   %cl,%cl
0871fb4a +0x0ca:  movb   $0x4,(%eax)
0871fb4d +0x0cd:  je     0871fba8 <+0x128>
0871fb4f +0x0cf:  movb   $0x1,0x1(%eax)
0871fb53 +0x0d3:  movb   $0x2,0x2(%eax)
0871fb57 +0x0d7:  movb   $0x3,0x3(%eax)
0871fb5b +0x0db:  jmp    0871faa7 <+0x27>
0871fb60 +0x0e0:  test   %bl,%bl
0871fb62 +0x0e2:  je     0871fbb8 <+0x138>
0871fb64 +0x0e4:  movb   $0x2,0x1(%eax)
0871fb68 +0x0e8:  movb   $0x4,0x2(%eax)
0871fb6c +0x0ec:  movb   $0x0,0x3(%eax)
0871fb70 +0x0f0:  pop    %ebx
0871fb71 +0x0f1:  pop    %ebp
0871fb72 +0x0f2:  ret    $0x4
0871fb75 +0x0f5:  lea    0x0(%esi),%esi
0871fb78 +0x0f8:  test   %bl,%bl
0871fb7a +0x0fa:  je     0871fbf0 <+0x170>
0871fb7c +0x0fc:  movb   $0x2,(%eax)
0871fb7f +0x0ff:  movb   $0x4,0x1(%eax)
0871fb83 +0x103:  movb   $0x3,0x2(%eax)
0871fb87 +0x107:  movb   $0x0,0x3(%eax)
0871fb8b +0x10b:  pop    %ebx
0871fb8c +0x10c:  pop    %ebp
0871fb8d +0x10d:  ret    $0x4
0871fb90 +0x110:  test   %cl,%cl
0871fb92 +0x112:  movb   $0x4,(%eax)
0871fb95 +0x115:  je     0871fbd8 <+0x158>
0871fb97 +0x117:  movb   $0x1,0x1(%eax)
0871fb9b +0x11b:  movb   $0x3,0x2(%eax)
0871fb9f +0x11f:  movb   $0x2,0x3(%eax)
0871fba3 +0x123:  jmp    0871faa7 <+0x27>
0871fba8 +0x128:  movb   $0x2,0x1(%eax)
0871fbac +0x12c:  movb   $0x3,0x2(%eax)
0871fbb0 +0x130:  jmp    0871fb6c <+0xec>
0871fbb2 +0x132:  lea    0x0(%esi),%esi
0871fbb8 +0x138:  movb   $0x4,0x1(%eax)
0871fbbc +0x13c:  movb   $0x2,0x2(%eax)
0871fbc0 +0x140:  jmp    0871fb6c <+0xec>
0871fbc2 +0x142:  lea    0x0(%esi),%esi
0871fbc8 +0x148:  movb   $0x4,0x1(%eax)
0871fbcc +0x14c:  movb   $0x2,0x3(%eax)
0871fbd0 +0x150:  jmp    0871fb1f <+0x9f>
0871fbd5 +0x155:  lea    0x0(%esi),%esi
0871fbd8 +0x158:  movb   $0x3,0x1(%eax)
0871fbdc +0x15c:  movb   $0x2,0x2(%eax)
0871fbe0 +0x160:  movb   $0x0,0x3(%eax)
0871fbe4 +0x164:  jmp    0871faa7 <+0x27>
0871fbe9 +0x169:  lea    0x0(%esi,%eiz,1),%esi
0871fbf0 +0x170:  movb   $0x4,(%eax)
0871fbf3 +0x173:  movb   $0x2,0x1(%eax)
0871fbf7 +0x177:  jmp    0871fb83 <+0x103>
0871fbf9 +0x179:  lea    0x0(%esi,%eiz,1),%esi
0871fc00 +0x180:  movb   $0x4,(%eax)
0871fc03 +0x183:  movb   $0x2,0x2(%eax)
0871fc07 +0x187:  jmp    0871faf7 <+0x77>
0871fc0c +0x18c:  nop
0871fc0d +0x18d:  nop
0871fc0e +0x18e:  nop
0871fc0f +0x18f:  nop
```

## 反编译 C

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
