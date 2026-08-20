# Init

`_ZN24Secu_HackLogCheckByParty4InitEP6CParty`

`Secu_HackLogCheckByParty::Init(CParty*)`

| 类 | 地址 |
|---|---|
| `Secu_HackLogCheckByParty` | `0x0827a908` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827a908  _ZN24Secu_HackLogCheckByParty4InitEP6CParty
#           Secu_HackLogCheckByParty::Init(CParty*)
# range [0x0827a908, 0x0827a92b]
0827a908 +0x00:  push   %ebp
0827a909 +0x01:  mov    %esp,%ebp
0827a90b +0x03:  sub    $0x18,%esp
0827a90e +0x06:  mov    0x8(%ebp),%eax
0827a911 +0x09:  mov    0xc(%ebp),%edx
0827a914 +0x0c:  mov    %edx,0x10(%eax)
0827a917 +0x0f:  mov    0x8(%ebp),%eax
0827a91a +0x12:  mov    0xc(%ebp),%edx
0827a91d +0x15:  mov    %edx,0x4(%esp)
0827a921 +0x19:  mov    %eax,(%esp)
0827a924 +0x1c:  call   082794a6 <_ZN24Secu_DungeonAverageCheck11SetPartyPtrEP6CParty>  ; Secu_DungeonAverageCheck::SetPartyPtr(CParty*)
0827a929 +0x21:  leave
0827a92a +0x22:  ret
0827a92b +0x23:  nop
```

## 反编译 C

```c
// Secu_HackLogCheckByParty::Init @ 0x827a908

/* Secu_HackLogCheckByParty::Init(CParty*) */

void __thiscall Secu_HackLogCheckByParty::Init(Secu_HackLogCheckByParty *this,CParty *param_1)

{
  *(CParty **)(this + 0x10) = param_1;
  Secu_DungeonAverageCheck::SetPartyPtr((Secu_DungeonAverageCheck *)this,param_1);
  return;
}
```
