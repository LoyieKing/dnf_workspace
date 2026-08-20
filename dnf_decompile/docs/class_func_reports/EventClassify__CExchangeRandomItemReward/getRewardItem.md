# getRewardItem

`_ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE`

`EventClassify::CExchangeRandomItemReward::getRewardItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CExchangeRandomItemReward` | `0x0810ee40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ee40  _ZN13EventClassify25CExchangeRandomItemReward13getRewardItemERSt6vectorISt4pairIiiESaIS3_EE
#           EventClassify::CExchangeRandomItemReward::getRewardItem(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810ee40, 0x0810eedd]
0810ee40 +0x00:  push   %ebp
0810ee41 +0x01:  mov    %esp,%ebp
0810ee43 +0x03:  sub    $0x28,%esp
0810ee46 +0x06:  movl   $0x0,-0xc(%ebp)
0810ee4d +0x0d:  mov    0x8(%ebp),%eax
0810ee50 +0x10:  mov    0x1c(%eax),%eax
0810ee53 +0x13:  lea    0x18(%eax),%edx
0810ee56 +0x16:  lea    -0x18(%ebp),%eax
0810ee59 +0x19:  mov    %edx,0x4(%esp)
0810ee5d +0x1d:  mov    %eax,(%esp)
0810ee60 +0x20:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0810ee65 +0x25:  sub    $0x4,%esp
0810ee68 +0x28:  jmp    0810eea6 <+0x66>
0810ee6a +0x2a:  lea    -0x18(%ebp),%eax
0810ee6d +0x2d:  mov    %eax,(%esp)
0810ee70 +0x30:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0810ee75 +0x35:  mov    (%eax),%eax
0810ee77 +0x37:  mov    0xc(%ebp),%edx
0810ee7a +0x3a:  mov    %edx,0x8(%esp)
0810ee7e +0x3e:  mov    %eax,0x4(%esp)
0810ee82 +0x42:  lea    -0x11(%ebp),%eax
0810ee85 +0x45:  mov    %eax,(%esp)
0810ee88 +0x48:  call   0810dc5a <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE>  ; EventClassify::CEventActionMng::getResultItemFromLottery(unsigned int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0810ee8d +0x4d:  mov    %eax,-0xc(%ebp)
0810ee90 +0x50:  cmpl   $0x0,-0xc(%ebp)
0810ee94 +0x54:  je     0810ee9b <+0x5b>
0810ee96 +0x56:  mov    -0xc(%ebp),%eax
0810ee99 +0x59:  jmp    0810eedc <+0x9c>
0810ee9b +0x5b:  lea    -0x18(%ebp),%eax
0810ee9e +0x5e:  mov    %eax,(%esp)
0810eea1 +0x61:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
0810eea6 +0x66:  mov    0x8(%ebp),%eax
0810eea9 +0x69:  mov    0x1c(%eax),%eax
0810eeac +0x6c:  lea    0x18(%eax),%edx
0810eeaf +0x6f:  lea    -0x10(%ebp),%eax
0810eeb2 +0x72:  mov    %edx,0x4(%esp)
0810eeb6 +0x76:  mov    %eax,(%esp)
0810eeb9 +0x79:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
0810eebe +0x7e:  sub    $0x4,%esp
0810eec1 +0x81:  lea    -0x10(%ebp),%eax
0810eec4 +0x84:  mov    %eax,0x4(%esp)
0810eec8 +0x88:  lea    -0x18(%ebp),%eax
0810eecb +0x8b:  mov    %eax,(%esp)
0810eece +0x8e:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
0810eed3 +0x93:  test   %al,%al
0810eed5 +0x95:  jne    0810ee6a <+0x2a>
0810eed7 +0x97:  mov    $0x0,%eax
0810eedc +0x9c:  leave
0810eedd +0x9d:  ret
```

## 反编译 C

```c
// EventClassify::CExchangeRandomItemReward::getRewardItem @ 0x810ee40

/* EventClassify::CExchangeRandomItemReward::getRewardItem(std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

int __thiscall
EventClassify::CExchangeRandomItemReward::getRewardItem
          (CExchangeRandomItemReward *this,vector *param_1)

{
  bool bVar1;
  uint *puVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [7];
  CEventActionMng local_15;
  __normal_iterator local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                     operator*(local_1c);
    local_10 = CEventActionMng::getResultItemFromLottery(&local_15,*puVar2,param_1);
    if (local_10 != 0) break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_1c);
  }
  return local_10;
}
```
