# dispatch_sig

`_ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci`

`Inter_SaveClientHackLog::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SaveClientHackLog` | `0x084d1ab6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d1ab6  _ZN23Inter_SaveClientHackLog12dispatch_sigEP5CUserPci
#           Inter_SaveClientHackLog::dispatch_sig(CUser*, char*, int)
# range [0x084d1ab6, 0x084d1c89]
084d1ab6 +0x000:  push   %ebp
084d1ab7 +0x001:  mov    %esp,%ebp
084d1ab9 +0x003:  push   %ebx
084d1aba +0x004:  sub    $0x44,%esp
084d1abd +0x007:  mov    0x10(%ebp),%eax
084d1ac0 +0x00a:  mov    %eax,-0x10(%ebp)
084d1ac3 +0x00d:  mov    -0x10(%ebp),%eax
084d1ac6 +0x010:  mov    (%eax),%ebx
084d1ac8 +0x012:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084d1acd +0x017:  mov    %ebx,0x4(%esp)
084d1ad1 +0x01b:  mov    %eax,(%esp)
084d1ad4 +0x01e:  call   086c4c24 <_ZN9GameWorld12find_sessionEj>  ; GameWorld::find_session(unsigned int)
084d1ad9 +0x023:  mov    %eax,%ebx
084d1adb +0x025:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d1ae0 +0x02a:  movl   $0x30cd,0x8(%esp)
084d1ae8 +0x032:  mov    %ebx,0x4(%esp)
084d1aec +0x036:  mov    %eax,(%esp)
084d1aef +0x039:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084d1af4 +0x03e:  mov    %eax,-0xc(%ebp)
084d1af7 +0x041:  cmpl   $0x0,-0xc(%ebp)
084d1afb +0x045:  jne    084d1b07 <+0x51>
084d1afd +0x047:  mov    $0x0,%eax
084d1b02 +0x04c:  jmp    084d1c84 <+0x1ce>
084d1b07 +0x051:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
084d1b0c +0x056:  movl   $0x1,0x8(%esp)
084d1b14 +0x05e:  movl   $0x3,0x4(%esp)
084d1b1c +0x066:  mov    %eax,(%esp)
084d1b1f +0x069:  call   0816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(RestrictCategory::Enum, int)
084d1b24 +0x06e:  xor    $0x1,%eax
084d1b27 +0x071:  test   %al,%al
084d1b29 +0x073:  je     084d1b35 <+0x7f>
084d1b2b +0x075:  mov    $0x0,%eax
084d1b30 +0x07a:  jmp    084d1c84 <+0x1ce>
084d1b35 +0x07f:  movl   $0x0,-0x1c(%ebp)
084d1b3c +0x086:  mov    -0x10(%ebp),%eax
084d1b3f +0x089:  movzwl 0x8(%eax),%eax
084d1b43 +0x08d:  movzwl %ax,%eax
084d1b46 +0x090:  cmp    $0x1f7,%eax
084d1b4b +0x095:  je     084d1b83 <+0xcd>
084d1b4d +0x097:  cmp    $0x1f7,%eax
084d1b52 +0x09c:  jg     084d1b5d <+0xa7>
084d1b54 +0x09e:  cmp    $0x193,%eax
084d1b59 +0x0a3:  je     084d1b99 <+0xe3>
084d1b5b +0x0a5:  jmp    084d1bce <+0x118>
084d1b5d +0x0a7:  cmp    $0x326,%eax
084d1b62 +0x0ac:  je     084d1bb1 <+0xfb>
084d1b64 +0x0ae:  cmp    $0x3ba,%eax
084d1b69 +0x0b3:  jne    084d1bce <+0x118>
084d1b6b +0x0b5:  mov    -0x10(%ebp),%eax
084d1b6e +0x0b8:  mov    0xe(%eax),%eax
084d1b71 +0x0bb:  cmp    $0x4b0,%eax
084d1b76 +0x0c0:  jle    084d1bc7 <+0x111>
084d1b78 +0x0c2:  mov    -0x1c(%ebp),%eax
084d1b7b +0x0c5:  add    $0x14,%eax
084d1b7e +0x0c8:  mov    %eax,-0x1c(%ebp)
084d1b81 +0x0cb:  jmp    084d1bce <+0x118>
084d1b83 +0x0cd:  mov    -0x10(%ebp),%eax
084d1b86 +0x0d0:  mov    0xe(%eax),%eax
084d1b89 +0x0d3:  cmp    $0x32,%eax
084d1b8c +0x0d6:  jle    084d1bca <+0x114>
084d1b8e +0x0d8:  mov    -0x1c(%ebp),%eax
084d1b91 +0x0db:  add    $0x28,%eax
084d1b94 +0x0de:  mov    %eax,-0x1c(%ebp)
084d1b97 +0x0e1:  jmp    084d1bce <+0x118>
084d1b99 +0x0e3:  mov    -0x10(%ebp),%eax
084d1b9c +0x0e6:  mov    0xe(%eax),%eax
084d1b9f +0x0e9:  cmp    $0xfa,%eax
084d1ba4 +0x0ee:  jle    084d1bcd <+0x117>
084d1ba6 +0x0f0:  mov    -0x1c(%ebp),%eax
084d1ba9 +0x0f3:  add    $0x14,%eax
084d1bac +0x0f6:  mov    %eax,-0x1c(%ebp)
084d1baf +0x0f9:  jmp    084d1bce <+0x118>
084d1bb1 +0x0fb:  mov    -0x10(%ebp),%eax
084d1bb4 +0x0fe:  mov    0xe(%eax),%eax
084d1bb7 +0x101:  cmp    $0x19,%eax
084d1bba +0x104:  jle    084d1bce <+0x118>
084d1bbc +0x106:  mov    -0x1c(%ebp),%eax
084d1bbf +0x109:  add    $0x1e,%eax
084d1bc2 +0x10c:  mov    %eax,-0x1c(%ebp)
084d1bc5 +0x10f:  jmp    084d1bce <+0x118>
084d1bc7 +0x111:  nop
084d1bc8 +0x112:  jmp    084d1bce <+0x118>
084d1bca +0x114:  nop
084d1bcb +0x115:  jmp    084d1bce <+0x118>
084d1bcd +0x117:  nop
084d1bce +0x118:  movl   $0x64,-0x18(%ebp)
084d1bd5 +0x11f:  lea    -0x1c(%ebp),%eax
084d1bd8 +0x122:  mov    %eax,0x4(%esp)
084d1bdc +0x126:  lea    -0x18(%ebp),%eax
084d1bdf +0x129:  mov    %eax,(%esp)
084d1be2 +0x12c:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084d1be7 +0x131:  mov    (%eax),%eax
084d1be9 +0x133:  mov    $0x64,%edx
084d1bee +0x138:  mov    %edx,%ecx
084d1bf0 +0x13a:  sub    %eax,%ecx
084d1bf2 +0x13c:  mov    %ecx,%eax
084d1bf4 +0x13e:  mov    %eax,-0x1c(%ebp)
084d1bf7 +0x141:  mov    -0xc(%ebp),%eax
084d1bfa +0x144:  mov    %eax,(%esp)
084d1bfd +0x147:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
084d1c02 +0x14c:  mov    %eax,-0x14(%ebp)
084d1c05 +0x14f:  lea    -0x14(%ebp),%eax
084d1c08 +0x152:  mov    %eax,0x4(%esp)
084d1c0c +0x156:  lea    -0x1c(%ebp),%eax
084d1c0f +0x159:  mov    %eax,(%esp)
084d1c12 +0x15c:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
084d1c17 +0x161:  mov    (%eax),%eax
084d1c19 +0x163:  mov    %eax,-0x1c(%ebp)
084d1c1c +0x166:  mov    -0xc(%ebp),%eax
084d1c1f +0x169:  mov    %eax,(%esp)
084d1c22 +0x16c:  call   084ecb28 <_GLOBAL__I__Z7getUserj+0x3ada>  ; global constructors keyed to getUser(unsigned int)+0x3ada
084d1c27 +0x171:  mov    -0x1c(%ebp),%edx
084d1c2a +0x174:  cmp    %edx,%eax
084d1c2c +0x176:  setne  %al
084d1c2f +0x179:  test   %al,%al
084d1c31 +0x17b:  je     084d1c7f <+0x1c9>
084d1c33 +0x17d:  mov    -0x1c(%ebp),%ebx
084d1c36 +0x180:  mov    -0xc(%ebp),%eax
084d1c39 +0x183:  mov    %eax,(%esp)
084d1c3c +0x186:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d1c41 +0x18b:  movl   $0x0,0x14(%esp)
084d1c49 +0x193:  movl   $0x3,0x10(%esp)
084d1c51 +0x19b:  mov    %ebx,0xc(%esp)
084d1c55 +0x19f:  movl   $0x65,0x8(%esp)
084d1c5d +0x1a7:  movl   $0x9c41,0x4(%esp)
084d1c65 +0x1af:  mov    %eax,(%esp)
084d1c68 +0x1b2:  call   0842801a <_ZN19DB_SaveUserHandicap11makeRequestEjiiiii>  ; DB_SaveUserHandicap::makeRequest(unsigned int, int, int, int, int, int)
084d1c6d +0x1b7:  mov    -0x1c(%ebp),%eax
084d1c70 +0x1ba:  mov    %eax,0x4(%esp)
084d1c74 +0x1be:  mov    -0xc(%ebp),%eax
084d1c77 +0x1c1:  mov    %eax,(%esp)
084d1c7a +0x1c4:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
084d1c7f +0x1c9:  mov    $0x0,%eax
084d1c84 +0x1ce:  add    $0x44,%esp
084d1c87 +0x1d1:  pop    %ebx
084d1c88 +0x1d2:  pop    %ebp
084d1c89 +0x1d3:  ret
```

## 反编译 C

```c
// Inter_SaveClientHackLog::dispatch_sig @ 0x84d1ab6

/* Inter_SaveClientHackLog::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SaveClientHackLog::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ServiceRestrictManager *pSVar6;
  int *piVar7;
  int local_20 [3];
  int local_14;
  CUser *local_10;
  
  local_14 = param_3;
  uVar3 = G_GameWorld();
  iVar4 = GameWorld::find_session(uVar3);
  iVar5 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar5,iVar4);
  if (local_10 != (CUser *)0x0) {
    pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar6,3,1);
    if (cVar2 == '\x01') {
      local_20[0] = 0;
      uVar1 = *(ushort *)(local_14 + 8);
      if (uVar1 == 0x1f7) {
        if (0x32 < *(int *)(local_14 + 0xe)) {
          local_20[0] = 0x28;
        }
      }
      else if (uVar1 < 0x1f8) {
        if ((uVar1 == 0x193) && (0xfa < *(int *)(local_14 + 0xe))) {
          local_20[0] = 0x14;
        }
      }
      else if (uVar1 == 0x326) {
        if (0x19 < *(int *)(local_14 + 0xe)) {
          local_20[0] = 0x1e;
        }
      }
      else if ((uVar1 == 0x3ba) && (0x4b0 < *(int *)(local_14 + 0xe))) {
        local_20[0] = 0x14;
      }
      local_20[1] = 100;
      piVar7 = std::min<int>(local_20 + 1,local_20);
      local_20[0] = 100 - *piVar7;
      local_20[2] = CUser::getStdDropRate(local_10);
      piVar7 = std::min<int>(local_20,local_20 + 2);
      local_20[0] = *piVar7;
      iVar5 = CUser::getStdDropRate(local_10);
      iVar4 = local_20[0];
      if (iVar5 != local_20[0]) {
        uVar3 = CUser::get_acc_id(local_10);
        DB_SaveUserHandicap::makeRequest(uVar3,0x9c41,0x65,iVar4,3,0);
        CUser::setStdDropRate(local_10,local_20[0]);
      }
    }
  }
  return 0;
}
```
