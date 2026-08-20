# operator()

`_ZNKSt4hashISsEclESs`

`std::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >::operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> >) const`

| 类 | 地址 |
|---|---|
| `std::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >` | `0x086d9eb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9eb0  _ZNKSt4hashISsEclESs
#           std::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >::operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> >) const
# range [0x086d9eb0, 0x086d9edf]
086d9eb0 +0x00:  push   %ebp
086d9eb1 +0x01:  xor    %edx,%edx
086d9eb3 +0x03:  mov    %esp,%ebp
086d9eb5 +0x05:  mov    0xc(%ebp),%eax
086d9eb8 +0x08:  push   %esi
086d9eb9 +0x09:  push   %ebx
086d9eba +0x0a:  mov    (%eax),%esi
086d9ebc +0x0c:  mov    $0x811c9dc5,%eax
086d9ec1 +0x11:  mov    -0xc(%esi),%ebx
086d9ec4 +0x14:  test   %ebx,%ebx
086d9ec6 +0x16:  je     086d9edb <+0x2b>
086d9ec8 +0x18:  movsbl (%esi,%edx,1),%ecx
086d9ecc +0x1c:  add    $0x1,%edx
086d9ecf +0x1f:  xor    %eax,%ecx
086d9ed1 +0x21:  imul   $0x1000193,%ecx,%eax
086d9ed7 +0x27:  cmp    %edx,%ebx
086d9ed9 +0x29:  jne    086d9ec8 <+0x18>
086d9edb +0x2b:  pop    %ebx
086d9edc +0x2c:  pop    %esi
086d9edd +0x2d:  pop    %ebp
086d9ede +0x2e:  ret
086d9edf +0x2f:  nop
```

## 反编译 C

```c
// std::hash<std::string>::operator @ 0x86d9eb0

/* std::hash<std::string >::TEMPNAMEPLACEHOLDERVALUE(std::string) const */

uint __thiscall std::hash<std::string>::operator()(hash<std::string> *this,string param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar3 = 0x811c9dc5;
  iVar2 = *(int *)(*(int *)param_1._M_dataplus._M_p + -0xc);
  if (iVar2 != 0) {
    do {
      pcVar1 = (char *)(*(int *)param_1._M_dataplus._M_p + iVar4);
      iVar4 = iVar4 + 1;
      uVar3 = ((int)*pcVar1 ^ uVar3) * 0x1000193;
    } while (iVar2 != iVar4);
  }
  return uVar3;
}
```
