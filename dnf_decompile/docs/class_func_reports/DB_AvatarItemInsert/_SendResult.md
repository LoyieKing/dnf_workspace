# _SendResult

`_ZN19DB_AvatarItemInsert11_SendResultEP17SIG_AVATAR_INSERTi`

`DB_AvatarItemInsert::_SendResult(SIG_AVATAR_INSERT*, int)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemInsert` | `0x084001fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084001fe  _ZN19DB_AvatarItemInsert11_SendResultEP17SIG_AVATAR_INSERTi
#           DB_AvatarItemInsert::_SendResult(SIG_AVATAR_INSERT*, int)
# range [0x084001fe, 0x0840031d]
084001fe +0x000:  push   %ebp
084001ff +0x001:  mov    %esp,%ebp
08400201 +0x003:  push   %esi
08400202 +0x004:  push   %ebx
08400203 +0x005:  sub    $0x20,%esp
08400206 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840020b +0x00d:  movl   $0x0,0x8(%esp)
08400213 +0x015:  movl   $0x3,0x4(%esp)
0840021b +0x01d:  mov    %eax,(%esp)
0840021e +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08400223 +0x025:  mov    %eax,-0x10(%ebp)
08400226 +0x028:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0840022b +0x02d:  movl   $0xb18,0x8(%esp)
08400233 +0x035:  movl   $"DBThread.cpp",0x4(%esp)
0840023b +0x03d:  mov    %eax,(%esp)
0840023e +0x040:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08400243 +0x045:  movl   $0x1,0x8(%esp)
0840024b +0x04d:  mov    %eax,0x4(%esp)
0840024f +0x051:  lea    -0x18(%ebp),%eax
08400252 +0x054:  mov    %eax,(%esp)
08400255 +0x057:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0840025a +0x05c:  lea    -0x18(%ebp),%eax
0840025d +0x05f:  mov    %eax,(%esp)
08400260 +0x062:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08400265 +0x067:  movl   $0x31,0x4(%esp)
0840026d +0x06f:  mov    %eax,(%esp)
08400270 +0x072:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08400275 +0x077:  lea    -0x18(%ebp),%eax
08400278 +0x07a:  mov    %eax,(%esp)
0840027b +0x07d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08400280 +0x082:  mov    0x10(%ebp),%edx
08400283 +0x085:  mov    %edx,0x4(%esp)
08400287 +0x089:  mov    %eax,(%esp)
0840028a +0x08c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0840028f +0x091:  lea    -0x18(%ebp),%eax
08400292 +0x094:  mov    %eax,(%esp)
08400295 +0x097:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0840029a +0x09c:  mov    %eax,(%esp)
0840029d +0x09f:  call   084503ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2fc4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2fc4
084002a2 +0x0a4:  mov    %eax,-0xc(%ebp)
084002a5 +0x0a7:  movl   $0x53,0x8(%esp)
084002ad +0x0af:  mov    0xc(%ebp),%eax
084002b0 +0x0b2:  mov    %eax,0x4(%esp)
084002b4 +0x0b6:  mov    -0xc(%ebp),%eax
084002b7 +0x0b9:  mov    %eax,(%esp)
084002ba +0x0bc:  call   0807d8a0 <_init+0x198>
084002bf +0x0c1:  mov    -0x10(%ebp),%eax
084002c2 +0x0c4:  mov    %eax,(%esp)
084002c5 +0x0c7:  call   083f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>  ; WongWork::DBCommon::GetIdentity(MySQL*)
084002ca +0x0cc:  mov    %eax,%edx
084002cc +0x0ce:  mov    -0xc(%ebp),%eax
084002cf +0x0d1:  mov    %edx,0x4b(%eax)
084002d2 +0x0d4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084002d7 +0x0d9:  lea    -0x18(%ebp),%edx
084002da +0x0dc:  mov    %edx,0x8(%esp)
084002de +0x0e0:  movl   $0x1,0x4(%esp)
084002e6 +0x0e8:  mov    %eax,(%esp)
084002e9 +0x0eb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084002ee +0x0f0:  jmp    0840030b <+0x10d>
084002f0 +0x0f2:  mov    %edx,%ebx
084002f2 +0x0f4:  mov    %eax,%esi
084002f4 +0x0f6:  lea    -0x18(%ebp),%eax
084002f7 +0x0f9:  mov    %eax,(%esp)
084002fa +0x0fc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084002ff +0x101:  mov    %esi,%eax
08400301 +0x103:  mov    %ebx,%edx
08400303 +0x105:  mov    %eax,(%esp)
08400306 +0x108:  call   08ae3750 <_Unwind_Resume>
0840030b +0x10d:  lea    -0x18(%ebp),%eax
0840030e +0x110:  mov    %eax,(%esp)
08400311 +0x113:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08400316 +0x118:  add    $0x20,%esp
08400319 +0x11b:  pop    %ebx
0840031a +0x11c:  pop    %esi
0840031b +0x11d:  pop    %ebp
0840031c +0x11e:  ret
0840031d +0x11f:  nop
```

## 反编译 C

```c
// DB_AvatarItemInsert::_SendResult @ 0x84001fe

/* DB_AvatarItemInsert::_SendResult(SIG_AVATAR_INSERT*, int) */

void __thiscall
DB_AvatarItemInsert::_SendResult(DB_AvatarItemInsert *this,SIG_AVATAR_INSERT *param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  CStreamGuard local_1c [8];
  MySQL *local_14;
  SIG_AVATAR_INSERT *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb18);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08400270 to 084002ed has its CatchHandler @ 084002f0 */
  CStreamGuard::operator<<(pCVar2,0x31);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_10 = CStreamGuard::GetInBuffer<SIG_AVATAR_INSERT>(pCVar2);
  memcpy(local_10,param_1,0x53);
  uVar3 = WongWork::DBCommon::GetIdentity(local_14);
  *(undefined4 *)(local_10 + 0x4b) = uVar3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}
```
