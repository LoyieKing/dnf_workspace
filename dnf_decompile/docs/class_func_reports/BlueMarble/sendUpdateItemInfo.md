# sendUpdateItemInfo

`_ZNK10BlueMarble18sendUpdateItemInfoEii`

`BlueMarble::sendUpdateItemInfo(int, int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8956` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8956  _ZNK10BlueMarble18sendUpdateItemInfoEii
#           BlueMarble::sendUpdateItemInfo(int, int) const
# range [0x080d8956, 0x080d8a5b]
080d8956 +0x000:  push   %ebp
080d8957 +0x001:  mov    %esp,%ebp
080d8959 +0x003:  push   %esi
080d895a +0x004:  push   %ebx
080d895b +0x005:  sub    $0x20,%esp
080d895e +0x008:  lea    -0x14(%ebp),%eax
080d8961 +0x00b:  mov    %eax,(%esp)
080d8964 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d8969 +0x013:  movl   $0xe,0x8(%esp)
080d8971 +0x01b:  movl   $0x0,0x4(%esp)
080d8979 +0x023:  lea    -0x14(%ebp),%eax
080d897c +0x026:  mov    %eax,(%esp)
080d897f +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d8984 +0x02e:  movl   $0x0,0x4(%esp)
080d898c +0x036:  lea    -0x14(%ebp),%eax
080d898f +0x039:  mov    %eax,(%esp)
080d8992 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
080d8997 +0x041:  movl   $0x1,0x4(%esp)
080d899f +0x049:  lea    -0x14(%ebp),%eax
080d89a2 +0x04c:  mov    %eax,(%esp)
080d89a5 +0x04f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080d89aa +0x054:  mov    0xc(%ebp),%eax
080d89ad +0x057:  mov    0x8(%ebp),%edx
080d89b0 +0x05a:  add    $0x4,%edx
080d89b3 +0x05d:  mov    %eax,0x4(%esp)
080d89b7 +0x061:  mov    %edx,(%esp)
080d89ba +0x064:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d89bf +0x069:  mov    %eax,(%esp)
080d89c2 +0x06c:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d89c7 +0x071:  mov    %eax,(%esp)
080d89ca +0x074:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
080d89cf +0x079:  lea    -0x14(%ebp),%edx
080d89d2 +0x07c:  mov    %edx,0xc(%esp)
080d89d6 +0x080:  mov    0x10(%ebp),%edx
080d89d9 +0x083:  mov    %edx,0x8(%esp)
080d89dd +0x087:  movl   $0x1,0x4(%esp)
080d89e5 +0x08f:  mov    %eax,(%esp)
080d89e8 +0x092:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
080d89ed +0x097:  movl   $0x1,0x4(%esp)
080d89f5 +0x09f:  lea    -0x14(%ebp),%eax
080d89f8 +0x0a2:  mov    %eax,(%esp)
080d89fb +0x0a5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d8a00 +0x0aa:  mov    0xc(%ebp),%eax
080d8a03 +0x0ad:  mov    0x8(%ebp),%edx
080d8a06 +0x0b0:  add    $0x4,%edx
080d8a09 +0x0b3:  mov    %eax,0x4(%esp)
080d8a0d +0x0b7:  mov    %edx,(%esp)
080d8a10 +0x0ba:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d8a15 +0x0bf:  mov    %eax,(%esp)
080d8a18 +0x0c2:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8a1d +0x0c7:  lea    -0x14(%ebp),%edx
080d8a20 +0x0ca:  mov    %edx,0x4(%esp)
080d8a24 +0x0ce:  mov    %eax,(%esp)
080d8a27 +0x0d1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080d8a2c +0x0d6:  jmp    080d8a49 <+0xf3>
080d8a2e +0x0d8:  mov    %edx,%ebx
080d8a30 +0x0da:  mov    %eax,%esi
080d8a32 +0x0dc:  lea    -0x14(%ebp),%eax
080d8a35 +0x0df:  mov    %eax,(%esp)
080d8a38 +0x0e2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d8a3d +0x0e7:  mov    %esi,%eax
080d8a3f +0x0e9:  mov    %ebx,%edx
080d8a41 +0x0eb:  mov    %eax,(%esp)
080d8a44 +0x0ee:  call   08ae3750 <_Unwind_Resume>
080d8a49 +0x0f3:  lea    -0x14(%ebp),%eax
080d8a4c +0x0f6:  mov    %eax,(%esp)
080d8a4f +0x0f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d8a54 +0x0fe:  add    $0x20,%esp
080d8a57 +0x101:  pop    %ebx
080d8a58 +0x102:  pop    %esi
080d8a59 +0x103:  pop    %ebp
080d8a5a +0x104:  ret
080d8a5b +0x105:  nop
```

## 反编译 C

```c
// BlueMarble::sendUpdateItemInfo @ 0x80d8956

/* BlueMarble::sendUpdateItemInfo(int, int) const */

void __thiscall BlueMarble::sendUpdateItemInfo(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *pBVar1;
  CUserCharacInfo *this_00;
  CInventory *pCVar2;
  CUser *this_01;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d897f to 080d8a2b has its CatchHandler @ 080d8a2e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar1);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
  CInventory::MakeItemPacket(pCVar2,1,param_2,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_01 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
  CUser::Send(this_01,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
