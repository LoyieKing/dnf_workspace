# StringResourceDelayedItem

`_ZN25StringResourceDelayedItemC1ERK14StringResourcei`

`StringResourceDelayedItem::StringResourceDelayedItem(StringResource const&, int)`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad52a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad52a2  _ZN25StringResourceDelayedItemC1ERK14StringResourcei
#           StringResourceDelayedItem::StringResourceDelayedItem(StringResource const&, int)
# range [0x08ad52a2, 0x08ad52d3]
08ad52a2 +0x00:  push   %ebp
08ad52a3 +0x01:  mov    %esp,%ebp
08ad52a5 +0x03:  sub    $0x18,%esp
08ad52a8 +0x06:  mov    0x8(%ebp),%eax
08ad52ab +0x09:  movl   $0x0,(%eax)
08ad52b1 +0x0f:  mov    0x8(%ebp),%eax
08ad52b4 +0x12:  add    $0x4,%eax
08ad52b7 +0x15:  mov    %eax,(%esp)
08ad52ba +0x18:  call   08ad69aa <_ZN10CharStringC1Ev>  ; CharString::CharString()
08ad52bf +0x1d:  mov    0x8(%ebp),%eax
08ad52c2 +0x20:  mov    0xc(%ebp),%edx
08ad52c5 +0x23:  mov    %edx,0x8(%eax)
08ad52c8 +0x26:  mov    0x8(%ebp),%eax
08ad52cb +0x29:  mov    0x10(%ebp),%edx
08ad52ce +0x2c:  mov    %edx,0xc(%eax)
08ad52d1 +0x2f:  leave
08ad52d2 +0x30:  ret
08ad52d3 +0x31:  nop
```

## 反编译 C

```c
// StringResourceDelayedItem::StringResourceDelayedItem @ 0x8ad52a2

/* StringResourceDelayedItem::StringResourceDelayedItem(StringResource const&, int) */

void __thiscall
StringResourceDelayedItem::StringResourceDelayedItem
          (StringResourceDelayedItem *this,StringResource *param_1,int param_2)

{
  *(undefined4 *)this = 0;
  CharString::CharString((CharString *)(this + 4));
  *(StringResource **)(this + 8) = param_1;
  *(int *)(this + 0xc) = param_2;
  return;
}
```
