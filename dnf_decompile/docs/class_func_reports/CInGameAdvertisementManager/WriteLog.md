# WriteLog

`_ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj`

`CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fda56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fda56  _ZN27CInGameAdvertisementManager8WriteLogEP5CUsercscj
#           CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int)
# range [0x080fda56, 0x080fdc62]
080fda56 +0x000:  push   %ebp
080fda57 +0x001:  mov    %esp,%ebp
080fda59 +0x003:  push   %esi
080fda5a +0x004:  push   %ebx
080fda5b +0x005:  sub    $0x50,%esp
080fda5e +0x008:  mov    0x10(%ebp),%ecx
080fda61 +0x00b:  mov    0x14(%ebp),%edx
080fda64 +0x00e:  mov    0x18(%ebp),%eax
080fda67 +0x011:  mov    %cl,-0x3c(%ebp)
080fda6a +0x014:  mov    %dx,-0x40(%ebp)
080fda6e +0x018:  mov    %al,-0x44(%ebp)
080fda71 +0x01b:  cmpl   $0x0,0xc(%ebp)
080fda75 +0x01f:  je     080fdc5b <+0x205>
080fda7b +0x025:  movl   $0xffffffff,-0x28(%ebp)
080fda82 +0x02c:  movl   $0xffffffff,-0x24(%ebp)
080fda89 +0x033:  movl   $0xffffffff,-0x20(%ebp)
080fda90 +0x03a:  mov    0xc(%ebp),%eax
080fda93 +0x03d:  mov    %eax,(%esp)
080fda96 +0x040:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080fda9b +0x045:  cmp    $0x5,%eax
080fda9e +0x048:  sete   %al
080fdaa1 +0x04b:  test   %al,%al
080fdaa3 +0x04d:  je     080fdae2 <+0x8c>
080fdaa5 +0x04f:  mov    0xc(%ebp),%eax
080fdaa8 +0x052:  mov    %eax,(%esp)
080fdaab +0x055:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
080fdab0 +0x05a:  mov    %eax,-0x18(%ebp)
080fdab3 +0x05d:  cmpl   $0x0,-0x18(%ebp)
080fdab7 +0x061:  je     080fdb1e <+0xc8>
080fdab9 +0x063:  mov    -0x18(%ebp),%eax
080fdabc +0x066:  add    $0xb24,%eax
080fdac1 +0x06b:  mov    %eax,(%esp)
080fdac4 +0x06e:  call   080fdcfc <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x28>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x28
080fdac9 +0x073:  mov    %eax,-0x14(%ebp)
080fdacc +0x076:  cmpl   $0x0,-0x14(%ebp)
080fdad0 +0x07a:  je     080fdb1e <+0xc8>
080fdad2 +0x07c:  mov    -0x14(%ebp),%eax
080fdad5 +0x07f:  mov    %eax,(%esp)
080fdad8 +0x082:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
080fdadd +0x087:  mov    %eax,-0x28(%ebp)
080fdae0 +0x08a:  jmp    080fdb1e <+0xc8>
080fdae2 +0x08c:  mov    0xc(%ebp),%eax
080fdae5 +0x08f:  mov    %eax,(%esp)
080fdae8 +0x092:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
080fdaed +0x097:  cmp    $0x3,%eax
080fdaf0 +0x09a:  sete   %al
080fdaf3 +0x09d:  test   %al,%al
080fdaf5 +0x09f:  je     080fdb1e <+0xc8>
080fdaf7 +0x0a1:  mov    0xc(%ebp),%eax
080fdafa +0x0a4:  mov    %eax,(%esp)
080fdafd +0x0a7:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
080fdb02 +0x0ac:  movsbl %al,%eax
080fdb05 +0x0af:  mov    %eax,-0x10(%ebp)
080fdb08 +0x0b2:  movl   $0x0,0x4(%esp)
080fdb10 +0x0ba:  mov    0xc(%ebp),%eax
080fdb13 +0x0bd:  mov    %eax,(%esp)
080fdb16 +0x0c0:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
080fdb1b +0x0c5:  mov    %eax,-0xc(%ebp)
080fdb1e +0x0c8:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
080fdb23 +0x0cd:  movl   $0x17a,0x8(%esp)
080fdb2b +0x0d5:  movl   $"InGameAdvertisementManager.cpp",0x4(%esp)
080fdb33 +0x0dd:  mov    %eax,(%esp)
080fdb36 +0x0e0:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
080fdb3b +0x0e5:  movl   $0x1,0x8(%esp)
080fdb43 +0x0ed:  mov    %eax,0x4(%esp)
080fdb47 +0x0f1:  lea    -0x30(%ebp),%eax
080fdb4a +0x0f4:  mov    %eax,(%esp)
080fdb4d +0x0f7:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
080fdb52 +0x0fc:  lea    -0x30(%ebp),%eax
080fdb55 +0x0ff:  mov    %eax,(%esp)
080fdb58 +0x102:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080fdb5d +0x107:  movl   $0x32c,0x4(%esp)
080fdb65 +0x10f:  mov    %eax,(%esp)
080fdb68 +0x112:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080fdb6d +0x117:  mov    0xc(%ebp),%eax
080fdb70 +0x11a:  mov    %eax,(%esp)
080fdb73 +0x11d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
080fdb78 +0x122:  mov    %eax,%ebx
080fdb7a +0x124:  lea    -0x30(%ebp),%eax
080fdb7d +0x127:  mov    %eax,(%esp)
080fdb80 +0x12a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
080fdb85 +0x12f:  mov    %ebx,0x4(%esp)
080fdb89 +0x133:  mov    %eax,(%esp)
080fdb8c +0x136:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
080fdb91 +0x13b:  lea    -0x30(%ebp),%eax
080fdb94 +0x13e:  mov    %eax,(%esp)
080fdb97 +0x141:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
080fdb9c +0x146:  mov    %eax,(%esp)
080fdb9f +0x149:  call   080fe5d4 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x900>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x900
080fdba4 +0x14e:  mov    %eax,-0x1c(%ebp)
080fdba7 +0x151:  mov    0xc(%ebp),%eax
080fdbaa +0x154:  mov    %eax,(%esp)
080fdbad +0x157:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
080fdbb2 +0x15c:  mov    -0x1c(%ebp),%edx
080fdbb5 +0x15f:  mov    %eax,(%edx)
080fdbb7 +0x161:  movl   $0xffffffff,0x4(%esp)
080fdbbf +0x169:  mov    0xc(%ebp),%eax
080fdbc2 +0x16c:  mov    %eax,(%esp)
080fdbc5 +0x16f:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
080fdbca +0x174:  mov    %eax,%edx
080fdbcc +0x176:  mov    -0x1c(%ebp),%eax
080fdbcf +0x179:  mov    %edx,0x4(%eax)
080fdbd2 +0x17c:  mov    -0x1c(%ebp),%eax
080fdbd5 +0x17f:  mov    -0x20(%ebp),%edx
080fdbd8 +0x182:  mov    %edx,0x1c(%eax)
080fdbdb +0x185:  mov    -0x1c(%ebp),%eax
080fdbde +0x188:  movzwl -0x40(%ebp),%edx
080fdbe2 +0x18c:  mov    %dx,0xa(%eax)
080fdbe6 +0x190:  mov    -0x1c(%ebp),%eax
080fdbe9 +0x193:  movzbl -0x3c(%ebp),%edx
080fdbed +0x197:  mov    %dl,0x8(%eax)
080fdbf0 +0x19a:  mov    -0x1c(%ebp),%eax
080fdbf3 +0x19d:  movzbl -0x44(%ebp),%edx
080fdbf7 +0x1a1:  mov    %dl,0xc(%eax)
080fdbfa +0x1a4:  mov    -0x1c(%ebp),%eax
080fdbfd +0x1a7:  mov    0x1c(%ebp),%edx
080fdc00 +0x1aa:  mov    %edx,0x10(%eax)
080fdc03 +0x1ad:  mov    -0x1c(%ebp),%eax
080fdc06 +0x1b0:  mov    -0x28(%ebp),%edx
080fdc09 +0x1b3:  mov    %edx,0x14(%eax)
080fdc0c +0x1b6:  mov    -0x1c(%ebp),%eax
080fdc0f +0x1b9:  mov    -0x24(%ebp),%edx
080fdc12 +0x1bc:  mov    %edx,0x18(%eax)
080fdc15 +0x1bf:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
080fdc1a +0x1c4:  lea    -0x30(%ebp),%edx
080fdc1d +0x1c7:  mov    %edx,0x8(%esp)
080fdc21 +0x1cb:  movl   $0x4,0x4(%esp)
080fdc29 +0x1d3:  mov    %eax,(%esp)
080fdc2c +0x1d6:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
080fdc31 +0x1db:  jmp    080fdc4e <+0x1f8>
080fdc33 +0x1dd:  mov    %edx,%ebx
080fdc35 +0x1df:  mov    %eax,%esi
080fdc37 +0x1e1:  lea    -0x30(%ebp),%eax
080fdc3a +0x1e4:  mov    %eax,(%esp)
080fdc3d +0x1e7:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080fdc42 +0x1ec:  mov    %esi,%eax
080fdc44 +0x1ee:  mov    %ebx,%edx
080fdc46 +0x1f0:  mov    %eax,(%esp)
080fdc49 +0x1f3:  call   08ae3750 <_Unwind_Resume>
080fdc4e +0x1f8:  lea    -0x30(%ebp),%eax
080fdc51 +0x1fb:  mov    %eax,(%esp)
080fdc54 +0x1fe:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
080fdc59 +0x203:  jmp    080fdc5c <+0x206>
080fdc5b +0x205:  nop
080fdc5c +0x206:  add    $0x50,%esp
080fdc5f +0x209:  pop    %ebx
080fdc60 +0x20a:  pop    %esi
080fdc61 +0x20b:  pop    %ebp
080fdc62 +0x20c:  ret
```

## 反编译 C

```c
// CInGameAdvertisementManager::WriteLog @ 0x80fda56

/* CInGameAdvertisementManager::WriteLog(CUser*, char, short, char, unsigned int) */

void __thiscall
CInGameAdvertisementManager::WriteLog
          (CInGameAdvertisementManager *this,CUser *param_1,char param_2,short param_3,char param_4,
          uint param_5)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  CStreamGuard local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  SIG_IN_GAME_ADVERTISEMENT_LOG *local_20;
  int local_1c;
  CDungeon *local_18;
  int local_14;
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_2c = 0xffffffff;
    local_28 = 0xffffffff;
    local_24 = 0xffffffff;
    iVar2 = CUser::get_state(param_1);
    if (iVar2 == 5) {
      local_1c = CUser::GetParty(param_1);
      if (local_1c != 0) {
        local_18 = (CDungeon *)CBattle_Field::GetDungeon((CBattle_Field *)(local_1c + 0xb24));
        if (local_18 != (CDungeon *)0x0) {
          local_2c = CDungeon::get_index(local_18);
        }
      }
    }
    else {
      iVar2 = CUser::get_state(param_1);
      if (iVar2 == 3) {
        cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
        local_14 = (int)cVar1;
        local_10 = CUser::get_area(param_1,false);
      }
    }
    pSVar3 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"InGameAdvertisementManager.cpp",0x17a);
    CStreamGuard::CStreamGuard(local_34,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 080fdb68 to 080fdc30 has its CatchHandler @ 080fdc33 */
    CStreamGuard::operator<<(pCVar4,0x32c);
    iVar2 = CUser::GetUID(param_1);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar4,iVar2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_20 = CStreamGuard::GetInBuffer<SIG_IN_GAME_ADVERTISEMENT_LOG>(pCVar4);
    uVar5 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_20 = uVar5;
    uVar5 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_20 + 4) = uVar5;
    *(undefined4 *)(local_20 + 0x1c) = local_24;
    *(short *)(local_20 + 10) = param_3;
    local_20[8] = (SIG_IN_GAME_ADVERTISEMENT_LOG)param_2;
    local_20[0xc] = (SIG_IN_GAME_ADVERTISEMENT_LOG)param_4;
    *(uint *)(local_20 + 0x10) = param_5;
    *(undefined4 *)(local_20 + 0x14) = local_2c;
    *(undefined4 *)(local_20 + 0x18) = local_28;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,4,local_34);
    CStreamGuard::~CStreamGuard(local_34);
  }
  return;
}
```
