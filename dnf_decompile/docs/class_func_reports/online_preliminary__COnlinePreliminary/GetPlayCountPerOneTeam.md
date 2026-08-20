# GetPlayCountPerOneTeam

`_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv`

`online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x0855fee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855fee8  _ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv
#           online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
# range [0x0855fee8, 0x0855fefd]
0855fee8 +0x00:  push   %ebp
0855fee9 +0x01:  mov    %esp,%ebp
0855feeb +0x03:  sub    $0x18,%esp
0855feee +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0855fef3 +0x0b:  mov    %eax,(%esp)
0855fef6 +0x0e:  call   08568ce0 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x6aa>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x6aa
0855fefb +0x13:  leave
0855fefc +0x14:  ret
0855fefd +0x15:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam @ 0x855fee8

/* online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam() */

void online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam(void)

{
  CDataManager *this;
  
  this = (CDataManager *)G_CDataManager();
  CDataManager::GetPvPTeamCount(this);
  return;
}
```
