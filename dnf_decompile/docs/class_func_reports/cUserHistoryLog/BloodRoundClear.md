# BloodRoundClear

`_ZN15cUserHistoryLog15BloodRoundClearEijjPKcS1_`

`cUserHistoryLog::BloodRoundClear(int, unsigned int, unsigned int, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684af0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684af0  _ZN15cUserHistoryLog15BloodRoundClearEijjPKcS1_
#           cUserHistoryLog::BloodRoundClear(int, unsigned int, unsigned int, char const*, char const*)
# range [0x08684af0, 0x08684b21]
08684af0 +0x00:  push   %ebp
08684af1 +0x01:  mov    %esp,%ebp
08684af3 +0x03:  sub    $0x28,%esp
08684af6 +0x06:  mov    0x8(%ebp),%eax
08684af9 +0x09:  mov    (%eax),%eax
08684afb +0x0b:  mov    0x1c(%ebp),%edx
08684afe +0x0e:  mov    %edx,0x10(%esp)
08684b02 +0x12:  mov    0x10(%ebp),%edx
08684b05 +0x15:  mov    %edx,0xc(%esp)
08684b09 +0x19:  mov    0xc(%ebp),%edx
08684b0c +0x1c:  mov    %edx,0x8(%esp)
08684b10 +0x20:  movl   $"BloodRoundClear,%d,%u,%s",0x4(%esp)
08684b18 +0x28:  mov    %eax,(%esp)
08684b1b +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684b20 +0x30:  leave
08684b21 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::BloodRoundClear @ 0x8684af0

/* cUserHistoryLog::BloodRoundClear(int, unsigned int, unsigned int, char const*, char const*) */

void __thiscall
cUserHistoryLog::BloodRoundClear
          (cUserHistoryLog *this,int param_1,uint param_2,uint param_3,char *param_4,char *param_5)

{
  CUser::LogHistory(*(CUser **)this,"BloodRoundClear,%d,%u,%s",param_1,param_2,param_5);
  return;
}
```
