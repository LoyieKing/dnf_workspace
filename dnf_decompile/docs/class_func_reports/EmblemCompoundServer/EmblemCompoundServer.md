# EmblemCompoundServer

`_ZN20EmblemCompoundServerC1Ev`

`EmblemCompoundServer::EmblemCompoundServer()`

| 类 | 地址 |
|---|---|
| `EmblemCompoundServer` | `0x0819155e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819155e  _ZN20EmblemCompoundServerC1Ev
#           EmblemCompoundServer::EmblemCompoundServer()
# range [0x0819155e, 0x08191593]
0819155e +0x00:  push   %ebp
0819155f +0x01:  mov    %esp,%ebp
08191561 +0x03:  sub    $0x18,%esp
08191564 +0x06:  mov    0x8(%ebp),%eax
08191567 +0x09:  add    $0x4,%eax
0819156a +0x0c:  mov    %eax,(%esp)
0819156d +0x0f:  call   088b1408 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev>  ; ARAD::SCRIPT::EmblemCompound::EmblemCompound()
08191572 +0x14:  mov    0x8(%ebp),%eax
08191575 +0x17:  mov    %eax,(%esp)
08191578 +0x1a:  call   08193636 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x29e>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x29e
0819157d +0x1f:  mov    0x8(%ebp),%eax
08191580 +0x22:  mov    %eax,(%esp)
08191583 +0x25:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
08191588 +0x2a:  mov    0x8(%ebp),%eax
0819158b +0x2d:  movl   $&_ZTV20EmblemCompoundServer+0x8,(%eax)
08191591 +0x33:  leave
08191592 +0x34:  ret
08191593 +0x35:  nop
```

## 反编译 C

```c
// EmblemCompoundServer::EmblemCompoundServer @ 0x819155e

/* EmblemCompoundServer::EmblemCompoundServer() */

void __thiscall EmblemCompoundServer::EmblemCompoundServer(EmblemCompoundServer *this)

{
  ARAD::SCRIPT::EmblemCompound::EmblemCompound((EmblemCompound *)(this + 4));
  ARAD::Singleton<EmblemCompoundServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b9b948;
  return;
}
```
