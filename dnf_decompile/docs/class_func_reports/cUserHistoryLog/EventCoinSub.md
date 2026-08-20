# EventCoinSub

`_ZN15cUserHistoryLog12EventCoinSubEii14eCoinSubReason`

`cUserHistoryLog::EventCoinSub(int, int, eCoinSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683c8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683c8a  _ZN15cUserHistoryLog12EventCoinSubEii14eCoinSubReason
#           cUserHistoryLog::EventCoinSub(int, int, eCoinSubReason)
# range [0x08683c8a, 0x08683cbb]
08683c8a +0x00:  push   %ebp
08683c8b +0x01:  mov    %esp,%ebp
08683c8d +0x03:  sub    $0x28,%esp
08683c90 +0x06:  mov    0x14(%ebp),%edx
08683c93 +0x09:  mov    0x8(%ebp),%eax
08683c96 +0x0c:  mov    (%eax),%eax
08683c98 +0x0e:  mov    %edx,0x10(%esp)
08683c9c +0x12:  mov    0x10(%ebp),%edx
08683c9f +0x15:  mov    %edx,0xc(%esp)
08683ca3 +0x19:  mov    0xc(%ebp),%edx
08683ca6 +0x1c:  mov    %edx,0x8(%esp)
08683caa +0x20:  movl   $"ECoin-,%d,%d,%d",0x4(%esp)
08683cb2 +0x28:  mov    %eax,(%esp)
08683cb5 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683cba +0x30:  leave
08683cbb +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::EventCoinSub @ 0x8683c8a

/* cUserHistoryLog::EventCoinSub(int, int, eCoinSubReason) */

void __thiscall
cUserHistoryLog::EventCoinSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"ECoin-,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
