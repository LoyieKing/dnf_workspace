# getBoosterItem

`_ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE`

`CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850f75e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850f75e  _ZNK14CStackableItem14getBoosterItemERSt6vectorI28stStackableBoosterItemInfo_tSaIS1_EE
#           CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t, std::allocator<stStackableBoosterItemInfo_t> >&) const
# range [0x0850f75e, 0x0850f8b7]
0850f75e +0x000:  push   %ebp
0850f75f +0x001:  mov    %esp,%ebp
0850f761 +0x003:  push   %ebx
0850f762 +0x004:  sub    $0x34,%esp
0850f765 +0x007:  mov    0x8(%ebp),%eax
0850f768 +0x00a:  lea    0x240(%eax),%edx
0850f76e +0x010:  lea    -0x18(%ebp),%eax
0850f771 +0x013:  mov    %edx,0x4(%esp)
0850f775 +0x017:  mov    %eax,(%esp)
0850f778 +0x01a:  call   08517a7e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x40b3>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x40b3
0850f77d +0x01f:  sub    $0x4,%esp
0850f780 +0x022:  mov    0x8(%ebp),%eax
0850f783 +0x025:  lea    0x240(%eax),%edx
0850f789 +0x02b:  lea    -0x1c(%ebp),%eax
0850f78c +0x02e:  mov    %edx,0x4(%esp)
0850f790 +0x032:  mov    %eax,(%esp)
0850f793 +0x035:  call   08517aaa <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x40df>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x40df
0850f798 +0x03a:  sub    $0x4,%esp
0850f79b +0x03d:  jmp    0850f899 <+0x13b>
0850f7a0 +0x042:  movl   $0x0,-0x14(%ebp)
0850f7a7 +0x049:  jmp    0850f872 <+0x114>
0850f7ac +0x04e:  lea    -0x18(%ebp),%eax
0850f7af +0x051:  mov    %eax,(%esp)
0850f7b2 +0x054:  call   083947a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24248>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24248
0850f7b7 +0x059:  mov    0x8(%eax),%eax
0850f7ba +0x05c:  mov    %eax,(%esp)
0850f7bd +0x05f:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0850f7c2 +0x064:  mov    %eax,-0x10(%ebp)
0850f7c5 +0x067:  lea    -0x18(%ebp),%eax
0850f7c8 +0x06a:  mov    %eax,(%esp)
0850f7cb +0x06d:  call   083947a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24248>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24248
0850f7d0 +0x072:  lea    0xc(%eax),%edx
0850f7d3 +0x075:  lea    -0x20(%ebp),%eax
0850f7d6 +0x078:  mov    %edx,0x4(%esp)
0850f7da +0x07c:  mov    %eax,(%esp)
0850f7dd +0x07f:  call   0823b26e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x63ec>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x63ec
0850f7e2 +0x084:  sub    $0x4,%esp
0850f7e5 +0x087:  lea    -0x18(%ebp),%eax
0850f7e8 +0x08a:  mov    %eax,(%esp)
0850f7eb +0x08d:  call   083947a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24248>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24248
0850f7f0 +0x092:  lea    0xc(%eax),%edx
0850f7f3 +0x095:  lea    -0x24(%ebp),%eax
0850f7f6 +0x098:  mov    %edx,0x4(%esp)
0850f7fa +0x09c:  mov    %eax,(%esp)
0850f7fd +0x09f:  call   0823b242 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+&_ZL14gUnicodeBuffer+0x63c0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+&_ZL14gUnicodeBuffer+0x63c0
0850f802 +0x0a4:  sub    $0x4,%esp
0850f805 +0x0a7:  jmp    0850f858 <+0xfa>
0850f807 +0x0a9:  lea    -0x20(%ebp),%eax
0850f80a +0x0ac:  mov    %eax,(%esp)
0850f80d +0x0af:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0850f812 +0x0b4:  mov    (%eax),%eax
0850f814 +0x0b6:  mov    %eax,-0xc(%ebp)
0850f817 +0x0b9:  mov    -0x10(%ebp),%ebx
0850f81a +0x0bc:  lea    -0x20(%ebp),%eax
0850f81d +0x0bf:  mov    %eax,(%esp)
0850f820 +0x0c2:  call   08111bc0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10d2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10d2
0850f825 +0x0c7:  mov    0x4(%eax),%eax
0850f828 +0x0ca:  cmp    %eax,%ebx
0850f82a +0x0cc:  setb   %al
0850f82d +0x0cf:  test   %al,%al
0850f82f +0x0d1:  je     0850f84d <+0xef>
0850f831 +0x0d3:  lea    -0x20(%ebp),%eax
0850f834 +0x0d6:  mov    %eax,(%esp)
0850f837 +0x0d9:  call   084b4a16 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xac9>  ; global constructors keyed to game_master::CMacro::Reset()+0xac9
0850f83c +0x0de:  mov    %eax,0x4(%esp)
0850f840 +0x0e2:  mov    0xc(%ebp),%eax
0850f843 +0x0e5:  mov    %eax,(%esp)
0850f846 +0x0e8:  call   08328436 <_GLOBAL__I__ZN8WongWork9CCeraShopC2Ev+0x38f>  ; global constructors keyed to WongWork::CCeraShop::CCeraShop()+0x38f
0850f84b +0x0ed:  jmp    0850f86e <+0x110>
0850f84d +0x0ef:  lea    -0x20(%ebp),%eax
0850f850 +0x0f2:  mov    %eax,(%esp)
0850f853 +0x0f5:  call   08111baa <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x10bc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x10bc
0850f858 +0x0fa:  lea    -0x24(%ebp),%eax
0850f85b +0x0fd:  mov    %eax,0x4(%esp)
0850f85f +0x101:  lea    -0x20(%ebp),%eax
0850f862 +0x104:  mov    %eax,(%esp)
0850f865 +0x107:  call   08237c2d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2d7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2d7
0850f86a +0x10c:  test   %al,%al
0850f86c +0x10e:  jne    0850f807 <+0xa9>
0850f86e +0x110:  addl   $0x1,-0x14(%ebp)
0850f872 +0x114:  lea    -0x18(%ebp),%eax
0850f875 +0x117:  mov    %eax,(%esp)
0850f878 +0x11a:  call   083947a8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24248>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24248
0850f87d +0x11f:  mov    0x4(%eax),%eax
0850f880 +0x122:  cmp    -0x14(%ebp),%eax
0850f883 +0x125:  seta   %al
0850f886 +0x128:  test   %al,%al
0850f888 +0x12a:  jne    0850f7ac <+0x4e>
0850f88e +0x130:  lea    -0x18(%ebp),%eax
0850f891 +0x133:  mov    %eax,(%esp)
0850f894 +0x136:  call   08394792 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24232>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24232
0850f899 +0x13b:  lea    -0x1c(%ebp),%eax
0850f89c +0x13e:  mov    %eax,0x4(%esp)
0850f8a0 +0x142:  lea    -0x18(%ebp),%eax
0850f8a3 +0x145:  mov    %eax,(%esp)
0850f8a6 +0x148:  call   08394766 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24206>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24206
0850f8ab +0x14d:  test   %al,%al
0850f8ad +0x14f:  jne    0850f7a0 <+0x42>
0850f8b3 +0x155:  mov    -0x4(%ebp),%ebx
0850f8b6 +0x158:  leave
0850f8b7 +0x159:  ret
```

## 反编译 C

```c
// CStackableItem::getBoosterItem @ 0x850f75e

/* CStackableItem::getBoosterItem(std::vector<stStackableBoosterItemInfo_t,
   std::allocator<stStackableBoosterItemInfo_t> >&) const */

void __thiscall CStackableItem::getBoosterItem(CStackableItem *this,vector *param_1)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  stStackableBoosterItemInfo_t *psVar4;
  int iVar5;
  __normal_iterator local_28 [4];
  __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
  local_1c [4];
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>::begin();
  std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>::end();
  do {
    bVar2 = __gnu_cxx::operator!=(local_1c,local_20);
    if (!bVar2) {
      return;
    }
    local_18 = 0;
    while( true ) {
      iVar5 = __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator->(local_1c);
      if (*(uint *)(iVar5 + 4) <= local_18) break;
      iVar5 = __gnu_cxx::
              __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
              ::operator->(local_1c);
      local_14 = get_rand_int(*(int *)(iVar5 + 8));
      __gnu_cxx::
      __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
      ::operator->(local_1c);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::begin
                ();
      __gnu_cxx::
      __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
      ::operator->(local_1c);
      std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::end();
      while( true ) {
        bVar2 = __gnu_cxx::operator!=(local_24,local_28);
        if (!bVar2) break;
        puVar3 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                 ::operator->(local_24);
        uVar1 = local_14;
        local_10 = *puVar3;
        iVar5 = __gnu_cxx::
                __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                ::operator->(local_24);
        if (uVar1 < *(uint *)(iVar5 + 4)) {
          psVar4 = (stStackableBoosterItemInfo_t *)
                   __gnu_cxx::
                   __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
                   ::operator*(local_24);
          std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>::
          push_back((vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>
                     *)param_1,psVar4);
          break;
        }
        __gnu_cxx::
        __normal_iterator<stStackableBoosterItemInfo_t_const*,std::vector<stStackableBoosterItemInfo_t,std::allocator<stStackableBoosterItemInfo_t>>>
        ::operator++(local_24);
      }
      local_18 = local_18 + 1;
    }
    __gnu_cxx::
    __normal_iterator<stStackableBoosterElement_t_const*,std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>>
    ::operator++(local_1c);
  } while( true );
}
```
