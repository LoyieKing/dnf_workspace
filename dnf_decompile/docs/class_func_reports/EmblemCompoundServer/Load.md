# Load

`_ZN20EmblemCompoundServer4LoadEv`

`EmblemCompoundServer::Load()`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x081915ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081915ba  _ZN20EmblemCompoundServer4LoadEv
#           EmblemCompoundServer::Load()
# range [0x081915ba, 0x0819162b]
081915ba +0x00:  push   %ebp
081915bb +0x01:  mov    %esp,%ebp
081915bd +0x03:  sub    $0x38,%esp
081915c0 +0x06:  movl   $0x0,0x14(%esp)
081915c8 +0x0e:  movl   $0x1,0x10(%esp)
081915d0 +0x16:  movl   $0x9,0xc(%esp)
081915d8 +0x1e:  movl   $0x1c7,0x8(%esp)
081915e0 +0x26:  movl   $&_ZZN20EmblemCompoundServer4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
081915e8 +0x2e:  lea    -0x18(%ebp),%eax
081915eb +0x31:  mov    %eax,(%esp)
081915ee +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081915f3 +0x39:  movl   $"\t- Loading Emblem Compound script - ",0x4(%esp)
081915fb +0x41:  lea    -0x18(%ebp),%eax
081915fe +0x44:  mov    %eax,(%esp)
08191601 +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08191606 +0x4c:  mov    0x8(%ebp),%eax
08191609 +0x4f:  add    $0x4,%eax
0819160c +0x52:  mov    %eax,(%esp)
0819160f +0x55:  call   088b154a <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv>  ; ARAD::SCRIPT::EmblemCompound::loadScript()
08191614 +0x5a:  test   %eax,%eax
08191616 +0x5c:  setne  %al
08191619 +0x5f:  test   %al,%al
0819161b +0x61:  je     08191624 <+0x6a>
0819161d +0x63:  mov    $0x0,%eax
08191622 +0x68:  jmp    08191629 <+0x6f>
08191624 +0x6a:  mov    $0x1,%eax
08191629 +0x6f:  leave
0819162a +0x70:  ret
0819162b +0x71:  nop
```

## 反编译 C

```c
// EmblemCompoundServer::Load @ 0x81915ba

/* EmblemCompoundServer::Load() */

bool __thiscall EmblemCompoundServer::Load(EmblemCompoundServer *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool EmblemCompoundServer::Load()",0x1c7,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading Emblem Compound script - ");
  iVar1 = ARAD::SCRIPT::EmblemCompound::loadScript((EmblemCompound *)(this + 4));
  return iVar1 == 0;
}
```
