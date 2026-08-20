# dispatch

`_ZN25DB_LoadPowerWarStatueInfo8dispatchEiiP6Stream`

`DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadPowerWarStatueInfo` | `0x08434886` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08434886  _ZN25DB_LoadPowerWarStatueInfo8dispatchEiiP6Stream
#           DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*)
# range [0x08434886, 0x08434a85]
08434886 +0x000:  push   %ebp
08434887 +0x001:  mov    %esp,%ebp
08434889 +0x003:  push   %esi
0843488a +0x004:  push   %ebx
0843488b +0x005:  sub    $0x40,%esp
0843488e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08434893 +0x00d:  movl   $0x7e9d,0x8(%esp)
0843489b +0x015:  movl   $"DBThread.cpp",0x4(%esp)
084348a3 +0x01d:  mov    %eax,(%esp)
084348a6 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084348ab +0x025:  movl   $0x1,0x8(%esp)
084348b3 +0x02d:  mov    %eax,0x4(%esp)
084348b7 +0x031:  lea    -0x34(%ebp),%eax
084348ba +0x034:  mov    %eax,(%esp)
084348bd +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084348c2 +0x03c:  lea    -0x34(%ebp),%eax
084348c5 +0x03f:  mov    %eax,(%esp)
084348c8 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084348cd +0x047:  mov    0xc(%ebp),%edx
084348d0 +0x04a:  mov    %edx,0x4(%esp)
084348d4 +0x04e:  mov    %eax,(%esp)
084348d7 +0x051:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084348dc +0x056:  lea    -0x34(%ebp),%eax
084348df +0x059:  mov    %eax,(%esp)
084348e2 +0x05c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084348e7 +0x061:  mov    0x10(%ebp),%edx
084348ea +0x064:  mov    %edx,0x4(%esp)
084348ee +0x068:  mov    %eax,(%esp)
084348f1 +0x06b:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084348f6 +0x070:  lea    -0x34(%ebp),%eax
084348f9 +0x073:  mov    %eax,(%esp)
084348fc +0x076:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08434901 +0x07b:  mov    %eax,(%esp)
08434904 +0x07e:  call   08453148 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5d5e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5d5e
08434909 +0x083:  mov    %eax,-0xc(%ebp)
0843490c +0x086:  movl   $0x80,0x8(%esp)
08434914 +0x08e:  movl   $0x0,0x4(%esp)
0843491c +0x096:  mov    -0xc(%ebp),%eax
0843491f +0x099:  mov    %eax,(%esp)
08434922 +0x09c:  call   0807dcc0 <_init+0x5b8>
08434927 +0x0a1:  movl   $0x0,-0x38(%ebp)
0843492e +0x0a8:  lea    -0x38(%ebp),%eax
08434931 +0x0ab:  mov    %eax,0x4(%esp)
08434935 +0x0af:  mov    0x14(%ebp),%eax
08434938 +0x0b2:  mov    %eax,(%esp)
0843493b +0x0b5:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08434940 +0x0ba:  mov    -0x38(%ebp),%eax
08434943 +0x0bd:  mov    %eax,0x8(%esp)
08434947 +0x0c1:  mov    -0xc(%ebp),%eax
0843494a +0x0c4:  mov    %eax,0x4(%esp)
0843494e +0x0c8:  mov    0x8(%ebp),%eax
08434951 +0x0cb:  mov    %eax,(%esp)
08434954 +0x0ce:  call   08434a8a <_ZN25DB_LoadPowerWarStatueInfo13GetCharacInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj>  ; DB_LoadPowerWarStatueInfo::GetCharacInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)
08434959 +0x0d3:  xor    $0x1,%eax
0843495c +0x0d6:  test   %al,%al
0843495e +0x0d8:  je     084349b8 <+0x132>
08434960 +0x0da:  movl   $0x80,0x8(%esp)
08434968 +0x0e2:  movl   $0x0,0x4(%esp)
08434970 +0x0ea:  mov    -0xc(%ebp),%eax
08434973 +0x0ed:  mov    %eax,(%esp)
08434976 +0x0f0:  call   0807dcc0 <_init+0x5b8>
0843497b +0x0f5:  mov    -0x38(%ebp),%ebx
0843497e +0x0f8:  movl   $0x5,0xc(%esp)
08434986 +0x100:  movl   $0x7eaf,0x8(%esp)
0843498e +0x108:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08434996 +0x110:  lea    -0x2c(%ebp),%eax
08434999 +0x113:  mov    %eax,(%esp)
0843499c +0x116:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084349a1 +0x11b:  mov    %ebx,0x8(%esp)
084349a5 +0x11f:  movl   $"DB_LoadPowerWarStatueInfo::GetInvenInfo, GetCharacInfo ERROR charac_no=%u",0x4(%esp)
084349ad +0x127:  lea    -0x2c(%ebp),%eax
084349b0 +0x12a:  mov    %eax,(%esp)
084349b3 +0x12d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084349b8 +0x132:  mov    -0x38(%ebp),%eax
084349bb +0x135:  mov    %eax,0x8(%esp)
084349bf +0x139:  mov    -0xc(%ebp),%eax
084349c2 +0x13c:  mov    %eax,0x4(%esp)
084349c6 +0x140:  mov    0x8(%ebp),%eax
084349c9 +0x143:  mov    %eax,(%esp)
084349cc +0x146:  call   08434d36 <_ZN25DB_LoadPowerWarStatueInfo13GetAvatarInfoEP30SIG_LOAD_POWER_WAR_STATUE_INFOj>  ; DB_LoadPowerWarStatueInfo::GetAvatarInfo(SIG_LOAD_POWER_WAR_STATUE_INFO*, unsigned int)
084349d1 +0x14b:  xor    $0x1,%eax
084349d4 +0x14e:  test   %al,%al
084349d6 +0x150:  je     08434a30 <+0x1aa>
084349d8 +0x152:  movl   $0x80,0x8(%esp)
084349e0 +0x15a:  movl   $0x0,0x4(%esp)
084349e8 +0x162:  mov    -0xc(%ebp),%eax
084349eb +0x165:  mov    %eax,(%esp)
084349ee +0x168:  call   0807dcc0 <_init+0x5b8>
084349f3 +0x16d:  mov    -0x38(%ebp),%ebx
084349f6 +0x170:  movl   $0x5,0xc(%esp)
084349fe +0x178:  movl   $0x7eb7,0x8(%esp)
08434a06 +0x180:  movl   $&_ZZN25DB_LoadPowerWarStatueInfo8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08434a0e +0x188:  lea    -0x1c(%ebp),%eax
08434a11 +0x18b:  mov    %eax,(%esp)
08434a14 +0x18e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08434a19 +0x193:  mov    %ebx,0x8(%esp)
08434a1d +0x197:  movl   $"DB_LoadPowerWarStatueInfo::GetInvenInfo, exec GetInvenInfo charac_no=%u",0x4(%esp)
08434a25 +0x19f:  lea    -0x1c(%ebp),%eax
08434a28 +0x1a2:  mov    %eax,(%esp)
08434a2b +0x1a5:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08434a30 +0x1aa:  mov    -0x38(%ebp),%eax
08434a33 +0x1ad:  mov    %eax,%edx
08434a35 +0x1af:  mov    -0xc(%ebp),%eax
08434a38 +0x1b2:  mov    %edx,(%eax)
08434a3a +0x1b4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08434a3f +0x1b9:  lea    -0x34(%ebp),%edx
08434a42 +0x1bc:  mov    %edx,0x8(%esp)
08434a46 +0x1c0:  movl   $0x1,0x4(%esp)
08434a4e +0x1c8:  mov    %eax,(%esp)
08434a51 +0x1cb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08434a56 +0x1d0:  mov    $0x1,%ebx
08434a5b +0x1d5:  lea    -0x34(%ebp),%eax
08434a5e +0x1d8:  mov    %eax,(%esp)
08434a61 +0x1db:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08434a66 +0x1e0:  mov    %ebx,%eax
08434a68 +0x1e2:  add    $0x40,%esp
08434a6b +0x1e5:  pop    %ebx
08434a6c +0x1e6:  pop    %esi
08434a6d +0x1e7:  pop    %ebp
08434a6e +0x1e8:  ret
08434a6f +0x1e9:  mov    %edx,%ebx
08434a71 +0x1eb:  mov    %eax,%esi
08434a73 +0x1ed:  lea    -0x34(%ebp),%eax
08434a76 +0x1f0:  mov    %eax,(%esp)
08434a79 +0x1f3:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08434a7e +0x1f8:  mov    %esi,%eax
08434a80 +0x1fa:  mov    %ebx,%edx
08434a82 +0x1fc:  mov    %eax,(%esp)
08434a85 +0x1ff:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// DB_LoadPowerWarStatueInfo::dispatch @ 0x8434886

/* DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadPowerWarStatueInfo::dispatch
          (DB_LoadPowerWarStatueInfo *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint local_3c;
  CStreamGuard local_38 [8];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  SIG_LOAD_POWER_WAR_STATUE_INFO *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7e9d);
  CStreamGuard::CStreamGuard(local_38,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 084348d7 to 08434a55 has its CatchHandler @ 08434a6f */
  CStreamGuard::operator<<(pCVar4,param_1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_POWER_WAR_STATUE_INFO>(pCVar4);
  memset(local_10,0,0x80);
  local_3c = 0;
  Stream::operator>>(param_3,&local_3c);
  cVar2 = GetCharacInfo(this,local_10,local_3c);
  if (cVar2 != '\x01') {
    memset(local_10,0,0x80);
    uVar1 = local_3c;
    cMyTrace::cMyTrace(local_30,
                       "virtual bool DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*)",0x7eaf,
                       5);
    cMyTrace::operator()
              (local_30,"DB_LoadPowerWarStatueInfo::GetInvenInfo, GetCharacInfo ERROR charac_no=%u",
               uVar1);
  }
  cVar2 = GetAvatarInfo(this,local_10,local_3c);
  if (cVar2 != '\x01') {
    memset(local_10,0,0x80);
    uVar1 = local_3c;
    cMyTrace::cMyTrace(local_20,
                       "virtual bool DB_LoadPowerWarStatueInfo::dispatch(int, int, Stream*)",0x7eb7,
                       5);
    cMyTrace::operator()
              (local_20,"DB_LoadPowerWarStatueInfo::GetInvenInfo, exec GetInvenInfo charac_no=%u",
               uVar1);
  }
  *(uint *)local_10 = local_3c;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  return 1;
}
```
