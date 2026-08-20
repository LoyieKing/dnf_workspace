# getUname

`_ZN6Taiwan14GarenaAuthData8getUnameEv`

`Taiwan::GarenaAuthData::getUname()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08172fde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08172fde  _ZN6Taiwan14GarenaAuthData8getUnameEv
#           Taiwan::GarenaAuthData::getUname()
# range [0x08172fde, 0x08172fe9]
08172fde +0x00:  push   %ebp
08172fdf +0x01:  mov    %esp,%ebp
08172fe1 +0x03:  mov    0x8(%ebp),%eax
08172fe4 +0x06:  add    $0x4,%eax
08172fe7 +0x09:  pop    %ebp
08172fe8 +0x0a:  ret
08172fe9 +0x0b:  nop
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getUname @ 0x8172fde

/* Taiwan::GarenaAuthData::getUname() */

GarenaAuthData * __thiscall Taiwan::GarenaAuthData::getUname(GarenaAuthData *this)

{
  return this + 4;
}
```
