# SendEventBringUpInfo

`_ZN5CUser20SendEventBringUpInfoEv`

`CUser::SendEventBringUpInfo()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689968  _ZN5CUser20SendEventBringUpInfoEv
#           CUser::SendEventBringUpInfo()
# range [0x08689968, 0x08689a21]
08689968 +0x00:  push   %ebp
08689969 +0x01:  mov    %esp,%ebp
0868996b +0x03:  push   %esi
0868996c +0x04:  push   %ebx
0868996d +0x05:  sub    $0x20,%esp
08689970 +0x08:  mov    0x8(%ebp),%eax
08689973 +0x0b:  mov    %eax,(%esp)
08689976 +0x0e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868997b +0x13:  test   %eax,%eax
0868997d +0x15:  sete   %al
08689980 +0x18:  test   %al,%al
08689982 +0x1a:  jne    08689a1a <+0xb2>
08689988 +0x20:  lea    -0x14(%ebp),%eax
0868998b +0x23:  mov    %eax,(%esp)
0868998e +0x26:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08689993 +0x2b:  movl   $0x196,0x8(%esp)
0868999b +0x33:  movl   $0x0,0x4(%esp)
086899a3 +0x3b:  lea    -0x14(%ebp),%eax
086899a6 +0x3e:  mov    %eax,(%esp)
086899a9 +0x41:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086899ae +0x46:  mov    0x8(%ebp),%eax
086899b1 +0x49:  mov    %eax,(%esp)
086899b4 +0x4c:  call   08110d12 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x224>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x224
086899b9 +0x51:  movzbl %al,%eax
086899bc +0x54:  mov    %eax,0x4(%esp)
086899c0 +0x58:  lea    -0x14(%ebp),%eax
086899c3 +0x5b:  mov    %eax,(%esp)
086899c6 +0x5e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086899cb +0x63:  movl   $0x1,0x4(%esp)
086899d3 +0x6b:  lea    -0x14(%ebp),%eax
086899d6 +0x6e:  mov    %eax,(%esp)
086899d9 +0x71:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086899de +0x76:  lea    -0x14(%ebp),%eax
086899e1 +0x79:  mov    %eax,0x4(%esp)
086899e5 +0x7d:  mov    0x8(%ebp),%eax
086899e8 +0x80:  mov    %eax,(%esp)
086899eb +0x83:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086899f0 +0x88:  jmp    08689a0d <+0xa5>
086899f2 +0x8a:  mov    %edx,%ebx
086899f4 +0x8c:  mov    %eax,%esi
086899f6 +0x8e:  lea    -0x14(%ebp),%eax
086899f9 +0x91:  mov    %eax,(%esp)
086899fc +0x94:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08689a01 +0x99:  mov    %esi,%eax
08689a03 +0x9b:  mov    %ebx,%edx
08689a05 +0x9d:  mov    %eax,(%esp)
08689a08 +0xa0:  call   08ae3750 <_Unwind_Resume>
08689a0d +0xa5:  lea    -0x14(%ebp),%eax
08689a10 +0xa8:  mov    %eax,(%esp)
08689a13 +0xab:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08689a18 +0xb0:  jmp    08689a1b <+0xb3>
08689a1a +0xb2:  nop
08689a1b +0xb3:  add    $0x20,%esp
08689a1e +0xb6:  pop    %ebx
08689a1f +0xb7:  pop    %esi
08689a20 +0xb8:  pop    %ebp
08689a21 +0xb9:  ret
```

## 反编译 C

```c
// CUser::SendEventBringUpInfo @ 0x8689968

/* CUser::SendEventBringUpInfo() */

void __thiscall CUser::SendEventBringUpInfo(CUser *this)

{
  int iVar1;
  uint uVar2;
  PacketGuard local_18 [12];
  
  iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  if (iVar1 != 0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086899a9 to 086899ef has its CatchHandler @ 086899f2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x196);
    uVar2 = CUserCharacInfo::getCurUseBringUpMaterialTotal((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
