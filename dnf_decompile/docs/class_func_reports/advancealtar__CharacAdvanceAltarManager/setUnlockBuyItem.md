# setUnlockBuyItem

`_ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE`

`advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x08132d20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08132d20  _ZN12advancealtar25CharacAdvanceAltarManager16setUnlockBuyItemENS_20AdvanceAltarShopType1TEiPSt6vectorINS_8_BuyItemESaIS4_EE
#           advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T, int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*)
# range [0x08132d20, 0x08132f71]
08132d20 +0x000:  push   %ebp
08132d21 +0x001:  mov    %esp,%ebp
08132d23 +0x003:  push   %ebx
08132d24 +0x004:  sub    $0x74,%esp
08132d27 +0x007:  movl   $0x0,-0x1c(%ebp)
08132d2e +0x00e:  movl   $0x0,-0x18(%ebp)
08132d35 +0x015:  mov    0x8(%ebp),%eax
08132d38 +0x018:  mov    (%eax),%eax
08132d3a +0x01a:  mov    %eax,-0x14(%ebp)
08132d3d +0x01d:  cmpl   $0x0,-0x14(%ebp)
08132d41 +0x021:  je     08132f65 <+0x245>
08132d47 +0x027:  mov    -0x14(%ebp),%eax
08132d4a +0x02a:  mov    (%eax),%eax
08132d4c +0x02c:  mov    %eax,%ebx
08132d4e +0x02e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08132d53 +0x033:  lea    0x631c(%eax),%edx
08132d59 +0x039:  mov    0xc(%ebp),%eax
08132d5c +0x03c:  mov    %eax,0x8(%esp)
08132d60 +0x040:  mov    %ebx,0x4(%esp)
08132d64 +0x044:  mov    %edx,(%esp)
08132d67 +0x047:  call   088a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)
08132d6c +0x04c:  mov    %eax,-0x1c(%ebp)
08132d6f +0x04f:  mov    0xc(%ebp),%eax
08132d72 +0x052:  mov    %eax,0x4(%esp)
08132d76 +0x056:  mov    -0x14(%ebp),%eax
08132d79 +0x059:  mov    %eax,(%esp)
08132d7c +0x05c:  call   088999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)
08132d81 +0x061:  mov    %eax,-0x18(%ebp)
08132d84 +0x064:  cmpl   $0x0,-0x1c(%ebp)
08132d88 +0x068:  je     08132f68 <+0x248>
08132d8e +0x06e:  cmpl   $0x0,-0x18(%ebp)
08132d92 +0x072:  je     08132f6b <+0x24b>
08132d98 +0x078:  lea    -0x50(%ebp),%eax
08132d9b +0x07b:  mov    -0x1c(%ebp),%edx
08132d9e +0x07e:  mov    %edx,0x4(%esp)
08132da2 +0x082:  mov    %eax,(%esp)
08132da5 +0x085:  call   0813609e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ca5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ca5
08132daa +0x08a:  sub    $0x4,%esp
08132dad +0x08d:  jmp    08132f2a <+0x20a>
08132db2 +0x092:  lea    -0x50(%ebp),%eax
08132db5 +0x095:  mov    %eax,(%esp)
08132db8 +0x098:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08132dbd +0x09d:  mov    0x4(%eax),%eax
08132dc0 +0x0a0:  cmp    0x10(%ebp),%eax
08132dc3 +0x0a3:  sete   %al
08132dc6 +0x0a6:  test   %al,%al
08132dc8 +0x0a8:  je     08132f0d <+0x1ed>
08132dce +0x0ae:  lea    -0x5c(%ebp),%eax
08132dd1 +0x0b1:  mov    %eax,(%esp)
08132dd4 +0x0b4:  call   08134476 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7d
08132dd9 +0x0b9:  movl   $0x0,-0x60(%ebp)
08132de0 +0x0c0:  lea    -0x50(%ebp),%eax
08132de3 +0x0c3:  mov    %eax,(%esp)
08132de6 +0x0c6:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08132deb +0x0cb:  lea    -0x60(%ebp),%edx
08132dee +0x0ce:  mov    %edx,0x8(%esp)
08132df2 +0x0d2:  movl   $0x1,0x4(%esp)
08132dfa +0x0da:  mov    %eax,(%esp)
08132dfd +0x0dd:  call   088a2f1a <_ZN12advancealtar14BuyUpgradeData25getMinLevelFieldDataPointENS_9FieldType1TERi>  ; advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint(advancealtar::FieldType::T, int&)
08132e02 +0x0e2:  mov    %eax,-0x10(%ebp)
08132e05 +0x0e5:  mov    -0x60(%ebp),%ebx
08132e08 +0x0e8:  lea    -0x50(%ebp),%eax
08132e0b +0x0eb:  mov    %eax,(%esp)
08132e0e +0x0ee:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08132e13 +0x0f3:  movl   $0x2,0x8(%esp)
08132e1b +0x0fb:  mov    %ebx,0x4(%esp)
08132e1f +0x0ff:  mov    %eax,(%esp)
08132e22 +0x102:  call   088a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
08132e27 +0x107:  mov    %eax,-0xc(%ebp)
08132e2a +0x10a:  cmpl   $0x0,-0x10(%ebp)
08132e2e +0x10e:  je     08132f0d <+0x1ed>
08132e34 +0x114:  cmpl   $0x0,-0xc(%ebp)
08132e38 +0x118:  je     08132f0d <+0x1ed>
08132e3e +0x11e:  lea    -0x50(%ebp),%eax
08132e41 +0x121:  mov    %eax,(%esp)
08132e44 +0x124:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08132e49 +0x129:  mov    (%eax),%eax
08132e4b +0x12b:  mov    %eax,-0x58(%ebp)
08132e4e +0x12e:  mov    0xc(%ebp),%eax
08132e51 +0x131:  mov    %eax,-0x5c(%ebp)
08132e54 +0x134:  mov    -0x60(%ebp),%eax
08132e57 +0x137:  mov    %ax,-0x54(%ebp)
08132e5b +0x13b:  mov    -0xc(%ebp),%eax
08132e5e +0x13e:  mov    0x4(%eax),%eax
08132e61 +0x141:  mov    %ax,-0x52(%ebp)
08132e65 +0x145:  lea    -0x30(%ebp),%eax
08132e68 +0x148:  lea    -0x5c(%ebp),%edx
08132e6b +0x14b:  mov    %edx,0x8(%esp)
08132e6f +0x14f:  lea    -0x5c(%ebp),%edx
08132e72 +0x152:  add    $0x4,%edx
08132e75 +0x155:  mov    %edx,0x4(%esp)
08132e79 +0x159:  mov    %eax,(%esp)
08132e7c +0x15c:  call   08135fea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1bf1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1bf1
08132e81 +0x161:  sub    $0x4,%esp
08132e84 +0x164:  lea    -0x30(%ebp),%eax
08132e87 +0x167:  mov    %eax,0x4(%esp)
08132e8b +0x16b:  lea    -0x40(%ebp),%eax
08132e8e +0x16e:  mov    %eax,(%esp)
08132e91 +0x171:  call   08136028 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c2f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c2f
08132e96 +0x176:  lea    -0x48(%ebp),%eax
08132e99 +0x179:  lea    -0x40(%ebp),%edx
08132e9c +0x17c:  mov    %edx,0x8(%esp)
08132ea0 +0x180:  mov    -0x18(%ebp),%edx
08132ea3 +0x183:  mov    %edx,0x4(%esp)
08132ea7 +0x187:  mov    %eax,(%esp)
08132eaa +0x18a:  call   08136064 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c6b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c6b
08132eaf +0x18f:  sub    $0x4,%esp
08132eb2 +0x192:  mov    -0x60(%ebp),%eax
08132eb5 +0x195:  test   %eax,%eax
08132eb7 +0x197:  jle    08132ed3 <+0x1b3>
08132eb9 +0x199:  lea    -0x50(%ebp),%eax
08132ebc +0x19c:  mov    %eax,(%esp)
08132ebf +0x19f:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
08132ec4 +0x1a4:  movzbl 0x8(%eax),%eax
08132ec8 +0x1a8:  test   %al,%al
08132eca +0x1aa:  je     08132ed3 <+0x1b3>
08132ecc +0x1ac:  mov    $0x1,%eax
08132ed1 +0x1b1:  jmp    08132ed8 <+0x1b8>
08132ed3 +0x1b3:  mov    $0x0,%eax
08132ed8 +0x1b8:  test   %al,%al
08132eda +0x1ba:  je     08132ef5 <+0x1d5>
08132edc +0x1bc:  mov    -0x58(%ebp),%edx
08132edf +0x1bf:  mov    -0x5c(%ebp),%eax
08132ee2 +0x1c2:  mov    %edx,0x8(%esp)
08132ee6 +0x1c6:  mov    %eax,0x4(%esp)
08132eea +0x1ca:  mov    0x8(%ebp),%eax
08132eed +0x1cd:  mov    %eax,(%esp)
08132ef0 +0x1d0:  call   08132234 <_ZN12advancealtar25CharacAdvanceAltarManager24setUnlockItemToEmptySlotENS_20AdvanceAltarShopType1TEi>  ; advancealtar::CharacAdvanceAltarManager::setUnlockItemToEmptySlot(advancealtar::AdvanceAltarShopType::T, int)
08132ef5 +0x1d5:  cmpl   $0x0,0x14(%ebp)
08132ef9 +0x1d9:  je     08132f0d <+0x1ed>
08132efb +0x1db:  lea    -0x5c(%ebp),%eax
08132efe +0x1de:  mov    %eax,0x4(%esp)
08132f02 +0x1e2:  mov    0x14(%ebp),%eax
08132f05 +0x1e5:  mov    %eax,(%esp)
08132f08 +0x1e8:  call   0813654e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x2155>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x2155
08132f0d +0x1ed:  lea    -0x20(%ebp),%eax
08132f10 +0x1f0:  movl   $0x0,0x8(%esp)
08132f18 +0x1f8:  lea    -0x50(%ebp),%edx
08132f1b +0x1fb:  mov    %edx,0x4(%esp)
08132f1f +0x1ff:  mov    %eax,(%esp)
08132f22 +0x202:  call   08136114 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d1b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d1b
08132f27 +0x207:  sub    $0x4,%esp
08132f2a +0x20a:  lea    -0x4c(%ebp),%eax
08132f2d +0x20d:  mov    -0x1c(%ebp),%edx
08132f30 +0x210:  mov    %edx,0x4(%esp)
08132f34 +0x214:  mov    %eax,(%esp)
08132f37 +0x217:  call   081360c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cc9
08132f3c +0x21c:  sub    $0x4,%esp
08132f3f +0x21f:  lea    -0x4c(%ebp),%eax
08132f42 +0x222:  mov    %eax,0x4(%esp)
08132f46 +0x226:  lea    -0x50(%ebp),%eax
08132f49 +0x229:  mov    %eax,(%esp)
08132f4c +0x22c:  call   081360e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cef
08132f51 +0x231:  test   %al,%al
08132f53 +0x233:  jne    08132db2 <+0x92>
08132f59 +0x239:  mov    -0x14(%ebp),%eax
08132f5c +0x23c:  movb   $0x1,0xcc(%eax)
08132f63 +0x243:  jmp    08132f6c <+0x24c>
08132f65 +0x245:  nop
08132f66 +0x246:  jmp    08132f6c <+0x24c>
08132f68 +0x248:  nop
08132f69 +0x249:  jmp    08132f6c <+0x24c>
08132f6b +0x24b:  nop
08132f6c +0x24c:  mov    -0x4(%ebp),%ebx
08132f6f +0x24f:  leave
08132f70 +0x250:  ret
08132f71 +0x251:  nop
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem @ 0x8132d20

/* advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem(advancealtar::AdvanceAltarShopType::T,
   int, std::vector<advancealtar::_BuyItem, std::allocator<advancealtar::_BuyItem> >*) */

void __thiscall
advancealtar::CharacAdvanceAltarManager::setUnlockBuyItem
          (CharacAdvanceAltarManager *this,undefined4 param_2,int param_3,
          vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> *param_4)

{
  bool bVar1;
  int iVar2;
  BuyUpgradeData *pBVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_54 [4];
  __normal_iterator local_50 [4];
  pair local_4c [8];
  pair<int_const,advancealtar::_BuyItem> local_44 [16];
  int local_34 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_24 [4];
  int local_20;
  int local_1c;
  AdvanceAltarData *local_18;
  int local_14;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = *(AdvanceAltarData **)this;
  if (local_18 != (AdvanceAltarData *)0x0) {
    uVar4 = *(undefined4 *)local_18;
    iVar2 = G_CDataManager();
    local_20 = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                         ((AdvanceAltarShopParameter *)(iVar2 + 0x631c),uVar4,param_2);
    local_1c = AdvanceAltarData::getBuyItemMap(local_18,param_2);
    if ((local_20 != 0) && (local_1c != 0)) {
      std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::begin
                ();
      while( true ) {
        std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::end
                  ();
        bVar1 = __gnu_cxx::operator!=(local_54,local_50);
        if (!bVar1) break;
        iVar2 = __gnu_cxx::
                __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                ::operator->(local_54);
        if (*(int *)(iVar2 + 4) == param_3) {
          _BuyItem::_BuyItem((_BuyItem *)&local_60);
          local_64 = 0;
          pBVar3 = (BuyUpgradeData *)
                   __gnu_cxx::
                   __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                   ::operator->(local_54);
          local_14 = BuyUpgradeData::getMinLevelFieldDataPoint(pBVar3,1,&local_64);
          iVar2 = local_64;
          uVar4 = __gnu_cxx::
                  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                  ::operator->(local_54);
          local_10 = BuyUpgradeData::getFieldDataPoint(uVar4,iVar2,2);
          if ((local_14 != 0) && (local_10 != 0)) {
            puVar5 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                     ::operator->(local_54);
            local_5c = *puVar5;
            local_60 = param_2;
            local_58 = (undefined2)local_64;
            local_56 = (undefined2)*(undefined4 *)(local_10 + 4);
            std::make_pair<int&,advancealtar::_BuyItem&>(local_34,(_BuyItem *)&local_5c);
            std::pair<int_const,advancealtar::_BuyItem>::pair<int,advancealtar::_BuyItem>
                      (local_44,(pair *)local_34);
            std::
            map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
            ::insert(local_4c);
            if ((local_64 < 1) ||
               (iVar2 = __gnu_cxx::
                        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                        ::operator->(local_54), *(char *)(iVar2 + 8) == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (bVar1) {
              setUnlockItemToEmptySlot(this,local_60,local_5c);
            }
            if (param_4 !=
                (vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>> *)0x0) {
              std::vector<advancealtar::_BuyItem,std::allocator<advancealtar::_BuyItem>>::push_back
                        (param_4,(_BuyItem *)&local_60);
            }
          }
        }
        __gnu_cxx::
        __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
        ::operator++(local_24,(int)local_54);
      }
      local_18[0xcc] = (AdvanceAltarData)0x1;
    }
  }
  return;
}
```
