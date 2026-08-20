# cMember

`_ZN6CParty7cMemberC1Ev`

`CParty::cMember::cMember()`

| 类 | 地址 |
|---|---|
| `CParty::cMember` | `0x08599a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599a14  _ZN6CParty7cMemberC1Ev
#           CParty::cMember::cMember()
# range [0x08599a14, 0x08599a27]
08599a14 +0x00:  push   %ebp
08599a15 +0x01:  mov    %esp,%ebp
08599a17 +0x03:  sub    $0x18,%esp
08599a1a +0x06:  mov    0x8(%ebp),%eax
08599a1d +0x09:  mov    %eax,(%esp)
08599a20 +0x0c:  call   08599a28 <_ZN6CParty7cMember4InitEv>  ; CParty::cMember::Init()
08599a25 +0x11:  leave
08599a26 +0x12:  ret
08599a27 +0x13:  nop
```

## 反编译 C

```c
// CParty::cMember::cMember @ 0x8599a14

/* CParty::cMember::cMember() */

void __thiscall CParty::cMember::cMember(cMember *this)

{
  Init(this);
  return;
}
```
