# _IsChangeDieState

`_ZN11pvp_assault13CAssaultPlace17_IsChangeDieStateEv`

`pvp_assault::CAssaultPlace::_IsChangeDieState()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ebaee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ebaee  _ZN11pvp_assault13CAssaultPlace17_IsChangeDieStateEv
#           pvp_assault::CAssaultPlace::_IsChangeDieState()
# range [0x082ebaee, 0x082ebaf7]
082ebaee +0x00:  push   %ebp
082ebaef +0x01:  mov    %esp,%ebp
082ebaf1 +0x03:  mov    $0x1,%eax
082ebaf6 +0x08:  pop    %ebp
082ebaf7 +0x09:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_IsChangeDieState @ 0x82ebaee

/* pvp_assault::CAssaultPlace::_IsChangeDieState() */

undefined4 pvp_assault::CAssaultPlace::_IsChangeDieState(void)

{
  return 1;
}
```
