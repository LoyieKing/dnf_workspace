# setScript

`_ZN10BlueMarble9setScriptEP23BlueMarbleScriptManager`

`BlueMarble::setScript(BlueMarbleScriptManager*)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8ca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8ca8  _ZN10BlueMarble9setScriptEP23BlueMarbleScriptManager
#           BlueMarble::setScript(BlueMarbleScriptManager*)
# range [0x080d8ca8, 0x080d8cb5]
080d8ca8 +0x00:  push   %ebp
080d8ca9 +0x01:  mov    %esp,%ebp
080d8cab +0x03:  mov    0x8(%ebp),%eax
080d8cae +0x06:  mov    0xc(%ebp),%edx
080d8cb1 +0x09:  mov    %edx,0x38(%eax)
080d8cb4 +0x0c:  pop    %ebp
080d8cb5 +0x0d:  ret
```

## 反编译 C

```c
// BlueMarble::setScript @ 0x80d8ca8

/* BlueMarble::setScript(BlueMarbleScriptManager*) */

void __thiscall BlueMarble::setScript(BlueMarble *this,BlueMarbleScriptManager *param_1)

{
  *(BlueMarbleScriptManager **)(this + 0x38) = param_1;
  return;
}
```
