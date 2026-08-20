# _unregistDispatcher

`_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher19_unregistDispatcherENS_23ENUM_INTERNALPACKET_JPNE`

`ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_InternalDispatcher` | `0x08198a48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08198a48  _ZN4ARAD10DISPATCHER23Arad_InternalDispatcher19_unregistDispatcherENS_23ENUM_INTERNALPACKET_JPNE
#           ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
# range [0x08198a48, 0x08198a99]
08198a48 +0x00:  push   %ebp
08198a49 +0x01:  mov    %esp,%ebp
08198a4b +0x03:  sub    $0x28,%esp
08198a4e +0x06:  mov    0xc(%ebp),%eax
08198a51 +0x09:  mov    %eax,0x4(%esp)
08198a55 +0x0d:  mov    0x8(%ebp),%eax
08198a58 +0x10:  mov    %eax,(%esp)
08198a5b +0x13:  call   0819899e <_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>  ; ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
08198a60 +0x18:  test   %eax,%eax
08198a62 +0x1a:  setne  %al
08198a65 +0x1d:  test   %al,%al
08198a67 +0x1f:  je     08198a97 <+0x4f>
08198a69 +0x21:  mov    0x8(%ebp),%edx
08198a6c +0x24:  lea    -0xc(%ebp),%eax
08198a6f +0x27:  lea    0xc(%ebp),%ecx
08198a72 +0x2a:  mov    %ecx,0x8(%esp)
08198a76 +0x2e:  mov    %edx,0x4(%esp)
08198a7a +0x32:  mov    %eax,(%esp)
08198a7d +0x35:  call   0819aa6a <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x750>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x750
08198a82 +0x3a:  sub    $0x4,%esp
08198a85 +0x3d:  mov    0x8(%ebp),%eax
08198a88 +0x40:  mov    -0xc(%ebp),%edx
08198a8b +0x43:  mov    %edx,0x4(%esp)
08198a8f +0x47:  mov    %eax,(%esp)
08198a92 +0x4a:  call   0819abae <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x894>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x894
08198a97 +0x4f:  leave
08198a98 +0x50:  ret
08198a99 +0x51:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher @ 0x8198a48

/* ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

void __thiscall
ARAD::DISPATCHER::Arad_InternalDispatcher::_unregistDispatcher
          (Arad_InternalDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
    ::find((ENUM_INTERNALPACKET_JPN *)local_10);
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
    ::erase((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}
```
