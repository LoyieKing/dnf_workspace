# changeCharacName

`_ZN10CEventBase16changeCharacNameEP5CUseriPci`

`CEventBase::changeCharacName(CUser*, int, char*, int)`

| 类 | 地址 |
|---|---|
| `CEventBase` | `0x0810ae96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ae96  _ZN10CEventBase16changeCharacNameEP5CUseriPci
#           CEventBase::changeCharacName(CUser*, int, char*, int)
# range [0x0810ae96, 0x0810ae9b]
0810ae96 +0x00:  push   %ebp
0810ae97 +0x01:  mov    %esp,%ebp
0810ae99 +0x03:  pop    %ebp
0810ae9a +0x04:  ret
0810ae9b +0x05:  nop
```

## 反编译 C

```c
// CEventBase::changeCharacName @ 0x810ae96

/* CEventBase::changeCharacName(CUser*, int, char*, int) */

void CEventBase::changeCharacName(CUser *param_1,int param_2,char *param_3,int param_4)

{
  return;
}
```
