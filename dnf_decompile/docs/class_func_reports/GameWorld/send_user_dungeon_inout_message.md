# send_user_dungeon_inout_message

`_ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib`

`GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8fc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8fc8  _ZN9GameWorld31send_user_dungeon_inout_messageEP5CUserib
#           GameWorld::send_user_dungeon_inout_message(CUser*, int, bool)
# range [0x086c8fc8, 0x086c9075]
086c8fc8 +0x00:  push   %ebp
086c8fc9 +0x01:  mov    %esp,%ebp
086c8fcb +0x03:  push   %esi
086c8fcc +0x04:  push   %ebx
086c8fcd +0x05:  sub    $0x30,%esp
086c8fd0 +0x08:  mov    0x14(%ebp),%eax
086c8fd3 +0x0b:  mov    %al,-0x1c(%ebp)
086c8fd6 +0x0e:  lea    -0x14(%ebp),%eax
086c8fd9 +0x11:  mov    %eax,(%esp)
086c8fdc +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c8fe1 +0x19:  movl   $0x127,0x8(%esp)
086c8fe9 +0x21:  movl   $0x0,0x4(%esp)
086c8ff1 +0x29:  lea    -0x14(%ebp),%eax
086c8ff4 +0x2c:  mov    %eax,(%esp)
086c8ff7 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c8ffc +0x34:  mov    0x10(%ebp),%eax
086c8fff +0x37:  mov    %eax,0x4(%esp)
086c9003 +0x3b:  lea    -0x14(%ebp),%eax
086c9006 +0x3e:  mov    %eax,(%esp)
086c9009 +0x41:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c900e +0x46:  movzbl -0x1c(%ebp),%eax
086c9012 +0x4a:  mov    %eax,0x4(%esp)
086c9016 +0x4e:  lea    -0x14(%ebp),%eax
086c9019 +0x51:  mov    %eax,(%esp)
086c901c +0x54:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c9021 +0x59:  movl   $0x1,0x4(%esp)
086c9029 +0x61:  lea    -0x14(%ebp),%eax
086c902c +0x64:  mov    %eax,(%esp)
086c902f +0x67:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c9034 +0x6c:  lea    -0x14(%ebp),%eax
086c9037 +0x6f:  mov    %eax,0x4(%esp)
086c903b +0x73:  mov    0xc(%ebp),%eax
086c903e +0x76:  mov    %eax,(%esp)
086c9041 +0x79:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c9046 +0x7e:  jmp    086c9063 <+0x9b>
086c9048 +0x80:  mov    %edx,%ebx
086c904a +0x82:  mov    %eax,%esi
086c904c +0x84:  lea    -0x14(%ebp),%eax
086c904f +0x87:  mov    %eax,(%esp)
086c9052 +0x8a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c9057 +0x8f:  mov    %esi,%eax
086c9059 +0x91:  mov    %ebx,%edx
086c905b +0x93:  mov    %eax,(%esp)
086c905e +0x96:  call   08ae3750 <_Unwind_Resume>
086c9063 +0x9b:  lea    -0x14(%ebp),%eax
086c9066 +0x9e:  mov    %eax,(%esp)
086c9069 +0xa1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c906e +0xa6:  add    $0x30,%esp
086c9071 +0xa9:  pop    %ebx
086c9072 +0xaa:  pop    %esi
086c9073 +0xab:  pop    %ebp
086c9074 +0xac:  ret
086c9075 +0xad:  nop
```

## 反编译 C

```c
// GameWorld::send_user_dungeon_inout_message @ 0x86c8fc8

/* GameWorld::send_user_dungeon_inout_message(CUser*, int, bool) */

void __thiscall
GameWorld::send_user_dungeon_inout_message(GameWorld *this,CUser *param_1,int param_2,bool param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086c8ff7 to 086c9045 has its CatchHandler @ 086c9048 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x127);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
