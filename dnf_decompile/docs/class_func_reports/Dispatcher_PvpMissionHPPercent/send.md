# send

`_ZN30Dispatcher_PvpMissionHPPercent4sendEP5CUserR9ParamBase`

`Dispatcher_PvpMissionHPPercent::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvpMissionHPPercent` | `0x081d58d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d58d6  _ZN30Dispatcher_PvpMissionHPPercent4sendEP5CUserR9ParamBase
#           Dispatcher_PvpMissionHPPercent::send(CUser*, ParamBase&)
# range [0x081d58d6, 0x081d59c5]
081d58d6 +0x00:  push   %ebp
081d58d7 +0x01:  mov    %esp,%ebp
081d58d9 +0x03:  push   %esi
081d58da +0x04:  push   %ebx
081d58db +0x05:  sub    $0x30,%esp
081d58de +0x08:  mov    0x10(%ebp),%eax
081d58e1 +0x0b:  mov    %eax,-0x10(%ebp)
081d58e4 +0x0e:  lea    -0x1c(%ebp),%eax
081d58e7 +0x11:  mov    %eax,(%esp)
081d58ea +0x14:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d58ef +0x19:  movl   $0x141,0x8(%esp)
081d58f7 +0x21:  movl   $0x0,0x4(%esp)
081d58ff +0x29:  lea    -0x1c(%ebp),%eax
081d5902 +0x2c:  mov    %eax,(%esp)
081d5905 +0x2f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d590a +0x34:  mov    -0x10(%ebp),%eax
081d590d +0x37:  add    $0x4,%eax
081d5910 +0x3a:  mov    %eax,(%esp)
081d5913 +0x3d:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
081d5918 +0x42:  mov    %eax,0x4(%esp)
081d591c +0x46:  lea    -0x1c(%ebp),%eax
081d591f +0x49:  mov    %eax,(%esp)
081d5922 +0x4c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d5927 +0x51:  movl   $0x0,-0xc(%ebp)
081d592e +0x58:  jmp    081d595a <+0x84>
081d5930 +0x5a:  mov    -0x10(%ebp),%eax
081d5933 +0x5d:  lea    0x4(%eax),%edx
081d5936 +0x60:  mov    -0xc(%ebp),%eax
081d5939 +0x63:  mov    %eax,0x4(%esp)
081d593d +0x67:  mov    %edx,(%esp)
081d5940 +0x6a:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081d5945 +0x6f:  mov    (%eax),%eax
081d5947 +0x71:  mov    %eax,0x4(%esp)
081d594b +0x75:  lea    -0x1c(%ebp),%eax
081d594e +0x78:  mov    %eax,(%esp)
081d5951 +0x7b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d5956 +0x80:  addl   $0x1,-0xc(%ebp)
081d595a +0x84:  mov    -0x10(%ebp),%eax
081d595d +0x87:  add    $0x4,%eax
081d5960 +0x8a:  mov    %eax,(%esp)
081d5963 +0x8d:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
081d5968 +0x92:  cmp    -0xc(%ebp),%eax
081d596b +0x95:  seta   %al
081d596e +0x98:  test   %al,%al
081d5970 +0x9a:  jne    081d5930 <+0x5a>
081d5972 +0x9c:  movl   $0x1,0x4(%esp)
081d597a +0xa4:  lea    -0x1c(%ebp),%eax
081d597d +0xa7:  mov    %eax,(%esp)
081d5980 +0xaa:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d5985 +0xaf:  lea    -0x1c(%ebp),%eax
081d5988 +0xb2:  mov    %eax,0x4(%esp)
081d598c +0xb6:  mov    0xc(%ebp),%eax
081d598f +0xb9:  mov    %eax,(%esp)
081d5992 +0xbc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d5997 +0xc1:  jmp    081d59b4 <+0xde>
081d5999 +0xc3:  mov    %edx,%ebx
081d599b +0xc5:  mov    %eax,%esi
081d599d +0xc7:  lea    -0x1c(%ebp),%eax
081d59a0 +0xca:  mov    %eax,(%esp)
081d59a3 +0xcd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d59a8 +0xd2:  mov    %esi,%eax
081d59aa +0xd4:  mov    %ebx,%edx
081d59ac +0xd6:  mov    %eax,(%esp)
081d59af +0xd9:  call   08ae3750 <_Unwind_Resume>
081d59b4 +0xde:  lea    -0x1c(%ebp),%eax
081d59b7 +0xe1:  mov    %eax,(%esp)
081d59ba +0xe4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d59bf +0xe9:  add    $0x30,%esp
081d59c2 +0xec:  pop    %ebx
081d59c3 +0xed:  pop    %esi
081d59c4 +0xee:  pop    %ebp
081d59c5 +0xef:  ret
```

## 反编译 C

```c
// Dispatcher_PvpMissionHPPercent::send @ 0x81d58d6

/* Dispatcher_PvpMissionHPPercent::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PvpMissionHPPercent::send
          (Dispatcher_PvpMissionHPPercent *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  uint local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081d5905 to 081d5996 has its CatchHandler @ 081d5999 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x141);
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(local_14 + 4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,iVar1);
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(local_14 + 4));
    if (uVar3 <= local_10) break;
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(local_14 + 4),local_10);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar2);
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
