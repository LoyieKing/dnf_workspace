# Load

`_ZN20AvatarRechargeServer4LoadEv`

`AvatarRechargeServer::Load()`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x0819026c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819026c  _ZN20AvatarRechargeServer4LoadEv
#           AvatarRechargeServer::Load()
# range [0x0819026c, 0x081902dd]
0819026c +0x00:  push   %ebp
0819026d +0x01:  mov    %esp,%ebp
0819026f +0x03:  sub    $0x38,%esp
08190272 +0x06:  movl   $0x0,0x14(%esp)
0819027a +0x0e:  movl   $0x1,0x10(%esp)
08190282 +0x16:  movl   $0x9,0xc(%esp)
0819028a +0x1e:  movl   $0x22,0x8(%esp)
08190292 +0x26:  movl   $&_ZZN20AvatarRechargeServer4LoadEvE19__PRETTY_FUNCTION__,0x4(%esp)
0819029a +0x2e:  lea    -0x18(%ebp),%eax
0819029d +0x31:  mov    %eax,(%esp)
081902a0 +0x34:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
081902a5 +0x39:  movl   $"\t- Loading Avatar Recharge script - ",0x4(%esp)
081902ad +0x41:  lea    -0x18(%ebp),%eax
081902b0 +0x44:  mov    %eax,(%esp)
081902b3 +0x47:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081902b8 +0x4c:  mov    0x8(%ebp),%eax
081902bb +0x4f:  add    $0x4,%eax
081902be +0x52:  mov    %eax,(%esp)
081902c1 +0x55:  call   088b0eba <_ZN4ARAD6SCRIPT14AvatarRecharge10loadScriptEv>  ; ARAD::SCRIPT::AvatarRecharge::loadScript()
081902c6 +0x5a:  test   %eax,%eax
081902c8 +0x5c:  setne  %al
081902cb +0x5f:  test   %al,%al
081902cd +0x61:  je     081902d6 <+0x6a>
081902cf +0x63:  mov    $0x0,%eax
081902d4 +0x68:  jmp    081902db <+0x6f>
081902d6 +0x6a:  mov    $0x1,%eax
081902db +0x6f:  leave
081902dc +0x70:  ret
081902dd +0x71:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::Load @ 0x819026c

/* AvatarRechargeServer::Load() */

bool __thiscall AvatarRechargeServer::Load(AvatarRechargeServer *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool AvatarRechargeServer::Load()",0x22,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading Avatar Recharge script - ");
  iVar1 = ARAD::SCRIPT::AvatarRecharge::loadScript((AvatarRecharge *)(this + 4));
  return iVar1 == 0;
}
```
