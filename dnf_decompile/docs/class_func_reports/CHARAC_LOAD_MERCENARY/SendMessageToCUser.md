# SendMessageToCUser

`_ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc`

`CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const`

| 类 | 地址 |
|---|---|
| `CHARAC_LOAD_MERCENARY` | `0x081b4190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b4190  _ZNK21CHARAC_LOAD_MERCENARY18SendMessageToCUserEP5CUserPc
#           CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const
# range [0x081b4190, 0x081b4197]
081b4190 +0x00:  push   %ebp
081b4191 +0x01:  mov    %esp,%ebp
081b4193 +0x03:  sub    $0x10,%esp
081b4196 +0x06:  leave
081b4197 +0x07:  ret
```

## 反编译 C

```c
// CHARAC_LOAD_MERCENARY::SendMessageToCUser @ 0x81b4190

/* CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser*, char*) const */

void CHARAC_LOAD_MERCENARY::SendMessageToCUser(CUser *param_1,char *param_2)

{
  return;
}
```
