# GetCharacPlayTick

`_ZN15CUserCharacInfo17GetCharacPlayTickEv`

`CUserCharacInfo::GetCharacPlayTick()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645538` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645538  _ZN15CUserCharacInfo17GetCharacPlayTickEv
#           CUserCharacInfo::GetCharacPlayTick()
# range [0x08645538, 0x08645563]
08645538 +0x00:  push   %ebp
08645539 +0x01:  mov    %esp,%ebp
0864553b +0x03:  push   %ebx
0864553c +0x04:  sub    $0x14,%esp
0864553f +0x07:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08645546 +0x0e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0864554b +0x13:  mov    %eax,%ebx
0864554d +0x15:  mov    0x8(%ebp),%eax
08645550 +0x18:  mov    %eax,(%esp)
08645553 +0x1b:  call   08696922 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3177>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3177
08645558 +0x20:  mov    %ebx,%edx
0864555a +0x22:  sub    %eax,%edx
0864555c +0x24:  mov    %edx,%eax
0864555e +0x26:  add    $0x14,%esp
08645561 +0x29:  pop    %ebx
08645562 +0x2a:  pop    %ebp
08645563 +0x2b:  ret
```

## 反编译 C

```c
// CUserCharacInfo::GetCharacPlayTick @ 0x8645538

/* CUserCharacInfo::GetCharacPlayTick() */

int __thiscall CUserCharacInfo::GetCharacPlayTick(CUserCharacInfo *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar2 = GetCharacStartPlayTick(this);
  return iVar1 - iVar2;
}
```
