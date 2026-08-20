# FindMonsterCard

`_ZN10expert_job15FindMonsterCardEP5CItem`

`expert_job::FindMonsterCard(CItem*)`

| 类 | 地址 |
|---|---|
| `expert_job` | `0x0849be32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849be32  _ZN10expert_job15FindMonsterCardEP5CItem
#           expert_job::FindMonsterCard(CItem*)
# range [0x0849be32, 0x0849bf07]
0849be32 +0x00:  push   %ebp
0849be33 +0x01:  mov    %esp,%ebp
0849be35 +0x03:  push   %ebx
0849be36 +0x04:  sub    $0x24,%esp
0849be39 +0x07:  mov    0x8(%ebp),%eax
0849be3c +0x0a:  lea    0x174(%eax),%edx
0849be42 +0x10:  lea    -0x14(%ebp),%eax
0849be45 +0x13:  mov    %edx,0x4(%esp)
0849be49 +0x17:  mov    %eax,(%esp)
0849be4c +0x1a:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
0849be51 +0x1f:  sub    $0x4,%esp
0849be54 +0x22:  lea    -0x14(%ebp),%eax
0849be57 +0x25:  mov    %eax,0x4(%esp)
0849be5b +0x29:  lea    -0x18(%ebp),%eax
0849be5e +0x2c:  mov    %eax,(%esp)
0849be61 +0x2f:  call   08387922 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173c2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173c2
0849be66 +0x34:  jmp    0849bec8 <+0x96>
0849be68 +0x36:  lea    -0x18(%ebp),%eax
0849be6b +0x39:  mov    %eax,(%esp)
0849be6e +0x3c:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
0849be73 +0x41:  mov    0x4(%eax),%edx
0849be76 +0x44:  mov    (%eax),%eax
0849be78 +0x46:  mov    %eax,%ebx
0849be7a +0x48:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0849be7f +0x4d:  mov    %ebx,0x4(%esp)
0849be83 +0x51:  mov    %eax,(%esp)
0849be86 +0x54:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0849be8b +0x59:  mov    %eax,-0xc(%ebp)
0849be8e +0x5c:  cmpl   $0x0,-0xc(%ebp)
0849be92 +0x60:  je     0849bebd <+0x8b>
0849be94 +0x62:  mov    -0xc(%ebp),%eax
0849be97 +0x65:  mov    %eax,(%esp)
0849be9a +0x68:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849be9f +0x6d:  test   %al,%al
0849bea1 +0x6f:  je     0849bebd <+0x8b>
0849bea3 +0x71:  mov    -0xc(%ebp),%eax
0849bea6 +0x74:  mov    %eax,(%esp)
0849bea9 +0x77:  call   0822c9d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x207c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x207c
0849beae +0x7c:  cmp    $0x1,%eax
0849beb1 +0x7f:  sete   %al
0849beb4 +0x82:  test   %al,%al
0849beb6 +0x84:  je     0849bebd <+0x8b>
0849beb8 +0x86:  mov    -0xc(%ebp),%eax
0849bebb +0x89:  jmp    0849bf02 <+0xd0>
0849bebd +0x8b:  lea    -0x18(%ebp),%eax
0849bec0 +0x8e:  mov    %eax,(%esp)
0849bec3 +0x91:  call   0823dcd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x8e4e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x8e4e
0849bec8 +0x96:  mov    0x8(%ebp),%eax
0849becb +0x99:  lea    0x174(%eax),%edx
0849bed1 +0x9f:  lea    -0x10(%ebp),%eax
0849bed4 +0xa2:  mov    %edx,0x4(%esp)
0849bed8 +0xa6:  mov    %eax,(%esp)
0849bedb +0xa9:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
0849bee0 +0xae:  sub    $0x4,%esp
0849bee3 +0xb1:  lea    -0x10(%ebp),%eax
0849bee6 +0xb4:  mov    %eax,0x4(%esp)
0849beea +0xb8:  lea    -0x18(%ebp),%eax
0849beed +0xbb:  mov    %eax,(%esp)
0849bef0 +0xbe:  call   0838793c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x173dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x173dc
0849bef5 +0xc3:  test   %al,%al
0849bef7 +0xc5:  jne    0849be68 <+0x36>
0849befd +0xcb:  mov    $0x0,%eax
0849bf02 +0xd0:  mov    -0x4(%ebp),%ebx
0849bf05 +0xd3:  leave
0849bf06 +0xd4:  ret
0849bf07 +0xd5:  nop
```

## 反编译 C

```c
// expert_job::FindMonsterCard @ 0x849be32

/* expert_job::FindMonsterCard(CItem*) */

CItem * expert_job::FindMonsterCard(CItem *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  CDataManager *this;
  int iVar4;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  CStackableItem *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  __gnu_cxx::
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  ::__normal_iterator<std::pair<int,int>*>(local_1c,local_18);
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar2 = __gnu_cxx::operator!=(local_1c,local_14);
    if (!bVar2) {
      return (CItem *)0x0;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                    ::operator*(local_1c);
    iVar4 = *piVar3;
    this = (CDataManager *)G_CDataManager();
    local_10 = (CStackableItem *)CDataManager::find_item(this,iVar4);
    if (((local_10 != (CStackableItem *)0x0) &&
        (cVar1 = CItem::is_stackable((CItem *)local_10), cVar1 != '\0')) &&
       (iVar4 = CStackableItem::get_sub_type(local_10), iVar4 == 1)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_1c);
  }
  return (CItem *)local_10;
}
```
