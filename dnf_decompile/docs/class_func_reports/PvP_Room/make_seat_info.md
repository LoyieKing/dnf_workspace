# make_seat_info

`_ZN8PvP_Room14make_seat_infoEPci`

`PvP_Room::make_seat_info(char*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085db9e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085db9e2  _ZN8PvP_Room14make_seat_infoEPci
#           PvP_Room::make_seat_info(char*, int)
# range [0x085db9e2, 0x085dbccd]
085db9e2 +0x000:  push   %ebp
085db9e3 +0x001:  mov    %esp,%ebp
085db9e5 +0x003:  push   %esi
085db9e6 +0x004:  push   %ebx
085db9e7 +0x005:  sub    $0x40,%esp
085db9ea +0x008:  mov    0xc(%ebp),%eax
085db9ed +0x00b:  mov    %eax,-0x14(%ebp)
085db9f0 +0x00e:  mov    -0x14(%ebp),%eax
085db9f3 +0x011:  movl   $0x2b,0x8(%esp)
085db9fb +0x019:  movl   $0x0,0x4(%esp)
085dba03 +0x021:  mov    %eax,(%esp)
085dba06 +0x024:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085dba0b +0x029:  mov    0x8(%ebp),%eax
085dba0e +0x02c:  mov    (%eax),%edx
085dba10 +0x02e:  mov    -0x14(%ebp),%eax
085dba13 +0x031:  mov    %edx,0x4(%esp)
085dba17 +0x035:  mov    %eax,(%esp)
085dba1a +0x038:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dba1f +0x03d:  mov    0x8(%ebp),%eax
085dba22 +0x040:  mov    0x4(%eax),%eax
085dba25 +0x043:  mov    %eax,%edx
085dba27 +0x045:  mov    -0x14(%ebp),%eax
085dba2a +0x048:  mov    %edx,0x4(%esp)
085dba2e +0x04c:  mov    %eax,(%esp)
085dba31 +0x04f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dba36 +0x054:  cmpl   $0xffff,0x10(%ebp)
085dba3d +0x05b:  jne    085dbbda <+0x1f8>
085dba43 +0x061:  mov    0x8(%ebp),%eax
085dba46 +0x064:  mov    %eax,(%esp)
085dba49 +0x067:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085dba4e +0x06c:  mov    %eax,-0x10(%ebp)
085dba51 +0x06f:  mov    -0x14(%ebp),%eax
085dba54 +0x072:  mov    -0x10(%ebp),%edx
085dba57 +0x075:  mov    %edx,0x4(%esp)
085dba5b +0x079:  mov    %eax,(%esp)
085dba5e +0x07c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dba63 +0x081:  cmpl   $0x0,-0x10(%ebp)
085dba67 +0x085:  jne    085dbaab <+0xc9>
085dba69 +0x087:  mov    0x8(%ebp),%eax
085dba6c +0x08a:  mov    0xb8(%eax),%edx
085dba72 +0x090:  mov    0x8(%ebp),%eax
085dba75 +0x093:  mov    (%eax),%eax
085dba77 +0x095:  mov    %edx,0x18(%esp)
085dba7b +0x099:  mov    %eax,0x14(%esp)
085dba7f +0x09d:  movl   $"Send Member 0 PvpRoom %d State(%d)",0x10(%esp)
085dba87 +0x0a5:  movl   $0xe66,0xc(%esp)
085dba8f +0x0ad:  movl   $&_ZZN8PvP_Room14make_seat_infoEPciE19__PRETTY_FUNCTION__,0x8(%esp)
085dba97 +0x0b5:  movl   $"pvp.cpp",0x4(%esp)
085dba9f +0x0bd:  movl   $0x1,(%esp)
085dbaa6 +0x0c4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085dbaab +0x0c9:  mov    0x8(%ebp),%eax
085dbaae +0x0cc:  mov    %eax,(%esp)
085dbab1 +0x0cf:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085dbab6 +0x0d4:  movl   $0x0,-0xc(%ebp)
085dbabd +0x0db:  jmp    085dbbbb <+0x1d9>
085dbac2 +0x0e0:  mov    -0xc(%ebp),%edx
085dbac5 +0x0e3:  mov    0x8(%ebp),%eax
085dbac8 +0x0e6:  add    $0xc,%edx
085dbacb +0x0e9:  mov    (%eax,%edx,4),%eax
085dbace +0x0ec:  test   %eax,%eax
085dbad0 +0x0ee:  je     085dbbb7 <+0x1d5>
085dbad6 +0x0f4:  mov    -0x14(%ebp),%eax
085dbad9 +0x0f7:  mov    -0xc(%ebp),%edx
085dbadc +0x0fa:  mov    %edx,0x4(%esp)
085dbae0 +0x0fe:  mov    %eax,(%esp)
085dbae3 +0x101:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbae8 +0x106:  mov    -0xc(%ebp),%edx
085dbaeb +0x109:  mov    0x8(%ebp),%eax
085dbaee +0x10c:  add    $0x14,%edx
085dbaf1 +0x10f:  mov    (%eax,%edx,4),%edx
085dbaf4 +0x112:  mov    -0x14(%ebp),%eax
085dbaf7 +0x115:  mov    %edx,0x4(%esp)
085dbafb +0x119:  mov    %eax,(%esp)
085dbafe +0x11c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbb03 +0x121:  mov    -0xc(%ebp),%edx
085dbb06 +0x124:  mov    0x8(%ebp),%eax
085dbb09 +0x127:  add    $0xc,%edx
085dbb0c +0x12a:  mov    (%eax,%edx,4),%eax
085dbb0f +0x12d:  mov    %eax,(%esp)
085dbb12 +0x130:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085dbb17 +0x135:  movzwl %ax,%edx
085dbb1a +0x138:  mov    -0x14(%ebp),%eax
085dbb1d +0x13b:  mov    %edx,0x4(%esp)
085dbb21 +0x13f:  mov    %eax,(%esp)
085dbb24 +0x142:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dbb29 +0x147:  mov    -0xc(%ebp),%edx
085dbb2c +0x14a:  mov    0x8(%ebp),%eax
085dbb2f +0x14d:  add    $0xc,%edx
085dbb32 +0x150:  mov    (%eax,%edx,4),%eax
085dbb35 +0x153:  mov    %eax,(%esp)
085dbb38 +0x156:  call   08692f36 <_ZN5CUser23isAllowLocationGeoStateEv>  ; CUser::isAllowLocationGeoState()
085dbb3d +0x15b:  movzbl %al,%edx
085dbb40 +0x15e:  mov    -0x14(%ebp),%eax
085dbb43 +0x161:  mov    %edx,0x4(%esp)
085dbb47 +0x165:  mov    %eax,(%esp)
085dbb4a +0x168:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbb4f +0x16d:  mov    -0xc(%ebp),%edx
085dbb52 +0x170:  mov    0x8(%ebp),%eax
085dbb55 +0x173:  add    $0xc,%edx
085dbb58 +0x176:  mov    (%eax,%edx,4),%eax
085dbb5b +0x179:  mov    %eax,(%esp)
085dbb5e +0x17c:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085dbb63 +0x181:  movzwl %ax,%esi
085dbb66 +0x184:  mov    -0xc(%ebp),%edx
085dbb69 +0x187:  mov    0x8(%ebp),%eax
085dbb6c +0x18a:  add    $0x14,%edx
085dbb6f +0x18d:  mov    (%eax,%edx,4),%ebx
085dbb72 +0x190:  movl   $0x0,0xc(%esp)
085dbb7a +0x198:  movl   $0xe74,0x8(%esp)
085dbb82 +0x1a0:  movl   $&_ZZN8PvP_Room14make_seat_infoEPciE19__PRETTY_FUNCTION__,0x4(%esp)
085dbb8a +0x1a8:  lea    -0x24(%ebp),%eax
085dbb8d +0x1ab:  mov    %eax,(%esp)
085dbb90 +0x1ae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085dbb95 +0x1b3:  mov    %esi,0x10(%esp)
085dbb99 +0x1b7:  mov    %ebx,0xc(%esp)
085dbb9d +0x1bb:  mov    -0xc(%ebp),%eax
085dbba0 +0x1be:  mov    %eax,0x8(%esp)
085dbba4 +0x1c2:  movl   $"RELAY_BATTLE SeatInfo player(%d), team(%d), uid(%d)\n",0x4(%esp)
085dbbac +0x1ca:  lea    -0x24(%ebp),%eax
085dbbaf +0x1cd:  mov    %eax,(%esp)
085dbbb2 +0x1d0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085dbbb7 +0x1d5:  addl   $0x1,-0xc(%ebp)
085dbbbb +0x1d9:  cmpl   $0x7,-0xc(%ebp)
085dbbbf +0x1dd:  setle  %al
085dbbc2 +0x1e0:  test   %al,%al
085dbbc4 +0x1e2:  jne    085dbac2 <+0xe0>
085dbbca +0x1e8:  mov    0x8(%ebp),%eax
085dbbcd +0x1eb:  mov    %eax,(%esp)
085dbbd0 +0x1ee:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085dbbd5 +0x1f3:  jmp    085dbcb4 <+0x2d2>
085dbbda +0x1f8:  mov    -0x14(%ebp),%eax
085dbbdd +0x1fb:  movl   $0x1,0x4(%esp)
085dbbe5 +0x203:  mov    %eax,(%esp)
085dbbe8 +0x206:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbbed +0x20b:  mov    0x8(%ebp),%eax
085dbbf0 +0x20e:  mov    %eax,(%esp)
085dbbf3 +0x211:  call   085df93a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c1
085dbbf8 +0x216:  mov    -0x14(%ebp),%eax
085dbbfb +0x219:  mov    0x10(%ebp),%edx
085dbbfe +0x21c:  mov    %edx,0x4(%esp)
085dbc02 +0x220:  mov    %eax,(%esp)
085dbc05 +0x223:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbc0a +0x228:  mov    0x10(%ebp),%edx
085dbc0d +0x22b:  mov    0x8(%ebp),%eax
085dbc10 +0x22e:  add    $0x14,%edx
085dbc13 +0x231:  mov    (%eax,%edx,4),%edx
085dbc16 +0x234:  mov    -0x14(%ebp),%eax
085dbc19 +0x237:  mov    %edx,0x4(%esp)
085dbc1d +0x23b:  mov    %eax,(%esp)
085dbc20 +0x23e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbc25 +0x243:  mov    0x10(%ebp),%edx
085dbc28 +0x246:  mov    0x8(%ebp),%eax
085dbc2b +0x249:  add    $0xc,%edx
085dbc2e +0x24c:  mov    (%eax,%edx,4),%eax
085dbc31 +0x24f:  test   %eax,%eax
085dbc33 +0x251:  je     085dbc83 <+0x2a1>
085dbc35 +0x253:  mov    0x10(%ebp),%edx
085dbc38 +0x256:  mov    0x8(%ebp),%eax
085dbc3b +0x259:  add    $0xc,%edx
085dbc3e +0x25c:  mov    (%eax,%edx,4),%eax
085dbc41 +0x25f:  mov    %eax,(%esp)
085dbc44 +0x262:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085dbc49 +0x267:  movzwl %ax,%edx
085dbc4c +0x26a:  mov    -0x14(%ebp),%eax
085dbc4f +0x26d:  mov    %edx,0x4(%esp)
085dbc53 +0x271:  mov    %eax,(%esp)
085dbc56 +0x274:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dbc5b +0x279:  mov    0x10(%ebp),%edx
085dbc5e +0x27c:  mov    0x8(%ebp),%eax
085dbc61 +0x27f:  add    $0xc,%edx
085dbc64 +0x282:  mov    (%eax,%edx,4),%eax
085dbc67 +0x285:  mov    %eax,(%esp)
085dbc6a +0x288:  call   08692f36 <_ZN5CUser23isAllowLocationGeoStateEv>  ; CUser::isAllowLocationGeoState()
085dbc6f +0x28d:  movzbl %al,%edx
085dbc72 +0x290:  mov    -0x14(%ebp),%eax
085dbc75 +0x293:  mov    %edx,0x4(%esp)
085dbc79 +0x297:  mov    %eax,(%esp)
085dbc7c +0x29a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbc81 +0x29f:  jmp    085dbca9 <+0x2c7>
085dbc83 +0x2a1:  mov    -0x14(%ebp),%eax
085dbc86 +0x2a4:  movl   $0xffff,0x4(%esp)
085dbc8e +0x2ac:  mov    %eax,(%esp)
085dbc91 +0x2af:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085dbc96 +0x2b4:  mov    -0x14(%ebp),%eax
085dbc99 +0x2b7:  movl   $0x0,0x4(%esp)
085dbca1 +0x2bf:  mov    %eax,(%esp)
085dbca4 +0x2c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085dbca9 +0x2c7:  mov    0x8(%ebp),%eax
085dbcac +0x2ca:  mov    %eax,(%esp)
085dbcaf +0x2cd:  call   085df940 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x1c7>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x1c7
085dbcb4 +0x2d2:  mov    -0x14(%ebp),%eax
085dbcb7 +0x2d5:  movl   $0x1,0x4(%esp)
085dbcbf +0x2dd:  mov    %eax,(%esp)
085dbcc2 +0x2e0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085dbcc7 +0x2e5:  add    $0x40,%esp
085dbcca +0x2e8:  pop    %ebx
085dbccb +0x2e9:  pop    %esi
085dbccc +0x2ea:  pop    %ebp
085dbccd +0x2eb:  ret
```

## 反编译 C

```c
// PvP_Room::make_seat_info @ 0x85db9e2

/* PvP_Room::make_seat_info(char*, int) */

void __thiscall PvP_Room::make_seat_info(PvP_Room *this,char *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  cMyTrace local_28 [16];
  InterfacePacketBuf *local_18;
  int local_14;
  int local_10;
  
  local_18 = (InterfacePacketBuf *)param_1;
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x2b);
  InterfacePacketBuf::put_short(local_18,*(int *)this);
  InterfacePacketBuf::put_byte(local_18,*(int *)(this + 4));
  if (param_2 == 0xffff) {
    local_14 = get_waiter_count(this);
    InterfacePacketBuf::put_byte(local_18,local_14);
    if (local_14 == 0) {
      LogManager::logFormat
                (1,"pvp.cpp","void PvP_Room::make_seat_info(char*, int)",0xe66,
                 "Send Member 0 PvpRoom %d State(%d)",*(undefined4 *)this,
                 *(undefined4 *)(this + 0xb8));
    }
    lock();
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
        InterfacePacketBuf::put_byte(local_18,local_10);
        InterfacePacketBuf::put_byte(local_18,*(int *)(this + (local_10 + 0x14) * 4));
        uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0xc) * 4));
        InterfacePacketBuf::put_short(local_18,uVar2 & 0xffff);
        uVar2 = CUser::isAllowLocationGeoState(*(CUser **)(this + (local_10 + 0xc) * 4));
        InterfacePacketBuf::put_byte(local_18,uVar2 & 0xff);
        uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0xc) * 4));
        uVar1 = *(undefined4 *)(this + (local_10 + 0x14) * 4);
        cMyTrace::cMyTrace(local_28,"void PvP_Room::make_seat_info(char*, int)",0xe74,0);
        cMyTrace::operator()
                  (local_28,"RELAY_BATTLE SeatInfo player(%d), team(%d), uid(%d)\n",local_10,uVar1,
                   uVar2 & 0xffff);
      }
    }
    unlock();
  }
  else {
    InterfacePacketBuf::put_byte(local_18,1);
    lock();
    InterfacePacketBuf::put_byte(local_18,param_2);
    InterfacePacketBuf::put_byte(local_18,*(int *)(this + (param_2 + 0x14) * 4));
    if (*(int *)(this + (param_2 + 0xc) * 4) == 0) {
      InterfacePacketBuf::put_short(local_18,0xffff);
      InterfacePacketBuf::put_byte(local_18,0);
    }
    else {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + (param_2 + 0xc) * 4));
      InterfacePacketBuf::put_short(local_18,uVar2 & 0xffff);
      uVar2 = CUser::isAllowLocationGeoState(*(CUser **)(this + (param_2 + 0xc) * 4));
      InterfacePacketBuf::put_byte(local_18,uVar2 & 0xff);
    }
    unlock();
  }
  InterfacePacketBuf::finalize(local_18,true);
  return;
}
```
