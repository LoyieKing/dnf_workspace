# InstanceRentalSystem

`_ZN20InstanceRentalSystemC1Ev`

`InstanceRentalSystem::InstanceRentalSystem()`

| 类 | 地址 |
|---|---|
| `InstanceRentalSystem` | `0x08270014` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270014  _ZN20InstanceRentalSystemC1Ev
#           InstanceRentalSystem::InstanceRentalSystem()
# range [0x08270014, 0x0827010f]
08270014 +0x00:  push   %ebp
08270015 +0x01:  mov    %esp,%ebp
08270017 +0x03:  push   %edi
08270018 +0x04:  push   %esi
08270019 +0x05:  push   %ebx
0827001a +0x06:  sub    $0x1c,%esp
0827001d +0x09:  movl   $0x18,(%esp)
08270024 +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08270029 +0x15:  mov    %eax,%ebx
0827002b +0x17:  mov    %ebx,%eax
0827002d +0x19:  mov    %eax,(%esp)
08270030 +0x1c:  call   08271a6c <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x92>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x92
08270035 +0x21:  jmp    0827004f <+0x3b>
08270037 +0x23:  mov    %edx,%esi
08270039 +0x25:  mov    %eax,%edi
0827003b +0x27:  mov    %ebx,(%esp)
0827003e +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08270043 +0x2f:  mov    %edi,%eax
08270045 +0x31:  mov    %esi,%edx
08270047 +0x33:  mov    %eax,(%esp)
0827004a +0x36:  call   08ae3750 <_Unwind_Resume>
0827004f +0x3b:  mov    %ebx,%edx
08270051 +0x3d:  mov    0x8(%ebp),%eax
08270054 +0x40:  mov    %edx,0x4(%esp)
08270058 +0x44:  mov    %eax,(%esp)
0827005b +0x47:  call   08271b2e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x154>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x154
08270060 +0x4c:  movl   $0x8,(%esp)
08270067 +0x53:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0827006c +0x58:  mov    %eax,%ebx
0827006e +0x5a:  mov    %ebx,%eax
08270070 +0x5c:  mov    %eax,(%esp)
08270073 +0x5f:  call   082703c0 <_ZN19RentalMachinePcRoomC1Ev>  ; RentalMachinePcRoom::RentalMachinePcRoom()
08270078 +0x64:  jmp    0827008c <+0x78>
0827007a +0x66:  mov    %edx,%esi
0827007c +0x68:  mov    %eax,%edi
0827007e +0x6a:  mov    %ebx,(%esp)
08270081 +0x6d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08270086 +0x72:  mov    %edi,%eax
08270088 +0x74:  mov    %esi,%edx
0827008a +0x76:  jmp    082700ec <+0xd8>
0827008c +0x78:  mov    %ebx,%eax
0827008e +0x7a:  mov    %eax,0x8(%esp)
08270092 +0x7e:  movl   $0x1,0x4(%esp)
0827009a +0x86:  mov    0x8(%ebp),%eax
0827009d +0x89:  mov    %eax,(%esp)
082700a0 +0x8c:  call   08270320 <_ZN20InstanceRentalSystem21registerRentalMachineEiP14IRentalMachine>  ; InstanceRentalSystem::registerRentalMachine(int, IRentalMachine*)
082700a5 +0x91:  movl   $0x8,(%esp)
082700ac +0x98:  call   08724450 <_Znwj>  ; operator new(unsigned int)
082700b1 +0x9d:  mov    %eax,%ebx
082700b3 +0x9f:  mov    %ebx,%eax
082700b5 +0xa1:  mov    %eax,(%esp)
082700b8 +0xa4:  call   0826eafc <_ZN22RentalMachineDimensionC1Ev>  ; RentalMachineDimension::RentalMachineDimension()
082700bd +0xa9:  jmp    082700d1 <+0xbd>
082700bf +0xab:  mov    %edx,%esi
082700c1 +0xad:  mov    %eax,%edi
082700c3 +0xaf:  mov    %ebx,(%esp)
082700c6 +0xb2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082700cb +0xb7:  mov    %edi,%eax
082700cd +0xb9:  mov    %esi,%edx
082700cf +0xbb:  jmp    082700ec <+0xd8>
082700d1 +0xbd:  mov    %ebx,%eax
082700d3 +0xbf:  mov    %eax,0x8(%esp)
082700d7 +0xc3:  movl   $0x2,0x4(%esp)
082700df +0xcb:  mov    0x8(%ebp),%eax
082700e2 +0xce:  mov    %eax,(%esp)
082700e5 +0xd1:  call   08270320 <_ZN20InstanceRentalSystem21registerRentalMachineEiP14IRentalMachine>  ; InstanceRentalSystem::registerRentalMachine(int, IRentalMachine*)
082700ea +0xd6:  jmp    08270107 <+0xf3>
082700ec +0xd8:  mov    %edx,%ebx
082700ee +0xda:  mov    %eax,%esi
082700f0 +0xdc:  mov    0x8(%ebp),%eax
082700f3 +0xdf:  mov    %eax,(%esp)
082700f6 +0xe2:  call   08271b50 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x176>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x176
082700fb +0xe7:  mov    %esi,%eax
082700fd +0xe9:  mov    %ebx,%edx
082700ff +0xeb:  mov    %eax,(%esp)
08270102 +0xee:  call   08ae3750 <_Unwind_Resume>
08270107 +0xf3:  add    $0x1c,%esp
0827010a +0xf6:  pop    %ebx
0827010b +0xf7:  pop    %esi
0827010c +0xf8:  pop    %edi
0827010d +0xf9:  pop    %ebp
0827010e +0xfa:  ret
0827010f +0xfb:  nop
```

## 反编译 C

```c
// InstanceRentalSystem::InstanceRentalSystem @ 0x8270014

/* InstanceRentalSystem::InstanceRentalSystem() */

void __thiscall InstanceRentalSystem::InstanceRentalSystem(InstanceRentalSystem *this)

{
  RentalSystemImpl *this_00;
  RentalMachinePcRoom *this_01;
  RentalMachineDimension *this_02;
  
  this_00 = operator_new(0x18);
                    /* try { // try from 08270030 to 08270034 has its CatchHandler @ 08270037 */
  RentalSystemImpl::RentalSystemImpl(this_00);
  std::auto_ptr<InstanceRentalSystem::RentalSystemImpl>::auto_ptr
            ((auto_ptr<InstanceRentalSystem::RentalSystemImpl> *)this,this_00);
                    /* try { // try from 08270067 to 0827006b has its CatchHandler @ 082700ec */
  this_01 = operator_new(8);
                    /* try { // try from 08270073 to 08270077 has its CatchHandler @ 0827007a */
  RentalMachinePcRoom::RentalMachinePcRoom(this_01);
                    /* try { // try from 082700a0 to 082700b0 has its CatchHandler @ 082700ec */
  registerRentalMachine(this,1,(IRentalMachine *)this_01);
  this_02 = operator_new(8);
                    /* try { // try from 082700b8 to 082700bc has its CatchHandler @ 082700bf */
  RentalMachineDimension::RentalMachineDimension(this_02);
                    /* try { // try from 082700e5 to 082700e9 has its CatchHandler @ 082700ec */
  registerRentalMachine(this,2,(IRentalMachine *)this_02);
  return;
}
```
