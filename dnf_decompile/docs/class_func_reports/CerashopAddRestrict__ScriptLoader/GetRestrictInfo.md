# GetRestrictInfo

`_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj`

`CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::ScriptLoader` | `0x08abf766` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08abf766  _ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj
#           CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int)
# range [0x08abf766, 0x08abf7c9]
08abf766 +0x00:  push   %ebp
08abf767 +0x01:  mov    %esp,%ebp
08abf769 +0x03:  sub    $0x28,%esp
08abf76c +0x06:  mov    0x8(%ebp),%edx
08abf76f +0x09:  lea    -0x10(%ebp),%eax
08abf772 +0x0c:  lea    0xc(%ebp),%ecx
08abf775 +0x0f:  mov    %ecx,0x8(%esp)
08abf779 +0x13:  mov    %edx,0x4(%esp)
08abf77d +0x17:  mov    %eax,(%esp)
08abf780 +0x1a:  call   08abf86a <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x60>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x60
08abf785 +0x1f:  sub    $0x4,%esp
08abf788 +0x22:  mov    0x8(%ebp),%edx
08abf78b +0x25:  lea    -0xc(%ebp),%eax
08abf78e +0x28:  mov    %edx,0x4(%esp)
08abf792 +0x2c:  mov    %eax,(%esp)
08abf795 +0x2f:  call   08abf896 <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x8c>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x8c
08abf79a +0x34:  sub    $0x4,%esp
08abf79d +0x37:  lea    -0xc(%ebp),%eax
08abf7a0 +0x3a:  mov    %eax,0x4(%esp)
08abf7a4 +0x3e:  lea    -0x10(%ebp),%eax
08abf7a7 +0x41:  mov    %eax,(%esp)
08abf7aa +0x44:  call   08abf92a <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x120>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x120
08abf7af +0x49:  test   %al,%al
08abf7b1 +0x4b:  je     08abf7c3 <+0x5d>
08abf7b3 +0x4d:  lea    -0x10(%ebp),%eax
08abf7b6 +0x50:  mov    %eax,(%esp)
08abf7b9 +0x53:  call   08abf93e <_GLOBAL__I__ZN19CerashopAddRestrict8readTimeEPs+0x134>  ; global constructors keyed to CerashopAddRestrict::readTime(short*)+0x134
08abf7be +0x58:  mov    0x4(%eax),%eax
08abf7c1 +0x5b:  jmp    08abf7c8 <+0x62>
08abf7c3 +0x5d:  mov    $0x0,%eax
08abf7c8 +0x62:  leave
08abf7c9 +0x63:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::ScriptLoader::GetRestrictInfo @ 0x8abf766

/* CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int) */

undefined4 CerashopAddRestrict::ScriptLoader::GetRestrictInfo(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>> local_14 [4];
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  local_10 [12];
  
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,CerashopAddRestrict::InfoDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::InfoDaily*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
