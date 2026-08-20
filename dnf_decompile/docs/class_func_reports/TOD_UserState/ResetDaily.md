# ResetDaily

`_ZN13TOD_UserState10ResetDailyEv`

`TOD_UserState::ResetDaily()`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x08643624` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08643624  _ZN13TOD_UserState10ResetDailyEv
#           TOD_UserState::ResetDaily()
# range [0x08643624, 0x08643641]
08643624 +0x00:  push   %ebp
08643625 +0x01:  mov    %esp,%ebp
08643627 +0x03:  sub    $0x18,%esp
0864362a +0x06:  mov    0x8(%ebp),%eax
0864362d +0x09:  movl   $0x0,0x10(%eax)
08643634 +0x10:  mov    0x8(%ebp),%eax
08643637 +0x13:  mov    %eax,(%esp)
0864363a +0x16:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0864363f +0x1b:  leave
08643640 +0x1c:  ret
08643641 +0x1d:  nop
```

## 反编译 C

```c
// TOD_UserState::ResetDaily @ 0x8643624

/* TOD_UserState::ResetDaily() */

void __thiscall TOD_UserState::ResetDaily(TOD_UserState *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  charac_expand::CData::alter((CData *)this);
  return;
}
```
