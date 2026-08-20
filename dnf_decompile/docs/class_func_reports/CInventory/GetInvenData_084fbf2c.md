# GetInvenData

`_ZNK10CInventory12GetInvenDataEiR10Inven_Item`

`CInventory::GetInvenData(int, Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fbf2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fbf2c  _ZNK10CInventory12GetInvenDataEiR10Inven_Item
#           CInventory::GetInvenData(int, Inven_Item&) const
# range [0x084fbf2c, 0x084fc1dd]
084fbf2c +0x000:  push   %ebp
084fbf2d +0x001:  mov    %esp,%ebp
084fbf2f +0x003:  sub    $0x38,%esp
084fbf32 +0x006:  mov    0xc(%ebp),%eax
084fbf35 +0x009:  mov    %eax,0x4(%esp)
084fbf39 +0x00d:  mov    0x8(%ebp),%eax
084fbf3c +0x010:  mov    %eax,(%esp)
084fbf3f +0x013:  call   085018d2 <_ZNK10CInventory11GetItemTypeEi>  ; CInventory::GetItemType(int) const
084fbf44 +0x018:  mov    %eax,-0x18(%ebp)
084fbf47 +0x01b:  cmpl   $0x0,-0x18(%ebp)
084fbf4b +0x01f:  jne    084fbf57 <+0x2b>
084fbf4d +0x021:  mov    $0xffffffff,%eax
084fbf52 +0x026:  jmp    084fc1dc <+0x2b0>
084fbf57 +0x02b:  lea    -0x20(%ebp),%eax
084fbf5a +0x02e:  mov    %eax,0xc(%esp)
084fbf5e +0x032:  lea    -0x1c(%ebp),%eax
084fbf61 +0x035:  mov    %eax,0x8(%esp)
084fbf65 +0x039:  mov    -0x18(%ebp),%eax
084fbf68 +0x03c:  mov    %eax,0x4(%esp)
084fbf6c +0x040:  mov    0x8(%ebp),%eax
084fbf6f +0x043:  mov    %eax,(%esp)
084fbf72 +0x046:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
084fbf77 +0x04b:  mov    -0x18(%ebp),%eax
084fbf7a +0x04e:  mov    %eax,(%esp)
084fbf7d +0x051:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
084fbf82 +0x056:  test   %al,%al
084fbf84 +0x058:  je     084fc04b <+0x11f>
084fbf8a +0x05e:  mov    -0x1c(%ebp),%eax
084fbf8d +0x061:  mov    %eax,-0x14(%ebp)
084fbf90 +0x064:  jmp    084fc030 <+0x104>
084fbf95 +0x069:  mov    0x8(%ebp),%eax
084fbf98 +0x06c:  mov    0x6e4(%eax),%edx
084fbf9e +0x072:  mov    -0x14(%ebp),%eax
084fbfa1 +0x075:  imul   $0x3d,%eax,%eax
084fbfa4 +0x078:  lea    (%edx,%eax,1),%eax
084fbfa7 +0x07b:  mov    0x2(%eax),%edx
084fbfaa +0x07e:  mov    0xc(%ebp),%eax
084fbfad +0x081:  cmp    %eax,%edx
084fbfaf +0x083:  jne    084fc02c <+0x100>
084fbfb1 +0x085:  mov    0x8(%ebp),%eax
084fbfb4 +0x088:  mov    0x6e4(%eax),%edx
084fbfba +0x08e:  mov    -0x14(%ebp),%eax
084fbfbd +0x091:  imul   $0x3d,%eax,%eax
084fbfc0 +0x094:  add    %eax,%edx
084fbfc2 +0x096:  mov    0x10(%ebp),%eax
084fbfc5 +0x099:  mov    (%edx),%ecx
084fbfc7 +0x09b:  mov    %ecx,(%eax)
084fbfc9 +0x09d:  mov    0x4(%edx),%ecx
084fbfcc +0x0a0:  mov    %ecx,0x4(%eax)
084fbfcf +0x0a3:  mov    0x8(%edx),%ecx
084fbfd2 +0x0a6:  mov    %ecx,0x8(%eax)
084fbfd5 +0x0a9:  mov    0xc(%edx),%ecx
084fbfd8 +0x0ac:  mov    %ecx,0xc(%eax)
084fbfdb +0x0af:  mov    0x10(%edx),%ecx
084fbfde +0x0b2:  mov    %ecx,0x10(%eax)
084fbfe1 +0x0b5:  mov    0x14(%edx),%ecx
084fbfe4 +0x0b8:  mov    %ecx,0x14(%eax)
084fbfe7 +0x0bb:  mov    0x18(%edx),%ecx
084fbfea +0x0be:  mov    %ecx,0x18(%eax)
084fbfed +0x0c1:  mov    0x1c(%edx),%ecx
084fbff0 +0x0c4:  mov    %ecx,0x1c(%eax)
084fbff3 +0x0c7:  mov    0x20(%edx),%ecx
084fbff6 +0x0ca:  mov    %ecx,0x20(%eax)
084fbff9 +0x0cd:  mov    0x24(%edx),%ecx
084fbffc +0x0d0:  mov    %ecx,0x24(%eax)
084fbfff +0x0d3:  mov    0x28(%edx),%ecx
084fc002 +0x0d6:  mov    %ecx,0x28(%eax)
084fc005 +0x0d9:  mov    0x2c(%edx),%ecx
084fc008 +0x0dc:  mov    %ecx,0x2c(%eax)
084fc00b +0x0df:  mov    0x30(%edx),%ecx
084fc00e +0x0e2:  mov    %ecx,0x30(%eax)
084fc011 +0x0e5:  mov    0x34(%edx),%ecx
084fc014 +0x0e8:  mov    %ecx,0x34(%eax)
084fc017 +0x0eb:  mov    0x38(%edx),%ecx
084fc01a +0x0ee:  mov    %ecx,0x38(%eax)
084fc01d +0x0f1:  movzbl 0x3c(%edx),%edx
084fc021 +0x0f5:  mov    %dl,0x3c(%eax)
084fc024 +0x0f8:  mov    -0x14(%ebp),%eax
084fc027 +0x0fb:  jmp    084fc1dc <+0x2b0>
084fc02c +0x100:  addl   $0x1,-0x14(%ebp)
084fc030 +0x104:  mov    -0x20(%ebp),%eax
084fc033 +0x107:  cmp    %eax,-0x14(%ebp)
084fc036 +0x10a:  setle  %al
084fc039 +0x10d:  test   %al,%al
084fc03b +0x10f:  jne    084fbf95 <+0x69>
084fc041 +0x115:  mov    $0xffffffff,%eax
084fc046 +0x11a:  jmp    084fc1dc <+0x2b0>
084fc04b +0x11f:  mov    -0x1c(%ebp),%eax
084fc04e +0x122:  mov    %eax,-0x10(%ebp)
084fc051 +0x125:  jmp    084fc0f1 <+0x1c5>
084fc056 +0x12a:  mov    0x8(%ebp),%eax
084fc059 +0x12d:  mov    0x650(%eax),%edx
084fc05f +0x133:  mov    -0x10(%ebp),%eax
084fc062 +0x136:  imul   $0x3d,%eax,%eax
084fc065 +0x139:  lea    (%edx,%eax,1),%eax
084fc068 +0x13c:  mov    0x2(%eax),%edx
084fc06b +0x13f:  mov    0xc(%ebp),%eax
084fc06e +0x142:  cmp    %eax,%edx
084fc070 +0x144:  jne    084fc0ed <+0x1c1>
084fc072 +0x146:  mov    0x8(%ebp),%eax
084fc075 +0x149:  mov    0x650(%eax),%edx
084fc07b +0x14f:  mov    -0x10(%ebp),%eax
084fc07e +0x152:  imul   $0x3d,%eax,%eax
084fc081 +0x155:  add    %eax,%edx
084fc083 +0x157:  mov    0x10(%ebp),%eax
084fc086 +0x15a:  mov    (%edx),%ecx
084fc088 +0x15c:  mov    %ecx,(%eax)
084fc08a +0x15e:  mov    0x4(%edx),%ecx
084fc08d +0x161:  mov    %ecx,0x4(%eax)
084fc090 +0x164:  mov    0x8(%edx),%ecx
084fc093 +0x167:  mov    %ecx,0x8(%eax)
084fc096 +0x16a:  mov    0xc(%edx),%ecx
084fc099 +0x16d:  mov    %ecx,0xc(%eax)
084fc09c +0x170:  mov    0x10(%edx),%ecx
084fc09f +0x173:  mov    %ecx,0x10(%eax)
084fc0a2 +0x176:  mov    0x14(%edx),%ecx
084fc0a5 +0x179:  mov    %ecx,0x14(%eax)
084fc0a8 +0x17c:  mov    0x18(%edx),%ecx
084fc0ab +0x17f:  mov    %ecx,0x18(%eax)
084fc0ae +0x182:  mov    0x1c(%edx),%ecx
084fc0b1 +0x185:  mov    %ecx,0x1c(%eax)
084fc0b4 +0x188:  mov    0x20(%edx),%ecx
084fc0b7 +0x18b:  mov    %ecx,0x20(%eax)
084fc0ba +0x18e:  mov    0x24(%edx),%ecx
084fc0bd +0x191:  mov    %ecx,0x24(%eax)
084fc0c0 +0x194:  mov    0x28(%edx),%ecx
084fc0c3 +0x197:  mov    %ecx,0x28(%eax)
084fc0c6 +0x19a:  mov    0x2c(%edx),%ecx
084fc0c9 +0x19d:  mov    %ecx,0x2c(%eax)
084fc0cc +0x1a0:  mov    0x30(%edx),%ecx
084fc0cf +0x1a3:  mov    %ecx,0x30(%eax)
084fc0d2 +0x1a6:  mov    0x34(%edx),%ecx
084fc0d5 +0x1a9:  mov    %ecx,0x34(%eax)
084fc0d8 +0x1ac:  mov    0x38(%edx),%ecx
084fc0db +0x1af:  mov    %ecx,0x38(%eax)
084fc0de +0x1b2:  movzbl 0x3c(%edx),%edx
084fc0e2 +0x1b6:  mov    %dl,0x3c(%eax)
084fc0e5 +0x1b9:  mov    -0x10(%ebp),%eax
084fc0e8 +0x1bc:  jmp    084fc1dc <+0x2b0>
084fc0ed +0x1c1:  addl   $0x1,-0x10(%ebp)
084fc0f1 +0x1c5:  mov    -0x20(%ebp),%eax
084fc0f4 +0x1c8:  cmp    %eax,-0x10(%ebp)
084fc0f7 +0x1cb:  setle  %al
084fc0fa +0x1ce:  test   %al,%al
084fc0fc +0x1d0:  jne    084fc056 <+0x12a>
084fc102 +0x1d6:  lea    -0x20(%ebp),%eax
084fc105 +0x1d9:  mov    %eax,0xc(%esp)
084fc109 +0x1dd:  lea    -0x1c(%ebp),%eax
084fc10c +0x1e0:  mov    %eax,0x8(%esp)
084fc110 +0x1e4:  movl   $0x0,0x4(%esp)
084fc118 +0x1ec:  mov    0x8(%ebp),%eax
084fc11b +0x1ef:  mov    %eax,(%esp)
084fc11e +0x1f2:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
084fc123 +0x1f7:  mov    -0x1c(%ebp),%eax
084fc126 +0x1fa:  mov    %eax,-0xc(%ebp)
084fc129 +0x1fd:  jmp    084fc1c6 <+0x29a>
084fc12e +0x202:  mov    0x8(%ebp),%eax
084fc131 +0x205:  mov    0x650(%eax),%edx
084fc137 +0x20b:  mov    -0xc(%ebp),%eax
084fc13a +0x20e:  imul   $0x3d,%eax,%eax
084fc13d +0x211:  lea    (%edx,%eax,1),%eax
084fc140 +0x214:  mov    0x2(%eax),%edx
084fc143 +0x217:  mov    0xc(%ebp),%eax
084fc146 +0x21a:  cmp    %eax,%edx
084fc148 +0x21c:  jne    084fc1c2 <+0x296>
084fc14a +0x21e:  mov    0x8(%ebp),%eax
084fc14d +0x221:  mov    0x650(%eax),%edx
084fc153 +0x227:  mov    -0xc(%ebp),%eax
084fc156 +0x22a:  imul   $0x3d,%eax,%eax
084fc159 +0x22d:  add    %eax,%edx
084fc15b +0x22f:  mov    0x10(%ebp),%eax
084fc15e +0x232:  mov    (%edx),%ecx
084fc160 +0x234:  mov    %ecx,(%eax)
084fc162 +0x236:  mov    0x4(%edx),%ecx
084fc165 +0x239:  mov    %ecx,0x4(%eax)
084fc168 +0x23c:  mov    0x8(%edx),%ecx
084fc16b +0x23f:  mov    %ecx,0x8(%eax)
084fc16e +0x242:  mov    0xc(%edx),%ecx
084fc171 +0x245:  mov    %ecx,0xc(%eax)
084fc174 +0x248:  mov    0x10(%edx),%ecx
084fc177 +0x24b:  mov    %ecx,0x10(%eax)
084fc17a +0x24e:  mov    0x14(%edx),%ecx
084fc17d +0x251:  mov    %ecx,0x14(%eax)
084fc180 +0x254:  mov    0x18(%edx),%ecx
084fc183 +0x257:  mov    %ecx,0x18(%eax)
084fc186 +0x25a:  mov    0x1c(%edx),%ecx
084fc189 +0x25d:  mov    %ecx,0x1c(%eax)
084fc18c +0x260:  mov    0x20(%edx),%ecx
084fc18f +0x263:  mov    %ecx,0x20(%eax)
084fc192 +0x266:  mov    0x24(%edx),%ecx
084fc195 +0x269:  mov    %ecx,0x24(%eax)
084fc198 +0x26c:  mov    0x28(%edx),%ecx
084fc19b +0x26f:  mov    %ecx,0x28(%eax)
084fc19e +0x272:  mov    0x2c(%edx),%ecx
084fc1a1 +0x275:  mov    %ecx,0x2c(%eax)
084fc1a4 +0x278:  mov    0x30(%edx),%ecx
084fc1a7 +0x27b:  mov    %ecx,0x30(%eax)
084fc1aa +0x27e:  mov    0x34(%edx),%ecx
084fc1ad +0x281:  mov    %ecx,0x34(%eax)
084fc1b0 +0x284:  mov    0x38(%edx),%ecx
084fc1b3 +0x287:  mov    %ecx,0x38(%eax)
084fc1b6 +0x28a:  movzbl 0x3c(%edx),%edx
084fc1ba +0x28e:  mov    %dl,0x3c(%eax)
084fc1bd +0x291:  mov    -0xc(%ebp),%eax
084fc1c0 +0x294:  jmp    084fc1dc <+0x2b0>
084fc1c2 +0x296:  addl   $0x1,-0xc(%ebp)
084fc1c6 +0x29a:  mov    -0x20(%ebp),%eax
084fc1c9 +0x29d:  cmp    %eax,-0xc(%ebp)
084fc1cc +0x2a0:  setle  %al
084fc1cf +0x2a3:  test   %al,%al
084fc1d1 +0x2a5:  jne    084fc12e <+0x202>
084fc1d7 +0x2ab:  mov    $0xffffffff,%eax
084fc1dc +0x2b0:  leave
084fc1dd +0x2b1:  ret
```

## 反编译 C

```c
// CInventory::GetInvenData @ 0x84fbf2c

/* CInventory::GetInvenData(int, Inven_Item&) const */

int __thiscall CInventory::GetInvenData(CInventory *this,int param_1,Inven_Item *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = GetItemType(this,param_1);
  if (local_1c != 0) {
    StartEndPos(this,local_1c,&local_20,&local_24);
    cVar1 = IsCreatureItemType(local_1c);
    if (cVar1 == '\0') {
      for (local_14 = local_20; local_14 <= local_24; local_14 = local_14 + 1) {
        if (*(int *)(*(int *)(this + 0x650) + local_14 * 0x3d + 2) == param_1) {
          puVar2 = (undefined4 *)(*(int *)(this + 0x650) + local_14 * 0x3d);
          *(undefined4 *)param_2 = *puVar2;
          *(undefined4 *)(param_2 + 4) = puVar2[1];
          *(undefined4 *)(param_2 + 8) = puVar2[2];
          *(undefined4 *)(param_2 + 0xc) = puVar2[3];
          *(undefined4 *)(param_2 + 0x10) = puVar2[4];
          *(undefined4 *)(param_2 + 0x14) = puVar2[5];
          *(undefined4 *)(param_2 + 0x18) = puVar2[6];
          *(undefined4 *)(param_2 + 0x1c) = puVar2[7];
          *(undefined4 *)(param_2 + 0x20) = puVar2[8];
          *(undefined4 *)(param_2 + 0x24) = puVar2[9];
          *(undefined4 *)(param_2 + 0x28) = puVar2[10];
          *(undefined4 *)(param_2 + 0x2c) = puVar2[0xb];
          *(undefined4 *)(param_2 + 0x30) = puVar2[0xc];
          *(undefined4 *)(param_2 + 0x34) = puVar2[0xd];
          *(undefined4 *)(param_2 + 0x38) = puVar2[0xe];
          param_2[0x3c] = *(Inven_Item *)(puVar2 + 0xf);
          return local_14;
        }
      }
      StartEndPos(this,0,&local_20,&local_24);
      for (local_10 = local_20; local_10 <= local_24; local_10 = local_10 + 1) {
        if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_1) {
          puVar2 = (undefined4 *)(*(int *)(this + 0x650) + local_10 * 0x3d);
          *(undefined4 *)param_2 = *puVar2;
          *(undefined4 *)(param_2 + 4) = puVar2[1];
          *(undefined4 *)(param_2 + 8) = puVar2[2];
          *(undefined4 *)(param_2 + 0xc) = puVar2[3];
          *(undefined4 *)(param_2 + 0x10) = puVar2[4];
          *(undefined4 *)(param_2 + 0x14) = puVar2[5];
          *(undefined4 *)(param_2 + 0x18) = puVar2[6];
          *(undefined4 *)(param_2 + 0x1c) = puVar2[7];
          *(undefined4 *)(param_2 + 0x20) = puVar2[8];
          *(undefined4 *)(param_2 + 0x24) = puVar2[9];
          *(undefined4 *)(param_2 + 0x28) = puVar2[10];
          *(undefined4 *)(param_2 + 0x2c) = puVar2[0xb];
          *(undefined4 *)(param_2 + 0x30) = puVar2[0xc];
          *(undefined4 *)(param_2 + 0x34) = puVar2[0xd];
          *(undefined4 *)(param_2 + 0x38) = puVar2[0xe];
          param_2[0x3c] = *(Inven_Item *)(puVar2 + 0xf);
          return local_10;
        }
      }
    }
    else {
      for (local_18 = local_20; local_18 <= local_24; local_18 = local_18 + 1) {
        if (*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 2) == param_1) {
          puVar2 = (undefined4 *)(*(int *)(this + 0x6e4) + local_18 * 0x3d);
          *(undefined4 *)param_2 = *puVar2;
          *(undefined4 *)(param_2 + 4) = puVar2[1];
          *(undefined4 *)(param_2 + 8) = puVar2[2];
          *(undefined4 *)(param_2 + 0xc) = puVar2[3];
          *(undefined4 *)(param_2 + 0x10) = puVar2[4];
          *(undefined4 *)(param_2 + 0x14) = puVar2[5];
          *(undefined4 *)(param_2 + 0x18) = puVar2[6];
          *(undefined4 *)(param_2 + 0x1c) = puVar2[7];
          *(undefined4 *)(param_2 + 0x20) = puVar2[8];
          *(undefined4 *)(param_2 + 0x24) = puVar2[9];
          *(undefined4 *)(param_2 + 0x28) = puVar2[10];
          *(undefined4 *)(param_2 + 0x2c) = puVar2[0xb];
          *(undefined4 *)(param_2 + 0x30) = puVar2[0xc];
          *(undefined4 *)(param_2 + 0x34) = puVar2[0xd];
          *(undefined4 *)(param_2 + 0x38) = puVar2[0xe];
          param_2[0x3c] = *(Inven_Item *)(puVar2 + 0xf);
          return local_18;
        }
      }
    }
  }
  return -1;
}
```
