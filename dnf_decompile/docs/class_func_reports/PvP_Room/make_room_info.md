# make_room_info

`_ZN8PvP_Room14make_room_infoEPc`

`PvP_Room::make_room_info(char*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085db7f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085db7f6  _ZN8PvP_Room14make_room_infoEPc
#           PvP_Room::make_room_info(char*)
# range [0x085db7f6, 0x085db9e1]
085db7f6 +0x000:  push   %ebp
085db7f7 +0x001:  mov    %esp,%ebp
085db7f9 +0x003:  sub    $0x28,%esp
085db7fc +0x006:  mov    0xc(%ebp),%eax
085db7ff +0x009:  mov    %eax,-0x14(%ebp)
085db802 +0x00c:  mov    0x8(%ebp),%eax
085db805 +0x00f:  mov    (%eax),%edx
085db807 +0x011:  mov    -0x14(%ebp),%eax
085db80a +0x014:  mov    %edx,0x4(%esp)
085db80e +0x018:  mov    %eax,(%esp)
085db811 +0x01b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db816 +0x020:  mov    0x8(%ebp),%eax
085db819 +0x023:  movzbl 0x8(%eax),%eax
085db81d +0x027:  movsbl %al,%edx
085db820 +0x02a:  mov    -0x14(%ebp),%eax
085db823 +0x02d:  mov    %edx,0x4(%esp)
085db827 +0x031:  mov    %eax,(%esp)
085db82a +0x034:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db82f +0x039:  mov    0x8(%ebp),%eax
085db832 +0x03c:  movzbl 0x8(%eax),%eax
085db836 +0x040:  test   %al,%al
085db838 +0x042:  jne    085db879 <+0x83>
085db83a +0x044:  mov    0x8(%ebp),%eax
085db83d +0x047:  add    $0x9,%eax
085db840 +0x04a:  mov    %eax,(%esp)
085db843 +0x04d:  call   0807e3b0 <_init+0xca8>
085db848 +0x052:  mov    %eax,-0x10(%ebp)
085db84b +0x055:  mov    -0x14(%ebp),%eax
085db84e +0x058:  mov    -0x10(%ebp),%edx
085db851 +0x05b:  mov    %edx,0x4(%esp)
085db855 +0x05f:  mov    %eax,(%esp)
085db858 +0x062:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db85d +0x067:  mov    0x8(%ebp),%eax
085db860 +0x06a:  lea    0x9(%eax),%ecx
085db863 +0x06d:  mov    -0x14(%ebp),%eax
085db866 +0x070:  mov    -0x10(%ebp),%edx
085db869 +0x073:  mov    %edx,0x8(%esp)
085db86d +0x077:  mov    %ecx,0x4(%esp)
085db871 +0x07b:  mov    %eax,(%esp)
085db874 +0x07e:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
085db879 +0x083:  mov    0x8(%ebp),%eax
085db87c +0x086:  mov    0xb8(%eax),%edx
085db882 +0x08c:  mov    -0x14(%ebp),%eax
085db885 +0x08f:  mov    %edx,0x4(%esp)
085db889 +0x093:  mov    %eax,(%esp)
085db88c +0x096:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db891 +0x09b:  mov    0x8(%ebp),%eax
085db894 +0x09e:  mov    0x2c(%eax),%edx
085db897 +0x0a1:  mov    -0x14(%ebp),%eax
085db89a +0x0a4:  mov    %edx,0x4(%esp)
085db89e +0x0a8:  mov    %eax,(%esp)
085db8a1 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db8a6 +0x0b0:  mov    0x8(%ebp),%eax
085db8a9 +0x0b3:  movzwl 0x5c4(%eax),%eax
085db8b0 +0x0ba:  movswl %ax,%edx
085db8b3 +0x0bd:  mov    -0x14(%ebp),%eax
085db8b6 +0x0c0:  mov    %edx,0x4(%esp)
085db8ba +0x0c4:  mov    %eax,(%esp)
085db8bd +0x0c7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db8c2 +0x0cc:  mov    0x8(%ebp),%eax
085db8c5 +0x0cf:  mov    0x4(%eax),%eax
085db8c8 +0x0d2:  mov    %eax,%edx
085db8ca +0x0d4:  mov    -0x14(%ebp),%eax
085db8cd +0x0d7:  mov    %edx,0x4(%esp)
085db8d1 +0x0db:  mov    %eax,(%esp)
085db8d4 +0x0de:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db8d9 +0x0e3:  movl   $0x0,-0xc(%ebp)
085db8e0 +0x0ea:  jmp    085db988 <+0x192>
085db8e5 +0x0ef:  mov    -0xc(%ebp),%edx
085db8e8 +0x0f2:  mov    0x8(%ebp),%eax
085db8eb +0x0f5:  add    $0x14,%edx
085db8ee +0x0f8:  mov    (%eax,%edx,4),%edx
085db8f1 +0x0fb:  mov    -0x14(%ebp),%eax
085db8f4 +0x0fe:  mov    %edx,0x4(%esp)
085db8f8 +0x102:  mov    %eax,(%esp)
085db8fb +0x105:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db900 +0x10a:  mov    -0xc(%ebp),%edx
085db903 +0x10d:  mov    0x8(%ebp),%eax
085db906 +0x110:  add    $0xc,%edx
085db909 +0x113:  mov    (%eax,%edx,4),%eax
085db90c +0x116:  test   %eax,%eax
085db90e +0x118:  je     085db95e <+0x168>
085db910 +0x11a:  mov    -0xc(%ebp),%edx
085db913 +0x11d:  mov    0x8(%ebp),%eax
085db916 +0x120:  add    $0xc,%edx
085db919 +0x123:  mov    (%eax,%edx,4),%eax
085db91c +0x126:  mov    %eax,(%esp)
085db91f +0x129:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085db924 +0x12e:  movzwl %ax,%edx
085db927 +0x131:  mov    -0x14(%ebp),%eax
085db92a +0x134:  mov    %edx,0x4(%esp)
085db92e +0x138:  mov    %eax,(%esp)
085db931 +0x13b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db936 +0x140:  mov    -0xc(%ebp),%edx
085db939 +0x143:  mov    0x8(%ebp),%eax
085db93c +0x146:  add    $0xc,%edx
085db93f +0x149:  mov    (%eax,%edx,4),%eax
085db942 +0x14c:  mov    %eax,(%esp)
085db945 +0x14f:  call   08692f36 <_ZN5CUser23isAllowLocationGeoStateEv>  ; CUser::isAllowLocationGeoState()
085db94a +0x154:  movzbl %al,%edx
085db94d +0x157:  mov    -0x14(%ebp),%eax
085db950 +0x15a:  mov    %edx,0x4(%esp)
085db954 +0x15e:  mov    %eax,(%esp)
085db957 +0x161:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db95c +0x166:  jmp    085db984 <+0x18e>
085db95e +0x168:  mov    -0x14(%ebp),%eax
085db961 +0x16b:  movl   $0xffff,0x4(%esp)
085db969 +0x173:  mov    %eax,(%esp)
085db96c +0x176:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085db971 +0x17b:  mov    -0x14(%ebp),%eax
085db974 +0x17e:  movl   $0x0,0x4(%esp)
085db97c +0x186:  mov    %eax,(%esp)
085db97f +0x189:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db984 +0x18e:  addl   $0x1,-0xc(%ebp)
085db988 +0x192:  cmpl   $0x7,-0xc(%ebp)
085db98c +0x196:  setle  %al
085db98f +0x199:  test   %al,%al
085db991 +0x19b:  jne    085db8e5 <+0xef>
085db997 +0x1a1:  mov    0x8(%ebp),%eax
085db99a +0x1a4:  movzbl 0x604(%eax),%eax
085db9a1 +0x1ab:  movzbl %al,%edx
085db9a4 +0x1ae:  mov    -0x14(%ebp),%eax
085db9a7 +0x1b1:  mov    %edx,0x4(%esp)
085db9ab +0x1b5:  mov    %eax,(%esp)
085db9ae +0x1b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085db9b3 +0x1bd:  mov    0x8(%ebp),%eax
085db9b6 +0x1c0:  mov    0x6e4(%eax),%eax
085db9bc +0x1c6:  mov    (%eax),%eax
085db9be +0x1c8:  add    $0x8,%eax
085db9c1 +0x1cb:  mov    (%eax),%edx
085db9c3 +0x1cd:  mov    0x8(%ebp),%eax
085db9c6 +0x1d0:  mov    0x6e4(%eax),%eax
085db9cc +0x1d6:  mov    %eax,(%esp)
085db9cf +0x1d9:  call   *%edx
085db9d1 +0x1db:  mov    -0x14(%ebp),%edx
085db9d4 +0x1de:  mov    %eax,0x4(%esp)
085db9d8 +0x1e2:  mov    %edx,(%esp)
085db9db +0x1e5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085db9e0 +0x1ea:  leave
085db9e1 +0x1eb:  ret
```

## 反编译 C

```c
// PvP_Room::make_room_info @ 0x85db7f6

/* PvP_Room::make_room_info(char*) */

void __thiscall PvP_Room::make_room_info(PvP_Room *this,char *param_1)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  int local_10;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,*(int *)this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)this[8]);
  if (this[8] == (PvP_Room)0x0) {
    sVar1 = strlen((char *)(this + 9));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar1);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(this + 9),sVar1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0xb8));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(this + 0x5c4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*(int *)(this + 4));
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,*(int *)(this + (local_10 + 0x14) * 4));
    if (*(int *)(this + (local_10 + 0xc) * 4) == 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    }
    else {
      uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0xc) * 4));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
      uVar2 = CUser::isAllowLocationGeoState(*(CUser **)(this + (local_10 + 0xc) * 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
    }
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[0x604]);
  iVar3 = (**(code **)(**(int **)(this + 0x6e4) + 8))(*(undefined4 *)(this + 0x6e4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar3);
  return;
}
```
