# getRewardItem

`_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE`

`EventClassify::CAvatarDisjointRandomReward::getRewardItem(CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CAvatarDisjointRandomReward` | `0x0810f694` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810f694  _ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE
#           EventClassify::CAvatarDisjointRandomReward::getRewardItem(CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0810f694, 0x0810f741]
0810f694 +0x00:  push   %ebp
0810f695 +0x01:  mov    %esp,%ebp
0810f697 +0x03:  sub    $0x28,%esp
0810f69a +0x06:  movl   $0x0,-0xc(%ebp)
0810f6a1 +0x0d:  mov    0xc(%ebp),%eax
0810f6a4 +0x10:  mov    %eax,(%esp)
0810f6a7 +0x13:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0810f6ac +0x18:  mov    %al,-0x11(%ebp)
0810f6af +0x1b:  mov    0x8(%ebp),%eax
0810f6b2 +0x1e:  mov    0x1c(%eax),%eax
0810f6b5 +0x21:  lea    0x8(%eax),%ecx
0810f6b8 +0x24:  lea    -0x18(%ebp),%eax
0810f6bb +0x27:  lea    -0x11(%ebp),%edx
0810f6be +0x2a:  mov    %edx,0x8(%esp)
0810f6c2 +0x2e:  mov    %ecx,0x4(%esp)
0810f6c6 +0x32:  mov    %eax,(%esp)
0810f6c9 +0x35:  call   08111d60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1272>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1272
0810f6ce +0x3a:  sub    $0x4,%esp
0810f6d1 +0x3d:  mov    0x8(%ebp),%eax
0810f6d4 +0x40:  mov    0x1c(%eax),%eax
0810f6d7 +0x43:  lea    0x8(%eax),%edx
0810f6da +0x46:  lea    -0x10(%ebp),%eax
0810f6dd +0x49:  mov    %edx,0x4(%esp)
0810f6e1 +0x4d:  mov    %eax,(%esp)
0810f6e4 +0x50:  call   08111d8c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x129e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x129e
0810f6e9 +0x55:  sub    $0x4,%esp
0810f6ec +0x58:  lea    -0x10(%ebp),%eax
0810f6ef +0x5b:  mov    %eax,0x4(%esp)
0810f6f3 +0x5f:  lea    -0x18(%ebp),%eax
0810f6f6 +0x62:  mov    %eax,(%esp)
0810f6f9 +0x65:  call   08111db2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x12c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x12c4
0810f6fe +0x6a:  test   %al,%al
0810f700 +0x6c:  je     0810f709 <+0x75>
0810f702 +0x6e:  mov    $0x15,%eax
0810f707 +0x73:  jmp    0810f740 <+0xac>
0810f709 +0x75:  lea    -0x18(%ebp),%eax
0810f70c +0x78:  mov    %eax,(%esp)
0810f70f +0x7b:  call   08111dc6 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x12d8>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x12d8
0810f714 +0x80:  mov    0x4(%eax),%eax
0810f717 +0x83:  mov    0x10(%ebp),%edx
0810f71a +0x86:  mov    %edx,0x8(%esp)
0810f71e +0x8a:  mov    %eax,0x4(%esp)
0810f722 +0x8e:  lea    -0x12(%ebp),%eax
0810f725 +0x91:  mov    %eax,(%esp)
0810f728 +0x94:  call   0810dc5a <_ZN13EventClassify15CEventActionMng24getResultItemFromLotteryEjRSt6vectorISt4pairIiiESaIS3_EE>  ; EventClassify::CEventActionMng::getResultItemFromLottery(unsigned int, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
0810f72d +0x99:  mov    %eax,-0xc(%ebp)
0810f730 +0x9c:  cmpl   $0x0,-0xc(%ebp)
0810f734 +0xa0:  je     0810f73b <+0xa7>
0810f736 +0xa2:  mov    -0xc(%ebp),%eax
0810f739 +0xa5:  jmp    0810f740 <+0xac>
0810f73b +0xa7:  mov    $0x0,%eax
0810f740 +0xac:  leave
0810f741 +0xad:  ret
```

## 反编译 C

```c
// EventClassify::CAvatarDisjointRandomReward::getRewardItem @ 0x810f694

/* EventClassify::CAvatarDisjointRandomReward::getRewardItem(CItem const*,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

int __thiscall
EventClassify::CAvatarDisjointRandomReward::getRewardItem
          (CAvatarDisjointRandomReward *this,CItem *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<char_const,unsigned_int>> local_1c [6];
  CEventActionMng local_16;
  undefined1 local_15;
  map<char,unsigned_int,std::less<char>,std::allocator<std::pair<char_const,unsigned_int>>>
  local_14 [4];
  undefined4 local_10;
  
  local_10 = 0;
  local_15 = CItem::get_grade(param_1);
  std::map<char,unsigned_int,std::less<char>,std::allocator<std::pair<char_const,unsigned_int>>>::
  find((char *)local_1c);
  std::map<char,unsigned_int,std::less<char>,std::allocator<std::pair<char_const,unsigned_int>>>::
  end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<char_const,unsigned_int>>::operator==
                    (local_1c,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<char_const,unsigned_int>>::operator->(local_1c);
    iVar2 = CEventActionMng::getResultItemFromLottery(&local_16,*(uint *)(iVar2 + 4),param_2);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0x15;
  }
  return iVar2;
}
```
