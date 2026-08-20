# GetInvenSlot

`_ZNK10CInventory12GetInvenSlotEii`

`CInventory::GetInvenSlot(int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb918` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb918  _ZNK10CInventory12GetInvenSlotEii
#           CInventory::GetInvenSlot(int, int) const
# range [0x084fb918, 0x084fbc57]
084fb918 +0x000:  push   %ebp
084fb919 +0x001:  mov    %esp,%ebp
084fb91b +0x003:  push   %ebx
084fb91c +0x004:  sub    $0x64,%esp
084fb91f +0x007:  mov    0x8(%ebp),%ebx
084fb922 +0x00a:  lea    -0x49(%ebp),%eax
084fb925 +0x00d:  mov    %eax,(%esp)
084fb928 +0x010:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084fb92d +0x015:  mov    0x14(%ebp),%eax
084fb930 +0x018:  mov    %eax,0x8(%esp)
084fb934 +0x01c:  mov    0x10(%ebp),%eax
084fb937 +0x01f:  mov    %eax,0x4(%esp)
084fb93b +0x023:  mov    0xc(%ebp),%eax
084fb93e +0x026:  mov    %eax,(%esp)
084fb941 +0x029:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
084fb946 +0x02e:  xor    $0x1,%eax
084fb949 +0x031:  test   %al,%al
084fb94b +0x033:  je     084fb9b2 <+0x9a>
084fb94d +0x035:  mov    -0x49(%ebp),%eax
084fb950 +0x038:  mov    %eax,(%ebx)
084fb952 +0x03a:  mov    -0x45(%ebp),%eax
084fb955 +0x03d:  mov    %eax,0x4(%ebx)
084fb958 +0x040:  mov    -0x41(%ebp),%eax
084fb95b +0x043:  mov    %eax,0x8(%ebx)
084fb95e +0x046:  mov    -0x3d(%ebp),%eax
084fb961 +0x049:  mov    %eax,0xc(%ebx)
084fb964 +0x04c:  mov    -0x39(%ebp),%eax
084fb967 +0x04f:  mov    %eax,0x10(%ebx)
084fb96a +0x052:  mov    -0x35(%ebp),%eax
084fb96d +0x055:  mov    %eax,0x14(%ebx)
084fb970 +0x058:  mov    -0x31(%ebp),%eax
084fb973 +0x05b:  mov    %eax,0x18(%ebx)
084fb976 +0x05e:  mov    -0x2d(%ebp),%eax
084fb979 +0x061:  mov    %eax,0x1c(%ebx)
084fb97c +0x064:  mov    -0x29(%ebp),%eax
084fb97f +0x067:  mov    %eax,0x20(%ebx)
084fb982 +0x06a:  mov    -0x25(%ebp),%eax
084fb985 +0x06d:  mov    %eax,0x24(%ebx)
084fb988 +0x070:  mov    -0x21(%ebp),%eax
084fb98b +0x073:  mov    %eax,0x28(%ebx)
084fb98e +0x076:  mov    -0x1d(%ebp),%eax
084fb991 +0x079:  mov    %eax,0x2c(%ebx)
084fb994 +0x07c:  mov    -0x19(%ebp),%eax
084fb997 +0x07f:  mov    %eax,0x30(%ebx)
084fb99a +0x082:  mov    -0x15(%ebp),%eax
084fb99d +0x085:  mov    %eax,0x34(%ebx)
084fb9a0 +0x088:  mov    -0x11(%ebp),%eax
084fb9a3 +0x08b:  mov    %eax,0x38(%ebx)
084fb9a6 +0x08e:  movzbl -0xd(%ebp),%eax
084fb9aa +0x092:  mov    %al,0x3c(%ebx)
084fb9ad +0x095:  jmp    084fbc51 <+0x339>
084fb9b2 +0x09a:  mov    0xc(%ebp),%eax
084fb9b5 +0x09d:  mov    0x650(%eax),%eax
084fb9bb +0x0a3:  test   %eax,%eax
084fb9bd +0x0a5:  je     084fb9d9 <+0xc1>
084fb9bf +0x0a7:  mov    0xc(%ebp),%eax
084fb9c2 +0x0aa:  mov    0x654(%eax),%eax
084fb9c8 +0x0b0:  test   %eax,%eax
084fb9ca +0x0b2:  je     084fb9d9 <+0xc1>
084fb9cc +0x0b4:  mov    0xc(%ebp),%eax
084fb9cf +0x0b7:  mov    0x6e4(%eax),%eax
084fb9d5 +0x0bd:  test   %eax,%eax
084fb9d7 +0x0bf:  jne    084fba3e <+0x126>
084fb9d9 +0x0c1:  mov    -0x49(%ebp),%eax
084fb9dc +0x0c4:  mov    %eax,(%ebx)
084fb9de +0x0c6:  mov    -0x45(%ebp),%eax
084fb9e1 +0x0c9:  mov    %eax,0x4(%ebx)
084fb9e4 +0x0cc:  mov    -0x41(%ebp),%eax
084fb9e7 +0x0cf:  mov    %eax,0x8(%ebx)
084fb9ea +0x0d2:  mov    -0x3d(%ebp),%eax
084fb9ed +0x0d5:  mov    %eax,0xc(%ebx)
084fb9f0 +0x0d8:  mov    -0x39(%ebp),%eax
084fb9f3 +0x0db:  mov    %eax,0x10(%ebx)
084fb9f6 +0x0de:  mov    -0x35(%ebp),%eax
084fb9f9 +0x0e1:  mov    %eax,0x14(%ebx)
084fb9fc +0x0e4:  mov    -0x31(%ebp),%eax
084fb9ff +0x0e7:  mov    %eax,0x18(%ebx)
084fba02 +0x0ea:  mov    -0x2d(%ebp),%eax
084fba05 +0x0ed:  mov    %eax,0x1c(%ebx)
084fba08 +0x0f0:  mov    -0x29(%ebp),%eax
084fba0b +0x0f3:  mov    %eax,0x20(%ebx)
084fba0e +0x0f6:  mov    -0x25(%ebp),%eax
084fba11 +0x0f9:  mov    %eax,0x24(%ebx)
084fba14 +0x0fc:  mov    -0x21(%ebp),%eax
084fba17 +0x0ff:  mov    %eax,0x28(%ebx)
084fba1a +0x102:  mov    -0x1d(%ebp),%eax
084fba1d +0x105:  mov    %eax,0x2c(%ebx)
084fba20 +0x108:  mov    -0x19(%ebp),%eax
084fba23 +0x10b:  mov    %eax,0x30(%ebx)
084fba26 +0x10e:  mov    -0x15(%ebp),%eax
084fba29 +0x111:  mov    %eax,0x34(%ebx)
084fba2c +0x114:  mov    -0x11(%ebp),%eax
084fba2f +0x117:  mov    %eax,0x38(%ebx)
084fba32 +0x11a:  movzbl -0xd(%ebp),%eax
084fba36 +0x11e:  mov    %al,0x3c(%ebx)
084fba39 +0x121:  jmp    084fbc51 <+0x339>
084fba3e +0x126:  cmpl   $0x5,0x10(%ebp)
084fba42 +0x12a:  ja     084fbbf1 <+0x2d9>
084fba48 +0x130:  mov    0x10(%ebp),%eax
084fba4b +0x133:  shl    $0x2,%eax
084fba4e +0x136:  mov    &data#6ead5ab9(.rodata)(%eax),%eax
084fba54 +0x13c:  jmp    *%eax
084fba56 +0x13e:  mov    0x14(%ebp),%eax
084fba59 +0x141:  mov    0xc(%ebp),%edx
084fba5c +0x144:  imul   $0x3d,%eax,%eax
084fba5f +0x147:  lea    (%edx,%eax,1),%eax
084fba62 +0x14a:  add    $0x10,%eax
084fba65 +0x14d:  mov    0xc(%eax),%edx
084fba68 +0x150:  mov    %edx,(%ebx)
084fba6a +0x152:  mov    0x10(%eax),%edx
084fba6d +0x155:  mov    %edx,0x4(%ebx)
084fba70 +0x158:  mov    0x14(%eax),%edx
084fba73 +0x15b:  mov    %edx,0x8(%ebx)
084fba76 +0x15e:  mov    0x18(%eax),%edx
084fba79 +0x161:  mov    %edx,0xc(%ebx)
084fba7c +0x164:  mov    0x1c(%eax),%edx
084fba7f +0x167:  mov    %edx,0x10(%ebx)
084fba82 +0x16a:  mov    0x20(%eax),%edx
084fba85 +0x16d:  mov    %edx,0x14(%ebx)
084fba88 +0x170:  mov    0x24(%eax),%edx
084fba8b +0x173:  mov    %edx,0x18(%ebx)
084fba8e +0x176:  mov    0x28(%eax),%edx
084fba91 +0x179:  mov    %edx,0x1c(%ebx)
084fba94 +0x17c:  mov    0x2c(%eax),%edx
084fba97 +0x17f:  mov    %edx,0x20(%ebx)
084fba9a +0x182:  mov    0x30(%eax),%edx
084fba9d +0x185:  mov    %edx,0x24(%ebx)
084fbaa0 +0x188:  mov    0x34(%eax),%edx
084fbaa3 +0x18b:  mov    %edx,0x28(%ebx)
084fbaa6 +0x18e:  mov    0x38(%eax),%edx
084fbaa9 +0x191:  mov    %edx,0x2c(%ebx)
084fbaac +0x194:  mov    0x3c(%eax),%edx
084fbaaf +0x197:  mov    %edx,0x30(%ebx)
084fbab2 +0x19a:  mov    0x40(%eax),%edx
084fbab5 +0x19d:  mov    %edx,0x34(%ebx)
084fbab8 +0x1a0:  mov    0x44(%eax),%edx
084fbabb +0x1a3:  mov    %edx,0x38(%ebx)
084fbabe +0x1a6:  movzbl 0x48(%eax),%eax
084fbac2 +0x1aa:  mov    %al,0x3c(%ebx)
084fbac5 +0x1ad:  jmp    084fbc51 <+0x339>
084fbaca +0x1b2:  mov    0xc(%ebp),%eax
084fbacd +0x1b5:  mov    0x650(%eax),%edx
084fbad3 +0x1bb:  mov    0x14(%ebp),%eax
084fbad6 +0x1be:  imul   $0x3d,%eax,%eax
084fbad9 +0x1c1:  lea    (%edx,%eax,1),%eax
084fbadc +0x1c4:  movl   $0x3d,0x8(%esp)
084fbae4 +0x1cc:  mov    %eax,0x4(%esp)
084fbae8 +0x1d0:  mov    %ebx,(%esp)
084fbaeb +0x1d3:  call   0807d880 <_init+0x178>
084fbaf0 +0x1d8:  jmp    084fbc51 <+0x339>
084fbaf5 +0x1dd:  mov    0xc(%ebp),%eax
084fbaf8 +0x1e0:  mov    0x654(%eax),%edx
084fbafe +0x1e6:  mov    0x14(%ebp),%eax
084fbb01 +0x1e9:  imul   $0x3d,%eax,%eax
084fbb04 +0x1ec:  lea    (%edx,%eax,1),%eax
084fbb07 +0x1ef:  movl   $0x3d,0x8(%esp)
084fbb0f +0x1f7:  mov    %eax,0x4(%esp)
084fbb13 +0x1fb:  mov    %ebx,(%esp)
084fbb16 +0x1fe:  call   0807d880 <_init+0x178>
084fbb1b +0x203:  jmp    084fbc51 <+0x339>
084fbb20 +0x208:  mov    0xc(%ebp),%eax
084fbb23 +0x20b:  mov    0x6e4(%eax),%edx
084fbb29 +0x211:  mov    0x14(%ebp),%eax
084fbb2c +0x214:  imul   $0x3d,%eax,%eax
084fbb2f +0x217:  lea    (%edx,%eax,1),%eax
084fbb32 +0x21a:  movl   $0x3d,0x8(%esp)
084fbb3a +0x222:  mov    %eax,0x4(%esp)
084fbb3e +0x226:  mov    %ebx,(%esp)
084fbb41 +0x229:  call   0807d880 <_init+0x178>
084fbb46 +0x22e:  jmp    084fbc51 <+0x339>
084fbb4b +0x233:  mov    0xc(%ebp),%eax
084fbb4e +0x236:  mov    (%eax),%eax
084fbb50 +0x238:  movl   $0x9,0x4(%esp)
084fbb58 +0x240:  mov    %eax,(%esp)
084fbb5b +0x243:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084fbb60 +0x248:  mov    %eax,-0xc(%ebp)
084fbb63 +0x24b:  cmpl   $0x0,-0xc(%ebp)
084fbb67 +0x24f:  je     084fbb8f <+0x277>
084fbb69 +0x251:  mov    0x14(%ebp),%eax
084fbb6c +0x254:  mov    %eax,0xc(%esp)
084fbb70 +0x258:  movl   $0x5,0x8(%esp)
084fbb78 +0x260:  mov    -0xc(%ebp),%eax
084fbb7b +0x263:  mov    %eax,0x4(%esp)
084fbb7f +0x267:  mov    %ebx,(%esp)
084fbb82 +0x26a:  call   08499d1a <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi>  ; CExpandEquipslot::GetInvenSlot(INVEN_TYPE, int) const
084fbb87 +0x26f:  sub    $0x4,%esp
084fbb8a +0x272:  jmp    084fbc51 <+0x339>
084fbb8f +0x277:  mov    -0x49(%ebp),%eax
084fbb92 +0x27a:  mov    %eax,(%ebx)
084fbb94 +0x27c:  mov    -0x45(%ebp),%eax
084fbb97 +0x27f:  mov    %eax,0x4(%ebx)
084fbb9a +0x282:  mov    -0x41(%ebp),%eax
084fbb9d +0x285:  mov    %eax,0x8(%ebx)
084fbba0 +0x288:  mov    -0x3d(%ebp),%eax
084fbba3 +0x28b:  mov    %eax,0xc(%ebx)
084fbba6 +0x28e:  mov    -0x39(%ebp),%eax
084fbba9 +0x291:  mov    %eax,0x10(%ebx)
084fbbac +0x294:  mov    -0x35(%ebp),%eax
084fbbaf +0x297:  mov    %eax,0x14(%ebx)
084fbbb2 +0x29a:  mov    -0x31(%ebp),%eax
084fbbb5 +0x29d:  mov    %eax,0x18(%ebx)
084fbbb8 +0x2a0:  mov    -0x2d(%ebp),%eax
084fbbbb +0x2a3:  mov    %eax,0x1c(%ebx)
084fbbbe +0x2a6:  mov    -0x29(%ebp),%eax
084fbbc1 +0x2a9:  mov    %eax,0x20(%ebx)
084fbbc4 +0x2ac:  mov    -0x25(%ebp),%eax
084fbbc7 +0x2af:  mov    %eax,0x24(%ebx)
084fbbca +0x2b2:  mov    -0x21(%ebp),%eax
084fbbcd +0x2b5:  mov    %eax,0x28(%ebx)
084fbbd0 +0x2b8:  mov    -0x1d(%ebp),%eax
084fbbd3 +0x2bb:  mov    %eax,0x2c(%ebx)
084fbbd6 +0x2be:  mov    -0x19(%ebp),%eax
084fbbd9 +0x2c1:  mov    %eax,0x30(%ebx)
084fbbdc +0x2c4:  mov    -0x15(%ebp),%eax
084fbbdf +0x2c7:  mov    %eax,0x34(%ebx)
084fbbe2 +0x2ca:  mov    -0x11(%ebp),%eax
084fbbe5 +0x2cd:  mov    %eax,0x38(%ebx)
084fbbe8 +0x2d0:  movzbl -0xd(%ebp),%eax
084fbbec +0x2d4:  mov    %al,0x3c(%ebx)
084fbbef +0x2d7:  jmp    084fbc51 <+0x339>
084fbbf1 +0x2d9:  mov    -0x49(%ebp),%eax
084fbbf4 +0x2dc:  mov    %eax,(%ebx)
084fbbf6 +0x2de:  mov    -0x45(%ebp),%eax
084fbbf9 +0x2e1:  mov    %eax,0x4(%ebx)
084fbbfc +0x2e4:  mov    -0x41(%ebp),%eax
084fbbff +0x2e7:  mov    %eax,0x8(%ebx)
084fbc02 +0x2ea:  mov    -0x3d(%ebp),%eax
084fbc05 +0x2ed:  mov    %eax,0xc(%ebx)
084fbc08 +0x2f0:  mov    -0x39(%ebp),%eax
084fbc0b +0x2f3:  mov    %eax,0x10(%ebx)
084fbc0e +0x2f6:  mov    -0x35(%ebp),%eax
084fbc11 +0x2f9:  mov    %eax,0x14(%ebx)
084fbc14 +0x2fc:  mov    -0x31(%ebp),%eax
084fbc17 +0x2ff:  mov    %eax,0x18(%ebx)
084fbc1a +0x302:  mov    -0x2d(%ebp),%eax
084fbc1d +0x305:  mov    %eax,0x1c(%ebx)
084fbc20 +0x308:  mov    -0x29(%ebp),%eax
084fbc23 +0x30b:  mov    %eax,0x20(%ebx)
084fbc26 +0x30e:  mov    -0x25(%ebp),%eax
084fbc29 +0x311:  mov    %eax,0x24(%ebx)
084fbc2c +0x314:  mov    -0x21(%ebp),%eax
084fbc2f +0x317:  mov    %eax,0x28(%ebx)
084fbc32 +0x31a:  mov    -0x1d(%ebp),%eax
084fbc35 +0x31d:  mov    %eax,0x2c(%ebx)
084fbc38 +0x320:  mov    -0x19(%ebp),%eax
084fbc3b +0x323:  mov    %eax,0x30(%ebx)
084fbc3e +0x326:  mov    -0x15(%ebp),%eax
084fbc41 +0x329:  mov    %eax,0x34(%ebx)
084fbc44 +0x32c:  mov    -0x11(%ebp),%eax
084fbc47 +0x32f:  mov    %eax,0x38(%ebx)
084fbc4a +0x332:  movzbl -0xd(%ebp),%eax
084fbc4e +0x336:  mov    %al,0x3c(%ebx)
084fbc51 +0x339:  mov    %ebx,%eax
084fbc53 +0x33b:  mov    -0x4(%ebp),%ebx
084fbc56 +0x33e:  leave
084fbc57 +0x33f:  ret    $0x4
```

## 反编译 C

```c
// CInventory::GetInvenSlot @ 0x84fb918

/* CInventory::GetInvenSlot(int, int) const */

int CInventory::GetInvenSlot(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_stack_0000000c;
  int in_stack_00000010;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
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
  int local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_4d);
  cVar2 = CheckValidSlot((CInventory *)param_2,in_stack_0000000c,in_stack_00000010);
  if (cVar2 == '\x01') {
    if (((*(int *)(param_2 + 0x650) == 0) || (*(int *)(param_2 + 0x654) == 0)) ||
       (*(int *)(param_2 + 0x6e4) == 0)) {
      *(undefined4 *)param_1 = local_4d;
      *(undefined4 *)(param_1 + 4) = local_49;
      *(undefined4 *)(param_1 + 8) = local_45;
      *(undefined4 *)(param_1 + 0xc) = local_41;
      *(undefined4 *)(param_1 + 0x10) = local_3d;
      *(undefined4 *)(param_1 + 0x14) = local_39;
      *(undefined4 *)(param_1 + 0x18) = local_35;
      *(undefined4 *)(param_1 + 0x1c) = local_31;
      *(undefined4 *)(param_1 + 0x20) = local_2d;
      *(undefined4 *)(param_1 + 0x24) = local_29;
      *(undefined4 *)(param_1 + 0x28) = local_25;
      *(undefined4 *)(param_1 + 0x2c) = local_21;
      *(undefined4 *)(param_1 + 0x30) = local_1d;
      *(undefined4 *)(param_1 + 0x34) = local_19;
      *(undefined4 *)(param_1 + 0x38) = local_15;
      *(undefined1 *)(param_1 + 0x3c) = local_11;
    }
    else {
      switch(in_stack_0000000c) {
      case 0:
        iVar1 = param_2 + in_stack_00000010 * 0x3d;
        *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x1c);
        *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x20);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x24);
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar1 + 0x28);
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(iVar1 + 0x2c);
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar1 + 0x30);
        *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x34);
        *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar1 + 0x38);
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar1 + 0x3c);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar1 + 0x40);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar1 + 0x44);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar1 + 0x48);
        *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar1 + 0x4c);
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x50);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x54);
        *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(iVar1 + 0x58);
        break;
      case 1:
        memmove((void *)param_1,(void *)(*(int *)(param_2 + 0x650) + in_stack_00000010 * 0x3d),0x3d)
        ;
        break;
      case 2:
        memmove((void *)param_1,(void *)(*(int *)(param_2 + 0x654) + in_stack_00000010 * 0x3d),0x3d)
        ;
        break;
      case 3:
        memmove((void *)param_1,(void *)(*(int *)(param_2 + 0x6e4) + in_stack_00000010 * 0x3d),0x3d)
        ;
        break;
      default:
        *(undefined4 *)param_1 = local_4d;
        *(undefined4 *)(param_1 + 4) = local_49;
        *(undefined4 *)(param_1 + 8) = local_45;
        *(undefined4 *)(param_1 + 0xc) = local_41;
        *(undefined4 *)(param_1 + 0x10) = local_3d;
        *(undefined4 *)(param_1 + 0x14) = local_39;
        *(undefined4 *)(param_1 + 0x18) = local_35;
        *(undefined4 *)(param_1 + 0x1c) = local_31;
        *(undefined4 *)(param_1 + 0x20) = local_2d;
        *(undefined4 *)(param_1 + 0x24) = local_29;
        *(undefined4 *)(param_1 + 0x28) = local_25;
        *(undefined4 *)(param_1 + 0x2c) = local_21;
        *(undefined4 *)(param_1 + 0x30) = local_1d;
        *(undefined4 *)(param_1 + 0x34) = local_19;
        *(undefined4 *)(param_1 + 0x38) = local_15;
        *(undefined1 *)(param_1 + 0x3c) = local_11;
        break;
      case 5:
        local_10 = CUser::GetCharacExpandData(*(CUser **)param_2,9);
        if (local_10 == 0) {
          *(undefined4 *)param_1 = local_4d;
          *(undefined4 *)(param_1 + 4) = local_49;
          *(undefined4 *)(param_1 + 8) = local_45;
          *(undefined4 *)(param_1 + 0xc) = local_41;
          *(undefined4 *)(param_1 + 0x10) = local_3d;
          *(undefined4 *)(param_1 + 0x14) = local_39;
          *(undefined4 *)(param_1 + 0x18) = local_35;
          *(undefined4 *)(param_1 + 0x1c) = local_31;
          *(undefined4 *)(param_1 + 0x20) = local_2d;
          *(undefined4 *)(param_1 + 0x24) = local_29;
          *(undefined4 *)(param_1 + 0x28) = local_25;
          *(undefined4 *)(param_1 + 0x2c) = local_21;
          *(undefined4 *)(param_1 + 0x30) = local_1d;
          *(undefined4 *)(param_1 + 0x34) = local_19;
          *(undefined4 *)(param_1 + 0x38) = local_15;
          *(undefined1 *)(param_1 + 0x3c) = local_11;
        }
        else {
          CExpandEquipslot::GetInvenSlot(param_1,local_10,5,in_stack_00000010);
        }
      }
    }
  }
  else {
    *(undefined4 *)param_1 = local_4d;
    *(undefined4 *)(param_1 + 4) = local_49;
    *(undefined4 *)(param_1 + 8) = local_45;
    *(undefined4 *)(param_1 + 0xc) = local_41;
    *(undefined4 *)(param_1 + 0x10) = local_3d;
    *(undefined4 *)(param_1 + 0x14) = local_39;
    *(undefined4 *)(param_1 + 0x18) = local_35;
    *(undefined4 *)(param_1 + 0x1c) = local_31;
    *(undefined4 *)(param_1 + 0x20) = local_2d;
    *(undefined4 *)(param_1 + 0x24) = local_29;
    *(undefined4 *)(param_1 + 0x28) = local_25;
    *(undefined4 *)(param_1 + 0x2c) = local_21;
    *(undefined4 *)(param_1 + 0x30) = local_1d;
    *(undefined4 *)(param_1 + 0x34) = local_19;
    *(undefined4 *)(param_1 + 0x38) = local_15;
    *(undefined1 *)(param_1 + 0x3c) = local_11;
  }
  return param_1;
}
```
