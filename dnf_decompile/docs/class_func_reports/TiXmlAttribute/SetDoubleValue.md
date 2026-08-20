# SetDoubleValue

`_ZN14TiXmlAttribute14SetDoubleValueEd`

`TiXmlAttribute::SetDoubleValue(double)`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e1e90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1e90  _ZN14TiXmlAttribute14SetDoubleValueEd
#           TiXmlAttribute::SetDoubleValue(double)
# range [0x087e1e90, 0x087e1f0f]
087e1e90 +0x00:  push   %ebp
087e1e91 +0x01:  mov    %esp,%ebp
087e1e93 +0x03:  push   %ebx
087e1e94 +0x04:  sub    $0x124,%esp
087e1e9a +0x0a:  fldl   0xc(%ebp)
087e1e9d +0x0d:  lea    -0x108(%ebp),%ebx
087e1ea3 +0x13:  fstpl  0xc(%esp)
087e1ea7 +0x17:  movl   $"%g",0x8(%esp)
087e1eaf +0x1f:  movl   $0x100,0x4(%esp)
087e1eb7 +0x27:  mov    %ebx,(%esp)
087e1eba +0x2a:  call   0807dbe0 <_init+0x4d8>
087e1ebf +0x2f:  mov    %ebx,%edx
087e1ec1 +0x31:  mov    (%edx),%ecx
087e1ec3 +0x33:  add    $0x4,%edx
087e1ec6 +0x36:  lea    -0x1010101(%ecx),%eax
087e1ecc +0x3c:  not    %ecx
087e1ece +0x3e:  and    %ecx,%eax
087e1ed0 +0x40:  and    $0x80808080,%eax
087e1ed5 +0x45:  je     087e1ec1 <+0x31>
087e1ed7 +0x47:  mov    %eax,%ecx
087e1ed9 +0x49:  shr    $0x10,%ecx
087e1edc +0x4c:  test   $0x8080,%eax
087e1ee1 +0x51:  cmove  %ecx,%eax
087e1ee4 +0x54:  lea    0x2(%edx),%ecx
087e1ee7 +0x57:  cmove  %ecx,%edx
087e1eea +0x5a:  add    %al,%al
087e1eec +0x5c:  mov    0x8(%ebp),%eax
087e1eef +0x5f:  sbb    $0x3,%edx
087e1ef2 +0x62:  sub    %ebx,%edx
087e1ef4 +0x64:  mov    %ebx,0x4(%esp)
087e1ef8 +0x68:  add    $0x18,%eax
087e1efb +0x6b:  mov    %edx,0x8(%esp)
087e1eff +0x6f:  mov    %eax,(%esp)
087e1f02 +0x72:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e1f07 +0x77:  add    $0x124,%esp
087e1f0d +0x7d:  pop    %ebx
087e1f0e +0x7e:  pop    %ebp
087e1f0f +0x7f:  ret
```

## 反编译 C

```c
// TiXmlAttribute::SetDoubleValue @ 0x87e1e90

/* TiXmlAttribute::SetDoubleValue(double) */

void __thiscall TiXmlAttribute::SetDoubleValue(TiXmlAttribute *this,double param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_10c [65];
  
  snprintf((char *)local_10c,0x100,"%g",param_1);
  puVar4 = local_10c;
  do {
    puVar3 = puVar4;
    uVar1 = *puVar3 + 0xfefefeff & ~*puVar3;
    uVar2 = uVar1 & 0x80808080;
    puVar4 = puVar3 + 1;
  } while (uVar2 == 0);
  if ((uVar1 & 0x8080) == 0) {
    puVar4 = (uint *)((int)puVar3 + 6);
    uVar2 = uVar2 >> 0x10;
  }
  std::string::assign((string *)(this + 0x18),(char *)local_10c,
                      (uint)((int)puVar4 +
                            ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_10c)));
  return;
}
```
