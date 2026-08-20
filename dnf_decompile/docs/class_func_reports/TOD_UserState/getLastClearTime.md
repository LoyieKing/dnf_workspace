# getLastClearTime

`_ZNK13TOD_UserState16getLastClearTimeEv`

`TOD_UserState::getLastClearTime() const`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x0864387e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864387e  _ZNK13TOD_UserState16getLastClearTimeEv
#           TOD_UserState::getLastClearTime() const
# range [0x0864387e, 0x08643889]
0864387e +0x00:  push   %ebp
0864387f +0x01:  mov    %esp,%ebp
08643881 +0x03:  mov    0x8(%ebp),%eax
08643884 +0x06:  mov    0x1c(%eax),%eax
08643887 +0x09:  pop    %ebp
08643888 +0x0a:  ret
08643889 +0x0b:  nop
```

## 反编译 C

```c
// TOD_UserState::getLastClearTime @ 0x864387e

/* TOD_UserState::getLastClearTime() const */

undefined4 __thiscall TOD_UserState::getLastClearTime(TOD_UserState *this)

{
  return *(undefined4 *)(this + 0x1c);
}
```
