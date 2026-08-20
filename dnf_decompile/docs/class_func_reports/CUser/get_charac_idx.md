# get_charac_idx

`_ZNK5CUser14get_charac_idxEj`

`CUser::get_charac_idx(unsigned int) const`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864df12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864df12  _ZNK5CUser14get_charac_idxEj
#           CUser::get_charac_idx(unsigned int) const
# range [0x0864df12, 0x0864df9f]
0864df12 +0x00:  push   %ebp
0864df13 +0x01:  mov    %esp,%ebp
0864df15 +0x03:  sub    $0x28,%esp
0864df18 +0x06:  movl   $0x0,-0xc(%ebp)
0864df1f +0x0d:  mov    0x8(%ebp),%eax
0864df22 +0x10:  lea    0x796e8(%eax),%edx
0864df28 +0x16:  lea    -0x10(%ebp),%eax
0864df2b +0x19:  mov    %edx,0x4(%esp)
0864df2f +0x1d:  mov    %eax,(%esp)
0864df32 +0x20:  call   084f0f64 <_GLOBAL__I__Z7getUserj+0x7f16>  ; global constructors keyed to getUser(unsigned int)+0x7f16
0864df37 +0x25:  sub    $0x4,%esp
0864df3a +0x28:  mov    0x8(%ebp),%eax
0864df3d +0x2b:  lea    0x796e8(%eax),%edx
0864df43 +0x31:  lea    -0x14(%ebp),%eax
0864df46 +0x34:  mov    %edx,0x4(%esp)
0864df4a +0x38:  mov    %eax,(%esp)
0864df4d +0x3b:  call   084f0f90 <_GLOBAL__I__Z7getUserj+0x7f42>  ; global constructors keyed to getUser(unsigned int)+0x7f42
0864df52 +0x40:  sub    $0x4,%esp
0864df55 +0x43:  jmp    0864df82 <+0x70>
0864df57 +0x45:  lea    -0x10(%ebp),%eax
0864df5a +0x48:  mov    %eax,(%esp)
0864df5d +0x4b:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
0864df62 +0x50:  mov    (%eax),%eax
0864df64 +0x52:  cmp    0xc(%ebp),%eax
0864df67 +0x55:  sete   %al
0864df6a +0x58:  test   %al,%al
0864df6c +0x5a:  je     0864df73 <+0x61>
0864df6e +0x5c:  mov    -0xc(%ebp),%eax
0864df71 +0x5f:  jmp    0864df9d <+0x8b>
0864df73 +0x61:  addl   $0x1,-0xc(%ebp)
0864df77 +0x65:  lea    -0x10(%ebp),%eax
0864df7a +0x68:  mov    %eax,(%esp)
0864df7d +0x6b:  call   082793ae <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x92>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x92
0864df82 +0x70:  lea    -0x14(%ebp),%eax
0864df85 +0x73:  mov    %eax,0x4(%esp)
0864df89 +0x77:  lea    -0x10(%ebp),%eax
0864df8c +0x7a:  mov    %eax,(%esp)
0864df8f +0x7d:  call   08279382 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x66>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x66
0864df94 +0x82:  test   %al,%al
0864df96 +0x84:  jne    0864df57 <+0x45>
0864df98 +0x86:  mov    $0xffffffff,%eax
0864df9d +0x8b:  leave
0864df9e +0x8c:  ret
0864df9f +0x8d:  nop
```

## 反编译 C

```c
// CUser::get_charac_idx @ 0x864df12

/* CUser::get_charac_idx(unsigned int) const */

int __thiscall CUser::get_charac_idx(CUser *this,uint param_1)

{
  bool bVar1;
  uint *puVar2;
  __normal_iterator local_18 [4];
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
  std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_14,local_18);
    if (!bVar1) {
      return -1;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
                     ::operator->(local_14);
    if (*puVar2 == param_1) break;
    local_10 = local_10 + 1;
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    operator++(local_14);
  }
  return local_10;
}
```
