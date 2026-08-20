# ~StringResourceDelayedItem

`_ZN25StringResourceDelayedItemD1Ev`

`StringResourceDelayedItem::~StringResourceDelayedItem()`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad52d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad52d4  _ZN25StringResourceDelayedItemD1Ev
#           StringResourceDelayedItem::~StringResourceDelayedItem()
# range [0x08ad52d4, 0x08ad52e9]
08ad52d4 +0x00:  push   %ebp
08ad52d5 +0x01:  mov    %esp,%ebp
08ad52d7 +0x03:  sub    $0x18,%esp
08ad52da +0x06:  mov    0x8(%ebp),%eax
08ad52dd +0x09:  add    $0x4,%eax
08ad52e0 +0x0c:  mov    %eax,(%esp)
08ad52e3 +0x0f:  call   08ad6bba <_ZN10CharStringD1Ev>  ; CharString::~CharString()
08ad52e8 +0x14:  leave
08ad52e9 +0x15:  ret
```

## 反编译 C

```c
// StringResourceDelayedItem::~StringResourceDelayedItem @ 0x8ad52d4

/* StringResourceDelayedItem::~StringResourceDelayedItem() */

void __thiscall
StringResourceDelayedItem::~StringResourceDelayedItem(StringResourceDelayedItem *this)

{
  int in_stack_ffffffe8;
  
  CharString::~CharString((CharString *)(this + 4),in_stack_ffffffe8);
  return;
}
```
