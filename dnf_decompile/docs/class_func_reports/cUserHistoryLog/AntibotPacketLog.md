# AntibotPacketLog

`_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE`

`cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686dd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686dd0  _ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE
#           cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T)
# range [0x08686dd0, 0x08686df3]
08686dd0 +0x00:  push   %ebp
08686dd1 +0x01:  mov    %esp,%ebp
08686dd3 +0x03:  sub    $0x18,%esp
08686dd6 +0x06:  mov    0xc(%ebp),%edx
08686dd9 +0x09:  mov    0x8(%ebp),%eax
08686ddc +0x0c:  mov    (%eax),%eax
08686dde +0x0e:  mov    %edx,0x8(%esp)
08686de2 +0x12:  movl   $"AntibotPacketLog,%d",0x4(%esp)
08686dea +0x1a:  mov    %eax,(%esp)
08686ded +0x1d:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686df2 +0x22:  leave
08686df3 +0x23:  ret
```

## 反编译 C

```c
// cUserHistoryLog::AntibotPacketLog @ 0x8686dd0

/* cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T) */

void __thiscall cUserHistoryLog::AntibotPacketLog(cUserHistoryLog *this,undefined4 param_2)

{
  CUser::LogHistory(*(CUser **)this,"AntibotPacketLog,%d",param_2);
  return;
}
```
