# ReqDBSendNewSystemMultiMail

`_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb`

`WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08556b68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08556b68  _ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb
#           WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool)
# range [0x08556b68, 0x08556d5b]
08556b68 +0x000:  push   %ebp
08556b69 +0x001:  mov    %esp,%ebp
08556b6b +0x003:  push   %esi
08556b6c +0x004:  push   %ebx
08556b6d +0x005:  sub    $0x40,%esp
08556b70 +0x008:  mov    0x2c(%ebp),%eax
08556b73 +0x00b:  mov    %al,-0x2c(%ebp)
08556b76 +0x00e:  cmpl   $0xa,0x10(%ebp)
08556b7a +0x012:  ja     08556b82 <+0x1a>
08556b7c +0x014:  cmpl   $0x0,0x10(%ebp)
08556b80 +0x018:  jne    08556b8c <+0x24>
08556b82 +0x01a:  mov    $0x11,%ebx
08556b87 +0x01f:  jmp    08556d52 <+0x1ea>
08556b8c +0x024:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08556b91 +0x029:  movl   $0x917,0x8(%esp)
08556b99 +0x031:  movl   $"MailBox.cpp",0x4(%esp)
08556ba1 +0x039:  mov    %eax,(%esp)
08556ba4 +0x03c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08556ba9 +0x041:  movl   $0x1,0x8(%esp)
08556bb1 +0x049:  mov    %eax,0x4(%esp)
08556bb5 +0x04d:  lea    -0x18(%ebp),%eax
08556bb8 +0x050:  mov    %eax,(%esp)
08556bbb +0x053:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08556bc0 +0x058:  lea    -0x18(%ebp),%eax
08556bc3 +0x05b:  mov    %eax,(%esp)
08556bc6 +0x05e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556bcb +0x063:  movl   $0x2a4,0x4(%esp)
08556bd3 +0x06b:  mov    %eax,(%esp)
08556bd6 +0x06e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556bdb +0x073:  lea    -0x18(%ebp),%eax
08556bde +0x076:  mov    %eax,(%esp)
08556be1 +0x079:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556be6 +0x07e:  movl   $0xffffffff,0x4(%esp)
08556bee +0x086:  mov    %eax,(%esp)
08556bf1 +0x089:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556bf6 +0x08e:  lea    -0x18(%ebp),%eax
08556bf9 +0x091:  mov    %eax,(%esp)
08556bfc +0x094:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08556c01 +0x099:  mov    %eax,(%esp)
08556c04 +0x09c:  call   08558b3c <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x169d>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x169d
08556c09 +0x0a1:  mov    %eax,-0x10(%ebp)
08556c0c +0x0a4:  movl   $0x3a9,0x8(%esp)
08556c14 +0x0ac:  movl   $0x0,0x4(%esp)
08556c1c +0x0b4:  mov    -0x10(%ebp),%eax
08556c1f +0x0b7:  mov    %eax,(%esp)
08556c22 +0x0ba:  call   0807dcc0 <_init+0x5b8>
08556c27 +0x0bf:  mov    -0x10(%ebp),%eax
08556c2a +0x0c2:  movl   $0x0,0x122(%eax)
08556c34 +0x0cc:  mov    -0x10(%ebp),%eax
08556c37 +0x0cf:  mov    0x8(%ebp),%edx
08556c3a +0x0d2:  mov    %edx,0x4(%esp)
08556c3e +0x0d6:  mov    %eax,(%esp)
08556c41 +0x0d9:  call   0807def0 <_init+0x7e8>
08556c46 +0x0de:  lea    -0x1c(%ebp),%eax
08556c49 +0x0e1:  mov    %eax,(%esp)
08556c4c +0x0e4:  call   08334434 <_GLOBAL__I__ZN8WongWork15CCompoundAvatarC2Ev+0x232>  ; global constructors keyed to WongWork::CCompoundAvatar::CCompoundAvatar()+0x232
08556c51 +0x0e9:  movl   $0x0,-0xc(%ebp)
08556c58 +0x0f0:  jmp    08556c85 <+0x11d>
08556c5a +0x0f2:  mov    -0xc(%ebp),%eax
08556c5d +0x0f5:  imul   $0x3d,%eax,%eax
08556c60 +0x0f8:  add    0xc(%ebp),%eax
08556c63 +0x0fb:  mov    -0xc(%ebp),%edx
08556c66 +0x0fe:  imul   $0x3d,%edx,%edx
08556c69 +0x101:  add    $0x120,%edx
08556c6f +0x107:  add    -0x10(%ebp),%edx
08556c72 +0x10a:  add    $0x6,%edx
08556c75 +0x10d:  mov    %eax,0x4(%esp)
08556c79 +0x111:  mov    %edx,(%esp)
08556c7c +0x114:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
08556c81 +0x119:  addl   $0x1,-0xc(%ebp)
08556c85 +0x11d:  mov    -0xc(%ebp),%eax
08556c88 +0x120:  cmp    0x10(%ebp),%eax
08556c8b +0x123:  setb   %al
08556c8e +0x126:  test   %al,%al
08556c90 +0x128:  jne    08556c5a <+0xf2>
08556c92 +0x12a:  mov    -0x10(%ebp),%eax
08556c95 +0x12d:  mov    0x10(%ebp),%edx
08556c98 +0x130:  mov    %edx,0x388(%eax)
08556c9e +0x136:  mov    -0x10(%ebp),%eax
08556ca1 +0x139:  mov    0x14(%ebp),%edx
08556ca4 +0x13c:  mov    %edx,0x38c(%eax)
08556caa +0x142:  mov    -0x10(%ebp),%eax
08556cad +0x145:  mov    0x18(%ebp),%edx
08556cb0 +0x148:  mov    %edx,0x11e(%eax)
08556cb6 +0x14e:  mov    -0x10(%ebp),%eax
08556cb9 +0x151:  lea    0x1e(%eax),%edx
08556cbc +0x154:  mov    0x1c(%ebp),%eax
08556cbf +0x157:  mov    %eax,0x4(%esp)
08556cc3 +0x15b:  mov    %edx,(%esp)
08556cc6 +0x15e:  call   0807def0 <_init+0x7e8>
08556ccb +0x163:  mov    -0x10(%ebp),%eax
08556cce +0x166:  mov    0x20(%ebp),%edx
08556cd1 +0x169:  mov    %edx,0x399(%eax)
08556cd7 +0x16f:  mov    -0x10(%ebp),%eax
08556cda +0x172:  mov    0x24(%ebp),%edx
08556cdd +0x175:  mov    %edx,0x390(%eax)
08556ce3 +0x17b:  mov    -0x10(%ebp),%eax
08556ce6 +0x17e:  mov    0x28(%ebp),%edx
08556ce9 +0x181:  mov    %edx,0x395(%eax)
08556cef +0x187:  mov    -0x10(%ebp),%eax
08556cf2 +0x18a:  movzbl -0x2c(%ebp),%edx
08556cf6 +0x18e:  mov    %dl,0x394(%eax)
08556cfc +0x194:  mov    -0x10(%ebp),%eax
08556cff +0x197:  movl   $0x1,0x3a5(%eax)
08556d09 +0x1a1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08556d0e +0x1a6:  lea    -0x18(%ebp),%edx
08556d11 +0x1a9:  mov    %edx,0x8(%esp)
08556d15 +0x1ad:  movl   $0x2,0x4(%esp)
08556d1d +0x1b5:  mov    %eax,(%esp)
08556d20 +0x1b8:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08556d25 +0x1bd:  mov    $0x0,%ebx
08556d2a +0x1c2:  lea    -0x18(%ebp),%eax
08556d2d +0x1c5:  mov    %eax,(%esp)
08556d30 +0x1c8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556d35 +0x1cd:  jmp    08556d52 <+0x1ea>
08556d37 +0x1cf:  mov    %edx,%ebx
08556d39 +0x1d1:  mov    %eax,%esi
08556d3b +0x1d3:  lea    -0x18(%ebp),%eax
08556d3e +0x1d6:  mov    %eax,(%esp)
08556d41 +0x1d9:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556d46 +0x1de:  mov    %esi,%eax
08556d48 +0x1e0:  mov    %ebx,%edx
08556d4a +0x1e2:  mov    %eax,(%esp)
08556d4d +0x1e5:  call   08ae3750 <_Unwind_Resume>
08556d52 +0x1ea:  mov    %ebx,%eax
08556d54 +0x1ec:  add    $0x40,%esp
08556d57 +0x1ef:  pop    %ebx
08556d58 +0x1f0:  pop    %esi
08556d59 +0x1f1:  pop    %ebp
08556d5a +0x1f2:  ret
08556d5b +0x1f3:  nop
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail @ 0x8556b68

/* WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail(char const*, Inven_Item const*, unsigned
   int, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool) */

undefined4
WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
          (char *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
          char *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
          SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL param_10)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  undefined4 uVar3;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  CStreamGuard local_1c [8];
  SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *local_14;
  uint local_10;
  
  if ((param_3 < 0xb) && (param_3 != 0)) {
    pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x917);
    CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 08556bd6 to 08556d24 has its CatchHandler @ 08556d37 */
    CStreamGuard::operator<<(pCVar2,0x2a4);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
    CStreamGuard::operator<<(pCVar2,-1);
    pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
    local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>(pCVar2);
    memset(local_14,0,0x3a9);
    *(undefined4 *)(local_14 + 0x122) = 0;
    strcpy((char *)local_14,param_1);
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::__normal_iterator(local_20);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      Inven_Item::setCopy((Inven_Item *)(local_14 + local_10 * 0x3d + 0x126),
                          (Inven_Item *)(local_10 * 0x3d + param_2));
    }
    *(uint *)(local_14 + 0x388) = param_3;
    *(undefined4 *)(local_14 + 0x38c) = param_4;
    *(undefined4 *)(local_14 + 0x11e) = param_5;
    strcpy((char *)(local_14 + 0x1e),param_6);
    *(undefined4 *)(local_14 + 0x399) = param_7;
    *(undefined4 *)(local_14 + 0x390) = param_8;
    *(undefined4 *)(local_14 + 0x395) = param_9;
    local_14[0x394] = param_10;
    *(undefined4 *)(local_14 + 0x3a5) = 1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
    uVar3 = 0;
    CStreamGuard::~CStreamGuard(local_1c);
  }
  else {
    uVar3 = 0x11;
  }
  return uVar3;
}
```
