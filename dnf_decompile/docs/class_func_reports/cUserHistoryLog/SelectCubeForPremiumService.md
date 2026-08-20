# SelectCubeForPremiumService

`_ZN15cUserHistoryLog27SelectCubeForPremiumServiceEi`

`cUserHistoryLog::SelectCubeForPremiumService(int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686da0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686da0  _ZN15cUserHistoryLog27SelectCubeForPremiumServiceEi
#           cUserHistoryLog::SelectCubeForPremiumService(int)
# range [0x08686da0, 0x08686dcf]
08686da0 +0x00:  push   %ebp
08686da1 +0x01:  mov    %esp,%ebp
08686da3 +0x03:  sub    $0x18,%esp
08686da6 +0x06:  mov    0x8(%ebp),%eax
08686da9 +0x09:  mov    (%eax),%eax
08686dab +0x0b:  test   %eax,%eax
08686dad +0x0d:  je     08686dcd <+0x2d>
08686daf +0x0f:  mov    0x8(%ebp),%eax
08686db2 +0x12:  mov    (%eax),%eax
08686db4 +0x14:  mov    0xc(%ebp),%edx
08686db7 +0x17:  mov    %edx,0x8(%esp)
08686dbb +0x1b:  movl   $"SelectCubeForPremiumService,%d",0x4(%esp)
08686dc3 +0x23:  mov    %eax,(%esp)
08686dc6 +0x26:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686dcb +0x2b:  jmp    08686dce <+0x2e>
08686dcd +0x2d:  nop
08686dce +0x2e:  leave
08686dcf +0x2f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::SelectCubeForPremiumService @ 0x8686da0

/* cUserHistoryLog::SelectCubeForPremiumService(int) */

void __thiscall cUserHistoryLog::SelectCubeForPremiumService(cUserHistoryLog *this,int param_1)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"SelectCubeForPremiumService,%d",param_1);
  }
  return;
}
```
