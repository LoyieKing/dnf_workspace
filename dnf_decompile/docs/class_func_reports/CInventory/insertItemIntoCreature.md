# insertItemIntoCreature

`_ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb`

`CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a86a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a86a  _ZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbb
#           CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)
# range [0x0850a86a, 0x0850aaa3]
0850a86a +0x000:  push   %ebp
0850a86b +0x001:  mov    %esp,%ebp
0850a86d +0x003:  sub    $0x78,%esp
0850a870 +0x006:  mov    0x14(%ebp),%edx
0850a873 +0x009:  mov    0x18(%ebp),%eax
0850a876 +0x00c:  mov    %dl,-0x1c(%ebp)
0850a879 +0x00f:  mov    %al,-0x20(%ebp)
0850a87c +0x012:  movl   $0x0,-0xc(%ebp)
0850a883 +0x019:  mov    0xc(%ebp),%eax
0850a886 +0x01c:  movzbl 0x1(%eax),%eax
0850a88a +0x020:  cmp    $0x7,%al
0850a88c +0x022:  jne    0850a927 <+0xbd>
0850a892 +0x028:  movzbl -0x1c(%ebp),%eax
0850a896 +0x02c:  mov    %eax,0x48(%esp)
0850a89a +0x030:  mov    0x10(%ebp),%eax
0850a89d +0x033:  mov    %eax,0x44(%esp)
0850a8a1 +0x037:  mov    0xc(%ebp),%eax
0850a8a4 +0x03a:  mov    (%eax),%edx
0850a8a6 +0x03c:  mov    %edx,0x4(%esp)
0850a8aa +0x040:  mov    0x4(%eax),%edx
0850a8ad +0x043:  mov    %edx,0x8(%esp)
0850a8b1 +0x047:  mov    0x8(%eax),%edx
0850a8b4 +0x04a:  mov    %edx,0xc(%esp)
0850a8b8 +0x04e:  mov    0xc(%eax),%edx
0850a8bb +0x051:  mov    %edx,0x10(%esp)
0850a8bf +0x055:  mov    0x10(%eax),%edx
0850a8c2 +0x058:  mov    %edx,0x14(%esp)
0850a8c6 +0x05c:  mov    0x14(%eax),%edx
0850a8c9 +0x05f:  mov    %edx,0x18(%esp)
0850a8cd +0x063:  mov    0x18(%eax),%edx
0850a8d0 +0x066:  mov    %edx,0x1c(%esp)
0850a8d4 +0x06a:  mov    0x1c(%eax),%edx
0850a8d7 +0x06d:  mov    %edx,0x20(%esp)
0850a8db +0x071:  mov    0x20(%eax),%edx
0850a8de +0x074:  mov    %edx,0x24(%esp)
0850a8e2 +0x078:  mov    0x24(%eax),%edx
0850a8e5 +0x07b:  mov    %edx,0x28(%esp)
0850a8e9 +0x07f:  mov    0x28(%eax),%edx
0850a8ec +0x082:  mov    %edx,0x2c(%esp)
0850a8f0 +0x086:  mov    0x2c(%eax),%edx
0850a8f3 +0x089:  mov    %edx,0x30(%esp)
0850a8f7 +0x08d:  mov    0x30(%eax),%edx
0850a8fa +0x090:  mov    %edx,0x34(%esp)
0850a8fe +0x094:  mov    0x34(%eax),%edx
0850a901 +0x097:  mov    %edx,0x38(%esp)
0850a905 +0x09b:  mov    0x38(%eax),%edx
0850a908 +0x09e:  mov    %edx,0x3c(%esp)
0850a90c +0x0a2:  movzbl 0x3c(%eax),%eax
0850a910 +0x0a6:  mov    %al,0x40(%esp)
0850a914 +0x0aa:  mov    0x8(%ebp),%eax
0850a917 +0x0ad:  mov    %eax,(%esp)
0850a91a +0x0b0:  call   0850a52c <_ZN10CInventory31insertItemIntoCreatureStackableE10Inven_Item14eItemAddReasonb>  ; CInventory::insertItemIntoCreatureStackable(Inven_Item, eItemAddReason, bool)
0850a91f +0x0b5:  mov    %eax,-0xc(%ebp)
0850a922 +0x0b8:  jmp    0850aa9f <+0x235>
0850a927 +0x0bd:  mov    0xc(%ebp),%eax
0850a92a +0x0c0:  movzbl 0x1(%eax),%eax
0850a92e +0x0c4:  cmp    $0x5,%al
0850a930 +0x0c6:  jne    0850a9cb <+0x161>
0850a936 +0x0cc:  movzbl -0x1c(%ebp),%eax
0850a93a +0x0d0:  mov    %eax,0x48(%esp)
0850a93e +0x0d4:  mov    0x10(%ebp),%eax
0850a941 +0x0d7:  mov    %eax,0x44(%esp)
0850a945 +0x0db:  mov    0xc(%ebp),%eax
0850a948 +0x0de:  mov    (%eax),%edx
0850a94a +0x0e0:  mov    %edx,0x4(%esp)
0850a94e +0x0e4:  mov    0x4(%eax),%edx
0850a951 +0x0e7:  mov    %edx,0x8(%esp)
0850a955 +0x0eb:  mov    0x8(%eax),%edx
0850a958 +0x0ee:  mov    %edx,0xc(%esp)
0850a95c +0x0f2:  mov    0xc(%eax),%edx
0850a95f +0x0f5:  mov    %edx,0x10(%esp)
0850a963 +0x0f9:  mov    0x10(%eax),%edx
0850a966 +0x0fc:  mov    %edx,0x14(%esp)
0850a96a +0x100:  mov    0x14(%eax),%edx
0850a96d +0x103:  mov    %edx,0x18(%esp)
0850a971 +0x107:  mov    0x18(%eax),%edx
0850a974 +0x10a:  mov    %edx,0x1c(%esp)
0850a978 +0x10e:  mov    0x1c(%eax),%edx
0850a97b +0x111:  mov    %edx,0x20(%esp)
0850a97f +0x115:  mov    0x20(%eax),%edx
0850a982 +0x118:  mov    %edx,0x24(%esp)
0850a986 +0x11c:  mov    0x24(%eax),%edx
0850a989 +0x11f:  mov    %edx,0x28(%esp)
0850a98d +0x123:  mov    0x28(%eax),%edx
0850a990 +0x126:  mov    %edx,0x2c(%esp)
0850a994 +0x12a:  mov    0x2c(%eax),%edx
0850a997 +0x12d:  mov    %edx,0x30(%esp)
0850a99b +0x131:  mov    0x30(%eax),%edx
0850a99e +0x134:  mov    %edx,0x34(%esp)
0850a9a2 +0x138:  mov    0x34(%eax),%edx
0850a9a5 +0x13b:  mov    %edx,0x38(%esp)
0850a9a9 +0x13f:  mov    0x38(%eax),%edx
0850a9ac +0x142:  mov    %edx,0x3c(%esp)
0850a9b0 +0x146:  movzbl 0x3c(%eax),%eax
0850a9b4 +0x14a:  mov    %al,0x40(%esp)
0850a9b8 +0x14e:  mov    0x8(%ebp),%eax
0850a9bb +0x151:  mov    %eax,(%esp)
0850a9be +0x154:  call   0850a762 <_ZN10CInventory31insertItemIntoCreatureEquipmentE10Inven_Item14eItemAddReasonb>  ; CInventory::insertItemIntoCreatureEquipment(Inven_Item, eItemAddReason, bool)
0850a9c3 +0x159:  mov    %eax,-0xc(%ebp)
0850a9c6 +0x15c:  jmp    0850aa9f <+0x235>
0850a9cb +0x161:  mov    0xc(%ebp),%eax
0850a9ce +0x164:  movzbl 0x1(%eax),%eax
0850a9d2 +0x168:  cmp    $0x6,%al
0850a9d4 +0x16a:  jne    0850aa6c <+0x202>
0850a9da +0x170:  movzbl -0x1c(%ebp),%eax
0850a9de +0x174:  mov    %eax,0x48(%esp)
0850a9e2 +0x178:  mov    0x10(%ebp),%eax
0850a9e5 +0x17b:  mov    %eax,0x44(%esp)
0850a9e9 +0x17f:  mov    0xc(%ebp),%eax
0850a9ec +0x182:  mov    (%eax),%edx
0850a9ee +0x184:  mov    %edx,0x4(%esp)
0850a9f2 +0x188:  mov    0x4(%eax),%edx
0850a9f5 +0x18b:  mov    %edx,0x8(%esp)
0850a9f9 +0x18f:  mov    0x8(%eax),%edx
0850a9fc +0x192:  mov    %edx,0xc(%esp)
0850aa00 +0x196:  mov    0xc(%eax),%edx
0850aa03 +0x199:  mov    %edx,0x10(%esp)
0850aa07 +0x19d:  mov    0x10(%eax),%edx
0850aa0a +0x1a0:  mov    %edx,0x14(%esp)
0850aa0e +0x1a4:  mov    0x14(%eax),%edx
0850aa11 +0x1a7:  mov    %edx,0x18(%esp)
0850aa15 +0x1ab:  mov    0x18(%eax),%edx
0850aa18 +0x1ae:  mov    %edx,0x1c(%esp)
0850aa1c +0x1b2:  mov    0x1c(%eax),%edx
0850aa1f +0x1b5:  mov    %edx,0x20(%esp)
0850aa23 +0x1b9:  mov    0x20(%eax),%edx
0850aa26 +0x1bc:  mov    %edx,0x24(%esp)
0850aa2a +0x1c0:  mov    0x24(%eax),%edx
0850aa2d +0x1c3:  mov    %edx,0x28(%esp)
0850aa31 +0x1c7:  mov    0x28(%eax),%edx
0850aa34 +0x1ca:  mov    %edx,0x2c(%esp)
0850aa38 +0x1ce:  mov    0x2c(%eax),%edx
0850aa3b +0x1d1:  mov    %edx,0x30(%esp)
0850aa3f +0x1d5:  mov    0x30(%eax),%edx
0850aa42 +0x1d8:  mov    %edx,0x34(%esp)
0850aa46 +0x1dc:  mov    0x34(%eax),%edx
0850aa49 +0x1df:  mov    %edx,0x38(%esp)
0850aa4d +0x1e3:  mov    0x38(%eax),%edx
0850aa50 +0x1e6:  mov    %edx,0x3c(%esp)
0850aa54 +0x1ea:  movzbl 0x3c(%eax),%eax
0850aa58 +0x1ee:  mov    %al,0x40(%esp)
0850aa5c +0x1f2:  mov    0x8(%ebp),%eax
0850aa5f +0x1f5:  mov    %eax,(%esp)
0850aa62 +0x1f8:  call   0850a7c4 <_ZN10CInventory31insertItemIntoArtifactEquipmentE10Inven_Item14eItemAddReasonb>  ; CInventory::insertItemIntoArtifactEquipment(Inven_Item, eItemAddReason, bool)
0850aa67 +0x1fd:  mov    %eax,-0xc(%ebp)
0850aa6a +0x200:  jmp    0850aa9f <+0x235>
0850aa6c +0x202:  movl   $"History ERROR, unknown inven_Item type, insertItemIntoCreature ",0x10(%esp)
0850aa74 +0x20a:  movl   $0x2549,0xc(%esp)
0850aa7c +0x212:  movl   $&_ZZN10CInventory22insertItemIntoCreatureER10Inven_Item14eItemAddReasonbbE19__PRETTY_FUNCTION__,0x8(%esp)
0850aa84 +0x21a:  movl   $"inventory.cpp",0x4(%esp)
0850aa8c +0x222:  movl   $0x1,(%esp)
0850aa93 +0x229:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850aa98 +0x22e:  mov    $0xffffffff,%eax
0850aa9d +0x233:  jmp    0850aaa2 <+0x238>
0850aa9f +0x235:  mov    -0xc(%ebp),%eax
0850aaa2 +0x238:  leave
0850aaa3 +0x239:  ret
```

## 反编译 C

```c
// CInventory::insertItemIntoCreature @ 0x850a86a

/* CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool) */

undefined4
CInventory::insertItemIntoCreature
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_2 + 1) == '\a') {
    uVar1 = insertItemIntoCreatureStackable
                      (param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                       param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],
                       param_2[0xc],param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf),param_3
                       ,param_4);
  }
  else if (*(char *)((int)param_2 + 1) == '\x05') {
    uVar1 = insertItemIntoCreatureEquipment
                      (param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                       param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],
                       param_2[0xc],param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf),param_3
                       ,param_4);
  }
  else if (*(char *)((int)param_2 + 1) == '\x06') {
    uVar1 = insertItemIntoArtifactEquipment
                      (param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                       param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],
                       param_2[0xc],param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf),param_3
                       ,param_4);
  }
  else {
    LogManager::logFormat
              (1,"inventory.cpp",
               "int CInventory::insertItemIntoCreature(Inven_Item&, eItemAddReason, bool, bool)",
               0x2549,"History ERROR, unknown inven_Item type, insertItemIntoCreature ");
    uVar1 = 0xffffffff;
  }
  return uVar1;
}
```
