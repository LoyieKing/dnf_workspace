# RentalMachinePcRoom

`_ZN19RentalMachinePcRoomC1Ev`

`RentalMachinePcRoom::RentalMachinePcRoom()`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x082703c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082703c0  _ZN19RentalMachinePcRoomC1Ev
#           RentalMachinePcRoom::RentalMachinePcRoom()
# range [0x082703c0, 0x08270465]
082703c0 +0x00:  push   %ebp
082703c1 +0x01:  mov    %esp,%ebp
082703c3 +0x03:  push   %edi
082703c4 +0x04:  push   %esi
082703c5 +0x05:  push   %ebx
082703c6 +0x06:  sub    $0x1c,%esp
082703c9 +0x09:  mov    0x8(%ebp),%eax
082703cc +0x0c:  mov    %eax,(%esp)
082703cf +0x0f:  call   0826fa5e <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x60>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x60
082703d4 +0x14:  mov    0x8(%ebp),%eax
082703d7 +0x17:  movl   $&_ZTV19RentalMachinePcRoom+0x8,(%eax)
082703dd +0x1d:  movl   $0x11c,(%esp)
082703e4 +0x24:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082703e9 +0x29:  mov    %eax,%ebx
082703eb +0x2b:  mov    %ebx,%eax
082703ed +0x2d:  mov    %eax,(%esp)
082703f0 +0x30:  call   08271a80 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0xa6>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0xa6
082703f5 +0x35:  jmp    08270409 <+0x49>
082703f7 +0x37:  mov    %edx,%esi
082703f9 +0x39:  mov    %eax,%edi
082703fb +0x3b:  mov    %ebx,(%esp)
082703fe +0x3e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08270403 +0x43:  mov    %edi,%eax
08270405 +0x45:  mov    %esi,%edx
08270407 +0x47:  jmp    08270442 <+0x82>
08270409 +0x49:  mov    %ebx,%eax
0827040b +0x4b:  mov    0x8(%ebp),%edx
0827040e +0x4e:  add    $0x4,%edx
08270411 +0x51:  mov    %eax,0x4(%esp)
08270415 +0x55:  mov    %edx,(%esp)
08270418 +0x58:  call   08271d42 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x368>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x368
0827041d +0x5d:  mov    0x8(%ebp),%eax
08270420 +0x60:  mov    %eax,(%esp)
08270423 +0x63:  call   08270886 <_ZN19RentalMachinePcRoom22initLoggingEnvironmentEv>  ; RentalMachinePcRoom::initLoggingEnvironment()
08270428 +0x68:  jmp    0827045d <+0x9d>
0827042a +0x6a:  mov    %edx,%ebx
0827042c +0x6c:  mov    %eax,%esi
0827042e +0x6e:  mov    0x8(%ebp),%eax
08270431 +0x71:  add    $0x4,%eax
08270434 +0x74:  mov    %eax,(%esp)
08270437 +0x77:  call   08271d68 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x38e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x38e
0827043c +0x7c:  mov    %esi,%eax
0827043e +0x7e:  mov    %ebx,%edx
08270440 +0x80:  jmp    08270442 <+0x82>
08270442 +0x82:  mov    %edx,%ebx
08270444 +0x84:  mov    %eax,%esi
08270446 +0x86:  mov    0x8(%ebp),%eax
08270449 +0x89:  mov    %eax,(%esp)
0827044c +0x8c:  call   0826fa1a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1c
08270451 +0x91:  mov    %esi,%eax
08270453 +0x93:  mov    %ebx,%edx
08270455 +0x95:  mov    %eax,(%esp)
08270458 +0x98:  call   08ae3750 <_Unwind_Resume>
0827045d +0x9d:  add    $0x1c,%esp
08270460 +0xa0:  pop    %ebx
08270461 +0xa1:  pop    %esi
08270462 +0xa2:  pop    %edi
08270463 +0xa3:  pop    %ebp
08270464 +0xa4:  ret
08270465 +0xa5:  nop
```

## 反编译 C

```c
// RentalMachinePcRoom::RentalMachinePcRoom @ 0x82703c0

/* RentalMachinePcRoom::RentalMachinePcRoom() */

void __thiscall RentalMachinePcRoom::RentalMachinePcRoom(RentalMachinePcRoom *this)

{
  RentalMachinePcRoomImpl *this_00;
  
  IRentalMachine::IRentalMachine((IRentalMachine *)this);
  *(undefined ***)this = &PTR__RentalMachinePcRoom_08bfb068;
                    /* try { // try from 082703e4 to 082703e8 has its CatchHandler @ 08270442 */
  this_00 = operator_new(0x11c);
                    /* try { // try from 082703f0 to 082703f4 has its CatchHandler @ 082703f7 */
  RentalMachinePcRoomImpl::RentalMachinePcRoomImpl(this_00);
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::auto_ptr
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4),this_00);
                    /* try { // try from 08270423 to 08270427 has its CatchHandler @ 0827042a */
  initLoggingEnvironment(this);
  return;
}
```
