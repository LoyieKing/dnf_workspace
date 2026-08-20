# SendRequestItemLock

`_ZN9item_lock9CItemLock19SendRequestItemLockEP5CUserii`

`item_lock::CItemLock::SendRequestItemLock(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541ea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541ea0  _ZN9item_lock9CItemLock19SendRequestItemLockEP5CUserii
#           item_lock::CItemLock::SendRequestItemLock(CUser*, int, int)
# range [0x08541ea0, 0x08541f59]
08541ea0 +0x00:  push   %ebp
08541ea1 +0x01:  mov    %esp,%ebp
08541ea3 +0x03:  push   %esi
08541ea4 +0x04:  push   %ebx
08541ea5 +0x05:  sub    $0x20,%esp
08541ea8 +0x08:  lea    -0x14(%ebp),%eax
08541eab +0x0b:  mov    %eax,(%esp)
08541eae +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08541eb3 +0x13:  movl   $0x10f,0x8(%esp)
08541ebb +0x1b:  movl   $0x1,0x4(%esp)
08541ec3 +0x23:  lea    -0x14(%ebp),%eax
08541ec6 +0x26:  mov    %eax,(%esp)
08541ec9 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08541ece +0x2e:  movl   $0x1,0x4(%esp)
08541ed6 +0x36:  lea    -0x14(%ebp),%eax
08541ed9 +0x39:  mov    %eax,(%esp)
08541edc +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08541ee1 +0x41:  mov    0x10(%ebp),%eax
08541ee4 +0x44:  mov    %eax,0x4(%esp)
08541ee8 +0x48:  lea    -0x14(%ebp),%eax
08541eeb +0x4b:  mov    %eax,(%esp)
08541eee +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08541ef3 +0x53:  mov    0x14(%ebp),%eax
08541ef6 +0x56:  mov    %eax,0x4(%esp)
08541efa +0x5a:  lea    -0x14(%ebp),%eax
08541efd +0x5d:  mov    %eax,(%esp)
08541f00 +0x60:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08541f05 +0x65:  movl   $0x1,0x4(%esp)
08541f0d +0x6d:  lea    -0x14(%ebp),%eax
08541f10 +0x70:  mov    %eax,(%esp)
08541f13 +0x73:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08541f18 +0x78:  lea    -0x14(%ebp),%eax
08541f1b +0x7b:  mov    %eax,0x4(%esp)
08541f1f +0x7f:  mov    0xc(%ebp),%eax
08541f22 +0x82:  mov    %eax,(%esp)
08541f25 +0x85:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08541f2a +0x8a:  jmp    08541f47 <+0xa7>
08541f2c +0x8c:  mov    %edx,%ebx
08541f2e +0x8e:  mov    %eax,%esi
08541f30 +0x90:  lea    -0x14(%ebp),%eax
08541f33 +0x93:  mov    %eax,(%esp)
08541f36 +0x96:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08541f3b +0x9b:  mov    %esi,%eax
08541f3d +0x9d:  mov    %ebx,%edx
08541f3f +0x9f:  mov    %eax,(%esp)
08541f42 +0xa2:  call   08ae3750 <_Unwind_Resume>
08541f47 +0xa7:  lea    -0x14(%ebp),%eax
08541f4a +0xaa:  mov    %eax,(%esp)
08541f4d +0xad:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08541f52 +0xb2:  add    $0x20,%esp
08541f55 +0xb5:  pop    %ebx
08541f56 +0xb6:  pop    %esi
08541f57 +0xb7:  pop    %ebp
08541f58 +0xb8:  ret
08541f59 +0xb9:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::SendRequestItemLock @ 0x8541ea0

/* item_lock::CItemLock::SendRequestItemLock(CUser*, int, int) */

void __thiscall
item_lock::CItemLock::SendRequestItemLock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08541ec9 to 08541f29 has its CatchHandler @ 08541f2c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x10f);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
