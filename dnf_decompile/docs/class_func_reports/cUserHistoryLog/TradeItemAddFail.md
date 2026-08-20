# TradeItemAddFail

`_ZN15cUserHistoryLog16TradeItemAddFailEii`

`cUserHistoryLog::TradeItemAddFail(int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683d5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683d5a  _ZN15cUserHistoryLog16TradeItemAddFailEii
#           cUserHistoryLog::TradeItemAddFail(int, int)
# range [0x08683d5a, 0x08683d85]
08683d5a +0x00:  push   %ebp
08683d5b +0x01:  mov    %esp,%ebp
08683d5d +0x03:  sub    $0x18,%esp
08683d60 +0x06:  mov    0x8(%ebp),%eax
08683d63 +0x09:  mov    (%eax),%eax
08683d65 +0x0b:  mov    0x10(%ebp),%edx
08683d68 +0x0e:  mov    %edx,0xc(%esp)
08683d6c +0x12:  mov    0xc(%ebp),%edx
08683d6f +0x15:  mov    %edx,0x8(%esp)
08683d73 +0x19:  movl   $"Item!,%d,%d",0x4(%esp)
08683d7b +0x21:  mov    %eax,(%esp)
08683d7e +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683d83 +0x29:  leave
08683d84 +0x2a:  ret
08683d85 +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::TradeItemAddFail @ 0x8683d5a

/* cUserHistoryLog::TradeItemAddFail(int, int) */

void __thiscall cUserHistoryLog::TradeItemAddFail(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"Item!,%d,%d",param_1,param_2);
  return;
}
```
