# starSub

`_ZN12advancealtar10HistoryLog7starSubER5CUserNS_11SubStarType1TEi`

`advancealtar::HistoryLog::starSub(CUser&, advancealtar::SubStarType::T, int)`

| 类 | 地址 |
|---|---|
| `advancealtar::HistoryLog` | `0x08133db0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08133db0  _ZN12advancealtar10HistoryLog7starSubER5CUserNS_11SubStarType1TEi
#           advancealtar::HistoryLog::starSub(CUser&, advancealtar::SubStarType::T, int)
# range [0x08133db0, 0x08133dd9]
08133db0 +0x00:  push   %ebp
08133db1 +0x01:  mov    %esp,%ebp
08133db3 +0x03:  sub    $0x18,%esp
08133db6 +0x06:  mov    0xc(%ebp),%eax
08133db9 +0x09:  mov    0x10(%ebp),%edx
08133dbc +0x0c:  mov    %edx,0xc(%esp)
08133dc0 +0x10:  mov    %eax,0x8(%esp)
08133dc4 +0x14:  movl   $"star-,%d,%d",0x4(%esp)
08133dcc +0x1c:  mov    0x8(%ebp),%eax
08133dcf +0x1f:  mov    %eax,(%esp)
08133dd2 +0x22:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08133dd7 +0x27:  leave
08133dd8 +0x28:  ret
08133dd9 +0x29:  nop
```

## 反编译 C

```c
// advancealtar::HistoryLog::starSub @ 0x8133db0

/* advancealtar::HistoryLog::starSub(CUser&, advancealtar::SubStarType::T, int) */

void advancealtar::HistoryLog::starSub(CUser *param_1,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(param_1,"star-,%d,%d",param_2,param_3);
  return;
}
```
