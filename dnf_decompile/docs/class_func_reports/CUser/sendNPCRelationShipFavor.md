# sendNPCRelationShipFavor

`_ZN5CUser24sendNPCRelationShipFavorEv`

`CUser::sendNPCRelationShipFavor()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868121e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868121e  _ZN5CUser24sendNPCRelationShipFavorEv
#           CUser::sendNPCRelationShipFavor()
# range [0x0868121e, 0x08681223]
0868121e +0x00:  push   %ebp
0868121f +0x01:  mov    %esp,%ebp
08681221 +0x03:  pop    %ebp
08681222 +0x04:  ret
08681223 +0x05:  nop
```

## 反编译 C

```c
// CUser::sendNPCRelationShipFavor @ 0x868121e

/* CUser::sendNPCRelationShipFavor() */

void CUser::sendNPCRelationShipFavor(void)

{
  return;
}
```
