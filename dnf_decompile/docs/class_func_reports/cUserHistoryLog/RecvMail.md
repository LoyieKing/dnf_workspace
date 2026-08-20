# RecvMail

`_ZN15cUserHistoryLog8RecvMailEjPKcS1_`

`cUserHistoryLog::RecvMail(unsigned int, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086848a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086848a8  _ZN15cUserHistoryLog8RecvMailEjPKcS1_
#           cUserHistoryLog::RecvMail(unsigned int, char const*, char const*)
# range [0x086848a8, 0x086848d9]
086848a8 +0x00:  push   %ebp
086848a9 +0x01:  mov    %esp,%ebp
086848ab +0x03:  sub    $0x28,%esp
086848ae +0x06:  mov    0x8(%ebp),%eax
086848b1 +0x09:  mov    (%eax),%eax
086848b3 +0x0b:  mov    0x14(%ebp),%edx
086848b6 +0x0e:  mov    %edx,0x10(%esp)
086848ba +0x12:  mov    0x10(%ebp),%edx
086848bd +0x15:  mov    %edx,0xc(%esp)
086848c1 +0x19:  mov    0xc(%ebp),%edx
086848c4 +0x1c:  mov    %edx,0x8(%esp)
086848c8 +0x20:  movl   $"MailR,%d,\"%s\",\"%s\"",0x4(%esp)
086848d0 +0x28:  mov    %eax,(%esp)
086848d3 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086848d8 +0x30:  leave
086848d9 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::RecvMail @ 0x86848a8

/* cUserHistoryLog::RecvMail(unsigned int, char const*, char const*) */

void __thiscall
cUserHistoryLog::RecvMail(cUserHistoryLog *this,uint param_1,char *param_2,char *param_3)

{
  CUser::LogHistory(*(CUser **)this,"MailR,%d,\"%s\",\"%s\"",param_1,param_2,param_3);
  return;
}
```
