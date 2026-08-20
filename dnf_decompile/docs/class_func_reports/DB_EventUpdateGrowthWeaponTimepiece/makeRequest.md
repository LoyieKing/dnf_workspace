# makeRequest

`_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi`

`DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int)`

| 类 | 地址 |
|---|---|
| `DB_EventUpdateGrowthWeaponTimepiece` | `0x084497ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084497ea  _ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi
#           DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int)
# range [0x084497ea, 0x084498fd]
084497ea +0x000:  push   %ebp
084497eb +0x001:  mov    %esp,%ebp
084497ed +0x003:  push   %esi
084497ee +0x004:  push   %ebx
084497ef +0x005:  sub    $0x30,%esp
084497f2 +0x008:  mov    0xc(%ebp),%eax
084497f5 +0x00b:  mov    %ax,-0x1c(%ebp)
084497f9 +0x00f:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084497fe +0x014:  movl   $0xb941,0x8(%esp)
08449806 +0x01c:  movl   $"DBThread.cpp",0x4(%esp)
0844980e +0x024:  mov    %eax,(%esp)
08449811 +0x027:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08449816 +0x02c:  movl   $0x1,0x8(%esp)
0844981e +0x034:  mov    %eax,0x4(%esp)
08449822 +0x038:  lea    -0x10(%ebp),%eax
08449825 +0x03b:  mov    %eax,(%esp)
08449828 +0x03e:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0844982d +0x043:  lea    -0x10(%ebp),%eax
08449830 +0x046:  mov    %eax,(%esp)
08449833 +0x049:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449838 +0x04e:  movl   $0x315,0x4(%esp)
08449840 +0x056:  mov    %eax,(%esp)
08449843 +0x059:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449848 +0x05e:  lea    -0x10(%ebp),%eax
0844984b +0x061:  mov    %eax,(%esp)
0844984e +0x064:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08449853 +0x069:  movl   $0xffffffff,0x4(%esp)
0844985b +0x071:  mov    %eax,(%esp)
0844985e +0x074:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08449863 +0x079:  lea    -0x10(%ebp),%eax
08449866 +0x07c:  mov    %eax,(%esp)
08449869 +0x07f:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844986e +0x084:  mov    0x8(%ebp),%edx
08449871 +0x087:  mov    %edx,0x4(%esp)
08449875 +0x08b:  mov    %eax,(%esp)
08449878 +0x08e:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0844987d +0x093:  movswl -0x1c(%ebp),%ebx
08449881 +0x097:  lea    -0x10(%ebp),%eax
08449884 +0x09a:  mov    %eax,(%esp)
08449887 +0x09d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0844988c +0x0a2:  mov    %ebx,0x4(%esp)
08449890 +0x0a6:  mov    %eax,(%esp)
08449893 +0x0a9:  call   0822ad66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x410>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x410
08449898 +0x0ae:  lea    -0x10(%ebp),%eax
0844989b +0x0b1:  mov    %eax,(%esp)
0844989e +0x0b4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084498a3 +0x0b9:  mov    0x10(%ebp),%edx
084498a6 +0x0bc:  mov    %edx,0x4(%esp)
084498aa +0x0c0:  mov    %eax,(%esp)
084498ad +0x0c3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084498b2 +0x0c8:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084498b7 +0x0cd:  lea    -0x10(%ebp),%edx
084498ba +0x0d0:  mov    %edx,0x8(%esp)
084498be +0x0d4:  movl   $0x2,0x4(%esp)
084498c6 +0x0dc:  mov    %eax,(%esp)
084498c9 +0x0df:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084498ce +0x0e4:  jmp    084498eb <+0x101>
084498d0 +0x0e6:  mov    %edx,%ebx
084498d2 +0x0e8:  mov    %eax,%esi
084498d4 +0x0ea:  lea    -0x10(%ebp),%eax
084498d7 +0x0ed:  mov    %eax,(%esp)
084498da +0x0f0:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084498df +0x0f5:  mov    %esi,%eax
084498e1 +0x0f7:  mov    %ebx,%edx
084498e3 +0x0f9:  mov    %eax,(%esp)
084498e6 +0x0fc:  call   08ae3750 <_Unwind_Resume>
084498eb +0x101:  lea    -0x10(%ebp),%eax
084498ee +0x104:  mov    %eax,(%esp)
084498f1 +0x107:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084498f6 +0x10c:  add    $0x30,%esp
084498f9 +0x10f:  pop    %ebx
084498fa +0x110:  pop    %esi
084498fb +0x111:  pop    %ebp
084498fc +0x112:  ret
084498fd +0x113:  nop
```

## 反编译 C

```c
// DB_EventUpdateGrowthWeaponTimepiece::makeRequest @ 0x84497ea

/* DB_EventUpdateGrowthWeaponTimepiece::makeRequest(unsigned int, short, int) */

void DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uint param_1,short param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xb941);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08449843 to 084498cd has its CatchHandler @ 084498d0 */
  CStreamGuard::operator<<(pCVar2,0x315);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
