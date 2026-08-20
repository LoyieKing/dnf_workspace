# _UpdateUserInfo4Guild

`_ZN5CUser21_UpdateUserInfo4GuildEv`

`CUser::_UpdateUserInfo4Guild()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867cd20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867cd20  _ZN5CUser21_UpdateUserInfo4GuildEv
#           CUser::_UpdateUserInfo4Guild()
# range [0x0867cd20, 0x0867cead]
0867cd20 +0x000:  push   %ebp
0867cd21 +0x001:  mov    %esp,%ebp
0867cd23 +0x003:  push   %esi
0867cd24 +0x004:  push   %ebx
0867cd25 +0x005:  sub    $0x20,%esp
0867cd28 +0x008:  mov    0x8(%ebp),%eax
0867cd2b +0x00b:  mov    %eax,(%esp)
0867cd2e +0x00e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0867cd33 +0x013:  test   %eax,%eax
0867cd35 +0x015:  sete   %al
0867cd38 +0x018:  test   %al,%al
0867cd3a +0x01a:  jne    0867cea5 <+0x185>
0867cd40 +0x020:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0867cd45 +0x025:  movl   $0x793f,0x8(%esp)
0867cd4d +0x02d:  movl   $"user.cpp",0x4(%esp)
0867cd55 +0x035:  mov    %eax,(%esp)
0867cd58 +0x038:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0867cd5d +0x03d:  movl   $0x1,0x8(%esp)
0867cd65 +0x045:  mov    %eax,0x4(%esp)
0867cd69 +0x049:  lea    -0x10(%ebp),%eax
0867cd6c +0x04c:  mov    %eax,(%esp)
0867cd6f +0x04f:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0867cd74 +0x054:  lea    -0x10(%ebp),%eax
0867cd77 +0x057:  mov    %eax,(%esp)
0867cd7a +0x05a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867cd7f +0x05f:  movl   $0x63,0x4(%esp)
0867cd87 +0x067:  mov    %eax,(%esp)
0867cd8a +0x06a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0867cd8f +0x06f:  lea    -0x10(%ebp),%eax
0867cd92 +0x072:  mov    %eax,(%esp)
0867cd95 +0x075:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867cd9a +0x07a:  movl   $0xffffffff,0x4(%esp)
0867cda2 +0x082:  mov    %eax,(%esp)
0867cda5 +0x085:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0867cdaa +0x08a:  mov    0x8(%ebp),%eax
0867cdad +0x08d:  mov    %eax,(%esp)
0867cdb0 +0x090:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0867cdb5 +0x095:  mov    %eax,%ebx
0867cdb7 +0x097:  lea    -0x10(%ebp),%eax
0867cdba +0x09a:  mov    %eax,(%esp)
0867cdbd +0x09d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867cdc2 +0x0a2:  mov    %ebx,0x4(%esp)
0867cdc6 +0x0a6:  mov    %eax,(%esp)
0867cdc9 +0x0a9:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0867cdce +0x0ae:  mov    0x8(%ebp),%eax
0867cdd1 +0x0b1:  mov    %eax,(%esp)
0867cdd4 +0x0b4:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867cdd9 +0x0b9:  mov    %eax,%ebx
0867cddb +0x0bb:  lea    -0x10(%ebp),%eax
0867cdde +0x0be:  mov    %eax,(%esp)
0867cde1 +0x0c1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867cde6 +0x0c6:  mov    %ebx,0x4(%esp)
0867cdea +0x0ca:  mov    %eax,(%esp)
0867cded +0x0cd:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0867cdf2 +0x0d2:  mov    0x8(%ebp),%eax
0867cdf5 +0x0d5:  mov    %eax,(%esp)
0867cdf8 +0x0d8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0867cdfd +0x0dd:  mov    %eax,%ebx
0867cdff +0x0df:  lea    -0x10(%ebp),%eax
0867ce02 +0x0e2:  mov    %eax,(%esp)
0867ce05 +0x0e5:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867ce0a +0x0ea:  mov    %ebx,0x4(%esp)
0867ce0e +0x0ee:  mov    %eax,(%esp)
0867ce11 +0x0f1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0867ce16 +0x0f6:  mov    0x8(%ebp),%eax
0867ce19 +0x0f9:  mov    %eax,(%esp)
0867ce1c +0x0fc:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
0867ce21 +0x101:  movsbl %al,%ebx
0867ce24 +0x104:  lea    -0x10(%ebp),%eax
0867ce27 +0x107:  mov    %eax,(%esp)
0867ce2a +0x10a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867ce2f +0x10f:  mov    %ebx,0x4(%esp)
0867ce33 +0x113:  mov    %eax,(%esp)
0867ce36 +0x116:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0867ce3b +0x11b:  mov    0x8(%ebp),%eax
0867ce3e +0x11e:  mov    %eax,(%esp)
0867ce41 +0x121:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867ce46 +0x126:  mov    %eax,%ebx
0867ce48 +0x128:  lea    -0x10(%ebp),%eax
0867ce4b +0x12b:  mov    %eax,(%esp)
0867ce4e +0x12e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0867ce53 +0x133:  mov    %ebx,0x4(%esp)
0867ce57 +0x137:  mov    %eax,(%esp)
0867ce5a +0x13a:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0867ce5f +0x13f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0867ce64 +0x144:  lea    -0x10(%ebp),%edx
0867ce67 +0x147:  mov    %edx,0x8(%esp)
0867ce6b +0x14b:  movl   $0x2,0x4(%esp)
0867ce73 +0x153:  mov    %eax,(%esp)
0867ce76 +0x156:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0867ce7b +0x15b:  jmp    0867ce98 <+0x178>
0867ce7d +0x15d:  mov    %edx,%ebx
0867ce7f +0x15f:  mov    %eax,%esi
0867ce81 +0x161:  lea    -0x10(%ebp),%eax
0867ce84 +0x164:  mov    %eax,(%esp)
0867ce87 +0x167:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0867ce8c +0x16c:  mov    %esi,%eax
0867ce8e +0x16e:  mov    %ebx,%edx
0867ce90 +0x170:  mov    %eax,(%esp)
0867ce93 +0x173:  call   08ae3750 <_Unwind_Resume>
0867ce98 +0x178:  lea    -0x10(%ebp),%eax
0867ce9b +0x17b:  mov    %eax,(%esp)
0867ce9e +0x17e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0867cea3 +0x183:  jmp    0867cea6 <+0x186>
0867cea5 +0x185:  nop
0867cea6 +0x186:  add    $0x20,%esp
0867cea9 +0x189:  pop    %ebx
0867ceaa +0x18a:  pop    %esi
0867ceab +0x18b:  pop    %ebp
0867ceac +0x18c:  ret
0867cead +0x18d:  nop
```

## 反编译 C

```c
// CUser::_UpdateUserInfo4Guild @ 0x867cd20

/* CUser::_UpdateUserInfo4Guild() */

void __thiscall CUser::_UpdateUserInfo4Guild(CUser *this)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  CStreamGuard local_14 [8];
  
  iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x793f);
    CStreamGuard::CStreamGuard(local_14,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0867cd8a to 0867ce7a has its CatchHandler @ 0867ce7d */
    CStreamGuard::operator<<(pCVar4,99);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,-1);
    iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    uVar5 = get_acc_id(this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,uVar5);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    cVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,(int)cVar1);
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_14);
    CStreamGuard::operator<<(pCVar4,iVar2);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
    CStreamGuard::~CStreamGuard(local_14);
  }
  return;
}
```
