# GetRecipeInputItems

`_ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE`

`expert_job::GetRecipeInputItems(CItem*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0849b734` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849b734  _ZN10expert_job19GetRecipeInputItemsEP5CItemRSt6vectorISt4pairIiiESaIS4_EE
#           expert_job::GetRecipeInputItems(CItem*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&)
# range [0x0849b734, 0x0849b81f]
0849b734 +0x00:  push   %ebp
0849b735 +0x01:  mov    %esp,%ebp
0849b737 +0x03:  push   %ebx
0849b738 +0x04:  sub    $0x34,%esp
0849b73b +0x07:  movl   $0x0,-0x10(%ebp)
0849b742 +0x0e:  mov    0x8(%ebp),%eax
0849b745 +0x11:  lea    0x174(%eax),%edx
0849b74b +0x17:  lea    -0x18(%ebp),%eax
0849b74e +0x1a:  mov    %edx,0x4(%esp)
0849b752 +0x1e:  mov    %eax,(%esp)
0849b755 +0x21:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0849b75a +0x26:  sub    $0x4,%esp
0849b75d +0x29:  lea    -0x18(%ebp),%eax
0849b760 +0x2c:  mov    %eax,0x4(%esp)
0849b764 +0x30:  lea    -0x1c(%ebp),%eax
0849b767 +0x33:  mov    %eax,(%esp)
0849b76a +0x36:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
0849b76f +0x3b:  jmp    0849b7e6 <+0xb2>
0849b771 +0x3d:  lea    -0x1c(%ebp),%eax
0849b774 +0x40:  mov    %eax,(%esp)
0849b777 +0x43:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
0849b77c +0x48:  mov    0x4(%eax),%edx
0849b77f +0x4b:  mov    (%eax),%eax
0849b781 +0x4d:  mov    %eax,%ebx
0849b783 +0x4f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849b788 +0x54:  mov    %ebx,0x4(%esp)
0849b78c +0x58:  mov    %eax,(%esp)
0849b78f +0x5b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849b794 +0x60:  mov    %eax,-0xc(%ebp)
0849b797 +0x63:  cmpl   $0x0,-0xc(%ebp)
0849b79b +0x67:  je     0849b7db <+0xa7>
0849b79d +0x69:  mov    -0xc(%ebp),%eax
0849b7a0 +0x6c:  mov    %eax,(%esp)
0849b7a3 +0x6f:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849b7a8 +0x74:  test   %al,%al
0849b7aa +0x76:  je     0849b7db <+0xa7>
0849b7ac +0x78:  mov    -0xc(%ebp),%eax
0849b7af +0x7b:  mov    %eax,(%esp)
0849b7b2 +0x7e:  call   0822c9d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x207c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x207c
0849b7b7 +0x83:  cmp    $0x1,%eax
0849b7ba +0x86:  setne  %al
0849b7bd +0x89:  test   %al,%al
0849b7bf +0x8b:  je     0849b7db <+0xa7>
0849b7c1 +0x8d:  lea    -0x1c(%ebp),%eax
0849b7c4 +0x90:  mov    %eax,(%esp)
0849b7c7 +0x93:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
0849b7cc +0x98:  mov    %eax,0x4(%esp)
0849b7d0 +0x9c:  mov    0xc(%ebp),%eax
0849b7d3 +0x9f:  mov    %eax,(%esp)
0849b7d6 +0xa2:  call   0830fa70 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1655>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1655
0849b7db +0xa7:  lea    -0x1c(%ebp),%eax
0849b7de +0xaa:  mov    %eax,(%esp)
0849b7e1 +0xad:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0849b7e6 +0xb2:  mov    0x8(%ebp),%eax
0849b7e9 +0xb5:  lea    0x174(%eax),%edx
0849b7ef +0xbb:  lea    -0x14(%ebp),%eax
0849b7f2 +0xbe:  mov    %edx,0x4(%esp)
0849b7f6 +0xc2:  mov    %eax,(%esp)
0849b7f9 +0xc5:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0849b7fe +0xca:  sub    $0x4,%esp
0849b801 +0xcd:  lea    -0x14(%ebp),%eax
0849b804 +0xd0:  mov    %eax,0x4(%esp)
0849b808 +0xd4:  lea    -0x1c(%ebp),%eax
0849b80b +0xd7:  mov    %eax,(%esp)
0849b80e +0xda:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
0849b813 +0xdf:  test   %al,%al
0849b815 +0xe1:  jne    0849b771 <+0x3d>
0849b81b +0xe7:  mov    -0x4(%ebp),%ebx
0849b81e +0xea:  leave
0849b81f +0xeb:  ret
```

## 反编译 C

```c
// expert_job::GetRecipeInputItems @ 0x849b734

/* expert_job::GetRecipeInputItems(CItem*, std::vector<std::pair<int, int>,
   std::allocator<std::pair<int, int> > >&) */

void expert_job::GetRecipeInputItems(CItem *param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  pair *ppVar5;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  undefined4 local_14;
  CStackableItem *local_10;
  
  local_14 = 0;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_20,local_1c);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_20,local_18);
    if (!bVar2) break;
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_20);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CStackableItem *)CDataManager::find_item(this,iVar4);
    if (local_10 != (CStackableItem *)0x0) {
      cVar1 = CItem::is_stackable((CItem *)local_10);
      if (cVar1 != '\0') {
        iVar4 = CStackableItem::get_sub_type(local_10);
        if (iVar4 != 1) {
          ppVar5 = (pair *)__gnu_cxx::
                           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                           ::operator*(local_20);
          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_2,ppVar5
                    );
        }
      }
    }
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_20);
  }
  return;
}
```
