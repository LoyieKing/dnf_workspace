# EventCoinAdd

`_ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason`

`cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683c58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683c58  _ZN15cUserHistoryLog12EventCoinAddEii14eCoinAddReason
#           cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason)
# range [0x08683c58, 0x08683c89]
08683c58 +0x00:  push   %ebp
08683c59 +0x01:  mov    %esp,%ebp
08683c5b +0x03:  sub    $0x28,%esp
08683c5e +0x06:  mov    0x14(%ebp),%edx
08683c61 +0x09:  mov    0x8(%ebp),%eax
08683c64 +0x0c:  mov    (%eax),%eax
08683c66 +0x0e:  mov    %edx,0x10(%esp)
08683c6a +0x12:  mov    0x10(%ebp),%edx
08683c6d +0x15:  mov    %edx,0xc(%esp)
08683c71 +0x19:  mov    0xc(%ebp),%edx
08683c74 +0x1c:  mov    %edx,0x8(%esp)
08683c78 +0x20:  movl   $"ECoin+,%d,%d,%d",0x4(%esp)
08683c80 +0x28:  mov    %eax,(%esp)
08683c83 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683c88 +0x30:  leave
08683c89 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::EventCoinAdd @ 0x8683c58

/* cUserHistoryLog::EventCoinAdd(int, int, eCoinAddReason) */

void __thiscall
cUserHistoryLog::EventCoinAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"ECoin+,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
