# dispatch

`_ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream`

`DB_ReloadAutoPunishRuleBackIP::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReloadAutoPunishRuleBackIP` | `0x0842cdf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842cdf6  _ZN29DB_ReloadAutoPunishRuleBackIP8dispatchEiiP6Stream
#           DB_ReloadAutoPunishRuleBackIP::dispatch(int, int, Stream*)
# range [0x0842cdf6, 0x0842d0ad]
0842cdf6 +0x000:  push   %ebp
0842cdf7 +0x001:  mov    %esp,%ebp
0842cdf9 +0x003:  push   %esi
0842cdfa +0x004:  push   %ebx
0842cdfb +0x005:  sub    $0x50,%esp
0842cdfe +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842ce03 +0x00d:  movl   $0x0,0x8(%esp)
0842ce0b +0x015:  movl   $0x6,0x4(%esp)
0842ce13 +0x01d:  mov    %eax,(%esp)
0842ce16 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842ce1b +0x025:  mov    %eax,-0x14(%ebp)
0842ce1e +0x028:  movl   $0x7d0,0x8(%esp)
0842ce26 +0x030:  movl   $"seLect ip,start_ip,end_ip from auto_punish_blackip_info where apply_flag=1 limit %d",0x4(%esp)
0842ce2e +0x038:  mov    -0x14(%ebp),%eax
0842ce31 +0x03b:  mov    %eax,(%esp)
0842ce34 +0x03e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842ce39 +0x043:  movl   $0x1,0x4(%esp)
0842ce41 +0x04b:  mov    -0x14(%ebp),%eax
0842ce44 +0x04e:  mov    %eax,(%esp)
0842ce47 +0x051:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842ce4c +0x056:  xor    $0x1,%eax
0842ce4f +0x059:  test   %al,%al
0842ce51 +0x05b:  je     0842ce5d <+0x67>
0842ce53 +0x05d:  mov    $0x0,%ebx
0842ce58 +0x062:  jmp    0842d0a5 <+0x2af>
0842ce5d +0x067:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842ce62 +0x06c:  movl   $0x7059,0x8(%esp)
0842ce6a +0x074:  movl   $"DBThread.cpp",0x4(%esp)
0842ce72 +0x07c:  mov    %eax,(%esp)
0842ce75 +0x07f:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842ce7a +0x084:  movl   $0x1,0x8(%esp)
0842ce82 +0x08c:  mov    %eax,0x4(%esp)
0842ce86 +0x090:  lea    -0x1c(%ebp),%eax
0842ce89 +0x093:  mov    %eax,(%esp)
0842ce8c +0x096:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842ce91 +0x09b:  lea    -0x1c(%ebp),%eax
0842ce94 +0x09e:  mov    %eax,(%esp)
0842ce97 +0x0a1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ce9c +0x0a6:  movl   $0x108,0x4(%esp)
0842cea4 +0x0ae:  mov    %eax,(%esp)
0842cea7 +0x0b1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842ceac +0x0b6:  lea    -0x1c(%ebp),%eax
0842ceaf +0x0b9:  mov    %eax,(%esp)
0842ceb2 +0x0bc:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842ceb7 +0x0c1:  movl   $0xffffffff,0x4(%esp)
0842cebf +0x0c9:  mov    %eax,(%esp)
0842cec2 +0x0cc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842cec7 +0x0d1:  lea    -0x1c(%ebp),%eax
0842ceca +0x0d4:  mov    %eax,(%esp)
0842cecd +0x0d7:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842ced2 +0x0dc:  mov    %eax,(%esp)
0842ced5 +0x0df:  call   084527c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x53dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x53dc
0842ceda +0x0e4:  mov    %eax,-0x10(%ebp)
0842cedd +0x0e7:  mov    -0x14(%ebp),%eax
0842cee0 +0x0ea:  mov    %eax,(%esp)
0842cee3 +0x0ed:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842cee8 +0x0f2:  mov    %eax,%edx
0842ceea +0x0f4:  mov    -0x10(%ebp),%eax
0842ceed +0x0f7:  mov    %dx,(%eax)
0842cef0 +0x0fa:  movl   $0x0,-0xc(%ebp)
0842cef7 +0x101:  jmp    0842d043 <+0x24d>
0842cefc +0x106:  mov    -0x14(%ebp),%eax
0842ceff +0x109:  mov    %eax,(%esp)
0842cf02 +0x10c:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842cf07 +0x111:  xor    $0x1,%eax
0842cf0a +0x114:  test   %al,%al
0842cf0c +0x116:  je     0842cf18 <+0x122>
0842cf0e +0x118:  mov    $0x0,%ebx
0842cf13 +0x11d:  jmp    0842d09a <+0x2a4>
0842cf18 +0x122:  movl   $0x0,-0x2b(%ebp)
0842cf1f +0x129:  movl   $0x0,-0x27(%ebp)
0842cf26 +0x130:  movl   $0x0,-0x23(%ebp)
0842cf2d +0x137:  movw   $0x0,-0x1f(%ebp)
0842cf33 +0x13d:  movb   $0x0,-0x1d(%ebp)
0842cf37 +0x141:  movl   $0x0,-0x30(%ebp)
0842cf3e +0x148:  movl   $0x0,-0x34(%ebp)
0842cf45 +0x14f:  movl   $0xc,0xc(%esp)
0842cf4d +0x157:  lea    -0x2b(%ebp),%eax
0842cf50 +0x15a:  mov    %eax,0x8(%esp)
0842cf54 +0x15e:  movl   $0x0,0x4(%esp)
0842cf5c +0x166:  mov    -0x14(%ebp),%eax
0842cf5f +0x169:  mov    %eax,(%esp)
0842cf62 +0x16c:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0842cf67 +0x171:  xor    $0x1,%eax
0842cf6a +0x174:  test   %al,%al
0842cf6c +0x176:  je     0842cf78 <+0x182>
0842cf6e +0x178:  mov    $0x0,%ebx
0842cf73 +0x17d:  jmp    0842d09a <+0x2a4>
0842cf78 +0x182:  lea    -0x30(%ebp),%eax
0842cf7b +0x185:  mov    %eax,0x8(%esp)
0842cf7f +0x189:  movl   $0x1,0x4(%esp)
0842cf87 +0x191:  mov    -0x14(%ebp),%eax
0842cf8a +0x194:  mov    %eax,(%esp)
0842cf8d +0x197:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842cf92 +0x19c:  xor    $0x1,%eax
0842cf95 +0x19f:  test   %al,%al
0842cf97 +0x1a1:  je     0842cfa3 <+0x1ad>
0842cf99 +0x1a3:  mov    $0x0,%ebx
0842cf9e +0x1a8:  jmp    0842d09a <+0x2a4>
0842cfa3 +0x1ad:  lea    -0x34(%ebp),%eax
0842cfa6 +0x1b0:  mov    %eax,0x8(%esp)
0842cfaa +0x1b4:  movl   $0x2,0x4(%esp)
0842cfb2 +0x1bc:  mov    -0x14(%ebp),%eax
0842cfb5 +0x1bf:  mov    %eax,(%esp)
0842cfb8 +0x1c2:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842cfbd +0x1c7:  xor    $0x1,%eax
0842cfc0 +0x1ca:  test   %al,%al
0842cfc2 +0x1cc:  je     0842cfce <+0x1d8>
0842cfc4 +0x1ce:  mov    $0x0,%ebx
0842cfc9 +0x1d3:  jmp    0842d09a <+0x2a4>
0842cfce +0x1d8:  movl   $0x0,-0x44(%ebp)
0842cfd5 +0x1df:  movl   $0x0,-0x40(%ebp)
0842cfdc +0x1e6:  movl   $0x0,-0x3c(%ebp)
0842cfe3 +0x1ed:  movl   $0x0,-0x38(%ebp)
0842cfea +0x1f4:  lea    -0x2b(%ebp),%eax
0842cfed +0x1f7:  mov    %eax,0xc(%esp)
0842cff1 +0x1fb:  movl   $"%s.0",0x8(%esp)
0842cff9 +0x203:  movl   $0x10,0x4(%esp)
0842d001 +0x20b:  lea    -0x44(%ebp),%eax
0842d004 +0x20e:  mov    %eax,(%esp)
0842d007 +0x211:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0842d00c +0x216:  mov    -0xc(%ebp),%ebx
0842d00f +0x219:  lea    -0x44(%ebp),%eax
0842d012 +0x21c:  mov    %eax,(%esp)
0842d015 +0x21f:  call   0807e530 <_init+0xe28>
0842d01a +0x224:  mov    -0x10(%ebp),%edx
0842d01d +0x227:  mov    %eax,0x4(%edx,%ebx,8)
0842d021 +0x22b:  mov    -0xc(%ebp),%edx
0842d024 +0x22e:  mov    -0x30(%ebp),%eax
0842d027 +0x231:  mov    %eax,%ecx
0842d029 +0x233:  mov    -0x10(%ebp),%eax
0842d02c +0x236:  mov    %cl,0x8(%eax,%edx,8)
0842d030 +0x23a:  mov    -0xc(%ebp),%edx
0842d033 +0x23d:  mov    -0x34(%ebp),%eax
0842d036 +0x240:  mov    %eax,%ecx
0842d038 +0x242:  mov    -0x10(%ebp),%eax
0842d03b +0x245:  mov    %cl,0x9(%eax,%edx,8)
0842d03f +0x249:  addl   $0x1,-0xc(%ebp)
0842d043 +0x24d:  mov    -0x14(%ebp),%eax
0842d046 +0x250:  mov    %eax,(%esp)
0842d049 +0x253:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842d04e +0x258:  cmp    -0xc(%ebp),%eax
0842d051 +0x25b:  seta   %al
0842d054 +0x25e:  test   %al,%al
0842d056 +0x260:  jne    0842cefc <+0x106>
0842d05c +0x266:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842d061 +0x26b:  lea    -0x1c(%ebp),%edx
0842d064 +0x26e:  mov    %edx,0x8(%esp)
0842d068 +0x272:  movl   $0x1,0x4(%esp)
0842d070 +0x27a:  mov    %eax,(%esp)
0842d073 +0x27d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842d078 +0x282:  mov    $0x1,%ebx
0842d07d +0x287:  jmp    0842d09a <+0x2a4>
0842d07f +0x289:  mov    %edx,%ebx
0842d081 +0x28b:  mov    %eax,%esi
0842d083 +0x28d:  lea    -0x1c(%ebp),%eax
0842d086 +0x290:  mov    %eax,(%esp)
0842d089 +0x293:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d08e +0x298:  mov    %esi,%eax
0842d090 +0x29a:  mov    %ebx,%edx
0842d092 +0x29c:  mov    %eax,(%esp)
0842d095 +0x29f:  call   08ae3750 <_Unwind_Resume>
0842d09a +0x2a4:  lea    -0x1c(%ebp),%eax
0842d09d +0x2a7:  mov    %eax,(%esp)
0842d0a0 +0x2aa:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842d0a5 +0x2af:  mov    %ebx,%eax
0842d0a7 +0x2b1:  add    $0x50,%esp
0842d0aa +0x2b4:  pop    %ebx
0842d0ab +0x2b5:  pop    %esi
0842d0ac +0x2b6:  pop    %ebp
0842d0ad +0x2b7:  ret
```

## 反编译 C

```c
// DB_ReloadAutoPunishRuleBackIP::dispatch @ 0x842cdf6

/* DB_ReloadAutoPunishRuleBackIP::dispatch(int, int, Stream*) */

undefined4 DB_ReloadAutoPunishRuleBackIP::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined2 uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  in_addr_t iVar5;
  uint uVar6;
  undefined4 uVar7;
  char local_48 [16];
  uint local_38 [2];
  char local_2f [15];
  CStreamGuard local_20 [8];
  MySQL *local_18;
  SIG_AUTO_PUNISH_RULE_BLACK_IP *local_14;
  uint local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  MySQL::set_query(local_18,
                   "seLect ip,start_ip,end_ip from auto_punish_blackip_info where apply_flag=1 limit %d"
                   ,2000);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7059);
    CStreamGuard::CStreamGuard(local_20,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0842cea7 to 0842d077 has its CatchHandler @ 0842d07f */
    CStreamGuard::operator<<(pCVar4,0x108);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_20);
    CStreamGuard::operator<<(pCVar4,-1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_20);
    local_14 = CStreamGuard::GetInBuffer<SIG_AUTO_PUNISH_RULE_BLACK_IP>(pCVar4);
    uVar2 = MySQL::get_n_rows(local_18);
    *(undefined2 *)local_14 = uVar2;
    local_10 = 0;
    while( true ) {
      uVar6 = MySQL::get_n_rows(local_18);
      if (uVar6 <= local_10) break;
      cVar1 = MySQL::fetch(local_18);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      local_2f[0] = '\0';
      local_2f[1] = '\0';
      local_2f[2] = '\0';
      local_2f[3] = '\0';
      local_2f[4] = '\0';
      local_2f[5] = '\0';
      local_2f[6] = '\0';
      local_2f[7] = '\0';
      local_2f[8] = '\0';
      local_2f[9] = '\0';
      local_2f[10] = '\0';
      local_2f[0xb] = '\0';
      local_2f[0xc] = '\0';
      local_2f[0xd] = '\0';
      local_2f[0xe] = 0;
      local_38[1] = 0;
      local_38[0] = 0;
      cVar1 = MySQL::get_str(local_18,0,local_2f,0xc);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      cVar1 = MySQL::get_uint(local_18,1,local_38 + 1);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      cVar1 = MySQL::get_uint(local_18,2,local_38);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0842d09a;
      }
      local_48[0] = '\0';
      local_48[1] = '\0';
      local_48[2] = '\0';
      local_48[3] = '\0';
      local_48[4] = '\0';
      local_48[5] = '\0';
      local_48[6] = '\0';
      local_48[7] = '\0';
      local_48[8] = '\0';
      local_48[9] = '\0';
      local_48[10] = '\0';
      local_48[0xb] = '\0';
      local_48[0xc] = '\0';
      local_48[0xd] = '\0';
      local_48[0xe] = '\0';
      local_48[0xf] = '\0';
      OS_API::snprintf(local_48,0x10,"%s.0",local_2f);
      uVar6 = local_10;
      iVar5 = inet_addr(local_48);
      *(in_addr_t *)(local_14 + uVar6 * 8 + 4) = iVar5;
      local_14[local_10 * 8 + 8] = SUB41(local_38[1],0);
      local_14[local_10 * 8 + 9] = SUB41(local_38[0],0);
      local_10 = local_10 + 1;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
    uVar7 = 1;
LAB_0842d09a:
    CStreamGuard::~CStreamGuard(local_20);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}
```
