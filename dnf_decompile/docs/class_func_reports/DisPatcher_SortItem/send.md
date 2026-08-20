# send

`_ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase`

`DisPatcher_SortItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SortItem` | `0x081c9dba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9dba  _ZN19DisPatcher_SortItem4sendEP5CUserR9ParamBase
#           DisPatcher_SortItem::send(CUser*, ParamBase&)
# range [0x081c9dba, 0x081c9f61]
081c9dba +0x000:  push   %ebp
081c9dbb +0x001:  mov    %esp,%ebp
081c9dbd +0x003:  push   %esi
081c9dbe +0x004:  push   %ebx
081c9dbf +0x005:  sub    $0x20,%esp
081c9dc2 +0x008:  mov    0x10(%ebp),%eax
081c9dc5 +0x00b:  mov    %eax,-0xc(%ebp)
081c9dc8 +0x00e:  lea    -0x18(%ebp),%eax
081c9dcb +0x011:  mov    %eax,(%esp)
081c9dce +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c9dd3 +0x019:  movl   $0x14,0x8(%esp)
081c9ddb +0x021:  movl   $0x1,0x4(%esp)
081c9de3 +0x029:  lea    -0x18(%ebp),%eax
081c9de6 +0x02c:  mov    %eax,(%esp)
081c9de9 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c9dee +0x034:  mov    -0xc(%ebp),%eax
081c9df1 +0x037:  mov    0x8(%eax),%eax
081c9df4 +0x03a:  test   %eax,%eax
081c9df6 +0x03c:  jne    081c9e26 <+0x6c>
081c9df8 +0x03e:  movl   $0x1,0x4(%esp)
081c9e00 +0x046:  lea    -0x18(%ebp),%eax
081c9e03 +0x049:  mov    %eax,(%esp)
081c9e06 +0x04c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9e0b +0x051:  mov    -0xc(%ebp),%eax
081c9e0e +0x054:  movzbl 0x4(%eax),%eax
081c9e12 +0x058:  movsbl %al,%eax
081c9e15 +0x05b:  mov    %eax,0x4(%esp)
081c9e19 +0x05f:  lea    -0x18(%ebp),%eax
081c9e1c +0x062:  mov    %eax,(%esp)
081c9e1f +0x065:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9e24 +0x06a:  jmp    081c9e6a <+0xb0>
081c9e26 +0x06c:  movl   $0x0,0x4(%esp)
081c9e2e +0x074:  lea    -0x18(%ebp),%eax
081c9e31 +0x077:  mov    %eax,(%esp)
081c9e34 +0x07a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9e39 +0x07f:  mov    -0xc(%ebp),%eax
081c9e3c +0x082:  mov    0x8(%eax),%eax
081c9e3f +0x085:  movsbl %al,%eax
081c9e42 +0x088:  mov    %eax,0x4(%esp)
081c9e46 +0x08c:  lea    -0x18(%ebp),%eax
081c9e49 +0x08f:  mov    %eax,(%esp)
081c9e4c +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9e51 +0x097:  mov    -0xc(%ebp),%eax
081c9e54 +0x09a:  movzbl 0x4(%eax),%eax
081c9e58 +0x09e:  movsbl %al,%eax
081c9e5b +0x0a1:  mov    %eax,0x4(%esp)
081c9e5f +0x0a5:  lea    -0x18(%ebp),%eax
081c9e62 +0x0a8:  mov    %eax,(%esp)
081c9e65 +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c9e6a +0x0b0:  movl   $0x1,0x4(%esp)
081c9e72 +0x0b8:  lea    -0x18(%ebp),%eax
081c9e75 +0x0bb:  mov    %eax,(%esp)
081c9e78 +0x0be:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c9e7d +0x0c3:  lea    -0x18(%ebp),%eax
081c9e80 +0x0c6:  mov    %eax,0x4(%esp)
081c9e84 +0x0ca:  mov    0xc(%ebp),%eax
081c9e87 +0x0cd:  mov    %eax,(%esp)
081c9e8a +0x0d0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c9e8f +0x0d5:  mov    -0xc(%ebp),%eax
081c9e92 +0x0d8:  mov    0x8(%eax),%eax
081c9e95 +0x0db:  test   %eax,%eax
081c9e97 +0x0dd:  jne    081c9eb2 <+0xf8>
081c9e99 +0x0df:  mov    -0xc(%ebp),%eax
081c9e9c +0x0e2:  movzbl 0x4(%eax),%eax
081c9ea0 +0x0e6:  movsbl %al,%eax
081c9ea3 +0x0e9:  mov    %eax,0x4(%esp)
081c9ea7 +0x0ed:  mov    0xc(%ebp),%eax
081c9eaa +0x0f0:  mov    %eax,(%esp)
081c9ead +0x0f3:  call   0865db6c <_ZN5CUser14send_itemspaceEi>  ; CUser::send_itemspace(int)
081c9eb2 +0x0f8:  mov    -0xc(%ebp),%eax
081c9eb5 +0x0fb:  mov    0x8(%eax),%eax
081c9eb8 +0x0fe:  test   %eax,%eax
081c9eba +0x100:  jne    081c9f34 <+0x17a>
081c9ebc +0x102:  mov    -0xc(%ebp),%eax
081c9ebf +0x105:  movzbl 0x4(%eax),%eax
081c9ec3 +0x109:  movsbl %al,%eax
081c9ec6 +0x10c:  cmp    $0x1,%eax
081c9ec9 +0x10f:  je     081c9ef7 <+0x13d>
081c9ecb +0x111:  cmp    $0x1,%eax
081c9ece +0x114:  jg     081c9ed6 <+0x11c>
081c9ed0 +0x116:  test   %eax,%eax
081c9ed2 +0x118:  je     081c9ee2 <+0x128>
081c9ed4 +0x11a:  jmp    081c9f34 <+0x17a>
081c9ed6 +0x11c:  cmp    $0x2,%eax
081c9ed9 +0x11f:  je     081c9f0c <+0x152>
081c9edb +0x121:  cmp    $0x7,%eax
081c9ede +0x124:  je     081c9f21 <+0x167>
081c9ee0 +0x126:  jmp    081c9f34 <+0x17a>
081c9ee2 +0x128:  mov    0xc(%ebp),%eax
081c9ee5 +0x12b:  mov    %eax,(%esp)
081c9ee8 +0x12e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c9eed +0x133:  mov    %eax,(%esp)
081c9ef0 +0x136:  call   084faf8e <_ZNK10CInventory21SendItemLockListInvenEv>  ; CInventory::SendItemLockListInven() const
081c9ef5 +0x13b:  jmp    081c9f34 <+0x17a>
081c9ef7 +0x13d:  mov    0xc(%ebp),%eax
081c9efa +0x140:  mov    %eax,(%esp)
081c9efd +0x143:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c9f02 +0x148:  mov    %eax,(%esp)
081c9f05 +0x14b:  call   084fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>  ; CInventory::SendItemLockListAvatar() const
081c9f0a +0x150:  jmp    081c9f34 <+0x17a>
081c9f0c +0x152:  mov    0xc(%ebp),%eax
081c9f0f +0x155:  mov    %eax,(%esp)
081c9f12 +0x158:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
081c9f17 +0x15d:  mov    %eax,(%esp)
081c9f1a +0x160:  call   0850bd50 <_ZNK6CCargo16SendItemLockListEv>  ; CCargo::SendItemLockList() const
081c9f1f +0x165:  jmp    081c9f34 <+0x17a>
081c9f21 +0x167:  mov    0xc(%ebp),%eax
081c9f24 +0x16a:  mov    %eax,(%esp)
081c9f27 +0x16d:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081c9f2c +0x172:  mov    %eax,(%esp)
081c9f2f +0x175:  call   084fafee <_ZNK10CInventory24SendItemLockListCreatureEv>  ; CInventory::SendItemLockListCreature() const
081c9f34 +0x17a:  lea    -0x18(%ebp),%eax
081c9f37 +0x17d:  mov    %eax,(%esp)
081c9f3a +0x180:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9f3f +0x185:  add    $0x20,%esp
081c9f42 +0x188:  pop    %ebx
081c9f43 +0x189:  pop    %esi
081c9f44 +0x18a:  pop    %ebp
081c9f45 +0x18b:  ret
081c9f46 +0x18c:  mov    %edx,%ebx
081c9f48 +0x18e:  mov    %eax,%esi
081c9f4a +0x190:  lea    -0x18(%ebp),%eax
081c9f4d +0x193:  mov    %eax,(%esp)
081c9f50 +0x196:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9f55 +0x19b:  mov    %esi,%eax
081c9f57 +0x19d:  mov    %ebx,%edx
081c9f59 +0x19f:  mov    %eax,(%esp)
081c9f5c +0x1a2:  call   08ae3750 <_Unwind_Resume>
081c9f61 +0x1a7:  nop
```

## 反编译 C

```c
// DisPatcher_SortItem::send @ 0x81c9dba

/* DisPatcher_SortItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_SortItem::send(DisPatcher_SortItem *this,CUser *param_1,ParamBase *param_2)

{
  ParamBase PVar1;
  CInventory *pCVar2;
  CCargo *this_00;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c9de9 to 081c9f33 has its CatchHandler @ 081c9f46 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14);
  if (*(int *)(local_10 + 8) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_1c,(int)(char)*(undefined4 *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  if (*(int *)(local_10 + 8) == 0) {
    CUser::send_itemspace(param_1,(int)(char)local_10[4]);
  }
  if (*(int *)(local_10 + 8) == 0) {
    PVar1 = local_10[4];
    if (PVar1 == (ParamBase)0x1) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::SendItemLockListAvatar(pCVar2);
    }
    else if ((char)PVar1 < '\x02') {
      if (PVar1 == (ParamBase)0x0) {
        pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::SendItemLockListInven(pCVar2);
      }
    }
    else if (PVar1 == (ParamBase)0x2) {
      this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      CCargo::SendItemLockList(this_00);
    }
    else if (PVar1 == (ParamBase)0x7) {
      pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::SendItemLockListCreature(pCVar2);
    }
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
