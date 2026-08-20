# GetActionPointFromMemory

`_ZN8APSystem24CDBAndExchangeServerProc24GetActionPointFromMemoryERK5CUserRNS_22_SIG_LOAD_ACTION_POINTE`

`APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory(CUser const&, APSystem::_SIG_LOAD_ACTION_POINT&)`

| 类 | 地址 |
|---|---|
| `APSystem::CDBAndExchangeServerProc` | `0x08121616` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121616  _ZN8APSystem24CDBAndExchangeServerProc24GetActionPointFromMemoryERK5CUserRNS_22_SIG_LOAD_ACTION_POINTE
#           APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory(CUser const&, APSystem::_SIG_LOAD_ACTION_POINT&)
# range [0x08121616, 0x0812161b]
08121616 +0x00:  push   %ebp
08121617 +0x01:  mov    %esp,%ebp
08121619 +0x03:  pop    %ebp
0812161a +0x04:  ret
0812161b +0x05:  nop
```

## 反编译 C

```c
// APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory @ 0x8121616

/* APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory(CUser const&,
   APSystem::_SIG_LOAD_ACTION_POINT&) */

void APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory
               (CUser *param_1,_SIG_LOAD_ACTION_POINT *param_2)

{
  return;
}
```
