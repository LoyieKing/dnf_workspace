# dungeonFail

`_ZN24Secu_HackLogCheckByParty11dungeonFailEv`

`Secu_HackLogCheckByParty::dungeonFail()`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheckByParty` | `0x0827aaca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827aaca  _ZN24Secu_HackLogCheckByParty11dungeonFailEv
#           Secu_HackLogCheckByParty::dungeonFail()
# range [0x0827aaca, 0x0827aadc]
0827aaca +0x00:  push   %ebp
0827aacb +0x01:  mov    %esp,%ebp
0827aacd +0x03:  sub    $0x18,%esp
0827aad0 +0x06:  mov    0x8(%ebp),%eax
0827aad3 +0x09:  mov    %eax,(%esp)
0827aad6 +0x0c:  call   082799f4 <_ZN24Secu_DungeonAverageCheck11dungeonFailEv>  ; Secu_DungeonAverageCheck::dungeonFail()
0827aadb +0x11:  leave
0827aadc +0x12:  ret
```

## 反编译 C

```c
// Secu_HackLogCheckByParty::dungeonFail @ 0x827aaca

/* Secu_HackLogCheckByParty::dungeonFail() */

void __thiscall Secu_HackLogCheckByParty::dungeonFail(Secu_HackLogCheckByParty *this)

{
  Secu_DungeonAverageCheck::dungeonFail((Secu_DungeonAverageCheck *)this);
  return;
}
```
