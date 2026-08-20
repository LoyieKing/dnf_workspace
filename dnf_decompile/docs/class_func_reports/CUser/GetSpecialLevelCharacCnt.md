# GetSpecialLevelCharacCnt

`_ZN5CUser24GetSpecialLevelCharacCntEi`

`CUser::GetSpecialLevelCharacCnt(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08656636` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08656636  _ZN5CUser24GetSpecialLevelCharacCntEi
#           CUser::GetSpecialLevelCharacCnt(int)
# range [0x08656636, 0x086566e3]
08656636 +0x00:  push   %ebp
08656637 +0x01:  mov    %esp,%ebp
08656639 +0x03:  sub    $0x38,%esp
0865663c +0x06:  movl   $0x0,-0xc(%ebp)
08656643 +0x0d:  mov    0x8(%ebp),%eax
08656646 +0x10:  lea    0x796e8(%eax),%edx
0865664c +0x16:  lea    -0x14(%ebp),%eax
0865664f +0x19:  mov    %edx,0x4(%esp)
08656653 +0x1d:  mov    %eax,(%esp)
08656656 +0x20:  call   08279338 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x1c>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x1c
0865665b +0x25:  sub    $0x4,%esp
0865665e +0x28:  lea    -0x14(%ebp),%eax
08656661 +0x2b:  mov    %eax,0x4(%esp)
08656665 +0x2f:  lea    -0x18(%ebp),%eax
08656668 +0x32:  mov    %eax,(%esp)
0865666b +0x35:  call   082793d0 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xb4>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xb4
08656670 +0x3a:  mov    0x8(%ebp),%eax
08656673 +0x3d:  lea    0x796e8(%eax),%edx
08656679 +0x43:  lea    -0x10(%ebp),%eax
0865667c +0x46:  mov    %edx,0x4(%esp)
08656680 +0x4a:  mov    %eax,(%esp)
08656683 +0x4d:  call   0827935c <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x40>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x40
08656688 +0x52:  sub    $0x4,%esp
0865668b +0x55:  lea    -0x10(%ebp),%eax
0865668e +0x58:  mov    %eax,0x4(%esp)
08656692 +0x5c:  lea    -0x1c(%ebp),%eax
08656695 +0x5f:  mov    %eax,(%esp)
08656698 +0x62:  call   082793d0 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xb4>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xb4
0865669d +0x67:  jmp    086566c8 <+0x92>
0865669f +0x69:  lea    -0x18(%ebp),%eax
086566a2 +0x6c:  mov    %eax,(%esp)
086566a5 +0x6f:  call   082793c6 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0xaa>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0xaa
086566aa +0x74:  movzwl 0x27(%eax),%eax
086566ae +0x78:  cwtl
086566af +0x79:  cmp    0xc(%ebp),%eax
086566b2 +0x7c:  sete   %al
086566b5 +0x7f:  test   %al,%al
086566b7 +0x81:  je     086566bd <+0x87>
086566b9 +0x83:  addl   $0x1,-0xc(%ebp)
086566bd +0x87:  lea    -0x18(%ebp),%eax
086566c0 +0x8a:  mov    %eax,(%esp)
086566c3 +0x8d:  call   082793ae <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x92>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x92
086566c8 +0x92:  lea    -0x1c(%ebp),%eax
086566cb +0x95:  mov    %eax,0x4(%esp)
086566cf +0x99:  lea    -0x18(%ebp),%eax
086566d2 +0x9c:  mov    %eax,(%esp)
086566d5 +0x9f:  call   08279382 <_GLOBAL__I__ZN19Secu_AccountHacking27checkAccountHackingHackTypeEN8WongWork13ENUM_HACKTYPEE+0x66>  ; global constructors keyed to Secu_AccountHacking::checkAccountHackingHackType(WongWork::ENUM_HACKTYPE)+0x66
086566da +0xa4:  test   %al,%al
086566dc +0xa6:  jne    0865669f <+0x69>
086566de +0xa8:  mov    -0xc(%ebp),%eax
086566e1 +0xab:  leave
086566e2 +0xac:  ret
086566e3 +0xad:  nop
```

## 反编译 C

```c
// CUser::GetSpecialLevelCharacCnt @ 0x8656636

/* CUser::GetSpecialLevelCharacCnt(int) */

int __thiscall CUser::GetSpecialLevelCharacCnt(CUser *this,int param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_20 [4];
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<_Charac_info,std::allocator<_Charac_info>>::begin();
  __gnu_cxx::
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
  __normal_iterator<_Charac_info*>(local_1c,local_18);
  std::vector<_Charac_info,std::allocator<_Charac_info>>::end();
  __gnu_cxx::
  __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
  __normal_iterator<_Charac_info*>(local_20,local_14);
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_1c,local_20);
    if (!bVar1) break;
    iVar2 = __gnu_cxx::
            __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>
            ::operator->(local_1c);
    if (*(short *)(iVar2 + 0x27) == param_1) {
      local_10 = local_10 + 1;
    }
    __gnu_cxx::
    __normal_iterator<_Charac_info_const*,std::vector<_Charac_info,std::allocator<_Charac_info>>>::
    operator++(local_1c);
  }
  return local_10;
}
```
