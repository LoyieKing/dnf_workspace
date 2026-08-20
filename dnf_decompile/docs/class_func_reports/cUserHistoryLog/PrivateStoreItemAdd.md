# PrivateStoreItemAdd

`_ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_`

`cUserHistoryLog::PrivateStoreItemAdd(INVEN_TYPE, Inven_Item const&, int, int, eItemAddReason, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868433e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868433e  _ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_
#           cUserHistoryLog::PrivateStoreItemAdd(INVEN_TYPE, Inven_Item const&, int, int, eItemAddReason, char const*, char const*)
# range [0x0868433e, 0x08684559]
0868433e +0x000:  push   %ebp
0868433f +0x001:  mov    %esp,%ebp
08684341 +0x003:  push   %edi
08684342 +0x004:  push   %esi
08684343 +0x005:  push   %ebx
08684344 +0x006:  sub    $0xec,%esp
0868434a +0x00c:  mov    0x10(%ebp),%eax
0868434d +0x00f:  lea    0x15(%eax),%ebx
08684350 +0x012:  lea    -0x2d(%ebp),%eax
08684353 +0x015:  mov    %eax,(%esp)
08684356 +0x018:  call   084ebe58 <_GLOBAL__I__Z7getUserj+0x2e0a>  ; global constructors keyed to getUser(unsigned int)+0x2e0a
0868435b +0x01d:  mov    %ebx,0x4(%esp)
0868435f +0x021:  lea    -0x2d(%ebp),%eax
08684362 +0x024:  mov    %eax,(%esp)
08684365 +0x027:  call   084ebe82 <_GLOBAL__I__Z7getUserj+0x2e34>  ; global constructors keyed to getUser(unsigned int)+0x2e34
0868436a +0x02c:  mov    %eax,-0x80(%ebp)
0868436d +0x02f:  mov    0x10(%ebp),%eax
08684370 +0x032:  mov    %eax,(%esp)
08684373 +0x035:  call   0822b456 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb00
08684378 +0x03a:  movzbl %al,%eax
0868437b +0x03d:  mov    %eax,-0x7c(%ebp)
0868437e +0x040:  mov    0x10(%ebp),%eax
08684381 +0x043:  movzbl (%eax),%eax
08684384 +0x046:  movzbl %al,%eax
08684387 +0x049:  mov    %eax,-0x78(%ebp)
0868438a +0x04c:  mov    0x10(%ebp),%eax
0868438d +0x04f:  movzbl 0x32(%eax),%eax
08684391 +0x053:  movzbl %al,%eax
08684394 +0x056:  mov    %eax,-0x74(%ebp)
08684397 +0x059:  mov    0x10(%ebp),%eax
0868439a +0x05c:  movzbl 0x31(%eax),%eax
0868439e +0x060:  movzbl %al,%eax
086843a1 +0x063:  mov    %eax,-0x70(%ebp)
086843a4 +0x066:  mov    0x10(%ebp),%eax
086843a7 +0x069:  movzbl 0x30(%eax),%eax
086843ab +0x06d:  movzbl %al,%eax
086843ae +0x070:  mov    %eax,-0x6c(%ebp)
086843b1 +0x073:  mov    0x10(%ebp),%eax
086843b4 +0x076:  movzbl 0x2f(%eax),%eax
086843b8 +0x07a:  movzbl %al,%eax
086843bb +0x07d:  mov    %eax,-0x68(%ebp)
086843be +0x080:  mov    0x10(%ebp),%eax
086843c1 +0x083:  movzbl 0x2e(%eax),%eax
086843c5 +0x087:  movzbl %al,%eax
086843c8 +0x08a:  mov    %eax,-0x64(%ebp)
086843cb +0x08d:  mov    0x10(%ebp),%eax
086843ce +0x090:  movzbl 0x2d(%eax),%eax
086843d2 +0x094:  movzbl %al,%eax
086843d5 +0x097:  mov    %eax,-0x60(%ebp)
086843d8 +0x09a:  mov    0x10(%ebp),%eax
086843db +0x09d:  movzbl 0x2c(%eax),%eax
086843df +0x0a1:  movzbl %al,%eax
086843e2 +0x0a4:  mov    %eax,-0x5c(%ebp)
086843e5 +0x0a7:  mov    0x10(%ebp),%eax
086843e8 +0x0aa:  movzbl 0x2b(%eax),%eax
086843ec +0x0ae:  movzbl %al,%eax
086843ef +0x0b1:  mov    %eax,-0x58(%ebp)
086843f2 +0x0b4:  mov    0x10(%ebp),%eax
086843f5 +0x0b7:  movzbl 0x2a(%eax),%eax
086843f9 +0x0bb:  movzbl %al,%eax
086843fc +0x0be:  mov    %eax,-0x54(%ebp)
086843ff +0x0c1:  mov    0x10(%ebp),%eax
08684402 +0x0c4:  movzbl 0x29(%eax),%eax
08684406 +0x0c8:  movzbl %al,%eax
08684409 +0x0cb:  mov    %eax,-0x50(%ebp)
0868440c +0x0ce:  mov    0x10(%ebp),%eax
0868440f +0x0d1:  movzbl 0x28(%eax),%eax
08684413 +0x0d5:  movzbl %al,%eax
08684416 +0x0d8:  mov    %eax,-0x4c(%ebp)
08684419 +0x0db:  mov    0x10(%ebp),%eax
0868441c +0x0de:  movzbl 0x27(%eax),%eax
08684420 +0x0e2:  movzbl %al,%eax
08684423 +0x0e5:  mov    %eax,-0x48(%ebp)
08684426 +0x0e8:  mov    0x10(%ebp),%eax
08684429 +0x0eb:  movzbl 0x26(%eax),%eax
0868442d +0x0ef:  movzbl %al,%eax
08684430 +0x0f2:  mov    %eax,-0x44(%ebp)
08684433 +0x0f5:  mov    0x10(%ebp),%eax
08684436 +0x0f8:  movzbl 0x25(%eax),%eax
0868443a +0x0fc:  movzbl %al,%eax
0868443d +0x0ff:  mov    %eax,-0x40(%ebp)
08684440 +0x102:  mov    0x10(%ebp),%eax
08684443 +0x105:  movzwl 0xb(%eax),%eax
08684447 +0x109:  movzwl %ax,%eax
0868444a +0x10c:  mov    %eax,-0x3c(%ebp)
0868444d +0x10f:  mov    0x10(%ebp),%eax
08684450 +0x112:  mov    %eax,(%esp)
08684453 +0x115:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08684458 +0x11a:  movzbl %al,%edi
0868445b +0x11d:  mov    0x1c(%ebp),%esi
0868445e +0x120:  mov    0x10(%ebp),%eax
08684461 +0x123:  mov    0x2(%eax),%ebx
08684464 +0x126:  mov    0xc(%ebp),%ecx
08684467 +0x129:  mov    0x8(%ebp),%eax
0868446a +0x12c:  mov    (%eax),%edx
0868446c +0x12e:  mov    -0x80(%ebp),%eax
0868446f +0x131:  mov    %eax,0x6c(%esp)
08684473 +0x135:  mov    -0x7c(%ebp),%eax
08684476 +0x138:  mov    %eax,0x68(%esp)
0868447a +0x13c:  mov    -0x78(%ebp),%eax
0868447d +0x13f:  mov    %eax,0x64(%esp)
08684481 +0x143:  mov    -0x74(%ebp),%eax
08684484 +0x146:  mov    %eax,0x60(%esp)
08684488 +0x14a:  mov    -0x70(%ebp),%eax
0868448b +0x14d:  mov    %eax,0x5c(%esp)
0868448f +0x151:  mov    -0x6c(%ebp),%eax
08684492 +0x154:  mov    %eax,0x58(%esp)
08684496 +0x158:  mov    -0x68(%ebp),%eax
08684499 +0x15b:  mov    %eax,0x54(%esp)
0868449d +0x15f:  mov    -0x64(%ebp),%eax
086844a0 +0x162:  mov    %eax,0x50(%esp)
086844a4 +0x166:  mov    -0x60(%ebp),%eax
086844a7 +0x169:  mov    %eax,0x4c(%esp)
086844ab +0x16d:  mov    -0x5c(%ebp),%eax
086844ae +0x170:  mov    %eax,0x48(%esp)
086844b2 +0x174:  mov    -0x58(%ebp),%eax
086844b5 +0x177:  mov    %eax,0x44(%esp)
086844b9 +0x17b:  mov    -0x54(%ebp),%eax
086844bc +0x17e:  mov    %eax,0x40(%esp)
086844c0 +0x182:  mov    -0x50(%ebp),%eax
086844c3 +0x185:  mov    %eax,0x3c(%esp)
086844c7 +0x189:  mov    -0x4c(%ebp),%eax
086844ca +0x18c:  mov    %eax,0x38(%esp)
086844ce +0x190:  mov    -0x48(%ebp),%eax
086844d1 +0x193:  mov    %eax,0x34(%esp)
086844d5 +0x197:  mov    -0x44(%ebp),%eax
086844d8 +0x19a:  mov    %eax,0x30(%esp)
086844dc +0x19e:  mov    -0x40(%ebp),%eax
086844df +0x1a1:  mov    %eax,0x2c(%esp)
086844e3 +0x1a5:  mov    -0x3c(%ebp),%eax
086844e6 +0x1a8:  mov    %eax,0x28(%esp)
086844ea +0x1ac:  mov    %edi,0x24(%esp)
086844ee +0x1b0:  mov    0x24(%ebp),%eax
086844f1 +0x1b3:  mov    %eax,0x20(%esp)
086844f5 +0x1b7:  mov    0x20(%ebp),%eax
086844f8 +0x1ba:  mov    %eax,0x1c(%esp)
086844fc +0x1be:  mov    %esi,0x18(%esp)
08684500 +0x1c2:  mov    0x18(%ebp),%eax
08684503 +0x1c5:  mov    %eax,0x14(%esp)
08684507 +0x1c9:  mov    0x14(%ebp),%eax
0868450a +0x1cc:  mov    %eax,0x10(%esp)
0868450e +0x1d0:  mov    %ebx,0xc(%esp)
08684512 +0x1d4:  mov    %ecx,0x8(%esp)
08684516 +0x1d8:  movl   $"Item+,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s",0x4(%esp)
0868451e +0x1e0:  mov    %edx,(%esp)
08684521 +0x1e3:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684526 +0x1e8:  jmp    08684543 <+0x205>
08684528 +0x1ea:  mov    %edx,%ebx
0868452a +0x1ec:  mov    %eax,%esi
0868452c +0x1ee:  lea    -0x2d(%ebp),%eax
0868452f +0x1f1:  mov    %eax,(%esp)
08684532 +0x1f4:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
08684537 +0x1f9:  mov    %esi,%eax
08684539 +0x1fb:  mov    %ebx,%edx
0868453b +0x1fd:  mov    %eax,(%esp)
0868453e +0x200:  call   08ae3750 <_Unwind_Resume>
08684543 +0x205:  lea    -0x2d(%ebp),%eax
08684546 +0x208:  mov    %eax,(%esp)
08684549 +0x20b:  call   084ebe7c <_GLOBAL__I__Z7getUserj+0x2e2e>  ; global constructors keyed to getUser(unsigned int)+0x2e2e
0868454e +0x210:  add    $0xec,%esp
08684554 +0x216:  pop    %ebx
08684555 +0x217:  pop    %esi
08684556 +0x218:  pop    %edi
08684557 +0x219:  pop    %ebp
08684558 +0x21a:  ret
08684559 +0x21b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::PrivateStoreItemAdd @ 0x868433e

/* cUserHistoryLog::PrivateStoreItemAdd(INVEN_TYPE, Inven_Item const&, int, int, eItemAddReason,
   char const*, char const*) */

void __thiscall
cUserHistoryLog::PrivateStoreItemAdd
          (cUserHistoryLog *this,undefined4 param_2,Inven_Item *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  Inven_Item IVar1;
  Inven_Item IVar2;
  Inven_Item IVar3;
  Inven_Item IVar4;
  Inven_Item IVar5;
  Inven_Item IVar6;
  Inven_Item IVar7;
  Inven_Item IVar8;
  Inven_Item IVar9;
  Inven_Item IVar10;
  Inven_Item IVar11;
  Inven_Item IVar12;
  Inven_Item IVar13;
  Inven_Item IVar14;
  Inven_Item IVar15;
  ushort uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  CItemGloballyUniqueIdentifierPrint local_31 [33];
  
  CItemGloballyUniqueIdentifierPrint::CItemGloballyUniqueIdentifierPrint(local_31);
                    /* try { // try from 08684365 to 08684525 has its CatchHandler @ 08684528 */
  uVar17 = CItemGloballyUniqueIdentifierPrint::operator()
                     (local_31,(itemGloballyUniqueIdentifier_t *)(param_3 + 0x15));
  uVar18 = Inven_Item::GetReSealCount(param_3);
  IVar1 = *param_3;
  IVar2 = param_3[0x32];
  IVar3 = param_3[0x31];
  IVar4 = param_3[0x30];
  IVar5 = param_3[0x2f];
  IVar6 = param_3[0x2e];
  IVar7 = param_3[0x2d];
  IVar8 = param_3[0x2c];
  IVar9 = param_3[0x2b];
  IVar10 = param_3[0x2a];
  IVar11 = param_3[0x29];
  IVar12 = param_3[0x28];
  IVar13 = param_3[0x27];
  IVar14 = param_3[0x26];
  IVar15 = param_3[0x25];
  uVar16 = *(ushort *)(param_3 + 0xb);
  uVar19 = Inven_Item::GetUpgrade(param_3);
  CUser::LogHistory(*(CUser **)this,
                    "Item+,%d,%d,%d,%d,%d,\"%s\",\"%s\",%d,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d,%d,%s"
                    ,param_2,*(undefined4 *)(param_3 + 2),param_4,param_5,param_6,param_7,param_8,
                    uVar19 & 0xff,(uint)uVar16,(uint)(byte)IVar15,(uint)(byte)IVar14,
                    (uint)(byte)IVar13,(uint)(byte)IVar12,(uint)(byte)IVar11,(uint)(byte)IVar10,
                    (uint)(byte)IVar9,(uint)(byte)IVar8,(uint)(byte)IVar7,(uint)(byte)IVar6,
                    (uint)(byte)IVar5,(uint)(byte)IVar4,(uint)(byte)IVar3,(uint)(byte)IVar2,
                    (uint)(byte)IVar1,uVar18 & 0xff,uVar17);
  CItemGloballyUniqueIdentifierPrint::~CItemGloballyUniqueIdentifierPrint(local_31);
  return;
}
```
