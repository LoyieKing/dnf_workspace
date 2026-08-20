# update_item

`_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item`

`CInventory::update_item(INVEN_TYPE, int, Inven_Item)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085000ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085000ae  _ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item
#           CInventory::update_item(INVEN_TYPE, int, Inven_Item)
# range [0x085000ae, 0x085002df]
085000ae +0x000:  push   %ebp
085000af +0x001:  mov    %esp,%ebp
085000b1 +0x003:  sub    $0xc,%esp
085000b4 +0x006:  mov    0xc(%ebp),%eax
085000b7 +0x009:  mov    0x10(%ebp),%edx
085000ba +0x00c:  mov    %edx,0x8(%esp)
085000be +0x010:  mov    %eax,0x4(%esp)
085000c2 +0x014:  mov    0x8(%ebp),%eax
085000c5 +0x017:  mov    %eax,(%esp)
085000c8 +0x01a:  call   084fb01e <_ZNK10CInventory14CheckValidSlotEii>  ; CInventory::CheckValidSlot(int, int) const
085000cd +0x01f:  xor    $0x1,%eax
085000d0 +0x022:  test   %al,%al
085000d2 +0x024:  jne    085002dd <+0x22f>
085000d8 +0x02a:  mov    0xc(%ebp),%eax
085000db +0x02d:  cmp    $0x1,%eax
085000de +0x030:  je     0850017e <+0xd0>
085000e4 +0x036:  cmp    $0x1,%eax
085000e7 +0x039:  jg     085000f2 <+0x44>
085000e9 +0x03b:  test   %eax,%eax
085000eb +0x03d:  je     08500109 <+0x5b>
085000ed +0x03f:  jmp    085002de <+0x230>
085000f2 +0x044:  cmp    $0x2,%eax
085000f5 +0x047:  je     085001f5 <+0x147>
085000fb +0x04d:  cmp    $0x3,%eax
085000fe +0x050:  je     08500269 <+0x1bb>
08500104 +0x056:  jmp    085002de <+0x230>
08500109 +0x05b:  mov    0x10(%ebp),%eax
0850010c +0x05e:  mov    0x8(%ebp),%edx
0850010f +0x061:  imul   $0x3d,%eax,%eax
08500112 +0x064:  lea    (%edx,%eax,1),%eax
08500115 +0x067:  add    $0x10,%eax
08500118 +0x06a:  mov    0x14(%ebp),%edx
0850011b +0x06d:  mov    %edx,0xc(%eax)
0850011e +0x070:  mov    0x18(%ebp),%edx
08500121 +0x073:  mov    %edx,0x10(%eax)
08500124 +0x076:  mov    0x1c(%ebp),%edx
08500127 +0x079:  mov    %edx,0x14(%eax)
0850012a +0x07c:  mov    0x20(%ebp),%edx
0850012d +0x07f:  mov    %edx,0x18(%eax)
08500130 +0x082:  mov    0x24(%ebp),%edx
08500133 +0x085:  mov    %edx,0x1c(%eax)
08500136 +0x088:  mov    0x28(%ebp),%edx
08500139 +0x08b:  mov    %edx,0x20(%eax)
0850013c +0x08e:  mov    0x2c(%ebp),%edx
0850013f +0x091:  mov    %edx,0x24(%eax)
08500142 +0x094:  mov    0x30(%ebp),%edx
08500145 +0x097:  mov    %edx,0x28(%eax)
08500148 +0x09a:  mov    0x34(%ebp),%edx
0850014b +0x09d:  mov    %edx,0x2c(%eax)
0850014e +0x0a0:  mov    0x38(%ebp),%edx
08500151 +0x0a3:  mov    %edx,0x30(%eax)
08500154 +0x0a6:  mov    0x3c(%ebp),%edx
08500157 +0x0a9:  mov    %edx,0x34(%eax)
0850015a +0x0ac:  mov    0x40(%ebp),%edx
0850015d +0x0af:  mov    %edx,0x38(%eax)
08500160 +0x0b2:  mov    0x44(%ebp),%edx
08500163 +0x0b5:  mov    %edx,0x3c(%eax)
08500166 +0x0b8:  mov    0x48(%ebp),%edx
08500169 +0x0bb:  mov    %edx,0x40(%eax)
0850016c +0x0be:  mov    0x4c(%ebp),%edx
0850016f +0x0c1:  mov    %edx,0x44(%eax)
08500172 +0x0c4:  movzbl 0x50(%ebp),%edx
08500176 +0x0c8:  mov    %dl,0x48(%eax)
08500179 +0x0cb:  jmp    085002de <+0x230>
0850017e +0x0d0:  mov    0x8(%ebp),%eax
08500181 +0x0d3:  mov    0x650(%eax),%edx
08500187 +0x0d9:  mov    0x10(%ebp),%eax
0850018a +0x0dc:  imul   $0x3d,%eax,%eax
0850018d +0x0df:  lea    (%edx,%eax,1),%eax
08500190 +0x0e2:  mov    0x14(%ebp),%edx
08500193 +0x0e5:  mov    %edx,(%eax)
08500195 +0x0e7:  mov    0x18(%ebp),%edx
08500198 +0x0ea:  mov    %edx,0x4(%eax)
0850019b +0x0ed:  mov    0x1c(%ebp),%edx
0850019e +0x0f0:  mov    %edx,0x8(%eax)
085001a1 +0x0f3:  mov    0x20(%ebp),%edx
085001a4 +0x0f6:  mov    %edx,0xc(%eax)
085001a7 +0x0f9:  mov    0x24(%ebp),%edx
085001aa +0x0fc:  mov    %edx,0x10(%eax)
085001ad +0x0ff:  mov    0x28(%ebp),%edx
085001b0 +0x102:  mov    %edx,0x14(%eax)
085001b3 +0x105:  mov    0x2c(%ebp),%edx
085001b6 +0x108:  mov    %edx,0x18(%eax)
085001b9 +0x10b:  mov    0x30(%ebp),%edx
085001bc +0x10e:  mov    %edx,0x1c(%eax)
085001bf +0x111:  mov    0x34(%ebp),%edx
085001c2 +0x114:  mov    %edx,0x20(%eax)
085001c5 +0x117:  mov    0x38(%ebp),%edx
085001c8 +0x11a:  mov    %edx,0x24(%eax)
085001cb +0x11d:  mov    0x3c(%ebp),%edx
085001ce +0x120:  mov    %edx,0x28(%eax)
085001d1 +0x123:  mov    0x40(%ebp),%edx
085001d4 +0x126:  mov    %edx,0x2c(%eax)
085001d7 +0x129:  mov    0x44(%ebp),%edx
085001da +0x12c:  mov    %edx,0x30(%eax)
085001dd +0x12f:  mov    0x48(%ebp),%edx
085001e0 +0x132:  mov    %edx,0x34(%eax)
085001e3 +0x135:  mov    0x4c(%ebp),%edx
085001e6 +0x138:  mov    %edx,0x38(%eax)
085001e9 +0x13b:  movzbl 0x50(%ebp),%edx
085001ed +0x13f:  mov    %dl,0x3c(%eax)
085001f0 +0x142:  jmp    085002de <+0x230>
085001f5 +0x147:  mov    0x8(%ebp),%eax
085001f8 +0x14a:  mov    0x654(%eax),%edx
085001fe +0x150:  mov    0x10(%ebp),%eax
08500201 +0x153:  imul   $0x3d,%eax,%eax
08500204 +0x156:  lea    (%edx,%eax,1),%eax
08500207 +0x159:  mov    0x14(%ebp),%edx
0850020a +0x15c:  mov    %edx,(%eax)
0850020c +0x15e:  mov    0x18(%ebp),%edx
0850020f +0x161:  mov    %edx,0x4(%eax)
08500212 +0x164:  mov    0x1c(%ebp),%edx
08500215 +0x167:  mov    %edx,0x8(%eax)
08500218 +0x16a:  mov    0x20(%ebp),%edx
0850021b +0x16d:  mov    %edx,0xc(%eax)
0850021e +0x170:  mov    0x24(%ebp),%edx
08500221 +0x173:  mov    %edx,0x10(%eax)
08500224 +0x176:  mov    0x28(%ebp),%edx
08500227 +0x179:  mov    %edx,0x14(%eax)
0850022a +0x17c:  mov    0x2c(%ebp),%edx
0850022d +0x17f:  mov    %edx,0x18(%eax)
08500230 +0x182:  mov    0x30(%ebp),%edx
08500233 +0x185:  mov    %edx,0x1c(%eax)
08500236 +0x188:  mov    0x34(%ebp),%edx
08500239 +0x18b:  mov    %edx,0x20(%eax)
0850023c +0x18e:  mov    0x38(%ebp),%edx
0850023f +0x191:  mov    %edx,0x24(%eax)
08500242 +0x194:  mov    0x3c(%ebp),%edx
08500245 +0x197:  mov    %edx,0x28(%eax)
08500248 +0x19a:  mov    0x40(%ebp),%edx
0850024b +0x19d:  mov    %edx,0x2c(%eax)
0850024e +0x1a0:  mov    0x44(%ebp),%edx
08500251 +0x1a3:  mov    %edx,0x30(%eax)
08500254 +0x1a6:  mov    0x48(%ebp),%edx
08500257 +0x1a9:  mov    %edx,0x34(%eax)
0850025a +0x1ac:  mov    0x4c(%ebp),%edx
0850025d +0x1af:  mov    %edx,0x38(%eax)
08500260 +0x1b2:  movzbl 0x50(%ebp),%edx
08500264 +0x1b6:  mov    %dl,0x3c(%eax)
08500267 +0x1b9:  jmp    085002de <+0x230>
08500269 +0x1bb:  mov    0x8(%ebp),%eax
0850026c +0x1be:  mov    0x6e4(%eax),%edx
08500272 +0x1c4:  mov    0x10(%ebp),%eax
08500275 +0x1c7:  imul   $0x3d,%eax,%eax
08500278 +0x1ca:  lea    (%edx,%eax,1),%eax
0850027b +0x1cd:  mov    0x14(%ebp),%edx
0850027e +0x1d0:  mov    %edx,(%eax)
08500280 +0x1d2:  mov    0x18(%ebp),%edx
08500283 +0x1d5:  mov    %edx,0x4(%eax)
08500286 +0x1d8:  mov    0x1c(%ebp),%edx
08500289 +0x1db:  mov    %edx,0x8(%eax)
0850028c +0x1de:  mov    0x20(%ebp),%edx
0850028f +0x1e1:  mov    %edx,0xc(%eax)
08500292 +0x1e4:  mov    0x24(%ebp),%edx
08500295 +0x1e7:  mov    %edx,0x10(%eax)
08500298 +0x1ea:  mov    0x28(%ebp),%edx
0850029b +0x1ed:  mov    %edx,0x14(%eax)
0850029e +0x1f0:  mov    0x2c(%ebp),%edx
085002a1 +0x1f3:  mov    %edx,0x18(%eax)
085002a4 +0x1f6:  mov    0x30(%ebp),%edx
085002a7 +0x1f9:  mov    %edx,0x1c(%eax)
085002aa +0x1fc:  mov    0x34(%ebp),%edx
085002ad +0x1ff:  mov    %edx,0x20(%eax)
085002b0 +0x202:  mov    0x38(%ebp),%edx
085002b3 +0x205:  mov    %edx,0x24(%eax)
085002b6 +0x208:  mov    0x3c(%ebp),%edx
085002b9 +0x20b:  mov    %edx,0x28(%eax)
085002bc +0x20e:  mov    0x40(%ebp),%edx
085002bf +0x211:  mov    %edx,0x2c(%eax)
085002c2 +0x214:  mov    0x44(%ebp),%edx
085002c5 +0x217:  mov    %edx,0x30(%eax)
085002c8 +0x21a:  mov    0x48(%ebp),%edx
085002cb +0x21d:  mov    %edx,0x34(%eax)
085002ce +0x220:  mov    0x4c(%ebp),%edx
085002d1 +0x223:  mov    %edx,0x38(%eax)
085002d4 +0x226:  movzbl 0x50(%ebp),%edx
085002d8 +0x22a:  mov    %dl,0x3c(%eax)
085002db +0x22d:  jmp    085002de <+0x230>
085002dd +0x22f:  nop
085002de +0x230:  leave
085002df +0x231:  ret
```

## 反编译 C

```c
// CInventory::update_item @ 0x85000ae

/* CInventory::update_item(INVEN_TYPE, int, Inven_Item) */

void CInventory::update_item
               (CInventory *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
               undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
               undefined4 param_18,CInventory param_19)

{
  undefined4 *puVar1;
  char cVar2;
  
  cVar2 = CheckValidSlot(param_1,param_2,param_3);
  if (cVar2 == '\x01') {
    if (param_2 == 1) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x650) + param_3 * 0x3d);
      *puVar1 = param_4;
      puVar1[1] = param_5;
      puVar1[2] = param_6;
      puVar1[3] = param_7;
      puVar1[4] = param_8;
      puVar1[5] = param_9;
      puVar1[6] = param_10;
      puVar1[7] = param_11;
      puVar1[8] = param_12;
      puVar1[9] = param_13;
      puVar1[10] = param_14;
      puVar1[0xb] = param_15;
      puVar1[0xc] = param_16;
      puVar1[0xd] = param_17;
      puVar1[0xe] = param_18;
      *(CInventory *)(puVar1 + 0xf) = param_19;
    }
    else if (param_2 < 2) {
      if (param_2 == 0) {
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x1c) = param_4;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x20) = param_5;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x24) = param_6;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x28) = param_7;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x2c) = param_8;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x30) = param_9;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x34) = param_10;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x38) = param_11;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x3c) = param_12;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x40) = param_13;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x44) = param_14;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x48) = param_15;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x4c) = param_16;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x50) = param_17;
        *(undefined4 *)(param_1 + param_3 * 0x3d + 0x54) = param_18;
        param_1[param_3 * 0x3d + 0x58] = param_19;
      }
    }
    else if (param_2 == 2) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x654) + param_3 * 0x3d);
      *puVar1 = param_4;
      puVar1[1] = param_5;
      puVar1[2] = param_6;
      puVar1[3] = param_7;
      puVar1[4] = param_8;
      puVar1[5] = param_9;
      puVar1[6] = param_10;
      puVar1[7] = param_11;
      puVar1[8] = param_12;
      puVar1[9] = param_13;
      puVar1[10] = param_14;
      puVar1[0xb] = param_15;
      puVar1[0xc] = param_16;
      puVar1[0xd] = param_17;
      puVar1[0xe] = param_18;
      *(CInventory *)(puVar1 + 0xf) = param_19;
    }
    else if (param_2 == 3) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x6e4) + param_3 * 0x3d);
      *puVar1 = param_4;
      puVar1[1] = param_5;
      puVar1[2] = param_6;
      puVar1[3] = param_7;
      puVar1[4] = param_8;
      puVar1[5] = param_9;
      puVar1[6] = param_10;
      puVar1[7] = param_11;
      puVar1[8] = param_12;
      puVar1[9] = param_13;
      puVar1[10] = param_14;
      puVar1[0xb] = param_15;
      puVar1[0xc] = param_16;
      puVar1[0xd] = param_17;
      puVar1[0xe] = param_18;
      *(CInventory *)(puVar1 + 0xf) = param_19;
    }
  }
  return;
}
```
