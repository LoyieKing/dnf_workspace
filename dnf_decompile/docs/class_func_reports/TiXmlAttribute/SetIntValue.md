# SetIntValue

`_ZN14TiXmlAttribute11SetIntValueEi`

`TiXmlAttribute::SetIntValue(int)`

| 类 | 地址 |
|---|---|
| `TiXmlAttribute` | `0x087e1f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1f10  _ZN14TiXmlAttribute11SetIntValueEi
#           TiXmlAttribute::SetIntValue(int)
# range [0x087e1f10, 0x087e1f89]
087e1f10 +0x00:  push   %ebp
087e1f11 +0x01:  mov    %esp,%ebp
087e1f13 +0x03:  push   %ebx
087e1f14 +0x04:  sub    $0x54,%esp
087e1f17 +0x07:  mov    0xc(%ebp),%eax
087e1f1a +0x0a:  lea    -0x48(%ebp),%ebx
087e1f1d +0x0d:  movl   $"%d",0x8(%esp)
087e1f25 +0x15:  movl   $0x40,0x4(%esp)
087e1f2d +0x1d:  mov    %eax,0xc(%esp)
087e1f31 +0x21:  mov    %ebx,(%esp)
087e1f34 +0x24:  call   0807dbe0 <_init+0x4d8>
087e1f39 +0x29:  mov    %ebx,%edx
087e1f3b +0x2b:  mov    (%edx),%ecx
087e1f3d +0x2d:  add    $0x4,%edx
087e1f40 +0x30:  lea    -0x1010101(%ecx),%eax
087e1f46 +0x36:  not    %ecx
087e1f48 +0x38:  and    %ecx,%eax
087e1f4a +0x3a:  and    $0x80808080,%eax
087e1f4f +0x3f:  je     087e1f3b <+0x2b>
087e1f51 +0x41:  mov    %eax,%ecx
087e1f53 +0x43:  shr    $0x10,%ecx
087e1f56 +0x46:  test   $0x8080,%eax
087e1f5b +0x4b:  cmove  %ecx,%eax
087e1f5e +0x4e:  lea    0x2(%edx),%ecx
087e1f61 +0x51:  cmove  %ecx,%edx
087e1f64 +0x54:  add    %al,%al
087e1f66 +0x56:  mov    0x8(%ebp),%eax
087e1f69 +0x59:  sbb    $0x3,%edx
087e1f6c +0x5c:  sub    %ebx,%edx
087e1f6e +0x5e:  mov    %ebx,0x4(%esp)
087e1f72 +0x62:  add    $0x18,%eax
087e1f75 +0x65:  mov    %edx,0x8(%esp)
087e1f79 +0x69:  mov    %eax,(%esp)
087e1f7c +0x6c:  call   087085a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x21b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x21b0
087e1f81 +0x71:  add    $0x54,%esp
087e1f84 +0x74:  pop    %ebx
087e1f85 +0x75:  pop    %ebp
087e1f86 +0x76:  ret
087e1f87 +0x77:  nop
087e1f88 +0x78:  nop
087e1f89 +0x79:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlAttribute::SetIntValue @ 0x87e1f10

/* TiXmlAttribute::SetIntValue(int) */

void __thiscall TiXmlAttribute::SetIntValue(TiXmlAttribute *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_4c [17];
  
  snprintf((char *)local_4c,0x40,"%d",param_1);
  puVar4 = local_4c;
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
  std::string::assign((string *)(this + 0x18),(char *)local_4c,
                      (uint)((int)puVar4 +
                            ((-3 - (uint)CARRY1((byte)uVar2,(byte)uVar2)) - (int)local_4c)));
  return;
}
```
