# _selectJewelTypeIndex

`_ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t`

`Dispatcher_DisJointAvatar::_selectJewelTypeIndex(stAvatarEmblemInfo_t const*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_DisJointAvatar` | `0x08218598` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08218598  _ZNK25Dispatcher_DisJointAvatar21_selectJewelTypeIndexEPK20stAvatarEmblemInfo_t
#           Dispatcher_DisJointAvatar::_selectJewelTypeIndex(stAvatarEmblemInfo_t const*) const
# range [0x08218598, 0x0821873b]
08218598 +0x000:  push   %ebp
08218599 +0x001:  mov    %esp,%ebp
0821859b +0x003:  sub    $0x68,%esp
0821859e +0x006:  movl   $0x0,-0x3c(%ebp)
082185a5 +0x00d:  movl   $0x0,-0x38(%ebp)
082185ac +0x014:  movl   $0x0,-0x34(%ebp)
082185b3 +0x01b:  movl   $0x0,-0x30(%ebp)
082185ba +0x022:  movl   $0x0,-0x2c(%ebp)
082185c1 +0x029:  movl   $0x0,-0x50(%ebp)
082185c8 +0x030:  movl   $0x0,-0x4c(%ebp)
082185cf +0x037:  movl   $0x0,-0x48(%ebp)
082185d6 +0x03e:  movl   $0x0,-0x44(%ebp)
082185dd +0x045:  movl   $0x0,-0x40(%ebp)
082185e4 +0x04c:  movl   $0x0,-0x28(%ebp)
082185eb +0x053:  movl   $0x0,-0x24(%ebp)
082185f2 +0x05a:  movl   $0x0,-0x1c(%ebp)
082185f9 +0x061:  jmp    08218694 <+0xfc>
082185fe +0x066:  mov    -0x1c(%ebp),%edx
08218601 +0x069:  mov    0xc(%ebp),%ecx
08218604 +0x06c:  mov    %edx,%eax
08218606 +0x06e:  add    %eax,%eax
08218608 +0x070:  add    %edx,%eax
0821860a +0x072:  add    %eax,%eax
0821860c +0x074:  movzwl (%eax,%ecx,1),%eax
08218610 +0x078:  test   %ax,%ax
08218613 +0x07b:  je     08218686 <+0xee>
08218615 +0x07d:  mov    -0x1c(%ebp),%edx
08218618 +0x080:  mov    0xc(%ebp),%ecx
0821861b +0x083:  mov    %edx,%eax
0821861d +0x085:  add    %eax,%eax
0821861f +0x087:  add    %edx,%eax
08218621 +0x089:  add    %eax,%eax
08218623 +0x08b:  movzwl (%eax,%ecx,1),%eax
08218627 +0x08f:  cmp    $0xffef,%ax
0821862b +0x093:  je     08218689 <+0xf1>
0821862d +0x095:  mov    -0x1c(%ebp),%edx
08218630 +0x098:  mov    0xc(%ebp),%ecx
08218633 +0x09b:  mov    %edx,%eax
08218635 +0x09d:  add    %eax,%eax
08218637 +0x09f:  add    %edx,%eax
08218639 +0x0a1:  add    %eax,%eax
0821863b +0x0a3:  movzwl (%eax,%ecx,1),%eax
0821863f +0x0a7:  cmp    $0xffff,%ax
08218643 +0x0ab:  je     0821868c <+0xf4>
08218645 +0x0ad:  mov    -0x1c(%ebp),%edx
08218648 +0x0b0:  mov    0xc(%ebp),%ecx
0821864b +0x0b3:  mov    %edx,%eax
0821864d +0x0b5:  add    %eax,%eax
0821864f +0x0b7:  add    %edx,%eax
08218651 +0x0b9:  add    %eax,%eax
08218653 +0x0bb:  movzwl (%eax,%ecx,1),%eax
08218657 +0x0bf:  movzwl %ax,%eax
0821865a +0x0c2:  mov    %eax,0x4(%esp)
0821865e +0x0c6:  mov    0x8(%ebp),%eax
08218661 +0x0c9:  mov    %eax,(%esp)
08218664 +0x0cc:  call   0821857c <_ZNK25Dispatcher_DisJointAvatar18_getJewelTypeIndexEt>  ; Dispatcher_DisJointAvatar::_getJewelTypeIndex(unsigned short) const
08218669 +0x0d1:  mov    %eax,-0x18(%ebp)
0821866c +0x0d4:  cmpl   $0xffffffff,-0x18(%ebp)
08218670 +0x0d8:  je     0821868f <+0xf7>
08218672 +0x0da:  mov    -0x18(%ebp),%eax
08218675 +0x0dd:  mov    -0x3c(%ebp,%eax,4),%edx
08218679 +0x0e1:  add    $0x1,%edx
0821867c +0x0e4:  mov    %edx,-0x3c(%ebp,%eax,4)
08218680 +0x0e8:  addl   $0x1,-0x28(%ebp)
08218684 +0x0ec:  jmp    08218690 <+0xf8>
08218686 +0x0ee:  nop
08218687 +0x0ef:  jmp    08218690 <+0xf8>
08218689 +0x0f1:  nop
0821868a +0x0f2:  jmp    08218690 <+0xf8>
0821868c +0x0f4:  nop
0821868d +0x0f5:  jmp    08218690 <+0xf8>
0821868f +0x0f7:  nop
08218690 +0x0f8:  addl   $0x1,-0x1c(%ebp)
08218694 +0x0fc:  cmpl   $0x4,-0x1c(%ebp)
08218698 +0x100:  setle  %al
0821869b +0x103:  test   %al,%al
0821869d +0x105:  jne    082185fe <+0x66>
082186a3 +0x10b:  cmpl   $0x0,-0x28(%ebp)
082186a7 +0x10f:  jne    082186b3 <+0x11b>
082186a9 +0x111:  mov    $0xffffffff,%eax
082186ae +0x116:  jmp    08218739 <+0x1a1>
082186b3 +0x11b:  movl   $0x0,-0x14(%ebp)
082186ba +0x122:  jmp    082186f2 <+0x15a>
082186bc +0x124:  mov    $0x2710,%eax
082186c1 +0x129:  mov    %eax,%edx
082186c3 +0x12b:  sar    $0x1f,%edx
082186c6 +0x12e:  idivl  -0x28(%ebp)
082186c9 +0x131:  mov    %eax,%edx
082186cb +0x133:  mov    -0x14(%ebp),%eax
082186ce +0x136:  mov    -0x3c(%ebp,%eax,4),%eax
082186d2 +0x13a:  imul   %edx,%eax
082186d5 +0x13d:  mov    %eax,-0x10(%ebp)
082186d8 +0x140:  mov    -0x14(%ebp),%eax
082186db +0x143:  mov    -0x24(%ebp),%edx
082186de +0x146:  mov    -0x10(%ebp),%ecx
082186e1 +0x149:  lea    (%ecx,%edx,1),%edx
082186e4 +0x14c:  mov    %edx,-0x50(%ebp,%eax,4)
082186e8 +0x150:  mov    -0x10(%ebp),%eax
082186eb +0x153:  add    %eax,-0x24(%ebp)
082186ee +0x156:  addl   $0x1,-0x14(%ebp)
082186f2 +0x15a:  cmpl   $0x4,-0x14(%ebp)
082186f6 +0x15e:  setle  %al
082186f9 +0x161:  test   %al,%al
082186fb +0x163:  jne    082186bc <+0x124>
082186fd +0x165:  mov    -0x24(%ebp),%eax
08218700 +0x168:  mov    %eax,(%esp)
08218703 +0x16b:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08218708 +0x170:  mov    %eax,-0x20(%ebp)
0821870b +0x173:  movl   $0x0,-0xc(%ebp)
08218712 +0x17a:  jmp    08218729 <+0x191>
08218714 +0x17c:  mov    -0xc(%ebp),%eax
08218717 +0x17f:  mov    -0x50(%ebp,%eax,4),%eax
0821871b +0x183:  cmp    -0x20(%ebp),%eax
0821871e +0x186:  jle    08218725 <+0x18d>
08218720 +0x188:  mov    -0xc(%ebp),%eax
08218723 +0x18b:  jmp    08218739 <+0x1a1>
08218725 +0x18d:  addl   $0x1,-0xc(%ebp)
08218729 +0x191:  cmpl   $0x4,-0xc(%ebp)
0821872d +0x195:  setle  %al
08218730 +0x198:  test   %al,%al
08218732 +0x19a:  jne    08218714 <+0x17c>
08218734 +0x19c:  mov    $0xffffffff,%eax
08218739 +0x1a1:  leave
0821873a +0x1a2:  ret
0821873b +0x1a3:  nop
```

## 反编译 C

```c
// Dispatcher_DisJointAvatar::_selectJewelTypeIndex @ 0x8218598

/* Dispatcher_DisJointAvatar::_selectJewelTypeIndex(stAvatarEmblemInfo_t const*) const */

int __thiscall
Dispatcher_DisJointAvatar::_selectJewelTypeIndex
          (Dispatcher_DisJointAvatar *this,stAvatarEmblemInfo_t *param_1)

{
  int local_54 [13];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_54[5] = 0;
  local_54[6] = 0;
  local_54[7] = 0;
  local_54[8] = 0;
  local_54[9] = 0;
  local_54[0] = 0;
  local_54[1] = 0;
  local_54[2] = 0;
  local_54[3] = 0;
  local_54[4] = 0;
  local_54[10] = 0;
  local_54[0xb] = 0;
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    if (((*(short *)(param_1 + local_20 * 6) != 0) && (*(short *)(param_1 + local_20 * 6) != -0x11))
       && (*(short *)(param_1 + local_20 * 6) != -1)) {
      local_1c = _getJewelTypeIndex(this,*(ushort *)(param_1 + local_20 * 6));
      if (local_1c != -1) {
        local_54[local_1c + 5] = local_54[local_1c + 5] + 1;
        local_54[10] = local_54[10] + 1;
      }
    }
  }
  if (local_54[10] != 0) {
    for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
      local_14 = local_54[local_18 + 5] * (int)(10000 / (longlong)local_54[10]);
      local_54[local_18] = local_14 + local_54[0xb];
      local_54[0xb] = local_54[0xb] + local_14;
    }
    local_54[0xc] = get_rand_int(local_54[0xb]);
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      if (local_54[0xc] < local_54[local_10]) {
        return local_10;
      }
    }
  }
  return -1;
}
```
