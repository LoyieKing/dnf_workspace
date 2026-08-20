# db_dispatch

`_ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream`

`ARAD::Arad_Dispatcher_Login_Impl::db_dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818ef4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ef4c  _ZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6Stream
#           ARAD::Arad_Dispatcher_Login_Impl::db_dispatch(int, int, Stream*)
# range [0x0818ef4c, 0x0818f1c9]
0818ef4c +0x000:  push   %ebp
0818ef4d +0x001:  mov    %esp,%ebp
0818ef4f +0x003:  push   %edi
0818ef50 +0x004:  push   %esi
0818ef51 +0x005:  push   %ebx
0818ef52 +0x006:  sub    $0xdc,%esp
0818ef58 +0x00c:  mov    0x14(%ebp),%eax
0818ef5b +0x00f:  mov    %eax,(%esp)
0818ef5e +0x012:  call   0818fbb4 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0xb6>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0xb6
0818ef63 +0x017:  mov    %eax,-0x20(%ebp)
0818ef66 +0x01a:  cmpl   $0x0,-0x20(%ebp)
0818ef6a +0x01e:  jne    0818efaa <+0x5e>
0818ef6c +0x020:  movl   $"recv stream buffer null!!",0x14(%esp)
0818ef74 +0x028:  movl   $"%s",0x10(%esp)
0818ef7c +0x030:  movl   $0x39,0xc(%esp)
0818ef84 +0x038:  movl   $&_ZZN4ARAD26Arad_Dispatcher_Login_Impl11db_dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818ef8c +0x040:  movl   $"localjapan/Arad_Dispatcher_Login_Impl.cpp",0x4(%esp)
0818ef94 +0x048:  movl   $0x1,(%esp)
0818ef9b +0x04f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818efa0 +0x054:  mov    $0xffffffff,%ebx
0818efa5 +0x059:  jmp    0818f1bc <+0x270>
0818efaa +0x05e:  mov    -0x20(%ebp),%eax
0818efad +0x061:  movl   $0x0,0xb8(%eax)
0818efb7 +0x06b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0818efbc +0x070:  mov    %eax,(%esp)
0818efbf +0x073:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0818efc4 +0x078:  cmp    $0x8,%eax
0818efc7 +0x07b:  sete   %al
0818efca +0x07e:  test   %al,%al
0818efcc +0x080:  je     0818f019 <+0xcd>
0818efce +0x082:  movl   $0x0,-0x38(%ebp)
0818efd5 +0x089:  movl   $0x0,-0x34(%ebp)
0818efdc +0x090:  mov    -0x20(%ebp),%eax
0818efdf +0x093:  movzwl 0x3a38(%eax),%eax
0818efe6 +0x09a:  cwtl
0818efe7 +0x09b:  mov    %eax,-0x30(%ebp)
0818efea +0x09e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818efef +0x0a3:  lea    -0x38(%ebp),%edx
0818eff2 +0x0a6:  mov    %edx,0x8(%esp)
0818eff6 +0x0aa:  mov    0x10(%ebp),%edx
0818eff9 +0x0ad:  mov    %edx,0x4(%esp)
0818effd +0x0b1:  mov    %eax,(%esp)
0818f000 +0x0b4:  call   083f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>  ; DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&)
0818f005 +0x0b9:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818f00a +0x0be:  mov    0x10(%ebp),%edx
0818f00d +0x0c1:  mov    %edx,0x4(%esp)
0818f011 +0x0c5:  mov    %eax,(%esp)
0818f014 +0x0c8:  call   0818fb1a <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1c>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1c
0818f019 +0x0cd:  lea    -0xbc(%ebp),%ebx
0818f01f +0x0d3:  mov    $0x0,%eax
0818f024 +0x0d8:  mov    $0x21,%edx
0818f029 +0x0dd:  mov    %ebx,%edi
0818f02b +0x0df:  mov    %edx,%ecx
0818f02d +0x0e1:  rep stos %eax,%es:(%edi)
0818f02f +0x0e3:  lea    -0xbc(%ebp),%eax
0818f035 +0x0e9:  mov    %eax,0x4(%esp)
0818f039 +0x0ed:  mov    -0x20(%ebp),%eax
0818f03c +0x0f0:  mov    %eax,(%esp)
0818f03f +0x0f3:  call   0818b706 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)
0818f044 +0x0f8:  test   %eax,%eax
0818f046 +0x0fa:  setne  %al
0818f049 +0x0fd:  test   %al,%al
0818f04b +0x0ff:  je     0818f05a <+0x10e>
0818f04d +0x101:  mov    -0x20(%ebp),%eax
0818f050 +0x104:  movl   $0x4,0xb8(%eax)
0818f05a +0x10e:  lea    -0xbc(%ebp),%eax
0818f060 +0x114:  mov    %eax,0x8(%esp)
0818f064 +0x118:  mov    -0x20(%ebp),%eax
0818f067 +0x11b:  mov    %eax,0x4(%esp)
0818f06b +0x11f:  mov    0x8(%ebp),%eax
0818f06e +0x122:  mov    %eax,(%esp)
0818f071 +0x125:  call   0818f746 <_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc>  ; ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)
0818f076 +0x12a:  test   %eax,%eax
0818f078 +0x12c:  setne  %al
0818f07b +0x12f:  test   %al,%al
0818f07d +0x131:  je     0818f08c <+0x140>
0818f07f +0x133:  mov    -0x20(%ebp),%eax
0818f082 +0x136:  movl   $0x1,0xb8(%eax)
0818f08c +0x140:  mov    -0x20(%ebp),%eax
0818f08f +0x143:  mov    0x3950(%eax),%eax
0818f095 +0x149:  cmp    $0x2,%eax
0818f098 +0x14c:  jg     0818f0a8 <+0x15c>
0818f09a +0x14e:  mov    -0x20(%ebp),%eax
0818f09d +0x151:  mov    0x3954(%eax),%eax
0818f0a3 +0x157:  cmp    $0x9,%eax
0818f0a6 +0x15a:  jle    0818f0b5 <+0x169>
0818f0a8 +0x15c:  mov    -0x20(%ebp),%eax
0818f0ab +0x15f:  movl   $0x7,0xb8(%eax)
0818f0b5 +0x169:  mov    -0x20(%ebp),%eax
0818f0b8 +0x16c:  mov    %eax,(%esp)
0818f0bb +0x16f:  call   0818bd67 <_ZN4ARAD8DATABASE11LOGIN_QUERY31arad_sp_select_punish_user_infoEP14SIG_LOGIN_DATA>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(SIG_LOGIN_DATA*)
0818f0c0 +0x174:  test   %eax,%eax
0818f0c2 +0x176:  setne  %al
0818f0c5 +0x179:  test   %al,%al
0818f0c7 +0x17b:  je     0818f0d6 <+0x18a>
0818f0c9 +0x17d:  mov    -0x20(%ebp),%eax
0818f0cc +0x180:  movl   $0xf,0xb8(%eax)
0818f0d6 +0x18a:  mov    -0x20(%ebp),%eax
0818f0d9 +0x18d:  mov    %eax,(%esp)
0818f0dc +0x190:  call   0818bfb0 <_ZN4ARAD8DATABASE11LOGIN_QUERY33arad_sp_select_punish_second_userEP14SIG_LOGIN_DATA>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(SIG_LOGIN_DATA*)
0818f0e1 +0x195:  mov    -0x20(%ebp),%eax
0818f0e4 +0x198:  mov    %eax,0x4(%esp)
0818f0e8 +0x19c:  mov    0x8(%ebp),%eax
0818f0eb +0x19f:  mov    %eax,(%esp)
0818f0ee +0x1a2:  call   0818f970 <_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA>  ; ARAD::Arad_Dispatcher_Login_Impl::punish_user_check(SIG_LOGIN_DATA*)
0818f0f3 +0x1a7:  test   %eax,%eax
0818f0f5 +0x1a9:  movl   $0x0,-0x1c(%ebp)
0818f0fc +0x1b0:  mov    -0x20(%ebp),%eax
0818f0ff +0x1b3:  mov    %eax,(%esp)
0818f102 +0x1b6:  call   0818c0e0 <_ZN4ARAD8DATABASE11LOGIN_QUERY29arad_sp_convert_pass_pad_infoEP14SIG_LOGIN_DATA>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(SIG_LOGIN_DATA*)
0818f107 +0x1bb:  mov    -0x20(%ebp),%eax
0818f10a +0x1be:  mov    %eax,(%esp)
0818f10d +0x1c1:  call   0818f4a6 <_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA>  ; ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*)
0818f112 +0x1c6:  test   %eax,%eax
0818f114 +0x1c8:  lea    -0x2c(%ebp),%eax
0818f117 +0x1cb:  mov    %eax,(%esp)
0818f11a +0x1ce:  call   0818fc08 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x10a>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x10a
0818f11f +0x1d3:  lea    -0x2c(%ebp),%eax
0818f122 +0x1d6:  mov    %eax,0x4(%esp)
0818f126 +0x1da:  mov    -0x20(%ebp),%eax
0818f129 +0x1dd:  mov    %eax,(%esp)
0818f12c +0x1e0:  call   0818c8b8 <_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
0818f131 +0x1e5:  mov    0x10(%ebp),%eax
0818f134 +0x1e8:  mov    %eax,0xc(%esp)
0818f138 +0x1ec:  lea    -0x2c(%ebp),%eax
0818f13b +0x1ef:  mov    %eax,0x8(%esp)
0818f13f +0x1f3:  mov    -0x20(%ebp),%eax
0818f142 +0x1f6:  mov    %eax,0x4(%esp)
0818f146 +0x1fa:  mov    0x8(%ebp),%eax
0818f149 +0x1fd:  mov    %eax,(%esp)
0818f14c +0x200:  call   0818f1ca <_ZN4ARAD26Arad_Dispatcher_Login_Impl16premium_info_setEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS5_EEi>  ; ARAD::Arad_Dispatcher_Login_Impl::premium_info_set(SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&, int)
0818f151 +0x205:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0818f156 +0x20a:  mov    %eax,(%esp)
0818f159 +0x20d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0818f15e +0x212:  cmp    $0x7,%eax
0818f161 +0x215:  sete   %al
0818f164 +0x218:  test   %al,%al
0818f166 +0x21a:  je     0818f18f <+0x243>
0818f168 +0x21c:  mov    -0x20(%ebp),%eax
0818f16b +0x21f:  mov    0x39ac(%eax),%eax
0818f171 +0x225:  test   %eax,%eax
0818f173 +0x227:  je     0818f182 <+0x236>
0818f175 +0x229:  mov    -0x20(%ebp),%eax
0818f178 +0x22c:  mov    0x39a8(%eax),%eax
0818f17e +0x232:  test   %eax,%eax
0818f180 +0x234:  jne    0818f18f <+0x243>
0818f182 +0x236:  mov    -0x20(%ebp),%eax
0818f185 +0x239:  movl   $0x8,0xb8(%eax)
0818f18f +0x243:  mov    $0x0,%ebx
0818f194 +0x248:  lea    -0x2c(%ebp),%eax
0818f197 +0x24b:  mov    %eax,(%esp)
0818f19a +0x24e:  call   0818fc1c <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x11e>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x11e
0818f19f +0x253:  jmp    0818f1bc <+0x270>
0818f1a1 +0x255:  mov    %edx,%ebx
0818f1a3 +0x257:  mov    %eax,%esi
0818f1a5 +0x259:  lea    -0x2c(%ebp),%eax
0818f1a8 +0x25c:  mov    %eax,(%esp)
0818f1ab +0x25f:  call   0818fc1c <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x11e>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x11e
0818f1b0 +0x264:  mov    %esi,%eax
0818f1b2 +0x266:  mov    %ebx,%edx
0818f1b4 +0x268:  mov    %eax,(%esp)
0818f1b7 +0x26b:  call   08ae3750 <_Unwind_Resume>
0818f1bc +0x270:  mov    %ebx,%eax
0818f1be +0x272:  add    $0xdc,%esp
0818f1c4 +0x278:  pop    %ebx
0818f1c5 +0x279:  pop    %esi
0818f1c6 +0x27a:  pop    %edi
0818f1c7 +0x27b:  pop    %ebp
0818f1c8 +0x27c:  ret
0818f1c9 +0x27d:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::db_dispatch @ 0x818ef4c

/* ARAD::Arad_Dispatcher_Login_Impl::db_dispatch(int, int, Stream*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::db_dispatch
          (Arad_Dispatcher_Login_Impl *this,int param_1,int param_2,Stream *param_3)

{
  GameWorld *pGVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  byte bVar5;
  char local_c0 [132];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> local_30 [12];
  SIG_LOGIN_DATA *local_24;
  undefined4 local_20;
  
  bVar5 = 0;
  local_24 = Stream::GetOutBuffer<SIG_LOGIN_DATA>(param_3);
  if (local_24 == (SIG_LOGIN_DATA *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Dispatcher_Login_Impl.cpp",
               "virtual int ARAD::Arad_Dispatcher_Login_Impl::db_dispatch(int, int, Stream*)",0x39,
               "%s","recv stream buffer null!!");
    uVar3 = 0xffffffff;
  }
  else {
    *(undefined4 *)(local_24 + 0xb8) = 0;
    pGVar1 = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(pGVar1);
    if (iVar2 == 8) {
      local_3c = 0;
      local_38 = 0;
      local_34 = (int)*(short *)(local_24 + 0x3a38);
      DBMgr::addUserDBInfo(GlobalData::s_db_mgr,param_2,(stUserDBInfo_t *)&local_3c);
      DBMgr::setUserIdx(GlobalData::s_db_mgr,param_2);
    }
    pcVar4 = local_c0;
    for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
    }
    iVar2 = DATABASE::LOGIN_QUERY::arad_sp_select_account_info(local_24,local_c0);
    if (iVar2 != 0) {
      *(undefined4 *)(local_24 + 0xb8) = 4;
    }
    iVar2 = account_password_check(this,local_24,local_c0);
    if (iVar2 != 0) {
      *(undefined4 *)(local_24 + 0xb8) = 1;
    }
    if ((2 < *(int *)(local_24 + 0x3950)) || (9 < *(int *)(local_24 + 0x3954))) {
      *(undefined4 *)(local_24 + 0xb8) = 7;
    }
    iVar2 = DATABASE::LOGIN_QUERY::arad_sp_select_punish_user_info(local_24);
    if (iVar2 != 0) {
      *(undefined4 *)(local_24 + 0xb8) = 0xf;
    }
    DATABASE::LOGIN_QUERY::arad_sp_select_punish_second_user(local_24);
    punish_user_check(this,local_24);
    local_20 = 0;
    DATABASE::LOGIN_QUERY::arad_sp_convert_pass_pad_info(local_24);
    pad_certifiaction_check(local_24);
    std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::vector
              (local_30);
                    /* try { // try from 0818f12c to 0818f155 has its CatchHandler @ 0818f1a1 */
    DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(local_24,(vector *)local_30);
    premium_info_set(this,local_24,(vector *)local_30,param_2);
    pGVar1 = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(pGVar1);
    if ((iVar2 == 7) && ((*(int *)(local_24 + 0x39ac) == 0 || (*(int *)(local_24 + 0x39a8) == 0))))
    {
      *(undefined4 *)(local_24 + 0xb8) = 8;
    }
    uVar3 = 0;
    std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::~vector
              (local_30);
  }
  return uVar3;
}
```
