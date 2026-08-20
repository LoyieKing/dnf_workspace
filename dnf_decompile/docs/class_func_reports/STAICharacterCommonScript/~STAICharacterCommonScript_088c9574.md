# ~STAICharacterCommonScript

`_ZN25STAICharacterCommonScriptD0Ev`

`STAICharacterCommonScript::~STAICharacterCommonScript()`

| 类 | 地址 |
|---|---|
| `STAICharacterCommonScript` | `0x088c9574` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088c9574  _ZN25STAICharacterCommonScriptD0Ev
#           STAICharacterCommonScript::~STAICharacterCommonScript()
# range [0x088c9574, 0x088c9591]
088c9574 +0x00:  push   %ebp
088c9575 +0x01:  mov    %esp,%ebp
088c9577 +0x03:  sub    $0x18,%esp
088c957a +0x06:  mov    0x8(%ebp),%eax
088c957d +0x09:  mov    %eax,(%esp)
088c9580 +0x0c:  call   088c903c <_ZN25STAICharacterCommonScriptD1Ev>  ; STAICharacterCommonScript::~STAICharacterCommonScript()
088c9585 +0x11:  mov    0x8(%ebp),%eax
088c9588 +0x14:  mov    %eax,(%esp)
088c958b +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
088c9590 +0x1c:  leave
088c9591 +0x1d:  ret
```

## 反编译 C

```c
// STAICharacterCommonScript::~STAICharacterCommonScript @ 0x88c9574

/* STAICharacterCommonScript::~STAICharacterCommonScript() */

void __thiscall
STAICharacterCommonScript::~STAICharacterCommonScript(STAICharacterCommonScript *this)

{
  ~STAICharacterCommonScript(this);
  operator_delete(this);
  return;
}
```
