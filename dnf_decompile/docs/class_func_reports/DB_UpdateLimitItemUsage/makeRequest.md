# makeRequest

`_ZN23DB_UpdateLimitItemUsage11makeRequestEiiiil`

`DB_UpdateLimitItemUsage::makeRequest(int, int, int, int, long)`

| 类 | 地址 |
|---|---|
| `DB_UpdateLimitItemUsage` | `0x0843f030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843f030  _ZN23DB_UpdateLimitItemUsage11makeRequestEiiiil
#           DB_UpdateLimitItemUsage::makeRequest(int, int, int, int, long)
# range [0x0843f030, 0x0843f037]
0843f030 +0x00:  push   %ebp
0843f031 +0x01:  mov    %esp,%ebp
0843f033 +0x03:  sub    $0x10,%esp
0843f036 +0x06:  leave
0843f037 +0x07:  ret
```

## 反编译 C

```c
// DB_UpdateLimitItemUsage::makeRequest @ 0x843f030

/* DB_UpdateLimitItemUsage::makeRequest(int, int, int, int, long) */

void DB_UpdateLimitItemUsage::makeRequest
               (int param_1,int param_2,int param_3,int param_4,long param_5)

{
  return;
}
```
