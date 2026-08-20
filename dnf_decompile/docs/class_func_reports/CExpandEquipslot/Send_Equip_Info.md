# Send_Equip_Info

`_ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser`

`CExpandEquipslot::Send_Equip_Info(CUser*)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849983e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849983e  _ZN16CExpandEquipslot15Send_Equip_InfoEP5CUser
#           CExpandEquipslot::Send_Equip_Info(CUser*)
# range [0x0849983e, 0x08499985]
0849983e +0x000:  push   %ebp
0849983f +0x001:  mov    %esp,%ebp
08499841 +0x003:  push   %esi
08499842 +0x004:  push   %ebx
08499843 +0x005:  sub    $0x30,%esp
08499846 +0x008:  cmpl   $0x0,0xc(%ebp)
0849984a +0x00c:  jne    08499882 <+0x44>
0849984c +0x00e:  movl   $"Fail Send_Equip_Info : pUser is NULL",0x10(%esp)
08499854 +0x016:  movl   $0x9a,0xc(%esp)
0849985c +0x01e:  movl   $&_ZZN16CExpandEquipslot15Send_Equip_InfoEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08499864 +0x026:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
0849986c +0x02e:  movl   $0x1,(%esp)
08499873 +0x035:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08499878 +0x03a:  mov    $0x1,%ebx
0849987d +0x03f:  jmp    0849997d <+0x13f>
08499882 +0x044:  mov    0xc(%ebp),%eax
08499885 +0x047:  mov    %eax,(%esp)
08499888 +0x04a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0849988d +0x04f:  cmp    $0x2,%eax
08499890 +0x052:  setle  %al
08499893 +0x055:  test   %al,%al
08499895 +0x057:  je     084998cd <+0x8f>
08499897 +0x059:  movl   $"Fail Send_Equip_Info : pUser is not valid state",0x10(%esp)
0849989f +0x061:  movl   $0xa0,0xc(%esp)
084998a7 +0x069:  movl   $&_ZZN16CExpandEquipslot15Send_Equip_InfoEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
084998af +0x071:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
084998b7 +0x079:  movl   $0x1,(%esp)
084998be +0x080:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084998c3 +0x085:  mov    $0x13,%ebx
084998c8 +0x08a:  jmp    0849997d <+0x13f>
084998cd +0x08f:  lea    -0x14(%ebp),%eax
084998d0 +0x092:  mov    %eax,(%esp)
084998d3 +0x095:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084998d8 +0x09a:  lea    -0x14(%ebp),%eax
084998db +0x09d:  mov    %eax,(%esp)
084998de +0x0a0:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084998e3 +0x0a5:  movl   $0x2,0x8(%esp)
084998eb +0x0ad:  movl   $0x0,0x4(%esp)
084998f3 +0x0b5:  lea    -0x14(%ebp),%eax
084998f6 +0x0b8:  mov    %eax,(%esp)
084998f9 +0x0bb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084998fe +0x0c0:  movl   $0x1,0x4(%esp)
08499906 +0x0c8:  lea    -0x14(%ebp),%eax
08499909 +0x0cb:  mov    %eax,(%esp)
0849990c +0x0ce:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08499911 +0x0d3:  lea    -0x14(%ebp),%eax
08499914 +0x0d6:  movl   $0x1,0x8(%esp)
0849991c +0x0de:  mov    %eax,0x4(%esp)
08499920 +0x0e2:  mov    0xc(%ebp),%eax
08499923 +0x0e5:  mov    %eax,(%esp)
08499926 +0x0e8:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0849992b +0x0ed:  movl   $0x1,0x4(%esp)
08499933 +0x0f5:  lea    -0x14(%ebp),%eax
08499936 +0x0f8:  mov    %eax,(%esp)
08499939 +0x0fb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849993e +0x100:  lea    -0x14(%ebp),%eax
08499941 +0x103:  mov    %eax,0x4(%esp)
08499945 +0x107:  mov    0xc(%ebp),%eax
08499948 +0x10a:  mov    %eax,(%esp)
0849994b +0x10d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08499950 +0x112:  mov    $0x0,%ebx
08499955 +0x117:  lea    -0x14(%ebp),%eax
08499958 +0x11a:  mov    %eax,(%esp)
0849995b +0x11d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08499960 +0x122:  jmp    0849997d <+0x13f>
08499962 +0x124:  mov    %edx,%ebx
08499964 +0x126:  mov    %eax,%esi
08499966 +0x128:  lea    -0x14(%ebp),%eax
08499969 +0x12b:  mov    %eax,(%esp)
0849996c +0x12e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08499971 +0x133:  mov    %esi,%eax
08499973 +0x135:  mov    %ebx,%edx
08499975 +0x137:  mov    %eax,(%esp)
08499978 +0x13a:  call   08ae3750 <_Unwind_Resume>
0849997d +0x13f:  mov    %ebx,%eax
0849997f +0x141:  add    $0x30,%esp
08499982 +0x144:  pop    %ebx
08499983 +0x145:  pop    %esi
08499984 +0x146:  pop    %ebp
08499985 +0x147:  ret
```

## 反编译 C

```c
// CExpandEquipslot::Send_Equip_Info @ 0x849983e

/* CExpandEquipslot::Send_Equip_Info(CUser*) */

undefined4 __thiscall CExpandEquipslot::Send_Equip_Info(CExpandEquipslot *this,CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  PacketGuard local_18 [12];
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Equip_Info(CUser*)",0x9a,
               "Fail Send_Equip_Info : pUser is NULL");
    uVar2 = 1;
  }
  else {
    iVar1 = CUser::get_state(param_1);
    if (iVar1 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Equip_Info(CUser*)",0xa0,
                 "Fail Send_Equip_Info : pUser is not valid state");
      uVar2 = 0x13;
    }
    else {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084998de to 0849994f has its CatchHandler @ 08499962 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
      CUser::make_basic_info(param_1,(char *)local_18,'\x01');
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      CUser::Send(param_1,local_18);
      uVar2 = 0;
      PacketGuard::~PacketGuard(local_18);
    }
  }
  return uVar2;
}
```
