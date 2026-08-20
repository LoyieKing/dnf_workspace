# destroy

`_ZN25STAICharacterCommonScript7destroyEv`

`STAICharacterCommonScript::destroy()`

| 类 | 地址 |
|---|---|
| `STAICharacterCommonScript` | `0x088c98bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c98bc  _ZN25STAICharacterCommonScript7destroyEv
#           STAICharacterCommonScript::destroy()
# range [0x088c98bc, 0x088c98d3]
088c98bc +0x00:  push   %ebp
088c98bd +0x01:  mov    %esp,%ebp
088c98bf +0x03:  sub    $0x18,%esp
088c98c2 +0x06:  mov    0x8(%ebp),%eax
088c98c5 +0x09:  add    $0xac,%eax
088c98ca +0x0e:  mov    %eax,(%esp)
088c98cd +0x11:  call   0836753a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x1506>  ; global constructors keyed to CServerEvent::m_nExpRate+0x1506
088c98d2 +0x16:  leave
088c98d3 +0x17:  ret
```

## 反编译 C

```c
// STAICharacterCommonScript::destroy @ 0x88c98bc

/* STAICharacterCommonScript::destroy() */

void __thiscall STAICharacterCommonScript::destroy(STAICharacterCommonScript *this)

{
  STAIInfoScript::destroy((STAIInfoScript *)(this + 0xac));
  return;
}
```
