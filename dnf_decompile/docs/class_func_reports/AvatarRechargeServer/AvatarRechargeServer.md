# AvatarRechargeServer

`_ZN20AvatarRechargeServerC1Ev`

`AvatarRechargeServer::AvatarRechargeServer()`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x08190200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08190200  _ZN20AvatarRechargeServerC1Ev
#           AvatarRechargeServer::AvatarRechargeServer()
# range [0x08190200, 0x08190245]
08190200 +0x00:  push   %ebp
08190201 +0x01:  mov    %esp,%ebp
08190203 +0x03:  sub    $0x18,%esp
08190206 +0x06:  mov    0x8(%ebp),%eax
08190209 +0x09:  add    $0x4,%eax
0819020c +0x0c:  mov    %eax,(%esp)
0819020f +0x0f:  call   088b0dd0 <_ZN4ARAD6SCRIPT14AvatarRechargeC1Ev>  ; ARAD::SCRIPT::AvatarRecharge::AvatarRecharge()
08190214 +0x14:  mov    0x8(%ebp),%eax
08190217 +0x17:  mov    %eax,(%esp)
0819021a +0x1a:  call   081934a6 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x10e>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x10e
0819021f +0x1f:  mov    0x8(%ebp),%eax
08190222 +0x22:  mov    %eax,(%esp)
08190225 +0x25:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
0819022a +0x2a:  mov    0x8(%ebp),%eax
0819022d +0x2d:  movl   $&_ZTV20AvatarRechargeServer+0x8,(%eax)
08190233 +0x33:  mov    0x8(%ebp),%eax
08190236 +0x36:  movl   $0x0,0x54(%eax)
0819023d +0x3d:  mov    0x8(%ebp),%eax
08190240 +0x40:  movb   $0x0,0x58(%eax)
08190244 +0x44:  leave
08190245 +0x45:  ret
```

## 反编译 C

```c
// AvatarRechargeServer::AvatarRechargeServer @ 0x8190200

/* AvatarRechargeServer::AvatarRechargeServer() */

void __thiscall AvatarRechargeServer::AvatarRechargeServer(AvatarRechargeServer *this)

{
  ARAD::SCRIPT::AvatarRecharge::AvatarRecharge((AvatarRecharge *)(this + 4));
  ARAD::Singleton<AvatarRechargeServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b9b958;
  *(undefined4 *)(this + 0x54) = 0;
  this[0x58] = (AvatarRechargeServer)0x0;
  return;
}
```
