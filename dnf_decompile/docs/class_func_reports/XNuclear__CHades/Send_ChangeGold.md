# Send_ChangeGold

`_ZN8XNuclear6CHades15Send_ChangeGoldEv`

`XNuclear::CHades::Send_ChangeGold()`

| 类 | 地址 |
|---|---|
| `XNuclear::CHades` | `0x084b93ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b93ee  _ZN8XNuclear6CHades15Send_ChangeGoldEv
#           XNuclear::CHades::Send_ChangeGold()
# range [0x084b93ee, 0x084b93f3]
084b93ee +0x00:  push   %ebp
084b93ef +0x01:  mov    %esp,%ebp
084b93f1 +0x03:  pop    %ebp
084b93f2 +0x04:  ret
084b93f3 +0x05:  nop
```

## 反编译 C

```c
// XNuclear::CHades::Send_ChangeGold @ 0x84b93ee

/* XNuclear::CHades::Send_ChangeGold() */

void XNuclear::CHades::Send_ChangeGold(void)

{
  return;
}
```
