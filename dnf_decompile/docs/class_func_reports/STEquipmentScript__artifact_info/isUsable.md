# isUsable

`_ZNK17STEquipmentScript13artifact_info8isUsableEv`

`STEquipmentScript::artifact_info::isUsable() const`

| 类 | 地址 |
|---|---|
| `STEquipmentScript::artifact_info` | `0x0898f0fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898f0fe  _ZNK17STEquipmentScript13artifact_info8isUsableEv
#           STEquipmentScript::artifact_info::isUsable() const
# range [0x0898f0fe, 0x0898f217]
0898f0fe +0x000:  push   %ebp
0898f0ff +0x001:  mov    %esp,%ebp
0898f101 +0x003:  sub    $0x10,%esp
0898f104 +0x006:  mov    0x8(%ebp),%eax
0898f107 +0x009:  mov    (%eax),%eax
0898f109 +0x00b:  test   %eax,%eax
0898f10b +0x00d:  jne    0898f203 <+0x105>
0898f111 +0x013:  mov    0x8(%ebp),%eax
0898f114 +0x016:  mov    0x4(%eax),%eax
0898f117 +0x019:  test   %eax,%eax
0898f119 +0x01b:  jne    0898f203 <+0x105>
0898f11f +0x021:  mov    0x8(%ebp),%eax
0898f122 +0x024:  mov    0x8(%eax),%eax
0898f125 +0x027:  test   %eax,%eax
0898f127 +0x029:  jne    0898f203 <+0x105>
0898f12d +0x02f:  mov    0x8(%ebp),%eax
0898f130 +0x032:  flds   0xc(%eax)
0898f133 +0x035:  fldz
0898f135 +0x037:  fucompp
0898f137 +0x039:  fnstsw %ax
0898f139 +0x03b:  sahf
0898f13a +0x03c:  sete   %al
0898f13d +0x03f:  setnp  %dl
0898f140 +0x042:  and    %edx,%eax
0898f142 +0x044:  xor    $0x1,%eax
0898f145 +0x047:  test   %al,%al
0898f147 +0x049:  jne    0898f203 <+0x105>
0898f14d +0x04f:  mov    0x8(%ebp),%eax
0898f150 +0x052:  flds   0x10(%eax)
0898f153 +0x055:  fldz
0898f155 +0x057:  fucompp
0898f157 +0x059:  fnstsw %ax
0898f159 +0x05b:  sahf
0898f15a +0x05c:  sete   %al
0898f15d +0x05f:  setnp  %dl
0898f160 +0x062:  and    %edx,%eax
0898f162 +0x064:  xor    $0x1,%eax
0898f165 +0x067:  test   %al,%al
0898f167 +0x069:  jne    0898f203 <+0x105>
0898f16d +0x06f:  mov    0x8(%ebp),%eax
0898f170 +0x072:  flds   0x14(%eax)
0898f173 +0x075:  fldz
0898f175 +0x077:  fucompp
0898f177 +0x079:  fnstsw %ax
0898f179 +0x07b:  sahf
0898f17a +0x07c:  sete   %al
0898f17d +0x07f:  setnp  %dl
0898f180 +0x082:  and    %edx,%eax
0898f182 +0x084:  xor    $0x1,%eax
0898f185 +0x087:  test   %al,%al
0898f187 +0x089:  jne    0898f203 <+0x105>
0898f189 +0x08b:  mov    0x8(%ebp),%eax
0898f18c +0x08e:  flds   0x18(%eax)
0898f18f +0x091:  fldz
0898f191 +0x093:  fucompp
0898f193 +0x095:  fnstsw %ax
0898f195 +0x097:  sahf
0898f196 +0x098:  sete   %al
0898f199 +0x09b:  setnp  %dl
0898f19c +0x09e:  and    %edx,%eax
0898f19e +0x0a0:  xor    $0x1,%eax
0898f1a1 +0x0a3:  test   %al,%al
0898f1a3 +0x0a5:  jne    0898f203 <+0x105>
0898f1a5 +0x0a7:  mov    0x8(%ebp),%eax
0898f1a8 +0x0aa:  flds   0x1c(%eax)
0898f1ab +0x0ad:  fldz
0898f1ad +0x0af:  fucompp
0898f1af +0x0b1:  fnstsw %ax
0898f1b1 +0x0b3:  sahf
0898f1b2 +0x0b4:  sete   %al
0898f1b5 +0x0b7:  setnp  %dl
0898f1b8 +0x0ba:  and    %edx,%eax
0898f1ba +0x0bc:  xor    $0x1,%eax
0898f1bd +0x0bf:  test   %al,%al
0898f1bf +0x0c1:  jne    0898f203 <+0x105>
0898f1c1 +0x0c3:  mov    0x8(%ebp),%eax
0898f1c4 +0x0c6:  flds   0x20(%eax)
0898f1c7 +0x0c9:  fldz
0898f1c9 +0x0cb:  fucompp
0898f1cb +0x0cd:  fnstsw %ax
0898f1cd +0x0cf:  sahf
0898f1ce +0x0d0:  sete   %al
0898f1d1 +0x0d3:  setnp  %dl
0898f1d4 +0x0d6:  and    %edx,%eax
0898f1d6 +0x0d8:  xor    $0x1,%eax
0898f1d9 +0x0db:  test   %al,%al
0898f1db +0x0dd:  jne    0898f203 <+0x105>
0898f1dd +0x0df:  mov    0x8(%ebp),%eax
0898f1e0 +0x0e2:  flds   0x24(%eax)
0898f1e3 +0x0e5:  fldz
0898f1e5 +0x0e7:  fucompp
0898f1e7 +0x0e9:  fnstsw %ax
0898f1e9 +0x0eb:  sahf
0898f1ea +0x0ec:  sete   %al
0898f1ed +0x0ef:  setnp  %dl
0898f1f0 +0x0f2:  and    %edx,%eax
0898f1f2 +0x0f4:  xor    $0x1,%eax
0898f1f5 +0x0f7:  test   %al,%al
0898f1f7 +0x0f9:  jne    0898f203 <+0x105>
0898f1f9 +0x0fb:  mov    0x8(%ebp),%eax
0898f1fc +0x0fe:  mov    0x28(%eax),%eax
0898f1ff +0x101:  test   %eax,%eax
0898f201 +0x103:  je     0898f20a <+0x10c>
0898f203 +0x105:  mov    $0x1,%eax
0898f208 +0x10a:  jmp    0898f20f <+0x111>
0898f20a +0x10c:  mov    $0x0,%eax
0898f20f +0x111:  mov    %al,-0x1(%ebp)
0898f212 +0x114:  movzbl -0x1(%ebp),%eax
0898f216 +0x118:  leave
0898f217 +0x119:  ret
```

## 反编译 C

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
