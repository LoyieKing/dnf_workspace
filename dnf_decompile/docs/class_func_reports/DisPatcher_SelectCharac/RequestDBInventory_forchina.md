# RequestDBInventory_forchina

`_ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBInventory_forchina(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c7c1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c7c1c  _ZN23DisPatcher_SelectCharac27RequestDBInventory_forchinaEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBInventory_forchina(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c7c1c, 0x081c7e0f]
081c7c1c +0x000:  push   %ebp
081c7c1d +0x001:  mov    %esp,%ebp
081c7c1f +0x003:  push   %esi
081c7c20 +0x004:  push   %ebx
081c7c21 +0x005:  sub    $0x20,%esp
081c7c24 +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
081c7c29 +0x00d:  movl   $0x18af,0x8(%esp)
081c7c31 +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c7c39 +0x01d:  mov    %eax,(%esp)
081c7c3c +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
081c7c41 +0x025:  movl   $0x1,0x8(%esp)
081c7c49 +0x02d:  mov    %eax,0x4(%esp)
081c7c4d +0x031:  lea    -0x14(%ebp),%eax
081c7c50 +0x034:  mov    %eax,(%esp)
081c7c53 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c7c58 +0x03c:  lea    -0x14(%ebp),%eax
081c7c5b +0x03f:  mov    %eax,(%esp)
081c7c5e +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7c63 +0x047:  movl   $0x8,0x4(%esp)
081c7c6b +0x04f:  mov    %eax,(%esp)
081c7c6e +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7c73 +0x057:  mov    0xc(%ebp),%eax
081c7c76 +0x05a:  mov    %eax,(%esp)
081c7c79 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c7c7e +0x062:  mov    %eax,%ebx
081c7c80 +0x064:  lea    -0x14(%ebp),%eax
081c7c83 +0x067:  mov    %eax,(%esp)
081c7c86 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7c8b +0x06f:  mov    %ebx,0x4(%esp)
081c7c8f +0x073:  mov    %eax,(%esp)
081c7c92 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7c97 +0x07b:  movl   $0x1,0x4(%esp)
081c7c9f +0x083:  mov    0xc(%ebp),%eax
081c7ca2 +0x086:  mov    %eax,(%esp)
081c7ca5 +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c7caa +0x08e:  mov    0xc(%ebp),%eax
081c7cad +0x091:  mov    %eax,(%esp)
081c7cb0 +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7cb5 +0x099:  test   %al,%al
081c7cb7 +0x09b:  je     081c7d01 <+0xe5>
081c7cb9 +0x09d:  mov    0xc(%ebp),%eax
081c7cbc +0x0a0:  mov    %eax,(%esp)
081c7cbf +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c7cc4 +0x0a8:  mov    %eax,%ebx
081c7cc6 +0x0aa:  lea    -0x14(%ebp),%eax
081c7cc9 +0x0ad:  mov    %eax,(%esp)
081c7ccc +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7cd1 +0x0b5:  mov    %ebx,0x4(%esp)
081c7cd5 +0x0b9:  mov    %eax,(%esp)
081c7cd8 +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7cdd +0x0c1:  mov    0xc(%ebp),%eax
081c7ce0 +0x0c4:  mov    %eax,(%esp)
081c7ce3 +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c7ce8 +0x0cc:  mov    %eax,%ebx
081c7cea +0x0ce:  lea    -0x14(%ebp),%eax
081c7ced +0x0d1:  mov    %eax,(%esp)
081c7cf0 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c7cf5 +0x0d9:  mov    %ebx,0x4(%esp)
081c7cf9 +0x0dd:  mov    %eax,(%esp)
081c7cfc +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c7d01 +0x0e5:  lea    -0x14(%ebp),%eax
081c7d04 +0x0e8:  mov    %eax,(%esp)
081c7d07 +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c7d0c +0x0f0:  mov    %eax,(%esp)
081c7d0f +0x0f3:  call   08236d30 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3da
081c7d14 +0x0f8:  mov    %eax,-0xc(%ebp)
081c7d17 +0x0fb:  movl   $&_ZL14gUnicodeBuffer+0xaf20,0x8(%esp)
081c7d1f +0x103:  movl   $0x0,0x4(%esp)
081c7d27 +0x10b:  mov    -0xc(%ebp),%eax
081c7d2a +0x10e:  mov    %eax,(%esp)
081c7d2d +0x111:  call   0807dcc0 <_init+0x5b8>
081c7d32 +0x116:  mov    0xc(%ebp),%eax
081c7d35 +0x119:  mov    %eax,(%esp)
081c7d38 +0x11c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c7d3d +0x121:  mov    -0xc(%ebp),%edx
081c7d40 +0x124:  mov    %eax,(%edx)
081c7d42 +0x126:  mov    0x10(%ebp),%eax
081c7d45 +0x129:  movzbl 0xd(%eax),%eax
081c7d49 +0x12d:  movsbl %al,%eax
081c7d4c +0x130:  mov    %eax,0x4(%esp)
081c7d50 +0x134:  mov    0xc(%ebp),%eax
081c7d53 +0x137:  mov    %eax,(%esp)
081c7d56 +0x13a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c7d5b +0x13f:  mov    %eax,%edx
081c7d5d +0x141:  mov    -0xc(%ebp),%eax
081c7d60 +0x144:  mov    %edx,0x4(%eax)
081c7d63 +0x147:  mov    -0xc(%ebp),%eax
081c7d66 +0x14a:  add    $0xc,%eax
081c7d69 +0x14d:  mov    %eax,(%esp)
081c7d6c +0x150:  call   0822edd0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x447a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x447a
081c7d71 +0x155:  mov    0x10(%ebp),%eax
081c7d74 +0x158:  mov    0xe(%eax),%edx
081c7d77 +0x15b:  mov    -0xc(%ebp),%eax
081c7d7a +0x15e:  mov    %edx,0x8(%eax)
081c7d7d +0x161:  mov    0xc(%ebp),%eax
081c7d80 +0x164:  mov    %eax,(%esp)
081c7d83 +0x167:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7d88 +0x16c:  test   %al,%al
081c7d8a +0x16e:  je     081c7db4 <+0x198>
081c7d8c +0x170:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7d91 +0x175:  lea    -0x14(%ebp),%edx
081c7d94 +0x178:  mov    %edx,0x8(%esp)
081c7d98 +0x17c:  movl   $0x5,0x4(%esp)
081c7da0 +0x184:  mov    %eax,(%esp)
081c7da3 +0x187:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7da8 +0x18c:  mov    $0x1,%esi
081c7dad +0x191:  mov    $0x0,%ebx
081c7db2 +0x196:  jmp    081c7df2 <+0x1d6>
081c7db4 +0x198:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7db9 +0x19d:  lea    -0x14(%ebp),%edx
081c7dbc +0x1a0:  mov    %edx,0x8(%esp)
081c7dc0 +0x1a4:  movl   $0x2,0x4(%esp)
081c7dc8 +0x1ac:  mov    %eax,(%esp)
081c7dcb +0x1af:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7dd0 +0x1b4:  mov    $0x1,%ebx
081c7dd5 +0x1b9:  jmp    081c7df2 <+0x1d6>
081c7dd7 +0x1bb:  mov    %edx,%ebx
081c7dd9 +0x1bd:  mov    %eax,%esi
081c7ddb +0x1bf:  lea    -0x14(%ebp),%eax
081c7dde +0x1c2:  mov    %eax,(%esp)
081c7de1 +0x1c5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7de6 +0x1ca:  mov    %esi,%eax
081c7de8 +0x1cc:  mov    %ebx,%edx
081c7dea +0x1ce:  mov    %eax,(%esp)
081c7ded +0x1d1:  call   08ae3750 <_Unwind_Resume>
081c7df2 +0x1d6:  lea    -0x14(%ebp),%eax
081c7df5 +0x1d9:  mov    %eax,(%esp)
081c7df8 +0x1dc:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c7dfd +0x1e1:  test   %ebx,%ebx
081c7dff +0x1e3:  je     081c7e06 <+0x1ea>
081c7e01 +0x1e5:  mov    $0x1,%esi
081c7e06 +0x1ea:  mov    %esi,%eax
081c7e08 +0x1ec:  add    $0x20,%esp
081c7e0b +0x1ef:  pop    %ebx
081c7e0c +0x1f0:  pop    %esi
081c7e0d +0x1f1:  pop    %ebp
081c7e0e +0x1f2:  ret
081c7e0f +0x1f3:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBInventory_forchina @ 0x81c7c1c

/* DisPatcher_SelectCharac::RequestDBInventory_forchina(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBInventory_forchina
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  CStreamGuard local_18 [8];
  SIG_LOAD_INVENTORY *local_10;
  
  pSVar2 = (Stream *)
           BigStreamPool::Acquire
                     (GlobalData::s_big_stream_pool,"PacketDispatcher_Impl_1.cpp",0x18af);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c7c6e to 081c7dcf has its CatchHandler @ 081c7dd7 */
  CStreamGuard::operator<<(pCVar3,8);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,1);
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
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_INVENTORY>(pCVar3);
  memset(local_10,0,0x1544c);
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar5;
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 4) = uVar5;
  TAG_CHARAC_INVEN_DATA::clear((TAG_CHARAC_INVEN_DATA *)(local_10 + 0xc));
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(param_2 + 0xe);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
    unaff_ESI = 1;
  }
  CStreamGuard::~CStreamGuard(local_18);
  if (cVar1 == '\0') {
    unaff_ESI = 1;
  }
  return unaff_ESI;
}
```
