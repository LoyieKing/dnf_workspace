# RequestDBCharac

`_ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBCharac(CUser*, MSG_CHARAC_SELECT const&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c6ca0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6ca0  _ZN23DisPatcher_SelectCharac15RequestDBCharacEP5CUserRK17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBCharac(CUser*, MSG_CHARAC_SELECT const&)
# range [0x081c6ca0, 0x081c6ee5]
081c6ca0 +0x000:  push   %ebp
081c6ca1 +0x001:  mov    %esp,%ebp
081c6ca3 +0x003:  push   %esi
081c6ca4 +0x004:  push   %ebx
081c6ca5 +0x005:  sub    $0x20,%esp
081c6ca8 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c6cad +0x00d:  movl   $0x173d,0x8(%esp)
081c6cb5 +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c6cbd +0x01d:  mov    %eax,(%esp)
081c6cc0 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081c6cc5 +0x025:  movl   $0x1,0x8(%esp)
081c6ccd +0x02d:  mov    %eax,0x4(%esp)
081c6cd1 +0x031:  lea    -0x14(%ebp),%eax
081c6cd4 +0x034:  mov    %eax,(%esp)
081c6cd7 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c6cdc +0x03c:  lea    -0x14(%ebp),%eax
081c6cdf +0x03f:  mov    %eax,(%esp)
081c6ce2 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6ce7 +0x047:  movl   $0x7,0x4(%esp)
081c6cef +0x04f:  mov    %eax,(%esp)
081c6cf2 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6cf7 +0x057:  mov    0xc(%ebp),%eax
081c6cfa +0x05a:  mov    %eax,(%esp)
081c6cfd +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c6d02 +0x062:  mov    %eax,%ebx
081c6d04 +0x064:  lea    -0x14(%ebp),%eax
081c6d07 +0x067:  mov    %eax,(%esp)
081c6d0a +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6d0f +0x06f:  mov    %ebx,0x4(%esp)
081c6d13 +0x073:  mov    %eax,(%esp)
081c6d16 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6d1b +0x07b:  movl   $0x0,0x4(%esp)
081c6d23 +0x083:  mov    0xc(%ebp),%eax
081c6d26 +0x086:  mov    %eax,(%esp)
081c6d29 +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c6d2e +0x08e:  mov    0xc(%ebp),%eax
081c6d31 +0x091:  mov    %eax,(%esp)
081c6d34 +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c6d39 +0x099:  test   %al,%al
081c6d3b +0x09b:  je     081c6d85 <+0xe5>
081c6d3d +0x09d:  mov    0xc(%ebp),%eax
081c6d40 +0x0a0:  mov    %eax,(%esp)
081c6d43 +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c6d48 +0x0a8:  mov    %eax,%ebx
081c6d4a +0x0aa:  lea    -0x14(%ebp),%eax
081c6d4d +0x0ad:  mov    %eax,(%esp)
081c6d50 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6d55 +0x0b5:  mov    %ebx,0x4(%esp)
081c6d59 +0x0b9:  mov    %eax,(%esp)
081c6d5c +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6d61 +0x0c1:  mov    0xc(%ebp),%eax
081c6d64 +0x0c4:  mov    %eax,(%esp)
081c6d67 +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c6d6c +0x0cc:  mov    %eax,%ebx
081c6d6e +0x0ce:  lea    -0x14(%ebp),%eax
081c6d71 +0x0d1:  mov    %eax,(%esp)
081c6d74 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6d79 +0x0d9:  mov    %ebx,0x4(%esp)
081c6d7d +0x0dd:  mov    %eax,(%esp)
081c6d80 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6d85 +0x0e5:  lea    -0x14(%ebp),%eax
081c6d88 +0x0e8:  mov    %eax,(%esp)
081c6d8b +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c6d90 +0x0f0:  mov    %eax,(%esp)
081c6d93 +0x0f3:  call   08236d1a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3c4
081c6d98 +0x0f8:  mov    %eax,-0xc(%ebp)
081c6d9b +0x0fb:  mov    -0xc(%ebp),%eax
081c6d9e +0x0fe:  add    $0xc,%eax
081c6da1 +0x101:  mov    %eax,(%esp)
081c6da4 +0x104:  call   0822ec9e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4348>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4348
081c6da9 +0x109:  mov    0xc(%ebp),%eax
081c6dac +0x10c:  mov    %eax,(%esp)
081c6daf +0x10f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081c6db4 +0x114:  mov    -0xc(%ebp),%edx
081c6db7 +0x117:  mov    %eax,(%edx)
081c6db9 +0x119:  mov    0x10(%ebp),%eax
081c6dbc +0x11c:  movzbl 0xd(%eax),%eax
081c6dc0 +0x120:  movsbl %al,%eax
081c6dc3 +0x123:  mov    %eax,0x4(%esp)
081c6dc7 +0x127:  mov    0xc(%ebp),%eax
081c6dca +0x12a:  mov    %eax,(%esp)
081c6dcd +0x12d:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c6dd2 +0x132:  mov    %eax,%edx
081c6dd4 +0x134:  mov    -0xc(%ebp),%eax
081c6dd7 +0x137:  mov    %edx,0x4(%eax)
081c6dda +0x13a:  mov    0xc(%ebp),%eax
081c6ddd +0x13d:  mov    %eax,(%esp)
081c6de0 +0x140:  call   0822fe02 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x54ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x54ac
081c6de5 +0x145:  mov    -0xc(%ebp),%edx
081c6de8 +0x148:  mov    %eax,0x682(%edx)
081c6dee +0x14e:  mov    -0xc(%ebp),%eax
081c6df1 +0x151:  add    $0x68b,%eax
081c6df6 +0x156:  mov    %eax,(%esp)
081c6df9 +0x159:  call   0822ed84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x442e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x442e
081c6dfe +0x15e:  mov    0x10(%ebp),%eax
081c6e01 +0x161:  mov    0xe(%eax),%edx
081c6e04 +0x164:  mov    -0xc(%ebp),%eax
081c6e07 +0x167:  mov    %edx,0x686(%eax)
081c6e0d +0x16d:  mov    0x10(%ebp),%eax
081c6e10 +0x170:  movzbl 0x12(%eax),%edx
081c6e14 +0x174:  mov    -0xc(%ebp),%eax
081c6e17 +0x177:  mov    %dl,0x68a(%eax)
081c6e1d +0x17d:  mov    -0xc(%ebp),%eax
081c6e20 +0x180:  mov    0x4(%eax),%eax
081c6e23 +0x183:  mov    %eax,0x4(%esp)
081c6e27 +0x187:  mov    0xc(%ebp),%eax
081c6e2a +0x18a:  mov    %eax,(%esp)
081c6e2d +0x18d:  call   0864e024 <_ZNK5CUser17get_character_jobEj>  ; CUser::get_character_job(unsigned int) const
081c6e32 +0x192:  mov    %eax,%ebx
081c6e34 +0x194:  mov    0xc(%ebp),%eax
081c6e37 +0x197:  mov    %eax,(%esp)
081c6e3a +0x19a:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c6e3f +0x19f:  mov    %eax,0x4(%esp)
081c6e43 +0x1a3:  mov    0xc(%ebp),%eax
081c6e46 +0x1a6:  mov    %eax,(%esp)
081c6e49 +0x1a9:  call   0864e024 <_ZNK5CUser17get_character_jobEj>  ; CUser::get_character_job(unsigned int) const
081c6e4e +0x1ae:  mov    %ebx,0x8(%esp)
081c6e52 +0x1b2:  mov    %eax,0x4(%esp)
081c6e56 +0x1b6:  mov    0xc(%ebp),%eax
081c6e59 +0x1b9:  mov    %eax,(%esp)
081c6e5c +0x1bc:  call   08692d2a <_ZN5CUser20LoadCharacTypeHotKeyEii>  ; CUser::LoadCharacTypeHotKey(int, int)
081c6e61 +0x1c1:  mov    0xc(%ebp),%eax
081c6e64 +0x1c4:  mov    %eax,(%esp)
081c6e67 +0x1c7:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c6e6c +0x1cc:  test   %al,%al
081c6e6e +0x1ce:  je     081c6e93 <+0x1f3>
081c6e70 +0x1d0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c6e75 +0x1d5:  lea    -0x14(%ebp),%edx
081c6e78 +0x1d8:  mov    %edx,0x8(%esp)
081c6e7c +0x1dc:  movl   $0x5,0x4(%esp)
081c6e84 +0x1e4:  mov    %eax,(%esp)
081c6e87 +0x1e7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c6e8c +0x1ec:  mov    $0x1,%ebx
081c6e91 +0x1f1:  jmp    081c6ed1 <+0x231>
081c6e93 +0x1f3:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c6e98 +0x1f8:  lea    -0x14(%ebp),%edx
081c6e9b +0x1fb:  mov    %edx,0x8(%esp)
081c6e9f +0x1ff:  movl   $0x2,0x4(%esp)
081c6ea7 +0x207:  mov    %eax,(%esp)
081c6eaa +0x20a:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c6eaf +0x20f:  mov    $0x1,%ebx
081c6eb4 +0x214:  jmp    081c6ed1 <+0x231>
081c6eb6 +0x216:  mov    %edx,%ebx
081c6eb8 +0x218:  mov    %eax,%esi
081c6eba +0x21a:  lea    -0x14(%ebp),%eax
081c6ebd +0x21d:  mov    %eax,(%esp)
081c6ec0 +0x220:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c6ec5 +0x225:  mov    %esi,%eax
081c6ec7 +0x227:  mov    %ebx,%edx
081c6ec9 +0x229:  mov    %eax,(%esp)
081c6ecc +0x22c:  call   08ae3750 <_Unwind_Resume>
081c6ed1 +0x231:  lea    -0x14(%ebp),%eax
081c6ed4 +0x234:  mov    %eax,(%esp)
081c6ed7 +0x237:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c6edc +0x23c:  mov    %ebx,%eax
081c6ede +0x23e:  add    $0x20,%esp
081c6ee1 +0x241:  pop    %ebx
081c6ee2 +0x242:  pop    %esi
081c6ee3 +0x243:  pop    %ebp
081c6ee4 +0x244:  ret
081c6ee5 +0x245:  nop
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBCharac @ 0x81c6ca0

/* DisPatcher_SelectCharac::RequestDBCharac(CUser*, MSG_CHARAC_SELECT const&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBCharac
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  CStreamGuard local_18 [8];
  SIG_LOAD_CHARAC *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x173d);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c6cf2 to 081c6eae has its CatchHandler @ 081c6eb6 */
  CStreamGuard::operator<<(pCVar3,7);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,0);
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
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_CHARAC>(pCVar3);
  CHARAC_DATA::Reset((CHARAC_DATA *)(local_10 + 0xc));
  uVar5 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar5;
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)(local_10 + 4) = uVar5;
  uVar5 = CUser::GetSchoolNo(param_1);
  *(undefined4 *)(local_10 + 0x682) = uVar5;
  TAG_CHARAC_DATA::clear((TAG_CHARAC_DATA *)(local_10 + 0x68b));
  *(undefined4 *)(local_10 + 0x686) = *(undefined4 *)(param_2 + 0xe);
  local_10[0x68a] = *(SIG_LOAD_CHARAC *)(param_2 + 0x12);
  iVar4 = CUser::get_character_job(param_1,*(uint *)(local_10 + 4));
  uVar6 = CUser::GetLastLoginCharacNo(param_1);
  iVar7 = CUser::get_character_job(param_1,uVar6);
  CUser::LoadCharacTypeHotKey(param_1,iVar7,iVar4);
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
