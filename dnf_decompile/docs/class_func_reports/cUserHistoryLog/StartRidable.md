# StartRidable

`_ZN15cUserHistoryLog12StartRidableENS_12eRidableTypeEi`

`cUserHistoryLog::StartRidable(cUserHistoryLog::eRidableType, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686928` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686928  _ZN15cUserHistoryLog12StartRidableENS_12eRidableTypeEi
#           cUserHistoryLog::StartRidable(cUserHistoryLog::eRidableType, int)
# range [0x08686928, 0x0868695b]
08686928 +0x00:  push   %ebp
08686929 +0x01:  mov    %esp,%ebp
0868692b +0x03:  sub    $0x28,%esp
0868692e +0x06:  mov    0xc(%ebp),%edx
08686931 +0x09:  mov    0x8(%ebp),%eax
08686934 +0x0c:  mov    (%eax),%eax
08686936 +0x0e:  mov    %edx,0x10(%esp)
0868693a +0x12:  mov    0x10(%ebp),%edx
0868693d +0x15:  mov    %edx,0xc(%esp)
08686941 +0x19:  movl   $0x1,0x8(%esp)
08686949 +0x21:  movl   $"Transform,%d,%d,%d",0x4(%esp)
08686951 +0x29:  mov    %eax,(%esp)
08686954 +0x2c:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686959 +0x31:  leave
0868695a +0x32:  ret
0868695b +0x33:  nop
```

## 反编译 C

```c
// cUserHistoryLog::StartRidable @ 0x8686928

/* cUserHistoryLog::StartRidable(cUserHistoryLog::eRidableType, int) */

void __thiscall
cUserHistoryLog::StartRidable(cUserHistoryLog *this,undefined4 param_2,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,"Transform,%d,%d,%d",1,param_3,param_2);
  return;
}
```
