# SetCharacterLive

`_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi`

`WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086be8b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086be8b4  _ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi
#           WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int)
# range [0x086be8b4, 0x086bea2d]
086be8b4 +0x000:  push   %ebp
086be8b5 +0x001:  mov    %esp,%ebp
086be8b7 +0x003:  push   %esi
086be8b8 +0x004:  push   %ebx
086be8b9 +0x005:  sub    $0x30,%esp
086be8bc +0x008:  mov    0x14(%ebp),%ecx
086be8bf +0x00b:  mov    0x18(%ebp),%edx
086be8c2 +0x00e:  mov    0x1c(%ebp),%eax
086be8c5 +0x011:  mov    %cl,-0x1c(%ebp)
086be8c8 +0x014:  mov    %dl,-0x20(%ebp)
086be8cb +0x017:  mov    %ax,-0x24(%ebp)
086be8cf +0x01b:  mov    0xc(%ebp),%eax
086be8d2 +0x01e:  mov    0x8(%ebp),%edx
086be8d5 +0x021:  movzbl -0x1c(%ebp),%ecx
086be8d9 +0x025:  mov    %cl,0x184(%edx,%eax,1)
086be8e0 +0x02c:  lea    -0x14(%ebp),%eax
086be8e3 +0x02f:  mov    %eax,(%esp)
086be8e6 +0x032:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086be8eb +0x037:  movl   $0x5f,0x8(%esp)
086be8f3 +0x03f:  movl   $0x0,0x4(%esp)
086be8fb +0x047:  lea    -0x14(%ebp),%eax
086be8fe +0x04a:  mov    %eax,(%esp)
086be901 +0x04d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086be906 +0x052:  mov    0x10(%ebp),%eax
086be909 +0x055:  mov    %eax,0x4(%esp)
086be90d +0x059:  mov    0x8(%ebp),%eax
086be910 +0x05c:  mov    %eax,(%esp)
086be913 +0x05f:  call   086bd842 <_ZN7WarRoom11GetUserSlotEP5CUser>  ; WarRoom::GetUserSlot(CUser*)
086be918 +0x064:  mov    %eax,0x4(%esp)
086be91c +0x068:  lea    -0x14(%ebp),%eax
086be91f +0x06b:  mov    %eax,(%esp)
086be922 +0x06e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be927 +0x073:  movzbl -0x1c(%ebp),%eax
086be92b +0x077:  mov    %eax,0x4(%esp)
086be92f +0x07b:  lea    -0x14(%ebp),%eax
086be932 +0x07e:  mov    %eax,(%esp)
086be935 +0x081:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be93a +0x086:  movzbl -0x20(%ebp),%eax
086be93e +0x08a:  mov    %eax,0x4(%esp)
086be942 +0x08e:  lea    -0x14(%ebp),%eax
086be945 +0x091:  mov    %eax,(%esp)
086be948 +0x094:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086be94d +0x099:  cmpl   $0xff,0x20(%ebp)
086be954 +0x0a0:  je     086be9b3 <+0xff>
086be956 +0x0a2:  cmpl   $0x0,0x20(%ebp)
086be95a +0x0a6:  js     086be9b3 <+0xff>
086be95c +0x0a8:  cmpl   $0x5,0x20(%ebp)
086be960 +0x0ac:  jg     086be9b3 <+0xff>
086be962 +0x0ae:  mov    0x20(%ebp),%edx
086be965 +0x0b1:  mov    0x8(%ebp),%eax
086be968 +0x0b4:  add    $0x48,%edx
086be96b +0x0b7:  mov    0xc(%eax,%edx,4),%eax
086be96f +0x0bb:  test   %eax,%eax
086be971 +0x0bd:  je     086be9b3 <+0xff>
086be973 +0x0bf:  mov    0x8(%ebp),%eax
086be976 +0x0c2:  movzbl 0x12(%eax),%eax
086be97a +0x0c6:  test   %al,%al
086be97c +0x0c8:  je     086be993 <+0xdf>
086be97e +0x0ca:  movl   $0x0,0x4(%esp)
086be986 +0x0d2:  lea    -0x14(%ebp),%eax
086be989 +0x0d5:  mov    %eax,(%esp)
086be98c +0x0d8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be991 +0x0dd:  jmp    086be9c6 <+0x112>
086be993 +0x0df:  mov    0x8(%ebp),%eax
086be996 +0x0e2:  mov    0x1d0(%eax),%eax
086be99c +0x0e8:  mov    0x7c8(%eax),%eax
086be9a2 +0x0ee:  mov    %eax,0x4(%esp)
086be9a6 +0x0f2:  lea    -0x14(%ebp),%eax
086be9a9 +0x0f5:  mov    %eax,(%esp)
086be9ac +0x0f8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be9b1 +0x0fd:  jmp    086be9c6 <+0x112>
086be9b3 +0x0ff:  movl   $0x0,0x4(%esp)
086be9bb +0x107:  lea    -0x14(%ebp),%eax
086be9be +0x10a:  mov    %eax,(%esp)
086be9c1 +0x10d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be9c6 +0x112:  movswl -0x24(%ebp),%eax
086be9ca +0x116:  mov    %eax,0x4(%esp)
086be9ce +0x11a:  lea    -0x14(%ebp),%eax
086be9d1 +0x11d:  mov    %eax,(%esp)
086be9d4 +0x120:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086be9d9 +0x125:  movl   $0x1,0x4(%esp)
086be9e1 +0x12d:  lea    -0x14(%ebp),%eax
086be9e4 +0x130:  mov    %eax,(%esp)
086be9e7 +0x133:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086be9ec +0x138:  lea    -0x14(%ebp),%eax
086be9ef +0x13b:  mov    %eax,0x4(%esp)
086be9f3 +0x13f:  mov    0x8(%ebp),%eax
086be9f6 +0x142:  mov    %eax,(%esp)
086be9f9 +0x145:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086be9fe +0x14a:  jmp    086bea1b <+0x167>
086bea00 +0x14c:  mov    %edx,%ebx
086bea02 +0x14e:  mov    %eax,%esi
086bea04 +0x150:  lea    -0x14(%ebp),%eax
086bea07 +0x153:  mov    %eax,(%esp)
086bea0a +0x156:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bea0f +0x15b:  mov    %esi,%eax
086bea11 +0x15d:  mov    %ebx,%edx
086bea13 +0x15f:  mov    %eax,(%esp)
086bea16 +0x162:  call   08ae3750 <_Unwind_Resume>
086bea1b +0x167:  lea    -0x14(%ebp),%eax
086bea1e +0x16a:  mov    %eax,(%esp)
086bea21 +0x16d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bea26 +0x172:  add    $0x30,%esp
086bea29 +0x175:  pop    %ebx
086bea2a +0x176:  pop    %esi
086bea2b +0x177:  pop    %ebp
086bea2c +0x178:  ret
086bea2d +0x179:  nop
```

## 反编译 C

```c
// WarRoom::SetCharacterLive @ 0x86be8b4

/* WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int) */

void __thiscall
WarRoom::SetCharacterLive
          (WarRoom *this,int param_1,CUser *param_2,bool param_3,bool param_4,short param_5,
          int param_6)

{
  int iVar1;
  PacketGuard local_18 [12];
  
  this[param_1 + 0x184] = (WarRoom)param_3;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086be901 to 086be9fd has its CatchHandler @ 086bea00 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x5f);
  iVar1 = GetUserSlot(this,param_2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)param_4);
  if ((((param_6 == 0xff) || (param_6 < 0)) || (5 < param_6)) ||
     (*(int *)(this + (param_6 + 0x48) * 4 + 0xc) == 0)) {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
  }
  else if (this[0x12] == (WarRoom)0x0) {
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_18,*(int *)(*(int *)(this + 0x1d0) + 0x7c8));
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,0);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(int)param_5);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  SendToRoom(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
