# getTowerInfo

`_ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_`

`advancealtar::CharacAdvanceAltarManager::getTowerInfo(int, int&, int&) const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081328ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081328ea  _ZNK12advancealtar25CharacAdvanceAltarManager12getTowerInfoEiRiS1_
#           advancealtar::CharacAdvanceAltarManager::getTowerInfo(int, int&, int&) const
# range [0x081328ea, 0x08132abd]
081328ea +0x000:  push   %ebp
081328eb +0x001:  mov    %esp,%ebp
081328ed +0x003:  push   %ebx
081328ee +0x004:  sub    $0x44,%esp
081328f1 +0x007:  mov    0x8(%ebp),%eax
081328f4 +0x00a:  mov    (%eax),%eax
081328f6 +0x00c:  mov    %eax,-0x1c(%ebp)
081328f9 +0x00f:  cmpl   $0x0,-0x1c(%ebp)
081328fd +0x013:  jne    08132909 <+0x1f>
081328ff +0x015:  mov    $0x0,%eax
08132904 +0x01a:  jmp    08132ab9 <+0x1cf>
08132909 +0x01f:  mov    -0x1c(%ebp),%eax
0813290c +0x022:  add    $0x6c,%eax
0813290f +0x025:  mov    %eax,-0x18(%ebp)
08132912 +0x028:  lea    -0x2c(%ebp),%eax
08132915 +0x02b:  lea    0xc(%ebp),%edx
08132918 +0x02e:  mov    %edx,0x8(%esp)
0813291c +0x032:  mov    -0x18(%ebp),%edx
0813291f +0x035:  mov    %edx,0x4(%esp)
08132923 +0x039:  mov    %eax,(%esp)
08132926 +0x03c:  call   0813615c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d63>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d63
0813292b +0x041:  sub    $0x4,%esp
0813292e +0x044:  lea    -0x28(%ebp),%eax
08132931 +0x047:  mov    -0x18(%ebp),%edx
08132934 +0x04a:  mov    %edx,0x4(%esp)
08132938 +0x04e:  mov    %eax,(%esp)
0813293b +0x051:  call   08136188 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d8f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d8f
08132940 +0x056:  sub    $0x4,%esp
08132943 +0x059:  lea    -0x28(%ebp),%eax
08132946 +0x05c:  mov    %eax,0x4(%esp)
0813294a +0x060:  lea    -0x2c(%ebp),%eax
0813294d +0x063:  mov    %eax,(%esp)
08132950 +0x066:  call   081363a2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fa9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fa9
08132955 +0x06b:  test   %al,%al
08132957 +0x06d:  je     08132ab4 <+0x1ca>
0813295d +0x073:  mov    -0x1c(%ebp),%eax
08132960 +0x076:  mov    (%eax),%eax
08132962 +0x078:  mov    %eax,%ebx
08132964 +0x07a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08132969 +0x07f:  add    $0x631c,%eax
0813296e +0x084:  movl   $0x2,0x8(%esp)
08132976 +0x08c:  mov    %ebx,0x4(%esp)
0813297a +0x090:  mov    %eax,(%esp)
0813297d +0x093:  call   088a0fe8 <_ZN12advancealtar25AdvanceAltarShopParameter20getBuyUpgradeDataVecEiNS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarShopParameter::getBuyUpgradeDataVec(int, advancealtar::AdvanceAltarShopType::T)
08132982 +0x098:  mov    %eax,-0x14(%ebp)
08132985 +0x09b:  cmpl   $0x0,-0x14(%ebp)
08132989 +0x09f:  jne    08132995 <+0xab>
0813298b +0x0a1:  mov    $0x0,%eax
08132990 +0x0a6:  jmp    08132ab9 <+0x1cf>
08132995 +0x0ab:  movl   $0x0,-0x10(%ebp)
0813299c +0x0b2:  lea    -0x30(%ebp),%eax
0813299f +0x0b5:  mov    -0x14(%ebp),%edx
081329a2 +0x0b8:  mov    %edx,0x4(%esp)
081329a6 +0x0bc:  mov    %eax,(%esp)
081329a9 +0x0bf:  call   0813609e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1ca5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1ca5
081329ae +0x0c4:  sub    $0x4,%esp
081329b1 +0x0c7:  jmp    081329f9 <+0x10f>
081329b3 +0x0c9:  lea    -0x30(%ebp),%eax
081329b6 +0x0cc:  mov    %eax,(%esp)
081329b9 +0x0cf:  call   08136148 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d4f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d4f
081329be +0x0d4:  mov    (%eax),%edx
081329c0 +0x0d6:  mov    0xc(%ebp),%eax
081329c3 +0x0d9:  cmp    %eax,%edx
081329c5 +0x0db:  sete   %al
081329c8 +0x0de:  test   %al,%al
081329ca +0x0e0:  je     081329dc <+0xf2>
081329cc +0x0e2:  lea    -0x30(%ebp),%eax
081329cf +0x0e5:  mov    %eax,(%esp)
081329d2 +0x0e8:  call   08136152 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d59>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d59
081329d7 +0x0ed:  mov    %eax,-0x10(%ebp)
081329da +0x0f0:  jmp    08132a24 <+0x13a>
081329dc +0x0f2:  lea    -0x20(%ebp),%eax
081329df +0x0f5:  movl   $0x0,0x8(%esp)
081329e7 +0x0fd:  lea    -0x30(%ebp),%edx
081329ea +0x100:  mov    %edx,0x4(%esp)
081329ee +0x104:  mov    %eax,(%esp)
081329f1 +0x107:  call   08136114 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1d1b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1d1b
081329f6 +0x10c:  sub    $0x4,%esp
081329f9 +0x10f:  lea    -0x24(%ebp),%eax
081329fc +0x112:  mov    -0x14(%ebp),%edx
081329ff +0x115:  mov    %edx,0x4(%esp)
08132a03 +0x119:  mov    %eax,(%esp)
08132a06 +0x11c:  call   081360c2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cc9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cc9
08132a0b +0x121:  sub    $0x4,%esp
08132a0e +0x124:  lea    -0x24(%ebp),%eax
08132a11 +0x127:  mov    %eax,0x4(%esp)
08132a15 +0x12b:  lea    -0x30(%ebp),%eax
08132a18 +0x12e:  mov    %eax,(%esp)
08132a1b +0x131:  call   081360e8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1cef>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1cef
08132a20 +0x136:  test   %al,%al
08132a22 +0x138:  jne    081329b3 <+0xc9>
08132a24 +0x13a:  cmpl   $0x0,-0x10(%ebp)
08132a28 +0x13e:  jne    08132a34 <+0x14a>
08132a2a +0x140:  mov    $0x0,%eax
08132a2f +0x145:  jmp    08132ab9 <+0x1cf>
08132a34 +0x14a:  lea    -0x2c(%ebp),%eax
08132a37 +0x14d:  mov    %eax,(%esp)
08132a3a +0x150:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
08132a3f +0x155:  movzwl 0xc(%eax),%eax
08132a43 +0x159:  cwtl
08132a44 +0x15a:  movl   $0x1,0x8(%esp)
08132a4c +0x162:  mov    %eax,0x4(%esp)
08132a50 +0x166:  mov    -0x10(%ebp),%eax
08132a53 +0x169:  mov    %eax,(%esp)
08132a56 +0x16c:  call   088a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>  ; advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T)
08132a5b +0x171:  mov    %eax,-0xc(%ebp)
08132a5e +0x174:  cmpl   $0x0,-0xc(%ebp)
08132a62 +0x178:  jne    08132a6b <+0x181>
08132a64 +0x17a:  mov    $0x0,%eax
08132a69 +0x17f:  jmp    08132ab9 <+0x1cf>
08132a6b +0x181:  lea    -0x2c(%ebp),%eax
08132a6e +0x184:  mov    %eax,(%esp)
08132a71 +0x187:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
08132a76 +0x18c:  movzwl 0xc(%eax),%eax
08132a7a +0x190:  test   %ax,%ax
08132a7d +0x193:  sete   %al
08132a80 +0x196:  test   %al,%al
08132a82 +0x198:  je     08132a8b <+0x1a1>
08132a84 +0x19a:  mov    $0x0,%eax
08132a89 +0x19f:  jmp    08132ab9 <+0x1cf>
08132a8b +0x1a1:  mov    -0xc(%ebp),%eax
08132a8e +0x1a4:  mov    0x4(%eax),%edx
08132a91 +0x1a7:  mov    0x10(%ebp),%eax
08132a94 +0x1aa:  mov    %edx,(%eax)
08132a96 +0x1ac:  lea    -0x2c(%ebp),%eax
08132a99 +0x1af:  mov    %eax,(%esp)
08132a9c +0x1b2:  call   081363b6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1fbd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1fbd
08132aa1 +0x1b7:  movzwl 0xc(%eax),%eax
08132aa5 +0x1bb:  movswl %ax,%edx
08132aa8 +0x1be:  mov    0x14(%ebp),%eax
08132aab +0x1c1:  mov    %edx,(%eax)
08132aad +0x1c3:  mov    $0x1,%eax
08132ab2 +0x1c8:  jmp    08132ab9 <+0x1cf>
08132ab4 +0x1ca:  mov    $0x0,%eax
08132ab9 +0x1cf:  mov    -0x4(%ebp),%ebx
08132abc +0x1d2:  leave
08132abd +0x1d3:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::getTowerInfo @ 0x81328ea

/* advancealtar::CharacAdvanceAltarManager::getTowerInfo(int, int&, int&) const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::getTowerInfo
          (CharacAdvanceAltarManager *this,int param_1,int *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_34 [4];
  _Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_30 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_2c [4];
  __normal_iterator local_28 [4];
  __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
  local_24 [4];
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = *(undefined4 **)this;
  if (local_20 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_1c = local_20 + 0x1b;
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::find((int *)local_30);
    std::
    map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
    ::end(local_2c);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator!=
                      (local_30,(_Rb_tree_const_iterator *)local_2c);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = *local_20;
      iVar4 = G_CDataManager();
      local_18 = AdvanceAltarShopParameter::getBuyUpgradeDataVec
                           ((AdvanceAltarShopParameter *)(iVar4 + 0x631c),uVar3,2);
      if (local_18 == 0) {
        uVar3 = 0;
      }
      else {
        local_14 = 0;
        std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
        begin();
        while( true ) {
          std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>::
          end();
          bVar2 = __gnu_cxx::operator!=(local_34,local_28);
          if (!bVar2) break;
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                          ::operator->(local_34);
          if (*piVar5 == param_1) {
            local_14 = __gnu_cxx::
                       __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
                       ::operator*(local_34);
            break;
          }
          __gnu_cxx::
          __normal_iterator<advancealtar::BuyUpgradeData*,std::vector<advancealtar::BuyUpgradeData,std::allocator<advancealtar::BuyUpgradeData>>>
          ::operator++(local_24,(int)local_34);
        }
        if (local_14 == 0) {
          uVar3 = 0;
        }
        else {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                  operator->(local_30);
          local_10 = BuyUpgradeData::getFieldDataPoint(local_14,(int)*(short *)(iVar4 + 0xc),1);
          if (local_10 == 0) {
            uVar3 = 0;
          }
          else {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                    operator->(local_30);
            if (*(short *)(iVar4 + 0xc) == 0) {
              uVar3 = 0;
            }
            else {
              *param_2 = *(int *)(local_10 + 4);
              iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,advancealtar::_BuyItem>>::
                      operator->(local_30);
              *param_3 = (int)*(short *)(iVar4 + 0xc);
              uVar3 = 1;
            }
          }
        }
      }
    }
  }
  return uVar3;
}
```
