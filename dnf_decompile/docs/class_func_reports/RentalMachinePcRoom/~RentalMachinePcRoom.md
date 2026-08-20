# ~RentalMachinePcRoom

`_ZN19RentalMachinePcRoomD1Ev`

`RentalMachinePcRoom::~RentalMachinePcRoom()`

| 类 | 地址 |
|---|---|
| `RentalMachinePcRoom` | `0x08270466` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270466  _ZN19RentalMachinePcRoomD1Ev
#           RentalMachinePcRoom::~RentalMachinePcRoom()
# range [0x08270466, 0x082704c7]
08270466 +0x00:  push   %ebp
08270467 +0x01:  mov    %esp,%ebp
08270469 +0x03:  push   %esi
0827046a +0x04:  push   %ebx
0827046b +0x05:  sub    $0x10,%esp
0827046e +0x08:  mov    0x8(%ebp),%eax
08270471 +0x0b:  movl   $&_ZTV19RentalMachinePcRoom+0x8,(%eax)
08270477 +0x11:  mov    0x8(%ebp),%eax
0827047a +0x14:  add    $0x4,%eax
0827047d +0x17:  mov    %eax,(%esp)
08270480 +0x1a:  call   08271d68 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x38e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x38e
08270485 +0x1f:  jmp    082704a2 <+0x3c>
08270487 +0x21:  mov    %edx,%ebx
08270489 +0x23:  mov    %eax,%esi
0827048b +0x25:  mov    0x8(%ebp),%eax
0827048e +0x28:  mov    %eax,(%esp)
08270491 +0x2b:  call   0826fa1a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1c
08270496 +0x30:  mov    %esi,%eax
08270498 +0x32:  mov    %ebx,%edx
0827049a +0x34:  mov    %eax,(%esp)
0827049d +0x37:  call   08ae3750 <_Unwind_Resume>
082704a2 +0x3c:  mov    0x8(%ebp),%eax
082704a5 +0x3f:  mov    %eax,(%esp)
082704a8 +0x42:  call   0826fa1a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1c
082704ad +0x47:  mov    $0x0,%eax
082704b2 +0x4c:  test   %al,%al
082704b4 +0x4e:  je     082704c1 <+0x5b>
082704b6 +0x50:  mov    0x8(%ebp),%eax
082704b9 +0x53:  mov    %eax,(%esp)
082704bc +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
082704c1 +0x5b:  add    $0x10,%esp
082704c4 +0x5e:  pop    %ebx
082704c5 +0x5f:  pop    %esi
082704c6 +0x60:  pop    %ebp
082704c7 +0x61:  ret
```

## 反编译 C

```c
// RentalMachinePcRoom::~RentalMachinePcRoom @ 0x8270466

/* WARNING: Removing unreachable block (ram,0x082704b6) */
/* RentalMachinePcRoom::~RentalMachinePcRoom() */

void __thiscall RentalMachinePcRoom::~RentalMachinePcRoom(RentalMachinePcRoom *this)

{
  *(undefined ***)this = &PTR__RentalMachinePcRoom_08bfb068;
                    /* try { // try from 08270480 to 08270484 has its CatchHandler @ 08270487 */
  std::auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl>::~auto_ptr
            ((auto_ptr<RentalMachinePcRoom::RentalMachinePcRoomImpl> *)(this + 4));
  IRentalMachine::~IRentalMachine((IRentalMachine *)this);
  return;
}
```
