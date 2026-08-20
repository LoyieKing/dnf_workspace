# autoUnsealItem

`_ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item`

`WongWork::CCeraShop::autoUnsealItem(CItem const*, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327f10  _ZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_Item
#           WongWork::CCeraShop::autoUnsealItem(CItem const*, Inven_Item&)
# range [0x08327f10, 0x08328061]
08327f10 +0x000:  push   %ebp
08327f11 +0x001:  mov    %esp,%ebp
08327f13 +0x003:  push   %edi
08327f14 +0x004:  push   %esi
08327f15 +0x005:  push   %ebx
08327f16 +0x006:  sub    $0x5c,%esp
08327f19 +0x009:  cmpl   $0x0,0xc(%ebp)
08327f1d +0x00d:  je     08328056 <+0x146>
08327f23 +0x013:  mov    0xc(%ebp),%eax
08327f26 +0x016:  mov    (%eax),%eax
08327f28 +0x018:  add    $0x4c,%eax
08327f2b +0x01b:  mov    (%eax),%edx
08327f2d +0x01d:  mov    0xc(%ebp),%eax
08327f30 +0x020:  mov    %eax,(%esp)
08327f33 +0x023:  call   *%edx
08327f35 +0x025:  xor    $0x1,%eax
08327f38 +0x028:  test   %al,%al
08327f3a +0x02a:  jne    08328059 <+0x149>
08327f40 +0x030:  mov    0x8(%ebp),%eax
08327f43 +0x033:  mov    %eax,(%esp)
08327f46 +0x036:  call   08327ef4 <_ZN8WongWork9CCeraShop15getOriginalItemEv>  ; WongWork::CCeraShop::getOriginalItem()
08327f4b +0x03b:  mov    %eax,-0x20(%ebp)
08327f4e +0x03e:  cmpl   $0x0,-0x20(%ebp)
08327f52 +0x042:  je     0832805a <+0x14a>
08327f58 +0x048:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08327f5d +0x04d:  mov    -0x20(%ebp),%edx
08327f60 +0x050:  mov    %edx,0x4(%esp)
08327f64 +0x054:  mov    %eax,(%esp)
08327f67 +0x057:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08327f6c +0x05c:  mov    %eax,-0x1c(%ebp)
08327f6f +0x05f:  cmpl   $0x0,-0x1c(%ebp)
08327f73 +0x063:  je     08327f92 <+0x82>
08327f75 +0x065:  mov    -0x1c(%ebp),%eax
08327f78 +0x068:  mov    (%eax),%eax
08327f7a +0x06a:  add    $0x54,%eax
08327f7d +0x06d:  mov    (%eax),%edx
08327f7f +0x06f:  mov    -0x1c(%ebp),%eax
08327f82 +0x072:  mov    %eax,(%esp)
08327f85 +0x075:  call   *%edx
08327f87 +0x077:  test   %al,%al
08327f89 +0x079:  je     08327f92 <+0x82>
08327f8b +0x07b:  mov    $0x1,%eax
08327f90 +0x080:  jmp    08327f97 <+0x87>
08327f92 +0x082:  mov    $0x0,%eax
08327f97 +0x087:  test   %al,%al
08327f99 +0x089:  je     0832805a <+0x14a>
08327f9f +0x08f:  mov    0x10(%ebp),%eax
08327fa2 +0x092:  add    $0x25,%eax
08327fa5 +0x095:  mov    %eax,-0x2c(%ebp)
08327fa8 +0x098:  mov    0xc(%ebp),%eax
08327fab +0x09b:  mov    (%eax),%eax
08327fad +0x09d:  add    $0x50,%eax
08327fb0 +0x0a0:  mov    (%eax),%edx
08327fb2 +0x0a2:  mov    0xc(%ebp),%eax
08327fb5 +0x0a5:  mov    %eax,(%esp)
08327fb8 +0x0a8:  call   *%edx
08327fba +0x0aa:  mov    %eax,%edi
08327fbc +0x0ac:  mov    0xc(%ebp),%eax
08327fbf +0x0af:  mov    %eax,(%esp)
08327fc2 +0x0b2:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
08327fc7 +0x0b7:  mov    %eax,%esi
08327fc9 +0x0b9:  mov    0xc(%ebp),%eax
08327fcc +0x0bc:  mov    %eax,(%esp)
08327fcf +0x0bf:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
08327fd4 +0x0c4:  mov    %eax,%ebx
08327fd6 +0x0c6:  mov    0xc(%ebp),%eax
08327fd9 +0x0c9:  mov    %eax,(%esp)
08327fdc +0x0cc:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08327fe1 +0x0d1:  mov    %eax,%edx
08327fe3 +0x0d3:  mov    0x10(%ebp),%eax
08327fe6 +0x0d6:  mov    0x2(%eax),%ecx
08327fe9 +0x0d9:  mov    &_ZN10GlobalData20g_randomOptionHandleE,%eax
08327fee +0x0de:  mov    %eax,-0x3c(%ebp)
08327ff1 +0x0e1:  mov    -0x2c(%ebp),%eax
08327ff4 +0x0e4:  mov    %eax,0x18(%esp)
08327ff8 +0x0e8:  mov    %edi,0x14(%esp)
08327ffc +0x0ec:  mov    %esi,0x10(%esp)
08328000 +0x0f0:  mov    %ebx,0xc(%esp)
08328004 +0x0f4:  mov    %edx,0x8(%esp)
08328008 +0x0f8:  mov    %ecx,0x4(%esp)
0832800c +0x0fc:  mov    -0x3c(%ebp),%eax
0832800f +0x0ff:  mov    %eax,(%esp)
08328012 +0x102:  call   085f2cc6 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption>  ; random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int, RandomOption*)
08328017 +0x107:  xor    $0x1,%eax
0832801a +0x10a:  test   %al,%al
0832801c +0x10c:  je     0832805a <+0x14a>
0832801e +0x10e:  mov    0x10(%ebp),%eax
08328021 +0x111:  mov    0x2(%eax),%eax
08328024 +0x114:  mov    %eax,0x14(%esp)
08328028 +0x118:  movl   $"autoUnsealItem : %d",0x10(%esp)
08328030 +0x120:  movl   $0x2131,0xc(%esp)
08328038 +0x128:  movl   $&_ZZN8WongWork9CCeraShop14autoUnsealItemEPK5CItemR10Inven_ItemE19__PRETTY_FUNCTION__,0x8(%esp)
08328040 +0x130:  movl   $"CeraShop.cpp",0x4(%esp)
08328048 +0x138:  movl   $0x1,(%esp)
0832804f +0x13f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08328054 +0x144:  jmp    0832805a <+0x14a>
08328056 +0x146:  nop
08328057 +0x147:  jmp    0832805a <+0x14a>
08328059 +0x149:  nop
0832805a +0x14a:  add    $0x5c,%esp
0832805d +0x14d:  pop    %ebx
0832805e +0x14e:  pop    %esi
0832805f +0x14f:  pop    %edi
08328060 +0x150:  pop    %ebp
08328061 +0x151:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::autoUnsealItem @ 0x8327f10

/* WongWork::CCeraShop::autoUnsealItem(CItem const*, Inven_Item&) */

void __thiscall
WongWork::CCeraShop::autoUnsealItem(CCeraShop *this,CItem *param_1,Inven_Item *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (((param_1 != (CItem *)0x0) &&
      (cVar2 = (**(code **)(*(int *)param_1 + 0x4c))(param_1), cVar2 == '\x01')) &&
     (iVar3 = getOriginalItem(this), iVar3 != 0)) {
    this_00 = (CDataManager *)G_CDataManager();
    piVar4 = (int *)CDataManager::find_item(this_00,iVar3);
    if ((piVar4 == (int *)0x0) || (cVar2 = (**(code **)(*piVar4 + 0x54))(piVar4), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = (**(code **)(*(int *)param_1 + 0x50))(param_1);
      uVar6 = CItem::getItemGroupName(param_1);
      uVar7 = CItem::getUsableLevel(param_1);
      uVar8 = CItem::get_rarity(param_1);
      cVar2 = random_option::CRandomOptionItemHandle::give_option
                        (GlobalData::g_randomOptionHandle,*(undefined4 *)(param_2 + 2),uVar8,uVar7,
                         uVar6,uVar5,param_2 + 0x25);
      if (cVar2 != '\x01') {
        LogManager::logFormat
                  (1,"CeraShop.cpp",
                   "void WongWork::CCeraShop::autoUnsealItem(const CItem*, Inven_Item&)",0x2131,
                   "autoUnsealItem : %d",*(undefined4 *)(param_2 + 2));
      }
    }
  }
  return;
}
```
