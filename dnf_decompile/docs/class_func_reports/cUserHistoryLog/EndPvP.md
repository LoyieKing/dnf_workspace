# EndPvP

`_ZN15cUserHistoryLog6EndPvPE23ENUM_PVP_HISTORY_REASONbj`

`cUserHistoryLog::EndPvP(ENUM_PVP_HISTORY_REASON, bool, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868642e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868642e  _ZN15cUserHistoryLog6EndPvPE23ENUM_PVP_HISTORY_REASONbj
#           cUserHistoryLog::EndPvP(ENUM_PVP_HISTORY_REASON, bool, unsigned int)
# range [0x0868642e, 0x0868646b]
0868642e +0x00:  push   %ebp
0868642f +0x01:  mov    %esp,%ebp
08686431 +0x03:  push   %ebx
08686432 +0x04:  sub    $0x34,%esp
08686435 +0x07:  mov    0x10(%ebp),%eax
08686438 +0x0a:  mov    %al,-0xc(%ebp)
0868643b +0x0d:  movzbl -0xc(%ebp),%ecx
0868643f +0x11:  mov    0xc(%ebp),%edx
08686442 +0x14:  mov    0x8(%ebp),%eax
08686445 +0x17:  mov    (%eax),%eax
08686447 +0x19:  mov    0x14(%ebp),%ebx
0868644a +0x1c:  mov    %ebx,0x10(%esp)
0868644e +0x20:  mov    %ecx,0xc(%esp)
08686452 +0x24:  mov    %edx,0x8(%esp)
08686456 +0x28:  movl   $"PVP,%d,%d,%u",0x4(%esp)
0868645e +0x30:  mov    %eax,(%esp)
08686461 +0x33:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686466 +0x38:  add    $0x34,%esp
08686469 +0x3b:  pop    %ebx
0868646a +0x3c:  pop    %ebp
0868646b +0x3d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::EndPvP @ 0x868642e

/* cUserHistoryLog::EndPvP(ENUM_PVP_HISTORY_REASON, bool, unsigned int) */

void __thiscall
cUserHistoryLog::EndPvP(cUserHistoryLog *this,undefined4 param_2,uint param_3,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d,%d,%u",param_2,param_3 & 0xff,param_4);
  return;
}
```
