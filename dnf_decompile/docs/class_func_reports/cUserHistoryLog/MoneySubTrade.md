# MoneySubTrade

`_ZN15cUserHistoryLog13MoneySubTradeEii15eMoneySubReason`

`cUserHistoryLog::MoneySubTrade(int, int, eMoneySubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683b38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683b38  _ZN15cUserHistoryLog13MoneySubTradeEii15eMoneySubReason
#           cUserHistoryLog::MoneySubTrade(int, int, eMoneySubReason)
# range [0x08683b38, 0x08683b8f]
08683b38 +0x00:  push   %ebp
08683b39 +0x01:  mov    %esp,%ebp
08683b3b +0x03:  push   %ebx
08683b3c +0x04:  sub    $0x24,%esp
08683b3f +0x07:  mov    0x8(%ebp),%eax
08683b42 +0x0a:  add    $0x22,%eax
08683b45 +0x0d:  movzbl (%eax),%eax
08683b48 +0x10:  test   %al,%al
08683b4a +0x12:  je     08683b8a <+0x52>
08683b4c +0x14:  mov    0x8(%ebp),%eax
08683b4f +0x17:  lea    0x4(%eax),%ebx
08683b52 +0x1a:  mov    0x8(%ebp),%eax
08683b55 +0x1d:  lea    0x22(%eax),%ecx
08683b58 +0x20:  mov    0x14(%ebp),%edx
08683b5b +0x23:  mov    0x8(%ebp),%eax
08683b5e +0x26:  mov    (%eax),%eax
08683b60 +0x28:  mov    %ebx,0x18(%esp)
08683b64 +0x2c:  mov    %ecx,0x14(%esp)
08683b68 +0x30:  mov    %edx,0x10(%esp)
08683b6c +0x34:  mov    0x10(%ebp),%edx
08683b6f +0x37:  mov    %edx,0xc(%esp)
08683b73 +0x3b:  mov    0xc(%ebp),%edx
08683b76 +0x3e:  mov    %edx,0x8(%esp)
08683b7a +0x42:  movl   $"Money-,%d,%d,%d,%s(%s)",0x4(%esp)
08683b82 +0x4a:  mov    %eax,(%esp)
08683b85 +0x4d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683b8a +0x52:  add    $0x24,%esp
08683b8d +0x55:  pop    %ebx
08683b8e +0x56:  pop    %ebp
08683b8f +0x57:  ret
```

## 反编译 C

```c
// cUserHistoryLog::MoneySubTrade @ 0x8683b38

/* cUserHistoryLog::MoneySubTrade(int, int, eMoneySubReason) */

void __thiscall
cUserHistoryLog::MoneySubTrade
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  if (this[0x22] != (cUserHistoryLog)0x0) {
    CUser::LogHistory(*(CUser **)this,"Money-,%d,%d,%d,%s(%s)",param_1,param_2,param_4,this + 0x22,
                      this + 4);
  }
  return;
}
```
