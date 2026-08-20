# use_equipment

`_ZN5CUser13use_equipmentEi`

`CUser::use_equipment(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865ede0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865ede0  _ZN5CUser13use_equipmentEi
#           CUser::use_equipment(int)
# range [0x0865ede0, 0x0865eed1]
0865ede0 +0x00:  push   %ebp
0865ede1 +0x01:  mov    %esp,%ebp
0865ede3 +0x03:  push   %esi
0865ede4 +0x04:  push   %ebx
0865ede5 +0x05:  sub    $0x20,%esp
0865ede8 +0x08:  mov    0x8(%ebp),%eax
0865edeb +0x0b:  mov    %eax,(%esp)
0865edee +0x0e:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0865edf3 +0x13:  mov    0xc(%ebp),%edx
0865edf6 +0x16:  mov    %edx,0x4(%esp)
0865edfa +0x1a:  mov    %eax,(%esp)
0865edfd +0x1d:  call   084ff762 <_ZN10CInventory9use_equipEi>  ; CInventory::use_equip(int)
0865ee02 +0x22:  mov    %eax,-0xc(%ebp)
0865ee05 +0x25:  lea    -0x18(%ebp),%eax
0865ee08 +0x28:  mov    %eax,(%esp)
0865ee0b +0x2b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0865ee10 +0x30:  movl   $0x33,0x8(%esp)
0865ee18 +0x38:  movl   $0x1,0x4(%esp)
0865ee20 +0x40:  lea    -0x18(%ebp),%eax
0865ee23 +0x43:  mov    %eax,(%esp)
0865ee26 +0x46:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865ee2b +0x4b:  cmpl   $0x0,-0xc(%ebp)
0865ee2f +0x4f:  jle    0865ee58 <+0x78>
0865ee31 +0x51:  movl   $0x0,0x4(%esp)
0865ee39 +0x59:  lea    -0x18(%ebp),%eax
0865ee3c +0x5c:  mov    %eax,(%esp)
0865ee3f +0x5f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ee44 +0x64:  mov    -0xc(%ebp),%eax
0865ee47 +0x67:  mov    %eax,0x4(%esp)
0865ee4b +0x6b:  lea    -0x18(%ebp),%eax
0865ee4e +0x6e:  mov    %eax,(%esp)
0865ee51 +0x71:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ee56 +0x76:  jmp    0865ee7d <+0x9d>
0865ee58 +0x78:  movl   $0x1,0x4(%esp)
0865ee60 +0x80:  lea    -0x18(%ebp),%eax
0865ee63 +0x83:  mov    %eax,(%esp)
0865ee66 +0x86:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ee6b +0x8b:  mov    0xc(%ebp),%eax
0865ee6e +0x8e:  mov    %eax,0x4(%esp)
0865ee72 +0x92:  lea    -0x18(%ebp),%eax
0865ee75 +0x95:  mov    %eax,(%esp)
0865ee78 +0x98:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865ee7d +0x9d:  movl   $0x1,0x4(%esp)
0865ee85 +0xa5:  lea    -0x18(%ebp),%eax
0865ee88 +0xa8:  mov    %eax,(%esp)
0865ee8b +0xab:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865ee90 +0xb0:  lea    -0x18(%ebp),%eax
0865ee93 +0xb3:  mov    %eax,0x4(%esp)
0865ee97 +0xb7:  mov    0x8(%ebp),%eax
0865ee9a +0xba:  mov    %eax,(%esp)
0865ee9d +0xbd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0865eea2 +0xc2:  jmp    0865eebf <+0xdf>
0865eea4 +0xc4:  mov    %edx,%ebx
0865eea6 +0xc6:  mov    %eax,%esi
0865eea8 +0xc8:  lea    -0x18(%ebp),%eax
0865eeab +0xcb:  mov    %eax,(%esp)
0865eeae +0xce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865eeb3 +0xd3:  mov    %esi,%eax
0865eeb5 +0xd5:  mov    %ebx,%edx
0865eeb7 +0xd7:  mov    %eax,(%esp)
0865eeba +0xda:  call   08ae3750 <_Unwind_Resume>
0865eebf +0xdf:  lea    -0x18(%ebp),%eax
0865eec2 +0xe2:  mov    %eax,(%esp)
0865eec5 +0xe5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865eeca +0xea:  add    $0x20,%esp
0865eecd +0xed:  pop    %ebx
0865eece +0xee:  pop    %esi
0865eecf +0xef:  pop    %ebp
0865eed0 +0xf0:  ret
0865eed1 +0xf1:  nop
```

## 反编译 C

```c
// CUser::use_equipment @ 0x865ede0

/* CUser::use_equipment(int) */

void __thiscall CUser::use_equipment(CUser *this,int param_1)

{
  CInventory *this_00;
  PacketGuard local_1c [12];
  int local_10;
  
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this);
  local_10 = CInventory::use_equip(this_00,param_1);
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0865ee26 to 0865eea1 has its CatchHandler @ 0865eea4 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x33);
  if (local_10 < 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  Send(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
