# CoinSub

`_ZN15cUserHistoryLog7CoinSubEii14eCoinSubReason`

`cUserHistoryLog::CoinSub(int, int, eCoinSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683bc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683bc2  _ZN15cUserHistoryLog7CoinSubEii14eCoinSubReason
#           cUserHistoryLog::CoinSub(int, int, eCoinSubReason)
# range [0x08683bc2, 0x08683bf3]
08683bc2 +0x00:  push   %ebp
08683bc3 +0x01:  mov    %esp,%ebp
08683bc5 +0x03:  sub    $0x28,%esp
08683bc8 +0x06:  mov    0x14(%ebp),%edx
08683bcb +0x09:  mov    0x8(%ebp),%eax
08683bce +0x0c:  mov    (%eax),%eax
08683bd0 +0x0e:  mov    %edx,0x10(%esp)
08683bd4 +0x12:  mov    0x10(%ebp),%edx
08683bd7 +0x15:  mov    %edx,0xc(%esp)
08683bdb +0x19:  mov    0xc(%ebp),%edx
08683bde +0x1c:  mov    %edx,0x8(%esp)
08683be2 +0x20:  movl   $"Coin-,%d,%d,%d",0x4(%esp)
08683bea +0x28:  mov    %eax,(%esp)
08683bed +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683bf2 +0x30:  leave
08683bf3 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CoinSub @ 0x8683bc2

/* cUserHistoryLog::CoinSub(int, int, eCoinSubReason) */

void __thiscall
cUserHistoryLog::CoinSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"Coin-,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
