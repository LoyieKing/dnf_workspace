# EndRidable

`_ZN15cUserHistoryLog10EndRidableENS_12eRidableTypeEi`

`cUserHistoryLog::EndRidable(cUserHistoryLog::eRidableType, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868695c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868695c  _ZN15cUserHistoryLog10EndRidableENS_12eRidableTypeEi
#           cUserHistoryLog::EndRidable(cUserHistoryLog::eRidableType, int)
# range [0x0868695c, 0x0868698f]
0868695c +0x00:  push   %ebp
0868695d +0x01:  mov    %esp,%ebp
0868695f +0x03:  sub    $0x28,%esp
08686962 +0x06:  mov    0xc(%ebp),%edx
08686965 +0x09:  mov    0x8(%ebp),%eax
08686968 +0x0c:  mov    (%eax),%eax
0868696a +0x0e:  mov    %edx,0x10(%esp)
0868696e +0x12:  mov    0x10(%ebp),%edx
08686971 +0x15:  mov    %edx,0xc(%esp)
08686975 +0x19:  movl   $0x0,0x8(%esp)
0868697d +0x21:  movl   $"Transform,%d,%d,%d",0x4(%esp)
08686985 +0x29:  mov    %eax,(%esp)
08686988 +0x2c:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868698d +0x31:  leave
0868698e +0x32:  ret
0868698f +0x33:  nop
```

## 反编译 C

```c
// cUserHistoryLog::EndRidable @ 0x868695c

/* cUserHistoryLog::EndRidable(cUserHistoryLog::eRidableType, int) */

void __thiscall
cUserHistoryLog::EndRidable(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Transform,%d,%d,%d",0,param_3,param_2);
  return;
}
```
