# DiePvP

`_ZN15cUserHistoryLog6DiePvPE23ENUM_PVP_HISTORY_REASONjjiiiiPKc`

`cUserHistoryLog::DiePvP(ENUM_PVP_HISTORY_REASON, unsigned int, unsigned int, int, int, int, int, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686490  _ZN15cUserHistoryLog6DiePvPE23ENUM_PVP_HISTORY_REASONjjiiiiPKc
#           cUserHistoryLog::DiePvP(ENUM_PVP_HISTORY_REASON, unsigned int, unsigned int, int, int, int, int, char const*)
# range [0x08686490, 0x086864e5]
08686490 +0x00:  push   %ebp
08686491 +0x01:  mov    %esp,%ebp
08686493 +0x03:  sub    $0x38,%esp
08686496 +0x06:  mov    0xc(%ebp),%edx
08686499 +0x09:  mov    0x8(%ebp),%eax
0868649c +0x0c:  mov    (%eax),%eax
0868649e +0x0e:  mov    0x28(%ebp),%ecx
086864a1 +0x11:  mov    %ecx,0x24(%esp)
086864a5 +0x15:  mov    0x24(%ebp),%ecx
086864a8 +0x18:  mov    %ecx,0x20(%esp)
086864ac +0x1c:  mov    0x20(%ebp),%ecx
086864af +0x1f:  mov    %ecx,0x1c(%esp)
086864b3 +0x23:  mov    0x1c(%ebp),%ecx
086864b6 +0x26:  mov    %ecx,0x18(%esp)
086864ba +0x2a:  mov    0x18(%ebp),%ecx
086864bd +0x2d:  mov    %ecx,0x14(%esp)
086864c1 +0x31:  mov    0x14(%ebp),%ecx
086864c4 +0x34:  mov    %ecx,0x10(%esp)
086864c8 +0x38:  mov    0x10(%ebp),%ecx
086864cb +0x3b:  mov    %ecx,0xc(%esp)
086864cf +0x3f:  mov    %edx,0x8(%esp)
086864d3 +0x43:  movl   $"PVP,%d,%u,%u,%d,%d,%d,%d,\"%s\"",0x4(%esp)
086864db +0x4b:  mov    %eax,(%esp)
086864de +0x4e:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086864e3 +0x53:  leave
086864e4 +0x54:  ret
086864e5 +0x55:  nop
```

## 反编译 C

```c
// cUserHistoryLog::DiePvP @ 0x8686490

/* cUserHistoryLog::DiePvP(ENUM_PVP_HISTORY_REASON, unsigned int, unsigned int, int, int, int, int,
   char const*) */

void __thiscall
cUserHistoryLog::DiePvP
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9)

{
  CUser::LogHistory(*(CUser **)this,"PVP,%d,%u,%u,%d,%d,%d,%d,\"%s\"",param_2,param_3,param_4,
                    param_5,param_6,param_7,param_8,param_9);
  return;
}
```
