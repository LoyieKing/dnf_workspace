# execute

`_ZN11game_master17CAdjustCharacStat7executeEv`

`game_master::CAdjustCharacStat::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAdjustCharacStat` | `0x084ac58c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac58c  _ZN11game_master17CAdjustCharacStat7executeEv
#           game_master::CAdjustCharacStat::execute()
# range [0x084ac58c, 0x084ac667]
084ac58c +0x00:  push   %ebp
084ac58d +0x01:  mov    %esp,%ebp
084ac58f +0x03:  push   %esi
084ac590 +0x04:  push   %ebx
084ac591 +0x05:  sub    $0x20,%esp
084ac594 +0x08:  mov    0x8(%ebp),%eax
084ac597 +0x0b:  mov    %eax,(%esp)
084ac59a +0x0e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ac59f +0x13:  mov    %eax,-0xc(%ebp)
084ac5a2 +0x16:  mov    -0xc(%ebp),%eax
084ac5a5 +0x19:  mov    %eax,(%esp)
084ac5a8 +0x1c:  call   08664766 <_ZN5CUser18adjust_charac_statEv>  ; CUser::adjust_charac_stat()
084ac5ad +0x21:  lea    -0x18(%ebp),%eax
084ac5b0 +0x24:  mov    %eax,(%esp)
084ac5b3 +0x27:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ac5b8 +0x2c:  movl   $0x2,0x8(%esp)
084ac5c0 +0x34:  movl   $0x0,0x4(%esp)
084ac5c8 +0x3c:  lea    -0x18(%ebp),%eax
084ac5cb +0x3f:  mov    %eax,(%esp)
084ac5ce +0x42:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ac5d3 +0x47:  movl   $0x1,0x4(%esp)
084ac5db +0x4f:  lea    -0x18(%ebp),%eax
084ac5de +0x52:  mov    %eax,(%esp)
084ac5e1 +0x55:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ac5e6 +0x5a:  movl   $0x1,0x4(%esp)
084ac5ee +0x62:  lea    -0x18(%ebp),%eax
084ac5f1 +0x65:  mov    %eax,(%esp)
084ac5f4 +0x68:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084ac5f9 +0x6d:  lea    -0x18(%ebp),%eax
084ac5fc +0x70:  movl   $0x1,0x8(%esp)
084ac604 +0x78:  mov    %eax,0x4(%esp)
084ac608 +0x7c:  mov    -0xc(%ebp),%eax
084ac60b +0x7f:  mov    %eax,(%esp)
084ac60e +0x82:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
084ac613 +0x87:  movl   $0x1,0x4(%esp)
084ac61b +0x8f:  lea    -0x18(%ebp),%eax
084ac61e +0x92:  mov    %eax,(%esp)
084ac621 +0x95:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ac626 +0x9a:  lea    -0x18(%ebp),%eax
084ac629 +0x9d:  mov    %eax,0x4(%esp)
084ac62d +0xa1:  mov    -0xc(%ebp),%eax
084ac630 +0xa4:  mov    %eax,(%esp)
084ac633 +0xa7:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ac638 +0xac:  jmp    084ac655 <+0xc9>
084ac63a +0xae:  mov    %edx,%ebx
084ac63c +0xb0:  mov    %eax,%esi
084ac63e +0xb2:  lea    -0x18(%ebp),%eax
084ac641 +0xb5:  mov    %eax,(%esp)
084ac644 +0xb8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ac649 +0xbd:  mov    %esi,%eax
084ac64b +0xbf:  mov    %ebx,%edx
084ac64d +0xc1:  mov    %eax,(%esp)
084ac650 +0xc4:  call   08ae3750 <_Unwind_Resume>
084ac655 +0xc9:  lea    -0x18(%ebp),%eax
084ac658 +0xcc:  mov    %eax,(%esp)
084ac65b +0xcf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ac660 +0xd4:  add    $0x20,%esp
084ac663 +0xd7:  pop    %ebx
084ac664 +0xd8:  pop    %esi
084ac665 +0xd9:  pop    %ebp
084ac666 +0xda:  ret
084ac667 +0xdb:  nop
```

## 反编译 C

```c
// game_master::CAdjustCharacStat::execute @ 0x84ac58c

/* game_master::CAdjustCharacStat::execute() */

void __thiscall game_master::CAdjustCharacStat::execute(CAdjustCharacStat *this)

{
  PacketGuard local_1c [12];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::adjust_charac_stat(local_10);
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084ac5ce to 084ac637 has its CatchHandler @ 084ac63a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
  CUser::make_basic_info(local_10,(char *)local_1c,'\x01');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(local_10,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
