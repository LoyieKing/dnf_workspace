# sendBoardZoneActionInfo

`_ZNK10BlueMarble23sendBoardZoneActionInfoEiij`

`BlueMarble::sendBoardZoneActionInfo(int, int, unsigned int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8802  _ZNK10BlueMarble23sendBoardZoneActionInfoEiij
#           BlueMarble::sendBoardZoneActionInfo(int, int, unsigned int) const
# range [0x080d8802, 0x080d88c1]
080d8802 +0x00:  push   %ebp
080d8803 +0x01:  mov    %esp,%ebp
080d8805 +0x03:  push   %esi
080d8806 +0x04:  push   %ebx
080d8807 +0x05:  sub    $0x20,%esp
080d880a +0x08:  lea    -0x14(%ebp),%eax
080d880d +0x0b:  mov    %eax,(%esp)
080d8810 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
080d8815 +0x13:  movl   $0x1b2,0x8(%esp)
080d881d +0x1b:  movl   $0x0,0x4(%esp)
080d8825 +0x23:  lea    -0x14(%ebp),%eax
080d8828 +0x26:  mov    %eax,(%esp)
080d882b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
080d8830 +0x2e:  mov    0x10(%ebp),%eax
080d8833 +0x31:  mov    %eax,0x4(%esp)
080d8837 +0x35:  lea    -0x14(%ebp),%eax
080d883a +0x38:  mov    %eax,(%esp)
080d883d +0x3b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
080d8842 +0x40:  mov    0x14(%ebp),%eax
080d8845 +0x43:  mov    %eax,0x4(%esp)
080d8849 +0x47:  lea    -0x14(%ebp),%eax
080d884c +0x4a:  mov    %eax,(%esp)
080d884f +0x4d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
080d8854 +0x52:  movl   $0x1,0x4(%esp)
080d885c +0x5a:  lea    -0x14(%ebp),%eax
080d885f +0x5d:  mov    %eax,(%esp)
080d8862 +0x60:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
080d8867 +0x65:  mov    0xc(%ebp),%eax
080d886a +0x68:  mov    0x8(%ebp),%edx
080d886d +0x6b:  add    $0x4,%edx
080d8870 +0x6e:  mov    %eax,0x4(%esp)
080d8874 +0x72:  mov    %edx,(%esp)
080d8877 +0x75:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d887c +0x7a:  mov    %eax,(%esp)
080d887f +0x7d:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d8884 +0x82:  lea    -0x14(%ebp),%edx
080d8887 +0x85:  mov    %edx,0x4(%esp)
080d888b +0x89:  mov    %eax,(%esp)
080d888e +0x8c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080d8893 +0x91:  jmp    080d88b0 <+0xae>
080d8895 +0x93:  mov    %edx,%ebx
080d8897 +0x95:  mov    %eax,%esi
080d8899 +0x97:  lea    -0x14(%ebp),%eax
080d889c +0x9a:  mov    %eax,(%esp)
080d889f +0x9d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d88a4 +0xa2:  mov    %esi,%eax
080d88a6 +0xa4:  mov    %ebx,%edx
080d88a8 +0xa6:  mov    %eax,(%esp)
080d88ab +0xa9:  call   08ae3750 <_Unwind_Resume>
080d88b0 +0xae:  lea    -0x14(%ebp),%eax
080d88b3 +0xb1:  mov    %eax,(%esp)
080d88b6 +0xb4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
080d88bb +0xb9:  add    $0x20,%esp
080d88be +0xbc:  pop    %ebx
080d88bf +0xbd:  pop    %esi
080d88c0 +0xbe:  pop    %ebp
080d88c1 +0xbf:  ret
```

## 反编译 C

```c
// BlueMarble::sendBoardZoneActionInfo @ 0x80d8802

/* BlueMarble::sendBoardZoneActionInfo(int, int, unsigned int) const */

void __thiscall
BlueMarble::sendBoardZoneActionInfo(BlueMarble *this,int param_1,int param_2,uint param_3)

{
  BlueMarbleUserInfo *this_00;
  CUser *this_01;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d882b to 080d8892 has its CatchHandler @ 080d8895 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  this_01 = (CUser *)BlueMarbleUserInfo::getUser(this_00);
  CUser::Send(this_01,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
