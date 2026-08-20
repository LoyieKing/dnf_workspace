# CreatePrivateStore

`_ZN15cUserHistoryLog18CreatePrivateStoreEiiPKc`

`cUserHistoryLog::CreatePrivateStore(int, int, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868455a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868455a  _ZN15cUserHistoryLog18CreatePrivateStoreEiiPKc
#           cUserHistoryLog::CreatePrivateStore(int, int, char const*)
# range [0x0868455a, 0x08684585]
0868455a +0x00:  push   %ebp
0868455b +0x01:  mov    %esp,%ebp
0868455d +0x03:  sub    $0x18,%esp
08684560 +0x06:  mov    0x8(%ebp),%eax
08684563 +0x09:  mov    (%eax),%eax
08684565 +0x0b:  mov    0x10(%ebp),%edx
08684568 +0x0e:  mov    %edx,0xc(%esp)
0868456c +0x12:  mov    0xc(%ebp),%edx
0868456f +0x15:  mov    %edx,0x8(%esp)
08684573 +0x19:  movl   $"Private Store+,%d,%d",0x4(%esp)
0868457b +0x21:  mov    %eax,(%esp)
0868457e +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684583 +0x29:  leave
08684584 +0x2a:  ret
08684585 +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::CreatePrivateStore @ 0x868455a

/* cUserHistoryLog::CreatePrivateStore(int, int, char const*) */

void cUserHistoryLog::CreatePrivateStore(int param_1,int param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)param_1,"Private Store+,%d,%d",param_2,param_3);
  return;
}
```
