# insertCreatureIntoSpecificSlot

`_ZN10CInventory30insertCreatureIntoSpecificSlotE10Inven_Itemi14eItemAddReasonb`

`CInventory::insertCreatureIntoSpecificSlot(Inven_Item, int, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850ab10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850ab10  _ZN10CInventory30insertCreatureIntoSpecificSlotE10Inven_Itemi14eItemAddReasonb
#           CInventory::insertCreatureIntoSpecificSlot(Inven_Item, int, eItemAddReason, bool)
# range [0x0850ab10, 0x0850ae79]
0850ab10 +0x000:  push   %ebp
0850ab11 +0x001:  mov    %esp,%ebp
0850ab13 +0x003:  push   %edi
0850ab14 +0x004:  push   %esi
0850ab15 +0x005:  push   %ebx
0850ab16 +0x006:  sub    $0x4c,%esp
0850ab19 +0x009:  mov    0x54(%ebp),%eax
0850ab1c +0x00c:  mov    %al,-0x2c(%ebp)
0850ab1f +0x00f:  cmpl   $0xf1,0x4c(%ebp)
0850ab26 +0x016:  jle    0850ab32 <+0x22>
0850ab28 +0x018:  mov    $0xffffffff,%eax
0850ab2d +0x01d:  jmp    0850ae72 <+0x362>
0850ab32 +0x022:  mov    0xe(%ebp),%eax
0850ab35 +0x025:  test   %eax,%eax
0850ab37 +0x027:  jne    0850ab43 <+0x33>
0850ab39 +0x029:  mov    $0xffffffff,%eax
0850ab3e +0x02e:  jmp    0850ae72 <+0x362>
0850ab43 +0x033:  movl   $0xffffffff,-0x20(%ebp)
0850ab4a +0x03a:  mov    0x8(%ebp),%eax
0850ab4d +0x03d:  mov    0x6e4(%eax),%edx
0850ab53 +0x043:  mov    0x4c(%ebp),%eax
0850ab56 +0x046:  imul   $0x3d,%eax,%eax
0850ab59 +0x049:  lea    (%edx,%eax,1),%eax
0850ab5c +0x04c:  mov    0x2(%eax),%eax
0850ab5f +0x04f:  test   %eax,%eax
0850ab61 +0x051:  jne    0850abe0 <+0xd0>
0850ab63 +0x053:  mov    0x8(%ebp),%eax
0850ab66 +0x056:  mov    0x6e4(%eax),%edx
0850ab6c +0x05c:  mov    0x4c(%ebp),%eax
0850ab6f +0x05f:  imul   $0x3d,%eax,%eax
0850ab72 +0x062:  lea    (%edx,%eax,1),%eax
0850ab75 +0x065:  mov    0xc(%ebp),%edx
0850ab78 +0x068:  mov    %edx,(%eax)
0850ab7a +0x06a:  mov    0x10(%ebp),%edx
0850ab7d +0x06d:  mov    %edx,0x4(%eax)
0850ab80 +0x070:  mov    0x14(%ebp),%edx
0850ab83 +0x073:  mov    %edx,0x8(%eax)
0850ab86 +0x076:  mov    0x18(%ebp),%edx
0850ab89 +0x079:  mov    %edx,0xc(%eax)
0850ab8c +0x07c:  mov    0x1c(%ebp),%edx
0850ab8f +0x07f:  mov    %edx,0x10(%eax)
0850ab92 +0x082:  mov    0x20(%ebp),%edx
0850ab95 +0x085:  mov    %edx,0x14(%eax)
0850ab98 +0x088:  mov    0x24(%ebp),%edx
0850ab9b +0x08b:  mov    %edx,0x18(%eax)
0850ab9e +0x08e:  mov    0x28(%ebp),%edx
0850aba1 +0x091:  mov    %edx,0x1c(%eax)
0850aba4 +0x094:  mov    0x2c(%ebp),%edx
0850aba7 +0x097:  mov    %edx,0x20(%eax)
0850abaa +0x09a:  mov    0x30(%ebp),%edx
0850abad +0x09d:  mov    %edx,0x24(%eax)
0850abb0 +0x0a0:  mov    0x34(%ebp),%edx
0850abb3 +0x0a3:  mov    %edx,0x28(%eax)
0850abb6 +0x0a6:  mov    0x38(%ebp),%edx
0850abb9 +0x0a9:  mov    %edx,0x2c(%eax)
0850abbc +0x0ac:  mov    0x3c(%ebp),%edx
0850abbf +0x0af:  mov    %edx,0x30(%eax)
0850abc2 +0x0b2:  mov    0x40(%ebp),%edx
0850abc5 +0x0b5:  mov    %edx,0x34(%eax)
0850abc8 +0x0b8:  mov    0x44(%ebp),%edx
0850abcb +0x0bb:  mov    %edx,0x38(%eax)
0850abce +0x0be:  movzbl 0x48(%ebp),%edx
0850abd2 +0x0c2:  mov    %dl,0x3c(%eax)
0850abd5 +0x0c5:  mov    0x4c(%ebp),%eax
0850abd8 +0x0c8:  mov    %eax,-0x20(%ebp)
0850abdb +0x0cb:  jmp    0850adf8 <+0x2e8>
0850abe0 +0x0d0:  mov    0x8(%ebp),%eax
0850abe3 +0x0d3:  mov    0x6e4(%eax),%edx
0850abe9 +0x0d9:  mov    0x4c(%ebp),%eax
0850abec +0x0dc:  imul   $0x3d,%eax,%eax
0850abef +0x0df:  lea    (%edx,%eax,1),%eax
0850abf2 +0x0e2:  mov    %eax,(%esp)
0850abf5 +0x0e5:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850abfa +0x0ea:  xor    $0x1,%eax
0850abfd +0x0ed:  test   %al,%al
0850abff +0x0ef:  je     0850adf8 <+0x2e8>
0850ac05 +0x0f5:  mov    0x8(%ebp),%eax
0850ac08 +0x0f8:  mov    0x6e4(%eax),%edx
0850ac0e +0x0fe:  mov    0x4c(%ebp),%eax
0850ac11 +0x101:  imul   $0x3d,%eax,%eax
0850ac14 +0x104:  lea    (%edx,%eax,1),%eax
0850ac17 +0x107:  mov    0x2(%eax),%edx
0850ac1a +0x10a:  mov    0xe(%ebp),%eax
0850ac1d +0x10d:  cmp    %eax,%edx
0850ac1f +0x10f:  jne    0850acd4 <+0x1c4>
0850ac25 +0x115:  mov    0x8(%ebp),%eax
0850ac28 +0x118:  mov    0x6e4(%eax),%edx
0850ac2e +0x11e:  mov    0x4c(%ebp),%eax
0850ac31 +0x121:  imul   $0x3d,%eax,%eax
0850ac34 +0x124:  lea    (%edx,%eax,1),%eax
0850ac37 +0x127:  mov    %eax,(%esp)
0850ac3a +0x12a:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850ac3f +0x12f:  mov    %eax,%ebx
0850ac41 +0x131:  lea    0xc(%ebp),%eax
0850ac44 +0x134:  mov    %eax,(%esp)
0850ac47 +0x137:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850ac4c +0x13c:  lea    (%ebx,%eax,1),%edx
0850ac4f +0x13f:  mov    0x8(%ebp),%eax
0850ac52 +0x142:  mov    0x6e4(%eax),%ecx
0850ac58 +0x148:  mov    0x4c(%ebp),%eax
0850ac5b +0x14b:  imul   $0x3d,%eax,%eax
0850ac5e +0x14e:  lea    (%ecx,%eax,1),%eax
0850ac61 +0x151:  mov    0x2(%eax),%eax
0850ac64 +0x154:  mov    %edx,0x4(%esp)
0850ac68 +0x158:  mov    %eax,(%esp)
0850ac6b +0x15b:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
0850ac70 +0x160:  xor    $0x1,%eax
0850ac73 +0x163:  test   %al,%al
0850ac75 +0x165:  je     0850ac81 <+0x171>
0850ac77 +0x167:  mov    $0xfffffff6,%eax
0850ac7c +0x16c:  jmp    0850ae72 <+0x362>
0850ac81 +0x171:  mov    0x8(%ebp),%eax
0850ac84 +0x174:  mov    0x6e4(%eax),%edx
0850ac8a +0x17a:  mov    0x4c(%ebp),%eax
0850ac8d +0x17d:  imul   $0x3d,%eax,%eax
0850ac90 +0x180:  lea    (%edx,%eax,1),%eax
0850ac93 +0x183:  mov    %eax,(%esp)
0850ac96 +0x186:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850ac9b +0x18b:  mov    %eax,%ebx
0850ac9d +0x18d:  lea    0xc(%ebp),%eax
0850aca0 +0x190:  mov    %eax,(%esp)
0850aca3 +0x193:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850aca8 +0x198:  lea    (%ebx,%eax,1),%edx
0850acab +0x19b:  mov    0x8(%ebp),%eax
0850acae +0x19e:  mov    0x6e4(%eax),%ecx
0850acb4 +0x1a4:  mov    0x4c(%ebp),%eax
0850acb7 +0x1a7:  imul   $0x3d,%eax,%eax
0850acba +0x1aa:  lea    (%ecx,%eax,1),%eax
0850acbd +0x1ad:  mov    %edx,0x4(%esp)
0850acc1 +0x1b1:  mov    %eax,(%esp)
0850acc4 +0x1b4:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0850acc9 +0x1b9:  mov    0x4c(%ebp),%eax
0850accc +0x1bc:  mov    %eax,-0x20(%ebp)
0850accf +0x1bf:  jmp    0850adf8 <+0x2e8>
0850acd4 +0x1c4:  movl   $0x0,-0x1c(%ebp)
0850acdb +0x1cb:  jmp    0850ade6 <+0x2d6>
0850ace0 +0x1d0:  mov    0x8(%ebp),%eax
0850ace3 +0x1d3:  mov    0x6e4(%eax),%edx
0850ace9 +0x1d9:  mov    -0x1c(%ebp),%eax
0850acec +0x1dc:  imul   $0x3d,%eax,%eax
0850acef +0x1df:  lea    (%edx,%eax,1),%eax
0850acf2 +0x1e2:  mov    0x2(%eax),%eax
0850acf5 +0x1e5:  test   %eax,%eax
0850acf7 +0x1e7:  jne    0850ad76 <+0x266>
0850acf9 +0x1e9:  mov    0x8(%ebp),%eax
0850acfc +0x1ec:  mov    0x6e4(%eax),%edx
0850ad02 +0x1f2:  mov    -0x1c(%ebp),%eax
0850ad05 +0x1f5:  imul   $0x3d,%eax,%eax
0850ad08 +0x1f8:  lea    (%edx,%eax,1),%eax
0850ad0b +0x1fb:  mov    0xc(%ebp),%edx
0850ad0e +0x1fe:  mov    %edx,(%eax)
0850ad10 +0x200:  mov    0x10(%ebp),%edx
0850ad13 +0x203:  mov    %edx,0x4(%eax)
0850ad16 +0x206:  mov    0x14(%ebp),%edx
0850ad19 +0x209:  mov    %edx,0x8(%eax)
0850ad1c +0x20c:  mov    0x18(%ebp),%edx
0850ad1f +0x20f:  mov    %edx,0xc(%eax)
0850ad22 +0x212:  mov    0x1c(%ebp),%edx
0850ad25 +0x215:  mov    %edx,0x10(%eax)
0850ad28 +0x218:  mov    0x20(%ebp),%edx
0850ad2b +0x21b:  mov    %edx,0x14(%eax)
0850ad2e +0x21e:  mov    0x24(%ebp),%edx
0850ad31 +0x221:  mov    %edx,0x18(%eax)
0850ad34 +0x224:  mov    0x28(%ebp),%edx
0850ad37 +0x227:  mov    %edx,0x1c(%eax)
0850ad3a +0x22a:  mov    0x2c(%ebp),%edx
0850ad3d +0x22d:  mov    %edx,0x20(%eax)
0850ad40 +0x230:  mov    0x30(%ebp),%edx
0850ad43 +0x233:  mov    %edx,0x24(%eax)
0850ad46 +0x236:  mov    0x34(%ebp),%edx
0850ad49 +0x239:  mov    %edx,0x28(%eax)
0850ad4c +0x23c:  mov    0x38(%ebp),%edx
0850ad4f +0x23f:  mov    %edx,0x2c(%eax)
0850ad52 +0x242:  mov    0x3c(%ebp),%edx
0850ad55 +0x245:  mov    %edx,0x30(%eax)
0850ad58 +0x248:  mov    0x40(%ebp),%edx
0850ad5b +0x24b:  mov    %edx,0x34(%eax)
0850ad5e +0x24e:  mov    0x44(%ebp),%edx
0850ad61 +0x251:  mov    %edx,0x38(%eax)
0850ad64 +0x254:  movzbl 0x48(%ebp),%edx
0850ad68 +0x258:  mov    %dl,0x3c(%eax)
0850ad6b +0x25b:  mov    -0x1c(%ebp),%eax
0850ad6e +0x25e:  mov    %eax,-0x20(%ebp)
0850ad71 +0x261:  jmp    0850adf8 <+0x2e8>
0850ad76 +0x266:  mov    0x8(%ebp),%eax
0850ad79 +0x269:  mov    0x6e4(%eax),%edx
0850ad7f +0x26f:  mov    -0x1c(%ebp),%eax
0850ad82 +0x272:  imul   $0x3d,%eax,%eax
0850ad85 +0x275:  lea    (%edx,%eax,1),%eax
0850ad88 +0x278:  mov    0x2(%eax),%edx
0850ad8b +0x27b:  mov    0xe(%ebp),%eax
0850ad8e +0x27e:  cmp    %eax,%edx
0850ad90 +0x280:  jne    0850ade2 <+0x2d2>
0850ad92 +0x282:  mov    0x8(%ebp),%eax
0850ad95 +0x285:  mov    0x6e4(%eax),%edx
0850ad9b +0x28b:  mov    -0x1c(%ebp),%eax
0850ad9e +0x28e:  imul   $0x3d,%eax,%eax
0850ada1 +0x291:  lea    (%edx,%eax,1),%eax
0850ada4 +0x294:  mov    %eax,(%esp)
0850ada7 +0x297:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850adac +0x29c:  mov    %eax,%ebx
0850adae +0x29e:  lea    0xc(%ebp),%eax
0850adb1 +0x2a1:  mov    %eax,(%esp)
0850adb4 +0x2a4:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850adb9 +0x2a9:  lea    (%ebx,%eax,1),%edx
0850adbc +0x2ac:  mov    0x8(%ebp),%eax
0850adbf +0x2af:  mov    0x6e4(%eax),%ecx
0850adc5 +0x2b5:  mov    -0x1c(%ebp),%eax
0850adc8 +0x2b8:  imul   $0x3d,%eax,%eax
0850adcb +0x2bb:  lea    (%ecx,%eax,1),%eax
0850adce +0x2be:  mov    %edx,0x4(%esp)
0850add2 +0x2c2:  mov    %eax,(%esp)
0850add5 +0x2c5:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0850adda +0x2ca:  mov    -0x1c(%ebp),%eax
0850addd +0x2cd:  mov    %eax,-0x20(%ebp)
0850ade0 +0x2d0:  jmp    0850adf8 <+0x2e8>
0850ade2 +0x2d2:  addl   $0x1,-0x1c(%ebp)
0850ade6 +0x2d6:  cmpl   $0xf1,-0x1c(%ebp)
0850aded +0x2dd:  setle  %al
0850adf0 +0x2e0:  test   %al,%al
0850adf2 +0x2e2:  jne    0850ace0 <+0x1d0>
0850adf8 +0x2e8:  cmpl   $0x0,-0x20(%ebp)
0850adfc +0x2ec:  js     0850ae6f <+0x35f>
0850adfe +0x2ee:  movzbl 0xd(%ebp),%eax
0850ae02 +0x2f2:  cmp    $0x5,%al
0850ae04 +0x2f4:  je     0850ae6f <+0x35f>
0850ae06 +0x2f6:  cmpb   $0x0,-0x2c(%ebp)
0850ae0a +0x2fa:  je     0850ae6f <+0x35f>
0850ae0c +0x2fc:  movzbl 0xd(%ebp),%eax
0850ae10 +0x300:  movzbl %al,%esi
0850ae13 +0x303:  lea    0xc(%ebp),%eax
0850ae16 +0x306:  mov    %eax,(%esp)
0850ae19 +0x309:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850ae1e +0x30e:  mov    %eax,%ebx
0850ae20 +0x310:  mov    0x8(%ebp),%eax
0850ae23 +0x313:  mov    0x6e4(%eax),%edx
0850ae29 +0x319:  mov    -0x20(%ebp),%eax
0850ae2c +0x31c:  imul   $0x3d,%eax,%eax
0850ae2f +0x31f:  lea    (%edx,%eax,1),%eax
0850ae32 +0x322:  mov    %eax,(%esp)
0850ae35 +0x325:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0850ae3a +0x32a:  mov    0xe(%ebp),%edx
0850ae3d +0x32d:  mov    0x8(%ebp),%ecx
0850ae40 +0x330:  mov    (%ecx),%ecx
0850ae42 +0x332:  lea    0x79700(%ecx),%edi
0850ae48 +0x338:  mov    0x50(%ebp),%ecx
0850ae4b +0x33b:  mov    %ecx,0x18(%esp)
0850ae4f +0x33f:  mov    %esi,0x14(%esp)
0850ae53 +0x343:  mov    %ebx,0x10(%esp)
0850ae57 +0x347:  mov    %eax,0xc(%esp)
0850ae5b +0x34b:  mov    %edx,0x8(%esp)
0850ae5f +0x34f:  movl   $0x3,0x4(%esp)
0850ae67 +0x357:  mov    %edi,(%esp)
0850ae6a +0x35a:  call   08684e3c <_ZN15cUserHistoryLog15CreatureItemAddE10INVEN_TYPEiiii14eItemAddReason>  ; cUserHistoryLog::CreatureItemAdd(INVEN_TYPE, int, int, int, int, eItemAddReason)
0850ae6f +0x35f:  mov    -0x20(%ebp),%eax
0850ae72 +0x362:  add    $0x4c,%esp
0850ae75 +0x365:  pop    %ebx
0850ae76 +0x366:  pop    %esi
0850ae77 +0x367:  pop    %edi
0850ae78 +0x368:  pop    %ebp
0850ae79 +0x369:  ret
```

## 反编译 C

```c
// CInventory::insertCreatureIntoSpecificSlot @ 0x850ab10

/* CInventory::insertCreatureIntoSpecificSlot(Inven_Item, int, eItemAddReason, bool) */

int CInventory::insertCreatureIntoSpecificSlot
              (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined1 param_17,int param_18,undefined4 param_19,undefined4 param_20)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_24;
  int local_20;
  
  cVar2 = (char)param_20;
  if (param_18 < 0xf2) {
    if (CONCAT22((undefined2)param_3,param_2._2_2_) == 0) {
      local_24 = -1;
    }
    else {
      local_24 = -1;
      if (*(int *)(param_1[0x1b9] + param_18 * 0x3d + 2) == 0) {
        puVar1 = (undefined4 *)(param_1[0x1b9] + param_18 * 0x3d);
        *puVar1 = param_2;
        puVar1[1] = param_3;
        puVar1[2] = param_4;
        puVar1[3] = param_5;
        puVar1[4] = param_6;
        puVar1[5] = param_7;
        puVar1[6] = param_8;
        puVar1[7] = param_9;
        puVar1[8] = param_10;
        puVar1[9] = param_11;
        puVar1[10] = param_12;
        puVar1[0xb] = param_13;
        puVar1[0xc] = param_14;
        puVar1[0xd] = param_15;
        puVar1[0xe] = param_16;
        *(undefined1 *)(puVar1 + 0xf) = param_17;
        local_24 = param_18;
      }
      else {
        cVar3 = Inven_Item::isEquipableItemType((Inven_Item *)(param_1[0x1b9] + param_18 * 0x3d));
        if (cVar3 != '\x01') {
          if (*(int *)(param_1[0x1b9] + param_18 * 0x3d + 2) ==
              CONCAT22((undefined2)param_3,param_2._2_2_)) {
            iVar4 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x1b9] + param_18 * 0x3d));
            iVar5 = Inven_Item::get_add_info((Inven_Item *)&param_2);
            cVar3 = checkStackableLimit(*(ulong *)(param_1[0x1b9] + param_18 * 0x3d + 2),
                                        iVar4 + iVar5);
            if (cVar3 != '\x01') {
              return -10;
            }
            iVar4 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x1b9] + param_18 * 0x3d));
            iVar5 = Inven_Item::get_add_info((Inven_Item *)&param_2);
            Inven_Item::set_add_info((Inven_Item *)(param_1[0x1b9] + param_18 * 0x3d),iVar4 + iVar5)
            ;
            local_24 = param_18;
          }
          else {
            for (local_20 = 0; local_20 < 0xf2; local_20 = local_20 + 1) {
              if (*(int *)(param_1[0x1b9] + local_20 * 0x3d + 2) == 0) {
                puVar1 = (undefined4 *)(param_1[0x1b9] + local_20 * 0x3d);
                *puVar1 = CONCAT22(param_2._2_2_,CONCAT11(param_2._1_1_,param_2._0_1_));
                puVar1[1] = CONCAT22(param_3._2_2_,(undefined2)param_3);
                puVar1[2] = param_4;
                puVar1[3] = param_5;
                puVar1[4] = param_6;
                puVar1[5] = param_7;
                puVar1[6] = param_8;
                puVar1[7] = param_9;
                puVar1[8] = param_10;
                puVar1[9] = param_11;
                puVar1[10] = param_12;
                puVar1[0xb] = param_13;
                puVar1[0xc] = param_14;
                puVar1[0xd] = param_15;
                puVar1[0xe] = param_16;
                *(undefined1 *)(puVar1 + 0xf) = param_17;
                local_24 = local_20;
                break;
              }
              if (*(int *)(param_1[0x1b9] + local_20 * 0x3d + 2) ==
                  CONCAT22((undefined2)param_3,param_2._2_2_)) {
                iVar4 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x1b9] + local_20 * 0x3d));
                iVar5 = Inven_Item::get_add_info((Inven_Item *)&param_2);
                Inven_Item::set_add_info
                          ((Inven_Item *)(param_1[0x1b9] + local_20 * 0x3d),iVar4 + iVar5);
                local_24 = local_20;
                break;
              }
            }
          }
        }
      }
      if (((-1 < local_24) && (param_2._1_1_ != '\x05')) && (cVar2 != '\0')) {
        uVar6 = Inven_Item::get_add_info((Inven_Item *)&param_2);
        uVar7 = Inven_Item::get_add_info((Inven_Item *)(param_1[0x1b9] + local_24 * 0x3d));
        cUserHistoryLog::CreatureItemAdd
                  ((cUserHistoryLog *)(*param_1 + 0x79700),3,
                   CONCAT22((undefined2)param_3,param_2._2_2_),uVar7,uVar6,param_2._1_1_,param_19);
      }
    }
  }
  else {
    local_24 = -1;
  }
  return local_24;
}
```
