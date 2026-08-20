# _push_newitem

`_ZN31Dispatcher_Compound_ExtreamItem13_push_newitemEv`

`Dispatcher_Compound_ExtreamItem::_push_newitem()`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_ExtreamItem` | `0x08225b54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08225b54  _ZN31Dispatcher_Compound_ExtreamItem13_push_newitemEv
#           Dispatcher_Compound_ExtreamItem::_push_newitem()
# range [0x08225b54, 0x08225c53]
08225b54 +0x00:  push   %ebp
08225b55 +0x01:  mov    %esp,%ebp
08225b57 +0x03:  sub    $0x58,%esp
08225b5a +0x06:  mov    0x8(%ebp),%eax
08225b5d +0x09:  mov    0xd0(%eax),%eax
08225b63 +0x0f:  mov    %eax,(%esp)
08225b66 +0x12:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08225b6b +0x17:  mov    %eax,%edx
08225b6d +0x19:  movl   $0x1,0x4c(%esp)
08225b75 +0x21:  movl   $0x1,0x48(%esp)
08225b7d +0x29:  movl   $0x30,0x44(%esp)
08225b85 +0x31:  mov    0x8(%ebp),%eax
08225b88 +0x34:  mov    0x90(%eax),%ecx
08225b8e +0x3a:  mov    %ecx,0x4(%esp)
08225b92 +0x3e:  mov    0x94(%eax),%ecx
08225b98 +0x44:  mov    %ecx,0x8(%esp)
08225b9c +0x48:  mov    0x98(%eax),%ecx
08225ba2 +0x4e:  mov    %ecx,0xc(%esp)
08225ba6 +0x52:  mov    0x9c(%eax),%ecx
08225bac +0x58:  mov    %ecx,0x10(%esp)
08225bb0 +0x5c:  mov    0xa0(%eax),%ecx
08225bb6 +0x62:  mov    %ecx,0x14(%esp)
08225bba +0x66:  mov    0xa4(%eax),%ecx
08225bc0 +0x6c:  mov    %ecx,0x18(%esp)
08225bc4 +0x70:  mov    0xa8(%eax),%ecx
08225bca +0x76:  mov    %ecx,0x1c(%esp)
08225bce +0x7a:  mov    0xac(%eax),%ecx
08225bd4 +0x80:  mov    %ecx,0x20(%esp)
08225bd8 +0x84:  mov    0xb0(%eax),%ecx
08225bde +0x8a:  mov    %ecx,0x24(%esp)
08225be2 +0x8e:  mov    0xb4(%eax),%ecx
08225be8 +0x94:  mov    %ecx,0x28(%esp)
08225bec +0x98:  mov    0xb8(%eax),%ecx
08225bf2 +0x9e:  mov    %ecx,0x2c(%esp)
08225bf6 +0xa2:  mov    0xbc(%eax),%ecx
08225bfc +0xa8:  mov    %ecx,0x30(%esp)
08225c00 +0xac:  mov    0xc0(%eax),%ecx
08225c06 +0xb2:  mov    %ecx,0x34(%esp)
08225c0a +0xb6:  mov    0xc4(%eax),%ecx
08225c10 +0xbc:  mov    %ecx,0x38(%esp)
08225c14 +0xc0:  mov    0xc8(%eax),%ecx
08225c1a +0xc6:  mov    %ecx,0x3c(%esp)
08225c1e +0xca:  movzbl 0xcc(%eax),%eax
08225c25 +0xd1:  mov    %al,0x40(%esp)
08225c29 +0xd5:  mov    %edx,(%esp)
08225c2c +0xd8:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08225c31 +0xdd:  mov    %eax,%edx
08225c33 +0xdf:  mov    0x8(%ebp),%eax
08225c36 +0xe2:  mov    %dx,0x6(%eax)
08225c3a +0xe6:  mov    0x8(%ebp),%eax
08225c3d +0xe9:  movzwl 0x6(%eax),%eax
08225c41 +0xed:  test   %ax,%ax
08225c44 +0xf0:  jns    08225c4d <+0xf9>
08225c46 +0xf2:  mov    $0x0,%eax
08225c4b +0xf7:  jmp    08225c52 <+0xfe>
08225c4d +0xf9:  mov    $0x1,%eax
08225c52 +0xfe:  leave
08225c53 +0xff:  ret
```

## 反编译 C

```c
// Dispatcher_Compound_ExtreamItem::_push_newitem @ 0x8225b54

/* Dispatcher_Compound_ExtreamItem::_push_newitem() */

bool __thiscall
Dispatcher_Compound_ExtreamItem::_push_newitem(Dispatcher_Compound_ExtreamItem *this)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0xd0));
  uVar1 = CInventory::insertItemIntoInventory
                    (uVar2,*(undefined4 *)(this + 0x90),*(undefined4 *)(this + 0x94),
                     *(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x9c),
                     *(undefined4 *)(this + 0xa0),*(undefined4 *)(this + 0xa4),
                     *(undefined4 *)(this + 0xa8),*(undefined4 *)(this + 0xac),
                     *(undefined4 *)(this + 0xb0),*(undefined4 *)(this + 0xb4),
                     *(undefined4 *)(this + 0xb8),*(undefined4 *)(this + 0xbc),
                     *(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 0xc4),
                     *(undefined4 *)(this + 200),this[0xcc],0x30,1,1);
  *(undefined2 *)(this + 6) = uVar1;
  return -1 < *(short *)(this + 6);
}
```
