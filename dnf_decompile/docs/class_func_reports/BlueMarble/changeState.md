# changeState

`_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE`

`BlueMarble::changeState(BlueMarbleState::T)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d9202` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d9202  _ZN10BlueMarble11changeStateEN15BlueMarbleState1TE
#           BlueMarble::changeState(BlueMarbleState::T)
# range [0x080d9202, 0x080d920f]
080d9202 +0x00:  push   %ebp
080d9203 +0x01:  mov    %esp,%ebp
080d9205 +0x03:  mov    0x8(%ebp),%eax
080d9208 +0x06:  mov    0xc(%ebp),%edx
080d920b +0x09:  mov    %edx,0x10(%eax)
080d920e +0x0c:  pop    %ebp
080d920f +0x0d:  ret
```

## 反编译 C

```c
// BlueMarble::changeState @ 0x80d9202

/* BlueMarble::changeState(BlueMarbleState::T) */

void __thiscall BlueMarble::changeState(BlueMarble *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x10) = param_2;
  return;
}
```
