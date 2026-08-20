# dispatch

`_ZN16DB_MouseRegister8dispatchEiiP6Stream`

`DB_MouseRegister::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08422964` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08422964  _ZN16DB_MouseRegister8dispatchEiiP6Stream
#           DB_MouseRegister::dispatch(int, int, Stream*)
# range [0x08422964, 0x08422c89]
08422964 +0x000:  push   %ebp
08422965 +0x001:  mov    %esp,%ebp
08422967 +0x003:  push   %esi
08422968 +0x004:  push   %ebx
08422969 +0x005:  sub    $0x90,%esp
0842296f +0x00b:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
08422974 +0x010:  mov    %eax,-0x18(%ebp)
08422977 +0x013:  mov    0x14(%ebp),%eax
0842297a +0x016:  mov    %eax,(%esp)
0842297d +0x019:  call   08451d5c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4972>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4972
08422982 +0x01e:  mov    %eax,-0x14(%ebp)
08422985 +0x021:  movl   $0x0,-0x10(%ebp)
0842298c +0x028:  movl   $0x0,-0x28(%ebp)
08422993 +0x02f:  movl   $0x0,-0x24(%ebp)
0842299a +0x036:  movl   $0x0,-0x20(%ebp)
084229a1 +0x03d:  movl   $0x0,-0x1c(%ebp)
084229a8 +0x044:  mov    -0x14(%ebp),%eax
084229ab +0x047:  add    $0x48,%eax
084229ae +0x04a:  movl   $0x10,0x8(%esp)
084229b6 +0x052:  mov    %eax,0x4(%esp)
084229ba +0x056:  lea    -0x28(%ebp),%eax
084229bd +0x059:  mov    %eax,(%esp)
084229c0 +0x05c:  call   0807d8d0 <_init+0x1c8>
084229c5 +0x061:  mov    -0x14(%ebp),%eax
084229c8 +0x064:  add    $0xf,%eax
084229cb +0x067:  movl   $0x7,0x8(%esp)
084229d3 +0x06f:  mov    %eax,0x4(%esp)
084229d7 +0x073:  lea    -0x54(%ebp),%eax
084229da +0x076:  mov    %eax,(%esp)
084229dd +0x079:  call   0807d8d0 <_init+0x1c8>
084229e2 +0x07e:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
084229e7 +0x083:  lea    -0x78(%ebp),%edx
084229ea +0x086:  mov    %edx,0x8(%esp)
084229ee +0x08a:  lea    -0x54(%ebp),%edx
084229f1 +0x08d:  mov    %edx,0x4(%esp)
084229f5 +0x091:  mov    %eax,(%esp)
084229f8 +0x094:  call   0846c398 <_Z11encryptAES_P9CRijndaelPcS1_>  ; encryptAES_(CRijndael*, char*, char*)
084229fd +0x099:  mov    -0x14(%ebp),%eax
08422a00 +0x09c:  lea    0x23(%eax),%edx
08422a03 +0x09f:  movl   $0x24,0x8(%esp)
08422a0b +0x0a7:  lea    -0x78(%ebp),%eax
08422a0e +0x0aa:  mov    %eax,0x4(%esp)
08422a12 +0x0ae:  mov    %edx,(%esp)
08422a15 +0x0b1:  call   0807e8c0 <_init+0x11b8>
08422a1a +0x0b6:  test   %eax,%eax
08422a1c +0x0b8:  jne    08422af6 <+0x192>
08422a22 +0x0be:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08422a27 +0x0c3:  movl   $0x5b59,0x8(%esp)
08422a2f +0x0cb:  movl   $"DBThread.cpp",0x4(%esp)
08422a37 +0x0d3:  mov    %eax,(%esp)
08422a3a +0x0d6:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08422a3f +0x0db:  movl   $0x1,0x8(%esp)
08422a47 +0x0e3:  mov    %eax,0x4(%esp)
08422a4b +0x0e7:  lea    -0x30(%ebp),%eax
08422a4e +0x0ea:  mov    %eax,(%esp)
08422a51 +0x0ed:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08422a56 +0x0f2:  lea    -0x30(%ebp),%eax
08422a59 +0x0f5:  mov    %eax,(%esp)
08422a5c +0x0f8:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08422a61 +0x0fd:  movl   $0x246,0x4(%esp)
08422a69 +0x105:  mov    %eax,(%esp)
08422a6c +0x108:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08422a71 +0x10d:  lea    -0x30(%ebp),%eax
08422a74 +0x110:  mov    %eax,(%esp)
08422a77 +0x113:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08422a7c +0x118:  mov    0x10(%ebp),%edx
08422a7f +0x11b:  mov    %edx,0x4(%esp)
08422a83 +0x11f:  mov    %eax,(%esp)
08422a86 +0x122:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08422a8b +0x127:  lea    -0x30(%ebp),%eax
08422a8e +0x12a:  mov    %eax,(%esp)
08422a91 +0x12d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08422a96 +0x132:  mov    %eax,(%esp)
08422a99 +0x135:  call   08451db0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x49c6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x49c6
08422a9e +0x13a:  mov    %eax,-0xc(%ebp)
08422aa1 +0x13d:  mov    -0xc(%ebp),%eax
08422aa4 +0x140:  movl   $0x0,(%eax)
08422aaa +0x146:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08422aaf +0x14b:  lea    -0x30(%ebp),%edx
08422ab2 +0x14e:  mov    %edx,0x8(%esp)
08422ab6 +0x152:  movl   $0x1,0x4(%esp)
08422abe +0x15a:  mov    %eax,(%esp)
08422ac1 +0x15d:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08422ac6 +0x162:  mov    $0x0,%ebx
08422acb +0x167:  lea    -0x30(%ebp),%eax
08422ace +0x16a:  mov    %eax,(%esp)
08422ad1 +0x16d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08422ad6 +0x172:  jmp    08422c7d <+0x319>
08422adb +0x177:  mov    %edx,%ebx
08422add +0x179:  mov    %eax,%esi
08422adf +0x17b:  lea    -0x30(%ebp),%eax
08422ae2 +0x17e:  mov    %eax,(%esp)
08422ae5 +0x181:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08422aea +0x186:  mov    %esi,%eax
08422aec +0x188:  mov    %ebx,%edx
08422aee +0x18a:  mov    %eax,(%esp)
08422af1 +0x18d:  call   08ae3750 <_Unwind_Resume>
08422af6 +0x192:  mov    -0x14(%ebp),%eax
08422af9 +0x195:  mov    0x4(%eax),%eax
08422afc +0x198:  cmp    $0x2,%eax
08422aff +0x19b:  je     08422b8a <+0x226>
08422b05 +0x1a1:  cmp    $0x3,%eax
08422b08 +0x1a4:  je     08422bfd <+0x299>
08422b0e +0x1aa:  cmp    $0x1,%eax
08422b11 +0x1ad:  jne    08422c45 <+0x2e1>
08422b17 +0x1b3:  mov    -0x14(%ebp),%eax
08422b1a +0x1b6:  mov    (%eax),%eax
08422b1c +0x1b8:  mov    0x10(%ebp),%edx
08422b1f +0x1bb:  mov    %edx,0x10(%esp)
08422b23 +0x1bf:  lea    -0x28(%ebp),%edx
08422b26 +0x1c2:  mov    %edx,0xc(%esp)
08422b2a +0x1c6:  lea    -0x78(%ebp),%edx
08422b2d +0x1c9:  mov    %edx,0x8(%esp)
08422b31 +0x1cd:  mov    %eax,0x4(%esp)
08422b35 +0x1d1:  mov    0x8(%ebp),%eax
08422b38 +0x1d4:  mov    %eax,(%esp)
08422b3b +0x1d7:  call   084232e0 <_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci>  ; DB_MouseRegister::_registNewPassword(unsigned int, char const*, char*, int)
08422b40 +0x1dc:  mov    %eax,-0x10(%ebp)
08422b43 +0x1df:  cmpl   $0x0,-0x10(%ebp)
08422b47 +0x1e3:  jne    08422c41 <+0x2dd>
08422b4d +0x1e9:  mov    -0x14(%ebp),%eax
08422b50 +0x1ec:  movb   $0x1,0x1a(%eax)
08422b54 +0x1f0:  mov    -0x14(%ebp),%eax
08422b57 +0x1f3:  movl   $0x0,0x1f(%eax)
08422b5e +0x1fa:  mov    -0x14(%ebp),%eax
08422b61 +0x1fd:  movl   $0x0,0x1b(%eax)
08422b68 +0x204:  mov    -0x14(%ebp),%eax
08422b6b +0x207:  lea    0x23(%eax),%edx
08422b6e +0x20a:  movl   $0x24,0x8(%esp)
08422b76 +0x212:  lea    -0x78(%ebp),%eax
08422b79 +0x215:  mov    %eax,0x4(%esp)
08422b7d +0x219:  mov    %edx,(%esp)
08422b80 +0x21c:  call   0807d8a0 <_init+0x198>
08422b85 +0x221:  jmp    08422c45 <+0x2e1>
08422b8a +0x226:  mov    -0x14(%ebp),%eax
08422b8d +0x229:  movzbl 0x58(%eax),%eax
08422b91 +0x22d:  movzbl %al,%edx
08422b94 +0x230:  mov    -0x14(%ebp),%eax
08422b97 +0x233:  mov    (%eax),%eax
08422b99 +0x235:  mov    %edx,0x14(%esp)
08422b9d +0x239:  mov    0x10(%ebp),%edx
08422ba0 +0x23c:  mov    %edx,0x10(%esp)
08422ba4 +0x240:  lea    -0x28(%ebp),%edx
08422ba7 +0x243:  mov    %edx,0xc(%esp)
08422bab +0x247:  lea    -0x78(%ebp),%edx
08422bae +0x24a:  mov    %edx,0x8(%esp)
08422bb2 +0x24e:  mov    %eax,0x4(%esp)
08422bb6 +0x252:  mov    0x8(%ebp),%eax
08422bb9 +0x255:  mov    %eax,(%esp)
08422bbc +0x258:  call   08423528 <_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib>  ; DB_MouseRegister::_modifyPassword(unsigned int, char const*, char*, int, bool)
08422bc1 +0x25d:  mov    %eax,-0x10(%ebp)
08422bc4 +0x260:  cmpl   $0x0,-0x10(%ebp)
08422bc8 +0x264:  jne    08422c44 <+0x2e0>
08422bca +0x266:  mov    -0x14(%ebp),%eax
08422bcd +0x269:  lea    0x23(%eax),%edx
08422bd0 +0x26c:  movl   $0x24,0x8(%esp)
08422bd8 +0x274:  lea    -0x78(%ebp),%eax
08422bdb +0x277:  mov    %eax,0x4(%esp)
08422bdf +0x27b:  mov    %edx,(%esp)
08422be2 +0x27e:  call   0807d8a0 <_init+0x198>
08422be7 +0x283:  mov    -0x14(%ebp),%eax
08422bea +0x286:  movl   $0x0,0x1f(%eax)
08422bf1 +0x28d:  mov    -0x14(%ebp),%eax
08422bf4 +0x290:  movl   $0x0,0x1b(%eax)
08422bfb +0x297:  jmp    08422c45 <+0x2e1>
08422bfd +0x299:  mov    -0x14(%ebp),%eax
08422c00 +0x29c:  mov    (%eax),%eax
08422c02 +0x29e:  lea    -0x28(%ebp),%edx
08422c05 +0x2a1:  mov    %edx,0x8(%esp)
08422c09 +0x2a5:  mov    %eax,0x4(%esp)
08422c0d +0x2a9:  mov    0x8(%ebp),%eax
08422c10 +0x2ac:  mov    %eax,(%esp)
08422c13 +0x2af:  call   08423794 <_ZN16DB_MouseRegister17_unregistPasswordEjPc>  ; DB_MouseRegister::_unregistPassword(unsigned int, char*)
08422c18 +0x2b4:  mov    %eax,-0x10(%ebp)
08422c1b +0x2b7:  cmpl   $0x0,-0x10(%ebp)
08422c1f +0x2bb:  jne    08422c45 <+0x2e1>
08422c21 +0x2bd:  mov    -0x14(%ebp),%eax
08422c24 +0x2c0:  add    $0x23,%eax
08422c27 +0x2c3:  movl   $0x24,0x8(%esp)
08422c2f +0x2cb:  movl   $0x0,0x4(%esp)
08422c37 +0x2d3:  mov    %eax,(%esp)
08422c3a +0x2d6:  call   0807dcc0 <_init+0x5b8>
08422c3f +0x2db:  jmp    08422c45 <+0x2e1>
08422c41 +0x2dd:  nop
08422c42 +0x2de:  jmp    08422c45 <+0x2e1>
08422c44 +0x2e0:  nop
08422c45 +0x2e1:  mov    -0x14(%ebp),%eax
08422c48 +0x2e4:  mov    0x4(%eax),%edx
08422c4b +0x2e7:  mov    -0x14(%ebp),%eax
08422c4e +0x2ea:  mov    (%eax),%eax
08422c50 +0x2ec:  mov    -0x14(%ebp),%ecx
08422c53 +0x2ef:  mov    %ecx,0x14(%esp)
08422c57 +0x2f3:  mov    0x10(%ebp),%ecx
08422c5a +0x2f6:  mov    %ecx,0x10(%esp)
08422c5e +0x2fa:  mov    %edx,0xc(%esp)
08422c62 +0x2fe:  mov    -0x10(%ebp),%edx
08422c65 +0x301:  mov    %edx,0x8(%esp)
08422c69 +0x305:  mov    %eax,0x4(%esp)
08422c6d +0x309:  mov    0x8(%ebp),%eax
08422c70 +0x30c:  mov    %eax,(%esp)
08422c73 +0x30f:  call   08423abe <_ZN16DB_MouseRegister11_sendResultEjiiiP18SIG_MOUSE_REGISTER>  ; DB_MouseRegister::_sendResult(unsigned int, int, int, int, SIG_MOUSE_REGISTER*)
08422c78 +0x314:  mov    $0x1,%ebx
08422c7d +0x319:  mov    %ebx,%eax
08422c7f +0x31b:  add    $0x90,%esp
08422c85 +0x321:  pop    %ebx
08422c86 +0x322:  pop    %esi
08422c87 +0x323:  pop    %ebp
08422c88 +0x324:  ret
08422c89 +0x325:  nop
```

## 反编译 C

```c
// DB_MouseRegister::dispatch @ 0x8422964

/* DB_MouseRegister::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MouseRegister::dispatch(DB_MouseRegister *this,int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  undefined4 uVar5;
  char local_7c [36];
  char local_58 [36];
  CStreamGuard local_34 [8];
  char local_2c [16];
  undefined4 local_1c;
  SIG_MOUSE_REGISTER *local_18;
  int local_14;
  SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD *local_10;
  
  local_1c = _getDBHandleForDevideAccountDB();
  local_18 = Stream::GetOutBuffer<SIG_MOUSE_REGISTER>(param_3);
  local_14 = 0;
  local_2c[0] = '\0';
  local_2c[1] = '\0';
  local_2c[2] = '\0';
  local_2c[3] = '\0';
  local_2c[4] = '\0';
  local_2c[5] = '\0';
  local_2c[6] = '\0';
  local_2c[7] = '\0';
  local_2c[8] = '\0';
  local_2c[9] = '\0';
  local_2c[10] = '\0';
  local_2c[0xb] = '\0';
  local_2c[0xc] = '\0';
  local_2c[0xd] = '\0';
  local_2c[0xe] = '\0';
  local_2c[0xf] = '\0';
  strncpy(local_2c,(char *)(local_18 + 0x48),0x10);
  strncpy(local_58,(char *)(local_18 + 0xf),7);
  encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_58,local_7c);
  iVar2 = strncmp((char *)(local_18 + 0x23),local_7c,0x24);
  if (iVar2 == 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5b59);
    CStreamGuard::CStreamGuard(local_34,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 08422a6c to 08422ac5 has its CatchHandler @ 08422adb */
    CStreamGuard::operator<<(pCVar4,0x246);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_34);
    CStreamGuard::operator<<(pCVar4,param_2);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_34);
    local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD>(pCVar4);
    *(undefined4 *)local_10 = 0;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
    uVar5 = 0;
    CStreamGuard::~CStreamGuard(local_34);
  }
  else {
    uVar1 = *(uint *)(local_18 + 4);
    if (uVar1 == 2) {
      local_14 = _modifyPassword(this,*(uint *)local_18,local_7c,local_2c,param_2,
                                 (bool)local_18[0x58]);
      if (local_14 == 0) {
        memcpy(local_18 + 0x23,local_7c,0x24);
        *(undefined4 *)(local_18 + 0x1f) = 0;
        *(undefined4 *)(local_18 + 0x1b) = 0;
      }
    }
    else if (uVar1 == 3) {
      local_14 = _unregistPassword(this,*(uint *)local_18,local_2c);
      if (local_14 == 0) {
        memset(local_18 + 0x23,0,0x24);
      }
    }
    else if ((uVar1 == 1) &&
            (local_14 = _registNewPassword(this,*(uint *)local_18,local_7c,local_2c,param_2),
            local_14 == 0)) {
      local_18[0x1a] = (SIG_MOUSE_REGISTER)0x1;
      *(undefined4 *)(local_18 + 0x1f) = 0;
      *(undefined4 *)(local_18 + 0x1b) = 0;
      memcpy(local_18 + 0x23,local_7c,0x24);
    }
    _sendResult(this,*(uint *)local_18,local_14,*(int *)(local_18 + 4),param_2,local_18);
    uVar5 = 1;
  }
  return uVar5;
}
```
