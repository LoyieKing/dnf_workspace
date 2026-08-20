# OnCompleteLoad

`_ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser`

`online_preliminary::COnlinePreliminary::OnCompleteLoad(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561a70  _ZN18online_preliminary18COnlinePreliminary14OnCompleteLoadEP5CUser
#           online_preliminary::COnlinePreliminary::OnCompleteLoad(CUser*)
# range [0x08561a70, 0x08561b7f]
08561a70 +0x000:  push   %ebp
08561a71 +0x001:  mov    %esp,%ebp
08561a73 +0x003:  push   %esi
08561a74 +0x004:  push   %ebx
08561a75 +0x005:  sub    $0x30,%esp
08561a78 +0x008:  lea    -0x20(%ebp),%eax
08561a7b +0x00b:  mov    %eax,(%esp)
08561a7e +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08561a83 +0x013:  movl   $0x116,0x8(%esp)
08561a8b +0x01b:  movl   $0x0,0x4(%esp)
08561a93 +0x023:  lea    -0x20(%ebp),%eax
08561a96 +0x026:  mov    %eax,(%esp)
08561a99 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08561a9e +0x02e:  mov    0xc(%ebp),%eax
08561aa1 +0x031:  mov    %eax,(%esp)
08561aa4 +0x034:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08561aa9 +0x039:  movzwl %ax,%eax
08561aac +0x03c:  mov    %eax,0x4(%esp)
08561ab0 +0x040:  lea    -0x20(%ebp),%eax
08561ab3 +0x043:  mov    %eax,(%esp)
08561ab6 +0x046:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08561abb +0x04b:  movl   $0x1,0x4(%esp)
08561ac3 +0x053:  lea    -0x20(%ebp),%eax
08561ac6 +0x056:  mov    %eax,(%esp)
08561ac9 +0x059:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08561ace +0x05e:  movl   $0x0,-0x14(%ebp)
08561ad5 +0x065:  jmp    08561b45 <+0xd5>
08561ad7 +0x067:  movl   $0x0,-0x10(%ebp)
08561ade +0x06e:  jmp    08561b36 <+0xc6>
08561ae0 +0x070:  mov    -0x14(%ebp),%edx
08561ae3 +0x073:  mov    -0x10(%ebp),%ebx
08561ae6 +0x076:  mov    0x8(%ebp),%ecx
08561ae9 +0x079:  mov    %edx,%eax
08561aeb +0x07b:  shl    $0x2,%eax
08561aee +0x07e:  add    %edx,%eax
08561af0 +0x080:  add    %ebx,%eax
08561af2 +0x082:  add    $0x2,%eax
08561af5 +0x085:  mov    0x14(%ecx,%eax,8),%eax
08561af9 +0x089:  mov    %eax,-0xc(%ebp)
08561afc +0x08c:  mov    -0x14(%ebp),%edx
08561aff +0x08f:  mov    -0x10(%ebp),%ebx
08561b02 +0x092:  mov    0x8(%ebp),%ecx
08561b05 +0x095:  mov    %edx,%eax
08561b07 +0x097:  shl    $0x2,%eax
08561b0a +0x09a:  add    %edx,%eax
08561b0c +0x09c:  add    %ebx,%eax
08561b0e +0x09e:  add    $0x2,%eax
08561b11 +0x0a1:  movzbl 0x18(%ecx,%eax,8),%eax
08561b16 +0x0a6:  test   %al,%al
08561b18 +0x0a8:  je     08561b32 <+0xc2>
08561b1a +0x0aa:  cmpl   $0x0,-0xc(%ebp)
08561b1e +0x0ae:  je     08561b32 <+0xc2>
08561b20 +0x0b0:  lea    -0x20(%ebp),%eax
08561b23 +0x0b3:  mov    %eax,0x4(%esp)
08561b27 +0x0b7:  mov    -0xc(%ebp),%eax
08561b2a +0x0ba:  mov    %eax,(%esp)
08561b2d +0x0bd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08561b32 +0x0c2:  addl   $0x1,-0x10(%ebp)
08561b36 +0x0c6:  cmpl   $0x3,-0x10(%ebp)
08561b3a +0x0ca:  setle  %al
08561b3d +0x0cd:  test   %al,%al
08561b3f +0x0cf:  jne    08561ae0 <+0x70>
08561b41 +0x0d1:  addl   $0x1,-0x14(%ebp)
08561b45 +0x0d5:  cmpl   $0x1,-0x14(%ebp)
08561b49 +0x0d9:  setle  %al
08561b4c +0x0dc:  test   %al,%al
08561b4e +0x0de:  jne    08561ad7 <+0x67>
08561b50 +0x0e0:  jmp    08561b6d <+0xfd>
08561b52 +0x0e2:  mov    %edx,%ebx
08561b54 +0x0e4:  mov    %eax,%esi
08561b56 +0x0e6:  lea    -0x20(%ebp),%eax
08561b59 +0x0e9:  mov    %eax,(%esp)
08561b5c +0x0ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561b61 +0x0f1:  mov    %esi,%eax
08561b63 +0x0f3:  mov    %ebx,%edx
08561b65 +0x0f5:  mov    %eax,(%esp)
08561b68 +0x0f8:  call   08ae3750 <_Unwind_Resume>
08561b6d +0x0fd:  lea    -0x20(%ebp),%eax
08561b70 +0x100:  mov    %eax,(%esp)
08561b73 +0x103:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08561b78 +0x108:  add    $0x30,%esp
08561b7b +0x10b:  pop    %ebx
08561b7c +0x10c:  pop    %esi
08561b7d +0x10d:  pop    %ebp
08561b7e +0x10e:  ret
08561b7f +0x10f:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnCompleteLoad @ 0x8561a70

/* online_preliminary::COnlinePreliminary::OnCompleteLoad(CUser*) */

void __thiscall
online_preliminary::COnlinePreliminary::OnCompleteLoad(COnlinePreliminary *this,CUser *param_1)

{
  uint uVar1;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08561a99 to 08561b31 has its CatchHandler @ 08561b52 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x116);
  uVar1 = CUser::get_unique_id(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,uVar1 & 0xffff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  for (local_18 = 0; local_18 < 2; local_18 = local_18 + 1) {
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      local_10 = *(CUser **)(this + (local_18 * 5 + local_14 + 2) * 8 + 0x14);
      if ((this[(local_18 * 5 + local_14 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
         (local_10 != (CUser *)0x0)) {
        CUser::Send(local_10,local_24);
      }
    }
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
