# Send_ItemMakingSkillList

`_ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser`

`CItemMakingSkill::Send_ItemMakingSkillList(CUser*) const`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545a62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545a62  _ZNK16CItemMakingSkill24Send_ItemMakingSkillListEP5CUser
#           CItemMakingSkill::Send_ItemMakingSkillList(CUser*) const
# range [0x08545a62, 0x08545b41]
08545a62 +0x00:  push   %ebp
08545a63 +0x01:  mov    %esp,%ebp
08545a65 +0x03:  push   %esi
08545a66 +0x04:  push   %ebx
08545a67 +0x05:  sub    $0x20,%esp
08545a6a +0x08:  lea    -0x18(%ebp),%eax
08545a6d +0x0b:  mov    %eax,(%esp)
08545a70 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08545a75 +0x13:  movl   $0x15e,0x8(%esp)
08545a7d +0x1b:  movl   $0x0,0x4(%esp)
08545a85 +0x23:  lea    -0x18(%ebp),%eax
08545a88 +0x26:  mov    %eax,(%esp)
08545a8b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08545a90 +0x2e:  movl   $0xb,0x4(%esp)
08545a98 +0x36:  lea    -0x18(%ebp),%eax
08545a9b +0x39:  mov    %eax,(%esp)
08545a9e +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08545aa3 +0x41:  movl   $0x0,-0xc(%ebp)
08545aaa +0x48:  jmp    08545add <+0x7b>
08545aac +0x4a:  mov    -0xc(%ebp),%eax
08545aaf +0x4d:  mov    %eax,0x4(%esp)
08545ab3 +0x51:  lea    -0x18(%ebp),%eax
08545ab6 +0x54:  mov    %eax,(%esp)
08545ab9 +0x57:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08545abe +0x5c:  mov    -0xc(%ebp),%edx
08545ac1 +0x5f:  mov    0x8(%ebp),%eax
08545ac4 +0x62:  movzwl 0x6(%eax,%edx,2),%eax
08545ac9 +0x67:  cwtl
08545aca +0x68:  mov    %eax,0x4(%esp)
08545ace +0x6c:  lea    -0x18(%ebp),%eax
08545ad1 +0x6f:  mov    %eax,(%esp)
08545ad4 +0x72:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08545ad9 +0x77:  addl   $0x1,-0xc(%ebp)
08545add +0x7b:  cmpl   $0xa,-0xc(%ebp)
08545ae1 +0x7f:  setle  %al
08545ae4 +0x82:  test   %al,%al
08545ae6 +0x84:  jne    08545aac <+0x4a>
08545ae8 +0x86:  movl   $0x1,0x4(%esp)
08545af0 +0x8e:  lea    -0x18(%ebp),%eax
08545af3 +0x91:  mov    %eax,(%esp)
08545af6 +0x94:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08545afb +0x99:  lea    -0x18(%ebp),%eax
08545afe +0x9c:  mov    %eax,0x4(%esp)
08545b02 +0xa0:  mov    0xc(%ebp),%eax
08545b05 +0xa3:  mov    %eax,(%esp)
08545b08 +0xa6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08545b0d +0xab:  mov    $0x1,%ebx
08545b12 +0xb0:  lea    -0x18(%ebp),%eax
08545b15 +0xb3:  mov    %eax,(%esp)
08545b18 +0xb6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08545b1d +0xbb:  mov    %ebx,%eax
08545b1f +0xbd:  add    $0x20,%esp
08545b22 +0xc0:  pop    %ebx
08545b23 +0xc1:  pop    %esi
08545b24 +0xc2:  pop    %ebp
08545b25 +0xc3:  ret
08545b26 +0xc4:  mov    %edx,%ebx
08545b28 +0xc6:  mov    %eax,%esi
08545b2a +0xc8:  lea    -0x18(%ebp),%eax
08545b2d +0xcb:  mov    %eax,(%esp)
08545b30 +0xce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08545b35 +0xd3:  mov    %esi,%eax
08545b37 +0xd5:  mov    %ebx,%edx
08545b39 +0xd7:  mov    %eax,(%esp)
08545b3c +0xda:  call   08ae3750 <_Unwind_Resume>
08545b41 +0xdf:  nop
```

## 反编译 C

```c
// CItemMakingSkill::Send_ItemMakingSkillList @ 0x8545a62

/* CItemMakingSkill::Send_ItemMakingSkillList(CUser*) const */

undefined4 __thiscall
CItemMakingSkill::Send_ItemMakingSkillList(CItemMakingSkill *this,CUser *param_1)

{
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08545a8b to 08545b0c has its CatchHandler @ 08545b26 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x15e);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xb);
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(int)*(short *)(this + local_10 * 2 + 6));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 1;
}
```
