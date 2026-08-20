# send_db

`_ZN23premium_helper_function7send_dbEP5CUserilli`

`premium_helper_function::send_db(CUser*, int, long, long, int)`

| 类 | 地址 |
|---|---|
| `premium_helper_function` | `0x0827d127` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827d127  _ZN23premium_helper_function7send_dbEP5CUserilli
#           premium_helper_function::send_db(CUser*, int, long, long, int)
# range [0x0827d127, 0x0827d29c]
0827d127 +0x000:  push   %ebp
0827d128 +0x001:  mov    %esp,%ebp
0827d12a +0x003:  push   %esi
0827d12b +0x004:  push   %ebx
0827d12c +0x005:  sub    $0x20,%esp
0827d12f +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0827d134 +0x00d:  movl   $0x295,0x8(%esp)
0827d13c +0x015:  movl   $"SpecialItemHandler.cpp",0x4(%esp)
0827d144 +0x01d:  mov    %eax,(%esp)
0827d147 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0827d14c +0x025:  movl   $0x1,0x8(%esp)
0827d154 +0x02d:  mov    %eax,0x4(%esp)
0827d158 +0x031:  lea    -0x10(%ebp),%eax
0827d15b +0x034:  mov    %eax,(%esp)
0827d15e +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0827d163 +0x03c:  lea    -0x10(%ebp),%eax
0827d166 +0x03f:  mov    %eax,(%esp)
0827d169 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d16e +0x047:  movl   $0x54,0x4(%esp)
0827d176 +0x04f:  mov    %eax,(%esp)
0827d179 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827d17e +0x057:  mov    0x8(%ebp),%eax
0827d181 +0x05a:  mov    %eax,(%esp)
0827d184 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0827d189 +0x062:  mov    %eax,%ebx
0827d18b +0x064:  lea    -0x10(%ebp),%eax
0827d18e +0x067:  mov    %eax,(%esp)
0827d191 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d196 +0x06f:  mov    %ebx,0x4(%esp)
0827d19a +0x073:  mov    %eax,(%esp)
0827d19d +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827d1a2 +0x07b:  mov    0x8(%ebp),%eax
0827d1a5 +0x07e:  mov    %eax,(%esp)
0827d1a8 +0x081:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827d1ad +0x086:  mov    %eax,%ebx
0827d1af +0x088:  lea    -0x10(%ebp),%eax
0827d1b2 +0x08b:  mov    %eax,(%esp)
0827d1b5 +0x08e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d1ba +0x093:  mov    %ebx,0x4(%esp)
0827d1be +0x097:  mov    %eax,(%esp)
0827d1c1 +0x09a:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0827d1c6 +0x09f:  lea    -0x10(%ebp),%eax
0827d1c9 +0x0a2:  mov    %eax,(%esp)
0827d1cc +0x0a5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d1d1 +0x0aa:  mov    0xc(%ebp),%edx
0827d1d4 +0x0ad:  mov    %edx,0x4(%esp)
0827d1d8 +0x0b1:  mov    %eax,(%esp)
0827d1db +0x0b4:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827d1e0 +0x0b9:  lea    -0x10(%ebp),%eax
0827d1e3 +0x0bc:  mov    %eax,(%esp)
0827d1e6 +0x0bf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d1eb +0x0c4:  mov    0x10(%ebp),%edx
0827d1ee +0x0c7:  mov    %edx,0x4(%esp)
0827d1f2 +0x0cb:  mov    %eax,(%esp)
0827d1f5 +0x0ce:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
0827d1fa +0x0d3:  lea    -0x10(%ebp),%eax
0827d1fd +0x0d6:  mov    %eax,(%esp)
0827d200 +0x0d9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d205 +0x0de:  mov    0x14(%ebp),%edx
0827d208 +0x0e1:  mov    %edx,0x4(%esp)
0827d20c +0x0e5:  mov    %eax,(%esp)
0827d20f +0x0e8:  call   080e2276 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1c>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1c
0827d214 +0x0ed:  lea    -0x10(%ebp),%eax
0827d217 +0x0f0:  mov    %eax,(%esp)
0827d21a +0x0f3:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d21f +0x0f8:  mov    0x18(%ebp),%edx
0827d222 +0x0fb:  mov    %edx,0x4(%esp)
0827d226 +0x0ff:  mov    %eax,(%esp)
0827d229 +0x102:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0827d22e +0x107:  mov    0xc(%ebp),%eax
0827d231 +0x10a:  mov    %eax,(%esp)
0827d234 +0x10d:  call   0827d0f5 <_ZN23premium_helper_function17get_target_serverEi>  ; premium_helper_function::get_target_server(int)
0827d239 +0x112:  mov    %eax,%ebx
0827d23b +0x114:  lea    -0x10(%ebp),%eax
0827d23e +0x117:  mov    %eax,(%esp)
0827d241 +0x11a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0827d246 +0x11f:  mov    %ebx,0x4(%esp)
0827d24a +0x123:  mov    %eax,(%esp)
0827d24d +0x126:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0827d252 +0x12b:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0827d257 +0x130:  lea    -0x10(%ebp),%edx
0827d25a +0x133:  mov    %edx,0x8(%esp)
0827d25e +0x137:  movl   $0x2,0x4(%esp)
0827d266 +0x13f:  mov    %eax,(%esp)
0827d269 +0x142:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0827d26e +0x147:  jmp    0827d28b <+0x164>
0827d270 +0x149:  mov    %edx,%ebx
0827d272 +0x14b:  mov    %eax,%esi
0827d274 +0x14d:  lea    -0x10(%ebp),%eax
0827d277 +0x150:  mov    %eax,(%esp)
0827d27a +0x153:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0827d27f +0x158:  mov    %esi,%eax
0827d281 +0x15a:  mov    %ebx,%edx
0827d283 +0x15c:  mov    %eax,(%esp)
0827d286 +0x15f:  call   08ae3750 <_Unwind_Resume>
0827d28b +0x164:  lea    -0x10(%ebp),%eax
0827d28e +0x167:  mov    %eax,(%esp)
0827d291 +0x16a:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0827d296 +0x16f:  add    $0x20,%esp
0827d299 +0x172:  pop    %ebx
0827d29a +0x173:  pop    %esi
0827d29b +0x174:  pop    %ebp
0827d29c +0x175:  ret
```

## 反编译 C

```c
// premium_helper_function::send_db @ 0x827d127

/* premium_helper_function::send_db(CUser*, int, long, long, int) */

void premium_helper_function::send_db
               (CUser *param_1,int param_2,long param_3,long param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"SpecialItemHandler.cpp",0x295);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0827d179 to 0827d26d has its CatchHandler @ 0827d270 */
  CStreamGuard::operator<<(pCVar2,0x54);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = CUser::get_acc_id(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_4);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_5);
  uVar4 = get_target_server(param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
