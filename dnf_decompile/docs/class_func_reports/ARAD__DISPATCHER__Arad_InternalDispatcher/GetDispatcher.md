# GetDispatcher

`_ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE`

`ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_InternalDispatcher` | `0x0819899e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819899e  _ZN4ARAD10DISPATCHER23Arad_InternalDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE
#           ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
# range [0x0819899e, 0x08198a01]
0819899e +0x00:  push   %ebp
0819899f +0x01:  mov    %esp,%ebp
081989a1 +0x03:  sub    $0x28,%esp
081989a4 +0x06:  mov    0x8(%ebp),%edx
081989a7 +0x09:  lea    -0x10(%ebp),%eax
081989aa +0x0c:  lea    0xc(%ebp),%ecx
081989ad +0x0f:  mov    %ecx,0x8(%esp)
081989b1 +0x13:  mov    %edx,0x4(%esp)
081989b5 +0x17:  mov    %eax,(%esp)
081989b8 +0x1a:  call   0819aa6a <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x750>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x750
081989bd +0x1f:  sub    $0x4,%esp
081989c0 +0x22:  mov    0x8(%ebp),%edx
081989c3 +0x25:  lea    -0xc(%ebp),%eax
081989c6 +0x28:  mov    %edx,0x4(%esp)
081989ca +0x2c:  mov    %eax,(%esp)
081989cd +0x2f:  call   0819a9f4 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x6da>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x6da
081989d2 +0x34:  sub    $0x4,%esp
081989d5 +0x37:  lea    -0xc(%ebp),%eax
081989d8 +0x3a:  mov    %eax,0x4(%esp)
081989dc +0x3e:  lea    -0x10(%ebp),%eax
081989df +0x41:  mov    %eax,(%esp)
081989e2 +0x44:  call   0819aa96 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x77c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x77c
081989e7 +0x49:  test   %al,%al
081989e9 +0x4b:  je     081989fb <+0x5d>
081989eb +0x4d:  lea    -0x10(%ebp),%eax
081989ee +0x50:  mov    %eax,(%esp)
081989f1 +0x53:  call   0819aaaa <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x790>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x790
081989f6 +0x58:  mov    0x4(%eax),%eax
081989f9 +0x5b:  jmp    08198a00 <+0x62>
081989fb +0x5d:  mov    $0x0,%eax
08198a00 +0x62:  leave
08198a01 +0x63:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher @ 0x819899e

/* ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

undefined4 ARAD::DISPATCHER::Arad_InternalDispatcher::GetDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>
  local_14 [4];
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  local_10 [12];
  
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::find(local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IInterDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IInterDispatcher*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
