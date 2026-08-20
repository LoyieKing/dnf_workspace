# QPSub

`_ZN15cUserHistoryLog5QPSubEiii`

`cUserHistoryLog::QPSub(int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868885a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868885a  _ZN15cUserHistoryLog5QPSubEiii
#           cUserHistoryLog::QPSub(int, int, int)
# range [0x0868885a, 0x0868888b]
0868885a +0x00:  push   %ebp
0868885b +0x01:  mov    %esp,%ebp
0868885d +0x03:  sub    $0x28,%esp
08688860 +0x06:  mov    0x8(%ebp),%eax
08688863 +0x09:  mov    (%eax),%eax
08688865 +0x0b:  mov    0x14(%ebp),%edx
08688868 +0x0e:  mov    %edx,0x10(%esp)
0868886c +0x12:  mov    0x10(%ebp),%edx
0868886f +0x15:  mov    %edx,0xc(%esp)
08688873 +0x19:  mov    0xc(%ebp),%edx
08688876 +0x1c:  mov    %edx,0x8(%esp)
0868887a +0x20:  movl   $"QP-,%d,%d,%d",0x4(%esp)
08688882 +0x28:  mov    %eax,(%esp)
08688885 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
0868888a +0x30:  leave
0868888b +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::QPSub @ 0x868885a

/* cUserHistoryLog::QPSub(int, int, int) */

void __thiscall cUserHistoryLog::QPSub(cUserHistoryLog *this,int param_1,int param_2,int param_3)

{
  CUser::LogHistory(*(CUser **)this,"QP-,%d,%d,%d",param_1,param_2,param_3);
  return;
}
```
