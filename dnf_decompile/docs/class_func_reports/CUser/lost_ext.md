# lost_ext

`_ZN5CUser8lost_extEiRib`

`CUser::lost_ext(int, int&, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866ad92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866ad92  _ZN5CUser8lost_extEiRib
#           CUser::lost_ext(int, int&, bool)
# range [0x0866ad92, 0x0866af1b]
0866ad92 +0x000:  push   %ebp
0866ad93 +0x001:  mov    %esp,%ebp
0866ad95 +0x003:  push   %ebx
0866ad96 +0x004:  sub    $0x44,%esp
0866ad99 +0x007:  mov    0x14(%ebp),%eax
0866ad9c +0x00a:  mov    %al,-0x2c(%ebp)
0866ad9f +0x00d:  movb   $0x0,-0x19(%ebp)
0866ada3 +0x011:  mov    0x8(%ebp),%eax
0866ada6 +0x014:  mov    %eax,(%esp)
0866ada9 +0x017:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866adae +0x01c:  mov    %eax,%ebx
0866adb0 +0x01e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866adb5 +0x023:  mov    %ebx,0x4(%esp)
0866adb9 +0x027:  mov    %eax,(%esp)
0866adbc +0x02a:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0866adc1 +0x02f:  mov    %eax,-0x18(%ebp)
0866adc4 +0x032:  mov    0x8(%ebp),%eax
0866adc7 +0x035:  mov    %eax,(%esp)
0866adca +0x038:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866adcf +0x03d:  lea    0x1(%eax),%ebx
0866add2 +0x040:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866add7 +0x045:  mov    %ebx,0x4(%esp)
0866addb +0x049:  mov    %eax,(%esp)
0866adde +0x04c:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0866ade3 +0x051:  mov    %eax,-0x14(%ebp)
0866ade6 +0x054:  mov    -0x18(%ebp),%eax
0866ade9 +0x057:  mov    -0x14(%ebp),%edx
0866adec +0x05a:  mov    %edx,%ecx
0866adee +0x05c:  sub    %eax,%ecx
0866adf0 +0x05e:  mov    %ecx,%eax
0866adf2 +0x060:  mov    %eax,%ecx
0866adf4 +0x062:  imul   0xc(%ebp),%ecx
0866adf8 +0x066:  mov    $0x51eb851f,%edx
0866adfd +0x06b:  mov    %ecx,%eax
0866adff +0x06d:  imul   %edx
0866ae01 +0x06f:  sar    $0x5,%edx
0866ae04 +0x072:  mov    %ecx,%eax
0866ae06 +0x074:  sar    $0x1f,%eax
0866ae09 +0x077:  mov    %edx,%ecx
0866ae0b +0x079:  sub    %eax,%ecx
0866ae0d +0x07b:  mov    %ecx,%eax
0866ae0f +0x07d:  mov    %eax,-0x10(%ebp)
0866ae12 +0x080:  movzbl -0x2c(%ebp),%eax
0866ae16 +0x084:  xor    $0x1,%eax
0866ae19 +0x087:  test   %al,%al
0866ae1b +0x089:  je     0866ae7d <+0xeb>
0866ae1d +0x08b:  mov    0x8(%ebp),%eax
0866ae20 +0x08e:  mov    %eax,(%esp)
0866ae23 +0x091:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
0866ae28 +0x096:  sub    -0x10(%ebp),%eax
0866ae2b +0x099:  cmp    -0x18(%ebp),%eax
0866ae2e +0x09c:  setle  %al
0866ae31 +0x09f:  test   %al,%al
0866ae33 +0x0a1:  je     0866ae61 <+0xcf>
0866ae35 +0x0a3:  mov    0x8(%ebp),%eax
0866ae38 +0x0a6:  mov    %eax,(%esp)
0866ae3b +0x0a9:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
0866ae40 +0x0ae:  mov    %eax,%edx
0866ae42 +0x0b0:  sub    -0x18(%ebp),%edx
0866ae45 +0x0b3:  mov    0x10(%ebp),%eax
0866ae48 +0x0b6:  mov    %edx,(%eax)
0866ae4a +0x0b8:  mov    0x8(%ebp),%eax
0866ae4d +0x0bb:  mov    -0x18(%ebp),%edx
0866ae50 +0x0be:  mov    %edx,0x4(%esp)
0866ae54 +0x0c2:  mov    %eax,(%esp)
0866ae57 +0x0c5:  call   0819a87c <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x562>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x562
0866ae5c +0x0ca:  jmp    0866aeef <+0x15d>
0866ae61 +0x0cf:  mov    0x10(%ebp),%eax
0866ae64 +0x0d2:  mov    -0x10(%ebp),%edx
0866ae67 +0x0d5:  mov    %edx,(%eax)
0866ae69 +0x0d7:  mov    0x8(%ebp),%eax
0866ae6c +0x0da:  mov    -0x10(%ebp),%edx
0866ae6f +0x0dd:  mov    %edx,0x4(%esp)
0866ae73 +0x0e1:  mov    %eax,(%esp)
0866ae76 +0x0e4:  call   086967f0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3045>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3045
0866ae7b +0x0e9:  jmp    0866aeef <+0x15d>
0866ae7d +0x0eb:  mov    0x10(%ebp),%eax
0866ae80 +0x0ee:  mov    -0x10(%ebp),%edx
0866ae83 +0x0f1:  mov    %edx,(%eax)
0866ae85 +0x0f3:  mov    0x8(%ebp),%eax
0866ae88 +0x0f6:  mov    -0x10(%ebp),%edx
0866ae8b +0x0f9:  mov    %edx,0x4(%esp)
0866ae8f +0x0fd:  mov    %eax,(%esp)
0866ae92 +0x100:  call   086967f0 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3045>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3045
0866ae97 +0x105:  mov    0x8(%ebp),%eax
0866ae9a +0x108:  mov    %eax,(%esp)
0866ae9d +0x10b:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0866aea2 +0x110:  mov    %eax,%ebx
0866aea4 +0x112:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866aea9 +0x117:  mov    %ebx,0x4(%esp)
0866aead +0x11b:  mov    %eax,(%esp)
0866aeb0 +0x11e:  call   08360442 <_ZNK12CDataManager13get_level_expEi>  ; CDataManager::get_level_exp(int) const
0866aeb5 +0x123:  mov    %eax,-0xc(%ebp)
0866aeb8 +0x126:  mov    0x8(%ebp),%eax
0866aebb +0x129:  mov    %eax,(%esp)
0866aebe +0x12c:  call   084ec05c <_GLOBAL__I__Z7getUserj+0x300e>  ; global constructors keyed to getUser(unsigned int)+0x300e
0866aec3 +0x131:  cmp    -0xc(%ebp),%eax
0866aec6 +0x134:  setl   %al
0866aec9 +0x137:  test   %al,%al
0866aecb +0x139:  je     0866aeef <+0x15d>
0866aecd +0x13b:  mov    0x8(%ebp),%eax
0866aed0 +0x13e:  mov    %eax,(%esp)
0866aed3 +0x141:  call   08696790 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2fe5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2fe5
0866aed8 +0x146:  movl   $0x0,0x4(%esp)
0866aee0 +0x14e:  mov    0x8(%ebp),%eax
0866aee3 +0x151:  mov    %eax,(%esp)
0866aee6 +0x154:  call   086646c8 <_ZN5CUser19_update_charac_statEb>  ; CUser::_update_charac_stat(bool)
0866aeeb +0x159:  movb   $0x1,-0x19(%ebp)
0866aeef +0x15d:  movl   $0x0,0xc(%esp)
0866aef7 +0x165:  movl   $0x25,0x8(%esp)
0866aeff +0x16d:  movl   $0x1,0x4(%esp)
0866af07 +0x175:  mov    0x8(%ebp),%eax
0866af0a +0x178:  mov    %eax,(%esp)
0866af0d +0x17b:  call   0867ba5c <_ZN5CUser14SendNotiPacketENS_11eSendTargetE15ENUM_NOTIPACKETi>  ; CUser::SendNotiPacket(CUser::eSendTarget, ENUM_NOTIPACKET, int)
0866af12 +0x180:  movzbl -0x19(%ebp),%eax
0866af16 +0x184:  add    $0x44,%esp
0866af19 +0x187:  pop    %ebx
0866af1a +0x188:  pop    %ebp
0866af1b +0x189:  ret
```

## 反编译 C

```c
// CUser::lost_ext @ 0x866ad92

/* CUser::lost_ext(int, int&, bool) */

undefined1 __thiscall CUser::lost_ext(CUser *this,int param_1,int *param_2,bool param_3)

{
  int iVar1;
  CDataManager *pCVar2;
  int iVar3;
  int iVar4;
  undefined1 local_1d;
  
  local_1d = 0;
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  pCVar2 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::get_level_exp(pCVar2,iVar1);
  iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  pCVar2 = (CDataManager *)G_CDataManager();
  iVar1 = CDataManager::get_level_exp(pCVar2,iVar1 + 1);
  iVar1 = ((iVar1 - iVar3) * param_1) / 100;
  if (param_3) {
    *param_2 = iVar1;
    CUserCharacInfo::subtractCurCharacExp((CUserCharacInfo *)this,iVar1);
    iVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    pCVar2 = (CDataManager *)G_CDataManager();
    iVar1 = CDataManager::get_level_exp(pCVar2,iVar1);
    iVar3 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
    if (iVar3 < iVar1) {
      CUserCharacInfo::decCurCharacLevel((CUserCharacInfo *)this);
      _update_charac_stat(this,false);
      local_1d = 1;
    }
  }
  else {
    iVar4 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
    if (iVar3 < iVar4 - iVar1) {
      *param_2 = iVar1;
      CUserCharacInfo::subtractCurCharacExp((CUserCharacInfo *)this,iVar1);
    }
    else {
      iVar1 = CUserCharacInfo::get_charac_exp((CUserCharacInfo *)this);
      *param_2 = iVar1 - iVar3;
      CUserCharacInfo::setCurCharacExp((CUserCharacInfo *)this,iVar3);
    }
  }
  SendNotiPacket(this,1,0x25,0);
  return local_1d;
}
```
