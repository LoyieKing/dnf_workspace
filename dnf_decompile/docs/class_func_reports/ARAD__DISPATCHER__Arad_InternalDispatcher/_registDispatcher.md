# _registDispatcher

`_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE`

`ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_InternalDispatcher` | `0x08198a02` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198a02  _ZN4ARAD10DISPATCHER23Arad_InternalDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_21Arad_IInterDispatcherE
#           ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IInterDispatcher*)
# range [0x08198a02, 0x08198a47]
08198a02 +0x00:  push   %ebp
08198a03 +0x01:  mov    %esp,%ebp
08198a05 +0x03:  sub    $0x18,%esp
08198a08 +0x06:  mov    0xc(%ebp),%eax
08198a0b +0x09:  mov    %eax,0x4(%esp)
08198a0f +0x0d:  mov    0x8(%ebp),%eax
08198a12 +0x10:  mov    %eax,(%esp)
08198a15 +0x13:  call   0819899e <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
08198a1a +0x18:  test   %eax,%eax
08198a1c +0x1a:  setne  %al
08198a1f +0x1d:  test   %al,%al
08198a21 +0x1f:  je     08198a2a <+0x28>
08198a23 +0x21:  mov    $0x0,%eax
08198a28 +0x26:  jmp    08198a46 <+0x44>
08198a2a +0x28:  mov    0x8(%ebp),%eax
08198a2d +0x2b:  lea    0xc(%ebp),%edx
08198a30 +0x2e:  mov    %edx,0x4(%esp)
08198a34 +0x32:  mov    %eax,(%esp)
08198a37 +0x35:  call   0819aab8 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x79e>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x79e
08198a3c +0x3a:  mov    0x10(%ebp),%edx
08198a3f +0x3d:  mov    %edx,(%eax)
08198a41 +0x3f:  mov    $0x1,%eax
08198a46 +0x44:  leave
08198a47 +0x45:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher @ 0x8198a02

/* ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN,
   ARAD::DISPATCHER::Arad_IInterDispatcher*) */

bool __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::_registDispatcher
          (Arad_InternalDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
             ::operator[]((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
                           *)this,(ENUM_INTERNALPACKET_JPN *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}
```
