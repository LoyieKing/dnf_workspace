# get_mail_data

`_ZN13EventClassify14CLevelUpReward13get_mail_dataEv`

`EventClassify::CLevelUpReward::get_mail_data()`

| 类 | 地址 |
|---|---|
| `EventClassify::CLevelUpReward` | `0x0810e2e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810e2e4  _ZN13EventClassify14CLevelUpReward13get_mail_dataEv
#           EventClassify::CLevelUpReward::get_mail_data()
# range [0x0810e2e4, 0x0810e2f1]
0810e2e4 +0x00:  push   %ebp
0810e2e5 +0x01:  mov    %esp,%ebp
0810e2e7 +0x03:  mov    0x8(%ebp),%eax
0810e2ea +0x06:  mov    0x1c(%eax),%eax
0810e2ed +0x09:  add    $0x28,%eax
0810e2f0 +0x0c:  pop    %ebp
0810e2f1 +0x0d:  ret
```

## 反编译 C

```c
// EventClassify::CLevelUpReward::get_mail_data @ 0x810e2e4

/* EventClassify::CLevelUpReward::get_mail_data() */

int __thiscall EventClassify::CLevelUpReward::get_mail_data(CLevelUpReward *this)

{
  return *(int *)(this + 0x1c) + 0x28;
}
```
