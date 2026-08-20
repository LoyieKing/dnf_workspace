# RequestDBQuest

`_ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBQuest(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c70c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c70c2  _ZN23DisPatcher_SelectCharac14RequestDBQuestEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBQuest(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c70c2, 0x081c727b]
081c70c2 +0x000:  push   %ebp
081c70c3 +0x001:  mov    %esp,%ebp
081c70c5 +0x003:  push   %esi
081c70c6 +0x004:  push   %ebx
081c70c7 +0x005:  sub    $0x20,%esp
081c70ca +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081c70cf +0x00d:  movl   $0x17bd,0x8(%esp)
081c70d7 +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c70df +0x01d:  mov    %eax,(%esp)
081c70e2 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081c70e7 +0x025:  movl   $0x1,0x8(%esp)
081c70ef +0x02d:  mov    %eax,0x4(%esp)
081c70f3 +0x031:  lea    -0x14(%ebp),%eax
081c70f6 +0x034:  mov    %eax,(%esp)
081c70f9 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c70fe +0x03c:  lea    -0x14(%ebp),%eax
081c7101 +0x03f:  mov    %eax,(%esp)
081c7104 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7109 +0x047:  movl   $0xa,0x4(%esp)
081c7111 +0x04f:  mov    %eax,(%esp)
081c7114 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7119 +0x057:  mov    0xc(%ebp),%eax
081c711c +0x05a:  mov    %eax,(%esp)
081c711f +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7124 +0x062:  mov    %eax,%ebx
081c7126 +0x064:  lea    -0x14(%ebp),%eax
081c7129 +0x067:  mov    %eax,(%esp)
081c712c +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7131 +0x06f:  mov    %ebx,0x4(%esp)
081c7135 +0x073:  mov    %eax,(%esp)
081c7138 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c713d +0x07b:  movl   $0x3,0x4(%esp)
081c7145 +0x083:  mov    0xc(%ebp),%eax
081c7148 +0x086:  mov    %eax,(%esp)
081c714b +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c7150 +0x08e:  mov    0xc(%ebp),%eax
081c7153 +0x091:  mov    %eax,(%esp)
081c7156 +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c715b +0x099:  test   %al,%al
081c715d +0x09b:  je     081c71a7 <+0xe5>
081c715f +0x09d:  mov    0xc(%ebp),%eax
081c7162 +0x0a0:  mov    %eax,(%esp)
081c7165 +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c716a +0x0a8:  mov    %eax,%ebx
081c716c +0x0aa:  lea    -0x14(%ebp),%eax
081c716f +0x0ad:  mov    %eax,(%esp)
081c7172 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7177 +0x0b5:  mov    %ebx,0x4(%esp)
081c717b +0x0b9:  mov    %eax,(%esp)
081c717e +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7183 +0x0c1:  mov    0xc(%ebp),%eax
081c7186 +0x0c4:  mov    %eax,(%esp)
081c7189 +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c718e +0x0cc:  mov    %eax,%ebx
081c7190 +0x0ce:  lea    -0x14(%ebp),%eax
081c7193 +0x0d1:  mov    %eax,(%esp)
081c7196 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c719b +0x0d9:  mov    %ebx,0x4(%esp)
081c719f +0x0dd:  mov    %eax,(%esp)
081c71a2 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c71a7 +0x0e5:  lea    -0x14(%ebp),%eax
081c71aa +0x0e8:  mov    %eax,(%esp)
081c71ad +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c71b2 +0x0f0:  mov    %eax,(%esp)
081c71b5 +0x0f3:  call   08236d5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc406
081c71ba +0x0f8:  mov    %eax,-0xc(%ebp)
081c71bd +0x0fb:  movl   $0x7608,0x8(%esp)
081c71c5 +0x103:  movl   $0x0,0x4(%esp)
081c71cd +0x10b:  mov    -0xc(%ebp),%eax
081c71d0 +0x10e:  mov    %eax,(%esp)
081c71d3 +0x111:  call   0807dcc0 <_init+0x5b8>
081c71d8 +0x116:  mov    0x10(%ebp),%eax
081c71db +0x119:  movzbl 0xd(%eax),%eax
081c71df +0x11d:  movsbl %al,%eax
081c71e2 +0x120:  mov    %eax,0x4(%esp)
081c71e6 +0x124:  mov    0xc(%ebp),%eax
081c71e9 +0x127:  mov    %eax,(%esp)
081c71ec +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c71f1 +0x12f:  mov    %eax,%edx
081c71f3 +0x131:  mov    -0xc(%ebp),%eax
081c71f6 +0x134:  mov    %edx,(%eax)
081c71f8 +0x136:  mov    0xc(%ebp),%eax
081c71fb +0x139:  mov    %eax,(%esp)
081c71fe +0x13c:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7203 +0x141:  test   %al,%al
081c7205 +0x143:  je     081c722a <+0x168>
081c7207 +0x145:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c720c +0x14a:  lea    -0x14(%ebp),%edx
081c720f +0x14d:  mov    %edx,0x8(%esp)
081c7213 +0x151:  movl   $0x5,0x4(%esp)
081c721b +0x159:  mov    %eax,(%esp)
081c721e +0x15c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7223 +0x161:  mov    $0x1,%ebx
081c7228 +0x166:  jmp    081c7268 <+0x1a6>
081c722a +0x168:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c722f +0x16d:  lea    -0x14(%ebp),%edx
081c7232 +0x170:  mov    %edx,0x8(%esp)
081c7236 +0x174:  movl   $0x2,0x4(%esp)
081c723e +0x17c:  mov    %eax,(%esp)
081c7241 +0x17f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7246 +0x184:  mov    $0x1,%ebx
081c724b +0x189:  jmp    081c7268 <+0x1a6>
081c724d +0x18b:  mov    %edx,%ebx
081c724f +0x18d:  mov    %eax,%esi
081c7251 +0x18f:  lea    -0x14(%ebp),%eax
081c7254 +0x192:  mov    %eax,(%esp)
081c7257 +0x195:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c725c +0x19a:  mov    %esi,%eax
081c725e +0x19c:  mov    %ebx,%edx
081c7260 +0x19e:  mov    %eax,(%esp)
081c7263 +0x1a1:  call   08ae3750 <_Unwind_Resume>
081c7268 +0x1a6:  lea    -0x14(%ebp),%eax
081c726b +0x1a9:  mov    %eax,(%esp)
081c726e +0x1ac:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7273 +0x1b1:  mov    %ebx,%eax
081c7275 +0x1b3:  add    $0x20,%esp
081c7278 +0x1b6:  pop    %ebx
081c7279 +0x1b7:  pop    %esi
081c727a +0x1b8:  pop    %ebp
081c727b +0x1b9:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBQuest @ 0x81c70c2

/* DisPatcher_SelectCharac::RequestDBQuest(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBQuest
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_QUEST *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17bd);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7114 to 081c7245 has its CatchHandler @ 081c724d */
  CStreamGuard::operator<<(pCVar3,10);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,3);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_QUEST>(pCVar3);
  memset(local_10,0,0x7608);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
