# tryInsertInvenItemIntoQuickSlot

`_ZNK10CInventory31tryInsertInvenItemIntoQuickSlotE10Inven_Item`

`CInventory::tryInsertInvenItemIntoQuickSlot(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501b70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501b70  _ZNK10CInventory31tryInsertInvenItemIntoQuickSlotE10Inven_Item
#           CInventory::tryInsertInvenItemIntoQuickSlot(Inven_Item) const
# range [0x08501b70, 0x08501bf5]
08501b70 +0x00:  push   %ebp
08501b71 +0x01:  mov    %esp,%ebp
08501b73 +0x03:  sub    $0x28,%esp
08501b76 +0x06:  lea    0xc(%ebp),%eax
08501b79 +0x09:  mov    %eax,(%esp)
08501b7c +0x0c:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08501b81 +0x11:  xor    $0x1,%eax
08501b84 +0x14:  test   %al,%al
08501b86 +0x16:  je     08501ba8 <+0x38>
08501b88 +0x18:  mov    0x13(%ebp),%edx
08501b8b +0x1b:  mov    0xe(%ebp),%eax
08501b8e +0x1e:  mov    %edx,0x4(%esp)
08501b92 +0x22:  mov    %eax,(%esp)
08501b95 +0x25:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08501b9a +0x2a:  xor    $0x1,%eax
08501b9d +0x2d:  test   %al,%al
08501b9f +0x2f:  je     08501ba8 <+0x38>
08501ba1 +0x31:  mov    $0x1,%eax
08501ba6 +0x36:  jmp    08501bad <+0x3d>
08501ba8 +0x38:  mov    $0x0,%eax
08501bad +0x3d:  test   %al,%al
08501baf +0x3f:  je     08501bb8 <+0x48>
08501bb1 +0x41:  mov    $0xfffffff6,%eax
08501bb6 +0x46:  jmp    08501bf3 <+0x83>
08501bb8 +0x48:  movl   $0x3,-0xc(%ebp)
08501bbf +0x4f:  jmp    08501be3 <+0x73>
08501bc1 +0x51:  mov    0x8(%ebp),%eax
08501bc4 +0x54:  mov    0x650(%eax),%edx
08501bca +0x5a:  mov    -0xc(%ebp),%eax
08501bcd +0x5d:  imul   $0x3d,%eax,%eax
08501bd0 +0x60:  lea    (%edx,%eax,1),%eax
08501bd3 +0x63:  mov    0x2(%eax),%eax
08501bd6 +0x66:  test   %eax,%eax
08501bd8 +0x68:  jne    08501bdf <+0x6f>
08501bda +0x6a:  mov    -0xc(%ebp),%eax
08501bdd +0x6d:  jmp    08501bf3 <+0x83>
08501bdf +0x6f:  addl   $0x1,-0xc(%ebp)
08501be3 +0x73:  cmpl   $0x8,-0xc(%ebp)
08501be7 +0x77:  setle  %al
08501bea +0x7a:  test   %al,%al
08501bec +0x7c:  jne    08501bc1 <+0x51>
08501bee +0x7e:  mov    $0xfffffffe,%eax
08501bf3 +0x83:  leave
08501bf4 +0x84:  ret
08501bf5 +0x85:  nop
```

## 反编译 C

> （该函数反编译 C 未生成）
