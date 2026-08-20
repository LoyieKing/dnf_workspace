# operator()

`_ZNKSt4hashIRKSsEclES1_`

`std::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>::operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const`

| 类 | 地址 |
|---|---|
| `std::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>` | `0x086d9ee0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d9ee0  _ZNKSt4hashIRKSsEclES1_
#           std::hash<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&>::operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const
# range [0x086d9ee0, 0x086d9f0f]
086d9ee0 +0x00:  push   %ebp
086d9ee1 +0x01:  xor    %edx,%edx
086d9ee3 +0x03:  mov    %esp,%ebp
086d9ee5 +0x05:  mov    0xc(%ebp),%eax
086d9ee8 +0x08:  push   %esi
086d9ee9 +0x09:  push   %ebx
086d9eea +0x0a:  mov    (%eax),%esi
086d9eec +0x0c:  mov    $0x811c9dc5,%eax
086d9ef1 +0x11:  mov    -0xc(%esi),%ebx
086d9ef4 +0x14:  test   %ebx,%ebx
086d9ef6 +0x16:  je     086d9f0b <+0x2b>
086d9ef8 +0x18:  movsbl (%esi,%edx,1),%ecx
086d9efc +0x1c:  add    $0x1,%edx
086d9eff +0x1f:  xor    %eax,%ecx
086d9f01 +0x21:  imul   $0x1000193,%ecx,%eax
086d9f07 +0x27:  cmp    %edx,%ebx
086d9f09 +0x29:  jne    086d9ef8 <+0x18>
086d9f0b +0x2b:  pop    %ebx
086d9f0c +0x2c:  pop    %esi
086d9f0d +0x2d:  pop    %ebp
086d9f0e +0x2e:  ret
086d9f0f +0x2f:  nop
```

## 反编译 C

```c
// std::hash<std::string @ 0x86d9ee0

/* std::hash<std::string const&>::TEMPNAMEPLACEHOLDERVALUE(std::string const&) const */

uint __thiscall
std::hash<std::string_const&>::operator()(hash<std::string_const&> *this,string *param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  pcVar2 = (param_1->_M_dataplus)._M_p;
  uVar4 = 0x811c9dc5;
  iVar3 = *(int *)(pcVar2 + -0xc);
  if (iVar3 != 0) {
    do {
      pcVar1 = pcVar2 + iVar5;
      iVar5 = iVar5 + 1;
      uVar4 = ((int)*pcVar1 ^ uVar4) * 0x1000193;
    } while (iVar3 != iVar5);
  }
  return uVar4;
}
```
