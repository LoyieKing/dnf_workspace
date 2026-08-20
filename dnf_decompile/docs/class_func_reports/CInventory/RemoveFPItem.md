# RemoveFPItem

`_ZN10CInventory12RemoveFPItemEP10Inven_ItemS1_`

`CInventory::RemoveFPItem(Inven_Item*, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a2bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a2bc  _ZN10CInventory12RemoveFPItemEP10Inven_ItemS1_
#           CInventory::RemoveFPItem(Inven_Item*, Inven_Item*)
# range [0x0850a2bc, 0x0850a391]
0850a2bc +0x00:  push   %ebp
0850a2bd +0x01:  mov    %esp,%ebp
0850a2bf +0x03:  sub    $0x28,%esp
0850a2c2 +0x06:  movl   $0x0,-0x10(%ebp)
0850a2c9 +0x0d:  jmp    0850a31c <+0x60>
0850a2cb +0x0f:  mov    -0x10(%ebp),%eax
0850a2ce +0x12:  imul   $0x3d,%eax,%eax
0850a2d1 +0x15:  add    0x8(%ebp),%eax
0850a2d4 +0x18:  mov    0x2(%eax),%eax
0850a2d7 +0x1b:  test   %eax,%eax
0850a2d9 +0x1d:  je     0850a318 <+0x5c>
0850a2db +0x1f:  mov    -0x10(%ebp),%eax
0850a2de +0x22:  imul   $0x3d,%eax,%eax
0850a2e1 +0x25:  add    0x8(%ebp),%eax
0850a2e4 +0x28:  mov    0x2(%eax),%eax
0850a2e7 +0x2b:  cmp    $0x1963,%eax
0850a2ec +0x30:  jbe    0850a314 <+0x58>
0850a2ee +0x32:  mov    -0x10(%ebp),%eax
0850a2f1 +0x35:  imul   $0x3d,%eax,%eax
0850a2f4 +0x38:  add    0x8(%ebp),%eax
0850a2f7 +0x3b:  mov    0x2(%eax),%eax
0850a2fa +0x3e:  cmp    $0x1b57,%eax
0850a2ff +0x43:  ja     0850a317 <+0x5b>
0850a301 +0x45:  mov    -0x10(%ebp),%eax
0850a304 +0x48:  imul   $0x3d,%eax,%eax
0850a307 +0x4b:  add    0x8(%ebp),%eax
0850a30a +0x4e:  mov    %eax,(%esp)
0850a30d +0x51:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850a312 +0x56:  jmp    0850a318 <+0x5c>
0850a314 +0x58:  nop
0850a315 +0x59:  jmp    0850a318 <+0x5c>
0850a317 +0x5b:  nop
0850a318 +0x5c:  addl   $0x1,-0x10(%ebp)
0850a31c +0x60:  cmpl   $0x19,-0x10(%ebp)
0850a320 +0x64:  setle  %al
0850a323 +0x67:  test   %al,%al
0850a325 +0x69:  jne    0850a2cb <+0xf>
0850a327 +0x6b:  movl   $0x3,-0xc(%ebp)
0850a32e +0x72:  jmp    0850a381 <+0xc5>
0850a330 +0x74:  mov    -0xc(%ebp),%eax
0850a333 +0x77:  imul   $0x3d,%eax,%eax
0850a336 +0x7a:  add    0xc(%ebp),%eax
0850a339 +0x7d:  mov    0x2(%eax),%eax
0850a33c +0x80:  test   %eax,%eax
0850a33e +0x82:  je     0850a37d <+0xc1>
0850a340 +0x84:  mov    -0xc(%ebp),%eax
0850a343 +0x87:  imul   $0x3d,%eax,%eax
0850a346 +0x8a:  add    0xc(%ebp),%eax
0850a349 +0x8d:  mov    0x2(%eax),%eax
0850a34c +0x90:  cmp    $0x1963,%eax
0850a351 +0x95:  jbe    0850a379 <+0xbd>
0850a353 +0x97:  mov    -0xc(%ebp),%eax
0850a356 +0x9a:  imul   $0x3d,%eax,%eax
0850a359 +0x9d:  add    0xc(%ebp),%eax
0850a35c +0xa0:  mov    0x2(%eax),%eax
0850a35f +0xa3:  cmp    $0x1b57,%eax
0850a364 +0xa8:  ja     0850a37c <+0xc0>
0850a366 +0xaa:  mov    -0xc(%ebp),%eax
0850a369 +0xad:  imul   $0x3d,%eax,%eax
0850a36c +0xb0:  add    0xc(%ebp),%eax
0850a36f +0xb3:  mov    %eax,(%esp)
0850a372 +0xb6:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
0850a377 +0xbb:  jmp    0850a37d <+0xc1>
0850a379 +0xbd:  nop
0850a37a +0xbe:  jmp    0850a37d <+0xc1>
0850a37c +0xc0:  nop
0850a37d +0xc1:  addl   $0x1,-0xc(%ebp)
0850a381 +0xc5:  cmpl   $0x137,-0xc(%ebp)
0850a388 +0xcc:  setle  %al
0850a38b +0xcf:  test   %al,%al
0850a38d +0xd1:  jne    0850a330 <+0x74>
0850a38f +0xd3:  leave
0850a390 +0xd4:  ret
0850a391 +0xd5:  nop
```

## 反编译 C

```c
// CInventory::RemoveFPItem @ 0x850a2bc

/* CInventory::RemoveFPItem(Inven_Item*, Inven_Item*) */

void CInventory::RemoveFPItem(Inven_Item *param_1,Inven_Item *param_2)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 0x1a; local_14 = local_14 + 1) {
    if (((*(int *)(param_1 + local_14 * 0x3d + 2) != 0) &&
        (0x1963 < *(uint *)(param_1 + local_14 * 0x3d + 2))) &&
       (*(uint *)(param_1 + local_14 * 0x3d + 2) < 7000)) {
      Inven_Item::reset(param_1 + local_14 * 0x3d);
    }
  }
  for (local_10 = 3; local_10 < 0x138; local_10 = local_10 + 1) {
    if (((*(int *)(param_2 + local_10 * 0x3d + 2) != 0) &&
        (0x1963 < *(uint *)(param_2 + local_10 * 0x3d + 2))) &&
       (*(uint *)(param_2 + local_10 * 0x3d + 2) < 7000)) {
      Inven_Item::reset(param_2 + local_10 * 0x3d);
    }
  }
  return;
}
```
