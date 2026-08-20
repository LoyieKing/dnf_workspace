# execute

`_ZN11game_master13CEnduranceCmd7executeEv`

`game_master::CEnduranceCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CEnduranceCmd` | `0x084aa858` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084aa858  _ZN11game_master13CEnduranceCmd7executeEv
#           game_master::CEnduranceCmd::execute()
# range [0x084aa858, 0x084aa9c7]
084aa858 +0x000:  push   %ebp
084aa859 +0x001:  mov    %esp,%ebp
084aa85b +0x003:  push   %esi
084aa85c +0x004:  push   %ebx
084aa85d +0x005:  sub    $0x30,%esp
084aa860 +0x008:  mov    0x8(%ebp),%eax
084aa863 +0x00b:  mov    %eax,(%esp)
084aa866 +0x00e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084aa86b +0x013:  mov    %eax,-0x10(%ebp)
084aa86e +0x016:  mov    -0x10(%ebp),%eax
084aa871 +0x019:  mov    %eax,(%esp)
084aa874 +0x01c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
084aa879 +0x021:  xor    $0x1,%eax
084aa87c +0x024:  test   %al,%al
084aa87e +0x026:  jne    084aa9b7 <+0x15f>
084aa884 +0x02c:  mov    0x8(%ebp),%eax
084aa887 +0x02f:  mov    0x8(%eax),%eax
084aa88a +0x032:  cmp    $0x9,%eax
084aa88d +0x035:  jle    084aa9ba <+0x162>
084aa893 +0x03b:  mov    0x8(%ebp),%eax
084aa896 +0x03e:  mov    0x8(%eax),%eax
084aa899 +0x041:  cmp    $0x15,%eax
084aa89c +0x044:  jg     084aa9bd <+0x165>
084aa8a2 +0x04a:  mov    0x8(%ebp),%eax
084aa8a5 +0x04d:  mov    0x8(%eax),%ebx
084aa8a8 +0x050:  mov    -0x10(%ebp),%eax
084aa8ab +0x053:  mov    %eax,(%esp)
084aa8ae +0x056:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084aa8b3 +0x05b:  mov    %ebx,0x8(%esp)
084aa8b7 +0x05f:  movl   $0x0,0x4(%esp)
084aa8bf +0x067:  mov    %eax,(%esp)
084aa8c2 +0x06a:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
084aa8c7 +0x06f:  mov    %eax,-0xc(%ebp)
084aa8ca +0x072:  cmpl   $0x0,-0xc(%ebp)
084aa8ce +0x076:  je     084aa9c1 <+0x169>
084aa8d4 +0x07c:  mov    -0xc(%ebp),%eax
084aa8d7 +0x07f:  mov    0x2(%eax),%eax
084aa8da +0x082:  test   %eax,%eax
084aa8dc +0x084:  je     084aa9c0 <+0x168>
084aa8e2 +0x08a:  mov    0x8(%ebp),%eax
084aa8e5 +0x08d:  movzwl 0xc(%eax),%edx
084aa8e9 +0x091:  mov    -0xc(%ebp),%eax
084aa8ec +0x094:  mov    %dx,0xb(%eax)
084aa8f0 +0x098:  lea    -0x1c(%ebp),%eax
084aa8f3 +0x09b:  mov    %eax,(%esp)
084aa8f6 +0x09e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084aa8fb +0x0a3:  movl   $0xe,0x8(%esp)
084aa903 +0x0ab:  movl   $0x0,0x4(%esp)
084aa90b +0x0b3:  lea    -0x1c(%ebp),%eax
084aa90e +0x0b6:  mov    %eax,(%esp)
084aa911 +0x0b9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084aa916 +0x0be:  movl   $0x3,0x4(%esp)
084aa91e +0x0c6:  lea    -0x1c(%ebp),%eax
084aa921 +0x0c9:  mov    %eax,(%esp)
084aa924 +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084aa929 +0x0d1:  movl   $0x1,0x4(%esp)
084aa931 +0x0d9:  lea    -0x1c(%ebp),%eax
084aa934 +0x0dc:  mov    %eax,(%esp)
084aa937 +0x0df:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084aa93c +0x0e4:  mov    0x8(%ebp),%eax
084aa93f +0x0e7:  mov    0x8(%eax),%ebx
084aa942 +0x0ea:  mov    -0x10(%ebp),%eax
084aa945 +0x0ed:  mov    %eax,(%esp)
084aa948 +0x0f0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084aa94d +0x0f5:  lea    -0x1c(%ebp),%edx
084aa950 +0x0f8:  mov    %edx,0xc(%esp)
084aa954 +0x0fc:  mov    %ebx,0x8(%esp)
084aa958 +0x100:  movl   $0x0,0x4(%esp)
084aa960 +0x108:  mov    %eax,(%esp)
084aa963 +0x10b:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
084aa968 +0x110:  movl   $0x1,0x4(%esp)
084aa970 +0x118:  lea    -0x1c(%ebp),%eax
084aa973 +0x11b:  mov    %eax,(%esp)
084aa976 +0x11e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084aa97b +0x123:  lea    -0x1c(%ebp),%eax
084aa97e +0x126:  mov    %eax,0x4(%esp)
084aa982 +0x12a:  mov    -0x10(%ebp),%eax
084aa985 +0x12d:  mov    %eax,(%esp)
084aa988 +0x130:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084aa98d +0x135:  jmp    084aa9aa <+0x152>
084aa98f +0x137:  mov    %edx,%ebx
084aa991 +0x139:  mov    %eax,%esi
084aa993 +0x13b:  lea    -0x1c(%ebp),%eax
084aa996 +0x13e:  mov    %eax,(%esp)
084aa999 +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa99e +0x146:  mov    %esi,%eax
084aa9a0 +0x148:  mov    %ebx,%edx
084aa9a2 +0x14a:  mov    %eax,(%esp)
084aa9a5 +0x14d:  call   08ae3750 <_Unwind_Resume>
084aa9aa +0x152:  lea    -0x1c(%ebp),%eax
084aa9ad +0x155:  mov    %eax,(%esp)
084aa9b0 +0x158:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084aa9b5 +0x15d:  jmp    084aa9c1 <+0x169>
084aa9b7 +0x15f:  nop
084aa9b8 +0x160:  jmp    084aa9c1 <+0x169>
084aa9ba +0x162:  nop
084aa9bb +0x163:  jmp    084aa9c1 <+0x169>
084aa9bd +0x165:  nop
084aa9be +0x166:  jmp    084aa9c1 <+0x169>
084aa9c0 +0x168:  nop
084aa9c1 +0x169:  add    $0x30,%esp
084aa9c4 +0x16c:  pop    %ebx
084aa9c5 +0x16d:  pop    %esi
084aa9c6 +0x16e:  pop    %ebp
084aa9c7 +0x16f:  ret
```

## 反编译 C

```c
// game_master::CEnduranceCmd::execute @ 0x84aa858

/* game_master::CEnduranceCmd::execute() */

void __thiscall game_master::CEnduranceCmd::execute(CEnduranceCmd *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  CInventory *pCVar4;
  PacketGuard local_20 [12];
  CUserCharacInfo *local_14;
  int local_10;
  
  local_14 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  cVar3 = CUser::isGMUser((CUser *)local_14);
  if (((cVar3 == '\x01') && (9 < *(int *)(this + 8))) && (*(int *)(this + 8) < 0x16)) {
    iVar1 = *(int *)(this + 8);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(local_14);
    local_10 = CInventory::GetInvenRef(pCVar4,0,iVar1);
    if ((local_10 != 0) && (*(int *)(local_10 + 2) != 0)) {
      *(undefined2 *)(local_10 + 0xb) = *(undefined2 *)(this + 0xc);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084aa911 to 084aa98c has its CatchHandler @ 084aa98f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,3);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      uVar2 = *(undefined4 *)(this + 8);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(local_14);
      CInventory::MakeItemPacket(pCVar4,0,uVar2,local_20);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)local_14,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
  }
  return;
}
```
