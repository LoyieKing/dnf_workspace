# LoadCharacItemStat

`_ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08445660` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08445660  _ZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)
# range [0x08445660, 0x084458c5]
08445660 +0x000:  push   %ebp
08445661 +0x001:  mov    %esp,%ebp
08445663 +0x003:  push   %ebx
08445664 +0x004:  sub    $0x64,%esp
08445667 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844566c +0x00c:  movl   $0x0,0x8(%esp)
08445674 +0x014:  movl   $0x2,0x4(%esp)
0844567c +0x01c:  mov    %eax,(%esp)
0844567f +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08445684 +0x024:  mov    %eax,-0x10(%ebp)
08445687 +0x027:  mov    0xc(%ebp),%eax
0844568a +0x02a:  mov    0x4(%eax),%eax
0844568d +0x02d:  mov    %eax,0x8(%esp)
08445691 +0x031:  movl   $"seLect cooltime_item, effect_item, check_flag from charac_item_stat where charac_no=%u",0x4(%esp)
08445699 +0x039:  mov    -0x10(%ebp),%eax
0844569c +0x03c:  mov    %eax,(%esp)
0844569f +0x03f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084456a4 +0x044:  movl   $0x1,0x4(%esp)
084456ac +0x04c:  mov    -0x10(%ebp),%eax
084456af +0x04f:  mov    %eax,(%esp)
084456b2 +0x052:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084456b7 +0x057:  mov    %al,-0x11(%ebp)
084456ba +0x05a:  movzbl -0x11(%ebp),%eax
084456be +0x05e:  xor    $0x1,%eax
084456c1 +0x061:  test   %al,%al
084456c3 +0x063:  je     084456cf <+0x6f>
084456c5 +0x065:  mov    $0x0,%eax
084456ca +0x06a:  jmp    084458c0 <+0x260>
084456cf +0x06f:  mov    -0x10(%ebp),%eax
084456d2 +0x072:  mov    %eax,(%esp)
084456d5 +0x075:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084456da +0x07a:  test   %eax,%eax
084456dc +0x07c:  sete   %al
084456df +0x07f:  test   %al,%al
084456e1 +0x081:  je     084456ed <+0x8d>
084456e3 +0x083:  mov    $0x1,%eax
084456e8 +0x088:  jmp    084458c0 <+0x260>
084456ed +0x08d:  mov    -0x10(%ebp),%eax
084456f0 +0x090:  mov    %eax,(%esp)
084456f3 +0x093:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084456f8 +0x098:  mov    %al,-0x11(%ebp)
084456fb +0x09b:  movzbl -0x11(%ebp),%eax
084456ff +0x09f:  xor    $0x1,%eax
08445702 +0x0a2:  test   %al,%al
08445704 +0x0a4:  je     08445710 <+0xb0>
08445706 +0x0a6:  mov    $0x0,%eax
0844570b +0x0ab:  jmp    084458c0 <+0x260>
08445710 +0x0b0:  movl   $0x0,-0xc(%ebp)
08445717 +0x0b7:  mov    0xc(%ebp),%eax
0844571a +0x0ba:  lea    0x230c(%eax),%edx
08445720 +0x0c0:  mov    -0xc(%ebp),%eax
08445723 +0x0c3:  addl   $0x1,-0xc(%ebp)
08445727 +0x0c7:  movl   $0x194,0xc(%esp)
0844572f +0x0cf:  mov    %edx,0x8(%esp)
08445733 +0x0d3:  mov    %eax,0x4(%esp)
08445737 +0x0d7:  mov    -0x10(%ebp),%eax
0844573a +0x0da:  mov    %eax,(%esp)
0844573d +0x0dd:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
08445742 +0x0e2:  mov    %al,-0x11(%ebp)
08445745 +0x0e5:  movzbl -0x11(%ebp),%eax
08445749 +0x0e9:  xor    $0x1,%eax
0844574c +0x0ec:  test   %al,%al
0844574e +0x0ee:  je     084457a1 <+0x141>
08445750 +0x0f0:  mov    0xc(%ebp),%eax
08445753 +0x0f3:  mov    0x4(%eax),%ebx
08445756 +0x0f6:  movl   $0x5,0xc(%esp)
0844575e +0x0fe:  movl   $0xac8a,0x8(%esp)
08445766 +0x106:  movl   $&_ZZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0844576e +0x10e:  lea    -0x44(%ebp),%eax
08445771 +0x111:  mov    %eax,(%esp)
08445774 +0x114:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08445779 +0x119:  mov    %ebx,0xc(%esp)
0844577d +0x11d:  mov    -0xc(%ebp),%eax
08445780 +0x120:  mov    %eax,0x8(%esp)
08445784 +0x124:  movl   $"DB_LoadEtc::LoadCharacItemStat cooltime, get(%d) ERROR charac_no=%u",0x4(%esp)
0844578c +0x12c:  lea    -0x44(%ebp),%eax
0844578f +0x12f:  mov    %eax,(%esp)
08445792 +0x132:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08445797 +0x137:  mov    $0x0,%eax
0844579c +0x13c:  jmp    084458c0 <+0x260>
084457a1 +0x141:  mov    0xc(%ebp),%eax
084457a4 +0x144:  lea    0x24a4(%eax),%edx
084457aa +0x14a:  mov    -0xc(%ebp),%eax
084457ad +0x14d:  addl   $0x1,-0xc(%ebp)
084457b1 +0x151:  movl   $0x194,0xc(%esp)
084457b9 +0x159:  mov    %edx,0x8(%esp)
084457bd +0x15d:  mov    %eax,0x4(%esp)
084457c1 +0x161:  mov    -0x10(%ebp),%eax
084457c4 +0x164:  mov    %eax,(%esp)
084457c7 +0x167:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084457cc +0x16c:  mov    %al,-0x11(%ebp)
084457cf +0x16f:  movzbl -0x11(%ebp),%eax
084457d3 +0x173:  xor    $0x1,%eax
084457d6 +0x176:  test   %al,%al
084457d8 +0x178:  je     0844582b <+0x1cb>
084457da +0x17a:  mov    0xc(%ebp),%eax
084457dd +0x17d:  mov    0x4(%eax),%ebx
084457e0 +0x180:  movl   $0x5,0xc(%esp)
084457e8 +0x188:  movl   $0xac91,0x8(%esp)
084457f0 +0x190:  movl   $&_ZZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084457f8 +0x198:  lea    -0x34(%ebp),%eax
084457fb +0x19b:  mov    %eax,(%esp)
084457fe +0x19e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08445803 +0x1a3:  mov    %ebx,0xc(%esp)
08445807 +0x1a7:  mov    -0xc(%ebp),%eax
0844580a +0x1aa:  mov    %eax,0x8(%esp)
0844580e +0x1ae:  movl   $"DB_LoadEtc::LoadCharacItemStat effect_item, get(%d) ERROR charac_no=%u",0x4(%esp)
08445816 +0x1b6:  lea    -0x34(%ebp),%eax
08445819 +0x1b9:  mov    %eax,(%esp)
0844581c +0x1bc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08445821 +0x1c1:  mov    $0x0,%eax
08445826 +0x1c6:  jmp    084458c0 <+0x260>
0844582b +0x1cb:  mov    0xc(%ebp),%eax
0844582e +0x1ce:  add    $0xd740,%eax
08445833 +0x1d3:  mov    %eax,%edx
08445835 +0x1d5:  mov    -0xc(%ebp),%eax
08445838 +0x1d8:  addl   $0x1,-0xc(%ebp)
0844583c +0x1dc:  movl   $0x0,0x10(%esp)
08445844 +0x1e4:  movl   $0x1388,0xc(%esp)
0844584c +0x1ec:  mov    %edx,0x8(%esp)
08445850 +0x1f0:  mov    %eax,0x4(%esp)
08445854 +0x1f4:  mov    -0x10(%ebp),%eax
08445857 +0x1f7:  mov    %eax,(%esp)
0844585a +0x1fa:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0844585f +0x1ff:  mov    %al,-0x11(%ebp)
08445862 +0x202:  movzbl -0x11(%ebp),%eax
08445866 +0x206:  xor    $0x1,%eax
08445869 +0x209:  test   %al,%al
0844586b +0x20b:  je     084458bb <+0x25b>
0844586d +0x20d:  mov    0xc(%ebp),%eax
08445870 +0x210:  mov    0x4(%eax),%ebx
08445873 +0x213:  movl   $0x5,0xc(%esp)
0844587b +0x21b:  movl   $0xac98,0x8(%esp)
08445883 +0x223:  movl   $&_ZZN10DB_LoadEtc18LoadCharacItemStatEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0844588b +0x22b:  lea    -0x24(%ebp),%eax
0844588e +0x22e:  mov    %eax,(%esp)
08445891 +0x231:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08445896 +0x236:  mov    %ebx,0xc(%esp)
0844589a +0x23a:  mov    -0xc(%ebp),%eax
0844589d +0x23d:  mov    %eax,0x8(%esp)
084458a1 +0x241:  movl   $"DB_LoadEtc::LoadCharacItemStat item_dictionary, get(%d) ERROR charac_no=%u",0x4(%esp)
084458a9 +0x249:  lea    -0x24(%ebp),%eax
084458ac +0x24c:  mov    %eax,(%esp)
084458af +0x24f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084458b4 +0x254:  mov    $0x0,%eax
084458b9 +0x259:  jmp    084458c0 <+0x260>
084458bb +0x25b:  mov    $0x1,%eax
084458c0 +0x260:  add    $0x64,%esp
084458c3 +0x263:  pop    %ebx
084458c4 +0x264:  pop    %ebp
084458c5 +0x265:  ret
```

## 反编译 C

```c
// DB_LoadEtc::LoadCharacItemStat @ 0x8445660

/* DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadCharacItemStat(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(local_14,
                   "seLect cooltime_item, effect_item, check_flag from charac_item_stat where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  local_15 = MySQL::exec(local_14,true);
  if (local_15 == '\x01') {
    iVar2 = MySQL::get_n_rows(local_14);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      local_15 = MySQL::fetch(local_14);
      if (local_15 == '\x01') {
        local_10 = 1;
        local_15 = MySQL::get_binary(local_14,0,param_1 + 0x230c,0x194);
        iVar2 = local_10;
        if (local_15 == '\x01') {
          local_10 = local_10 + 1;
          local_15 = MySQL::get_binary(local_14,iVar2,param_1 + 0x24a4,0x194);
          iVar2 = local_10;
          if (local_15 == '\x01') {
            local_10 = local_10 + 1;
            local_15 = get_compressed_blob_data(local_14,iVar2,(char *)(param_1 + 0xd740),5000,0);
            if (local_15 == '\x01') {
              uVar1 = 1;
            }
            else {
              uVar1 = *(undefined4 *)(param_1 + 4);
              cMyTrace::cMyTrace(local_28,"bool DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)",
                                 0xac98,5);
              cMyTrace::operator()
                        (local_28,
                         "DB_LoadEtc::LoadCharacItemStat item_dictionary, get(%d) ERROR charac_no=%u"
                         ,local_10,uVar1);
              uVar1 = 0;
            }
          }
          else {
            uVar1 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_38,"bool DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)",0xac91,
                               5);
            cMyTrace::operator()
                      (local_38,
                       "DB_LoadEtc::LoadCharacItemStat effect_item, get(%d) ERROR charac_no=%u",
                       local_10,uVar1);
            uVar1 = 0;
          }
        }
        else {
          uVar1 = *(undefined4 *)(param_1 + 4);
          cMyTrace::cMyTrace(local_48,"bool DB_LoadEtc::LoadCharacItemStat(SIG_LOAD_ETC*)",0xac8a,5)
          ;
          cMyTrace::operator()
                    (local_48,"DB_LoadEtc::LoadCharacItemStat cooltime, get(%d) ERROR charac_no=%u",
                     local_10,uVar1);
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
