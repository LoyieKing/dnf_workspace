# SendRequestItemUnlockCancel

`_ZN9item_lock9CItemLock27SendRequestItemUnlockCancelEP5CUserii`

`item_lock::CItemLock::SendRequestItemUnlockCancel(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542026` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542026  _ZN9item_lock9CItemLock27SendRequestItemUnlockCancelEP5CUserii
#           item_lock::CItemLock::SendRequestItemUnlockCancel(CUser*, int, int)
# range [0x08542026, 0x085420df]
08542026 +0x00:  push   %ebp
08542027 +0x01:  mov    %esp,%ebp
08542029 +0x03:  push   %esi
0854202a +0x04:  push   %ebx
0854202b +0x05:  sub    $0x20,%esp
0854202e +0x08:  lea    -0x14(%ebp),%eax
08542031 +0x0b:  mov    %eax,(%esp)
08542034 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08542039 +0x13:  movl   $0x111,0x8(%esp)
08542041 +0x1b:  movl   $0x1,0x4(%esp)
08542049 +0x23:  lea    -0x14(%ebp),%eax
0854204c +0x26:  mov    %eax,(%esp)
0854204f +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08542054 +0x2e:  movl   $0x1,0x4(%esp)
0854205c +0x36:  lea    -0x14(%ebp),%eax
0854205f +0x39:  mov    %eax,(%esp)
08542062 +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08542067 +0x41:  mov    0x10(%ebp),%eax
0854206a +0x44:  mov    %eax,0x4(%esp)
0854206e +0x48:  lea    -0x14(%ebp),%eax
08542071 +0x4b:  mov    %eax,(%esp)
08542074 +0x4e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08542079 +0x53:  mov    0x14(%ebp),%eax
0854207c +0x56:  mov    %eax,0x4(%esp)
08542080 +0x5a:  lea    -0x14(%ebp),%eax
08542083 +0x5d:  mov    %eax,(%esp)
08542086 +0x60:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0854208b +0x65:  movl   $0x1,0x4(%esp)
08542093 +0x6d:  lea    -0x14(%ebp),%eax
08542096 +0x70:  mov    %eax,(%esp)
08542099 +0x73:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0854209e +0x78:  lea    -0x14(%ebp),%eax
085420a1 +0x7b:  mov    %eax,0x4(%esp)
085420a5 +0x7f:  mov    0xc(%ebp),%eax
085420a8 +0x82:  mov    %eax,(%esp)
085420ab +0x85:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085420b0 +0x8a:  jmp    085420cd <+0xa7>
085420b2 +0x8c:  mov    %edx,%ebx
085420b4 +0x8e:  mov    %eax,%esi
085420b6 +0x90:  lea    -0x14(%ebp),%eax
085420b9 +0x93:  mov    %eax,(%esp)
085420bc +0x96:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085420c1 +0x9b:  mov    %esi,%eax
085420c3 +0x9d:  mov    %ebx,%edx
085420c5 +0x9f:  mov    %eax,(%esp)
085420c8 +0xa2:  call   08ae3750 <_Unwind_Resume>
085420cd +0xa7:  lea    -0x14(%ebp),%eax
085420d0 +0xaa:  mov    %eax,(%esp)
085420d3 +0xad:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085420d8 +0xb2:  add    $0x20,%esp
085420db +0xb5:  pop    %ebx
085420dc +0xb6:  pop    %esi
085420dd +0xb7:  pop    %ebp
085420de +0xb8:  ret
085420df +0xb9:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::SendRequestItemUnlockCancel @ 0x8542026

/* item_lock::CItemLock::SendRequestItemUnlockCancel(CUser*, int, int) */

void __thiscall
item_lock::CItemLock::SendRequestItemUnlockCancel
          (CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0854204f to 085420af has its CatchHandler @ 085420b2 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x111);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
