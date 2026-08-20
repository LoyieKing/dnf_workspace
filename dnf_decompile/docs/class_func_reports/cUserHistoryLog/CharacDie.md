# CharacDie

`_ZN15cUserHistoryLog9CharacDieEPKctt`

`cUserHistoryLog::CharacDie(char const*, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684dfa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684dfa  _ZN15cUserHistoryLog9CharacDieEPKctt
#           cUserHistoryLog::CharacDie(char const*, unsigned short, unsigned short)
# range [0x08684dfa, 0x08684e3b]
08684dfa +0x00:  push   %ebp
08684dfb +0x01:  mov    %esp,%ebp
08684dfd +0x03:  sub    $0x38,%esp
08684e00 +0x06:  mov    0x10(%ebp),%edx
08684e03 +0x09:  mov    0x14(%ebp),%eax
08684e06 +0x0c:  mov    %dx,-0xc(%ebp)
08684e0a +0x10:  mov    %ax,-0x10(%ebp)
08684e0e +0x14:  movzwl -0x10(%ebp),%ecx
08684e12 +0x18:  movzwl -0xc(%ebp),%edx
08684e16 +0x1c:  mov    0x8(%ebp),%eax
08684e19 +0x1f:  mov    (%eax),%eax
08684e1b +0x21:  mov    %ecx,0x10(%esp)
08684e1f +0x25:  mov    %edx,0xc(%esp)
08684e23 +0x29:  mov    0xc(%ebp),%edx
08684e26 +0x2c:  mov    %edx,0x8(%esp)
08684e2a +0x30:  movl   $"Die,\"%s\",%d,%d",0x4(%esp)
08684e32 +0x38:  mov    %eax,(%esp)
08684e35 +0x3b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684e3a +0x40:  leave
08684e3b +0x41:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CharacDie @ 0x8684dfa

/* cUserHistoryLog::CharacDie(char const*, unsigned short, unsigned short) */

void __thiscall
cUserHistoryLog::CharacDie(cUserHistoryLog *this,char *param_1,ushort param_2,ushort param_3)

{
  CUser::LogHistory(*(CUser **)this,"Die,\"%s\",%d,%d",param_1,(uint)param_2,(uint)param_3);
  return;
}
```
