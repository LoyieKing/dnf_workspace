# FindIpgNo

`_ZN19CerashopAddRestrict12ScriptLoader9FindIpgNoEj`

`CerashopAddRestrict::ScriptLoader::FindIpgNo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::ScriptLoader` | `0x08abf70a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf70a  _ZN19CerashopAddRestrict12ScriptLoader9FindIpgNoEj
#           CerashopAddRestrict::ScriptLoader::FindIpgNo(unsigned int)
# range [0x08abf70a, 0x08abf765]
08abf70a +0x00:  push   %ebp
08abf70b +0x01:  mov    %esp,%ebp
08abf70d +0x03:  sub    $0x28,%esp
08abf710 +0x06:  mov    0x8(%ebp),%edx
08abf713 +0x09:  lea    -0x10(%ebp),%eax
08abf716 +0x0c:  mov    %edx,0x4(%esp)
08abf71a +0x10:  mov    %eax,(%esp)
08abf71d +0x13:  call   08abf896 <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x8c>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x8c
08abf722 +0x18:  sub    $0x4,%esp
08abf725 +0x1b:  mov    0x8(%ebp),%edx
08abf728 +0x1e:  lea    -0xc(%ebp),%eax
08abf72b +0x21:  lea    0xc(%ebp),%ecx
08abf72e +0x24:  mov    %ecx,0x8(%esp)
08abf732 +0x28:  mov    %edx,0x4(%esp)
08abf736 +0x2c:  mov    %eax,(%esp)
08abf739 +0x2f:  call   08abf86a <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x60>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x60
08abf73e +0x34:  sub    $0x4,%esp
08abf741 +0x37:  lea    -0x10(%ebp),%eax
08abf744 +0x3a:  mov    %eax,0x4(%esp)
08abf748 +0x3e:  lea    -0xc(%ebp),%eax
08abf74b +0x41:  mov    %eax,(%esp)
08abf74e +0x44:  call   08abf8bc <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0xb2>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0xb2
08abf753 +0x49:  test   %al,%al
08abf755 +0x4b:  je     08abf75e <+0x54>
08abf757 +0x4d:  mov    $0x0,%eax
08abf75c +0x52:  jmp    08abf763 <+0x59>
08abf75e +0x54:  mov    $0x1,%eax
08abf763 +0x59:  leave
08abf764 +0x5a:  ret
08abf765 +0x5b:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::ScriptLoader::FindIpgNo @ 0x8abf70a

/* CerashopAddRestrict::ScriptLoader::FindIpgNo(unsigned int) */

bool CerashopAddRestrict::ScriptLoader::FindIpgNo(uint param_1)

{
  char cVar1;
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>> local_10 [12];
  
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::end(local_14);
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::find((uint *)local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
          operator==(local_10,(_Rb_tree_iterator *)local_14);
  return cVar1 == '\0';
}
```
