# parse_se_event_db

`_ZN12CEnvironment17parse_se_event_dbEPcS0_`

`CEnvironment::parse_se_event_db(char*, char*)`

| 类 | 地址 |
|---|---|
| `CEnvironment` | `0x082930b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082930b8  _ZN12CEnvironment17parse_se_event_dbEPcS0_
#           CEnvironment::parse_se_event_db(char*, char*)
# range [0x082930b8, 0x082930c1]
082930b8 +0x00:  push   %ebp
082930b9 +0x01:  mov    %esp,%ebp
082930bb +0x03:  mov    $0x1,%eax
082930c0 +0x08:  pop    %ebp
082930c1 +0x09:  ret
```

## 反编译 C

```c
// CEnvironment::parse_se_event_db @ 0x82930b8

/* CEnvironment::parse_se_event_db(char*, char*) */

undefined4 CEnvironment::parse_se_event_db(char *param_1,char *param_2)

{
  return 1;
}
```
