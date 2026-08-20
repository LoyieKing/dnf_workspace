# RequestLoadActionPointFromDBAndES

`_ZN8APSystem24CDBAndExchangeServerProc33RequestLoadActionPointFromDBAndESER5CUserR17MSG_CHARAC_SELECT`

`APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES(CUser&, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `APSystem::CDBAndExchangeServerProc` | `0x08121608` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121608  _ZN8APSystem24CDBAndExchangeServerProc33RequestLoadActionPointFromDBAndESER5CUserR17MSG_CHARAC_SELECT
#           APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES(CUser&, MSG_CHARAC_SELECT&)
# range [0x08121608, 0x08121615]
08121608 +0x00:  push   %ebp
08121609 +0x01:  mov    %esp,%ebp
0812160b +0x03:  sub    $0x10,%esp
0812160e +0x06:  mov    $0x1,%eax
08121613 +0x0b:  leave
08121614 +0x0c:  ret
08121615 +0x0d:  nop
```

## 反编译 C

```c
// APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES @ 0x8121608

/* APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES(CUser&, MSG_CHARAC_SELECT&)
    */

undefined4
APSystem::CDBAndExchangeServerProc::RequestLoadActionPointFromDBAndES
          (CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  return 1;
}
```
