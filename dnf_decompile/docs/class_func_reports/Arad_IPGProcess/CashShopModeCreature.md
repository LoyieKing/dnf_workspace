# CashShopModeCreature

`_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic`

`Arad_IPGProcess::CashShopModeCreature(CUser*, unsigned long, unsigned short, int&, int&, unsigned int, int, char)`

| 类 | 地址 |
|---|---|
| `Arad_IPGProcess` | `0x0819c670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819c670  _ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic
#           Arad_IPGProcess::CashShopModeCreature(CUser*, unsigned long, unsigned short, int&, int&, unsigned int, int, char)
# range [0x0819c670, 0x0819c861]
0819c670 +0x000:  push   %ebp
0819c671 +0x001:  mov    %esp,%ebp
0819c673 +0x003:  push   %ebx
0819c674 +0x004:  sub    $0xc4,%esp
0819c67a +0x00a:  mov    0x14(%ebp),%edx
0819c67d +0x00d:  mov    0x28(%ebp),%eax
0819c680 +0x010:  mov    %dx,-0x5c(%ebp)
0819c684 +0x014:  mov    %al,-0x60(%ebp)
0819c687 +0x017:  mov    0x10(%ebp),%ebx
0819c68a +0x01a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0819c68f +0x01f:  mov    %ebx,0x4(%esp)
0819c693 +0x023:  mov    %eax,(%esp)
0819c696 +0x026:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0819c69b +0x02b:  mov    %eax,-0xc(%ebp)
0819c69e +0x02e:  cmpl   $0x0,-0xc(%ebp)
0819c6a2 +0x032:  je     0819c858 <+0x1e8>
0819c6a8 +0x038:  lea    -0x49(%ebp),%eax
0819c6ab +0x03b:  mov    %eax,(%esp)
0819c6ae +0x03e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0819c6b3 +0x043:  mov    -0xc(%ebp),%eax
0819c6b6 +0x046:  mov    (%eax),%eax
0819c6b8 +0x048:  add    $0x8,%eax
0819c6bb +0x04b:  mov    (%eax),%edx
0819c6bd +0x04d:  lea    -0x49(%ebp),%eax
0819c6c0 +0x050:  mov    %eax,0x4(%esp)
0819c6c4 +0x054:  mov    -0xc(%ebp),%eax
0819c6c7 +0x057:  mov    %eax,(%esp)
0819c6ca +0x05a:  call   *%edx
0819c6cc +0x05c:  mov    0x10(%ebp),%eax
0819c6cf +0x05f:  mov    %eax,-0x47(%ebp)
0819c6d2 +0x062:  movzwl -0x5c(%ebp),%eax
0819c6d6 +0x066:  mov    %eax,-0x42(%ebp)
0819c6d9 +0x069:  cmpb   $0x1,-0x60(%ebp)
0819c6dd +0x06d:  jne    0819c79b <+0x12b>
0819c6e3 +0x073:  mov    -0xc(%ebp),%eax
0819c6e6 +0x076:  mov    %eax,(%esp)
0819c6e9 +0x079:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0819c6ee +0x07e:  mov    %eax,%ebx
0819c6f0 +0x080:  mov    -0xc(%ebp),%eax
0819c6f3 +0x083:  mov    %eax,(%esp)
0819c6f6 +0x086:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0819c6fb +0x08b:  mov    0x8(%ebp),%edx
0819c6fe +0x08e:  mov    (%edx),%edx
0819c700 +0x090:  mov    %ebx,0x54(%esp)
0819c704 +0x094:  mov    %eax,0x50(%esp)
0819c708 +0x098:  mov    0x24(%ebp),%eax
0819c70b +0x09b:  mov    %eax,0x4c(%esp)
0819c70f +0x09f:  mov    0x20(%ebp),%eax
0819c712 +0x0a2:  mov    %eax,0x48(%esp)
0819c716 +0x0a6:  mov    -0x49(%ebp),%eax
0819c719 +0x0a9:  mov    %eax,0x8(%esp)
0819c71d +0x0ad:  mov    -0x45(%ebp),%eax
0819c720 +0x0b0:  mov    %eax,0xc(%esp)
0819c724 +0x0b4:  mov    -0x41(%ebp),%eax
0819c727 +0x0b7:  mov    %eax,0x10(%esp)
0819c72b +0x0bb:  mov    -0x3d(%ebp),%eax
0819c72e +0x0be:  mov    %eax,0x14(%esp)
0819c732 +0x0c2:  mov    -0x39(%ebp),%eax
0819c735 +0x0c5:  mov    %eax,0x18(%esp)
0819c739 +0x0c9:  mov    -0x35(%ebp),%eax
0819c73c +0x0cc:  mov    %eax,0x1c(%esp)
0819c740 +0x0d0:  mov    -0x31(%ebp),%eax
0819c743 +0x0d3:  mov    %eax,0x20(%esp)
0819c747 +0x0d7:  mov    -0x2d(%ebp),%eax
0819c74a +0x0da:  mov    %eax,0x24(%esp)
0819c74e +0x0de:  mov    -0x29(%ebp),%eax
0819c751 +0x0e1:  mov    %eax,0x28(%esp)
0819c755 +0x0e5:  mov    -0x25(%ebp),%eax
0819c758 +0x0e8:  mov    %eax,0x2c(%esp)
0819c75c +0x0ec:  mov    -0x21(%ebp),%eax
0819c75f +0x0ef:  mov    %eax,0x30(%esp)
0819c763 +0x0f3:  mov    -0x1d(%ebp),%eax
0819c766 +0x0f6:  mov    %eax,0x34(%esp)
0819c76a +0x0fa:  mov    -0x19(%ebp),%eax
0819c76d +0x0fd:  mov    %eax,0x38(%esp)
0819c771 +0x101:  mov    -0x15(%ebp),%eax
0819c774 +0x104:  mov    %eax,0x3c(%esp)
0819c778 +0x108:  mov    -0x11(%ebp),%eax
0819c77b +0x10b:  mov    %eax,0x40(%esp)
0819c77f +0x10f:  movzbl -0xd(%ebp),%eax
0819c783 +0x113:  mov    %al,0x44(%esp)
0819c787 +0x117:  mov    0xc(%ebp),%eax
0819c78a +0x11a:  mov    %eax,0x4(%esp)
0819c78e +0x11e:  mov    %edx,(%esp)
0819c791 +0x121:  call   083265e8 <_ZN8WongWork9CCeraShop20_processCreatureGiftEP5CUser10Inven_Itemjiii>  ; WongWork::CCeraShop::_processCreatureGift(CUser*, Inven_Item, unsigned int, int, int, int)
0819c796 +0x126:  jmp    0819c859 <+0x1e9>
0819c79b +0x12b:  mov    -0xc(%ebp),%eax
0819c79e +0x12e:  mov    %eax,(%esp)
0819c7a1 +0x131:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0819c7a6 +0x136:  mov    %eax,%ebx
0819c7a8 +0x138:  mov    -0xc(%ebp),%eax
0819c7ab +0x13b:  mov    %eax,(%esp)
0819c7ae +0x13e:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0819c7b3 +0x143:  mov    0x8(%ebp),%edx
0819c7b6 +0x146:  mov    (%edx),%edx
0819c7b8 +0x148:  mov    %ebx,0x58(%esp)
0819c7bc +0x14c:  mov    %eax,0x54(%esp)
0819c7c0 +0x150:  movl   $0x1,0x50(%esp)
0819c7c8 +0x158:  mov    0x1c(%ebp),%eax
0819c7cb +0x15b:  mov    %eax,0x4c(%esp)
0819c7cf +0x15f:  mov    0x18(%ebp),%eax
0819c7d2 +0x162:  mov    %eax,0x48(%esp)
0819c7d6 +0x166:  mov    -0x49(%ebp),%eax
0819c7d9 +0x169:  mov    %eax,0x8(%esp)
0819c7dd +0x16d:  mov    -0x45(%ebp),%eax
0819c7e0 +0x170:  mov    %eax,0xc(%esp)
0819c7e4 +0x174:  mov    -0x41(%ebp),%eax
0819c7e7 +0x177:  mov    %eax,0x10(%esp)
0819c7eb +0x17b:  mov    -0x3d(%ebp),%eax
0819c7ee +0x17e:  mov    %eax,0x14(%esp)
0819c7f2 +0x182:  mov    -0x39(%ebp),%eax
0819c7f5 +0x185:  mov    %eax,0x18(%esp)
0819c7f9 +0x189:  mov    -0x35(%ebp),%eax
0819c7fc +0x18c:  mov    %eax,0x1c(%esp)
0819c800 +0x190:  mov    -0x31(%ebp),%eax
0819c803 +0x193:  mov    %eax,0x20(%esp)
0819c807 +0x197:  mov    -0x2d(%ebp),%eax
0819c80a +0x19a:  mov    %eax,0x24(%esp)
0819c80e +0x19e:  mov    -0x29(%ebp),%eax
0819c811 +0x1a1:  mov    %eax,0x28(%esp)
0819c815 +0x1a5:  mov    -0x25(%ebp),%eax
0819c818 +0x1a8:  mov    %eax,0x2c(%esp)
0819c81c +0x1ac:  mov    -0x21(%ebp),%eax
0819c81f +0x1af:  mov    %eax,0x30(%esp)
0819c823 +0x1b3:  mov    -0x1d(%ebp),%eax
0819c826 +0x1b6:  mov    %eax,0x34(%esp)
0819c82a +0x1ba:  mov    -0x19(%ebp),%eax
0819c82d +0x1bd:  mov    %eax,0x38(%esp)
0819c831 +0x1c1:  mov    -0x15(%ebp),%eax
0819c834 +0x1c4:  mov    %eax,0x3c(%esp)
0819c838 +0x1c8:  mov    -0x11(%ebp),%eax
0819c83b +0x1cb:  mov    %eax,0x40(%esp)
0819c83f +0x1cf:  movzbl -0xd(%ebp),%eax
0819c843 +0x1d3:  mov    %al,0x44(%esp)
0819c847 +0x1d7:  mov    0xc(%ebp),%eax
0819c84a +0x1da:  mov    %eax,0x4(%esp)
0819c84e +0x1de:  mov    %edx,(%esp)
0819c851 +0x1e1:  call   08325d66 <_ZN8WongWork9CCeraShop16_processCreatureEP5CUser10Inven_ItemRiS4_bii>  ; WongWork::CCeraShop::_processCreature(CUser*, Inven_Item, int&, int&, bool, int, int)
0819c856 +0x1e6:  jmp    0819c859 <+0x1e9>
0819c858 +0x1e8:  nop
0819c859 +0x1e9:  add    $0xc4,%esp
0819c85f +0x1ef:  pop    %ebx
0819c860 +0x1f0:  pop    %ebp
0819c861 +0x1f1:  ret
```

## 反编译 C

```c
// Arad_IPGProcess::CashShopModeCreature @ 0x819c670

/* Arad_IPGProcess::CashShopModeCreature(CUser*, unsigned long, unsigned short, int&, int&, unsigned
   int, int, char) */

void __thiscall
Arad_IPGProcess::CashShopModeCreature
          (Arad_IPGProcess *this,CUser *param_1,ulong param_2,ushort param_3,int *param_4,
          int *param_5,uint param_6,int param_7,char param_8)

{
  CDataManager *this_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 local_4d;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  uint uStack_46;
  undefined1 uStack_42;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  CItem *local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  local_10 = (CItem *)CDataManager::find_item(this_00,param_2);
  if (local_10 != (CItem *)0x0) {
    Inven_Item::Inven_Item((Inven_Item *)&local_4d);
    (**(code **)(*(int *)local_10 + 8))(local_10,&local_4d);
    uStack_46 = (uint)param_3;
    uStack_4b = param_2;
    if (param_8 == '\x01') {
      uVar1 = CItem::getExpirationDate(local_10);
      uVar2 = CItem::getUsablePeriod(local_10);
      WongWork::CCeraShop::_processCreatureGift
                (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_4b,local_4d),
                 CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_)),
                 CONCAT13(uStack_42,uStack_46._1_3_),local_41,local_3d,local_39,local_35,local_31,
                 local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,param_6,
                 param_7,uVar2,uVar1);
    }
    else {
      uVar1 = CItem::getExpirationDate(local_10);
      uVar2 = CItem::getUsablePeriod(local_10);
      WongWork::CCeraShop::_processCreature
                (*(undefined4 *)this,param_1,CONCAT22((undefined2)uStack_4b,local_4d),
                 CONCAT13((undefined1)uStack_46,CONCAT12(uStack_47,uStack_4b._2_2_)),
                 CONCAT13(uStack_42,uStack_46._1_3_),local_41,local_3d,local_39,local_35,local_31,
                 local_2d,local_29,local_25,local_21,local_1d,local_19,local_15,local_11,param_4,
                 param_5,1,uVar2,uVar1);
    }
  }
  return;
}
```
