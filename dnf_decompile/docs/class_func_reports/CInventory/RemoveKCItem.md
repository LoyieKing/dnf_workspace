# RemoveKCItem

`_ZN10CInventory12RemoveKCItemEP10Inven_ItemS1_`

`CInventory::RemoveKCItem(Inven_Item*, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a096` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a096  _ZN10CInventory12RemoveKCItemEP10Inven_ItemS1_
#           CInventory::RemoveKCItem(Inven_Item*, Inven_Item*)
# range [0x0850a096, 0x0850a297]
0850a096 +0x000:  push   %ebp
0850a097 +0x001:  mov    %esp,%ebp
0850a099 +0x003:  push   %ebx
0850a09a +0x004:  sub    $0x34,%esp
0850a09d +0x007:  movl   $0x0,-0x18(%ebp)
0850a0a4 +0x00e:  jmp    0850a187 <+0xf1>
0850a0a9 +0x013:  mov    -0x18(%ebp),%eax
0850a0ac +0x016:  imul   $0x3d,%eax,%eax
0850a0af +0x019:  add    0x8(%ebp),%eax
0850a0b2 +0x01c:  mov    0x2(%eax),%eax
0850a0b5 +0x01f:  test   %eax,%eax
0850a0b7 +0x021:  je     0850a183 <+0xed>
0850a0bd +0x027:  mov    -0x18(%ebp),%eax
0850a0c0 +0x02a:  imul   $0x3d,%eax,%eax
0850a0c3 +0x02d:  add    0x8(%ebp),%eax
0850a0c6 +0x030:  mov    0x2(%eax),%eax
0850a0c9 +0x033:  cmp    $0x1963,%eax
0850a0ce +0x038:  jbe    0850a17f <+0xe9>
0850a0d4 +0x03e:  mov    -0x18(%ebp),%eax
0850a0d7 +0x041:  imul   $0x3d,%eax,%eax
0850a0da +0x044:  add    0x8(%ebp),%eax
0850a0dd +0x047:  mov    0x2(%eax),%eax
0850a0e0 +0x04a:  cmp    $0x1b57,%eax
0850a0e5 +0x04f:  ja     0850a182 <+0xec>
0850a0eb +0x055:  mov    -0x18(%ebp),%eax
0850a0ee +0x058:  imul   $0x3d,%eax,%eax
0850a0f1 +0x05b:  add    0x8(%ebp),%eax
0850a0f4 +0x05e:  mov    0x2(%eax),%eax
0850a0f7 +0x061:  mov    %eax,%ebx
0850a0f9 +0x063:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850a0fe +0x068:  mov    %ebx,0x4(%esp)
0850a102 +0x06c:  mov    %eax,(%esp)
0850a105 +0x06f:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850a10a +0x074:  mov    %eax,-0x14(%ebp)
0850a10d +0x077:  cmpl   $0x0,-0x14(%ebp)
0850a111 +0x07b:  jne    0850a158 <+0xc2>
0850a113 +0x07d:  mov    -0x18(%ebp),%eax
0850a116 +0x080:  imul   $0x3d,%eax,%eax
0850a119 +0x083:  add    0x8(%ebp),%eax
0850a11c +0x086:  mov    0x2(%eax),%eax
0850a11f +0x089:  mov    -0x18(%ebp),%edx
0850a122 +0x08c:  mov    %edx,0x18(%esp)
0850a126 +0x090:  mov    %eax,0x14(%esp)
0850a12a +0x094:  movl   $"CInventory::RemoveKCItem No EquipItem(%d) Found loopcount(%d)",0x10(%esp)
0850a132 +0x09c:  movl   $0x23fe,0xc(%esp)
0850a13a +0x0a4:  movl   $&_ZZN10CInventory12RemoveKCItemEP10Inven_ItemS1_E19__PRETTY_FUNCTION__,0x8(%esp)
0850a142 +0x0ac:  movl   $"inventory.cpp",0x4(%esp)
0850a14a +0x0b4:  movl   $0x1,(%esp)
0850a151 +0x0bb:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850a156 +0x0c0:  jmp    0850a183 <+0xed>
0850a158 +0x0c2:  mov    -0x14(%ebp),%eax
0850a15b +0x0c5:  mov    %eax,(%esp)
0850a15e +0x0c8:  call   0822c83e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ee8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ee8
0850a163 +0x0cd:  test   %eax,%eax
0850a165 +0x0cf:  setne  %al
0850a168 +0x0d2:  test   %al,%al
0850a16a +0x0d4:  je     0850a183 <+0xed>
0850a16c +0x0d6:  mov    -0x18(%ebp),%eax
0850a16f +0x0d9:  imul   $0x3d,%eax,%eax
0850a172 +0x0dc:  add    0x8(%ebp),%eax
0850a175 +0x0df:  mov    %eax,(%esp)
0850a178 +0x0e2:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850a17d +0x0e7:  jmp    0850a183 <+0xed>
0850a17f +0x0e9:  nop
0850a180 +0x0ea:  jmp    0850a183 <+0xed>
0850a182 +0x0ec:  nop
0850a183 +0x0ed:  addl   $0x1,-0x18(%ebp)
0850a187 +0x0f1:  cmpl   $0x19,-0x18(%ebp)
0850a18b +0x0f5:  setle  %al
0850a18e +0x0f8:  test   %al,%al
0850a190 +0x0fa:  jne    0850a0a9 <+0x13>
0850a196 +0x100:  movl   $0x3,-0x10(%ebp)
0850a19d +0x107:  jmp    0850a280 <+0x1ea>
0850a1a2 +0x10c:  mov    -0x10(%ebp),%eax
0850a1a5 +0x10f:  imul   $0x3d,%eax,%eax
0850a1a8 +0x112:  add    0xc(%ebp),%eax
0850a1ab +0x115:  mov    0x2(%eax),%eax
0850a1ae +0x118:  test   %eax,%eax
0850a1b0 +0x11a:  je     0850a27c <+0x1e6>
0850a1b6 +0x120:  mov    -0x10(%ebp),%eax
0850a1b9 +0x123:  imul   $0x3d,%eax,%eax
0850a1bc +0x126:  add    0xc(%ebp),%eax
0850a1bf +0x129:  mov    0x2(%eax),%eax
0850a1c2 +0x12c:  cmp    $0x1963,%eax
0850a1c7 +0x131:  jbe    0850a278 <+0x1e2>
0850a1cd +0x137:  mov    -0x10(%ebp),%eax
0850a1d0 +0x13a:  imul   $0x3d,%eax,%eax
0850a1d3 +0x13d:  add    0xc(%ebp),%eax
0850a1d6 +0x140:  mov    0x2(%eax),%eax
0850a1d9 +0x143:  cmp    $0x1b57,%eax
0850a1de +0x148:  ja     0850a27b <+0x1e5>
0850a1e4 +0x14e:  mov    -0x10(%ebp),%eax
0850a1e7 +0x151:  imul   $0x3d,%eax,%eax
0850a1ea +0x154:  add    0xc(%ebp),%eax
0850a1ed +0x157:  mov    0x2(%eax),%eax
0850a1f0 +0x15a:  mov    %eax,%ebx
0850a1f2 +0x15c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850a1f7 +0x161:  mov    %ebx,0x4(%esp)
0850a1fb +0x165:  mov    %eax,(%esp)
0850a1fe +0x168:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0850a203 +0x16d:  mov    %eax,-0xc(%ebp)
0850a206 +0x170:  cmpl   $0x0,-0xc(%ebp)
0850a20a +0x174:  jne    0850a251 <+0x1bb>
0850a20c +0x176:  mov    -0x10(%ebp),%eax
0850a20f +0x179:  imul   $0x3d,%eax,%eax
0850a212 +0x17c:  add    0xc(%ebp),%eax
0850a215 +0x17f:  mov    0x2(%eax),%eax
0850a218 +0x182:  mov    -0x10(%ebp),%edx
0850a21b +0x185:  mov    %edx,0x18(%esp)
0850a21f +0x189:  mov    %eax,0x14(%esp)
0850a223 +0x18d:  movl   $"CInventory::RemoveKCItem No InvenItem(%d) Found loopcount(%d)",0x10(%esp)
0850a22b +0x195:  movl   $0x2416,0xc(%esp)
0850a233 +0x19d:  movl   $&_ZZN10CInventory12RemoveKCItemEP10Inven_ItemS1_E19__PRETTY_FUNCTION__,0x8(%esp)
0850a23b +0x1a5:  movl   $"inventory.cpp",0x4(%esp)
0850a243 +0x1ad:  movl   $0x1,(%esp)
0850a24a +0x1b4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0850a24f +0x1b9:  jmp    0850a27c <+0x1e6>
0850a251 +0x1bb:  mov    -0xc(%ebp),%eax
0850a254 +0x1be:  mov    %eax,(%esp)
0850a257 +0x1c1:  call   0822c83e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1ee8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1ee8
0850a25c +0x1c6:  test   %eax,%eax
0850a25e +0x1c8:  setne  %al
0850a261 +0x1cb:  test   %al,%al
0850a263 +0x1cd:  je     0850a27c <+0x1e6>
0850a265 +0x1cf:  mov    -0x10(%ebp),%eax
0850a268 +0x1d2:  imul   $0x3d,%eax,%eax
0850a26b +0x1d5:  add    0xc(%ebp),%eax
0850a26e +0x1d8:  mov    %eax,(%esp)
0850a271 +0x1db:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850a276 +0x1e0:  jmp    0850a27c <+0x1e6>
0850a278 +0x1e2:  nop
0850a279 +0x1e3:  jmp    0850a27c <+0x1e6>
0850a27b +0x1e5:  nop
0850a27c +0x1e6:  addl   $0x1,-0x10(%ebp)
0850a280 +0x1ea:  cmpl   $0x137,-0x10(%ebp)
0850a287 +0x1f1:  setle  %al
0850a28a +0x1f4:  test   %al,%al
0850a28c +0x1f6:  jne    0850a1a2 <+0x10c>
0850a292 +0x1fc:  add    $0x34,%esp
0850a295 +0x1ff:  pop    %ebx
0850a296 +0x200:  pop    %ebp
0850a297 +0x201:  ret
```

## 反编译 C

```c
// CInventory::RemoveKCItem @ 0x850a096

/* CInventory::RemoveKCItem(Inven_Item*, Inven_Item*) */

void CInventory::RemoveKCItem(Inven_Item *param_1,Inven_Item *param_2)

{
  CDataManager *pCVar1;
  CItem *pCVar2;
  int iVar3;
  int local_1c;
  int local_14;
  
  for (local_1c = 0; local_1c < 0x1a; local_1c = local_1c + 1) {
    if (((*(int *)(param_1 + local_1c * 0x3d + 2) != 0) &&
        (0x1963 < *(uint *)(param_1 + local_1c * 0x3d + 2))) &&
       (*(uint *)(param_1 + local_1c * 0x3d + 2) < 7000)) {
      iVar3 = *(int *)(param_1 + local_1c * 0x3d + 2);
      pCVar1 = (CDataManager *)G_CDataManager();
      pCVar2 = (CItem *)CDataManager::find_item(pCVar1,iVar3);
      if (pCVar2 == (CItem *)0x0) {
        LogManager::logFormat
                  (1,"inventory.cpp",
                   "static void CInventory::RemoveKCItem(Inven_Item*, Inven_Item*)",0x23fe,
                   "CInventory::RemoveKCItem No EquipItem(%d) Found loopcount(%d)",
                   *(undefined4 *)(param_1 + local_1c * 0x3d + 2),local_1c);
      }
      else {
        iVar3 = CItem::GetFinishPointPrice(pCVar2);
        if (iVar3 != 0) {
          Inven_Item::reset(param_1 + local_1c * 0x3d);
        }
      }
    }
  }
  for (local_14 = 3; local_14 < 0x138; local_14 = local_14 + 1) {
    if (((*(int *)(param_2 + local_14 * 0x3d + 2) != 0) &&
        (0x1963 < *(uint *)(param_2 + local_14 * 0x3d + 2))) &&
       (*(uint *)(param_2 + local_14 * 0x3d + 2) < 7000)) {
      iVar3 = *(int *)(param_2 + local_14 * 0x3d + 2);
      pCVar1 = (CDataManager *)G_CDataManager();
      pCVar2 = (CItem *)CDataManager::find_item(pCVar1,iVar3);
      if (pCVar2 == (CItem *)0x0) {
        LogManager::logFormat
                  (1,"inventory.cpp",
                   "static void CInventory::RemoveKCItem(Inven_Item*, Inven_Item*)",0x2416,
                   "CInventory::RemoveKCItem No InvenItem(%d) Found loopcount(%d)",
                   *(undefined4 *)(param_2 + local_14 * 0x3d + 2),local_14);
      }
      else {
        iVar3 = CItem::GetFinishPointPrice(pCVar2);
        if (iVar3 != 0) {
          Inven_Item::reset(param_2 + local_14 * 0x3d);
        }
      }
    }
  }
  return;
}
```
