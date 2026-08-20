# PayCoinSub

`_ZN15cUserHistoryLog10PayCoinSubEii14eCoinSubReason`

`cUserHistoryLog::PayCoinSub(int, int, eCoinSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683c26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683c26  _ZN15cUserHistoryLog10PayCoinSubEii14eCoinSubReason
#           cUserHistoryLog::PayCoinSub(int, int, eCoinSubReason)
# range [0x08683c26, 0x08683c57]
08683c26 +0x00:  push   %ebp
08683c27 +0x01:  mov    %esp,%ebp
08683c29 +0x03:  sub    $0x28,%esp
08683c2c +0x06:  mov    0x14(%ebp),%edx
08683c2f +0x09:  mov    0x8(%ebp),%eax
08683c32 +0x0c:  mov    (%eax),%eax
08683c34 +0x0e:  mov    %edx,0x10(%esp)
08683c38 +0x12:  mov    0x10(%ebp),%edx
08683c3b +0x15:  mov    %edx,0xc(%esp)
08683c3f +0x19:  mov    0xc(%ebp),%edx
08683c42 +0x1c:  mov    %edx,0x8(%esp)
08683c46 +0x20:  movl   $"PCoin-,%d,%d,%d",0x4(%esp)
08683c4e +0x28:  mov    %eax,(%esp)
08683c51 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683c56 +0x30:  leave
08683c57 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::PayCoinSub @ 0x8683c26

/* cUserHistoryLog::PayCoinSub(int, int, eCoinSubReason) */

void __thiscall
cUserHistoryLog::PayCoinSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"PCoin-,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
