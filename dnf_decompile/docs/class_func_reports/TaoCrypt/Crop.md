# Crop

`_ZN8TaoCrypt4CropEjj`

`TaoCrypt::Crop(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08767580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767580  _ZN8TaoCrypt4CropEjj
#           TaoCrypt::Crop(unsigned int, unsigned int)
# range [0x08767580, 0x0876759c]
08767580 +0x00:  push   %ebp
08767581 +0x01:  mov    %esp,%ebp
08767583 +0x03:  mov    0xc(%ebp),%ecx
08767586 +0x06:  mov    0x8(%ebp),%eax
08767589 +0x09:  cmp    $0x1f,%ecx
0876758c +0x0c:  ja     0876759a <+0x1a>
0876758e +0x0e:  mov    $0x1,%edx
08767593 +0x13:  shl    %cl,%edx
08767595 +0x15:  sub    $0x1,%edx
08767598 +0x18:  and    %edx,%eax
0876759a +0x1a:  pop    %ebp
0876759b +0x1b:  ret
0876759c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Crop @ 0x8767580

/* TaoCrypt::Crop(unsigned int, unsigned int) */

uint TaoCrypt::Crop(uint param_1,uint param_2)

{
  if (param_2 < 0x20) {
    param_1 = param_1 & (1 << ((byte)param_2 & 0x1f)) - 1U;
  }
  return param_1;
}
```
