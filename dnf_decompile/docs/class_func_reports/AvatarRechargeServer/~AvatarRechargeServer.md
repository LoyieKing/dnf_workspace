# ~AvatarRechargeServer

`_ZN20AvatarRechargeServerD1Ev`

`AvatarRechargeServer::~AvatarRechargeServer()`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190246  _ZN20AvatarRechargeServerD1Ev
#           AvatarRechargeServer::~AvatarRechargeServer()
# range [0x08190246, 0x08190265]
08190246 +0x00:  push   %ebp
08190247 +0x01:  mov    %esp,%ebp
08190249 +0x03:  sub    $0x18,%esp
0819024c +0x06:  mov    0x8(%ebp),%eax
0819024f +0x09:  movl   $&_ZTV20AvatarRechargeServer+0x8,(%eax)
08190255 +0x0f:  mov    0x8(%ebp),%eax
08190258 +0x12:  add    $0x4,%eax
0819025b +0x15:  mov    %eax,(%esp)
0819025e +0x18:  call   088b0e46 <_ZN4ARAD6SCRIPT14AvatarRechargeD1Ev>  ; ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge()
08190263 +0x1d:  leave
08190264 +0x1e:  ret
08190265 +0x1f:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::~AvatarRechargeServer @ 0x8190246

/* AvatarRechargeServer::~AvatarRechargeServer() */

void __thiscall AvatarRechargeServer::~AvatarRechargeServer(AvatarRechargeServer *this)

{
  *(undefined ***)this = &PTR_Load_08b9b958;
  ARAD::SCRIPT::AvatarRecharge::~AvatarRecharge((AvatarRecharge *)(this + 4));
  return;
}
```
