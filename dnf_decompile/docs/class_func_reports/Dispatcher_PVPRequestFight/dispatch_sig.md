# dispatch_sig

`_ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PVPRequestFight` | `0x0820464e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820464e  _ZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820464e, 0x0820470f]
0820464e +0x00:  push   %ebp
0820464f +0x01:  mov    %esp,%ebp
08204651 +0x03:  sub    $0x28,%esp
08204654 +0x06:  mov    0xc(%ebp),%eax
08204657 +0x09:  mov    %eax,(%esp)
0820465a +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820465f +0x11:  cmp    $0x7,%eax
08204662 +0x14:  setne  %al
08204665 +0x17:  test   %al,%al
08204667 +0x19:  je     0820468f <+0x41>
08204669 +0x1b:  movl   $0x0,0xc(%esp)
08204671 +0x23:  movl   $0x0,0x8(%esp)
08204679 +0x2b:  movl   $&_ZZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204681 +0x33:  movl   $0x9c25,(%esp)
08204688 +0x3a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820468d +0x3f:  jmp    0820470d <+0xbf>
0820468f +0x41:  mov    0xc(%ebp),%eax
08204692 +0x44:  mov    %eax,(%esp)
08204695 +0x47:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
0820469a +0x4c:  mov    %eax,-0xc(%ebp)
0820469d +0x4f:  cmpl   $0x0,-0xc(%ebp)
082046a1 +0x53:  jne    082046c9 <+0x7b>
082046a3 +0x55:  movl   $0x0,0xc(%esp)
082046ab +0x5d:  movl   $0x0,0x8(%esp)
082046b3 +0x65:  movl   $&_ZZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082046bb +0x6d:  movl   $0x9c2b,(%esp)
082046c2 +0x74:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082046c7 +0x79:  jmp    0820470d <+0xbf>
082046c9 +0x7b:  mov    0xc(%ebp),%eax
082046cc +0x7e:  mov    %eax,0x4(%esp)
082046d0 +0x82:  mov    -0xc(%ebp),%eax
082046d3 +0x85:  mov    %eax,(%esp)
082046d6 +0x88:  call   085ddfbe <_ZN8PvP_Room13request_fightEP5CUser>  ; PvP_Room::request_fight(CUser*)
082046db +0x8d:  xor    $0x1,%eax
082046de +0x90:  test   %al,%al
082046e0 +0x92:  je     08204708 <+0xba>
082046e2 +0x94:  movl   $0x0,0xc(%esp)
082046ea +0x9c:  movl   $0x0,0x8(%esp)
082046f2 +0xa4:  movl   $&_ZZN26Dispatcher_PVPRequestFight12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082046fa +0xac:  movl   $0x9c30,(%esp)
08204701 +0xb3:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204706 +0xb8:  jmp    0820470d <+0xbf>
08204708 +0xba:  mov    $0x0,%eax
0820470d +0xbf:  leave
0820470e +0xc0:  ret
0820470f +0xc1:  nop
```

## 反编译 C

```c
// Dispatcher_PVPRequestFight::dispatch_sig @ 0x820464e

/* Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PVPRequestFight::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PvP_Room *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 7) {
    this = (PvP_Room *)CUser::GetPVPRoom((CUser *)param_2);
    if (this == (PvP_Room *)0x0) {
      uVar3 = LineFunc(0x9c2b,
                       "virtual int Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
    }
    else {
      cVar1 = PvP_Room::request_fight(this,(CUser *)param_2);
      if (cVar1 == '\x01') {
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0x9c30,
                         "virtual int Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)",
                         0,0);
      }
    }
  }
  else {
    uVar3 = LineFunc(0x9c25,
                     "virtual int Dispatcher_PVPRequestFight::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
  }
  return uVar3;
}
```
