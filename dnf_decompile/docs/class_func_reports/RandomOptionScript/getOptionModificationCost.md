# getOptionModificationCost

`_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY`

`RandomOptionScript::getOptionModificationCost(short, ENUM_RARITY) const`

| 类 | 地址 |
|---|---|
| `RandomOptionScript` | `0x08a738a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a738a0  _ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY
#           RandomOptionScript::getOptionModificationCost(short, ENUM_RARITY) const
# range [0x08a738a0, 0x08a73955]
08a738a0 +0x00:  push   %ebp
08a738a1 +0x01:  mov    %esp,%ebp
08a738a3 +0x03:  sub    $0x38,%esp
08a738a6 +0x06:  mov    0xc(%ebp),%eax
08a738a9 +0x09:  mov    %ax,-0x1c(%ebp)
08a738ad +0x0d:  mov    0x8(%ebp),%eax
08a738b0 +0x10:  lea    0x10c(%eax),%edx
08a738b6 +0x16:  lea    -0x10(%ebp),%eax
08a738b9 +0x19:  mov    %edx,0x4(%esp)
08a738bd +0x1d:  mov    %eax,(%esp)
08a738c0 +0x20:  call   08a74db0 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x1251>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x1251
08a738c5 +0x25:  sub    $0x4,%esp
08a738c8 +0x28:  jmp    08a7391a <+0x7a>
08a738ca +0x2a:  lea    -0x10(%ebp),%eax
08a738cd +0x2d:  mov    %eax,(%esp)
08a738d0 +0x30:  call   08a74e4a <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x12eb>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x12eb
08a738d5 +0x35:  movzwl (%eax),%eax
08a738d8 +0x38:  cmp    -0x1c(%ebp),%ax
08a738dc +0x3c:  setge  %al
08a738df +0x3f:  test   %al,%al
08a738e1 +0x41:  je     08a7390f <+0x6f>
08a738e3 +0x43:  cmpl   $0x2,0x10(%ebp)
08a738e7 +0x47:  jne    08a738f9 <+0x59>
08a738e9 +0x49:  lea    -0x10(%ebp),%eax
08a738ec +0x4c:  mov    %eax,(%esp)
08a738ef +0x4f:  call   08a74e4a <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x12eb>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x12eb
08a738f4 +0x54:  mov    0x4(%eax),%eax
08a738f7 +0x57:  jmp    08a73954 <+0xb4>
08a738f9 +0x59:  cmpl   $0x3,0x10(%ebp)
08a738fd +0x5d:  jne    08a7390f <+0x6f>
08a738ff +0x5f:  lea    -0x10(%ebp),%eax
08a73902 +0x62:  mov    %eax,(%esp)
08a73905 +0x65:  call   08a74e4a <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x12eb>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x12eb
08a7390a +0x6a:  mov    0x8(%eax),%eax
08a7390d +0x6d:  jmp    08a73954 <+0xb4>
08a7390f +0x6f:  lea    -0x10(%ebp),%eax
08a73912 +0x72:  mov    %eax,(%esp)
08a73915 +0x75:  call   08a74e34 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x12d5>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x12d5
08a7391a +0x7a:  mov    0x8(%ebp),%eax
08a7391d +0x7d:  lea    0x10c(%eax),%edx
08a73923 +0x83:  lea    -0xc(%ebp),%eax
08a73926 +0x86:  mov    %edx,0x4(%esp)
08a7392a +0x8a:  mov    %eax,(%esp)
08a7392d +0x8d:  call   08a74ddc <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x127d>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x127d
08a73932 +0x92:  sub    $0x4,%esp
08a73935 +0x95:  lea    -0xc(%ebp),%eax
08a73938 +0x98:  mov    %eax,0x4(%esp)
08a7393c +0x9c:  lea    -0x10(%ebp),%eax
08a7393f +0x9f:  mov    %eax,(%esp)
08a73942 +0xa2:  call   08a74e08 <_GLOBAL__I__Z24importRandomOptionScriptR18RandomOptionScriptPKc+0x12a9>  ; global constructors keyed to importRandomOptionScript(RandomOptionScript&, char const*)+0x12a9
08a73947 +0xa7:  test   %al,%al
08a73949 +0xa9:  jne    08a738ca <+0x2a>
08a7394f +0xaf:  mov    $0xffffffff,%eax
08a73954 +0xb4:  leave
08a73955 +0xb5:  ret
```

## 反编译 C

```c
// RandomOptionScript::getOptionModificationCost @ 0x8a738a0

/* RandomOptionScript::getOptionModificationCost(short, ENUM_RARITY) const */

undefined4 __thiscall
RandomOptionScript::getOptionModificationCost(undefined4 this,short param_1,int param_3)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>::begin();
  do {
    std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) {
      return 0xffffffff;
    }
    psVar2 = (short *)__gnu_cxx::
                      __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
                      ::operator*(local_14);
    if (param_1 <= *psVar2) {
      if (param_3 == 2) {
        iVar3 = __gnu_cxx::
                __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
                ::operator*(local_14);
        return *(undefined4 *)(iVar3 + 4);
      }
      if (param_3 == 3) {
        iVar3 = __gnu_cxx::
                __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
                ::operator*(local_14);
        return *(undefined4 *)(iVar3 + 8);
      }
    }
    __gnu_cxx::
    __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
    ::operator++(local_14);
  } while( true );
}
```
