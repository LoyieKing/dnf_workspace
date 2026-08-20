# CheckLimitCreateNewCharac

`_ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb`

`DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401922` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401922  _ZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACb
#           DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)
# range [0x08401922, 0x08401b99]
08401922 +0x000:  push   %ebp
08401923 +0x001:  mov    %esp,%ebp
08401925 +0x003:  push   %edi
08401926 +0x004:  push   %esi
08401927 +0x005:  push   %ebx
08401928 +0x006:  sub    $0x9c,%esp
0840192e +0x00c:  mov    0x10(%ebp),%eax
08401931 +0x00f:  mov    %al,-0x7c(%ebp)
08401934 +0x012:  mov    0xc(%ebp),%eax
08401937 +0x015:  mov    (%eax),%edx
08401939 +0x017:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%eax
0840193e +0x01c:  mov    %edx,0x4(%esp)
08401942 +0x020:  mov    %eax,(%esp)
08401945 +0x023:  call   08109346 <_ZN8WongWork11CGMAccounts4isGMEj>  ; WongWork::CGMAccounts::isGM(unsigned int)
0840194a +0x028:  test   %al,%al
0840194c +0x02a:  je     08401958 <+0x36>
0840194e +0x02c:  mov    $0x1,%eax
08401953 +0x031:  jmp    08401b8e <+0x26c>
08401958 +0x036:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840195d +0x03b:  movl   $0x0,0x8(%esp)
08401965 +0x043:  movl   $0x1,0x4(%esp)
0840196d +0x04b:  mov    %eax,(%esp)
08401970 +0x04e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08401975 +0x053:  mov    %eax,-0x28(%ebp)
08401978 +0x056:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0840197f +0x05d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08401984 +0x062:  mov    %eax,-0x40(%ebp)
08401987 +0x065:  lea    -0x74(%ebp),%eax
0840198a +0x068:  mov    %eax,0x4(%esp)
0840198e +0x06c:  lea    -0x40(%ebp),%eax
08401991 +0x06f:  mov    %eax,(%esp)
08401994 +0x072:  call   0807e360 <_init+0xc58>
08401999 +0x077:  movl   $0x0,-0x6c(%ebp)
084019a0 +0x07e:  movl   $0x0,-0x70(%ebp)
084019a7 +0x085:  movl   $0x0,-0x74(%ebp)
084019ae +0x08c:  lea    -0x74(%ebp),%eax
084019b1 +0x08f:  mov    %eax,(%esp)
084019b4 +0x092:  call   0807e820 <_init+0x1118>
084019b9 +0x097:  mov    %eax,-0x40(%ebp)
084019bc +0x09a:  movl   $0x0,-0x44(%ebp)
084019c3 +0x0a1:  movl   $0x0,-0x48(%ebp)
084019ca +0x0a8:  mov    0xc(%ebp),%eax
084019cd +0x0ab:  mov    (%eax),%eax
084019cf +0x0ad:  movl   $0x0,0x4(%esp)
084019d7 +0x0b5:  mov    %eax,(%esp)
084019da +0x0b8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084019df +0x0bd:  mov    %eax,0x8(%esp)
084019e3 +0x0c1:  movl   $"seLect count, unix_timestamp(last_access_time) from limit_create_character where m_id=%s",0x4(%esp)
084019eb +0x0c9:  mov    -0x28(%ebp),%eax
084019ee +0x0cc:  mov    %eax,(%esp)
084019f1 +0x0cf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084019f6 +0x0d4:  movl   $0x1,0x4(%esp)
084019fe +0x0dc:  mov    -0x28(%ebp),%eax
08401a01 +0x0df:  mov    %eax,(%esp)
08401a04 +0x0e2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401a09 +0x0e7:  xor    $0x1,%eax
08401a0c +0x0ea:  test   %al,%al
08401a0e +0x0ec:  je     08401a27 <+0x105>
08401a10 +0x0ee:  mov    0xc(%ebp),%eax
08401a13 +0x0f1:  movl   $0x2,0x5344(%eax)
08401a1d +0x0fb:  mov    $0x0,%eax
08401a22 +0x100:  jmp    08401b8e <+0x26c>
08401a27 +0x105:  mov    -0x28(%ebp),%eax
08401a2a +0x108:  mov    %eax,(%esp)
08401a2d +0x10b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08401a32 +0x110:  mov    %eax,-0x24(%ebp)
08401a35 +0x113:  cmpl   $0x0,-0x24(%ebp)
08401a39 +0x117:  jne    08401a45 <+0x123>
08401a3b +0x119:  mov    $0x1,%eax
08401a40 +0x11e:  jmp    08401b8e <+0x26c>
08401a45 +0x123:  movl   $0x0,-0x20(%ebp)
08401a4c +0x12a:  movl   $0x0,-0x1c(%ebp)
08401a53 +0x131:  jmp    08401b6f <+0x24d>
08401a58 +0x136:  mov    -0x28(%ebp),%eax
08401a5b +0x139:  mov    %eax,(%esp)
08401a5e +0x13c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08401a63 +0x141:  mov    %al,-0x29(%ebp)
08401a66 +0x144:  movzbl -0x29(%ebp),%eax
08401a6a +0x148:  xor    $0x1,%eax
08401a6d +0x14b:  test   %al,%al
08401a6f +0x14d:  jne    08401b82 <+0x260>
08401a75 +0x153:  lea    -0x48(%ebp),%eax
08401a78 +0x156:  mov    %eax,0x8(%esp)
08401a7c +0x15a:  movl   $0x0,0x4(%esp)
08401a84 +0x162:  mov    -0x28(%ebp),%eax
08401a87 +0x165:  mov    %eax,(%esp)
08401a8a +0x168:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08401a8f +0x16d:  mov    %al,-0x29(%ebp)
08401a92 +0x170:  movzbl -0x29(%ebp),%eax
08401a96 +0x174:  xor    $0x1,%eax
08401a99 +0x177:  test   %al,%al
08401a9b +0x179:  jne    08401b85 <+0x263>
08401aa1 +0x17f:  lea    -0x44(%ebp),%eax
08401aa4 +0x182:  mov    %eax,0x8(%esp)
08401aa8 +0x186:  movl   $0x1,0x4(%esp)
08401ab0 +0x18e:  mov    -0x28(%ebp),%eax
08401ab3 +0x191:  mov    %eax,(%esp)
08401ab6 +0x194:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08401abb +0x199:  mov    %al,-0x29(%ebp)
08401abe +0x19c:  movzbl -0x29(%ebp),%eax
08401ac2 +0x1a0:  xor    $0x1,%eax
08401ac5 +0x1a3:  test   %al,%al
08401ac7 +0x1a5:  jne    08401b88 <+0x266>
08401acd +0x1ab:  mov    -0x48(%ebp),%eax
08401ad0 +0x1ae:  cmp    $0x1,%eax
08401ad3 +0x1b1:  jbe    08401b6b <+0x249>
08401ad9 +0x1b7:  mov    0xc(%ebp),%eax
08401adc +0x1ba:  movl   $0x5,0x5344(%eax)
08401ae6 +0x1c4:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08401aeb +0x1c9:  mov    %eax,(%esp)
08401aee +0x1cc:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
08401af3 +0x1d1:  mov    %eax,%esi
08401af5 +0x1d3:  mov    -0x44(%ebp),%eax
08401af8 +0x1d6:  mov    %eax,-0x80(%ebp)
08401afb +0x1d9:  mov    0xc(%ebp),%eax
08401afe +0x1dc:  mov    0x5348(%eax),%edi
08401b04 +0x1e2:  mov    0xc(%ebp),%eax
08401b07 +0x1e5:  mov    (%eax),%eax
08401b09 +0x1e7:  movl   $0x0,0x4(%esp)
08401b11 +0x1ef:  mov    %eax,(%esp)
08401b14 +0x1f2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401b19 +0x1f7:  mov    %eax,%ebx
08401b1b +0x1f9:  movl   $0x0,0xc(%esp)
08401b23 +0x201:  movl   $0xf25,0x8(%esp)
08401b2b +0x209:  movl   $&_ZZN15DB_CreateCharac25CheckLimitCreateNewCharacEP17SIG_CREATE_CHARACbE19__PRETTY_FUNCTION__,0x4(%esp)
08401b33 +0x211:  lea    -0x3c(%ebp),%eax
08401b36 +0x214:  mov    %eax,(%esp)
08401b39 +0x217:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08401b3e +0x21c:  mov    %esi,0x14(%esp)
08401b42 +0x220:  mov    -0x80(%ebp),%eax
08401b45 +0x223:  mov    %eax,0x10(%esp)
08401b49 +0x227:  mov    %edi,0xc(%esp)
08401b4d +0x22b:  mov    %ebx,0x8(%esp)
08401b51 +0x22f:  movl   $"[LIMIT NEW CHARAC MID] %s,%d,%d,%d",0x4(%esp)
08401b59 +0x237:  lea    -0x3c(%ebp),%eax
08401b5c +0x23a:  mov    %eax,(%esp)
08401b5f +0x23d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08401b64 +0x242:  mov    $0x0,%eax
08401b69 +0x247:  jmp    08401b8e <+0x26c>
08401b6b +0x249:  addl   $0x1,-0x1c(%ebp)
08401b6f +0x24d:  mov    -0x1c(%ebp),%eax
08401b72 +0x250:  cmp    -0x24(%ebp),%eax
08401b75 +0x253:  setl   %al
08401b78 +0x256:  test   %al,%al
08401b7a +0x258:  jne    08401a58 <+0x136>
08401b80 +0x25e:  jmp    08401b89 <+0x267>
08401b82 +0x260:  nop
08401b83 +0x261:  jmp    08401b89 <+0x267>
08401b85 +0x263:  nop
08401b86 +0x264:  jmp    08401b89 <+0x267>
08401b88 +0x266:  nop
08401b89 +0x267:  mov    $0x1,%eax
08401b8e +0x26c:  add    $0x9c,%esp
08401b94 +0x272:  pop    %ebx
08401b95 +0x273:  pop    %esi
08401b96 +0x274:  pop    %edi
08401b97 +0x275:  pop    %ebp
08401b98 +0x276:  ret
08401b99 +0x277:  nop
```

## 反编译 C

```c
// DB_CreateCharac::CheckLimitCreateNewCharac @ 0x8401922

/* DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool) */

undefined4 DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC *param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  CEnvironment *this;
  undefined4 uVar5;
  undefined3 in_stack_00000009;
  tm local_78;
  uint local_4c;
  uint local_48;
  time_t local_44;
  cMyTrace local_40 [19];
  char local_2d;
  MySQL *local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  
  cVar3 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,*_param_2);
  if (cVar3 == '\0') {
    local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    local_44 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_44,&local_78);
    local_78.tm_hour = 0;
    local_78.tm_min = 0;
    local_78.tm_sec = 0;
    local_44 = mktime(&local_78);
    local_48 = 0;
    local_4c = 0;
    uVar4 = NumberToString(*_param_2,0);
    MySQL::set_query(local_2c,
                     "seLect count, unix_timestamp(last_access_time) from limit_create_character where m_id=%s"
                     ,uVar4);
    cVar3 = MySQL::exec(local_2c,true);
    if (cVar3 == '\x01') {
      local_28 = MySQL::get_n_rows(local_2c);
      if (local_28 == 0) {
        uVar4 = 1;
      }
      else {
        local_24 = 0;
        local_20 = 0;
        while ((((local_20 < local_28 && (local_2d = MySQL::fetch(local_2c), local_2d == '\x01')) &&
                (local_2d = MySQL::get_uint(local_2c,0,&local_4c), local_2d == '\x01')) &&
               (local_2d = MySQL::get_uint(local_2c,1,&local_48), local_2d == '\x01'))) {
          if (1 < local_4c) {
            _param_2[0x14d1] = 5;
            this = (CEnvironment *)G_CEnvironment();
            uVar4 = CEnvironment::get_server_group(this);
            uVar2 = local_48;
            uVar1 = _param_2[0x14d2];
            uVar5 = NumberToString(*_param_2,0);
            cMyTrace::cMyTrace(local_40,
                               "bool DB_CreateCharac::CheckLimitCreateNewCharac(SIG_CREATE_CHARAC*, bool)"
                               ,0xf25,0);
            cMyTrace::operator()
                      (local_40,"[LIMIT NEW CHARAC MID] %s,%d,%d,%d",uVar5,uVar1,uVar2,uVar4);
            return 0;
          }
          local_20 = local_20 + 1;
          local_2d = 1;
        }
        uVar4 = 1;
      }
    }
    else {
      _param_2[0x14d1] = 2;
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
```
