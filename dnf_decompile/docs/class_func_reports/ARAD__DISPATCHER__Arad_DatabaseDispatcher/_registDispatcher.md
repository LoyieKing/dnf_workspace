# _registDispatcher

`_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE`

`ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DatabaseDispatcher` | `0x08185144` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08185144  _ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE
#           ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN, ARAD::DISPATCHER::Arad_IDatabaseDispatcher*)
# range [0x08185144, 0x08185189]
08185144 +0x00:  push   %ebp
08185145 +0x01:  mov    %esp,%ebp
08185147 +0x03:  sub    $0x18,%esp
0818514a +0x06:  mov    0xc(%ebp),%eax
0818514d +0x09:  mov    %eax,0x4(%esp)
08185151 +0x0d:  mov    0x8(%ebp),%eax
08185154 +0x10:  mov    %eax,(%esp)
08185157 +0x13:  call   081850e0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>  ; ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
0818515c +0x18:  test   %eax,%eax
0818515e +0x1a:  setne  %al
08185161 +0x1d:  test   %al,%al
08185163 +0x1f:  je     0818516c <+0x28>
08185165 +0x21:  mov    $0x0,%eax
0818516a +0x26:  jmp    08185188 <+0x44>
0818516c +0x28:  mov    0x8(%ebp),%eax
0818516f +0x2b:  lea    0xc(%ebp),%edx
08185172 +0x2e:  mov    %edx,0x4(%esp)
08185176 +0x32:  mov    %eax,(%esp)
08185179 +0x35:  call   08186dc4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x78e>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x78e
0818517e +0x3a:  mov    0x10(%ebp),%edx
08185181 +0x3d:  mov    %edx,(%eax)
08185183 +0x3f:  mov    $0x1,%eax
08185188 +0x44:  leave
08185189 +0x45:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher @ 0x8185144

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN,
   ARAD::DISPATCHER::Arad_IDatabaseDispatcher*) */

bool __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher
          (Arad_DatabaseDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
             ::operator[]((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
                           *)this,(ENUM_INTERNALPACKET_JPN *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}
```
