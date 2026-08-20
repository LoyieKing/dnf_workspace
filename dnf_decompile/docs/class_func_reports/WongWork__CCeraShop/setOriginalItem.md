# setOriginalItem

`_ZN8WongWork9CCeraShop15setOriginalItemEi`

`WongWork::CCeraShop::setOriginalItem(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08327ee6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08327ee6  _ZN8WongWork9CCeraShop15setOriginalItemEi
#           WongWork::CCeraShop::setOriginalItem(int)
# range [0x08327ee6, 0x08327ef3]
08327ee6 +0x00:  push   %ebp
08327ee7 +0x01:  mov    %esp,%ebp
08327ee9 +0x03:  mov    0x8(%ebp),%eax
08327eec +0x06:  mov    0xc(%ebp),%edx
08327eef +0x09:  mov    %edx,0x4(%eax)
08327ef2 +0x0c:  pop    %ebp
08327ef3 +0x0d:  ret
```

## 反编译 C

```c
// WongWork::CCeraShop::setOriginalItem @ 0x8327ee6

/* WongWork::CCeraShop::setOriginalItem(int) */

void __thiscall WongWork::CCeraShop::setOriginalItem(CCeraShop *this,int param_1)

{
  *(int *)(this + 4) = param_1;
  return;
}
```
