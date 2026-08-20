# finishLoad

`_ZN12advancealtar7Manager10finishLoadEP5CUser`

`advancealtar::Manager::finishLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x08130eb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08130eb2  _ZN12advancealtar7Manager10finishLoadEP5CUser
#           advancealtar::Manager::finishLoad(CUser*)
# range [0x08130eb2, 0x08130fa7]
08130eb2 +0x00:  push   %ebp
08130eb3 +0x01:  mov    %esp,%ebp
08130eb5 +0x03:  push   %esi
08130eb6 +0x04:  push   %ebx
08130eb7 +0x05:  sub    $0x20,%esp
08130eba +0x08:  mov    0x8(%ebp),%eax
08130ebd +0x0b:  mov    %eax,(%esp)
08130ec0 +0x0e:  call   08655262 <_ZN5CUser15getAdvanceAltarEv>  ; CUser::getAdvanceAltar()
08130ec5 +0x13:  mov    %eax,-0xc(%ebp)
08130ec8 +0x16:  cmpl   $0x0,-0xc(%ebp)
08130ecc +0x1a:  je     08130f99 <+0xe7>
08130ed2 +0x20:  mov    0x8(%ebp),%eax
08130ed5 +0x23:  add    $0x8df60,%eax
08130eda +0x28:  mov    %eax,(%esp)
08130edd +0x2b:  call   081312ec <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv>  ; advancealtar::CharacAdvanceAltarManager::isAvailableTciket() const
08130ee2 +0x30:  xor    $0x1,%eax
08130ee5 +0x33:  test   %al,%al
08130ee7 +0x35:  je     08130ef3 <+0x41>
08130ee9 +0x37:  mov    $0x1,%ebx
08130eee +0x3c:  jmp    08130f9e <+0xec>
08130ef3 +0x41:  mov    -0xc(%ebp),%eax
08130ef6 +0x44:  mov    %eax,(%esp)
08130ef9 +0x47:  call   081348ae <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4b5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4b5
08130efe +0x4c:  movl   $0x1,0x4(%esp)
08130f06 +0x54:  mov    %eax,(%esp)
08130f09 +0x57:  call   08134844 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x44b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x44b
08130f0e +0x5c:  lea    -0x18(%ebp),%eax
08130f11 +0x5f:  mov    %eax,(%esp)
08130f14 +0x62:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08130f19 +0x67:  movl   $0x1e,0x8(%esp)
08130f21 +0x6f:  movl   $0x0,0x4(%esp)
08130f29 +0x77:  lea    -0x18(%ebp),%eax
08130f2c +0x7a:  mov    %eax,(%esp)
08130f2f +0x7d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08130f34 +0x82:  movl   $0x0,0x4(%esp)
08130f3c +0x8a:  lea    -0x18(%ebp),%eax
08130f3f +0x8d:  mov    %eax,(%esp)
08130f42 +0x90:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08130f47 +0x95:  movl   $0x1,0x4(%esp)
08130f4f +0x9d:  lea    -0x18(%ebp),%eax
08130f52 +0xa0:  mov    %eax,(%esp)
08130f55 +0xa3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08130f5a +0xa8:  lea    -0x18(%ebp),%eax
08130f5d +0xab:  mov    %eax,0x4(%esp)
08130f61 +0xaf:  mov    0x8(%ebp),%eax
08130f64 +0xb2:  mov    %eax,(%esp)
08130f67 +0xb5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08130f6c +0xba:  mov    $0x1,%ebx
08130f71 +0xbf:  lea    -0x18(%ebp),%eax
08130f74 +0xc2:  mov    %eax,(%esp)
08130f77 +0xc5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130f7c +0xca:  jmp    08130f9e <+0xec>
08130f7e +0xcc:  mov    %edx,%ebx
08130f80 +0xce:  mov    %eax,%esi
08130f82 +0xd0:  lea    -0x18(%ebp),%eax
08130f85 +0xd3:  mov    %eax,(%esp)
08130f88 +0xd6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08130f8d +0xdb:  mov    %esi,%eax
08130f8f +0xdd:  mov    %ebx,%edx
08130f91 +0xdf:  mov    %eax,(%esp)
08130f94 +0xe2:  call   08ae3750 <_Unwind_Resume>
08130f99 +0xe7:  mov    $0x0,%ebx
08130f9e +0xec:  mov    %ebx,%eax
08130fa0 +0xee:  add    $0x20,%esp
08130fa3 +0xf1:  pop    %ebx
08130fa4 +0xf2:  pop    %esi
08130fa5 +0xf3:  pop    %ebp
08130fa6 +0xf4:  ret
08130fa7 +0xf5:  nop
```

## 反编译 C

```c
// advancealtar::Manager::finishLoad @ 0x8130eb2

/* advancealtar::Manager::finishLoad(CUser*) */

undefined4 advancealtar::Manager::finishLoad(CUser *param_1)

{
  char cVar1;
  ProcStage *pPVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  StageControl *local_10;
  
  local_10 = (StageControl *)CUser::getAdvanceAltar(param_1);
  if (local_10 == (StageControl *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CharacAdvanceAltarManager::isAvailableTciket
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
    if (cVar1 == '\x01') {
      pPVar2 = (ProcStage *)StageControl::getProcStage(local_10);
      ProcStage::setState(pPVar2,1);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08130f2f to 08130f6b has its CatchHandler @ 08130f7e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      uVar3 = 1;
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}
```
