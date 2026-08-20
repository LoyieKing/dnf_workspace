# Dispatcher_UseVendingMachine

`_ZN28Dispatcher_UseVendingMachineC1Ev`

`Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine()`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseVendingMachine` | `0x0821c25c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821c25c  _ZN28Dispatcher_UseVendingMachineC1Ev
#           Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine()
# range [0x0821c25c, 0x0821c2e1]
0821c25c +0x00:  push   %ebp
0821c25d +0x01:  mov    %esp,%ebp
0821c25f +0x03:  push   %edi
0821c260 +0x04:  push   %esi
0821c261 +0x05:  push   %ebx
0821c262 +0x06:  sub    $0x2c,%esp
0821c265 +0x09:  mov    0x8(%ebp),%eax
0821c268 +0x0c:  mov    %eax,(%esp)
0821c26b +0x0f:  call   08236a56 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc100>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc100
0821c270 +0x14:  mov    0x8(%ebp),%eax
0821c273 +0x17:  movl   $&_ZTV28Dispatcher_UseVendingMachine+0x8,(%eax)
0821c279 +0x1d:  movl   $0x0,(%esp)
0821c280 +0x24:  call   0807d750 <_init+0x48>
0821c285 +0x29:  mov    %eax,-0x1c(%ebp)
0821c288 +0x2c:  lea    -0x1c(%ebp),%esi
0821c28b +0x2f:  movl   $0x9c8,(%esp)
0821c292 +0x36:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0821c297 +0x3b:  mov    %eax,%ebx
0821c299 +0x3d:  mov    %ebx,%eax
0821c29b +0x3f:  mov    %esi,0x4(%esp)
0821c29f +0x43:  mov    %eax,(%esp)
0821c2a2 +0x46:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
0821c2a7 +0x4b:  jmp    0821c2bb <+0x5f>
0821c2a9 +0x4d:  mov    %edx,%esi
0821c2ab +0x4f:  mov    %eax,%edi
0821c2ad +0x51:  mov    %ebx,(%esp)
0821c2b0 +0x54:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0821c2b5 +0x59:  mov    %edi,%eax
0821c2b7 +0x5b:  mov    %esi,%edx
0821c2b9 +0x5d:  jmp    0821c2cb <+0x6f>
0821c2bb +0x5f:  mov    %ebx,%edx
0821c2bd +0x61:  mov    0x8(%ebp),%eax
0821c2c0 +0x64:  mov    %edx,0x4(%eax)
0821c2c3 +0x67:  add    $0x2c,%esp
0821c2c6 +0x6a:  pop    %ebx
0821c2c7 +0x6b:  pop    %esi
0821c2c8 +0x6c:  pop    %edi
0821c2c9 +0x6d:  pop    %ebp
0821c2ca +0x6e:  ret
0821c2cb +0x6f:  mov    %edx,%ebx
0821c2cd +0x71:  mov    %eax,%esi
0821c2cf +0x73:  mov    0x8(%ebp),%eax
0821c2d2 +0x76:  mov    %eax,(%esp)
0821c2d5 +0x79:  call   08125696 <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x3f9>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x3f9
0821c2da +0x7e:  mov    %esi,%eax
0821c2dc +0x80:  mov    %ebx,%edx
0821c2de +0x82:  mov    %eax,(%esp)
0821c2e1 +0x85:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine @ 0x821c25c

/* Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine() */

void __thiscall
Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine(Dispatcher_UseVendingMachine *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  IPacketDispatcher<MSG_BASE,ParamBase,(ch_state)0>::IPacketDispatcher
            ((IPacketDispatcher<MSG_BASE,ParamBase,(ch_state)0> *)this);
  *(undefined ***)this = &PTR_dispatch_template_08bd7608;
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 0821c292 to 0821c296 has its CatchHandler @ 0821c2cb */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 0821c2a2 to 0821c2a6 has its CatchHandler @ 0821c2a9 */
  CMTRand::CMTRand(this_00,local_20);
  *(CMTRand **)(this + 4) = this_00;
  return;
}
```
