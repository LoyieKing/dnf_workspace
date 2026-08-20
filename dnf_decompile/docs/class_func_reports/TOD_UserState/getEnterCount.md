# getEnterCount

`_ZNK13TOD_UserState13getEnterCountEv`

`TOD_UserState::getEnterCount() const`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x08643872` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643872  _ZNK13TOD_UserState13getEnterCountEv
#           TOD_UserState::getEnterCount() const
# range [0x08643872, 0x0864387d]
08643872 +0x00:  push   %ebp
08643873 +0x01:  mov    %esp,%ebp
08643875 +0x03:  mov    0x8(%ebp),%eax
08643878 +0x06:  mov    0x10(%eax),%eax
0864387b +0x09:  pop    %ebp
0864387c +0x0a:  ret
0864387d +0x0b:  nop
```

## 反编译 C

```c
// TOD_UserState::getEnterCount @ 0x8643872

/* TOD_UserState::getEnterCount() const */

undefined4 __thiscall TOD_UserState::getEnterCount(TOD_UserState *this)

{
  return *(undefined4 *)(this + 0x10);
}
```
