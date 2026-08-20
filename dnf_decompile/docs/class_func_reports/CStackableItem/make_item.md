# make_item

`_ZNK14CStackableItem9make_itemER10Inven_Item`

`CStackableItem::make_item(Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850f8b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850f8b8  _ZNK14CStackableItem9make_itemER10Inven_Item
#           CStackableItem::make_item(Inven_Item&) const
# range [0x0850f8b8, 0x0850fa13]
0850f8b8 +0x000:  push   %ebp
0850f8b9 +0x001:  mov    %esp,%ebp
0850f8bb +0x003:  push   %ebx
0850f8bc +0x004:  sub    $0x24,%esp
0850f8bf +0x007:  mov    0x8(%ebp),%eax
0850f8c2 +0x00a:  mov    0x2b0(%eax),%eax
0850f8c8 +0x010:  cmp    $0x14,%eax
0850f8cb +0x013:  ja     0850f903 <+0x4b>
0850f8cd +0x015:  mov    &data#9b41d75d(.rodata)(,%eax,4),%eax
0850f8d4 +0x01c:  jmp    *%eax
0850f8d6 +0x01e:  mov    0xc(%ebp),%eax
0850f8d9 +0x021:  movb   $0x4,0x1(%eax)
0850f8dd +0x025:  jmp    0850f90a <+0x52>
0850f8df +0x027:  mov    0xc(%ebp),%eax
0850f8e2 +0x02a:  movb   $0x3,0x1(%eax)
0850f8e6 +0x02e:  jmp    0850f90a <+0x52>
0850f8e8 +0x030:  mov    0xc(%ebp),%eax
0850f8eb +0x033:  movb   $0x7,0x1(%eax)
0850f8ef +0x037:  jmp    0850f90a <+0x52>
0850f8f1 +0x039:  mov    0xc(%ebp),%eax
0850f8f4 +0x03c:  movb   $0x9,0x1(%eax)
0850f8f8 +0x040:  jmp    0850f90a <+0x52>
0850f8fa +0x042:  mov    0xc(%ebp),%eax
0850f8fd +0x045:  movb   $0xa,0x1(%eax)
0850f901 +0x049:  jmp    0850f90a <+0x52>
0850f903 +0x04b:  mov    0xc(%ebp),%eax
0850f906 +0x04e:  movb   $0x2,0x1(%eax)
0850f90a +0x052:  mov    0xc(%ebp),%eax
0850f90d +0x055:  movw   $0x0,0xb(%eax)
0850f913 +0x05b:  movl   $0x0,-0xc(%ebp)
0850f91a +0x062:  mov    0x8(%ebp),%eax
0850f91d +0x065:  mov    %eax,(%esp)
0850f920 +0x068:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0850f925 +0x06d:  test   %eax,%eax
0850f927 +0x06f:  setne  %al
0850f92a +0x072:  test   %al,%al
0850f92c +0x074:  je     0850f955 <+0x9d>
0850f92e +0x076:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0850f935 +0x07d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0850f93a +0x082:  mov    %eax,%ebx
0850f93c +0x084:  mov    0x8(%ebp),%eax
0850f93f +0x087:  mov    %eax,(%esp)
0850f942 +0x08a:  call   08110c60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x172>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x172
0850f947 +0x08f:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0850f94d +0x095:  lea    (%ebx,%eax,1),%eax
0850f950 +0x098:  mov    %eax,-0xc(%ebp)
0850f953 +0x09b:  jmp    0850f977 <+0xbf>
0850f955 +0x09d:  mov    0x8(%ebp),%eax
0850f958 +0x0a0:  mov    %eax,(%esp)
0850f95b +0x0a3:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0850f960 +0x0a8:  test   %eax,%eax
0850f962 +0x0aa:  setne  %al
0850f965 +0x0ad:  test   %al,%al
0850f967 +0x0af:  je     0850f977 <+0xbf>
0850f969 +0x0b1:  mov    0x8(%ebp),%eax
0850f96c +0x0b4:  mov    %eax,(%esp)
0850f96f +0x0b7:  call   080f1306 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x388>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x388
0850f974 +0x0bc:  mov    %eax,-0xc(%ebp)
0850f977 +0x0bf:  cmpl   $0x0,-0xc(%ebp)
0850f97b +0x0c3:  je     0850f9ab <+0xf3>
0850f97d +0x0c5:  mov    -0xc(%ebp),%eax
0850f980 +0x0c8:  lea    -0x44a54a80(%eax),%ecx
0850f986 +0x0ce:  mov    $0xc22e4507,%edx
0850f98b +0x0d3:  mov    %ecx,%eax
0850f98d +0x0d5:  imul   %edx
0850f98f +0x0d7:  lea    (%edx,%ecx,1),%eax
0850f992 +0x0da:  mov    %eax,%edx
0850f994 +0x0dc:  sar    $0x10,%edx
0850f997 +0x0df:  mov    %ecx,%eax
0850f999 +0x0e1:  sar    $0x1f,%eax
0850f99c +0x0e4:  mov    %edx,%ecx
0850f99e +0x0e6:  sub    %eax,%ecx
0850f9a0 +0x0e8:  mov    %ecx,%eax
0850f9a2 +0x0ea:  mov    %eax,%edx
0850f9a4 +0x0ec:  mov    0xc(%ebp),%eax
0850f9a7 +0x0ef:  mov    %dx,0xb(%eax)
0850f9ab +0x0f3:  mov    0xc(%ebp),%eax
0850f9ae +0x0f6:  mov    %eax,(%esp)
0850f9b1 +0x0f9:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0850f9b6 +0x0fe:  mov    0xc(%ebp),%eax
0850f9b9 +0x101:  movl   $0x0,0xd(%eax)
0850f9c0 +0x108:  mov    0xc(%ebp),%eax
0850f9c3 +0x10b:  add    $0x15,%eax
0850f9c6 +0x10e:  mov    %eax,(%esp)
0850f9c9 +0x111:  call   085139e8 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x1d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x1d
0850f9ce +0x116:  mov    0xc(%ebp),%eax
0850f9d1 +0x119:  add    $0x11,%eax
0850f9d4 +0x11c:  mov    %eax,(%esp)
0850f9d7 +0x11f:  call   080cb75c <_GLOBAL__I__ZN10BingoEventC2Ev+0x5a9>  ; global constructors keyed to BingoEvent::BingoEvent()+0x5a9
0850f9dc +0x124:  mov    0x8(%ebp),%eax
0850f9df +0x127:  mov    %eax,(%esp)
0850f9e2 +0x12a:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
0850f9e7 +0x12f:  cmp    $0x7,%eax
0850f9ea +0x132:  sete   %al
0850f9ed +0x135:  test   %al,%al
0850f9ef +0x137:  je     0850fa0e <+0x156>
0850f9f1 +0x139:  mov    0x8(%ebp),%eax
0850f9f4 +0x13c:  mov    %eax,(%esp)
0850f9f7 +0x13f:  call   08514b38 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x116d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x116d
0850f9fc +0x144:  movzbl %al,%eax
0850f9ff +0x147:  mov    %eax,0x4(%esp)
0850fa03 +0x14b:  mov    0xc(%ebp),%eax
0850fa06 +0x14e:  mov    %eax,(%esp)
0850fa09 +0x151:  call   081203f6 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x1c>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x1c
0850fa0e +0x156:  add    $0x24,%esp
0850fa11 +0x159:  pop    %ebx
0850fa12 +0x15a:  pop    %ebp
0850fa13 +0x15b:  ret
```

## 反编译 C

```c
// CStackableItem::make_item @ 0x850f8b8

/* CStackableItem::make_item(Inven_Item&) const */

void __thiscall CStackableItem::make_item(CStackableItem *this,Inven_Item *param_1)

{
  uchar uVar1;
  int iVar2;
  int local_10;
  
  switch(*(undefined4 *)(this + 0x2b0)) {
  default:
    param_1[1] = (Inven_Item)0x2;
    break;
  case 1:
    param_1[1] = (Inven_Item)0x3;
    break;
  case 2:
    param_1[1] = (Inven_Item)0xa;
    break;
  case 8:
    param_1[1] = (Inven_Item)0x4;
    break;
  case 9:
  case 10:
    param_1[1] = (Inven_Item)0x7;
    break;
  case 0x14:
    param_1[1] = (Inven_Item)0x9;
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  local_10 = 0;
  iVar2 = CItem::getUsablePeriod((CItem *)this);
  if (iVar2 == 0) {
    iVar2 = CItem::getExpirationDate((CItem *)this);
    if (iVar2 != 0) {
      local_10 = CItem::getExpirationDate((CItem *)this);
    }
  }
  else {
    local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar2 = CItem::getUsablePeriod((CItem *)this);
    local_10 = local_10 + iVar2 * 0x15180;
  }
  if (local_10 != 0) {
    *(short *)(param_1 + 0xb) = (short)((local_10 + -0x44a54a80) / 0x15180);
  }
  Inven_Item::ResetItemAttr(param_1);
  *(undefined4 *)(param_1 + 0xd) = 0;
  itemGloballyUniqueIdentifier_t::reset((itemGloballyUniqueIdentifier_t *)(param_1 + 0x15));
  stAmplifyOption_t::reset((stAmplifyOption_t *)(param_1 + 0x11));
  iVar2 = CItem::GetAttachType((CItem *)this);
  if (iVar2 == 7) {
    uVar1 = getTradeLimitCount(this);
    Inven_Item::SetTradeLimitCount(param_1,uVar1);
  }
  return;
}
```
