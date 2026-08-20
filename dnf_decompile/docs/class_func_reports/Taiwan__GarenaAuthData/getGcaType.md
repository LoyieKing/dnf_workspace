# getGcaType

`_ZN6Taiwan14GarenaAuthData10getGcaTypeEv`

`Taiwan::GarenaAuthData::getGcaType()`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08173008` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173008  _ZN6Taiwan14GarenaAuthData10getGcaTypeEv
#           Taiwan::GarenaAuthData::getGcaType()
# range [0x08173008, 0x08173021]
08173008 +0x00:  push   %ebp
08173009 +0x01:  mov    %esp,%ebp
0817300b +0x03:  sub    $0x18,%esp
0817300e +0x06:  mov    0x8(%ebp),%eax
08173011 +0x09:  movzwl 0x28(%eax),%eax
08173015 +0x0d:  movzwl %ax,%eax
08173018 +0x10:  mov    %eax,(%esp)
0817301b +0x13:  call   0807de90 <_init+0x788>
08173020 +0x18:  leave
08173021 +0x19:  ret
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::getGcaType @ 0x8173008

/* Taiwan::GarenaAuthData::getGcaType() */

void __thiscall Taiwan::GarenaAuthData::getGcaType(GarenaAuthData *this)

{
  ntohs(*(uint16_t *)(this + 0x28));
  return;
}
```
