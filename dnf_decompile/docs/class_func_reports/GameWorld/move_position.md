# move_position

`_ZN9GameWorld13move_positionEP5CUseriiit`

`GameWorld::move_position(CUser*, int, int, int, unsigned short)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c5706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c5706  _ZN9GameWorld13move_positionEP5CUseriiit
#           GameWorld::move_position(CUser*, int, int, int, unsigned short)
# range [0x086c5706, 0x086c592b]
086c5706 +0x000:  push   %ebp
086c5707 +0x001:  mov    %esp,%ebp
086c5709 +0x003:  push   %esi
086c570a +0x004:  push   %ebx
086c570b +0x005:  sub    $0x50,%esp
086c570e +0x008:  mov    0x1c(%ebp),%eax
086c5711 +0x00b:  mov    %ax,-0x3c(%ebp)
086c5715 +0x00f:  cmpl   $0x0,0xc(%ebp)
086c5719 +0x013:  je     086c5921 <+0x21b>
086c571f +0x019:  mov    0xc(%ebp),%eax
086c5722 +0x01c:  mov    %eax,(%esp)
086c5725 +0x01f:  call   080da2da <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x477>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x477
086c572a +0x024:  test   %al,%al
086c572c +0x026:  jne    086c5924 <+0x21e>
086c5732 +0x02c:  mov    0x18(%ebp),%eax
086c5735 +0x02f:  movsbl %al,%ecx
086c5738 +0x032:  mov    0x14(%ebp),%eax
086c573b +0x035:  movzwl %ax,%edx
086c573e +0x038:  mov    0x10(%ebp),%eax
086c5741 +0x03b:  movzwl %ax,%eax
086c5744 +0x03e:  mov    %ecx,0xc(%esp)
086c5748 +0x042:  mov    %edx,0x8(%esp)
086c574c +0x046:  mov    %eax,0x4(%esp)
086c5750 +0x04a:  mov    0xc(%ebp),%eax
086c5753 +0x04d:  mov    %eax,(%esp)
086c5756 +0x050:  call   082f0e2a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xbae>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xbae
086c575b +0x055:  lea    -0x34(%ebp),%eax
086c575e +0x058:  mov    %eax,(%esp)
086c5761 +0x05b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c5766 +0x060:  movl   $0x16,0x8(%esp)
086c576e +0x068:  movl   $0x0,0x4(%esp)
086c5776 +0x070:  lea    -0x34(%ebp),%eax
086c5779 +0x073:  mov    %eax,(%esp)
086c577c +0x076:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c5781 +0x07b:  mov    0xc(%ebp),%eax
086c5784 +0x07e:  mov    %eax,(%esp)
086c5787 +0x081:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086c578c +0x086:  movzwl %ax,%eax
086c578f +0x089:  mov    %eax,0x4(%esp)
086c5793 +0x08d:  lea    -0x34(%ebp),%eax
086c5796 +0x090:  mov    %eax,(%esp)
086c5799 +0x093:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c579e +0x098:  mov    0x10(%ebp),%eax
086c57a1 +0x09b:  mov    %eax,0x4(%esp)
086c57a5 +0x09f:  lea    -0x34(%ebp),%eax
086c57a8 +0x0a2:  mov    %eax,(%esp)
086c57ab +0x0a5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c57b0 +0x0aa:  mov    0x14(%ebp),%eax
086c57b3 +0x0ad:  mov    %eax,0x4(%esp)
086c57b7 +0x0b1:  lea    -0x34(%ebp),%eax
086c57ba +0x0b4:  mov    %eax,(%esp)
086c57bd +0x0b7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c57c2 +0x0bc:  mov    0x18(%ebp),%eax
086c57c5 +0x0bf:  mov    %eax,0x4(%esp)
086c57c9 +0x0c3:  lea    -0x34(%ebp),%eax
086c57cc +0x0c6:  mov    %eax,(%esp)
086c57cf +0x0c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c57d4 +0x0ce:  movzwl -0x3c(%ebp),%eax
086c57d8 +0x0d2:  mov    %eax,0x4(%esp)
086c57dc +0x0d6:  lea    -0x34(%ebp),%eax
086c57df +0x0d9:  mov    %eax,(%esp)
086c57e2 +0x0dc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c57e7 +0x0e1:  movl   $0x1,0x4(%esp)
086c57ef +0x0e9:  lea    -0x34(%ebp),%eax
086c57f2 +0x0ec:  mov    %eax,(%esp)
086c57f5 +0x0ef:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c57fa +0x0f4:  mov    0xc(%ebp),%eax
086c57fd +0x0f7:  mov    %eax,(%esp)
086c5800 +0x0fa:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
086c5805 +0x0ff:  movsbl %al,%eax
086c5808 +0x102:  mov    %eax,-0x18(%ebp)
086c580b +0x105:  movl   $0x0,0x4(%esp)
086c5813 +0x10d:  mov    0xc(%ebp),%eax
086c5816 +0x110:  mov    %eax,(%esp)
086c5819 +0x113:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086c581e +0x118:  mov    %eax,-0x14(%ebp)
086c5821 +0x11b:  mov    -0x14(%ebp),%eax
086c5824 +0x11e:  mov    %eax,0x8(%esp)
086c5828 +0x122:  mov    -0x18(%ebp),%eax
086c582b +0x125:  mov    %eax,0x4(%esp)
086c582f +0x129:  mov    0x8(%ebp),%eax
086c5832 +0x12c:  mov    %eax,(%esp)
086c5835 +0x12f:  call   086c49ee <_ZN9GameWorld16check_valid_areaEii>  ; GameWorld::check_valid_area(int, int)
086c583a +0x134:  test   %al,%al
086c583c +0x136:  je     086c5914 <+0x20e>
086c5842 +0x13c:  mov    0xc(%ebp),%eax
086c5845 +0x13f:  mov    %eax,0x4(%esp)
086c5849 +0x143:  mov    0x8(%ebp),%eax
086c584c +0x146:  mov    %eax,(%esp)
086c584f +0x149:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086c5854 +0x14e:  mov    %eax,-0x10(%ebp)
086c5857 +0x151:  cmpl   $0x0,-0x10(%ebp)
086c585b +0x155:  je     086c58b3 <+0x1ad>
086c585d +0x157:  mov    -0x14(%ebp),%eax
086c5860 +0x15a:  mov    %eax,0x4(%esp)
086c5864 +0x15e:  mov    -0x10(%ebp),%eax
086c5867 +0x161:  mov    %eax,(%esp)
086c586a +0x164:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c586f +0x169:  mov    %eax,-0xc(%ebp)
086c5872 +0x16c:  cmpl   $0x0,-0xc(%ebp)
086c5876 +0x170:  je     086c5914 <+0x20e>
086c587c +0x176:  mov    0xc(%ebp),%eax
086c587f +0x179:  mov    %eax,(%esp)
086c5882 +0x17c:  call   0868bee4 <_ZN15CUserCharacInfo18IsCurCharacVisibleEv>  ; CUserCharacInfo::IsCurCharacVisible()
086c5887 +0x181:  test   %al,%al
086c5889 +0x183:  je     086c589f <+0x199>
086c588b +0x185:  lea    -0x34(%ebp),%eax
086c588e +0x188:  mov    %eax,0x4(%esp)
086c5892 +0x18c:  mov    -0xc(%ebp),%eax
086c5895 +0x18f:  mov    %eax,(%esp)
086c5898 +0x192:  call   086c2d2a <_ZN4Area11send_to_allER11PacketGuard>  ; Area::send_to_all(PacketGuard&)
086c589d +0x197:  jmp    086c5914 <+0x20e>
086c589f +0x199:  lea    -0x34(%ebp),%eax
086c58a2 +0x19c:  mov    %eax,0x4(%esp)
086c58a6 +0x1a0:  mov    0xc(%ebp),%eax
086c58a9 +0x1a3:  mov    %eax,(%esp)
086c58ac +0x1a6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c58b1 +0x1ab:  jmp    086c5914 <+0x20e>
086c58b3 +0x1ad:  movl   $0x5,0xc(%esp)
086c58bb +0x1b5:  movl   $0x5ec,0x8(%esp)
086c58c3 +0x1bd:  movl   $&_ZZN9GameWorld13move_positionEP5CUseriiitE19__PRETTY_FUNCTION__,0x4(%esp)
086c58cb +0x1c5:  lea    -0x28(%ebp),%eax
086c58ce +0x1c8:  mov    %eax,(%esp)
086c58d1 +0x1cb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086c58d6 +0x1d0:  mov    -0x14(%ebp),%eax
086c58d9 +0x1d3:  mov    %eax,0xc(%esp)
086c58dd +0x1d7:  mov    -0x18(%ebp),%eax
086c58e0 +0x1da:  mov    %eax,0x8(%esp)
086c58e4 +0x1de:  movl   $"%d %d",0x4(%esp)
086c58ec +0x1e6:  lea    -0x28(%ebp),%eax
086c58ef +0x1e9:  mov    %eax,(%esp)
086c58f2 +0x1ec:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086c58f7 +0x1f1:  jmp    086c5914 <+0x20e>
086c58f9 +0x1f3:  mov    %edx,%ebx
086c58fb +0x1f5:  mov    %eax,%esi
086c58fd +0x1f7:  lea    -0x34(%ebp),%eax
086c5900 +0x1fa:  mov    %eax,(%esp)
086c5903 +0x1fd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c5908 +0x202:  mov    %esi,%eax
086c590a +0x204:  mov    %ebx,%edx
086c590c +0x206:  mov    %eax,(%esp)
086c590f +0x209:  call   08ae3750 <_Unwind_Resume>
086c5914 +0x20e:  lea    -0x34(%ebp),%eax
086c5917 +0x211:  mov    %eax,(%esp)
086c591a +0x214:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c591f +0x219:  jmp    086c5925 <+0x21f>
086c5921 +0x21b:  nop
086c5922 +0x21c:  jmp    086c5925 <+0x21f>
086c5924 +0x21e:  nop
086c5925 +0x21f:  add    $0x50,%esp
086c5928 +0x222:  pop    %ebx
086c5929 +0x223:  pop    %esi
086c592a +0x224:  pop    %ebp
086c592b +0x225:  ret
```

## 反编译 C

```c
// GameWorld::move_position @ 0x86c5706

/* GameWorld::move_position(CUser*, int, int, int, unsigned short) */

void __thiscall
GameWorld::move_position
          (GameWorld *this,CUser *param_1,int param_2,int param_3,int param_4,ushort param_5)

{
  char cVar1;
  uint uVar2;
  PacketGuard local_38 [12];
  cMyTrace local_2c [16];
  int local_1c;
  int local_18;
  Village *local_14;
  Area *local_10;
  
  if ((param_1 != (CUser *)0x0) &&
     (cVar1 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1), cVar1 == '\0')) {
    CUser::set_position(param_1,(ushort)param_2,(ushort)param_3,(char)param_4);
    PacketGuard::PacketGuard(local_38);
                    /* try { // try from 086c577c to 086c58f6 has its CatchHandler @ 086c58f9 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x16);
    uVar2 = CUser::get_unique_id(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar2 & 0xffff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,param_2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,param_3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,param_4);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,(uint)param_5);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    local_1c = (int)cVar1;
    local_18 = CUser::get_area(param_1,false);
    cVar1 = check_valid_area(this,local_1c,local_18);
    if (cVar1 != '\0') {
      local_14 = (Village *)getUserVillage(this,param_1);
      if (local_14 == (Village *)0x0) {
        cMyTrace::cMyTrace(local_2c,
                           "void GameWorld::move_position(CUser*, int, int, int, short unsigned int)"
                           ,0x5ec,5);
        cMyTrace::operator()(local_2c,"%d %d",local_1c,local_18);
      }
      else {
        local_10 = (Area *)Village::getArea(local_14,local_18);
        if (local_10 != (Area *)0x0) {
          cVar1 = CUserCharacInfo::IsCurCharacVisible((CUserCharacInfo *)param_1);
          if (cVar1 == '\0') {
            CUser::Send(param_1,local_38);
          }
          else {
            Area::send_to_all(local_10,local_38);
          }
        }
      }
    }
    PacketGuard::~PacketGuard(local_38);
  }
  return;
}
```
