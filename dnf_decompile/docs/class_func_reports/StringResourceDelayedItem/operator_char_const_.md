# operator char const*

`_ZNK25StringResourceDelayedItemcvPKcEv`

`StringResourceDelayedItem::operator char const*() const`

| 类 | 地址 |
|---|---|
| `StringResourceDelayedItem` | `0x08ad5368` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad5368  _ZNK25StringResourceDelayedItemcvPKcEv
#           StringResourceDelayedItem::operator char const*() const
# range [0x08ad5368, 0x08ad5389]
08ad5368 +0x00:  push   %ebp
08ad5369 +0x01:  mov    %esp,%ebp
08ad536b +0x03:  sub    $0x18,%esp
08ad536e +0x06:  mov    0x8(%ebp),%eax
08ad5371 +0x09:  mov    (%eax),%eax
08ad5373 +0x0b:  test   %eax,%eax
08ad5375 +0x0d:  jne    08ad5382 <+0x1a>
08ad5377 +0x0f:  mov    0x8(%ebp),%eax
08ad537a +0x12:  mov    %eax,(%esp)
08ad537d +0x15:  call   08ad538a <_ZN25StringResourceDelayedItem12makeCacheStrEv>  ; StringResourceDelayedItem::makeCacheStr()
08ad5382 +0x1a:  mov    0x8(%ebp),%eax
08ad5385 +0x1d:  mov    (%eax),%eax
08ad5387 +0x1f:  leave
08ad5388 +0x20:  ret
08ad5389 +0x21:  nop
```

## 反编译 C

```c
// StringResourceDelayedItem::operator @ 0x8ad5368

/* StringResourceDelayedItem::operator char const*() const */

char * __thiscall StringResourceDelayedItem::operator_cast_to_char_(StringResourceDelayedItem *this)

{
  if (*(int *)this == 0) {
    makeCacheStr(this);
  }
  return *(char **)this;
}
```
