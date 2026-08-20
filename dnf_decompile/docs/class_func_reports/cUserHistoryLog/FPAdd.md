# FPAdd

`_ZN15cUserHistoryLog5FPAddEiii12eFPAddReason`

`cUserHistoryLog::FPAdd(int, int, int, eFPAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684b5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684b5c  _ZN15cUserHistoryLog5FPAddEiii12eFPAddReason
#           cUserHistoryLog::FPAdd(int, int, int, eFPAddReason)
# range [0x08684b5c, 0x08684b95]
08684b5c +0x00:  push   %ebp
08684b5d +0x01:  mov    %esp,%ebp
08684b5f +0x03:  sub    $0x28,%esp
08684b62 +0x06:  mov    0x18(%ebp),%edx
08684b65 +0x09:  mov    0x8(%ebp),%eax
08684b68 +0x0c:  mov    (%eax),%eax
08684b6a +0x0e:  mov    %edx,0x14(%esp)
08684b6e +0x12:  mov    0x14(%ebp),%edx
08684b71 +0x15:  mov    %edx,0x10(%esp)
08684b75 +0x19:  mov    0x10(%ebp),%edx
08684b78 +0x1c:  mov    %edx,0xc(%esp)
08684b7c +0x20:  mov    0xc(%ebp),%edx
08684b7f +0x23:  mov    %edx,0x8(%esp)
08684b83 +0x27:  movl   $"FP+,%d,%d,%d,%d",0x4(%esp)
08684b8b +0x2f:  mov    %eax,(%esp)
08684b8e +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684b93 +0x37:  leave
08684b94 +0x38:  ret
08684b95 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::FPAdd @ 0x8684b5c

/* cUserHistoryLog::FPAdd(int, int, int, eFPAddReason) */

void __thiscall
cUserHistoryLog::FPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"FP+,%d,%d,%d,%d",param_1,param_2,param_3,param_5);
  return;
}
```
