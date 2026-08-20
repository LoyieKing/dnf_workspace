# GetInvenSlotByRef

`_ZN10CInventory17GetInvenSlotByRefEiiR10Inven_Item`

`CInventory::GetInvenSlotByRef(int, int, Inven_Item&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fbc5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fbc5a  _ZN10CInventory17GetInvenSlotByRefEiiR10Inven_Item
#           CInventory::GetInvenSlotByRef(int, int, Inven_Item&)
# range [0x084fbc5a, 0x084fbf2b]
084fbc5a +0x000:  push   %ebp
084fbc5b +0x001:  mov    %esp,%ebp
084fbc5d +0x003:  push   %ebx
084fbc5e +0x004:  sub    $0x64,%esp
084fbc61 +0x007:  mov    0x10(%ebp),%eax
084fbc64 +0x00a:  mov    %eax,0x8(%esp)
084fbc68 +0x00e:  mov    0xc(%ebp),%eax
084fbc6b +0x011:  mov    %eax,0x4(%esp)
084fbc6f +0x015:  mov    0x8(%ebp),%eax
084fbc72 +0x018:  mov    %eax,(%esp)
084fbc75 +0x01b:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
084fbc7a +0x020:  xor    $0x1,%eax
084fbc7d +0x023:  test   %al,%al
084fbc7f +0x025:  je     084fbc8b <+0x31>
084fbc81 +0x027:  mov    $0x0,%eax
084fbc86 +0x02c:  jmp    084fbf26 <+0x2cc>
084fbc8b +0x031:  cmpl   $0x5,0xc(%ebp)
084fbc8f +0x035:  ja     084fbf21 <+0x2c7>
084fbc95 +0x03b:  mov    0xc(%ebp),%eax
084fbc98 +0x03e:  shl    $0x2,%eax
084fbc9b +0x041:  mov    &data#314e6fad(.rodata)(%eax),%eax
084fbca1 +0x047:  jmp    *%eax
084fbca3 +0x049:  mov    0x10(%ebp),%edx
084fbca6 +0x04c:  mov    0x14(%ebp),%eax
084fbca9 +0x04f:  mov    0x8(%ebp),%ecx
084fbcac +0x052:  imul   $0x3d,%edx,%edx
084fbcaf +0x055:  lea    (%ecx,%edx,1),%edx
084fbcb2 +0x058:  add    $0x10,%edx
084fbcb5 +0x05b:  mov    0xc(%edx),%ecx
084fbcb8 +0x05e:  mov    %ecx,(%eax)
084fbcba +0x060:  mov    0x10(%edx),%ecx
084fbcbd +0x063:  mov    %ecx,0x4(%eax)
084fbcc0 +0x066:  mov    0x14(%edx),%ecx
084fbcc3 +0x069:  mov    %ecx,0x8(%eax)
084fbcc6 +0x06c:  mov    0x18(%edx),%ecx
084fbcc9 +0x06f:  mov    %ecx,0xc(%eax)
084fbccc +0x072:  mov    0x1c(%edx),%ecx
084fbccf +0x075:  mov    %ecx,0x10(%eax)
084fbcd2 +0x078:  mov    0x20(%edx),%ecx
084fbcd5 +0x07b:  mov    %ecx,0x14(%eax)
084fbcd8 +0x07e:  mov    0x24(%edx),%ecx
084fbcdb +0x081:  mov    %ecx,0x18(%eax)
084fbcde +0x084:  mov    0x28(%edx),%ecx
084fbce1 +0x087:  mov    %ecx,0x1c(%eax)
084fbce4 +0x08a:  mov    0x2c(%edx),%ecx
084fbce7 +0x08d:  mov    %ecx,0x20(%eax)
084fbcea +0x090:  mov    0x30(%edx),%ecx
084fbced +0x093:  mov    %ecx,0x24(%eax)
084fbcf0 +0x096:  mov    0x34(%edx),%ecx
084fbcf3 +0x099:  mov    %ecx,0x28(%eax)
084fbcf6 +0x09c:  mov    0x38(%edx),%ecx
084fbcf9 +0x09f:  mov    %ecx,0x2c(%eax)
084fbcfc +0x0a2:  mov    0x3c(%edx),%ecx
084fbcff +0x0a5:  mov    %ecx,0x30(%eax)
084fbd02 +0x0a8:  mov    0x40(%edx),%ecx
084fbd05 +0x0ab:  mov    %ecx,0x34(%eax)
084fbd08 +0x0ae:  mov    0x44(%edx),%ecx
084fbd0b +0x0b1:  mov    %ecx,0x38(%eax)
084fbd0e +0x0b4:  movzbl 0x48(%edx),%edx
084fbd12 +0x0b8:  mov    %dl,0x3c(%eax)
084fbd15 +0x0bb:  jmp    084fbf21 <+0x2c7>
084fbd1a +0x0c0:  mov    0x8(%ebp),%eax
084fbd1d +0x0c3:  mov    0x650(%eax),%edx
084fbd23 +0x0c9:  mov    0x10(%ebp),%eax
084fbd26 +0x0cc:  imul   $0x3d,%eax,%eax
084fbd29 +0x0cf:  add    %eax,%edx
084fbd2b +0x0d1:  mov    0x14(%ebp),%eax
084fbd2e +0x0d4:  mov    (%edx),%ecx
084fbd30 +0x0d6:  mov    %ecx,(%eax)
084fbd32 +0x0d8:  mov    0x4(%edx),%ecx
084fbd35 +0x0db:  mov    %ecx,0x4(%eax)
084fbd38 +0x0de:  mov    0x8(%edx),%ecx
084fbd3b +0x0e1:  mov    %ecx,0x8(%eax)
084fbd3e +0x0e4:  mov    0xc(%edx),%ecx
084fbd41 +0x0e7:  mov    %ecx,0xc(%eax)
084fbd44 +0x0ea:  mov    0x10(%edx),%ecx
084fbd47 +0x0ed:  mov    %ecx,0x10(%eax)
084fbd4a +0x0f0:  mov    0x14(%edx),%ecx
084fbd4d +0x0f3:  mov    %ecx,0x14(%eax)
084fbd50 +0x0f6:  mov    0x18(%edx),%ecx
084fbd53 +0x0f9:  mov    %ecx,0x18(%eax)
084fbd56 +0x0fc:  mov    0x1c(%edx),%ecx
084fbd59 +0x0ff:  mov    %ecx,0x1c(%eax)
084fbd5c +0x102:  mov    0x20(%edx),%ecx
084fbd5f +0x105:  mov    %ecx,0x20(%eax)
084fbd62 +0x108:  mov    0x24(%edx),%ecx
084fbd65 +0x10b:  mov    %ecx,0x24(%eax)
084fbd68 +0x10e:  mov    0x28(%edx),%ecx
084fbd6b +0x111:  mov    %ecx,0x28(%eax)
084fbd6e +0x114:  mov    0x2c(%edx),%ecx
084fbd71 +0x117:  mov    %ecx,0x2c(%eax)
084fbd74 +0x11a:  mov    0x30(%edx),%ecx
084fbd77 +0x11d:  mov    %ecx,0x30(%eax)
084fbd7a +0x120:  mov    0x34(%edx),%ecx
084fbd7d +0x123:  mov    %ecx,0x34(%eax)
084fbd80 +0x126:  mov    0x38(%edx),%ecx
084fbd83 +0x129:  mov    %ecx,0x38(%eax)
084fbd86 +0x12c:  movzbl 0x3c(%edx),%edx
084fbd8a +0x130:  mov    %dl,0x3c(%eax)
084fbd8d +0x133:  jmp    084fbf21 <+0x2c7>
084fbd92 +0x138:  mov    0x8(%ebp),%eax
084fbd95 +0x13b:  mov    0x654(%eax),%edx
084fbd9b +0x141:  mov    0x10(%ebp),%eax
084fbd9e +0x144:  imul   $0x3d,%eax,%eax
084fbda1 +0x147:  add    %eax,%edx
084fbda3 +0x149:  mov    0x14(%ebp),%eax
084fbda6 +0x14c:  mov    (%edx),%ecx
084fbda8 +0x14e:  mov    %ecx,(%eax)
084fbdaa +0x150:  mov    0x4(%edx),%ecx
084fbdad +0x153:  mov    %ecx,0x4(%eax)
084fbdb0 +0x156:  mov    0x8(%edx),%ecx
084fbdb3 +0x159:  mov    %ecx,0x8(%eax)
084fbdb6 +0x15c:  mov    0xc(%edx),%ecx
084fbdb9 +0x15f:  mov    %ecx,0xc(%eax)
084fbdbc +0x162:  mov    0x10(%edx),%ecx
084fbdbf +0x165:  mov    %ecx,0x10(%eax)
084fbdc2 +0x168:  mov    0x14(%edx),%ecx
084fbdc5 +0x16b:  mov    %ecx,0x14(%eax)
084fbdc8 +0x16e:  mov    0x18(%edx),%ecx
084fbdcb +0x171:  mov    %ecx,0x18(%eax)
084fbdce +0x174:  mov    0x1c(%edx),%ecx
084fbdd1 +0x177:  mov    %ecx,0x1c(%eax)
084fbdd4 +0x17a:  mov    0x20(%edx),%ecx
084fbdd7 +0x17d:  mov    %ecx,0x20(%eax)
084fbdda +0x180:  mov    0x24(%edx),%ecx
084fbddd +0x183:  mov    %ecx,0x24(%eax)
084fbde0 +0x186:  mov    0x28(%edx),%ecx
084fbde3 +0x189:  mov    %ecx,0x28(%eax)
084fbde6 +0x18c:  mov    0x2c(%edx),%ecx
084fbde9 +0x18f:  mov    %ecx,0x2c(%eax)
084fbdec +0x192:  mov    0x30(%edx),%ecx
084fbdef +0x195:  mov    %ecx,0x30(%eax)
084fbdf2 +0x198:  mov    0x34(%edx),%ecx
084fbdf5 +0x19b:  mov    %ecx,0x34(%eax)
084fbdf8 +0x19e:  mov    0x38(%edx),%ecx
084fbdfb +0x1a1:  mov    %ecx,0x38(%eax)
084fbdfe +0x1a4:  movzbl 0x3c(%edx),%edx
084fbe02 +0x1a8:  mov    %dl,0x3c(%eax)
084fbe05 +0x1ab:  jmp    084fbf21 <+0x2c7>
084fbe0a +0x1b0:  mov    0x8(%ebp),%eax
084fbe0d +0x1b3:  mov    0x6e4(%eax),%edx
084fbe13 +0x1b9:  mov    0x10(%ebp),%eax
084fbe16 +0x1bc:  imul   $0x3d,%eax,%eax
084fbe19 +0x1bf:  add    %eax,%edx
084fbe1b +0x1c1:  mov    0x14(%ebp),%eax
084fbe1e +0x1c4:  mov    (%edx),%ecx
084fbe20 +0x1c6:  mov    %ecx,(%eax)
084fbe22 +0x1c8:  mov    0x4(%edx),%ecx
084fbe25 +0x1cb:  mov    %ecx,0x4(%eax)
084fbe28 +0x1ce:  mov    0x8(%edx),%ecx
084fbe2b +0x1d1:  mov    %ecx,0x8(%eax)
084fbe2e +0x1d4:  mov    0xc(%edx),%ecx
084fbe31 +0x1d7:  mov    %ecx,0xc(%eax)
084fbe34 +0x1da:  mov    0x10(%edx),%ecx
084fbe37 +0x1dd:  mov    %ecx,0x10(%eax)
084fbe3a +0x1e0:  mov    0x14(%edx),%ecx
084fbe3d +0x1e3:  mov    %ecx,0x14(%eax)
084fbe40 +0x1e6:  mov    0x18(%edx),%ecx
084fbe43 +0x1e9:  mov    %ecx,0x18(%eax)
084fbe46 +0x1ec:  mov    0x1c(%edx),%ecx
084fbe49 +0x1ef:  mov    %ecx,0x1c(%eax)
084fbe4c +0x1f2:  mov    0x20(%edx),%ecx
084fbe4f +0x1f5:  mov    %ecx,0x20(%eax)
084fbe52 +0x1f8:  mov    0x24(%edx),%ecx
084fbe55 +0x1fb:  mov    %ecx,0x24(%eax)
084fbe58 +0x1fe:  mov    0x28(%edx),%ecx
084fbe5b +0x201:  mov    %ecx,0x28(%eax)
084fbe5e +0x204:  mov    0x2c(%edx),%ecx
084fbe61 +0x207:  mov    %ecx,0x2c(%eax)
084fbe64 +0x20a:  mov    0x30(%edx),%ecx
084fbe67 +0x20d:  mov    %ecx,0x30(%eax)
084fbe6a +0x210:  mov    0x34(%edx),%ecx
084fbe6d +0x213:  mov    %ecx,0x34(%eax)
084fbe70 +0x216:  mov    0x38(%edx),%ecx
084fbe73 +0x219:  mov    %ecx,0x38(%eax)
084fbe76 +0x21c:  movzbl 0x3c(%edx),%edx
084fbe7a +0x220:  mov    %dl,0x3c(%eax)
084fbe7d +0x223:  jmp    084fbf21 <+0x2c7>
084fbe82 +0x228:  mov    0x8(%ebp),%eax
084fbe85 +0x22b:  mov    (%eax),%eax
084fbe87 +0x22d:  movl   $0x9,0x4(%esp)
084fbe8f +0x235:  mov    %eax,(%esp)
084fbe92 +0x238:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
084fbe97 +0x23d:  mov    %eax,-0xc(%ebp)
084fbe9a +0x240:  mov    0x14(%ebp),%ebx
084fbe9d +0x243:  lea    -0x58(%ebp),%eax
084fbea0 +0x246:  mov    0x10(%ebp),%edx
084fbea3 +0x249:  mov    %edx,0xc(%esp)
084fbea7 +0x24d:  movl   $0x5,0x8(%esp)
084fbeaf +0x255:  mov    -0xc(%ebp),%edx
084fbeb2 +0x258:  mov    %edx,0x4(%esp)
084fbeb6 +0x25c:  mov    %eax,(%esp)
084fbeb9 +0x25f:  call   08499d1a <_ZNK16CExpandEquipslot12GetInvenSlotE10INVEN_TYPEi>  ; CExpandEquipslot::GetInvenSlot(INVEN_TYPE, int) const
084fbebe +0x264:  sub    $0x4,%esp
084fbec1 +0x267:  mov    -0x58(%ebp),%eax
084fbec4 +0x26a:  mov    %eax,(%ebx)
084fbec6 +0x26c:  mov    -0x54(%ebp),%eax
084fbec9 +0x26f:  mov    %eax,0x4(%ebx)
084fbecc +0x272:  mov    -0x50(%ebp),%eax
084fbecf +0x275:  mov    %eax,0x8(%ebx)
084fbed2 +0x278:  mov    -0x4c(%ebp),%eax
084fbed5 +0x27b:  mov    %eax,0xc(%ebx)
084fbed8 +0x27e:  mov    -0x48(%ebp),%eax
084fbedb +0x281:  mov    %eax,0x10(%ebx)
084fbede +0x284:  mov    -0x44(%ebp),%eax
084fbee1 +0x287:  mov    %eax,0x14(%ebx)
084fbee4 +0x28a:  mov    -0x40(%ebp),%eax
084fbee7 +0x28d:  mov    %eax,0x18(%ebx)
084fbeea +0x290:  mov    -0x3c(%ebp),%eax
084fbeed +0x293:  mov    %eax,0x1c(%ebx)
084fbef0 +0x296:  mov    -0x38(%ebp),%eax
084fbef3 +0x299:  mov    %eax,0x20(%ebx)
084fbef6 +0x29c:  mov    -0x34(%ebp),%eax
084fbef9 +0x29f:  mov    %eax,0x24(%ebx)
084fbefc +0x2a2:  mov    -0x30(%ebp),%eax
084fbeff +0x2a5:  mov    %eax,0x28(%ebx)
084fbf02 +0x2a8:  mov    -0x2c(%ebp),%eax
084fbf05 +0x2ab:  mov    %eax,0x2c(%ebx)
084fbf08 +0x2ae:  mov    -0x28(%ebp),%eax
084fbf0b +0x2b1:  mov    %eax,0x30(%ebx)
084fbf0e +0x2b4:  mov    -0x24(%ebp),%eax
084fbf11 +0x2b7:  mov    %eax,0x34(%ebx)
084fbf14 +0x2ba:  mov    -0x20(%ebp),%eax
084fbf17 +0x2bd:  mov    %eax,0x38(%ebx)
084fbf1a +0x2c0:  movzbl -0x1c(%ebp),%eax
084fbf1e +0x2c4:  mov    %al,0x3c(%ebx)
084fbf21 +0x2c7:  mov    $0x1,%eax
084fbf26 +0x2cc:  mov    -0x4(%ebp),%ebx
084fbf29 +0x2cf:  leave
084fbf2a +0x2d0:  ret
084fbf2b +0x2d1:  nop
```

## 反编译 C

```c
// CInventory::GetInvenSlotByRef @ 0x84fbc5a

/* CInventory::GetInvenSlotByRef(int, int, Inven_Item&) */

undefined4 __thiscall
CInventory::GetInvenSlotByRef(CInventory *this,int param_1,int param_2,Inven_Item *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  undefined4 local_10;
  
  cVar1 = CheckValidSlot(this,param_1,param_2);
  if (cVar1 == '\x01') {
    switch(param_1) {
    case 0:
      *(undefined4 *)param_3 = *(undefined4 *)(this + param_2 * 0x3d + 0x1c);
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(this + param_2 * 0x3d + 0x20);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(this + param_2 * 0x3d + 0x24);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(this + param_2 * 0x3d + 0x28);
      *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(this + param_2 * 0x3d + 0x2c);
      *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(this + param_2 * 0x3d + 0x30);
      *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(this + param_2 * 0x3d + 0x34);
      *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(this + param_2 * 0x3d + 0x38);
      *(undefined4 *)(param_3 + 0x20) = *(undefined4 *)(this + param_2 * 0x3d + 0x3c);
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(this + param_2 * 0x3d + 0x40);
      *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(this + param_2 * 0x3d + 0x44);
      *(undefined4 *)(param_3 + 0x2c) = *(undefined4 *)(this + param_2 * 0x3d + 0x48);
      *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(this + param_2 * 0x3d + 0x4c);
      *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(this + param_2 * 0x3d + 0x50);
      *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(this + param_2 * 0x3d + 0x54);
      *(CInventory *)(param_3 + 0x3c) = this[param_2 * 0x3d + 0x58];
      break;
    case 1:
      puVar3 = (undefined4 *)(*(int *)(this + 0x650) + param_2 * 0x3d);
      *(undefined4 *)param_3 = *puVar3;
      *(undefined4 *)(param_3 + 4) = puVar3[1];
      *(undefined4 *)(param_3 + 8) = puVar3[2];
      *(undefined4 *)(param_3 + 0xc) = puVar3[3];
      *(undefined4 *)(param_3 + 0x10) = puVar3[4];
      *(undefined4 *)(param_3 + 0x14) = puVar3[5];
      *(undefined4 *)(param_3 + 0x18) = puVar3[6];
      *(undefined4 *)(param_3 + 0x1c) = puVar3[7];
      *(undefined4 *)(param_3 + 0x20) = puVar3[8];
      *(undefined4 *)(param_3 + 0x24) = puVar3[9];
      *(undefined4 *)(param_3 + 0x28) = puVar3[10];
      *(undefined4 *)(param_3 + 0x2c) = puVar3[0xb];
      *(undefined4 *)(param_3 + 0x30) = puVar3[0xc];
      *(undefined4 *)(param_3 + 0x34) = puVar3[0xd];
      *(undefined4 *)(param_3 + 0x38) = puVar3[0xe];
      param_3[0x3c] = *(Inven_Item *)(puVar3 + 0xf);
      break;
    case 2:
      puVar3 = (undefined4 *)(*(int *)(this + 0x654) + param_2 * 0x3d);
      *(undefined4 *)param_3 = *puVar3;
      *(undefined4 *)(param_3 + 4) = puVar3[1];
      *(undefined4 *)(param_3 + 8) = puVar3[2];
      *(undefined4 *)(param_3 + 0xc) = puVar3[3];
      *(undefined4 *)(param_3 + 0x10) = puVar3[4];
      *(undefined4 *)(param_3 + 0x14) = puVar3[5];
      *(undefined4 *)(param_3 + 0x18) = puVar3[6];
      *(undefined4 *)(param_3 + 0x1c) = puVar3[7];
      *(undefined4 *)(param_3 + 0x20) = puVar3[8];
      *(undefined4 *)(param_3 + 0x24) = puVar3[9];
      *(undefined4 *)(param_3 + 0x28) = puVar3[10];
      *(undefined4 *)(param_3 + 0x2c) = puVar3[0xb];
      *(undefined4 *)(param_3 + 0x30) = puVar3[0xc];
      *(undefined4 *)(param_3 + 0x34) = puVar3[0xd];
      *(undefined4 *)(param_3 + 0x38) = puVar3[0xe];
      param_3[0x3c] = *(Inven_Item *)(puVar3 + 0xf);
      break;
    case 3:
      puVar3 = (undefined4 *)(*(int *)(this + 0x6e4) + param_2 * 0x3d);
      *(undefined4 *)param_3 = *puVar3;
      *(undefined4 *)(param_3 + 4) = puVar3[1];
      *(undefined4 *)(param_3 + 8) = puVar3[2];
      *(undefined4 *)(param_3 + 0xc) = puVar3[3];
      *(undefined4 *)(param_3 + 0x10) = puVar3[4];
      *(undefined4 *)(param_3 + 0x14) = puVar3[5];
      *(undefined4 *)(param_3 + 0x18) = puVar3[6];
      *(undefined4 *)(param_3 + 0x1c) = puVar3[7];
      *(undefined4 *)(param_3 + 0x20) = puVar3[8];
      *(undefined4 *)(param_3 + 0x24) = puVar3[9];
      *(undefined4 *)(param_3 + 0x28) = puVar3[10];
      *(undefined4 *)(param_3 + 0x2c) = puVar3[0xb];
      *(undefined4 *)(param_3 + 0x30) = puVar3[0xc];
      *(undefined4 *)(param_3 + 0x34) = puVar3[0xd];
      *(undefined4 *)(param_3 + 0x38) = puVar3[0xe];
      param_3[0x3c] = *(Inven_Item *)(puVar3 + 0xf);
      break;
    case 5:
      local_10 = CUser::GetCharacExpandData(*(CUser **)this,9);
      CExpandEquipslot::GetInvenSlot(&local_5c,local_10,5,param_2);
      *(undefined4 *)param_3 = local_5c;
      *(undefined4 *)(param_3 + 4) = local_58;
      *(undefined4 *)(param_3 + 8) = local_54;
      *(undefined4 *)(param_3 + 0xc) = local_50;
      *(undefined4 *)(param_3 + 0x10) = local_4c;
      *(undefined4 *)(param_3 + 0x14) = local_48;
      *(undefined4 *)(param_3 + 0x18) = local_44;
      *(undefined4 *)(param_3 + 0x1c) = local_40;
      *(undefined4 *)(param_3 + 0x20) = local_3c;
      *(undefined4 *)(param_3 + 0x24) = local_38;
      *(undefined4 *)(param_3 + 0x28) = local_34;
      *(undefined4 *)(param_3 + 0x2c) = local_30;
      *(undefined4 *)(param_3 + 0x30) = local_2c;
      *(undefined4 *)(param_3 + 0x34) = local_28;
      *(undefined4 *)(param_3 + 0x38) = local_24;
      param_3[0x3c] = local_20;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
