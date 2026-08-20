# dispatch_sig

`_ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_IncreStatus` | `0x081ede34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ede34  _ZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)
# range [0x081ede34, 0x081ee00f]
081ede34 +0x000:  push   %ebp
081ede35 +0x001:  mov    %esp,%ebp
081ede37 +0x003:  push   %esi
081ede38 +0x004:  push   %ebx
081ede39 +0x005:  sub    $0x50,%esp
081ede3c +0x008:  mov    0xc(%ebp),%eax
081ede3f +0x00b:  mov    %eax,(%esp)
081ede42 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ede47 +0x013:  cmp    $0x2,%eax
081ede4a +0x016:  setle  %al
081ede4d +0x019:  test   %al,%al
081ede4f +0x01b:  je     081ede5b <+0x27>
081ede51 +0x01d:  mov    $0x0,%ebx
081ede56 +0x022:  jmp    081ee007 <+0x1d3>
081ede5b +0x027:  lea    -0x2f(%ebp),%eax
081ede5e +0x02a:  add    $0xd,%eax
081ede61 +0x02d:  mov    %eax,0x4(%esp)
081ede65 +0x031:  mov    0x10(%ebp),%eax
081ede68 +0x034:  mov    %eax,(%esp)
081ede6b +0x037:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081ede70 +0x03c:  xor    $0x1,%eax
081ede73 +0x03f:  test   %al,%al
081ede75 +0x041:  je     081edea2 <+0x6e>
081ede77 +0x043:  movl   $0x0,0xc(%esp)
081ede7f +0x04b:  movl   $0x0,0x8(%esp)
081ede87 +0x053:  movl   $&_ZZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081ede8f +0x05b:  movl   $0x70fc,(%esp)
081ede96 +0x062:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ede9b +0x067:  mov    %eax,%ebx
081ede9d +0x069:  jmp    081ee007 <+0x1d3>
081edea2 +0x06e:  movzwl -0x22(%ebp),%eax
081edea6 +0x072:  movswl %ax,%edx
081edea9 +0x075:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081edeae +0x07a:  mov    %edx,0xc(%esp)
081edeb2 +0x07e:  movl   $0x0,0x8(%esp)
081edeba +0x086:  mov    0xc(%ebp),%edx
081edebd +0x089:  mov    %edx,0x4(%esp)
081edec1 +0x08d:  mov    %eax,(%esp)
081edec4 +0x090:  call   082884d6 <_ZN21CSecu_ProtectionField10GetItemPtrEP5CUsercs>  ; CSecu_ProtectionField::GetItemPtr(CUser*, char, short)
081edec9 +0x095:  mov    %eax,-0x10(%ebp)
081edecc +0x098:  cmpl   $0x0,-0x10(%ebp)
081eded0 +0x09c:  jne    081edefd <+0xc9>
081eded2 +0x09e:  movl   $0x0,0xc(%esp)
081ededa +0x0a6:  movl   $0x0,0x8(%esp)
081edee2 +0x0ae:  movl   $&_ZZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081edeea +0x0b6:  movl   $0x7101,(%esp)
081edef1 +0x0bd:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081edef6 +0x0c2:  mov    %eax,%ebx
081edef8 +0x0c4:  jmp    081ee007 <+0x1d3>
081edefd +0x0c9:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081edf02 +0x0ce:  mov    -0x10(%ebp),%edx
081edf05 +0x0d1:  mov    %edx,0xc(%esp)
081edf09 +0x0d5:  movl   $0x2a,0x8(%esp)
081edf11 +0x0dd:  mov    0xc(%ebp),%edx
081edf14 +0x0e0:  mov    %edx,0x4(%esp)
081edf18 +0x0e4:  mov    %eax,(%esp)
081edf1b +0x0e7:  call   08288786 <_ZN21CSecu_ProtectionField9CheckItemEP5CUser18SECURITY_PROTCTIONPK5CItem>  ; CSecu_ProtectionField::CheckItem(CUser*, SECURITY_PROTCTION, CItem const*)
081edf20 +0x0ec:  mov    %eax,-0xc(%ebp)
081edf23 +0x0ef:  cmpl   $0x0,-0xc(%ebp)
081edf27 +0x0f3:  je     081edf88 <+0x154>
081edf29 +0x0f5:  lea    -0x3c(%ebp),%eax
081edf2c +0x0f8:  mov    %eax,(%esp)
081edf2f +0x0fb:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081edf34 +0x100:  mov    -0xc(%ebp),%eax
081edf37 +0x103:  movzbl %al,%eax
081edf3a +0x106:  lea    -0x3c(%ebp),%edx
081edf3d +0x109:  mov    %edx,0xc(%esp)
081edf41 +0x10d:  mov    %eax,0x8(%esp)
081edf45 +0x111:  movl   $0x20,0x4(%esp)
081edf4d +0x119:  mov    0xc(%ebp),%eax
081edf50 +0x11c:  mov    %eax,(%esp)
081edf53 +0x11f:  call   0867bfae <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKEThR11PacketGuard>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char, PacketGuard&)
081edf58 +0x124:  mov    $0x0,%ebx
081edf5d +0x129:  lea    -0x3c(%ebp),%eax
081edf60 +0x12c:  mov    %eax,(%esp)
081edf63 +0x12f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081edf68 +0x134:  jmp    081ee007 <+0x1d3>
081edf6d +0x139:  mov    %edx,%ebx
081edf6f +0x13b:  mov    %eax,%esi
081edf71 +0x13d:  lea    -0x3c(%ebp),%eax
081edf74 +0x140:  mov    %eax,(%esp)
081edf77 +0x143:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081edf7c +0x148:  mov    %esi,%eax
081edf7e +0x14a:  mov    %ebx,%edx
081edf80 +0x14c:  mov    %eax,(%esp)
081edf83 +0x14f:  call   08ae3750 <_Unwind_Resume>
081edf88 +0x154:  movzwl -0x22(%ebp),%eax
081edf8c +0x158:  cmp    $0x98,%ax
081edf90 +0x15c:  jle    081edfee <+0x1ba>
081edf92 +0x15e:  movzwl -0x22(%ebp),%eax
081edf96 +0x162:  cwtl
081edf97 +0x163:  mov    %eax,0x4(%esp)
081edf9b +0x167:  mov    0xc(%ebp),%eax
081edf9e +0x16a:  mov    %eax,(%esp)
081edfa1 +0x16d:  call   08668d1a <_ZN5CUser12UseQuestItemEi>  ; CUser::UseQuestItem(int)
081edfa6 +0x172:  movzwl -0x22(%ebp),%eax
081edfaa +0x176:  movswl %ax,%ebx
081edfad +0x179:  movl   $0x5,0xc(%esp)
081edfb5 +0x181:  movl   $0x710f,0x8(%esp)
081edfbd +0x189:  movl   $&_ZZN22DisPatcher_IncreStatus12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
081edfc5 +0x191:  lea    -0x20(%ebp),%eax
081edfc8 +0x194:  mov    %eax,(%esp)
081edfcb +0x197:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081edfd0 +0x19c:  mov    %ebx,0x8(%esp)
081edfd4 +0x1a0:  movl   $"__ USE QUEST ITEM __ %d",0x4(%esp)
081edfdc +0x1a8:  lea    -0x20(%ebp),%eax
081edfdf +0x1ab:  mov    %eax,(%esp)
081edfe2 +0x1ae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081edfe7 +0x1b3:  mov    $0x0,%ebx
081edfec +0x1b8:  jmp    081ee007 <+0x1d3>
081edfee +0x1ba:  movzwl -0x22(%ebp),%eax
081edff2 +0x1be:  cwtl
081edff3 +0x1bf:  mov    %eax,0x4(%esp)
081edff7 +0x1c3:  mov    0xc(%ebp),%eax
081edffa +0x1c6:  mov    %eax,(%esp)
081edffd +0x1c9:  call   086657fc <_ZN5CUser15increase_statusEs>  ; CUser::increase_status(short)
081ee002 +0x1ce:  mov    $0x0,%ebx
081ee007 +0x1d3:  mov    %ebx,%eax
081ee009 +0x1d5:  add    $0x50,%esp
081ee00c +0x1d8:  pop    %ebx
081ee00d +0x1d9:  pop    %esi
081ee00e +0x1da:  pop    %ebp
081ee00f +0x1db:  ret
```

## 反编译 C

```c
// DisPatcher_IncreStatus::dispatch_sig @ 0x81ede34

/* DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_IncreStatus::dispatch_sig(DisPatcher_IncreStatus *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_40 [26];
  short local_26;
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = PacketBuf::get_short(param_2,&local_26);
    if (cVar1 == '\x01') {
      local_14 = CSecu_ProtectionField::GetItemPtr
                           (GlobalData::s_pSecuProtectionField,param_1,'\0',local_26);
      if (local_14 == 0) {
        uVar3 = LineFunc(0x7101,
                         "virtual int DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
      else {
        local_10 = CSecu_ProtectionField::CheckItem
                             (GlobalData::s_pSecuProtectionField,param_1,0x2a,local_14);
        if (local_10 == 0) {
          if (local_26 < 0x99) {
            CUser::increase_status(param_1,local_26);
            uVar3 = 0;
          }
          else {
            CUser::UseQuestItem((int)param_1);
            cMyTrace::cMyTrace(local_24,
                               "virtual int DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)"
                               ,0x710f,5);
            cMyTrace::operator()(local_24,"__ USE QUEST ITEM __ %d",(int)local_26);
            uVar3 = 0;
          }
        }
        else {
          PacketGuard::PacketGuard(local_40);
                    /* try { // try from 081edf53 to 081edf57 has its CatchHandler @ 081edf6d */
          CUser::SendCmdErrorPacket(param_1,0x20,local_10 & 0xff,local_40);
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_40);
        }
      }
    }
    else {
      uVar3 = LineFunc(0x70fc,"virtual int DisPatcher_IncreStatus::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar3;
}
```
