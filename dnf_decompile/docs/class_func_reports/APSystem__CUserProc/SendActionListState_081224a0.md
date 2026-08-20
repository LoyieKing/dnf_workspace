# SendActionListState

`_ZN8APSystem9CUserProc19SendActionListStateER5CUser`

`APSystem::CUserProc::SendActionListState(CUser&)`

| 类 | 地址 |
|---|---|
| `APSystem::CUserProc` | `0x081224a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081224a0  _ZN8APSystem9CUserProc19SendActionListStateER5CUser
#           APSystem::CUserProc::SendActionListState(CUser&)
# range [0x081224a0, 0x081224ab]
081224a0 +0x00:  push   %ebp
081224a1 +0x01:  mov    %esp,%ebp
081224a3 +0x03:  sub    $0xd20,%esp
081224a9 +0x09:  leave
081224aa +0x0a:  ret
081224ab +0x0b:  nop
```

## 反编译 C

```c
// APSystem::CUserProc::SendActionListState @ 0x81224a0

/* APSystem::CUserProc::SendActionListState(CUser&) */

void APSystem::CUserProc::SendActionListState(CUser *param_1)

{
  return;
}
```
