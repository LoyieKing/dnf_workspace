# SendItemUnlock

`_ZN9item_lock9CItemLock14SendItemUnlockEP5CUserii`

`item_lock::CItemLock::SendItemUnlock(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x085420e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085420e0  _ZN9item_lock9CItemLock14SendItemUnlockEP5CUserii
#           item_lock::CItemLock::SendItemUnlock(CUser*, int, int)
# range [0x085420e0, 0x08542191]
085420e0 +0x00:  push   %ebp
085420e1 +0x01:  mov    %esp,%ebp
085420e3 +0x03:  push   %esi
085420e4 +0x04:  push   %ebx
085420e5 +0x05:  sub    $0x20,%esp
085420e8 +0x08:  lea    -0x14(%ebp),%eax
085420eb +0x0b:  mov    %eax,(%esp)
085420ee +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085420f3 +0x13:  lea    -0x14(%ebp),%eax
085420f6 +0x16:  mov    %eax,(%esp)
085420f9 +0x19:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
085420fe +0x1e:  movl   $0xfc,0x8(%esp)
08542106 +0x26:  movl   $0x0,0x4(%esp)
0854210e +0x2e:  lea    -0x14(%ebp),%eax
08542111 +0x31:  mov    %eax,(%esp)
08542114 +0x34:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08542119 +0x39:  mov    0x10(%ebp),%eax
0854211c +0x3c:  mov    %eax,0x4(%esp)
08542120 +0x40:  lea    -0x14(%ebp),%eax
08542123 +0x43:  mov    %eax,(%esp)
08542126 +0x46:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854212b +0x4b:  mov    0x14(%ebp),%eax
0854212e +0x4e:  mov    %eax,0x4(%esp)
08542132 +0x52:  lea    -0x14(%ebp),%eax
08542135 +0x55:  mov    %eax,(%esp)
08542138 +0x58:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0854213d +0x5d:  movl   $0x1,0x4(%esp)
08542145 +0x65:  lea    -0x14(%ebp),%eax
08542148 +0x68:  mov    %eax,(%esp)
0854214b +0x6b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08542150 +0x70:  lea    -0x14(%ebp),%eax
08542153 +0x73:  mov    %eax,0x4(%esp)
08542157 +0x77:  mov    0xc(%ebp),%eax
0854215a +0x7a:  mov    %eax,(%esp)
0854215d +0x7d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08542162 +0x82:  jmp    0854217f <+0x9f>
08542164 +0x84:  mov    %edx,%ebx
08542166 +0x86:  mov    %eax,%esi
08542168 +0x88:  lea    -0x14(%ebp),%eax
0854216b +0x8b:  mov    %eax,(%esp)
0854216e +0x8e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08542173 +0x93:  mov    %esi,%eax
08542175 +0x95:  mov    %ebx,%edx
08542177 +0x97:  mov    %eax,(%esp)
0854217a +0x9a:  call   08ae3750 <_Unwind_Resume>
0854217f +0x9f:  lea    -0x14(%ebp),%eax
08542182 +0xa2:  mov    %eax,(%esp)
08542185 +0xa5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0854218a +0xaa:  add    $0x20,%esp
0854218d +0xad:  pop    %ebx
0854218e +0xae:  pop    %esi
0854218f +0xaf:  pop    %ebp
08542190 +0xb0:  ret
08542191 +0xb1:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::SendItemUnlock @ 0x85420e0

/* item_lock::CItemLock::SendItemUnlock(CUser*, int, int) */

void __thiscall
item_lock::CItemLock::SendItemUnlock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085420f9 to 08542161 has its CatchHandler @ 08542164 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xfc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
