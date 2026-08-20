# verify

`_ZN14CStackableItem6verifyEv`

`CStackableItem::verify()`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850fa14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850fa14  _ZN14CStackableItem6verifyEv
#           CStackableItem::verify()
# range [0x0850fa14, 0x0850fa89]
0850fa14 +0x00:  push   %ebp
0850fa15 +0x01:  mov    %esp,%ebp
0850fa17 +0x03:  sub    $0x18,%esp
0850fa1a +0x06:  mov    0x8(%ebp),%eax
0850fa1d +0x09:  mov    0x6c(%eax),%eax
0850fa20 +0x0c:  test   %eax,%eax
0850fa22 +0x0e:  je     0850fa3b <+0x27>
0850fa24 +0x10:  mov    0x8(%ebp),%eax
0850fa27 +0x13:  mov    %eax,(%esp)
0850fa2a +0x16:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
0850fa2f +0x1b:  cmp    $0x1,%eax
0850fa32 +0x1e:  je     0850fa3b <+0x27>
0850fa34 +0x20:  mov    $0x1,%eax
0850fa39 +0x25:  jmp    0850fa40 <+0x2c>
0850fa3b +0x27:  mov    $0x0,%eax
0850fa40 +0x2c:  test   %al,%al
0850fa42 +0x2e:  je     0850fa4b <+0x37>
0850fa44 +0x30:  mov    $0x0,%eax
0850fa49 +0x35:  jmp    0850fa87 <+0x73>
0850fa4b +0x37:  mov    0x8(%ebp),%eax
0850fa4e +0x3a:  mov    0x2b0(%eax),%eax
0850fa54 +0x40:  cmp    $0xf,%eax
0850fa57 +0x43:  je     0850fa67 <+0x53>
0850fa59 +0x45:  mov    0x8(%ebp),%eax
0850fa5c +0x48:  mov    0x2b0(%eax),%eax
0850fa62 +0x4e:  cmp    $0x10,%eax
0850fa65 +0x51:  jne    0850fa82 <+0x6e>
0850fa67 +0x53:  mov    0x8(%ebp),%eax
0850fa6a +0x56:  add    $0x240,%eax
0850fa6f +0x5b:  mov    %eax,(%esp)
0850fa72 +0x5e:  call   08517ad6 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x410b>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x410b
0850fa77 +0x63:  test   %al,%al
0850fa79 +0x65:  je     0850fa82 <+0x6e>
0850fa7b +0x67:  mov    $0x0,%eax
0850fa80 +0x6c:  jmp    0850fa87 <+0x73>
0850fa82 +0x6e:  mov    $0x1,%eax
0850fa87 +0x73:  leave
0850fa88 +0x74:  ret
0850fa89 +0x75:  nop
```

## 反编译 C

```c
// CStackableItem::verify @ 0x850fa14

/* CStackableItem::verify() */

undefined4 __thiscall CStackableItem::verify(CStackableItem *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(int *)(this + 0x6c) == 0) || (iVar3 = getStackableLimit(this), iVar3 == 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0;
  }
  else {
    if (((*(int *)(this + 0x2b0) == 0xf) || (*(int *)(this + 0x2b0) == 0x10)) &&
       (cVar2 = std::vector<stStackableBoosterElement_t,std::allocator<stStackableBoosterElement_t>>
                ::empty(), cVar2 != '\0')) {
      return 0;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
