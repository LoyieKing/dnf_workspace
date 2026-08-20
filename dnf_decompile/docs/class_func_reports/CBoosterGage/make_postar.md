# make_postar

`_ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci`

`CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int)`

| 类 | 地址 |
|---|---|
| `CBoosterGage` | `0x080dc6d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080dc6d6  _ZN12CBoosterGage11make_postarEP5CUserRK10Inven_ItemPKci
#           CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int)
# range [0x080dc6d6, 0x080dc9c9]
080dc6d6 +0x000:  push   %ebp
080dc6d7 +0x001:  mov    %esp,%ebp
080dc6d9 +0x003:  push   %edi
080dc6da +0x004:  push   %esi
080dc6db +0x005:  push   %ebx
080dc6dc +0x006:  sub    $0x16c,%esp
080dc6e2 +0x00c:  lea    -0x13d(%ebp),%edx
080dc6e8 +0x012:  mov    $0x100,%ebx
080dc6ed +0x017:  mov    $0x0,%eax
080dc6f2 +0x01c:  mov    %edx,%ecx
080dc6f4 +0x01e:  and    $0x1,%ecx
080dc6f7 +0x021:  test   %ecx,%ecx
080dc6f9 +0x023:  je     080dc703 <+0x2d>
080dc6fb +0x025:  mov    %al,(%edx)
080dc6fd +0x027:  add    $0x1,%edx
080dc700 +0x02a:  sub    $0x1,%ebx
080dc703 +0x02d:  mov    %edx,%ecx
080dc705 +0x02f:  and    $0x2,%ecx
080dc708 +0x032:  test   %ecx,%ecx
080dc70a +0x034:  je     080dc715 <+0x3f>
080dc70c +0x036:  mov    %ax,(%edx)
080dc70f +0x039:  add    $0x2,%edx
080dc712 +0x03c:  sub    $0x2,%ebx
080dc715 +0x03f:  mov    %ebx,%ecx
080dc717 +0x041:  shr    $0x2,%ecx
080dc71a +0x044:  mov    %edx,%edi
080dc71c +0x046:  rep stos %eax,%es:(%edi)
080dc71e +0x048:  mov    %edi,%edx
080dc720 +0x04a:  mov    %ebx,%ecx
080dc722 +0x04c:  and    $0x2,%ecx
080dc725 +0x04f:  test   %ecx,%ecx
080dc727 +0x051:  je     080dc72f <+0x59>
080dc729 +0x053:  mov    %ax,(%edx)
080dc72c +0x056:  add    $0x2,%edx
080dc72f +0x059:  mov    %ebx,%ecx
080dc731 +0x05b:  and    $0x1,%ecx
080dc734 +0x05e:  test   %ecx,%ecx
080dc736 +0x060:  je     080dc73d <+0x67>
080dc738 +0x062:  mov    %al,(%edx)
080dc73a +0x064:  add    $0x1,%edx
080dc73d +0x067:  lea    -0x28(%ebp),%eax
080dc740 +0x06a:  movl   $0x0,0xc(%esp)
080dc748 +0x072:  movl   $0x436,0x8(%esp)
080dc750 +0x07a:  movl   $&g_ServerString_,0x4(%esp)
080dc758 +0x082:  mov    %eax,(%esp)
080dc75b +0x085:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
080dc760 +0x08a:  sub    $0x4,%esp
080dc763 +0x08d:  lea    -0x28(%ebp),%eax
080dc766 +0x090:  mov    %eax,(%esp)
080dc769 +0x093:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
080dc76e +0x098:  movl   $0x14,0x8(%esp)
080dc776 +0x0a0:  mov    %eax,0x4(%esp)
080dc77a +0x0a4:  lea    -0x3d(%ebp),%eax
080dc77d +0x0a7:  mov    %eax,(%esp)
080dc780 +0x0aa:  call   0807d8d0 <_init+0x1c8>
080dc785 +0x0af:  lea    -0x28(%ebp),%eax
080dc788 +0x0b2:  mov    %eax,(%esp)
080dc78b +0x0b5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080dc790 +0x0ba:  lea    -0x24(%ebp),%eax
080dc793 +0x0bd:  movl   $0x0,0xc(%esp)
080dc79b +0x0c5:  movl   $0x437,0x8(%esp)
080dc7a3 +0x0cd:  movl   $&g_ServerString_,0x4(%esp)
080dc7ab +0x0d5:  mov    %eax,(%esp)
080dc7ae +0x0d8:  call   080c6668 <_ZNK13np_server_xml10CServerXml15GetServerStringEiPb>  ; np_server_xml::CServerXml::GetServerString(int, bool*) const
080dc7b3 +0x0dd:  sub    $0x4,%esp
080dc7b6 +0x0e0:  lea    -0x24(%ebp),%eax
080dc7b9 +0x0e3:  mov    %eax,(%esp)
080dc7bc +0x0e6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
080dc7c1 +0x0eb:  movl   $0xff,0x8(%esp)
080dc7c9 +0x0f3:  mov    %eax,0x4(%esp)
080dc7cd +0x0f7:  lea    -0x13d(%ebp),%eax
080dc7d3 +0x0fd:  mov    %eax,(%esp)
080dc7d6 +0x100:  call   0807d8d0 <_init+0x1c8>
080dc7db +0x105:  lea    -0x24(%ebp),%eax
080dc7de +0x108:  mov    %eax,(%esp)
080dc7e1 +0x10b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080dc7e6 +0x110:  mov    0x10(%ebp),%eax
080dc7e9 +0x113:  mov    0x2(%eax),%eax
080dc7ec +0x116:  mov    %eax,%ebx
080dc7ee +0x118:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080dc7f3 +0x11d:  mov    %ebx,0x4(%esp)
080dc7f7 +0x121:  mov    %eax,(%esp)
080dc7fa +0x124:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
080dc7ff +0x129:  mov    %eax,-0x20(%ebp)
080dc802 +0x12c:  cmpl   $0x0,-0x20(%ebp)
080dc806 +0x130:  je     080dc9be <+0x2e8>
080dc80c +0x136:  jmp    080dc844 <+0x16e>
080dc80e +0x138:  mov    %edx,%ebx
080dc810 +0x13a:  mov    %eax,%esi
080dc812 +0x13c:  lea    -0x28(%ebp),%eax
080dc815 +0x13f:  mov    %eax,(%esp)
080dc818 +0x142:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080dc81d +0x147:  mov    %esi,%eax
080dc81f +0x149:  mov    %ebx,%edx
080dc821 +0x14b:  mov    %eax,(%esp)
080dc824 +0x14e:  call   08ae3750 <_Unwind_Resume>
080dc829 +0x153:  mov    %edx,%ebx
080dc82b +0x155:  mov    %eax,%esi
080dc82d +0x157:  lea    -0x24(%ebp),%eax
080dc830 +0x15a:  mov    %eax,(%esp)
080dc833 +0x15d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
080dc838 +0x162:  mov    %esi,%eax
080dc83a +0x164:  mov    %ebx,%edx
080dc83c +0x166:  mov    %eax,(%esp)
080dc83f +0x169:  call   08ae3750 <_Unwind_Resume>
080dc844 +0x16e:  mov    -0x20(%ebp),%eax
080dc847 +0x171:  mov    (%eax),%eax
080dc849 +0x173:  add    $0x10,%eax
080dc84c +0x176:  mov    (%eax),%edx
080dc84e +0x178:  mov    -0x20(%ebp),%eax
080dc851 +0x17b:  mov    %eax,(%esp)
080dc854 +0x17e:  call   *%edx
080dc856 +0x180:  test   %al,%al
080dc858 +0x182:  je     080dc8f5 <+0x21f>
080dc85e +0x188:  movl   $0x0,-0x1c(%ebp)
080dc865 +0x18f:  cmpl   $0x0,0x18(%ebp)
080dc869 +0x193:  je     080dc88e <+0x1b8>
080dc86b +0x195:  cmpl   $0x16d,0x18(%ebp)
080dc872 +0x19c:  je     080dc88e <+0x1b8>
080dc874 +0x19e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
080dc87b +0x1a5:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
080dc880 +0x1aa:  mov    0x18(%ebp),%edx
080dc883 +0x1ad:  imul   $&_ZL14gUnicodeBuffer+0xac54,%edx,%edx
080dc889 +0x1b3:  add    %edx,%eax
080dc88b +0x1b5:  mov    %eax,-0x1c(%ebp)
080dc88e +0x1b8:  lea    -0x13d(%ebp),%eax
080dc894 +0x1be:  mov    %eax,(%esp)
080dc897 +0x1c1:  call   0807e3b0 <_init+0xca8>
080dc89c +0x1c6:  mov    %eax,%esi
080dc89e +0x1c8:  mov    0x10(%ebp),%eax
080dc8a1 +0x1cb:  mov    0x2(%eax),%eax
080dc8a4 +0x1ce:  mov    %eax,%ebx
080dc8a6 +0x1d0:  mov    0xc(%ebp),%eax
080dc8a9 +0x1d3:  mov    %eax,(%esp)
080dc8ac +0x1d6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080dc8b1 +0x1db:  mov    %esi,0x20(%esp)
080dc8b5 +0x1df:  lea    -0x13d(%ebp),%edx
080dc8bb +0x1e5:  mov    %edx,0x1c(%esp)
080dc8bf +0x1e9:  mov    0x14(%ebp),%edx
080dc8c2 +0x1ec:  mov    %edx,0x18(%esp)
080dc8c6 +0x1f0:  movl   $0xffffffff,0x14(%esp)
080dc8ce +0x1f8:  movl   $0x0,0x10(%esp)
080dc8d6 +0x200:  mov    -0x1c(%ebp),%edx
080dc8d9 +0x203:  mov    %edx,0xc(%esp)
080dc8dd +0x207:  mov    %ebx,0x8(%esp)
080dc8e1 +0x20b:  mov    %eax,0x4(%esp)
080dc8e5 +0x20f:  mov    0xc(%ebp),%eax
080dc8e8 +0x212:  mov    %eax,(%esp)
080dc8eb +0x215:  call   085561b0 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewAvatarMailEP5CUseriiiccPKcS4_i>  ; WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail(CUser*, int, int, int, char, char, char const*, char const*, int)
080dc8f0 +0x21a:  jmp    080dc9bf <+0x2e9>
080dc8f5 +0x21f:  mov    -0x20(%ebp),%eax
080dc8f8 +0x222:  mov    (%eax),%eax
080dc8fa +0x224:  add    $0x14,%eax
080dc8fd +0x227:  mov    (%eax),%edx
080dc8ff +0x229:  mov    -0x20(%ebp),%eax
080dc902 +0x22c:  mov    %eax,(%esp)
080dc905 +0x22f:  call   *%edx
080dc907 +0x231:  test   %al,%al
080dc909 +0x233:  je     080dc94c <+0x276>
080dc90b +0x235:  lea    -0x13d(%ebp),%eax
080dc911 +0x23b:  mov    %eax,(%esp)
080dc914 +0x23e:  call   0807e3b0 <_init+0xca8>
080dc919 +0x243:  mov    %eax,%ebx
080dc91b +0x245:  mov    0xc(%ebp),%eax
080dc91e +0x248:  mov    %eax,(%esp)
080dc921 +0x24b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080dc926 +0x250:  mov    %ebx,0x10(%esp)
080dc92a +0x254:  lea    -0x13d(%ebp),%edx
080dc930 +0x25a:  mov    %edx,0xc(%esp)
080dc934 +0x25e:  mov    0x10(%ebp),%edx
080dc937 +0x261:  mov    %edx,0x8(%esp)
080dc93b +0x265:  mov    %eax,0x4(%esp)
080dc93f +0x269:  mov    0xc(%ebp),%eax
080dc942 +0x26c:  mov    %eax,(%esp)
080dc945 +0x26f:  call   08556422 <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewCreatureMailEP5CUseriRK10Inven_ItemPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(CUser*, int, Inven_Item const&, char const*, int)
080dc94a +0x274:  jmp    080dc9bf <+0x2e9>
080dc94c +0x276:  mov    0xc(%ebp),%eax
080dc94f +0x279:  mov    %eax,(%esp)
080dc952 +0x27c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
080dc957 +0x281:  mov    %eax,%ebx
080dc959 +0x283:  lea    -0x13d(%ebp),%eax
080dc95f +0x289:  mov    %eax,(%esp)
080dc962 +0x28c:  call   0807e3b0 <_init+0xca8>
080dc967 +0x291:  mov    %eax,%esi
080dc969 +0x293:  mov    0xc(%ebp),%eax
080dc96c +0x296:  mov    %eax,(%esp)
080dc96f +0x299:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
080dc974 +0x29e:  movl   $0x0,0x24(%esp)
080dc97c +0x2a6:  movl   $0x0,0x20(%esp)
080dc984 +0x2ae:  mov    %ebx,0x1c(%esp)
080dc988 +0x2b2:  movl   $0x0,0x18(%esp)
080dc990 +0x2ba:  mov    %esi,0x14(%esp)
080dc994 +0x2be:  lea    -0x13d(%ebp),%edx
080dc99a +0x2c4:  mov    %edx,0x10(%esp)
080dc99e +0x2c8:  mov    %eax,0xc(%esp)
080dc9a2 +0x2cc:  movl   $0x0,0x8(%esp)
080dc9aa +0x2d4:  mov    0x10(%ebp),%eax
080dc9ad +0x2d7:  mov    %eax,0x4(%esp)
080dc9b1 +0x2db:  lea    -0x3d(%ebp),%eax
080dc9b4 +0x2de:  mov    %eax,(%esp)
080dc9b7 +0x2e1:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
080dc9bc +0x2e6:  jmp    080dc9bf <+0x2e9>
080dc9be +0x2e8:  nop
080dc9bf +0x2e9:  lea    -0xc(%ebp),%esp
080dc9c2 +0x2ec:  add    $0x0,%esp
080dc9c5 +0x2ef:  pop    %ebx
080dc9c6 +0x2f0:  pop    %esi
080dc9c7 +0x2f1:  pop    %edi
080dc9c8 +0x2f2:  pop    %ebp
080dc9c9 +0x2f3:  ret
```

## 反编译 C

```c
// CBoosterGage::make_postar @ 0x80dc6d6

/* CBoosterGage::make_postar(CUser*, Inven_Item const&, char const*, int) */

void __thiscall
CBoosterGage::make_postar
          (CBoosterGage *this,CUser *param_1,Inven_Item *param_2,char *param_3,int param_4)

{
  char cVar1;
  CDataManager *this_00;
  size_t sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  char local_141;
  char local_140 [255];
  char local_41 [21];
  string local_2c [4];
  string local_28 [4];
  int *local_24;
  int local_20;
  
  pcVar8 = &local_141;
  uVar9 = 0x100;
  bVar10 = ((uint)pcVar8 & 1) != 0;
  if (bVar10) {
    local_141 = '\0';
    pcVar8 = local_140;
    uVar9 = 0xff;
  }
  if (((uint)pcVar8 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
    uVar9 = uVar9 - 2;
  }
  for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8[2] = '\0';
    pcVar8[3] = '\0';
    pcVar8 = pcVar8 + 4;
  }
  if ((uVar9 & 2) != 0) {
    pcVar8[0] = '\0';
    pcVar8[1] = '\0';
    pcVar8 = pcVar8 + 2;
  }
  if (bVar10) {
    *pcVar8 = '\0';
  }
  np_server_xml::CServerXml::GetServerString((int)local_2c,(bool *)g_ServerString_);
                    /* try { // try from 080dc769 to 080dc76d has its CatchHandler @ 080dc80e */
  pcVar8 = (char *)std::string::c_str(local_2c);
  strncpy(local_41,pcVar8,0x14);
  std::string::~string(local_2c);
  np_server_xml::CServerXml::GetServerString((int)local_28,(bool *)g_ServerString_);
                    /* try { // try from 080dc7bc to 080dc7c0 has its CatchHandler @ 080dc829 */
  pcVar8 = (char *)std::string::c_str(local_28);
  strncpy(&local_141,pcVar8,0xff);
  std::string::~string(local_28);
  iVar4 = *(int *)(param_2 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_24 = (int *)CDataManager::find_item(this_00,iVar4);
  if (local_24 != (int *)0x0) {
    cVar1 = (**(code **)(*local_24 + 0x10))(local_24);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*local_24 + 0x14))(local_24);
      if (cVar1 == '\0') {
        uVar5 = CUser::GetServerGroup(param_1);
        sVar2 = strlen(&local_141);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_41,param_2,0,uVar6,&local_141,sVar2,0,uVar5,0,0);
      }
      else {
        sVar2 = strlen(&local_141);
        iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewCreatureMail(param_1,iVar4,param_2,&local_141,sVar2);
      }
    }
    else {
      local_20 = 0;
      if ((param_4 != 0) && (param_4 != 0x16d)) {
        local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        local_20 = local_20 + param_4 * 0x15180;
      }
      sVar2 = strlen(&local_141);
      iVar4 = *(int *)(param_2 + 2);
      iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      WongWork::CMailBoxHelper::ReqDBSendNewAvatarMail
                (param_1,iVar3,iVar4,local_20,'\0',-1,param_3,&local_141,sVar2);
    }
  }
  return;
}
```
