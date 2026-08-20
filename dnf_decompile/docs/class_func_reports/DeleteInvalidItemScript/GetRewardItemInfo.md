# GetRewardItemInfo

`_ZN23DeleteInvalidItemScript17GetRewardItemInfoEiRiS0_`

`DeleteInvalidItemScript::GetRewardItemInfo(int, int&, int&)`

| 类 | 地址 |
|---|---|
| `DeleteInvalidItemScript` | `0x08ac20f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac20f8  _ZN23DeleteInvalidItemScript17GetRewardItemInfoEiRiS0_
#           DeleteInvalidItemScript::GetRewardItemInfo(int, int&, int&)
# range [0x08ac20f8, 0x08ac217f]
08ac20f8 +0x00:  push   %ebp
08ac20f9 +0x01:  mov    %esp,%ebp
08ac20fb +0x03:  sub    $0x28,%esp
08ac20fe +0x06:  mov    0x8(%ebp),%eax
08ac2101 +0x09:  lea    0x8(%eax),%ecx
08ac2104 +0x0c:  lea    -0x10(%ebp),%eax
08ac2107 +0x0f:  lea    0xc(%ebp),%edx
08ac210a +0x12:  mov    %edx,0x8(%esp)
08ac210e +0x16:  mov    %ecx,0x4(%esp)
08ac2112 +0x1a:  mov    %eax,(%esp)
08ac2115 +0x1d:  call   08ac238a <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x19b>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x19b
08ac211a +0x22:  sub    $0x4,%esp
08ac211d +0x25:  mov    0x8(%ebp),%eax
08ac2120 +0x28:  lea    0x8(%eax),%edx
08ac2123 +0x2b:  lea    -0xc(%ebp),%eax
08ac2126 +0x2e:  mov    %edx,0x4(%esp)
08ac212a +0x32:  mov    %eax,(%esp)
08ac212d +0x35:  call   08ac23b6 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x1c7>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x1c7
08ac2132 +0x3a:  sub    $0x4,%esp
08ac2135 +0x3d:  lea    -0xc(%ebp),%eax
08ac2138 +0x40:  mov    %eax,0x4(%esp)
08ac213c +0x44:  lea    -0x10(%ebp),%eax
08ac213f +0x47:  mov    %eax,(%esp)
08ac2142 +0x4a:  call   08ac23dc <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x1ed>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x1ed
08ac2147 +0x4f:  test   %al,%al
08ac2149 +0x51:  je     08ac2152 <+0x5a>
08ac214b +0x53:  mov    $0x0,%eax
08ac2150 +0x58:  jmp    08ac217d <+0x85>
08ac2152 +0x5a:  lea    -0x10(%ebp),%eax
08ac2155 +0x5d:  mov    %eax,(%esp)
08ac2158 +0x60:  call   08ac23f0 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x201>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x201
08ac215d +0x65:  mov    0x8(%eax),%edx
08ac2160 +0x68:  mov    0x10(%ebp),%eax
08ac2163 +0x6b:  mov    %edx,(%eax)
08ac2165 +0x6d:  lea    -0x10(%ebp),%eax
08ac2168 +0x70:  mov    %eax,(%esp)
08ac216b +0x73:  call   08ac23f0 <_GLOBAL__I__ZN23DeleteInvalidItemScriptC2Ev+0x201>  ; global constructors keyed to DeleteInvalidItemScript::DeleteInvalidItemScript()+0x201
08ac2170 +0x78:  mov    0xc(%eax),%edx
08ac2173 +0x7b:  mov    0x14(%ebp),%eax
08ac2176 +0x7e:  mov    %edx,(%eax)
08ac2178 +0x80:  mov    $0x1,%eax
08ac217d +0x85:  leave
08ac217e +0x86:  ret
08ac217f +0x87:  nop
```

## 反编译 C

```c
// DeleteInvalidItemScript::GetRewardItemInfo @ 0x8ac20f8

/* DeleteInvalidItemScript::GetRewardItemInfo(int, int&, int&) */

bool __thiscall
DeleteInvalidItemScript::GetRewardItemInfo
          (DeleteInvalidItemScript *this,int param_1,int *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>
  local_14 [4];
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  local_10 [12];
  
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::find((int *)local_14);
  std::
  map<int,DeleteInvalidItemScript::DeleteInvalidItemData,std::less<int>,std::allocator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
          operator==(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
            operator->(local_14);
    *param_2 = *(int *)(iVar2 + 8);
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,DeleteInvalidItemScript::DeleteInvalidItemData>>::
            operator->(local_14);
    *param_3 = *(int *)(iVar2 + 0xc);
  }
  return cVar1 == '\0';
}
```
