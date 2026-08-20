# execute

`_ZN11game_master19CSetMultiboxFailCnt7executeEv`

`game_master::CSetMultiboxFailCnt::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CSetMultiboxFailCnt` | `0x084b34f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b34f8  _ZN11game_master19CSetMultiboxFailCnt7executeEv
#           game_master::CSetMultiboxFailCnt::execute()
# range [0x084b34f8, 0x084b35c3]
084b34f8 +0x00:  push   %ebp
084b34f9 +0x01:  mov    %esp,%ebp
084b34fb +0x03:  push   %esi
084b34fc +0x04:  push   %ebx
084b34fd +0x05:  sub    $0x20,%esp
084b3500 +0x08:  mov    0x8(%ebp),%eax
084b3503 +0x0b:  mov    %eax,(%esp)
084b3506 +0x0e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b350b +0x13:  mov    %eax,-0xc(%ebp)
084b350e +0x16:  cmpl   $0x0,-0xc(%ebp)
084b3512 +0x1a:  je     084b35bc <+0xc4>
084b3518 +0x20:  mov    0x8(%ebp),%eax
084b351b +0x23:  mov    0x8(%eax),%eax
084b351e +0x26:  mov    %eax,0x4(%esp)
084b3522 +0x2a:  mov    -0xc(%ebp),%eax
084b3525 +0x2d:  mov    %eax,(%esp)
084b3528 +0x30:  call   080fdf44 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x270>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x270
084b352d +0x35:  mov    0x8(%ebp),%eax
084b3530 +0x38:  mov    0x8(%eax),%eax
084b3533 +0x3b:  cmp    $0x2,%eax
084b3536 +0x3e:  jle    084b35bd <+0xc5>
084b353c +0x44:  lea    -0x18(%ebp),%eax
084b353f +0x47:  mov    %eax,(%esp)
084b3542 +0x4a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b3547 +0x4f:  lea    -0x18(%ebp),%eax
084b354a +0x52:  mov    %eax,(%esp)
084b354d +0x55:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084b3552 +0x5a:  movl   $0x1c6,0x8(%esp)
084b355a +0x62:  movl   $0x0,0x4(%esp)
084b3562 +0x6a:  lea    -0x18(%ebp),%eax
084b3565 +0x6d:  mov    %eax,(%esp)
084b3568 +0x70:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084b356d +0x75:  movl   $0x1,0x4(%esp)
084b3575 +0x7d:  lea    -0x18(%ebp),%eax
084b3578 +0x80:  mov    %eax,(%esp)
084b357b +0x83:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084b3580 +0x88:  lea    -0x18(%ebp),%eax
084b3583 +0x8b:  mov    %eax,0x4(%esp)
084b3587 +0x8f:  mov    -0xc(%ebp),%eax
084b358a +0x92:  mov    %eax,(%esp)
084b358d +0x95:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084b3592 +0x9a:  jmp    084b35af <+0xb7>
084b3594 +0x9c:  mov    %edx,%ebx
084b3596 +0x9e:  mov    %eax,%esi
084b3598 +0xa0:  lea    -0x18(%ebp),%eax
084b359b +0xa3:  mov    %eax,(%esp)
084b359e +0xa6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b35a3 +0xab:  mov    %esi,%eax
084b35a5 +0xad:  mov    %ebx,%edx
084b35a7 +0xaf:  mov    %eax,(%esp)
084b35aa +0xb2:  call   08ae3750 <_Unwind_Resume>
084b35af +0xb7:  lea    -0x18(%ebp),%eax
084b35b2 +0xba:  mov    %eax,(%esp)
084b35b5 +0xbd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b35ba +0xc2:  jmp    084b35bd <+0xc5>
084b35bc +0xc4:  nop
084b35bd +0xc5:  add    $0x20,%esp
084b35c0 +0xc8:  pop    %ebx
084b35c1 +0xc9:  pop    %esi
084b35c2 +0xca:  pop    %ebp
084b35c3 +0xcb:  ret
```

## 反编译 C

```c
// game_master::CSetMultiboxFailCnt::execute @ 0x84b34f8

/* game_master::CSetMultiboxFailCnt::execute() */

void __thiscall game_master::CSetMultiboxFailCnt::execute(CSetMultiboxFailCnt *this)

{
  PacketGuard local_1c [12];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    CUser::set_multiboxLotteryItemFailCnt(local_10,*(int *)(this + 8));
    if (2 < *(int *)(this + 8)) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084b354d to 084b3591 has its CatchHandler @ 084b3594 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1c6);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(local_10,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}
```
