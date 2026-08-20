# _getMaxFavorLevelNPCCnt

`_ZNK24Dispatcher_GiveGiftToNPC23_getMaxFavorLevelNPCCntEPK5CUser`

`Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt(CUser const*) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_GiveGiftToNPC` | `0x0821e474` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e474  _ZNK24Dispatcher_GiveGiftToNPC23_getMaxFavorLevelNPCCntEPK5CUser
#           Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt(CUser const*) const
# range [0x0821e474, 0x0821e485]
0821e474 +0x00:  push   %ebp
0821e475 +0x01:  mov    %esp,%ebp
0821e477 +0x03:  sub    $0x10,%esp
0821e47a +0x06:  movl   $0x0,-0x4(%ebp)
0821e481 +0x0d:  mov    -0x4(%ebp),%eax
0821e484 +0x10:  leave
0821e485 +0x11:  ret
```

## 反编译 C

```c
// Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt @ 0x821e474

/* Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt(CUser const*) const */

undefined4 Dispatcher_GiveGiftToNPC::_getMaxFavorLevelNPCCnt(CUser *param_1)

{
  return 0;
}
```
