# SendRequestItemUnlock

`_ZN9item_lock9CItemLock21SendRequestItemUnlockEP5CUseriii`

`item_lock::CItemLock::SendRequestItemUnlock(CUser*, int, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541f5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541f5a  _ZN9item_lock9CItemLock21SendRequestItemUnlockEP5CUseriii
#           item_lock::CItemLock::SendRequestItemUnlock(CUser*, int, int, int)
# range [0x08541f5a, 0x08542025]
08541f5a +0x00:  push   %ebp
08541f5b +0x01:  mov    %esp,%ebp
08541f5d +0x03:  push   %esi
08541f5e +0x04:  push   %ebx
08541f5f +0x05:  sub    $0x20,%esp
08541f62 +0x08:  lea    -0x14(%ebp),%eax
08541f65 +0x0b:  mov    %eax,(%esp)
08541f68 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08541f6d +0x13:  movl   $0x110,0x8(%esp)
08541f75 +0x1b:  movl   $0x1,0x4(%esp)
08541f7d +0x23:  lea    -0x14(%ebp),%eax
08541f80 +0x26:  mov    %eax,(%esp)
08541f83 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08541f88 +0x2e:  movl   $0x1,0x4(%esp)
08541f90 +0x36:  lea    -0x14(%ebp),%eax
08541f93 +0x39:  mov    %eax,(%esp)
08541f96 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08541f9b +0x41:  mov    0x10(%ebp),%eax
08541f9e +0x44:  mov    %eax,0x4(%esp)
08541fa2 +0x48:  lea    -0x14(%ebp),%eax
08541fa5 +0x4b:  mov    %eax,(%esp)
08541fa8 +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08541fad +0x53:  mov    0x14(%ebp),%eax
08541fb0 +0x56:  mov    %eax,0x4(%esp)
08541fb4 +0x5a:  lea    -0x14(%ebp),%eax
08541fb7 +0x5d:  mov    %eax,(%esp)
08541fba +0x60:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08541fbf +0x65:  mov    0x18(%ebp),%eax
08541fc2 +0x68:  mov    %eax,0x4(%esp)
08541fc6 +0x6c:  lea    -0x14(%ebp),%eax
08541fc9 +0x6f:  mov    %eax,(%esp)
08541fcc +0x72:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08541fd1 +0x77:  movl   $0x1,0x4(%esp)
08541fd9 +0x7f:  lea    -0x14(%ebp),%eax
08541fdc +0x82:  mov    %eax,(%esp)
08541fdf +0x85:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08541fe4 +0x8a:  lea    -0x14(%ebp),%eax
08541fe7 +0x8d:  mov    %eax,0x4(%esp)
08541feb +0x91:  mov    0xc(%ebp),%eax
08541fee +0x94:  mov    %eax,(%esp)
08541ff1 +0x97:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08541ff6 +0x9c:  jmp    08542013 <+0xb9>
08541ff8 +0x9e:  mov    %edx,%ebx
08541ffa +0xa0:  mov    %eax,%esi
08541ffc +0xa2:  lea    -0x14(%ebp),%eax
08541fff +0xa5:  mov    %eax,(%esp)
08542002 +0xa8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08542007 +0xad:  mov    %esi,%eax
08542009 +0xaf:  mov    %ebx,%edx
0854200b +0xb1:  mov    %eax,(%esp)
0854200e +0xb4:  call   08ae3750 <_Unwind_Resume>
08542013 +0xb9:  lea    -0x14(%ebp),%eax
08542016 +0xbc:  mov    %eax,(%esp)
08542019 +0xbf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0854201e +0xc4:  add    $0x20,%esp
08542021 +0xc7:  pop    %ebx
08542022 +0xc8:  pop    %esi
08542023 +0xc9:  pop    %ebp
08542024 +0xca:  ret
08542025 +0xcb:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::SendRequestItemUnlock @ 0x8541f5a

/* item_lock::CItemLock::SendRequestItemUnlock(CUser*, int, int, int) */

void __thiscall
item_lock::CItemLock::SendRequestItemUnlock
          (CItemLock *this,CUser *param_1,int param_2,int param_3,int param_4)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08541f83 to 08541ff5 has its CatchHandler @ 08541ff8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x110);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_4);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
