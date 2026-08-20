# delete_user

`_ZN4Area11delete_userEP5CUser`

`Area::delete_user(CUser*)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c2a38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c2a38  _ZN4Area11delete_userEP5CUser
#           Area::delete_user(CUser*)
# range [0x086c2a38, 0x086c2be3]
086c2a38 +0x000:  push   %ebp
086c2a39 +0x001:  mov    %esp,%ebp
086c2a3b +0x003:  push   %esi
086c2a3c +0x004:  push   %ebx
086c2a3d +0x005:  sub    $0x20,%esp
086c2a40 +0x008:  mov    0x8(%ebp),%eax
086c2a43 +0x00b:  mov    0x68(%eax),%eax
086c2a46 +0x00e:  cmp    $0x1,%eax
086c2a49 +0x011:  je     086c2bdb <+0x1a3>
086c2a4f +0x017:  mov    0xc(%ebp),%eax
086c2a52 +0x01a:  mov    %eax,(%esp)
086c2a55 +0x01d:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c2a5a +0x022:  mov    %ax,-0xa(%ebp)
086c2a5e +0x026:  mov    0x8(%ebp),%eax
086c2a61 +0x029:  lea    0x44(%eax),%edx
086c2a64 +0x02c:  lea    -0xa(%ebp),%eax
086c2a67 +0x02f:  mov    %eax,0x4(%esp)
086c2a6b +0x033:  mov    %edx,(%esp)
086c2a6e +0x036:  call   086d38bc <_GLOBAL__I_MAX_VILLAGE_NUM+0x20ed>  ; global constructors keyed to MAX_VILLAGE_NUM+0x20ed
086c2a73 +0x03b:  lea    -0x18(%ebp),%eax
086c2a76 +0x03e:  mov    %eax,(%esp)
086c2a79 +0x041:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c2a7e +0x046:  movl   $0x17,0x8(%esp)
086c2a86 +0x04e:  movl   $0x0,0x4(%esp)
086c2a8e +0x056:  lea    -0x18(%ebp),%eax
086c2a91 +0x059:  mov    %eax,(%esp)
086c2a94 +0x05c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c2a99 +0x061:  mov    0xc(%ebp),%eax
086c2a9c +0x064:  mov    %eax,(%esp)
086c2a9f +0x067:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c2aa4 +0x06c:  movzwl %ax,%eax
086c2aa7 +0x06f:  mov    %eax,0x4(%esp)
086c2aab +0x073:  lea    -0x18(%ebp),%eax
086c2aae +0x076:  mov    %eax,(%esp)
086c2ab1 +0x079:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2ab6 +0x07e:  mov    0xc(%ebp),%eax
086c2ab9 +0x081:  mov    %eax,(%esp)
086c2abc +0x084:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c2ac1 +0x089:  movsbl %al,%eax
086c2ac4 +0x08c:  mov    %eax,0x4(%esp)
086c2ac8 +0x090:  lea    -0x18(%ebp),%eax
086c2acb +0x093:  mov    %eax,(%esp)
086c2ace +0x096:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c2ad3 +0x09b:  movl   $0x1,0x4(%esp)
086c2adb +0x0a3:  mov    0xc(%ebp),%eax
086c2ade +0x0a6:  mov    %eax,(%esp)
086c2ae1 +0x0a9:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c2ae6 +0x0ae:  mov    %eax,0x4(%esp)
086c2aea +0x0b2:  lea    -0x18(%ebp),%eax
086c2aed +0x0b5:  mov    %eax,(%esp)
086c2af0 +0x0b8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c2af5 +0x0bd:  mov    0xc(%ebp),%eax
086c2af8 +0x0c0:  mov    %eax,(%esp)
086c2afb +0x0c3:  call   0813492c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x533>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x533
086c2b00 +0x0c8:  movzwl %ax,%eax
086c2b03 +0x0cb:  mov    %eax,0x4(%esp)
086c2b07 +0x0cf:  lea    -0x18(%ebp),%eax
086c2b0a +0x0d2:  mov    %eax,(%esp)
086c2b0d +0x0d5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2b12 +0x0da:  mov    0xc(%ebp),%eax
086c2b15 +0x0dd:  mov    %eax,(%esp)
086c2b18 +0x0e0:  call   0813493c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x543>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x543
086c2b1d +0x0e5:  movzwl %ax,%eax
086c2b20 +0x0e8:  mov    %eax,0x4(%esp)
086c2b24 +0x0ec:  lea    -0x18(%ebp),%eax
086c2b27 +0x0ef:  mov    %eax,(%esp)
086c2b2a +0x0f2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2b2f +0x0f7:  mov    0xc(%ebp),%eax
086c2b32 +0x0fa:  mov    %eax,(%esp)
086c2b35 +0x0fd:  call   0813494c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x553>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x553
086c2b3a +0x102:  movsbl %al,%eax
086c2b3d +0x105:  mov    %eax,0x4(%esp)
086c2b41 +0x109:  lea    -0x18(%ebp),%eax
086c2b44 +0x10c:  mov    %eax,(%esp)
086c2b47 +0x10f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c2b4c +0x114:  mov    0xc(%ebp),%eax
086c2b4f +0x117:  mov    %eax,(%esp)
086c2b52 +0x11a:  call   0868bde4 <_ZN15CUserCharacInfo25get_charac_visible_valuesEv>  ; CUserCharacInfo::get_charac_visible_values()
086c2b57 +0x11f:  movsbl %al,%eax
086c2b5a +0x122:  mov    %eax,0x4(%esp)
086c2b5e +0x126:  lea    -0x18(%ebp),%eax
086c2b61 +0x129:  mov    %eax,(%esp)
086c2b64 +0x12c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c2b69 +0x131:  movl   $0x1,0x4(%esp)
086c2b71 +0x139:  lea    -0x18(%ebp),%eax
086c2b74 +0x13c:  mov    %eax,(%esp)
086c2b77 +0x13f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c2b7c +0x144:  mov    0xc(%ebp),%eax
086c2b7f +0x147:  mov    %eax,(%esp)
086c2b82 +0x14a:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
086c2b87 +0x14f:  test   %al,%al
086c2b89 +0x151:  je     086c2b9f <+0x167>
086c2b8b +0x153:  lea    -0x18(%ebp),%eax
086c2b8e +0x156:  mov    %eax,0x4(%esp)
086c2b92 +0x15a:  mov    0x8(%ebp),%eax
086c2b95 +0x15d:  mov    %eax,(%esp)
086c2b98 +0x160:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c2b9d +0x165:  jmp    086c2bce <+0x196>
086c2b9f +0x167:  lea    -0x18(%ebp),%eax
086c2ba2 +0x16a:  mov    %eax,0x4(%esp)
086c2ba6 +0x16e:  mov    0xc(%ebp),%eax
086c2ba9 +0x171:  mov    %eax,(%esp)
086c2bac +0x174:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c2bb1 +0x179:  jmp    086c2bce <+0x196>
086c2bb3 +0x17b:  mov    %edx,%ebx
086c2bb5 +0x17d:  mov    %eax,%esi
086c2bb7 +0x17f:  lea    -0x18(%ebp),%eax
086c2bba +0x182:  mov    %eax,(%esp)
086c2bbd +0x185:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c2bc2 +0x18a:  mov    %esi,%eax
086c2bc4 +0x18c:  mov    %ebx,%edx
086c2bc6 +0x18e:  mov    %eax,(%esp)
086c2bc9 +0x191:  call   08ae3750 <_Unwind_Resume>
086c2bce +0x196:  lea    -0x18(%ebp),%eax
086c2bd1 +0x199:  mov    %eax,(%esp)
086c2bd4 +0x19c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c2bd9 +0x1a1:  jmp    086c2bdc <+0x1a4>
086c2bdb +0x1a3:  nop
086c2bdc +0x1a4:  add    $0x20,%esp
086c2bdf +0x1a7:  pop    %ebx
086c2be0 +0x1a8:  pop    %esi
086c2be1 +0x1a9:  pop    %ebp
086c2be2 +0x1aa:  ret
086c2be3 +0x1ab:  nop
```

## 反编译 C

```c
// Area::delete_user @ 0x86c2a38

/* Area::delete_user(CUser*) */

void __thiscall Area::delete_user(Area *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  PacketGuard local_1c [14];
  undefined2 local_e;
  
  if (*(int *)(this + 0x68) != 1) {
    local_e = CUser::get_unique_id(param_1);
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::erase((ushort *)(this + 0x44));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086c2a94 to 086c2bb0 has its CatchHandler @ 086c2bb3 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x17);
    uVar2 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    iVar3 = CUser::get_area(param_1,true);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar3);
    uVar2 = CUser::get_posX(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    uVar2 = CUser::get_posY(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
    cVar1 = CUser::get_direction(param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    cVar1 = CUserCharacInfo::get_charac_visible_values((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)cVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    cVar1 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)param_1);
    if (cVar1 == '\0') {
      CUser::Send(param_1,local_1c);
    }
    else {
      send_to_all(this,local_1c);
    }
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
