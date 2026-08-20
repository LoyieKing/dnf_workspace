# IsAvatarOptionChangeItem

`_ZNK14CStackableItem24IsAvatarOptionChangeItemEv`

`CStackableItem::IsAvatarOptionChangeItem() const`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850eb42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850eb42  _ZNK14CStackableItem24IsAvatarOptionChangeItemEv
#           CStackableItem::IsAvatarOptionChangeItem() const
# range [0x0850eb42, 0x0850eb51]
0850eb42 +0x00:  push   %ebp
0850eb43 +0x01:  mov    %esp,%ebp
0850eb45 +0x03:  mov    0x8(%ebp),%eax
0850eb48 +0x06:  movzbl 0x398(%eax),%eax
0850eb4f +0x0d:  pop    %ebp
0850eb50 +0x0e:  ret
0850eb51 +0x0f:  nop
```

## 反编译 C

```c
// CStackableItem::IsAvatarOptionChangeItem @ 0x850eb42

/* CStackableItem::IsAvatarOptionChangeItem() const */

CStackableItem __thiscall CStackableItem::IsAvatarOptionChangeItem(CStackableItem *this)

{
  return this[0x398];
}
```
