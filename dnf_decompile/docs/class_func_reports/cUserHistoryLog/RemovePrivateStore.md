# RemovePrivateStore

`_ZN15cUserHistoryLog18RemovePrivateStoreEiiPKc`

`cUserHistoryLog::RemovePrivateStore(int, int, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684586` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684586  _ZN15cUserHistoryLog18RemovePrivateStoreEiiPKc
#           cUserHistoryLog::RemovePrivateStore(int, int, char const*)
# range [0x08684586, 0x086845b1]
08684586 +0x00:  push   %ebp
08684587 +0x01:  mov    %esp,%ebp
08684589 +0x03:  sub    $0x18,%esp
0868458c +0x06:  mov    0x8(%ebp),%eax
0868458f +0x09:  mov    (%eax),%eax
08684591 +0x0b:  mov    0x10(%ebp),%edx
08684594 +0x0e:  mov    %edx,0xc(%esp)
08684598 +0x12:  mov    0xc(%ebp),%edx
0868459b +0x15:  mov    %edx,0x8(%esp)
0868459f +0x19:  movl   $"Private Store-,%d,%d",0x4(%esp)
086845a7 +0x21:  mov    %eax,(%esp)
086845aa +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086845af +0x29:  leave
086845b0 +0x2a:  ret
086845b1 +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::RemovePrivateStore @ 0x8684586

/* cUserHistoryLog::RemovePrivateStore(int, int, char const*) */

void cUserHistoryLog::RemovePrivateStore(int param_1,int param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)param_1,"Private Store-,%d,%d",param_2,param_3);
  return;
}
```
