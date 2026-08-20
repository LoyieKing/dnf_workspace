# InsertLimitCreateNewCharac

`_ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084016ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084016ae  _ZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*)
# range [0x084016ae, 0x08401863]
084016ae +0x000:  push   %ebp
084016af +0x001:  mov    %esp,%ebp
084016b1 +0x003:  push   %edi
084016b2 +0x004:  push   %esi
084016b3 +0x005:  push   %ebx
084016b4 +0x006:  sub    $0x17c,%esp
084016ba +0x00c:  mov    0xc(%ebp),%eax
084016bd +0x00f:  mov    (%eax),%edx
084016bf +0x011:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
084016c4 +0x016:  mov    %edx,0x4(%esp)
084016c8 +0x01a:  mov    %eax,(%esp)
084016cb +0x01d:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
084016d0 +0x022:  test   %al,%al
084016d2 +0x024:  je     084016de <+0x30>
084016d4 +0x026:  mov    $0x1,%eax
084016d9 +0x02b:  jmp    08401859 <+0x1ab>
084016de +0x030:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084016e3 +0x035:  movl   $0x0,0x8(%esp)
084016eb +0x03d:  movl   $0x1,0x4(%esp)
084016f3 +0x045:  mov    %eax,(%esp)
084016f6 +0x048:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084016fb +0x04d:  mov    %eax,-0x20(%ebp)
084016fe +0x050:  mov    0xc(%ebp),%eax
08401701 +0x053:  mov    (%eax),%eax
08401703 +0x055:  movl   $0x0,0x4(%esp)
0840170b +0x05d:  mov    %eax,(%esp)
0840170e +0x060:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401713 +0x065:  mov    %eax,0x8(%esp)
08401717 +0x069:  movl   $"inSert into limit_create_character(m_id, create_time) values(%s, now() )",0x4(%esp)
0840171f +0x071:  mov    -0x20(%ebp),%eax
08401722 +0x074:  mov    %eax,(%esp)
08401725 +0x077:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840172a +0x07c:  movl   $0x1,0x4(%esp)
08401732 +0x084:  mov    -0x20(%ebp),%eax
08401735 +0x087:  mov    %eax,(%esp)
08401738 +0x08a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840173d +0x08f:  xor    $0x1,%eax
08401740 +0x092:  test   %al,%al
08401742 +0x094:  je     0840175b <+0xad>
08401744 +0x096:  mov    0xc(%ebp),%eax
08401747 +0x099:  movl   $0x5,0x5344(%eax)
08401751 +0x0a3:  mov    $0x0,%eax
08401756 +0x0a8:  jmp    08401859 <+0x1ab>
0840175b +0x0ad:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08401762 +0x0b4:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08401767 +0x0b9:  mov    %eax,-0x34(%ebp)
0840176a +0x0bc:  lea    -0x60(%ebp),%eax
0840176d +0x0bf:  mov    %eax,0x4(%esp)
08401771 +0x0c3:  lea    -0x34(%ebp),%eax
08401774 +0x0c6:  mov    %eax,(%esp)
08401777 +0x0c9:  call   0807e360 <_init+0xc58>
0840177c +0x0ce:  mov    %eax,-0x1c(%ebp)
0840177f +0x0d1:  mov    -0x1c(%ebp),%eax
08401782 +0x0d4:  mov    (%eax),%ebx
08401784 +0x0d6:  mov    -0x1c(%ebp),%eax
08401787 +0x0d9:  mov    0x4(%eax),%ecx
0840178a +0x0dc:  mov    -0x1c(%ebp),%eax
0840178d +0x0df:  mov    0x8(%eax),%edx
08401790 +0x0e2:  mov    -0x1c(%ebp),%eax
08401793 +0x0e5:  mov    0xc(%eax),%eax
08401796 +0x0e8:  mov    -0x1c(%ebp),%esi
08401799 +0x0eb:  mov    0x10(%esi),%esi
0840179c +0x0ee:  lea    0x1(%esi),%edi
0840179f +0x0f1:  mov    -0x1c(%ebp),%esi
084017a2 +0x0f4:  mov    0x14(%esi),%esi
084017a5 +0x0f7:  add    $0x76c,%esi
084017ab +0x0fd:  mov    %ebx,0x1c(%esp)
084017af +0x101:  mov    %ecx,0x18(%esp)
084017b3 +0x105:  mov    %edx,0x14(%esp)
084017b7 +0x109:  mov    %eax,0x10(%esp)
084017bb +0x10d:  mov    %edi,0xc(%esp)
084017bf +0x111:  mov    %esi,0x8(%esp)
084017c3 +0x115:  movl   $"%04d-%02d-%02d %02d:%02d:%02d",0x4(%esp)
084017cb +0x11d:  lea    -0x160(%ebp),%eax
084017d1 +0x123:  mov    %eax,(%esp)
084017d4 +0x126:  call   0807e440 <_init+0xd38>
084017d9 +0x12b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084017de +0x130:  mov    %eax,(%esp)
084017e1 +0x133:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
084017e6 +0x138:  mov    %eax,%esi
084017e8 +0x13a:  mov    0xc(%ebp),%eax
084017eb +0x13d:  mov    0x5348(%eax),%edi
084017f1 +0x143:  mov    0xc(%ebp),%eax
084017f4 +0x146:  mov    (%eax),%eax
084017f6 +0x148:  movl   $0x0,0x4(%esp)
084017fe +0x150:  mov    %eax,(%esp)
08401801 +0x153:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401806 +0x158:  mov    %eax,%ebx
08401808 +0x15a:  movl   $0x0,0xc(%esp)
08401810 +0x162:  movl   $0xe76,0x8(%esp)
08401818 +0x16a:  movl   $&_ZZN15DB_CreateCharac26InsertLimitCreateNewCharacEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x4(%esp)
08401820 +0x172:  lea    -0x30(%ebp),%eax
08401823 +0x175:  mov    %eax,(%esp)
08401826 +0x178:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840182b +0x17d:  mov    %esi,0x14(%esp)
0840182f +0x181:  lea    -0x160(%ebp),%eax
08401835 +0x187:  mov    %eax,0x10(%esp)
08401839 +0x18b:  mov    %edi,0xc(%esp)
0840183d +0x18f:  mov    %ebx,0x8(%esp)
08401841 +0x193:  movl   $"[LIMIT NEW CHARAC] %s,%d,%s,%d",0x4(%esp)
08401849 +0x19b:  lea    -0x30(%ebp),%eax
0840184c +0x19e:  mov    %eax,(%esp)
0840184f +0x1a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08401854 +0x1a6:  mov    $0x1,%eax
08401859 +0x1ab:  add    $0x17c,%esp
0840185f +0x1b1:  pop    %ebx
08401860 +0x1b2:  pop    %esi
08401861 +0x1b3:  pop    %edi
08401862 +0x1b4:  pop    %ebp
08401863 +0x1b5:  ret
```

## 反编译 C

```c
// DB_CreateCharac::InsertLimitCreateNewCharac @ 0x84016ae

/* DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::InsertLimitCreateNewCharac(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CEnvironment *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_164 [256];
  tm local_64;
  time_t local_38;
  cMyTrace local_34 [16];
  MySQL *local_24;
  tm *local_20;
  
  cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*(uint *)param_1);
  if (cVar1 == '\0') {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar2 = NumberToString(*(uint *)param_1,0);
    MySQL::set_query(local_24,
                     "inSert into limit_create_character(m_id, create_time) values(%s, now() )",
                     uVar2);
    cVar1 = MySQL::exec(local_24,true);
    if (cVar1 == '\x01') {
      local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      local_20 = localtime_r(&local_38,&local_64);
      sprintf(local_164,"%04d-%02d-%02d %02d:%02d:%02d",local_20->tm_year + 0x76c,
              local_20->tm_mon + 1,local_20->tm_mday,local_20->tm_hour,local_20->tm_min,
              local_20->tm_sec);
      this_00 = (CEnvironment *)G_CEnvironment();
      uVar3 = CEnvironment::get_server_group(this_00);
      uVar2 = *(undefined4 *)(param_1 + 0x5348);
      uVar4 = NumberToString(*(uint *)param_1,0);
      cMyTrace::cMyTrace(local_34,
                         "bool DB_CreateCharac::InsertLimitCreateNewCharac(SIG_CREATE_CHARAC*)",
                         0xe76,0);
      cMyTrace::operator()(local_34,"[LIMIT NEW CHARAC] %s,%d,%s,%d",uVar4,uVar2,local_164,uVar3);
      uVar2 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 5;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
