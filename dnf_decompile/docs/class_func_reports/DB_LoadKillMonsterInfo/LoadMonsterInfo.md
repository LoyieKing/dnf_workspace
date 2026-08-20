# LoadMonsterInfo

`_ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO`

`DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)`

| 类 | 地址 |
|---|---|
| `DB_LoadKillMonsterInfo` | `0x0844159a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844159a  _ZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFO
#           DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)
# range [0x0844159a, 0x084419ab]
0844159a +0x000:  push   %ebp
0844159b +0x001:  mov    %esp,%ebp
0844159d +0x003:  push   %ebx
0844159e +0x004:  sub    $0xa4,%esp
084415a4 +0x00a:  movb   $0x0,-0x19(%ebp)
084415a8 +0x00e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084415ad +0x013:  movl   $0x0,0x8(%esp)
084415b5 +0x01b:  movl   $0x2,0x4(%esp)
084415bd +0x023:  mov    %eax,(%esp)
084415c0 +0x026:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084415c5 +0x02b:  mov    %eax,-0x18(%ebp)
084415c8 +0x02e:  movl   $0x5,-0x14(%ebp)
084415cf +0x035:  mov    0xc(%ebp),%eax
084415d2 +0x038:  mov    0xafc8(%eax),%eax
084415d8 +0x03e:  mov    %eax,0x8(%esp)
084415dc +0x042:  movl   $"seLect boss_info, named_info, apc_boss_info from charac_kill_monster_info where charac_no=%u",0x4(%esp)
084415e4 +0x04a:  mov    -0x18(%ebp),%eax
084415e7 +0x04d:  mov    %eax,(%esp)
084415ea +0x050:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084415ef +0x055:  movl   $0x1,0x4(%esp)
084415f7 +0x05d:  mov    -0x18(%ebp),%eax
084415fa +0x060:  mov    %eax,(%esp)
084415fd +0x063:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08441602 +0x068:  mov    %al,-0x19(%ebp)
08441605 +0x06b:  movzbl -0x19(%ebp),%eax
08441609 +0x06f:  xor    $0x1,%eax
0844160c +0x072:  test   %al,%al
0844160e +0x074:  je     0844165d <+0xc3>
08441610 +0x076:  mov    0xc(%ebp),%eax
08441613 +0x079:  mov    0xafc8(%eax),%ebx
08441619 +0x07f:  movl   $0x5,0xc(%esp)
08441621 +0x087:  movl   $0xa063,0x8(%esp)
08441629 +0x08f:  movl   $&_ZZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
08441631 +0x097:  lea    -0x7c(%ebp),%eax
08441634 +0x09a:  mov    %eax,(%esp)
08441637 +0x09d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844163c +0x0a2:  mov    %ebx,0x8(%esp)
08441640 +0x0a6:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo select, exec() ERROR charac_no=%u",0x4(%esp)
08441648 +0x0ae:  lea    -0x7c(%ebp),%eax
0844164b +0x0b1:  mov    %eax,(%esp)
0844164e +0x0b4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441653 +0x0b9:  mov    $0x0,%eax
08441658 +0x0be:  jmp    084419a2 <+0x408>
0844165d +0x0c3:  mov    -0x18(%ebp),%eax
08441660 +0x0c6:  mov    %eax,(%esp)
08441663 +0x0c9:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08441668 +0x0ce:  test   %eax,%eax
0844166a +0x0d0:  sete   %al
0844166d +0x0d3:  test   %al,%al
0844166f +0x0d5:  je     0844170d <+0x173>
08441675 +0x0db:  mov    0xc(%ebp),%eax
08441678 +0x0de:  mov    0xafc8(%eax),%eax
0844167e +0x0e4:  mov    %eax,0x8(%esp)
08441682 +0x0e8:  movl   $"inSert into charac_kill_monster_info (charac_no) values(%u)",0x4(%esp)
0844168a +0x0f0:  mov    -0x18(%ebp),%eax
0844168d +0x0f3:  mov    %eax,(%esp)
08441690 +0x0f6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441695 +0x0fb:  movl   $0x1,0x4(%esp)
0844169d +0x103:  mov    -0x18(%ebp),%eax
084416a0 +0x106:  mov    %eax,(%esp)
084416a3 +0x109:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084416a8 +0x10e:  mov    %al,-0x19(%ebp)
084416ab +0x111:  movzbl -0x19(%ebp),%eax
084416af +0x115:  xor    $0x1,%eax
084416b2 +0x118:  test   %al,%al
084416b4 +0x11a:  je     08441703 <+0x169>
084416b6 +0x11c:  mov    0xc(%ebp),%eax
084416b9 +0x11f:  mov    0xafc8(%eax),%ebx
084416bf +0x125:  movl   $0x5,0xc(%esp)
084416c7 +0x12d:  movl   $0xa070,0x8(%esp)
084416cf +0x135:  movl   $&_ZZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
084416d7 +0x13d:  lea    -0x6c(%ebp),%eax
084416da +0x140:  mov    %eax,(%esp)
084416dd +0x143:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084416e2 +0x148:  mov    %ebx,0x8(%esp)
084416e6 +0x14c:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo insert, exec() ERROR charac_no=%u",0x4(%esp)
084416ee +0x154:  lea    -0x6c(%ebp),%eax
084416f1 +0x157:  mov    %eax,(%esp)
084416f4 +0x15a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084416f9 +0x15f:  mov    $0x0,%eax
084416fe +0x164:  jmp    084419a2 <+0x408>
08441703 +0x169:  mov    $0x1,%eax
08441708 +0x16e:  jmp    084419a2 <+0x408>
0844170d +0x173:  mov    -0x18(%ebp),%eax
08441710 +0x176:  mov    %eax,(%esp)
08441713 +0x179:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08441718 +0x17e:  mov    %al,-0x19(%ebp)
0844171b +0x181:  movzbl -0x19(%ebp),%eax
0844171f +0x185:  xor    $0x1,%eax
08441722 +0x188:  test   %al,%al
08441724 +0x18a:  je     08441773 <+0x1d9>
08441726 +0x18c:  mov    0xc(%ebp),%eax
08441729 +0x18f:  mov    0xafc8(%eax),%ebx
0844172f +0x195:  movl   $0x5,0xc(%esp)
08441737 +0x19d:  movl   $0xa07a,0x8(%esp)
0844173f +0x1a5:  movl   $&_ZZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
08441747 +0x1ad:  lea    -0x5c(%ebp),%eax
0844174a +0x1b0:  mov    %eax,(%esp)
0844174d +0x1b3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08441752 +0x1b8:  mov    %ebx,0x8(%esp)
08441756 +0x1bc:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo select, fetch() ERROR charac_no=%u",0x4(%esp)
0844175e +0x1c4:  lea    -0x5c(%ebp),%eax
08441761 +0x1c7:  mov    %eax,(%esp)
08441764 +0x1ca:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441769 +0x1cf:  mov    $0x0,%eax
0844176e +0x1d4:  jmp    084419a2 <+0x408>
08441773 +0x1d9:  movl   $0x0,-0x10(%ebp)
0844177a +0x1e0:  mov    -0x10(%ebp),%eax
0844177d +0x1e3:  mov    %eax,0x4(%esp)
08441781 +0x1e7:  mov    -0x18(%ebp),%eax
08441784 +0x1ea:  mov    %eax,(%esp)
08441787 +0x1ed:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
0844178c +0x1f2:  mov    %eax,-0xc(%ebp)
0844178f +0x1f5:  cmpl   $0x0,-0xc(%ebp)
08441793 +0x1f9:  je     0844182a <+0x290>
08441799 +0x1ff:  mov    0xc(%ebp),%eax
0844179c +0x202:  mov    %eax,%edx
0844179e +0x204:  mov    -0x10(%ebp),%eax
084417a1 +0x207:  addl   $0x1,-0x10(%ebp)
084417a5 +0x20b:  movl   $0x0,0x10(%esp)
084417ad +0x213:  movl   $0x1d4c,0xc(%esp)
084417b5 +0x21b:  mov    %edx,0x8(%esp)
084417b9 +0x21f:  mov    %eax,0x4(%esp)
084417bd +0x223:  mov    -0x18(%ebp),%eax
084417c0 +0x226:  mov    %eax,(%esp)
084417c3 +0x229:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
084417c8 +0x22e:  mov    %al,-0x19(%ebp)
084417cb +0x231:  movzbl -0x19(%ebp),%eax
084417cf +0x235:  xor    $0x1,%eax
084417d2 +0x238:  test   %al,%al
084417d4 +0x23a:  je     0844182e <+0x294>
084417d6 +0x23c:  mov    0xc(%ebp),%eax
084417d9 +0x23f:  mov    0xafc8(%eax),%ebx
084417df +0x245:  movl   $0x5,0xc(%esp)
084417e7 +0x24d:  movl   $0xa087,0x8(%esp)
084417ef +0x255:  movl   $&_ZZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
084417f7 +0x25d:  lea    -0x4c(%ebp),%eax
084417fa +0x260:  mov    %eax,(%esp)
084417fd +0x263:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08441802 +0x268:  mov    %ebx,0xc(%esp)
08441806 +0x26c:  mov    -0x10(%ebp),%eax
08441809 +0x26f:  mov    %eax,0x8(%esp)
0844180d +0x273:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u",0x4(%esp)
08441815 +0x27b:  lea    -0x4c(%ebp),%eax
08441818 +0x27e:  mov    %eax,(%esp)
0844181b +0x281:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441820 +0x286:  mov    $0x0,%eax
08441825 +0x28b:  jmp    084419a2 <+0x408>
0844182a +0x290:  addl   $0x1,-0x10(%ebp)
0844182e +0x294:  mov    -0x10(%ebp),%eax
08441831 +0x297:  mov    %eax,0x4(%esp)
08441835 +0x29b:  mov    -0x18(%ebp),%eax
08441838 +0x29e:  mov    %eax,(%esp)
0844183b +0x2a1:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
08441840 +0x2a6:  mov    %eax,-0xc(%ebp)
08441843 +0x2a9:  cmpl   $0x0,-0xc(%ebp)
08441847 +0x2ad:  je     084418e3 <+0x349>
0844184d +0x2b3:  mov    0xc(%ebp),%eax
08441850 +0x2b6:  add    $0x1d4c,%eax
08441855 +0x2bb:  mov    %eax,%edx
08441857 +0x2bd:  mov    -0x10(%ebp),%eax
0844185a +0x2c0:  addl   $0x1,-0x10(%ebp)
0844185e +0x2c4:  movl   $0x0,0x10(%esp)
08441866 +0x2cc:  movl   $0x7530,0xc(%esp)
0844186e +0x2d4:  mov    %edx,0x8(%esp)
08441872 +0x2d8:  mov    %eax,0x4(%esp)
08441876 +0x2dc:  mov    -0x18(%ebp),%eax
08441879 +0x2df:  mov    %eax,(%esp)
0844187c +0x2e2:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08441881 +0x2e7:  mov    %al,-0x19(%ebp)
08441884 +0x2ea:  movzbl -0x19(%ebp),%eax
08441888 +0x2ee:  xor    $0x1,%eax
0844188b +0x2f1:  test   %al,%al
0844188d +0x2f3:  je     084418e7 <+0x34d>
0844188f +0x2f5:  mov    0xc(%ebp),%eax
08441892 +0x2f8:  mov    0xafc8(%eax),%ebx
08441898 +0x2fe:  movl   $0x5,0xc(%esp)
084418a0 +0x306:  movl   $0xa09b,0x8(%esp)
084418a8 +0x30e:  movl   $&_ZZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
084418b0 +0x316:  lea    -0x3c(%ebp),%eax
084418b3 +0x319:  mov    %eax,(%esp)
084418b6 +0x31c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084418bb +0x321:  mov    %ebx,0xc(%esp)
084418bf +0x325:  mov    -0x10(%ebp),%eax
084418c2 +0x328:  mov    %eax,0x8(%esp)
084418c6 +0x32c:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u",0x4(%esp)
084418ce +0x334:  lea    -0x3c(%ebp),%eax
084418d1 +0x337:  mov    %eax,(%esp)
084418d4 +0x33a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084418d9 +0x33f:  mov    $0x0,%eax
084418de +0x344:  jmp    084419a2 <+0x408>
084418e3 +0x349:  addl   $0x1,-0x10(%ebp)
084418e7 +0x34d:  mov    -0x10(%ebp),%eax
084418ea +0x350:  mov    %eax,0x4(%esp)
084418ee +0x354:  mov    -0x18(%ebp),%eax
084418f1 +0x357:  mov    %eax,(%esp)
084418f4 +0x35a:  call   081253de <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x141>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x141
084418f9 +0x35f:  mov    %eax,-0xc(%ebp)
084418fc +0x362:  cmpl   $0x0,-0xc(%ebp)
08441900 +0x366:  je     08441999 <+0x3ff>
08441906 +0x36c:  mov    0xc(%ebp),%eax
08441909 +0x36f:  add    $0x927c,%eax
0844190e +0x374:  mov    %eax,%edx
08441910 +0x376:  mov    -0x10(%ebp),%eax
08441913 +0x379:  addl   $0x1,-0x10(%ebp)
08441917 +0x37d:  movl   $0x0,0x10(%esp)
0844191f +0x385:  movl   $0x1d4c,0xc(%esp)
08441927 +0x38d:  mov    %edx,0x8(%esp)
0844192b +0x391:  mov    %eax,0x4(%esp)
0844192f +0x395:  mov    -0x18(%ebp),%eax
08441932 +0x398:  mov    %eax,(%esp)
08441935 +0x39b:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0844193a +0x3a0:  mov    %al,-0x19(%ebp)
0844193d +0x3a3:  movzbl -0x19(%ebp),%eax
08441941 +0x3a7:  xor    $0x1,%eax
08441944 +0x3aa:  test   %al,%al
08441946 +0x3ac:  je     0844199d <+0x403>
08441948 +0x3ae:  mov    0xc(%ebp),%eax
0844194b +0x3b1:  mov    0xafc8(%eax),%ebx
08441951 +0x3b7:  movl   $0x5,0xc(%esp)
08441959 +0x3bf:  movl   $0xa0af,0x8(%esp)
08441961 +0x3c7:  movl   $&_ZZN22DB_LoadKillMonsterInfo15LoadMonsterInfoEP26SIG_LOAD_KILL_MONSTER_INFOE19__PRETTY_FUNCTION__,0x4(%esp)
08441969 +0x3cf:  lea    -0x2c(%ebp),%eax
0844196c +0x3d2:  mov    %eax,(%esp)
0844196f +0x3d5:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08441974 +0x3da:  mov    %ebx,0xc(%esp)
08441978 +0x3de:  mov    -0x10(%ebp),%eax
0844197b +0x3e1:  mov    %eax,0x8(%esp)
0844197f +0x3e5:  movl   $"DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u",0x4(%esp)
08441987 +0x3ed:  lea    -0x2c(%ebp),%eax
0844198a +0x3f0:  mov    %eax,(%esp)
0844198d +0x3f3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08441992 +0x3f8:  mov    $0x0,%eax
08441997 +0x3fd:  jmp    084419a2 <+0x408>
08441999 +0x3ff:  addl   $0x1,-0x10(%ebp)
0844199d +0x403:  mov    $0x1,%eax
084419a2 +0x408:  add    $0xa4,%esp
084419a8 +0x40e:  pop    %ebx
084419a9 +0x40f:  pop    %ebp
084419aa +0x410:  ret
084419ab +0x411:  nop
```

## 反编译 C

```c
// DB_LoadKillMonsterInfo::LoadMonsterInfo @ 0x844159a

/* DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*) */

undefined4 __thiscall
DB_LoadKillMonsterInfo::LoadMonsterInfo
          (DB_LoadKillMonsterInfo *this,SIG_LOAD_KILL_MONSTER_INFO *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [19];
  char local_1d;
  MySQL *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_1d = 0;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_18 = 5;
  MySQL::set_query(local_1c,
                   "seLect boss_info, named_info, apc_boss_info from charac_kill_monster_info where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 45000));
  local_1d = MySQL::exec(local_1c,true);
  if (local_1d == '\x01') {
    iVar2 = MySQL::get_n_rows(local_1c);
    if (iVar2 == 0) {
      MySQL::set_query(local_1c,"inSert into charac_kill_monster_info (charac_no) values(%u)",
                       *(undefined4 *)(param_1 + 45000));
      local_1d = MySQL::exec(local_1c,true);
      if (local_1d == '\x01') {
        uVar1 = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 45000);
        cMyTrace::cMyTrace(local_70,
                           "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                           ,0xa070,5);
        cMyTrace::operator()
                  (local_70,
                   "DB_LoadKillMonsterInfo::LoadMonsterInfo insert, exec() ERROR charac_no=%u",uVar1
                  );
        uVar1 = 0;
      }
    }
    else {
      local_1d = MySQL::fetch(local_1c);
      if (local_1d == '\x01') {
        local_14 = 0;
        local_10 = MySQL::get_binary_length(local_1c,0);
        iVar2 = local_14;
        if (local_10 == 0) {
          local_14 = local_14 + 1;
        }
        else {
          local_14 = local_14 + 1;
          local_1d = get_compressed_blob_data(local_1c,iVar2,(char *)param_1,0x1d4c,0);
          if (local_1d != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 45000);
            cMyTrace::cMyTrace(local_50,
                               "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                               ,0xa087,5);
            cMyTrace::operator()
                      (local_50,
                       "DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u"
                       ,local_14,uVar1);
            return 0;
          }
        }
        local_10 = MySQL::get_binary_length(local_1c,local_14);
        iVar2 = local_14;
        if (local_10 == 0) {
          local_14 = local_14 + 1;
        }
        else {
          local_14 = local_14 + 1;
          local_1d = get_compressed_blob_data(local_1c,iVar2,(char *)(param_1 + 0x1d4c),30000,0);
          if (local_1d != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 45000);
            cMyTrace::cMyTrace(local_40,
                               "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                               ,0xa09b,5);
            cMyTrace::operator()
                      (local_40,
                       "DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u"
                       ,local_14,uVar1);
            return 0;
          }
        }
        local_10 = MySQL::get_binary_length(local_1c,local_14);
        iVar2 = local_14;
        if (local_10 != 0) {
          local_14 = local_14 + 1;
          local_1d = get_compressed_blob_data(local_1c,iVar2,(char *)(param_1 + 0x927c),0x1d4c,0);
          if (local_1d != '\x01') {
            uVar1 = *(undefined4 *)(param_1 + 45000);
            cMyTrace::cMyTrace(local_30,
                               "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                               ,0xa0af,5);
            cMyTrace::operator()
                      (local_30,
                       "DB_LoadKillMonsterInfo::LoadMonsterInfo uncompress_zip(%u) ERROR charac_no=%u"
                       ,local_14,uVar1);
            return 0;
          }
        }
        uVar1 = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 45000);
        cMyTrace::cMyTrace(local_60,
                           "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)"
                           ,0xa07a,5);
        cMyTrace::operator()
                  (local_60,
                   "DB_LoadKillMonsterInfo::LoadMonsterInfo select, fetch() ERROR charac_no=%u",
                   uVar1);
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 45000);
    cMyTrace::cMyTrace(local_80,
                       "bool DB_LoadKillMonsterInfo::LoadMonsterInfo(SIG_LOAD_KILL_MONSTER_INFO*)",
                       0xa063,5);
    cMyTrace::operator()
              (local_80,"DB_LoadKillMonsterInfo::LoadMonsterInfo select, exec() ERROR charac_no=%u",
               uVar1);
    uVar1 = 0;
  }
  return uVar1;
}
```
