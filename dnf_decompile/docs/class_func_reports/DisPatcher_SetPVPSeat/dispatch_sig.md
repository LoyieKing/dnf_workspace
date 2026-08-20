# dispatch_sig

`_ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetPVPSeat` | `0x081f5eba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081f5eba  _ZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)
# range [0x081f5eba, 0x081f601f]
081f5eba +0x000:  push   %ebp
081f5ebb +0x001:  mov    %esp,%ebp
081f5ebd +0x003:  sub    $0x48,%esp
081f5ec0 +0x006:  mov    0xc(%ebp),%eax
081f5ec3 +0x009:  mov    %eax,(%esp)
081f5ec6 +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081f5ecb +0x011:  cmp    $0x5,%eax
081f5ece +0x014:  setle  %al
081f5ed1 +0x017:  test   %al,%al
081f5ed3 +0x019:  je     081f5edf <+0x25>
081f5ed5 +0x01b:  mov    $0x0,%eax
081f5eda +0x020:  jmp    081f601e <+0x164>
081f5edf +0x025:  lea    -0x1b(%ebp),%eax
081f5ee2 +0x028:  add    $0xd,%eax
081f5ee5 +0x02b:  mov    %eax,0x4(%esp)
081f5ee9 +0x02f:  mov    0x10(%ebp),%eax
081f5eec +0x032:  mov    %eax,(%esp)
081f5eef +0x035:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
081f5ef4 +0x03a:  xor    $0x1,%eax
081f5ef7 +0x03d:  test   %al,%al
081f5ef9 +0x03f:  jne    081f5f0b <+0x51>
081f5efb +0x041:  movzbl -0xe(%ebp),%eax
081f5eff +0x045:  test   %al,%al
081f5f01 +0x047:  js     081f5f0b <+0x51>
081f5f03 +0x049:  movzbl -0xe(%ebp),%eax
081f5f07 +0x04d:  cmp    $0x7,%al
081f5f09 +0x04f:  jle    081f5f12 <+0x58>
081f5f0b +0x051:  mov    $0x1,%eax
081f5f10 +0x056:  jmp    081f5f17 <+0x5d>
081f5f12 +0x058:  mov    $0x0,%eax
081f5f17 +0x05d:  test   %al,%al
081f5f19 +0x05f:  je     081f5f44 <+0x8a>
081f5f1b +0x061:  movl   $0x0,0xc(%esp)
081f5f23 +0x069:  movl   $0x0,0x8(%esp)
081f5f2b +0x071:  movl   $&_ZZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5f33 +0x079:  movl   $0x82a4,(%esp)
081f5f3a +0x080:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5f3f +0x085:  jmp    081f601e <+0x164>
081f5f44 +0x08a:  lea    -0x1b(%ebp),%eax
081f5f47 +0x08d:  add    $0xe,%eax
081f5f4a +0x090:  mov    %eax,0x4(%esp)
081f5f4e +0x094:  mov    0x10(%ebp),%eax
081f5f51 +0x097:  mov    %eax,(%esp)
081f5f54 +0x09a:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081f5f59 +0x09f:  xor    $0x1,%eax
081f5f5c +0x0a2:  test   %al,%al
081f5f5e +0x0a4:  je     081f5f89 <+0xcf>
081f5f60 +0x0a6:  movl   $0x0,0xc(%esp)
081f5f68 +0x0ae:  movl   $0x0,0x8(%esp)
081f5f70 +0x0b6:  movl   $&_ZZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5f78 +0x0be:  movl   $0x82a6,(%esp)
081f5f7f +0x0c5:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5f84 +0x0ca:  jmp    081f601e <+0x164>
081f5f89 +0x0cf:  mov    0xc(%ebp),%eax
081f5f8c +0x0d2:  mov    %eax,(%esp)
081f5f8f +0x0d5:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
081f5f94 +0x0da:  mov    %eax,-0xc(%ebp)
081f5f97 +0x0dd:  cmpl   $0x0,-0xc(%ebp)
081f5f9b +0x0e1:  jne    081f5fc3 <+0x109>
081f5f9d +0x0e3:  movl   $0x0,0xc(%esp)
081f5fa5 +0x0eb:  movl   $0x0,0x8(%esp)
081f5fad +0x0f3:  movl   $&_ZZN21DisPatcher_SetPVPSeat12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081f5fb5 +0x0fb:  movl   $0x82a9,(%esp)
081f5fbc +0x102:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081f5fc1 +0x107:  jmp    081f601e <+0x164>
081f5fc3 +0x109:  movzbl -0xd(%ebp),%eax
081f5fc7 +0x10d:  movzbl %al,%edx
081f5fca +0x110:  movzbl -0xe(%ebp),%eax
081f5fce +0x114:  movsbl %al,%eax
081f5fd1 +0x117:  movl   $0x2,0x10(%esp)
081f5fd9 +0x11f:  mov    %edx,0xc(%esp)
081f5fdd +0x123:  mov    %eax,0x8(%esp)
081f5fe1 +0x127:  mov    0xc(%ebp),%eax
081f5fe4 +0x12a:  mov    %eax,0x4(%esp)
081f5fe8 +0x12e:  mov    -0xc(%ebp),%eax
081f5feb +0x131:  mov    %eax,(%esp)
081f5fee +0x134:  call   085dd070 <_ZN8PvP_Room17OnSetPVPSeatStateEP5CUseri15ENUM_SEAT_STATE17ENUM_WALKOUT_TYPE>  ; PvP_Room::OnSetPVPSeatState(CUser*, int, ENUM_SEAT_STATE, ENUM_WALKOUT_TYPE)
081f5ff3 +0x139:  xor    $0x1,%eax
081f5ff6 +0x13c:  test   %al,%al
081f5ff8 +0x13e:  je     081f6019 <+0x15f>
081f5ffa +0x140:  mov    -0xc(%ebp),%eax
081f5ffd +0x143:  mov    %eax,(%esp)
081f6000 +0x146:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
081f6005 +0x14b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081f600a +0x150:  mov    -0xc(%ebp),%edx
081f600d +0x153:  mov    %edx,0x4(%esp)
081f6011 +0x157:  mov    %eax,(%esp)
081f6014 +0x15a:  call   08295348 <_ZN12CGameManager6PutPvpEP8PvP_Room>  ; CGameManager::PutPvp(PvP_Room*)
081f6019 +0x15f:  mov    $0x0,%eax
081f601e +0x164:  leave
081f601f +0x165:  ret
```

## 反编译 C

```c
// DisPatcher_SetPVPSeat::dispatch_sig @ 0x81f5eba

/* DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_SetPVPSeat::dispatch_sig(DisPatcher_SetPVPSeat *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CGameManager *this_00;
  char local_12;
  uchar local_11;
  PvP_Room *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 6) {
    uVar4 = 0;
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,&local_12);
    if (((cVar2 == '\x01') && (-1 < local_12)) && (local_12 < '\b')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = LineFunc(0x82a4,"virtual int DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
    else {
      cVar2 = PacketBuf::get_byte(param_2,&local_11);
      if (cVar2 == '\x01') {
        local_10 = (PvP_Room *)CUser::GetPVPRoom(param_1);
        if (local_10 == (PvP_Room *)0x0) {
          uVar4 = LineFunc(0x82a9,
                           "virtual int DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)",0,0
                          );
        }
        else {
          cVar2 = PvP_Room::OnSetPVPSeatState(local_10,param_1,(int)local_12,local_11,2);
          if (cVar2 != '\x01') {
            PvP_Room::reset(local_10);
            this_00 = (CGameManager *)G_CGameManager();
            CGameManager::PutPvp(this_00,local_10);
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = LineFunc(0x82a6,
                         "virtual int DisPatcher_SetPVPSeat::dispatch_sig(CUser*, PacketBuf&)",0,0);
      }
    }
  }
  return uVar4;
}
```
