# _LoadEventBringUpInfo

`_ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC`

`DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x08409d2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08409d2e  _ZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARAC
#           DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)
# range [0x08409d2e, 0x08409fa5]
08409d2e +0x000:  push   %ebp
08409d2f +0x001:  mov    %esp,%ebp
08409d31 +0x003:  push   %esi
08409d32 +0x004:  push   %ebx
08409d33 +0x005:  sub    $0x70,%esp
08409d36 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08409d3b +0x00d:  movl   $0x0,0x8(%esp)
08409d43 +0x015:  movl   $0x2,0x4(%esp)
08409d4b +0x01d:  mov    %eax,(%esp)
08409d4e +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08409d53 +0x025:  mov    %eax,-0x14(%ebp)
08409d56 +0x028:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08409d5b +0x02d:  mov    %eax,(%esp)
08409d5e +0x030:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08409d63 +0x035:  movl   $0x19b,0x4(%esp)
08409d6b +0x03d:  mov    %eax,(%esp)
08409d6e +0x040:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
08409d73 +0x045:  mov    %eax,0x4(%esp)
08409d77 +0x049:  lea    -0x48(%ebp),%eax
08409d7a +0x04c:  mov    %eax,(%esp)
08409d7d +0x04f:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08409d82 +0x054:  mov    0xc(%ebp),%eax
08409d85 +0x057:  mov    (%eax),%eax
08409d87 +0x059:  movl   $0x0,0x4(%esp)
08409d8f +0x061:  mov    %eax,(%esp)
08409d92 +0x064:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08409d97 +0x069:  mov    %eax,%ebx
08409d99 +0x06b:  mov    0xc(%ebp),%eax
08409d9c +0x06e:  mov    0x4(%eax),%esi
08409d9f +0x071:  lea    -0x48(%ebp),%eax
08409da2 +0x074:  mov    %eax,(%esp)
08409da5 +0x077:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08409daa +0x07c:  mov    %ebx,0x10(%esp)
08409dae +0x080:  mov    %esi,0xc(%esp)
08409db2 +0x084:  mov    %eax,0x8(%esp)
08409db6 +0x088:  movl   $"seLect use_material_cnt, give_reward_flag from %s where charac_no=%u and m_id=%s",0x4(%esp)
08409dbe +0x090:  mov    -0x14(%ebp),%eax
08409dc1 +0x093:  mov    %eax,(%esp)
08409dc4 +0x096:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08409dc9 +0x09b:  movl   $0x1,0x4(%esp)
08409dd1 +0x0a3:  mov    -0x14(%ebp),%eax
08409dd4 +0x0a6:  mov    %eax,(%esp)
08409dd7 +0x0a9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08409ddc +0x0ae:  xor    $0x1,%eax
08409ddf +0x0b1:  test   %al,%al
08409de1 +0x0b3:  je     08409e2d <+0xff>
08409de3 +0x0b5:  mov    0xc(%ebp),%eax
08409de6 +0x0b8:  mov    0x4(%eax),%ebx
08409de9 +0x0bb:  movl   $0x5,0xc(%esp)
08409df1 +0x0c3:  movl   $0x225b,0x8(%esp)
08409df9 +0x0cb:  movl   $&_ZZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
08409e01 +0x0d3:  lea    -0x44(%ebp),%eax
08409e04 +0x0d6:  mov    %eax,(%esp)
08409e07 +0x0d9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08409e0c +0x0de:  mov    %ebx,0x8(%esp)
08409e10 +0x0e2:  movl   $"DB_LoadCharac::_LoadEventBringUpInfo, exec() ERROR charac_no=%u",0x4(%esp)
08409e18 +0x0ea:  lea    -0x44(%ebp),%eax
08409e1b +0x0ed:  mov    %eax,(%esp)
08409e1e +0x0f0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08409e23 +0x0f5:  mov    $0x0,%ebx
08409e28 +0x0fa:  jmp    08409f92 <+0x264>
08409e2d +0x0ff:  mov    -0x14(%ebp),%eax
08409e30 +0x102:  mov    %eax,(%esp)
08409e33 +0x105:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08409e38 +0x10a:  mov    %eax,-0x10(%ebp)
08409e3b +0x10d:  cmpl   $0x0,-0x10(%ebp)
08409e3f +0x111:  jne    08409e4b <+0x11d>
08409e41 +0x113:  mov    $0x1,%ebx
08409e46 +0x118:  jmp    08409f92 <+0x264>
08409e4b +0x11d:  movb   $0x0,-0x49(%ebp)
08409e4f +0x121:  movb   $0x0,-0x4a(%ebp)
08409e53 +0x125:  mov    -0x14(%ebp),%eax
08409e56 +0x128:  mov    %eax,(%esp)
08409e59 +0x12b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08409e5e +0x130:  movzbl %al,%eax
08409e61 +0x133:  mov    %eax,-0xc(%ebp)
08409e64 +0x136:  cmpl   $0x0,-0xc(%ebp)
08409e68 +0x13a:  jne    08409e74 <+0x146>
08409e6a +0x13c:  mov    $0x0,%ebx
08409e6f +0x141:  jmp    08409f92 <+0x264>
08409e74 +0x146:  lea    -0x49(%ebp),%eax
08409e77 +0x149:  mov    %eax,0x8(%esp)
08409e7b +0x14d:  movl   $0x0,0x4(%esp)
08409e83 +0x155:  mov    -0x14(%ebp),%eax
08409e86 +0x158:  mov    %eax,(%esp)
08409e89 +0x15b:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08409e8e +0x160:  movzbl %al,%eax
08409e91 +0x163:  mov    %eax,-0xc(%ebp)
08409e94 +0x166:  cmpl   $0x0,-0xc(%ebp)
08409e98 +0x16a:  jne    08409ee4 <+0x1b6>
08409e9a +0x16c:  mov    0xc(%ebp),%eax
08409e9d +0x16f:  mov    0x4(%eax),%ebx
08409ea0 +0x172:  movl   $0x5,0xc(%esp)
08409ea8 +0x17a:  movl   $0x226b,0x8(%esp)
08409eb0 +0x182:  movl   $&_ZZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
08409eb8 +0x18a:  lea    -0x34(%ebp),%eax
08409ebb +0x18d:  mov    %eax,(%esp)
08409ebe +0x190:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08409ec3 +0x195:  mov    %ebx,0x8(%esp)
08409ec7 +0x199:  movl   $"DB_LoadCharac::_LoadEventBringUpInfo, get_ubyte(1) ERROR charac_no=%u",0x4(%esp)
08409ecf +0x1a1:  lea    -0x34(%ebp),%eax
08409ed2 +0x1a4:  mov    %eax,(%esp)
08409ed5 +0x1a7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08409eda +0x1ac:  mov    $0x0,%ebx
08409edf +0x1b1:  jmp    08409f92 <+0x264>
08409ee4 +0x1b6:  lea    -0x4a(%ebp),%eax
08409ee7 +0x1b9:  mov    %eax,0x8(%esp)
08409eeb +0x1bd:  movl   $0x1,0x4(%esp)
08409ef3 +0x1c5:  mov    -0x14(%ebp),%eax
08409ef6 +0x1c8:  mov    %eax,(%esp)
08409ef9 +0x1cb:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08409efe +0x1d0:  movzbl %al,%eax
08409f01 +0x1d3:  mov    %eax,-0xc(%ebp)
08409f04 +0x1d6:  cmpl   $0x0,-0xc(%ebp)
08409f08 +0x1da:  jne    08409f51 <+0x223>
08409f0a +0x1dc:  mov    0xc(%ebp),%eax
08409f0d +0x1df:  mov    0x4(%eax),%ebx
08409f10 +0x1e2:  movl   $0x5,0xc(%esp)
08409f18 +0x1ea:  movl   $0x2272,0x8(%esp)
08409f20 +0x1f2:  movl   $&_ZZN13DB_LoadCharac21_LoadEventBringUpInfoEP15SIG_LOAD_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
08409f28 +0x1fa:  lea    -0x24(%ebp),%eax
08409f2b +0x1fd:  mov    %eax,(%esp)
08409f2e +0x200:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08409f33 +0x205:  mov    %ebx,0x8(%esp)
08409f37 +0x209:  movl   $"DB_LoadCharac::_LoadEventBringUpInfo, get_ubyte(2) ERROR charac_no=%u",0x4(%esp)
08409f3f +0x211:  lea    -0x24(%ebp),%eax
08409f42 +0x214:  mov    %eax,(%esp)
08409f45 +0x217:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08409f4a +0x21c:  mov    $0x0,%ebx
08409f4f +0x221:  jmp    08409f92 <+0x264>
08409f51 +0x223:  movzbl -0x49(%ebp),%edx
08409f55 +0x227:  mov    0xc(%ebp),%eax
08409f58 +0x22a:  mov    %dl,0x139(%eax)
08409f5e +0x230:  movzbl -0x4a(%ebp),%eax
08409f62 +0x234:  test   %al,%al
08409f64 +0x236:  setne  %dl
08409f67 +0x239:  mov    0xc(%ebp),%eax
08409f6a +0x23c:  mov    %dl,0x138(%eax)
08409f70 +0x242:  mov    $0x1,%ebx
08409f75 +0x247:  jmp    08409f92 <+0x264>
08409f77 +0x249:  mov    %edx,%ebx
08409f79 +0x24b:  mov    %eax,%esi
08409f7b +0x24d:  lea    -0x48(%ebp),%eax
08409f7e +0x250:  mov    %eax,(%esp)
08409f81 +0x253:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08409f86 +0x258:  mov    %esi,%eax
08409f88 +0x25a:  mov    %ebx,%edx
08409f8a +0x25c:  mov    %eax,(%esp)
08409f8d +0x25f:  call   08ae3750 <_Unwind_Resume>
08409f92 +0x264:  lea    -0x48(%ebp),%eax
08409f95 +0x267:  mov    %eax,(%esp)
08409f98 +0x26a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08409f9d +0x26f:  mov    %ebx,%eax
08409f9f +0x271:  add    $0x70,%esp
08409fa2 +0x274:  pop    %ebx
08409fa3 +0x275:  pop    %esi
08409fa4 +0x276:  pop    %ebp
08409fa5 +0x277:  ret
```

## 反编译 C

```c
// DB_LoadCharac::_LoadEventBringUpInfo @ 0x8409d2e

/* DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*) */

undefined4 __thiscall
DB_LoadCharac::_LoadEventBringUpInfo(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  char cVar1;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  string *psVar2;
  undefined4 uVar3;
  TCHAR *pTVar4;
  undefined4 uVar5;
  uchar local_4e;
  SIG_LOAD_CHARAC local_4d;
  string local_4c;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  MySQL *local_18;
  int local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  psVar2 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_01,0x19b);
  std::string::string((string *)&local_4c,psVar2);
                    /* try { // try from 08409d92 to 08409f49 has its CatchHandler @ 08409f77 */
  uVar3 = NumberToString(*(uint *)param_1,0);
  uVar5 = *(undefined4 *)(param_1 + 4);
  pTVar4 = toTString(&local_4c);
  MySQL::set_query(local_18,
                   "seLect use_material_cnt, give_reward_flag from %s where charac_no=%u and m_id=%s"
                   ,pTVar4,uVar5,uVar3);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    if (local_14 == 0) {
      uVar5 = 1;
    }
    else {
      local_4d = (SIG_LOAD_CHARAC)0x0;
      local_4e = '\0';
      local_10 = MySQL::fetch(local_18);
      local_10 = local_10 & 0xff;
      if (local_10 == 0) {
        uVar5 = 0;
        local_10 = 0;
      }
      else {
        local_10 = MySQL::get_ubyte(local_18,0,(uchar *)&local_4d);
        local_10 = local_10 & 0xff;
        if (local_10 == 0) {
          uVar5 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_38,"bool DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)",
                             0x226b,5);
          cMyTrace::operator()
                    (local_38,
                     "DB_LoadCharac::_LoadEventBringUpInfo, get_ubyte(1) ERROR charac_no=%u",uVar5);
          uVar5 = 0;
        }
        else {
          local_10 = MySQL::get_ubyte(local_18,1,&local_4e);
          local_10 = local_10 & 0xff;
          if (local_10 == 0) {
            uVar5 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_28,
                               "bool DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)",0x2272,
                               5);
            cMyTrace::operator()
                      (local_28,
                       "DB_LoadCharac::_LoadEventBringUpInfo, get_ubyte(2) ERROR charac_no=%u",uVar5
                      );
            uVar5 = 0;
          }
          else {
            param_1[0x139] = local_4d;
            param_1[0x138] = (SIG_LOAD_CHARAC)(local_4e != '\0');
            uVar5 = 1;
          }
        }
      }
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_48,"bool DB_LoadCharac::_LoadEventBringUpInfo(SIG_LOAD_CHARAC*)",0x225b
                       ,5);
    cMyTrace::operator()
              (local_48,"DB_LoadCharac::_LoadEventBringUpInfo, exec() ERROR charac_no=%u",uVar5);
    uVar5 = 0;
  }
  std::string::~string((string *)&local_4c);
  return uVar5;
}
```
