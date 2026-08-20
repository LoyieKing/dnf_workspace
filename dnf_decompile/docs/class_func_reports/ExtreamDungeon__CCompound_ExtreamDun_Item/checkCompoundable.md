# checkCompoundable

`_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc`

`ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable(Inven_Item*, CEquipItem const**, char) const`

| 类 | 地址 |
|---|---|
| `ExtreamDungeon::CCompound_ExtreamDun_Item` | `0x0832d7d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832d7d6  _ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc
#           ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable(Inven_Item*, CEquipItem const**, char) const
# range [0x0832d7d6, 0x0832daff]
0832d7d6 +0x000:  push   %ebp
0832d7d7 +0x001:  mov    %esp,%ebp
0832d7d9 +0x003:  push   %ebx
0832d7da +0x004:  sub    $0x34,%esp
0832d7dd +0x007:  mov    0x14(%ebp),%eax
0832d7e0 +0x00a:  mov    %al,-0x1c(%ebp)
0832d7e3 +0x00d:  movl   $0x0,-0xc(%ebp)
0832d7ea +0x014:  jmp    0832da04 <+0x22e>
0832d7ef +0x019:  mov    -0xc(%ebp),%eax
0832d7f2 +0x01c:  imul   $0x3d,%eax,%eax
0832d7f5 +0x01f:  add    0xc(%ebp),%eax
0832d7f8 +0x022:  mov    %eax,(%esp)
0832d7fb +0x025:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0832d800 +0x02a:  test   %al,%al
0832d802 +0x02c:  jne    0832d813 <+0x3d>
0832d804 +0x02e:  mov    -0xc(%ebp),%eax
0832d807 +0x031:  shl    $0x2,%eax
0832d80a +0x034:  add    0x10(%ebp),%eax
0832d80d +0x037:  mov    (%eax),%eax
0832d80f +0x039:  test   %eax,%eax
0832d811 +0x03b:  jne    0832d81a <+0x44>
0832d813 +0x03d:  mov    $0x1,%eax
0832d818 +0x042:  jmp    0832d81f <+0x49>
0832d81a +0x044:  mov    $0x0,%eax
0832d81f +0x049:  test   %al,%al
0832d821 +0x04b:  je     0832d82d <+0x57>
0832d823 +0x04d:  mov    $0x31,%eax
0832d828 +0x052:  jmp    0832daf9 <+0x323>
0832d82d +0x057:  mov    -0xc(%ebp),%ebx
0832d830 +0x05a:  mov    -0xc(%ebp),%eax
0832d833 +0x05d:  shl    $0x2,%eax
0832d836 +0x060:  add    0x10(%ebp),%eax
0832d839 +0x063:  mov    (%eax),%eax
0832d83b +0x065:  mov    %eax,(%esp)
0832d83e +0x068:  call   0832e036 <_GLOBAL__I__ZN14ExtreamDungeon19BindTable_PredicateERKNS_15OUTPUT_ITEM_STRES2_+0x94>  ; global constructors keyed to ExtreamDungeon::BindTable_Predicate(ExtreamDungeon::OUTPUT_ITEM_STR const&, ExtreamDungeon::OUTPUT_ITEM_STR const&)+0x94
0832d843 +0x06d:  mov    %eax,0x4(%esp)
0832d847 +0x071:  mov    0x8(%ebp),%eax
0832d84a +0x074:  mov    %eax,(%esp)
0832d84d +0x077:  call   0832c620 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17_convertInputItemE28ENUM_UNUSABLE_EQUIPMENT_TYPE>  ; ExtreamDungeon::CCompound_ExtreamDun_Item::_convertInputItem(ENUM_UNUSABLE_EQUIPMENT_TYPE) const
0832d852 +0x07c:  mov    %eax,-0x14(%ebp,%ebx,4)
0832d856 +0x080:  mov    -0xc(%ebp),%eax
0832d859 +0x083:  shl    $0x2,%eax
0832d85c +0x086:  add    0x10(%ebp),%eax
0832d85f +0x089:  mov    (%eax),%eax
0832d861 +0x08b:  mov    (%eax),%eax
0832d863 +0x08d:  add    $0x4c,%eax
0832d866 +0x090:  mov    (%eax),%edx
0832d868 +0x092:  mov    -0xc(%ebp),%eax
0832d86b +0x095:  shl    $0x2,%eax
0832d86e +0x098:  add    0x10(%ebp),%eax
0832d871 +0x09b:  mov    (%eax),%eax
0832d873 +0x09d:  mov    %eax,(%esp)
0832d876 +0x0a0:  call   *%edx
0832d878 +0x0a2:  test   %al,%al
0832d87a +0x0a4:  je     0832d886 <+0xb0>
0832d87c +0x0a6:  mov    $0x7,%eax
0832d881 +0x0ab:  jmp    0832daf9 <+0x323>
0832d886 +0x0b0:  mov    -0xc(%ebp),%eax
0832d889 +0x0b3:  mov    -0x14(%ebp,%eax,4),%eax
0832d88d +0x0b7:  cmp    $0x3,%eax
0832d890 +0x0ba:  jne    0832d89c <+0xc6>
0832d892 +0x0bc:  mov    $0x17,%eax
0832d897 +0x0c1:  jmp    0832daf9 <+0x323>
0832d89c +0x0c6:  mov    -0xc(%ebp),%eax
0832d89f +0x0c9:  mov    -0x14(%ebp,%eax,4),%eax
0832d8a3 +0x0cd:  cmp    $0x2,%eax
0832d8a6 +0x0d0:  jne    0832d8df <+0x109>
0832d8a8 +0x0d2:  mov    -0xc(%ebp),%eax
0832d8ab +0x0d5:  shl    $0x2,%eax
0832d8ae +0x0d8:  add    0x10(%ebp),%eax
0832d8b1 +0x0db:  mov    (%eax),%eax
0832d8b3 +0x0dd:  mov    %eax,(%esp)
0832d8b6 +0x0e0:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832d8bb +0x0e5:  cmp    $0x19,%eax
0832d8be +0x0e8:  jle    0832d8df <+0x109>
0832d8c0 +0x0ea:  mov    -0xc(%ebp),%eax
0832d8c3 +0x0ed:  shl    $0x2,%eax
0832d8c6 +0x0f0:  add    0x10(%ebp),%eax
0832d8c9 +0x0f3:  mov    (%eax),%eax
0832d8cb +0x0f5:  mov    %eax,(%esp)
0832d8ce +0x0f8:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832d8d3 +0x0fd:  cmp    $0x32,%eax
0832d8d6 +0x100:  jg     0832d8df <+0x109>
0832d8d8 +0x102:  mov    $0x1,%eax
0832d8dd +0x107:  jmp    0832d8e4 <+0x10e>
0832d8df +0x109:  mov    $0x0,%eax
0832d8e4 +0x10e:  test   %al,%al
0832d8e6 +0x110:  je     0832d8f2 <+0x11c>
0832d8e8 +0x112:  mov    $0x17,%eax
0832d8ed +0x117:  jmp    0832daf9 <+0x323>
0832d8f2 +0x11c:  mov    -0xc(%ebp),%eax
0832d8f5 +0x11f:  imul   $0x3d,%eax,%eax
0832d8f8 +0x122:  add    0xc(%ebp),%eax
0832d8fb +0x125:  add    $0x11,%eax
0832d8fe +0x128:  mov    %eax,(%esp)
0832d901 +0x12b:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
0832d906 +0x130:  xor    $0x1,%eax
0832d909 +0x133:  test   %al,%al
0832d90b +0x135:  je     0832d917 <+0x141>
0832d90d +0x137:  mov    $0x13,%eax
0832d912 +0x13c:  jmp    0832daf9 <+0x323>
0832d917 +0x141:  mov    -0xc(%ebp),%eax
0832d91a +0x144:  imul   $0x3d,%eax,%eax
0832d91d +0x147:  add    0xc(%ebp),%eax
0832d920 +0x14a:  movzbl (%eax),%eax
0832d923 +0x14d:  xor    $0x1,%eax
0832d926 +0x150:  test   %al,%al
0832d928 +0x152:  je     0832d934 <+0x15e>
0832d92a +0x154:  mov    $0x12,%eax
0832d92f +0x159:  jmp    0832daf9 <+0x323>
0832d934 +0x15e:  mov    -0xc(%ebp),%eax
0832d937 +0x161:  shl    $0x2,%eax
0832d93a +0x164:  add    0x10(%ebp),%eax
0832d93d +0x167:  mov    (%eax),%eax
0832d93f +0x169:  mov    %eax,(%esp)
0832d942 +0x16c:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832d947 +0x171:  test   %eax,%eax
0832d949 +0x173:  jle    0832d963 <+0x18d>
0832d94b +0x175:  mov    -0xc(%ebp),%eax
0832d94e +0x178:  shl    $0x2,%eax
0832d951 +0x17b:  add    0x10(%ebp),%eax
0832d954 +0x17e:  mov    (%eax),%eax
0832d956 +0x180:  mov    %eax,(%esp)
0832d959 +0x183:  call   080f1312 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x394>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x394
0832d95e +0x188:  cmp    $0x3a,%eax
0832d961 +0x18b:  jbe    0832d96a <+0x194>
0832d963 +0x18d:  mov    $0x1,%eax
0832d968 +0x192:  jmp    0832d96f <+0x199>
0832d96a +0x194:  mov    $0x0,%eax
0832d96f +0x199:  test   %al,%al
0832d971 +0x19b:  je     0832d97d <+0x1a7>
0832d973 +0x19d:  mov    $0x11,%eax
0832d978 +0x1a2:  jmp    0832daf9 <+0x323>
0832d97d +0x1a7:  mov    -0xc(%ebp),%eax
0832d980 +0x1aa:  shl    $0x2,%eax
0832d983 +0x1ad:  add    0x10(%ebp),%eax
0832d986 +0x1b0:  mov    (%eax),%eax
0832d988 +0x1b2:  mov    %eax,(%esp)
0832d98b +0x1b5:  call   080f12e2 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x364>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x364
0832d990 +0x1ba:  cmp    $0x1,%eax
0832d993 +0x1bd:  sete   %al
0832d996 +0x1c0:  test   %al,%al
0832d998 +0x1c2:  je     0832d9a4 <+0x1ce>
0832d99a +0x1c4:  mov    $0x1,%eax
0832d99f +0x1c9:  jmp    0832daf9 <+0x323>
0832d9a4 +0x1ce:  mov    -0xc(%ebp),%eax
0832d9a7 +0x1d1:  shl    $0x2,%eax
0832d9aa +0x1d4:  add    0x10(%ebp),%eax
0832d9ad +0x1d7:  mov    (%eax),%eax
0832d9af +0x1d9:  mov    (%eax),%eax
0832d9b1 +0x1db:  add    $0x48,%eax
0832d9b4 +0x1de:  mov    (%eax),%edx
0832d9b6 +0x1e0:  mov    -0xc(%ebp),%eax
0832d9b9 +0x1e3:  shl    $0x2,%eax
0832d9bc +0x1e6:  add    0x10(%ebp),%eax
0832d9bf +0x1e9:  mov    (%eax),%eax
0832d9c1 +0x1eb:  mov    %eax,(%esp)
0832d9c4 +0x1ee:  call   *%edx
0832d9c6 +0x1f0:  test   %eax,%eax
0832d9c8 +0x1f2:  setne  %al
0832d9cb +0x1f5:  test   %al,%al
0832d9cd +0x1f7:  je     0832d9d9 <+0x203>
0832d9cf +0x1f9:  mov    $0x1,%eax
0832d9d4 +0x1fe:  jmp    0832daf9 <+0x323>
0832d9d9 +0x203:  mov    -0xc(%ebp),%eax
0832d9dc +0x206:  imul   $0x3d,%eax,%eax
0832d9df +0x209:  add    0xc(%ebp),%eax
0832d9e2 +0x20c:  add    $0x33,%eax
0832d9e5 +0x20f:  mov    %eax,(%esp)
0832d9e8 +0x212:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
0832d9ed +0x217:  test   %al,%al
0832d9ef +0x219:  setne  %al
0832d9f2 +0x21c:  test   %al,%al
0832d9f4 +0x21e:  je     0832da00 <+0x22a>
0832d9f6 +0x220:  mov    $0x1,%eax
0832d9fb +0x225:  jmp    0832daf9 <+0x323>
0832da00 +0x22a:  addl   $0x1,-0xc(%ebp)
0832da04 +0x22e:  cmpl   $0x1,-0xc(%ebp)
0832da08 +0x232:  setle  %al
0832da0b +0x235:  test   %al,%al
0832da0d +0x237:  jne    0832d7ef <+0x19>
0832da13 +0x23d:  mov    -0x14(%ebp),%edx
0832da16 +0x240:  mov    -0x10(%ebp),%eax
0832da19 +0x243:  cmp    %eax,%edx
0832da1b +0x245:  je     0832da27 <+0x251>
0832da1d +0x247:  mov    $0x16,%eax
0832da22 +0x24c:  jmp    0832daf9 <+0x323>
0832da27 +0x251:  cmpb   $0x0,-0x1c(%ebp)
0832da2b +0x255:  jne    0832da3e <+0x268>
0832da2d +0x257:  mov    -0x14(%ebp),%eax
0832da30 +0x25a:  test   %eax,%eax
0832da32 +0x25c:  je     0832da72 <+0x29c>
0832da34 +0x25e:  mov    $0x11,%eax
0832da39 +0x263:  jmp    0832daf9 <+0x323>
0832da3e +0x268:  cmpb   $0x1,-0x1c(%ebp)
0832da42 +0x26c:  je     0832da4a <+0x274>
0832da44 +0x26e:  cmpb   $0x3,-0x1c(%ebp)
0832da48 +0x272:  jne    0832da64 <+0x28e>
0832da4a +0x274:  mov    -0x14(%ebp),%eax
0832da4d +0x277:  cmp    $0x1,%eax
0832da50 +0x27a:  je     0832da6e <+0x298>
0832da52 +0x27c:  mov    -0x14(%ebp),%eax
0832da55 +0x27f:  cmp    $0x2,%eax
0832da58 +0x282:  je     0832da71 <+0x29b>
0832da5a +0x284:  mov    $0x11,%eax
0832da5f +0x289:  jmp    0832daf9 <+0x323>
0832da64 +0x28e:  mov    $0x11,%eax
0832da69 +0x293:  jmp    0832daf9 <+0x323>
0832da6e +0x298:  nop
0832da6f +0x299:  jmp    0832da72 <+0x29c>
0832da71 +0x29b:  nop
0832da72 +0x29c:  cmpb   $0x3,-0x1c(%ebp)
0832da76 +0x2a0:  jne    0832dab6 <+0x2e0>
0832da78 +0x2a2:  mov    0x10(%ebp),%eax
0832da7b +0x2a5:  mov    (%eax),%eax
0832da7d +0x2a7:  mov    %eax,(%esp)
0832da80 +0x2aa:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832da85 +0x2af:  cmp    $0x3c,%eax
0832da88 +0x2b2:  jg     0832da9f <+0x2c9>
0832da8a +0x2b4:  mov    0x10(%ebp),%eax
0832da8d +0x2b7:  add    $0x4,%eax
0832da90 +0x2ba:  mov    (%eax),%eax
0832da92 +0x2bc:  mov    %eax,(%esp)
0832da95 +0x2bf:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832da9a +0x2c4:  cmp    $0x3c,%eax
0832da9d +0x2c7:  jle    0832daa6 <+0x2d0>
0832da9f +0x2c9:  mov    $0x1,%eax
0832daa4 +0x2ce:  jmp    0832daab <+0x2d5>
0832daa6 +0x2d0:  mov    $0x0,%eax
0832daab +0x2d5:  test   %al,%al
0832daad +0x2d7:  je     0832daf4 <+0x31e>
0832daaf +0x2d9:  mov    $0x11,%eax
0832dab4 +0x2de:  jmp    0832daf9 <+0x323>
0832dab6 +0x2e0:  mov    0x10(%ebp),%eax
0832dab9 +0x2e3:  mov    (%eax),%eax
0832dabb +0x2e5:  mov    %eax,(%esp)
0832dabe +0x2e8:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832dac3 +0x2ed:  cmp    $0x45,%eax
0832dac6 +0x2f0:  jle    0832dae4 <+0x30e>
0832dac8 +0x2f2:  mov    0x10(%ebp),%eax
0832dacb +0x2f5:  add    $0x4,%eax
0832dace +0x2f8:  mov    (%eax),%eax
0832dad0 +0x2fa:  mov    %eax,(%esp)
0832dad3 +0x2fd:  call   080f12ee <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x370>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x370
0832dad8 +0x302:  cmp    $0x45,%eax
0832dadb +0x305:  jle    0832dae4 <+0x30e>
0832dadd +0x307:  mov    $0x1,%eax
0832dae2 +0x30c:  jmp    0832dae9 <+0x313>
0832dae4 +0x30e:  mov    $0x0,%eax
0832dae9 +0x313:  test   %al,%al
0832daeb +0x315:  je     0832daf4 <+0x31e>
0832daed +0x317:  mov    $0x11,%eax
0832daf2 +0x31c:  jmp    0832daf9 <+0x323>
0832daf4 +0x31e:  mov    $0x0,%eax
0832daf9 +0x323:  add    $0x34,%esp
0832dafc +0x326:  pop    %ebx
0832dafd +0x327:  pop    %ebp
0832dafe +0x328:  ret
0832daff +0x329:  nop
```

## 反编译 C

```c
// ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable @ 0x832d7d6

/* ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable(Inven_Item*, CEquipItem const**,
   char) const */

undefined4 __thiscall
ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable
          (CCompound_ExtreamDun_Item *this,Inven_Item *param_1,CEquipItem **param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int local_18 [4];
  
  local_18[2] = 0;
  while( true ) {
    if (1 < local_18[2]) {
      if (local_18[0] != local_18[1]) {
        return 0x16;
      }
      if (param_3 == '\0') {
        if (local_18[0] != 0) {
          return 0x11;
        }
      }
      else {
        if ((param_3 != '\x01') && (param_3 != '\x03')) {
          return 0x11;
        }
        if ((local_18[0] != 1) && (local_18[0] != 2)) {
          return 0x11;
        }
      }
      if (param_3 == '\x03') {
        iVar6 = CItem::getUsableLevel((CItem *)*param_2);
        if ((iVar6 < 0x3d) && (iVar6 = CItem::getUsableLevel((CItem *)param_2[1]), iVar6 < 0x3d)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return 0x11;
        }
      }
      else {
        iVar6 = CItem::getUsableLevel((CItem *)*param_2);
        if ((iVar6 < 0x46) || (iVar6 = CItem::getUsableLevel((CItem *)param_2[1]), iVar6 < 0x46)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return 0x11;
        }
      }
      return 0;
    }
    cVar2 = Inven_Item::isEmpty(param_1 + local_18[2] * 0x3d);
    iVar6 = local_18[2];
    if ((cVar2 == '\0') && (param_2[local_18[2]] != (CEquipItem *)0x0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x31;
    }
    uVar3 = CEquipItem::GetUsableEquipmentType(param_2[local_18[2]]);
    iVar4 = _convertInputItem(this,uVar3);
    local_18[iVar6] = iVar4;
    cVar2 = (**(code **)(*(int *)param_2[local_18[2]] + 0x4c))(param_2[local_18[2]]);
    if (cVar2 != '\0') {
      return 7;
    }
    if (local_18[local_18[2]] == 3) {
      return 0x17;
    }
    if (((local_18[local_18[2]] == 2) &&
        (iVar6 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]), 0x19 < iVar6)) &&
       (iVar6 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]), iVar6 < 0x33)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0x17;
    }
    cVar2 = stAmplifyOption_t::isIdentified
                      ((stAmplifyOption_t *)(param_1 + local_18[2] * 0x3d + 0x11));
    if (cVar2 != '\x01') {
      return 0x13;
    }
    if (param_1[local_18[2] * 0x3d] != (Inven_Item)0x1) {
      return 0x12;
    }
    iVar6 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]);
    if ((iVar6 < 1) ||
       (uVar5 = CItem::getItemGroupName((CItem *)param_2[local_18[2]]), 0x3a < uVar5)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0x11;
    }
    iVar6 = CItem::GetAttachType((CItem *)param_2[local_18[2]]);
    if (iVar6 == 1) {
      return 1;
    }
    iVar6 = (**(code **)(*(int *)param_2[local_18[2]] + 0x48))(param_2[local_18[2]]);
    if (iVar6 != 0) break;
    cVar2 = UpgradeSeparateInfo::IsTradeRestriction
                      ((UpgradeSeparateInfo *)(param_1 + local_18[2] * 0x3d + 0x33));
    if (cVar2 != '\0') {
      return 1;
    }
    local_18[2] = local_18[2] + 1;
  }
  return 1;
}
```
