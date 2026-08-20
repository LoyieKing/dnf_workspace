# CoinAdd

`_ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason`

`cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683b90  _ZN15cUserHistoryLog7CoinAddEii14eCoinAddReason
#           cUserHistoryLog::CoinAdd(int, int, eCoinAddReason)
# range [0x08683b90, 0x08683bc1]
08683b90 +0x00:  push   %ebp
08683b91 +0x01:  mov    %esp,%ebp
08683b93 +0x03:  sub    $0x28,%esp
08683b96 +0x06:  mov    0x14(%ebp),%edx
08683b99 +0x09:  mov    0x8(%ebp),%eax
08683b9c +0x0c:  mov    (%eax),%eax
08683b9e +0x0e:  mov    %edx,0x10(%esp)
08683ba2 +0x12:  mov    0x10(%ebp),%edx
08683ba5 +0x15:  mov    %edx,0xc(%esp)
08683ba9 +0x19:  mov    0xc(%ebp),%edx
08683bac +0x1c:  mov    %edx,0x8(%esp)
08683bb0 +0x20:  movl   $"Coin+,%d,%d,%d",0x4(%esp)
08683bb8 +0x28:  mov    %eax,(%esp)
08683bbb +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683bc0 +0x30:  leave
08683bc1 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CoinAdd @ 0x8683b90

/* cUserHistoryLog::CoinAdd(int, int, eCoinAddReason) */

void __thiscall
cUserHistoryLog::CoinAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"Coin+,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
