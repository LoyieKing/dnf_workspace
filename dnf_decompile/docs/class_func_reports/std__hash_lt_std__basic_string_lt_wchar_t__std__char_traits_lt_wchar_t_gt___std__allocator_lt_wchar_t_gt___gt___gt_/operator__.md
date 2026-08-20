# operator()

`_ZNKSt4hashISbIwSt11char_traitsIwESaIwEEEclES3_`

`std::hash<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::operator()(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >) const`

| 类 | 地址 |
|---|---|
| `std::hash<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >` | `0x086d9f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9f10  _ZNKSt4hashISbIwSt11char_traitsIwESaIwEEEclES3_
#           std::hash<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > >::operator()(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> >) const
# range [0x086d9f10, 0x086d9f4f]
086d9f10 +0x00:  push   %ebp
086d9f11 +0x01:  xor    %edx,%edx
086d9f13 +0x03:  mov    %esp,%ebp
086d9f15 +0x05:  mov    0xc(%ebp),%eax
086d9f18 +0x08:  push   %esi
086d9f19 +0x09:  push   %ebx
086d9f1a +0x0a:  mov    (%eax),%esi
086d9f1c +0x0c:  mov    $0x811c9dc5,%eax
086d9f21 +0x11:  mov    -0xc(%esi),%ebx
086d9f24 +0x14:  shl    $0x2,%ebx
086d9f27 +0x17:  test   %ebx,%ebx
086d9f29 +0x19:  je     086d9f43 <+0x33>
086d9f2b +0x1b:  nop
086d9f2c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
086d9f30 +0x20:  movsbl (%esi,%edx,1),%ecx
086d9f34 +0x24:  add    $0x1,%edx
086d9f37 +0x27:  xor    %eax,%ecx
086d9f39 +0x29:  imul   $0x1000193,%ecx,%eax
086d9f3f +0x2f:  cmp    %edx,%ebx
086d9f41 +0x31:  jne    086d9f30 <+0x20>
086d9f43 +0x33:  pop    %ebx
086d9f44 +0x34:  pop    %esi
086d9f45 +0x35:  pop    %ebp
086d9f46 +0x36:  ret
086d9f47 +0x37:  nop
086d9f48 +0x38:  nop
086d9f49 +0x39:  nop
086d9f4a +0x3a:  nop
086d9f4b +0x3b:  nop
086d9f4c +0x3c:  nop
086d9f4d +0x3d:  nop
086d9f4e +0x3e:  nop
086d9f4f +0x3f:  nop
```

## 反编译 C

```c
// std::hash<std::basic_string<wchar_t, @ 0x86d9f10

/* std::hash<std::wstring >::TEMPNAMEPLACEHOLDERVALUE(std::wstring) const */

uint __thiscall std::hash<std::wstring>::operator()(hash<std::wstring> *this,wstring param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  uVar2 = 0x811c9dc5;
  iVar4 = *(int *)(*(int *)param_1._M_dataplus._M_p + -0xc) << 2;
  if (iVar4 != 0) {
    do {
      pcVar1 = (char *)(*(int *)param_1._M_dataplus._M_p + iVar3);
      iVar3 = iVar3 + 1;
      uVar2 = ((int)*pcVar1 ^ uVar2) * 0x1000193;
    } while (iVar4 != iVar3);
  }
  return uVar2;
}
```
