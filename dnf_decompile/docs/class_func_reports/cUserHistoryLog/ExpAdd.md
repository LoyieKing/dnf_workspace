# ExpAdd

`_ZN15cUserHistoryLog6ExpAddEii13eExpAddReasoni`

`cUserHistoryLog::ExpAdd(int, int, eExpAddReason, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684bd0  _ZN15cUserHistoryLog6ExpAddEii13eExpAddReasoni
#           cUserHistoryLog::ExpAdd(int, int, eExpAddReason, int)
# range [0x08684bd0, 0x08684c27]
08684bd0 +0x00:  push   %ebp
08684bd1 +0x01:  mov    %esp,%ebp
08684bd3 +0x03:  push   %ebx
08684bd4 +0x04:  sub    $0x24,%esp
08684bd7 +0x07:  mov    0x14(%ebp),%eax
08684bda +0x0a:  cmp    $0xc,%eax
08684bdd +0x0d:  ja     08684bf5 <+0x25>
08684bdf +0x0f:  mov    $0x1,%edx
08684be4 +0x14:  mov    %edx,%ebx
08684be6 +0x16:  mov    %eax,%ecx
08684be8 +0x18:  shl    %cl,%ebx
08684bea +0x1a:  mov    %ebx,%eax
08684bec +0x1c:  and    $0x1892,%eax
08684bf1 +0x21:  test   %eax,%eax
08684bf3 +0x23:  jne    08684c21 <+0x51>
08684bf5 +0x25:  mov    0x14(%ebp),%edx
08684bf8 +0x28:  mov    0x8(%ebp),%eax
08684bfb +0x2b:  mov    (%eax),%eax
08684bfd +0x2d:  mov    %edx,0x10(%esp)
08684c01 +0x31:  mov    0x10(%ebp),%edx
08684c04 +0x34:  mov    %edx,0xc(%esp)
08684c08 +0x38:  mov    0xc(%ebp),%edx
08684c0b +0x3b:  mov    %edx,0x8(%esp)
08684c0f +0x3f:  movl   $"Exp+,%d,%d,%d",0x4(%esp)
08684c17 +0x47:  mov    %eax,(%esp)
08684c1a +0x4a:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684c1f +0x4f:  jmp    08684c22 <+0x52>
08684c21 +0x51:  nop
08684c22 +0x52:  add    $0x24,%esp
08684c25 +0x55:  pop    %ebx
08684c26 +0x56:  pop    %ebp
08684c27 +0x57:  ret
```

## 反编译 C

```c
// cUserHistoryLog::ExpAdd @ 0x8684bd0

/* cUserHistoryLog::ExpAdd(int, int, eExpAddReason, int) */

void cUserHistoryLog::ExpAdd(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  if ((0xc < param_4) || ((1 << ((byte)param_4 & 0x1f) & 0x1892U) == 0)) {
    CUser::LogHistory((CUser *)*param_1,"Exp+,%d,%d,%d",param_2,param_3,param_4);
  }
  return;
}
```
