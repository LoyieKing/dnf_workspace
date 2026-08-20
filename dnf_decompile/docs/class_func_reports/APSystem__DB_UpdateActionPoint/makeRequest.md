# makeRequest

`_ZN8APSystem20DB_UpdateActionPoint11makeRequestEiRKNS_22_SIG_LOAD_ACTION_POINTEb`

`APSystem::DB_UpdateActionPoint::makeRequest(int, APSystem::_SIG_LOAD_ACTION_POINT const&, bool)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateActionPoint` | `0x0812431c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812431c  _ZN8APSystem20DB_UpdateActionPoint11makeRequestEiRKNS_22_SIG_LOAD_ACTION_POINTEb
#           APSystem::DB_UpdateActionPoint::makeRequest(int, APSystem::_SIG_LOAD_ACTION_POINT const&, bool)
# range [0x0812431c, 0x08124329]
0812431c +0x00:  push   %ebp
0812431d +0x01:  mov    %esp,%ebp
0812431f +0x03:  sub    $0x14,%esp
08124322 +0x06:  mov    0x10(%ebp),%eax
08124325 +0x09:  mov    %al,-0x14(%ebp)
08124328 +0x0c:  leave
08124329 +0x0d:  ret
```

## 反编译 C

```c
// APSystem::DB_UpdateActionPoint::makeRequest @ 0x812431c

/* APSystem::DB_UpdateActionPoint::makeRequest(int, APSystem::_SIG_LOAD_ACTION_POINT const&, bool)
    */

void APSystem::DB_UpdateActionPoint::makeRequest
               (int param_1,_SIG_LOAD_ACTION_POINT *param_2,bool param_3)

{
  return;
}
```
