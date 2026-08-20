# sendNotiPcRoomPlayTime

`_ZN5CUser22sendNotiPcRoomPlayTimeEv`

`CUser::sendNotiPcRoomPlayTime()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f83c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f83c  _ZN5CUser22sendNotiPcRoomPlayTimeEv
#           CUser::sendNotiPcRoomPlayTime()
# range [0x0868f83c, 0x0868f8d7]
0868f83c +0x00:  push   %ebp
0868f83d +0x01:  mov    %esp,%ebp
0868f83f +0x03:  push   %esi
0868f840 +0x04:  push   %ebx
0868f841 +0x05:  sub    $0x20,%esp
0868f844 +0x08:  lea    -0x14(%ebp),%eax
0868f847 +0x0b:  mov    %eax,(%esp)
0868f84a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868f84f +0x13:  movl   $0x1a8,0x8(%esp)
0868f857 +0x1b:  movl   $0x0,0x4(%esp)
0868f85f +0x23:  lea    -0x14(%ebp),%eax
0868f862 +0x26:  mov    %eax,(%esp)
0868f865 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868f86a +0x2e:  mov    0x8(%ebp),%eax
0868f86d +0x31:  mov    %eax,(%esp)
0868f870 +0x34:  call   08110e10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x322>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x322
0868f875 +0x39:  mov    %eax,0x4(%esp)
0868f879 +0x3d:  lea    -0x14(%ebp),%eax
0868f87c +0x40:  mov    %eax,(%esp)
0868f87f +0x43:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868f884 +0x48:  movl   $0x1,0x4(%esp)
0868f88c +0x50:  lea    -0x14(%ebp),%eax
0868f88f +0x53:  mov    %eax,(%esp)
0868f892 +0x56:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868f897 +0x5b:  lea    -0x14(%ebp),%eax
0868f89a +0x5e:  mov    %eax,0x4(%esp)
0868f89e +0x62:  mov    0x8(%ebp),%eax
0868f8a1 +0x65:  mov    %eax,(%esp)
0868f8a4 +0x68:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868f8a9 +0x6d:  jmp    0868f8c6 <+0x8a>
0868f8ab +0x6f:  mov    %edx,%ebx
0868f8ad +0x71:  mov    %eax,%esi
0868f8af +0x73:  lea    -0x14(%ebp),%eax
0868f8b2 +0x76:  mov    %eax,(%esp)
0868f8b5 +0x79:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868f8ba +0x7e:  mov    %esi,%eax
0868f8bc +0x80:  mov    %ebx,%edx
0868f8be +0x82:  mov    %eax,(%esp)
0868f8c1 +0x85:  call   08ae3750 <_Unwind_Resume>
0868f8c6 +0x8a:  lea    -0x14(%ebp),%eax
0868f8c9 +0x8d:  mov    %eax,(%esp)
0868f8cc +0x90:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868f8d1 +0x95:  add    $0x20,%esp
0868f8d4 +0x98:  pop    %ebx
0868f8d5 +0x99:  pop    %esi
0868f8d6 +0x9a:  pop    %ebp
0868f8d7 +0x9b:  ret
```

## 反编译 C

```c
// CUser::sendNotiPcRoomPlayTime @ 0x868f83c

/* CUser::sendNotiPcRoomPlayTime() */

void __thiscall CUser::sendNotiPcRoomPlayTime(CUser *this)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0868f865 to 0868f8a8 has its CatchHandler @ 0868f8ab */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1a8);
  iVar1 = getTotalPcRoomPlayTime(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  Send(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
