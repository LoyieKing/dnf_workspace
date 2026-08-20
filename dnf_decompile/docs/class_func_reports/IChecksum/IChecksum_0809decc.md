# IChecksum

`_ZN9IChecksumC1ERKS_`

`IChecksum::IChecksum(IChecksum const&)`

| 类 | 地址 |
|---|---|
| `IChecksum` | `0x0809decc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0809decc  _ZN9IChecksumC1ERKS_
#           IChecksum::IChecksum(IChecksum const&)
# range [0x0809decc, 0x0809dee5]
0809decc +0x00:  push   %ebp
0809decd +0x01:  mov    %esp,%ebp
0809decf +0x03:  mov    0x8(%ebp),%eax
0809ded2 +0x06:  movl   $&_ZTV9IChecksum+0x8,(%eax)
0809ded8 +0x0c:  mov    0xc(%ebp),%eax
0809dedb +0x0f:  mov    0x4(%eax),%edx
0809dede +0x12:  mov    0x8(%ebp),%eax
0809dee1 +0x15:  mov    %edx,0x4(%eax)
0809dee4 +0x18:  pop    %ebp
0809dee5 +0x19:  ret
```

## 反编译 C

```c
// IChecksum::IChecksum @ 0x809decc

/* IChecksum::IChecksum(IChecksum const&) */

void __thiscall IChecksum::IChecksum(IChecksum *this,IChecksum *param_1)

{
  *(undefined ***)this = &PTR__IChecksum_08b13bc8;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  return;
}
```
