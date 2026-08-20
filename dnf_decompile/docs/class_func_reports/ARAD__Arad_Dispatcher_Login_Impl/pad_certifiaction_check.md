# pad_certifiaction_check

`_ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA`

`ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818f4a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818f4a6  _ZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATA
#           ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*)
# range [0x0818f4a6, 0x0818f745]
0818f4a6 +0x000:  push   %ebp
0818f4a7 +0x001:  mov    %esp,%ebp
0818f4a9 +0x003:  push   %edi
0818f4aa +0x004:  push   %ebx
0818f4ab +0x005:  sub    $0xa0,%esp
0818f4b1 +0x00b:  mov    0x8(%ebp),%eax
0818f4b4 +0x00e:  movzbl 0x390c(%eax),%eax
0818f4bb +0x015:  cmp    $0x2,%al
0818f4bd +0x017:  jne    0818f5c3 <+0x11d>
0818f4c3 +0x01d:  movl   $0x0,-0x38(%ebp)
0818f4ca +0x024:  movl   $0x0,-0x34(%ebp)
0818f4d1 +0x02b:  movl   $0x0,-0x30(%ebp)
0818f4d8 +0x032:  movl   $0x0,-0x2c(%ebp)
0818f4df +0x039:  movl   $0x0,-0x28(%ebp)
0818f4e6 +0x040:  movl   $0x0,-0x14(%ebp)
0818f4ed +0x047:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0818f4f4 +0x04e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0818f4f9 +0x053:  mov    %eax,-0x3c(%ebp)
0818f4fc +0x056:  lea    -0x8c(%ebp),%eax
0818f502 +0x05c:  mov    %eax,0x4(%esp)
0818f506 +0x060:  lea    -0x3c(%ebp),%eax
0818f509 +0x063:  mov    %eax,(%esp)
0818f50c +0x066:  call   0807e360 <_init+0xc58>
0818f511 +0x06b:  mov    -0x84(%ebp),%eax
0818f517 +0x071:  cmp    $0x5,%eax
0818f51a +0x074:  jg     0818f523 <+0x7d>
0818f51c +0x076:  movl   $&_ZL14gUnicodeBuffer+0xac54,-0x14(%ebp)
0818f523 +0x07d:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0818f52a +0x084:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0818f52f +0x089:  sub    -0x14(%ebp),%eax
0818f532 +0x08c:  mov    %eax,-0x3c(%ebp)
0818f535 +0x08f:  lea    -0x8c(%ebp),%eax
0818f53b +0x095:  mov    %eax,0x4(%esp)
0818f53f +0x099:  lea    -0x3c(%ebp),%eax
0818f542 +0x09c:  mov    %eax,(%esp)
0818f545 +0x09f:  call   0807e360 <_init+0xc58>
0818f54a +0x0a4:  lea    -0x8c(%ebp),%eax
0818f550 +0x0aa:  mov    %eax,0xc(%esp)
0818f554 +0x0ae:  movl   $"%Y-%m-%d 06:00:00",0x8(%esp)
0818f55c +0x0b6:  movl   $0x14,0x4(%esp)
0818f564 +0x0be:  lea    -0x38(%ebp),%eax
0818f567 +0x0c1:  mov    %eax,(%esp)
0818f56a +0x0c4:  call   0807dbc0 <_init+0x4b8>
0818f56f +0x0c9:  movl   $0x0,0xc(%esp)
0818f577 +0x0d1:  movl   $0x11a,0x8(%esp)
0818f57f +0x0d9:  movl   $&_ZZN4ARAD26Arad_Dispatcher_Login_Impl23pad_certifiaction_checkEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0818f587 +0x0e1:  lea    -0x24(%ebp),%eax
0818f58a +0x0e4:  mov    %eax,(%esp)
0818f58d +0x0e7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818f592 +0x0ec:  lea    -0x38(%ebp),%eax
0818f595 +0x0ef:  mov    %eax,0x8(%esp)
0818f599 +0x0f3:  movl   $"[Goblin Check Time(%s)]]",0x4(%esp)
0818f5a1 +0x0fb:  lea    -0x24(%ebp),%eax
0818f5a4 +0x0fe:  mov    %eax,(%esp)
0818f5a7 +0x101:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818f5ac +0x106:  lea    -0x38(%ebp),%eax
0818f5af +0x109:  mov    %eax,0x4(%esp)
0818f5b3 +0x10d:  mov    0x8(%ebp),%eax
0818f5b6 +0x110:  mov    %eax,(%esp)
0818f5b9 +0x113:  call   0818c4f3 <_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)
0818f5be +0x118:  jmp    0818f73b <+0x295>
0818f5c3 +0x11d:  mov    0x8(%ebp),%eax
0818f5c6 +0x120:  movb   $0x1,0x390c(%eax)
0818f5cd +0x127:  lea    -0x60(%ebp),%ebx
0818f5d0 +0x12a:  mov    $0x0,%eax
0818f5d5 +0x12f:  mov    $0x9,%edx
0818f5da +0x134:  mov    %ebx,%edi
0818f5dc +0x136:  mov    %edx,%ecx
0818f5de +0x138:  rep stos %eax,%es:(%edi)
0818f5e0 +0x13a:  lea    -0x8c(%ebp),%ebx
0818f5e6 +0x140:  mov    $0x0,%eax
0818f5eb +0x145:  mov    $0x9,%edx
0818f5f0 +0x14a:  mov    %ebx,%edi
0818f5f2 +0x14c:  mov    %edx,%ecx
0818f5f4 +0x14e:  rep stos %eax,%es:(%edi)
0818f5f6 +0x150:  mov    0x8(%ebp),%eax
0818f5f9 +0x153:  add    $0x3905,%eax
0818f5fe +0x158:  movl   $0x24,0x8(%esp)
0818f606 +0x160:  mov    %eax,0x4(%esp)
0818f60a +0x164:  lea    -0x60(%ebp),%eax
0818f60d +0x167:  mov    %eax,(%esp)
0818f610 +0x16a:  call   0807d8d0 <_init+0x1c8>
0818f615 +0x16f:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
0818f61a +0x174:  lea    -0x8c(%ebp),%edx
0818f620 +0x17a:  mov    %edx,0x8(%esp)
0818f624 +0x17e:  lea    -0x60(%ebp),%edx
0818f627 +0x181:  mov    %edx,0x4(%esp)
0818f62b +0x185:  mov    %eax,(%esp)
0818f62e +0x188:  call   08184abc <_ZN4ARAD10ARAD_CRYPT10encryptAESEP9CRijndaelPcS3_>  ; ARAD::ARAD_CRYPT::encryptAES(CRijndael*, char*, char*)
0818f633 +0x18d:  mov    0x8(%ebp),%eax
0818f636 +0x190:  add    $0x38e1,%eax
0818f63b +0x195:  mov    %eax,-0x10(%ebp)
0818f63e +0x198:  mov    0x8(%ebp),%eax
0818f641 +0x19b:  add    $0x3914,%eax
0818f646 +0x1a0:  mov    %eax,-0xc(%ebp)
0818f649 +0x1a3:  movl   $0x24,0x8(%esp)
0818f651 +0x1ab:  lea    -0x8c(%ebp),%eax
0818f657 +0x1b1:  mov    %eax,0x4(%esp)
0818f65b +0x1b5:  mov    -0x10(%ebp),%eax
0818f65e +0x1b8:  mov    %eax,(%esp)
0818f661 +0x1bb:  call   0807e8c0 <_init+0x11b8>
0818f666 +0x1c0:  test   %eax,%eax
0818f668 +0x1c2:  je     0818f6ba <+0x214>
0818f66a +0x1c4:  mov    -0xc(%ebp),%eax
0818f66d +0x1c7:  mov    (%eax),%eax
0818f66f +0x1c9:  lea    0x1(%eax),%edx
0818f672 +0x1cc:  mov    -0xc(%ebp),%eax
0818f675 +0x1cf:  mov    %edx,(%eax)
0818f677 +0x1d1:  mov    0x8(%ebp),%eax
0818f67a +0x1d4:  mov    %eax,(%esp)
0818f67d +0x1d7:  call   0818c6c4 <_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*)
0818f682 +0x1dc:  mov    -0xc(%ebp),%eax
0818f685 +0x1df:  mov    (%eax),%eax
0818f687 +0x1e1:  cmp    $0x9,%eax
0818f68a +0x1e4:  jle    0818f6a3 <+0x1fd>
0818f68c +0x1e6:  mov    0x8(%ebp),%eax
0818f68f +0x1e9:  movl   $0x6,0xb8(%eax)
0818f699 +0x1f3:  mov    $0x49,%eax
0818f69e +0x1f8:  jmp    0818f73b <+0x295>
0818f6a3 +0x1fd:  mov    0x8(%ebp),%eax
0818f6a6 +0x200:  movl   $0x5,0xb8(%eax)
0818f6b0 +0x20a:  mov    $0x48,%eax
0818f6b5 +0x20f:  jmp    0818f73b <+0x295>
0818f6ba +0x214:  mov    0x8(%ebp),%eax
0818f6bd +0x217:  movl   $0x0,0x3914(%eax)
0818f6c7 +0x221:  mov    0x8(%ebp),%eax
0818f6ca +0x224:  movl   $0x0,0x3918(%eax)
0818f6d4 +0x22e:  movl   $0x7,0x4(%esp)
0818f6dc +0x236:  mov    0x8(%ebp),%eax
0818f6df +0x239:  mov    %eax,(%esp)
0818f6e2 +0x23c:  call   0818c76f <_ZN4ARAD8DATABASE11LOGIN_QUERY22arad_sp_update_historyEP14SIG_LOGIN_DATAi>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_history(SIG_LOGIN_DATA*, int)
0818f6e7 +0x241:  test   %eax,%eax
0818f6e9 +0x243:  setne  %al
0818f6ec +0x246:  test   %al,%al
0818f6ee +0x248:  je     0818f704 <+0x25e>
0818f6f0 +0x24a:  mov    0x8(%ebp),%eax
0818f6f3 +0x24d:  movl   $0x6,0xb8(%eax)
0818f6fd +0x257:  mov    $0x1,%eax
0818f702 +0x25c:  jmp    0818f73b <+0x295>
0818f704 +0x25e:  mov    0x8(%ebp),%eax
0818f707 +0x261:  mov    %eax,(%esp)
0818f70a +0x264:  call   0818c609 <_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA>  ; ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*)
0818f70f +0x269:  test   %eax,%eax
0818f711 +0x26b:  setne  %al
0818f714 +0x26e:  test   %al,%al
0818f716 +0x270:  je     0818f72c <+0x286>
0818f718 +0x272:  mov    0x8(%ebp),%eax
0818f71b +0x275:  movl   $0x6,0xb8(%eax)
0818f725 +0x27f:  mov    $0x1,%eax
0818f72a +0x284:  jmp    0818f73b <+0x295>
0818f72c +0x286:  mov    0x8(%ebp),%eax
0818f72f +0x289:  movb   $0x0,0x38e0(%eax)
0818f736 +0x290:  mov    $0x0,%eax
0818f73b +0x295:  add    $0xa0,%esp
0818f741 +0x29b:  pop    %ebx
0818f742 +0x29c:  pop    %edi
0818f743 +0x29d:  pop    %ebp
0818f744 +0x29e:  ret
0818f745 +0x29f:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check @ 0x818f4a6

/* ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*) */

undefined4 ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  tm *ptVar4;
  tm local_90;
  char local_64 [36];
  time_t local_40;
  char local_3c [20];
  cMyTrace local_28 [16];
  int local_18;
  SIG_LOGIN_DATA *local_14;
  SIG_LOGIN_DATA *local_10;
  
  if (param_1[0x390c] == (SIG_LOGIN_DATA)0x2) {
    local_3c[0] = '\0';
    local_3c[1] = '\0';
    local_3c[2] = '\0';
    local_3c[3] = '\0';
    local_3c[4] = '\0';
    local_3c[5] = '\0';
    local_3c[6] = '\0';
    local_3c[7] = '\0';
    local_3c[8] = '\0';
    local_3c[9] = '\0';
    local_3c[10] = '\0';
    local_3c[0xb] = '\0';
    local_3c[0xc] = '\0';
    local_3c[0xd] = '\0';
    local_3c[0xe] = '\0';
    local_3c[0xf] = '\0';
    local_3c[0x10] = '\0';
    local_3c[0x11] = '\0';
    local_3c[0x12] = '\0';
    local_3c[0x13] = '\0';
    local_18 = 0;
    local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    localtime_r(&local_40,&local_90);
    if (local_90.tm_hour < 6) {
      local_18 = 0x15180;
    }
    local_40 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_40 = local_40 - local_18;
    localtime_r(&local_40,&local_90);
    strftime(local_3c,0x14,"%Y-%m-%d 06:00:00",&local_90);
    cMyTrace::cMyTrace(local_28,
                       "static int ARAD::Arad_Dispatcher_Login_Impl::pad_certifiaction_check(SIG_LOGIN_DATA*)"
                       ,0x11a,0);
    cMyTrace::operator()(local_28,"[Goblin Check Time(%s)]]",local_3c);
    uVar1 = DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(param_1,local_3c);
  }
  else {
    param_1[0x390c] = (SIG_LOGIN_DATA)0x1;
    pcVar3 = local_64;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    ptVar4 = &local_90;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar4->tm_sec = 0;
      ptVar4 = (tm *)&ptVar4->tm_min;
    }
    strncpy(local_64,(char *)(param_1 + 0x3905),0x24);
    ARAD_CRYPT::encryptAES(GlobalData::s_pcryptRijndael_MousePassword_,local_64,(char *)&local_90);
    local_14 = param_1 + 0x38e1;
    local_10 = param_1 + 0x3914;
    iVar2 = strncmp((char *)local_14,(char *)&local_90,0x24);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3914) = 0;
      *(undefined4 *)(param_1 + 0x3918) = 0;
      iVar2 = DATABASE::LOGIN_QUERY::arad_sp_update_history(param_1,7);
      if (iVar2 == 0) {
        iVar2 = DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(param_1);
        if (iVar2 == 0) {
          param_1[0x38e0] = (SIG_LOGIN_DATA)0x0;
          uVar1 = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0xb8) = 6;
          uVar1 = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0xb8) = 6;
        uVar1 = 1;
      }
    }
    else {
      *(int *)local_10 = *(int *)local_10 + 1;
      DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(param_1);
      if (*(int *)local_10 < 10) {
        *(undefined4 *)(param_1 + 0xb8) = 5;
        uVar1 = 0x48;
      }
      else {
        *(undefined4 *)(param_1 + 0xb8) = 6;
        uVar1 = 0x49;
      }
    }
  }
  return uVar1;
}
```
