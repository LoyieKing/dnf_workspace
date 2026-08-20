# QPAdd

`_ZN15cUserHistoryLog5QPAddEiii`

`cUserHistoryLog::QPAdd(int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868888c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868888c  _ZN15cUserHistoryLog5QPAddEiii
#           cUserHistoryLog::QPAdd(int, int, int)
# range [0x0868888c, 0x086888bd]
0868888c +0x00:  push   %ebp
0868888d +0x01:  mov    %esp,%ebp
0868888f +0x03:  sub    $0x28,%esp
08688892 +0x06:  mov    0x8(%ebp),%eax
08688895 +0x09:  mov    (%eax),%eax
08688897 +0x0b:  mov    0x14(%ebp),%edx
0868889a +0x0e:  mov    %edx,0x10(%esp)
0868889e +0x12:  mov    0x10(%ebp),%edx
086888a1 +0x15:  mov    %edx,0xc(%esp)
086888a5 +0x19:  mov    0xc(%ebp),%edx
086888a8 +0x1c:  mov    %edx,0x8(%esp)
086888ac +0x20:  movl   $"QP+,%d,%d,%d",0x4(%esp)
086888b4 +0x28:  mov    %eax,(%esp)
086888b7 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086888bc +0x30:  leave
086888bd +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::QPAdd @ 0x868888c

/* cUserHistoryLog::QPAdd(int, int, int) */

void __thiscall cUserHistoryLog::QPAdd(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"QP+,%d,%d,%d",param_1,param_2,param_3);
  return;
}
```
