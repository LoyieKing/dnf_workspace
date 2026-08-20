# GetDispatcher

`_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE`

`ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DatabaseDispatcher` | `0x081850e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081850e0  _ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE
#           ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN)
# range [0x081850e0, 0x08185143]
081850e0 +0x00:  push   %ebp
081850e1 +0x01:  mov    %esp,%ebp
081850e3 +0x03:  sub    $0x28,%esp
081850e6 +0x06:  mov    0x8(%ebp),%edx
081850e9 +0x09:  lea    -0x10(%ebp),%eax
081850ec +0x0c:  lea    0xc(%ebp),%ecx
081850ef +0x0f:  mov    %ecx,0x8(%esp)
081850f3 +0x13:  mov    %edx,0x4(%esp)
081850f7 +0x17:  mov    %eax,(%esp)
081850fa +0x1a:  call   08186d76 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x740>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x740
081850ff +0x1f:  sub    $0x4,%esp
08185102 +0x22:  mov    0x8(%ebp),%edx
08185105 +0x25:  lea    -0xc(%ebp),%eax
08185108 +0x28:  mov    %edx,0x4(%esp)
0818510c +0x2c:  mov    %eax,(%esp)
0818510f +0x2f:  call   08186d00 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x6ca>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x6ca
08185114 +0x34:  sub    $0x4,%esp
08185117 +0x37:  lea    -0xc(%ebp),%eax
0818511a +0x3a:  mov    %eax,0x4(%esp)
0818511e +0x3e:  lea    -0x10(%ebp),%eax
08185121 +0x41:  mov    %eax,(%esp)
08185124 +0x44:  call   08186da2 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x76c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x76c
08185129 +0x49:  test   %al,%al
0818512b +0x4b:  je     0818513d <+0x5d>
0818512d +0x4d:  lea    -0x10(%ebp),%eax
08185130 +0x50:  mov    %eax,(%esp)
08185133 +0x53:  call   08186db6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x780>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x780
08185138 +0x58:  mov    0x4(%eax),%eax
0818513b +0x5b:  jmp    08185142 <+0x62>
0818513d +0x5d:  mov    $0x0,%eax
08185142 +0x62:  leave
08185143 +0x63:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher @ 0x81850e0

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

undefined4 ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>
  local_14 [4];
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  local_10 [12];
  
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::find(local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
