# setPatchTime

`_ZN6Taiwan14GarenaAuthData12setPatchTimeEj`

`Taiwan::GarenaAuthData::setPatchTime(unsigned int)`

| 类 | 地址 |
|---|---|
| `Taiwan::GarenaAuthData` | `0x08173034` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08173034  _ZN6Taiwan14GarenaAuthData12setPatchTimeEj
#           Taiwan::GarenaAuthData::setPatchTime(unsigned int)
# range [0x08173034, 0x08173041]
08173034 +0x00:  push   %ebp
08173035 +0x01:  mov    %esp,%ebp
08173037 +0x03:  mov    0x8(%ebp),%eax
0817303a +0x06:  mov    0xc(%ebp),%edx
0817303d +0x09:  mov    %edx,0x64(%eax)
08173040 +0x0c:  pop    %ebp
08173041 +0x0d:  ret
```

## 反编译 C

```c
// Taiwan::GarenaAuthData::setPatchTime @ 0x8173034

/* Taiwan::GarenaAuthData::setPatchTime(unsigned int) */

void __thiscall Taiwan::GarenaAuthData::setPatchTime(GarenaAuthData *this,uint param_1)

{
  *(uint *)(this + 100) = param_1;
  return;
}
```
