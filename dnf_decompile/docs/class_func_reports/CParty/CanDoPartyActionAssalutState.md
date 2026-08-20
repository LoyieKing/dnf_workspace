# CanDoPartyActionAssalutState

`_ZN6CParty28CanDoPartyActionAssalutStateEv`

`CParty::CanDoPartyActionAssalutState()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859a318` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859a318  _ZN6CParty28CanDoPartyActionAssalutStateEv
#           CParty::CanDoPartyActionAssalutState()
# range [0x0859a318, 0x0859a34d]
0859a318 +0x00:  push   %ebp
0859a319 +0x01:  mov    %esp,%ebp
0859a31b +0x03:  sub    $0x28,%esp
0859a31e +0x06:  mov    0x8(%ebp),%eax
0859a321 +0x09:  mov    %eax,(%esp)
0859a324 +0x0c:  call   085bf81e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xd7c>  ; global constructors keyed to CParty::cMember::cMember()+0xd7c
0859a329 +0x11:  movsbl %al,%eax
0859a32c +0x14:  mov    %eax,-0xc(%ebp)
0859a32f +0x17:  mov    -0xc(%ebp),%eax
0859a332 +0x1a:  cmp    $0x1,%eax
0859a335 +0x1d:  jle    0859a346 <+0x2e>
0859a337 +0x1f:  mov    -0xc(%ebp),%eax
0859a33a +0x22:  cmp    $0x6,%eax
0859a33d +0x25:  jg     0859a346 <+0x2e>
0859a33f +0x27:  mov    $0x0,%eax
0859a344 +0x2c:  jmp    0859a34b <+0x33>
0859a346 +0x2e:  mov    $0x1,%eax
0859a34b +0x33:  leave
0859a34c +0x34:  ret
0859a34d +0x35:  nop
```

## 反编译 C

```c
// CParty::CanDoPartyActionAssalutState @ 0x859a318

/* CParty::CanDoPartyActionAssalutState() */

undefined4 __thiscall CParty::CanDoPartyActionAssalutState(CParty *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = GetAssaultState(this);
  if ((cVar1 < '\x02') || ('\x06' < cVar1)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
