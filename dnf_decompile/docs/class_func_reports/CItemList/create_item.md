# create_item

`_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi`

`CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08511fb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08511fb8  _ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi
#           CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
# range [0x08511fb8, 0x0851222f]
08511fb8 +0x000:  push   %ebp
08511fb9 +0x001:  mov    %esp,%ebp
08511fbb +0x003:  push   %esi
08511fbc +0x004:  push   %ebx
08511fbd +0x005:  sub    $0x60,%esp
08511fc0 +0x008:  mov    0x14(%ebp),%eax
08511fc3 +0x00b:  mov    %eax,0x4(%esp)
08511fc7 +0x00f:  mov    0x10(%ebp),%eax
08511fca +0x012:  mov    %eax,(%esp)
08511fcd +0x015:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08511fd2 +0x01a:  mov    0x10(%ebp),%eax
08511fd5 +0x01d:  mov    0x2(%eax),%eax
08511fd8 +0x020:  mov    %eax,0x4(%esp)
08511fdc +0x024:  mov    0x8(%ebp),%eax
08511fdf +0x027:  mov    %eax,(%esp)
08511fe2 +0x02a:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08511fe7 +0x02f:  mov    %eax,-0x20(%ebp)
08511fea +0x032:  cmpl   $0x0,-0x20(%ebp)
08511fee +0x036:  jne    08512063 <+0xab>
08511ff0 +0x038:  mov    0x10(%ebp),%eax
08511ff3 +0x03b:  mov    0x2(%eax),%eax
08511ff6 +0x03e:  mov    %eax,0x14(%esp)
08511ffa +0x042:  movl   $"find_item(%d)",0x10(%esp)
08512002 +0x04a:  movl   $0x98f,0xc(%esp)
0851200a +0x052:  movl   $&_ZZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_ItemiE19__PRETTY_FUNCTION__,0x8(%esp)
08512012 +0x05a:  movl   $"item.cpp",0x4(%esp)
0851201a +0x062:  movl   $0x1,(%esp)
08512021 +0x069:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08512026 +0x06e:  mov    0x10(%ebp),%eax
08512029 +0x071:  movl   $0xffffffff,0x2(%eax)
08512030 +0x078:  movl   $0x0,0x4(%esp)
08512038 +0x080:  mov    0x10(%ebp),%eax
0851203b +0x083:  mov    %eax,(%esp)
0851203e +0x086:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08512043 +0x08b:  mov    0x10(%ebp),%eax
08512046 +0x08e:  movw   $0x0,0xb(%eax)
0851204c +0x094:  mov    0x10(%ebp),%eax
0851204f +0x097:  movb   $0x0,0x1(%eax)
08512053 +0x09b:  mov    0x10(%ebp),%eax
08512056 +0x09e:  mov    %eax,(%esp)
08512059 +0x0a1:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0851205e +0x0a6:  jmp    08512228 <+0x270>
08512063 +0x0ab:  mov    -0x20(%ebp),%eax
08512066 +0x0ae:  mov    (%eax),%eax
08512068 +0x0b0:  add    $0x8,%eax
0851206b +0x0b3:  mov    (%eax),%edx
0851206d +0x0b5:  mov    0x10(%ebp),%eax
08512070 +0x0b8:  mov    %eax,0x4(%esp)
08512074 +0x0bc:  mov    -0x20(%ebp),%eax
08512077 +0x0bf:  mov    %eax,(%esp)
0851207a +0x0c2:  call   *%edx
0851207c +0x0c4:  mov    -0x20(%ebp),%eax
0851207f +0x0c7:  mov    %eax,(%esp)
08512082 +0x0ca:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08512087 +0x0cf:  test   %al,%al
08512089 +0x0d1:  je     0851211c <+0x164>
0851208f +0x0d7:  mov    0x10(%ebp),%eax
08512092 +0x0da:  mov    %eax,(%esp)
08512095 +0x0dd:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0851209a +0x0e2:  shr    $0x1f,%eax
0851209d +0x0e5:  test   %al,%al
0851209f +0x0e7:  je     085120b4 <+0xfc>
085120a1 +0x0e9:  movl   $0x0,0x4(%esp)
085120a9 +0x0f1:  mov    0x10(%ebp),%eax
085120ac +0x0f4:  mov    %eax,(%esp)
085120af +0x0f7:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085120b4 +0x0fc:  mov    0x10(%ebp),%eax
085120b7 +0x0ff:  mov    %eax,(%esp)
085120ba +0x102:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085120bf +0x107:  cmp    $0x3e7,%eax
085120c4 +0x10c:  setg   %al
085120c7 +0x10f:  test   %al,%al
085120c9 +0x111:  je     0851211c <+0x164>
085120cb +0x113:  mov    0x10(%ebp),%eax
085120ce +0x116:  mov    0x2(%eax),%esi
085120d1 +0x119:  mov    0x10(%ebp),%eax
085120d4 +0x11c:  mov    %eax,(%esp)
085120d7 +0x11f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085120dc +0x124:  mov    %eax,%ebx
085120de +0x126:  movl   $0x5,0xc(%esp)
085120e6 +0x12e:  movl   $0x9a1,0x8(%esp)
085120ee +0x136:  movl   $&_ZZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_ItemiE19__PRETTY_FUNCTION__,0x4(%esp)
085120f6 +0x13e:  lea    -0x30(%ebp),%eax
085120f9 +0x141:  mov    %eax,(%esp)
085120fc +0x144:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08512101 +0x149:  mov    %esi,0xc(%esp)
08512105 +0x14d:  mov    %ebx,0x8(%esp)
08512109 +0x151:  movl   $"CItemList::create_item, add_info >= STACK_LIMIT_ERROR , %d ITEM #%d",0x4(%esp)
08512111 +0x159:  lea    -0x30(%ebp),%eax
08512114 +0x15c:  mov    %eax,(%esp)
08512117 +0x15f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0851211c +0x164:  mov    0x10(%ebp),%eax
0851211f +0x167:  add    $0x11,%eax
08512122 +0x16a:  mov    %eax,(%esp)
08512125 +0x16d:  call   080cb75c <_GLOBAL__I__ZN10BingoEventC2Ev+0x5a9>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5a9
0851212a +0x172:  cmpl   $0x1,0xc(%ebp)
0851212e +0x176:  jne    08512228 <+0x270>
08512134 +0x17c:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08512139 +0x181:  movl   $0x0,0xc(%esp)
08512141 +0x189:  mov    0x10(%ebp),%edx
08512144 +0x18c:  mov    %edx,0x8(%esp)
08512148 +0x190:  mov    -0x20(%ebp),%edx
0851214b +0x193:  mov    %edx,0x4(%esp)
0851214f +0x197:  mov    %eax,(%esp)
08512152 +0x19a:  call   08234980 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa02a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa02a
08512157 +0x19f:  test   %al,%al
08512159 +0x1a1:  je     08512176 <+0x1be>
0851215b +0x1a3:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08512160 +0x1a8:  mov    0x10(%ebp),%edx
08512163 +0x1ab:  mov    %edx,0x8(%esp)
08512167 +0x1af:  mov    -0x20(%ebp),%edx
0851216a +0x1b2:  mov    %edx,0x4(%esp)
0851216e +0x1b6:  mov    %eax,(%esp)
08512171 +0x1b9:  call   08514eba <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x14ef>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x14ef
08512176 +0x1be:  mov    0x10(%ebp),%eax
08512179 +0x1c1:  movzbl 0x1(%eax),%eax
0851217d +0x1c5:  cmp    $0x1,%al
0851217f +0x1c7:  jne    08512228 <+0x270>
08512185 +0x1cd:  mov    -0x20(%ebp),%eax
08512188 +0x1d0:  mov    %eax,(%esp)
0851218b +0x1d3:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
08512190 +0x1d8:  mov    %eax,-0x1c(%ebp)
08512193 +0x1db:  movl   $0x64,(%esp)
0851219a +0x1e2:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0851219f +0x1e7:  mov    %eax,-0x18(%ebp)
085121a2 +0x1ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085121a7 +0x1ef:  mov    0x4a50(%eax),%eax
085121ad +0x1f5:  mov    %eax,-0x14(%ebp)
085121b0 +0x1f8:  fildl  -0x1c(%ebp)
085121b3 +0x1fb:  mov    $0x64,%eax
085121b8 +0x200:  sub    -0x14(%ebp),%eax
085121bb +0x203:  mov    %eax,-0x3c(%ebp)
085121be +0x206:  fildl  -0x3c(%ebp)
085121c1 +0x209:  flds   ""
085121c7 +0x20f:  fdivrp %st,%st(1)
085121c9 +0x211:  fmulp  %st,%st(1)
085121cb +0x213:  fnstcw -0x3e(%ebp)
085121ce +0x216:  movzwl -0x3e(%ebp),%eax
085121d2 +0x21a:  mov    $0xc,%ah
085121d4 +0x21c:  mov    %ax,-0x40(%ebp)
085121d8 +0x220:  fldcw  -0x40(%ebp)
085121db +0x223:  fistpl -0x10(%ebp)
085121de +0x226:  fldcw  -0x3e(%ebp)
085121e1 +0x229:  fildl  -0x1c(%ebp)
085121e4 +0x22c:  fildl  -0x10(%ebp)
085121e7 +0x22f:  fildl  -0x18(%ebp)
085121ea +0x232:  flds   &data#6e18e07a(.rodata)
085121f0 +0x238:  fdivrp %st,%st(1)
085121f2 +0x23a:  fmulp  %st,%st(1)
085121f4 +0x23c:  faddp  %st,%st(1)
085121f6 +0x23e:  fldcw  -0x40(%ebp)
085121f9 +0x241:  fistpl -0xc(%ebp)
085121fc +0x244:  fldcw  -0x3e(%ebp)
085121ff +0x247:  cmpl   $0x0,-0xc(%ebp)
08512203 +0x24b:  jns    0851220e <+0x256>
08512205 +0x24d:  movl   $0x1,-0xc(%ebp)
0851220c +0x254:  jmp    0851221c <+0x264>
0851220e +0x256:  mov    -0xc(%ebp),%eax
08512211 +0x259:  cmp    -0x1c(%ebp),%eax
08512214 +0x25c:  jle    0851221c <+0x264>
08512216 +0x25e:  mov    -0x1c(%ebp),%eax
08512219 +0x261:  mov    %eax,-0xc(%ebp)
0851221c +0x264:  mov    -0xc(%ebp),%eax
0851221f +0x267:  mov    %eax,%edx
08512221 +0x269:  mov    0x10(%ebp),%eax
08512224 +0x26c:  mov    %dx,0xb(%eax)
08512228 +0x270:  add    $0x60,%esp
0851222b +0x273:  pop    %ebx
0851222c +0x274:  pop    %esi
0851222d +0x275:  pop    %ebp
0851222e +0x276:  ret
0851222f +0x277:  nop
```

## 反编译 C

```c
// CItemList::create_item @ 0x8511fb8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int) */

void __thiscall CItemList::create_item(CItemList *this,int param_2,Inven_Item *param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_34 [16];
  CItem *local_24;
  int local_20;
  int local_1c;
  int local_10;
  
  Inven_Item::set_add_info(param_3,param_4);
  local_24 = (CItem *)find_item(this,*(int *)(param_3 + 2));
  if (local_24 == (CItem *)0x0) {
    LogManager::logFormat
              (1,"item.cpp","void CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)",
               0x98f,"find_item(%d)",*(undefined4 *)(param_3 + 2));
    *(undefined4 *)(param_3 + 2) = 0xffffffff;
    Inven_Item::set_add_info(param_3,0);
    *(undefined2 *)(param_3 + 0xb) = 0;
    param_3[1] = (Inven_Item)0x0;
    Inven_Item::ResetItemAttr(param_3);
  }
  else {
    (**(code **)(*(int *)local_24 + 8))(local_24,param_3);
    cVar2 = CItem::is_stackable(local_24);
    if (cVar2 != '\0') {
      iVar3 = Inven_Item::get_add_info(param_3);
      if (iVar3 < 0) {
        Inven_Item::set_add_info(param_3,0);
      }
      iVar3 = Inven_Item::get_add_info(param_3);
      if (999 < iVar3) {
        uVar1 = *(undefined4 *)(param_3 + 2);
        uVar4 = Inven_Item::get_add_info(param_3);
        cMyTrace::cMyTrace(local_34,
                           "void CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)",
                           0x9a1,5);
        cMyTrace::operator()
                  (local_34,"CItemList::create_item, add_info >= STACK_LIMIT_ERROR , %d ITEM #%d",
                   uVar4,uVar1);
      }
    }
    stAmplifyOption_t::reset((stAmplifyOption_t *)(param_3 + 0x11));
    if (param_2 == 1) {
      cVar2 = CItemAmplifier::checkInvestableItem(GlobalData::s_itemAmplifier_,local_24,param_3,0);
      if (cVar2 != '\0') {
        CItemAmplifier::generateAmplifyItem(GlobalData::s_itemAmplifier_,local_24,param_3);
      }
      if (param_3[1] == (Inven_Item)0x1) {
        local_20 = CEquipItem::get_endurance((CEquipItem *)local_24);
        local_1c = get_rand_int(100);
        iVar3 = G_CDataManager();
        local_10 = (int)ROUND(((float)local_1c / _DAT_08c96d98) *
                              (float)(int)ROUND(((float)(100 - *(int *)(iVar3 + 0x4a50)) /
                                                _DAT_08c96d94) * (float)local_20) + (float)local_20)
        ;
        if (local_10 < 0) {
          local_10 = 1;
        }
        else if (local_20 < local_10) {
          local_10 = local_20;
        }
        *(short *)(param_3 + 0xb) = (short)local_10;
      }
    }
  }
  return;
}
```
