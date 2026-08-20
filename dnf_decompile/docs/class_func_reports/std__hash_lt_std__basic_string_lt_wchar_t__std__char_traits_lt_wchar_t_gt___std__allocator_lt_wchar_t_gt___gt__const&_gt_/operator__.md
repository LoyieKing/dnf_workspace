# operator()

`_ZNKSt4hashIRKSbIwSt11char_traitsIwESaIwEEEclES5_`

`std::hash<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&>::operator()(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&) const`

| 类 | 地址 |
|---|---|
| `std::hash<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&>` | `0x086d9f50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9f50  _ZNKSt4hashIRKSbIwSt11char_traitsIwESaIwEEEclES5_
#           std::hash<std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&>::operator()(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&) const
# range [0x086d9f50, 0x086d9f8f]
086d9f50 +0x00:  push   %ebp
086d9f51 +0x01:  xor    %edx,%edx
086d9f53 +0x03:  mov    %esp,%ebp
086d9f55 +0x05:  mov    0xc(%ebp),%eax
086d9f58 +0x08:  push   %esi
086d9f59 +0x09:  push   %ebx
086d9f5a +0x0a:  mov    (%eax),%esi
086d9f5c +0x0c:  mov    $0x811c9dc5,%eax
086d9f61 +0x11:  mov    -0xc(%esi),%ebx
086d9f64 +0x14:  shl    $0x2,%ebx
086d9f67 +0x17:  test   %ebx,%ebx
086d9f69 +0x19:  je     086d9f83 <+0x33>
086d9f6b +0x1b:  nop
086d9f6c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
086d9f70 +0x20:  movsbl (%esi,%edx,1),%ecx
086d9f74 +0x24:  add    $0x1,%edx
086d9f77 +0x27:  xor    %eax,%ecx
086d9f79 +0x29:  imul   $0x1000193,%ecx,%eax
086d9f7f +0x2f:  cmp    %edx,%ebx
086d9f81 +0x31:  jne    086d9f70 <+0x20>
086d9f83 +0x33:  pop    %ebx
086d9f84 +0x34:  pop    %esi
086d9f85 +0x35:  pop    %ebp
086d9f86 +0x36:  ret
086d9f87 +0x37:  nop
086d9f88 +0x38:  nop
086d9f89 +0x39:  nop
086d9f8a +0x3a:  nop
086d9f8b +0x3b:  nop
086d9f8c +0x3c:  nop
086d9f8d +0x3d:  nop
086d9f8e +0x3e:  nop
086d9f8f +0x3f:  nop
```

## 反编译 C

```c
// std::hash<std::basic_string<wchar_t, @ 0x86d9f50

/* std::hash<std::wstring const&>::TEMPNAMEPLACEHOLDERVALUE(std::wstring const&) const */

uint __thiscall
std::hash<std::wstring_const&>::operator()(hash<std::wstring_const&> *this,wstring *param_1)

{
  char *pcVar1;
  wchar_t *pwVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  pwVar2 = (param_1->_M_dataplus)._M_p;
  uVar3 = 0x811c9dc5;
  iVar5 = pwVar2[-3] << 2;
  if (iVar5 != 0) {
    do {
      pcVar1 = (char *)((int)pwVar2 + iVar4);
      iVar4 = iVar4 + 1;
      uVar3 = ((int)*pcVar1 ^ uVar3) * 0x1000193;
    } while (iVar5 != iVar4);
  }
  return uVar3;
}
```
