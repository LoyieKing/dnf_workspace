# MoneyAddTrade

`_ZN15cUserHistoryLog13MoneyAddTradeEii15eMoneyAddReason`

`cUserHistoryLog::MoneyAddTrade(int, int, eMoneyAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683ae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683ae0  _ZN15cUserHistoryLog13MoneyAddTradeEii15eMoneyAddReason
#           cUserHistoryLog::MoneyAddTrade(int, int, eMoneyAddReason)
# range [0x08683ae0, 0x08683b37]
08683ae0 +0x00:  push   %ebp
08683ae1 +0x01:  mov    %esp,%ebp
08683ae3 +0x03:  push   %ebx
08683ae4 +0x04:  sub    $0x24,%esp
08683ae7 +0x07:  mov    0x8(%ebp),%eax
08683aea +0x0a:  add    $0x22,%eax
08683aed +0x0d:  movzbl (%eax),%eax
08683af0 +0x10:  test   %al,%al
08683af2 +0x12:  je     08683b32 <+0x52>
08683af4 +0x14:  mov    0x8(%ebp),%eax
08683af7 +0x17:  lea    0x4(%eax),%ebx
08683afa +0x1a:  mov    0x8(%ebp),%eax
08683afd +0x1d:  lea    0x22(%eax),%ecx
08683b00 +0x20:  mov    0x14(%ebp),%edx
08683b03 +0x23:  mov    0x8(%ebp),%eax
08683b06 +0x26:  mov    (%eax),%eax
08683b08 +0x28:  mov    %ebx,0x18(%esp)
08683b0c +0x2c:  mov    %ecx,0x14(%esp)
08683b10 +0x30:  mov    %edx,0x10(%esp)
08683b14 +0x34:  mov    0x10(%ebp),%edx
08683b17 +0x37:  mov    %edx,0xc(%esp)
08683b1b +0x3b:  mov    0xc(%ebp),%edx
08683b1e +0x3e:  mov    %edx,0x8(%esp)
08683b22 +0x42:  movl   $"Money+,%d,%d,%d,%s(%s)",0x4(%esp)
08683b2a +0x4a:  mov    %eax,(%esp)
08683b2d +0x4d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683b32 +0x52:  add    $0x24,%esp
08683b35 +0x55:  pop    %ebx
08683b36 +0x56:  pop    %ebp
08683b37 +0x57:  ret
```

## 反编译 C

```c
// cUserHistoryLog::MoneyAddTrade @ 0x8683ae0

/* cUserHistoryLog::MoneyAddTrade(int, int, eMoneyAddReason) */

void __thiscall
cUserHistoryLog::MoneyAddTrade
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  if (this[0x22] != (cUserHistoryLog)0x0) {
    CUser::LogHistory(*(CUser **)this,"Money+,%d,%d,%d,%s(%s)",param_1,param_2,param_4,this + 0x22,
                      this + 4);
  }
  return;
}
```
