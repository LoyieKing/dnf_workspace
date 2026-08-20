# _getVendingMachineInfo

`_ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj`

`Dispatcher_UseVendingMachine::_getVendingMachineInfo(stVendingMachine_t const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821b698` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b698  _ZNK28Dispatcher_UseVendingMachine22_getVendingMachineInfoEPK18stVendingMachine_tj
#           Dispatcher_UseVendingMachine::_getVendingMachineInfo(stVendingMachine_t const*, unsigned int) const
# range [0x0821b698, 0x0821b71b]
0821b698 +0x00:  push   %ebp
0821b699 +0x01:  mov    %esp,%ebp
0821b69b +0x03:  sub    $0x28,%esp
0821b69e +0x06:  mov    0xc(%ebp),%eax
0821b6a1 +0x09:  lea    0x4(%eax),%edx
0821b6a4 +0x0c:  lea    -0xc(%ebp),%eax
0821b6a7 +0x0f:  mov    %edx,0x4(%esp)
0821b6ab +0x13:  mov    %eax,(%esp)
0821b6ae +0x16:  call   08237d08 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd3b2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd3b2
0821b6b3 +0x1b:  sub    $0x4,%esp
0821b6b6 +0x1e:  mov    0xc(%ebp),%eax
0821b6b9 +0x21:  lea    0x4(%eax),%edx
0821b6bc +0x24:  lea    -0x10(%ebp),%eax
0821b6bf +0x27:  mov    %edx,0x4(%esp)
0821b6c3 +0x2b:  mov    %eax,(%esp)
0821b6c6 +0x2e:  call   08237d34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd3de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd3de
0821b6cb +0x33:  sub    $0x4,%esp
0821b6ce +0x36:  jmp    0821b6ff <+0x67>
0821b6d0 +0x38:  lea    -0xc(%ebp),%eax
0821b6d3 +0x3b:  mov    %eax,(%esp)
0821b6d6 +0x3e:  call   08237da2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd44c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd44c
0821b6db +0x43:  mov    (%eax),%eax
0821b6dd +0x45:  cmp    0x10(%ebp),%eax
0821b6e0 +0x48:  sete   %al
0821b6e3 +0x4b:  test   %al,%al
0821b6e5 +0x4d:  je     0821b6f4 <+0x5c>
0821b6e7 +0x4f:  lea    -0xc(%ebp),%eax
0821b6ea +0x52:  mov    %eax,(%esp)
0821b6ed +0x55:  call   08237dac <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd456>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd456
0821b6f2 +0x5a:  jmp    0821b71a <+0x82>
0821b6f4 +0x5c:  lea    -0xc(%ebp),%eax
0821b6f7 +0x5f:  mov    %eax,(%esp)
0821b6fa +0x62:  call   08237d8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd436>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd436
0821b6ff +0x67:  lea    -0x10(%ebp),%eax
0821b702 +0x6a:  mov    %eax,0x4(%esp)
0821b706 +0x6e:  lea    -0xc(%ebp),%eax
0821b709 +0x71:  mov    %eax,(%esp)
0821b70c +0x74:  call   08237d60 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd40a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd40a
0821b711 +0x79:  test   %al,%al
0821b713 +0x7b:  jne    0821b6d0 <+0x38>
0821b715 +0x7d:  mov    $0x0,%eax
0821b71a +0x82:  leave
0821b71b +0x83:  ret
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::_getVendingMachineInfo @ 0x821b698

/* Dispatcher_UseVendingMachine::_getVendingMachineInfo(stVendingMachine_t const*, unsigned int)
   const */

undefined4 __thiscall
Dispatcher_UseVendingMachine::_getVendingMachineInfo
          (Dispatcher_UseVendingMachine *this,stVendingMachine_t *param_1,uint param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
  local_10 [12];
  
  std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::begin();
  std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) {
      return 0;
    }
    puVar2 = (uint *)__gnu_cxx::
                     __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
                     ::operator->(local_10);
    if (*puVar2 == param_2) break;
    __gnu_cxx::
    __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
    ::operator++(local_10);
  }
  uVar3 = __gnu_cxx::
          __normal_iterator<stVendingMachineInfo_t_const*,std::vector<stVendingMachineInfo_t,std::allocator<stVendingMachineInfo_t>>>
          ::operator*(local_10);
  return uVar3;
}
```
