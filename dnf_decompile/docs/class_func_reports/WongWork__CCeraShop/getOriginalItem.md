# getOriginalItem

`_ZN8WongWork9CCeraShop15getOriginalItemEv`

`WongWork::CCeraShop::getOriginalItem()`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327ef4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327ef4  _ZN8WongWork9CCeraShop15getOriginalItemEv
#           WongWork::CCeraShop::getOriginalItem()
# range [0x08327ef4, 0x08327f0f]
08327ef4 +0x00:  push   %ebp
08327ef5 +0x01:  mov    %esp,%ebp
08327ef7 +0x03:  mov    0x8(%ebp),%eax
08327efa +0x06:  mov    0x4(%eax),%eax
08327efd +0x09:  test   %eax,%eax
08327eff +0x0b:  jle    08327f09 <+0x15>
08327f01 +0x0d:  mov    0x8(%ebp),%eax
08327f04 +0x10:  mov    0x4(%eax),%eax
08327f07 +0x13:  jmp    08327f0e <+0x1a>
08327f09 +0x15:  mov    $0x0,%eax
08327f0e +0x1a:  pop    %ebp
08327f0f +0x1b:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::getOriginalItem @ 0x8327ef4

/* WongWork::CCeraShop::getOriginalItem() */

undefined4 __thiscall WongWork::CCeraShop::getOriginalItem(CCeraShop *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 4) < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + 4);
  }
  return uVar1;
}
```
