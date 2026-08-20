# buyItem

`_ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi`

`advancealtar::CharacAdvanceAltarManager::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int, int&)`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081319ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081319ae  _ZN12advancealtar25CharacAdvanceAltarManager7buyItemENS_20AdvanceAltarShopType1TEissiRi
#           advancealtar::CharacAdvanceAltarManager::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int, int&)
# range [0x081319ae, 0x08131b57]
081319ae +0x000:  push   %ebp
081319af +0x001:  mov    %esp,%ebp
081319b1 +0x003:  push   %ebx
081319b2 +0x004:  sub    $0x84,%esp
081319b8 +0x00a:  mov    0x14(%ebp),%edx
081319bb +0x00d:  mov    0x18(%ebp),%eax
081319be +0x010:  mov    %dx,-0x5c(%ebp)
081319c2 +0x014:  mov    %ax,-0x60(%ebp)
081319c6 +0x018:  mov    0x8(%ebp),%eax
081319c9 +0x01b:  mov    (%eax),%eax
081319cb +0x01d:  mov    %eax,-0x10(%ebp)
081319ce +0x020:  cmpl   $0x0,-0x10(%ebp)
081319d2 +0x024:  jne    081319de <+0x30>
081319d4 +0x026:  mov    $0x3,%eax
081319d9 +0x02b:  jmp    08131b53 <+0x1a5>
081319de +0x030:  mov    -0x10(%ebp),%eax
081319e1 +0x033:  mov    0x14(%eax),%eax
081319e4 +0x036:  cmp    0x1c(%ebp),%eax
081319e7 +0x039:  jge    081319f3 <+0x45>
081319e9 +0x03b:  mov    $0x2,%eax
081319ee +0x040:  jmp    08131b53 <+0x1a5>
081319f3 +0x045:  mov    0xc(%ebp),%eax
081319f6 +0x048:  mov    %eax,0x4(%esp)
081319fa +0x04c:  mov    -0x10(%ebp),%eax
081319fd +0x04f:  mov    %eax,(%esp)
08131a00 +0x052:  call   088999d8 <_ZN12advancealtar16AdvanceAltarData13getBuyItemMapENS_20AdvanceAltarShopType1TE>  ; advancealtar::AdvanceAltarData::getBuyItemMap(advancealtar::AdvanceAltarShopType::T)
08131a05 +0x057:  mov    %eax,-0xc(%ebp)
08131a08 +0x05a:  cmpl   $0x0,-0xc(%ebp)
08131a0c +0x05e:  jne    08131a18 <+0x6a>
08131a0e +0x060:  mov    $0x3,%eax
08131a13 +0x065:  jmp    08131b53 <+0x1a5>
08131a18 +0x06a:  lea    -0x40(%ebp),%eax
08131a1b +0x06d:  lea    0x10(%ebp),%edx
08131a1e +0x070:  mov    %edx,0x8(%esp)
08131a22 +0x074:  mov    -0xc(%ebp),%edx
08131a25 +0x077:  mov    %edx,0x4(%esp)
08131a29 +0x07b:  mov    %eax,(%esp)
08131a2c +0x07e:  call   08135f84 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1b8b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1b8b
08131a31 +0x083:  sub    $0x4,%esp
08131a34 +0x086:  lea    -0x3c(%ebp),%eax
08131a37 +0x089:  mov    -0xc(%ebp),%edx
08131a3a +0x08c:  mov    %edx,0x4(%esp)
08131a3e +0x090:  mov    %eax,(%esp)
08131a41 +0x093:  call   08135fb0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1bb7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1bb7
08131a46 +0x098:  sub    $0x4,%esp
08131a49 +0x09b:  lea    -0x3c(%ebp),%eax
08131a4c +0x09e:  mov    %eax,0x4(%esp)
08131a50 +0x0a2:  lea    -0x40(%ebp),%eax
08131a53 +0x0a5:  mov    %eax,(%esp)
08131a56 +0x0a8:  call   08135fd6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1bdd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1bdd
08131a5b +0x0ad:  test   %al,%al
08131a5d +0x0af:  je     08131ad1 <+0x123>
08131a5f +0x0b1:  lea    -0x4c(%ebp),%eax
08131a62 +0x0b4:  mov    %eax,(%esp)
08131a65 +0x0b7:  call   08134476 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x7d>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x7d
08131a6a +0x0bc:  mov    0xc(%ebp),%eax
08131a6d +0x0bf:  mov    %eax,-0x4c(%ebp)
08131a70 +0x0c2:  mov    0x10(%ebp),%eax
08131a73 +0x0c5:  mov    %eax,-0x48(%ebp)
08131a76 +0x0c8:  movzwl -0x60(%ebp),%eax
08131a7a +0x0cc:  mov    %ax,-0x44(%ebp)
08131a7e +0x0d0:  mov    0x1c(%ebp),%eax
08131a81 +0x0d3:  mov    %ax,-0x42(%ebp)
08131a85 +0x0d7:  lea    -0x20(%ebp),%eax
08131a88 +0x0da:  lea    -0x4c(%ebp),%edx
08131a8b +0x0dd:  mov    %edx,0x8(%esp)
08131a8f +0x0e1:  lea    0x10(%ebp),%edx
08131a92 +0x0e4:  mov    %edx,0x4(%esp)
08131a96 +0x0e8:  mov    %eax,(%esp)
08131a99 +0x0eb:  call   08135fea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1bf1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1bf1
08131a9e +0x0f0:  sub    $0x4,%esp
08131aa1 +0x0f3:  lea    -0x20(%ebp),%eax
08131aa4 +0x0f6:  mov    %eax,0x4(%esp)
08131aa8 +0x0fa:  lea    -0x30(%ebp),%eax
08131aab +0x0fd:  mov    %eax,(%esp)
08131aae +0x100:  call   08136028 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c2f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c2f
08131ab3 +0x105:  lea    -0x38(%ebp),%eax
08131ab6 +0x108:  lea    -0x30(%ebp),%edx
08131ab9 +0x10b:  mov    %edx,0x8(%esp)
08131abd +0x10f:  mov    -0xc(%ebp),%edx
08131ac0 +0x112:  mov    %edx,0x4(%esp)
08131ac4 +0x116:  mov    %eax,(%esp)
08131ac7 +0x119:  call   08136064 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c6b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c6b
08131acc +0x11e:  sub    $0x4,%esp
08131acf +0x121:  jmp    08131aff <+0x151>
08131ad1 +0x123:  lea    -0x40(%ebp),%eax
08131ad4 +0x126:  mov    %eax,(%esp)
08131ad7 +0x129:  call   08136090 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c97>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c97
08131adc +0x12e:  movzwl -0x60(%ebp),%edx
08131ae0 +0x132:  mov    %dx,0xc(%eax)
08131ae4 +0x136:  lea    -0x40(%ebp),%eax
08131ae7 +0x139:  mov    %eax,(%esp)
08131aea +0x13c:  call   08136090 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1c97>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1c97
08131aef +0x141:  movzwl 0xe(%eax),%edx
08131af3 +0x145:  mov    %edx,%ecx
08131af5 +0x147:  mov    0x1c(%ebp),%edx
08131af8 +0x14a:  lea    (%ecx,%edx,1),%edx
08131afb +0x14d:  mov    %dx,0xe(%eax)
08131aff +0x151:  mov    -0x10(%ebp),%eax
08131b02 +0x154:  mov    0x14(%eax),%eax
08131b05 +0x157:  mov    %eax,%edx
08131b07 +0x159:  sub    0x1c(%ebp),%edx
08131b0a +0x15c:  mov    -0x10(%ebp),%eax
08131b0d +0x15f:  mov    %edx,0x14(%eax)
08131b10 +0x162:  mov    -0x10(%ebp),%eax
08131b13 +0x165:  movb   $0x1,0xcc(%eax)
08131b1a +0x16c:  mov    -0x10(%ebp),%eax
08131b1d +0x16f:  mov    0x14(%eax),%edx
08131b20 +0x172:  mov    0x20(%ebp),%eax
08131b23 +0x175:  mov    %edx,(%eax)
08131b25 +0x177:  movswl -0x60(%ebp),%ecx
08131b29 +0x17b:  movswl -0x5c(%ebp),%edx
08131b2d +0x17f:  mov    0x10(%ebp),%eax
08131b30 +0x182:  mov    0x1c(%ebp),%ebx
08131b33 +0x185:  mov    %ebx,0x10(%esp)
08131b37 +0x189:  mov    %ecx,0xc(%esp)
08131b3b +0x18d:  mov    %edx,0x8(%esp)
08131b3f +0x191:  mov    %eax,0x4(%esp)
08131b43 +0x195:  mov    0xc(%ebp),%eax
08131b46 +0x198:  mov    %eax,(%esp)
08131b49 +0x19b:  call   08133dda <_ZN12advancealtar10HistoryLog7buyItemENS_20AdvanceAltarShopType1TEissi>  ; advancealtar::HistoryLog::buyItem(advancealtar::AdvanceAltarShopType::T, int, short, short, int)
08131b4e +0x1a0:  mov    $0x0,%eax
08131b53 +0x1a5:  mov    -0x4(%ebp),%ebx
08131b56 +0x1a8:  leave
08131b57 +0x1a9:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::buyItem @ 0x81319ae

/* advancealtar::CharacAdvanceAltarManager::buyItem(advancealtar::AdvanceAltarShopType::T, int,
   short, short, int, int&) */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::buyItem
          (CharacAdvanceAltarManager *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,int param_6,undefined4 *param_7)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  undefined4 local_50;
  undefined4 local_4c;
  short local_48;
  undefined2 local_46;
  _Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>> local_44 [4];
  map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
  local_40 [4];
  pair local_3c [8];
  pair<int_const,advancealtar::_BuyItem> local_34 [16];
  int local_24 [4];
  AdvanceAltarData *local_14;
  int local_10;
  
  sVar5 = (short)param_4;
  sVar2 = (short)param_5;
  local_14 = *(AdvanceAltarData **)this;
  if (local_14 == (AdvanceAltarData *)0x0) {
    uVar3 = 3;
  }
  else if (*(int *)(local_14 + 0x14) < param_6) {
    uVar3 = 2;
  }
  else {
    local_10 = AdvanceAltarData::getBuyItemMap(local_14,param_2);
    if (local_10 == 0) {
      uVar3 = 3;
    }
    else {
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::find((int *)local_44);
      std::
      map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
      ::end(local_40);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator==
                        (local_44,(_Rb_tree_iterator *)local_40);
      if (cVar1 == '\0') {
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                          (local_44);
        *(short *)(iVar4 + 0xc) = sVar2;
        iVar4 = std::_Rb_tree_iterator<std::pair<int_const,advancealtar::_BuyItem>>::operator->
                          (local_44);
        *(short *)(iVar4 + 0xe) = *(short *)(iVar4 + 0xe) + (short)param_6;
      }
      else {
        _BuyItem::_BuyItem((_BuyItem *)&local_50);
        local_50 = param_2;
        local_4c = param_3;
        local_46 = (undefined2)param_6;
        local_48 = sVar2;
        std::make_pair<int&,advancealtar::_BuyItem&>(local_24,(_BuyItem *)&param_3);
        std::pair<int_const,advancealtar::_BuyItem>::pair<int,advancealtar::_BuyItem>
                  (local_34,(pair *)local_24);
        std::
        map<int,advancealtar::_BuyItem,std::less<int>,std::allocator<std::pair<int_const,advancealtar::_BuyItem>>>
        ::insert(local_3c);
      }
      *(int *)(local_14 + 0x14) = *(int *)(local_14 + 0x14) - param_6;
      local_14[0xcc] = (AdvanceAltarData)0x1;
      *param_7 = *(undefined4 *)(local_14 + 0x14);
      HistoryLog::buyItem(param_2,param_3,(int)sVar5,(int)sVar2,param_6);
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
