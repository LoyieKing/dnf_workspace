# InsertChannel

`_ZN9GameWorld13InsertChannelEi17ENUM_SERVER_GROUP`

`GameWorld::InsertChannel(int, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cb88a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cb88a  _ZN9GameWorld13InsertChannelEi17ENUM_SERVER_GROUP
#           GameWorld::InsertChannel(int, ENUM_SERVER_GROUP)
# range [0x086cb88a, 0x086cbab9]
086cb88a +0x000:  push   %ebp
086cb88b +0x001:  mov    %esp,%ebp
086cb88d +0x003:  push   %esi
086cb88e +0x004:  push   %ebx
086cb88f +0x005:  add    $0xffffff80,%esp
086cb892 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
086cb897 +0x00d:  movl   $0x11a0,0x8(%esp)
086cb89f +0x015:  movl   $"world.cpp",0x4(%esp)
086cb8a7 +0x01d:  mov    %eax,(%esp)
086cb8aa +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
086cb8af +0x025:  movl   $0x1,0x8(%esp)
086cb8b7 +0x02d:  mov    %eax,0x4(%esp)
086cb8bb +0x031:  lea    -0x18(%ebp),%eax
086cb8be +0x034:  mov    %eax,(%esp)
086cb8c1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
086cb8c6 +0x03c:  lea    -0x18(%ebp),%eax
086cb8c9 +0x03f:  mov    %eax,(%esp)
086cb8cc +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cb8d1 +0x047:  movl   $0x2d,0x4(%esp)
086cb8d9 +0x04f:  mov    %eax,(%esp)
086cb8dc +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cb8e1 +0x057:  lea    -0x18(%ebp),%eax
086cb8e4 +0x05a:  mov    %eax,(%esp)
086cb8e7 +0x05d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
086cb8ec +0x062:  movl   $0xffffffff,0x4(%esp)
086cb8f4 +0x06a:  mov    %eax,(%esp)
086cb8f7 +0x06d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
086cb8fc +0x072:  movl   $0x5c,0x8(%esp)
086cb904 +0x07a:  movl   $0x0,0x4(%esp)
086cb90c +0x082:  lea    -0x74(%ebp),%eax
086cb90f +0x085:  mov    %eax,(%esp)
086cb912 +0x088:  call   0807dcc0 <_init+0x5b8>
086cb917 +0x08d:  mov    0xc(%ebp),%eax
086cb91a +0x090:  mov    %eax,-0x74(%ebp)
086cb91d +0x093:  mov    0x10(%ebp),%eax
086cb920 +0x096:  mov    %eax,-0x1c(%ebp)
086cb923 +0x099:  movw   $0x0,-0x70(%ebp)
086cb929 +0x09f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb92e +0x0a4:  add    $0x1b4,%eax
086cb933 +0x0a9:  mov    %eax,(%esp)
086cb936 +0x0ac:  call   0807e3b0 <_init+0xca8>
086cb93b +0x0b1:  mov    %eax,%ebx
086cb93d +0x0b3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb942 +0x0b8:  add    $0x1b4,%eax
086cb947 +0x0bd:  mov    %ebx,0x8(%esp)
086cb94b +0x0c1:  mov    %eax,0x4(%esp)
086cb94f +0x0c5:  lea    -0x74(%ebp),%eax
086cb952 +0x0c8:  add    $0x6,%eax
086cb955 +0x0cb:  mov    %eax,(%esp)
086cb958 +0x0ce:  call   0807d8a0 <_init+0x198>
086cb95d +0x0d3:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb962 +0x0d8:  mov    0x1c8(%eax),%eax
086cb968 +0x0de:  mov    %ax,-0x5e(%ebp)
086cb96c +0x0e2:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb971 +0x0e7:  mov    0x3c0(%eax),%eax
086cb977 +0x0ed:  mov    %ax,-0x5c(%ebp)
086cb97b +0x0f1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb980 +0x0f6:  mov    0x378(%eax),%eax
086cb986 +0x0fc:  mov    %al,-0x5a(%ebp)
086cb989 +0x0ff:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb98e +0x104:  add    $0x384,%eax
086cb993 +0x109:  mov    %eax,(%esp)
086cb996 +0x10c:  call   0807e3b0 <_init+0xca8>
086cb99b +0x111:  mov    %eax,%ebx
086cb99d +0x113:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb9a2 +0x118:  add    $0x384,%eax
086cb9a7 +0x11d:  mov    %ebx,0x8(%esp)
086cb9ab +0x121:  mov    %eax,0x4(%esp)
086cb9af +0x125:  lea    -0x74(%ebp),%eax
086cb9b2 +0x128:  add    $0x1b,%eax
086cb9b5 +0x12b:  mov    %eax,(%esp)
086cb9b8 +0x12e:  call   0807d8a0 <_init+0x198>
086cb9bd +0x133:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb9c2 +0x138:  mov    0x1b0(%eax),%eax
086cb9c8 +0x13e:  mov    %ax,-0x3b(%ebp)
086cb9cc +0x142:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cb9d1 +0x147:  mov    %eax,(%esp)
086cb9d4 +0x14a:  call   0814a6f8 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x497>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x497
086cb9d9 +0x14f:  mov    %eax,-0x10(%ebp)
086cb9dc +0x152:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb9e1 +0x157:  mov    %eax,(%esp)
086cb9e4 +0x15a:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
086cb9e9 +0x15f:  mov    %eax,%ebx
086cb9eb +0x161:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086cb9f0 +0x166:  mov    0x378(%eax),%eax
086cb9f6 +0x16c:  movzbl %al,%eax
086cb9f9 +0x16f:  mov    %ebx,0x8(%esp)
086cb9fd +0x173:  mov    %eax,0x4(%esp)
086cba01 +0x177:  mov    -0x10(%ebp),%eax
086cba04 +0x17a:  mov    %eax,(%esp)
086cba07 +0x17d:  call   088dcd38 <_ZNK16channel_script_t14getChannelInfoEhj>  ; channel_script_t::getChannelInfo(unsigned char, unsigned int) const
086cba0c +0x182:  mov    %eax,-0xc(%ebp)
086cba0f +0x185:  cmpl   $0x0,-0xc(%ebp)
086cba13 +0x189:  je     086cba3d <+0x1b3>
086cba15 +0x18b:  mov    -0xc(%ebp),%eax
086cba18 +0x18e:  add    $0x8,%eax
086cba1b +0x191:  mov    %eax,(%esp)
086cba1e +0x194:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
086cba23 +0x199:  movl   $0x19,0x8(%esp)
086cba2b +0x1a1:  mov    %eax,0x4(%esp)
086cba2f +0x1a5:  lea    -0x74(%ebp),%eax
086cba32 +0x1a8:  add    $0x3b,%eax
086cba35 +0x1ab:  mov    %eax,(%esp)
086cba38 +0x1ae:  call   0807d8d0 <_init+0x1c8>
086cba3d +0x1b3:  cmpl   $0x0,-0xc(%ebp)
086cba41 +0x1b7:  je     086cba4c <+0x1c2>
086cba43 +0x1b9:  mov    -0xc(%ebp),%eax
086cba46 +0x1bc:  mov    0x4(%eax),%eax
086cba49 +0x1bf:  mov    %eax,-0x20(%ebp)
086cba4c +0x1c2:  lea    -0x18(%ebp),%eax
086cba4f +0x1c5:  mov    %eax,(%esp)
086cba52 +0x1c8:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
086cba57 +0x1cd:  movl   $0x5c,0x8(%esp)
086cba5f +0x1d5:  lea    -0x74(%ebp),%edx
086cba62 +0x1d8:  mov    %edx,0x4(%esp)
086cba66 +0x1dc:  mov    %eax,(%esp)
086cba69 +0x1df:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
086cba6e +0x1e4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086cba73 +0x1e9:  lea    -0x18(%ebp),%edx
086cba76 +0x1ec:  mov    %edx,0x8(%esp)
086cba7a +0x1f0:  movl   $0x2,0x4(%esp)
086cba82 +0x1f8:  mov    %eax,(%esp)
086cba85 +0x1fb:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086cba8a +0x200:  jmp    086cbaa7 <+0x21d>
086cba8c +0x202:  mov    %edx,%ebx
086cba8e +0x204:  mov    %eax,%esi
086cba90 +0x206:  lea    -0x18(%ebp),%eax
086cba93 +0x209:  mov    %eax,(%esp)
086cba96 +0x20c:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cba9b +0x211:  mov    %esi,%eax
086cba9d +0x213:  mov    %ebx,%edx
086cba9f +0x215:  mov    %eax,(%esp)
086cbaa2 +0x218:  call   08ae3750 <_Unwind_Resume>
086cbaa7 +0x21d:  lea    -0x18(%ebp),%eax
086cbaaa +0x220:  mov    %eax,(%esp)
086cbaad +0x223:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086cbab2 +0x228:  sub    $0xffffff80,%esp
086cbab5 +0x22b:  pop    %ebx
086cbab6 +0x22c:  pop    %esi
086cbab7 +0x22d:  pop    %ebp
086cbab8 +0x22e:  ret
086cbab9 +0x22f:  nop
```

## 反编译 C

```c
// GameWorld::InsertChannel @ 0x86cb88a

/* GameWorld::InsertChannel(int, ENUM_SERVER_GROUP) */

void __thiscall GameWorld::InsertChannel(undefined4 this,undefined4 param_1,undefined4 param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  size_t sVar4;
  CDataManager *this_00;
  CEnvironment *this_01;
  uint uVar5;
  char *__src;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 auStack_72 [16];
  undefined2 local_62;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 auStack_5d [30];
  undefined2 local_3f;
  char acStack_3d [25];
  undefined4 local_24;
  undefined4 local_20;
  CStreamGuard local_1c [8];
  channel_script_t *local_14;
  int local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"world.cpp",0x11a0);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 086cb8dc to 086cba89 has its CatchHandler @ 086cba8c */
  CStreamGuard::operator<<(pCVar2,0x2d);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,-1);
  memset(&local_78,0,0x5c);
  local_78 = param_1;
  local_20 = param_3;
  local_74 = 0;
  iVar3 = G_CEnvironment();
  sVar4 = strlen((char *)(iVar3 + 0x1b4));
  iVar3 = G_CEnvironment();
  memcpy(auStack_72,(void *)(iVar3 + 0x1b4),sVar4);
  iVar3 = G_CEnvironment();
  local_62 = (undefined2)*(undefined4 *)(iVar3 + 0x1c8);
  iVar3 = G_CEnvironment();
  local_60 = (undefined2)*(undefined4 *)(iVar3 + 0x3c0);
  iVar3 = G_CEnvironment();
  local_5e = (undefined1)*(undefined4 *)(iVar3 + 0x378);
  iVar3 = G_CEnvironment();
  sVar4 = strlen((char *)(iVar3 + 900));
  iVar3 = G_CEnvironment();
  memcpy(auStack_5d,(void *)(iVar3 + 900),sVar4);
  iVar3 = G_CEnvironment();
  local_3f = (undefined2)*(undefined4 *)(iVar3 + 0x1b0);
  this_00 = (CDataManager *)G_CDataManager();
  local_14 = (channel_script_t *)CDataManager::GetChannelScript(this_00);
  this_01 = (CEnvironment *)G_CEnvironment();
  uVar5 = CEnvironment::get_channel_no(this_01);
  iVar3 = G_CEnvironment();
  local_10 = channel_script_t::getChannelInfo(local_14,(uchar)*(undefined4 *)(iVar3 + 0x378),uVar5);
  if (local_10 != 0) {
    __src = (char *)std::string::c_str((string *)(local_10 + 8));
    strncpy(acStack_3d,__src,0x19);
  }
  if (local_10 != 0) {
    local_24 = *(undefined4 *)(local_10 + 4);
  }
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  CStreamGuard::put_binary(pCVar2,&local_78,0x5c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}
```
