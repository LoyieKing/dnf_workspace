# account_password_check

`_ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc`

`ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818f746` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818f746  _ZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPc
#           ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)
# range [0x0818f746, 0x0818f96f]
0818f746 +0x000:  push   %ebp
0818f747 +0x001:  mov    %esp,%ebp
0818f749 +0x003:  push   %esi
0818f74a +0x004:  push   %ebx
0818f74b +0x005:  sub    $0xa0,%esp
0818f751 +0x00b:  movl   $0x0,(%esp)
0818f758 +0x012:  call   0807d750 <_init+0x48>
0818f75d +0x017:  mov    %eax,-0xc(%ebp)
0818f760 +0x01a:  movl   $0x0,-0x30(%ebp)
0818f767 +0x021:  movl   $0x0,-0x34(%ebp)
0818f76e +0x028:  lea    -0x7c(%ebp),%eax
0818f771 +0x02b:  mov    %eax,(%esp)
0818f774 +0x02e:  call   0818fb28 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x2a>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x2a
0818f779 +0x033:  mov    0xc(%ebp),%eax
0818f77c +0x036:  mov    0xc0(%eax),%edx
0818f782 +0x03c:  mov    &_ZN10GlobalData12s_psimpleSSOE,%eax
0818f787 +0x041:  lea    -0x7c(%ebp),%ecx
0818f78a +0x044:  mov    %ecx,0x10(%esp)
0818f78e +0x048:  lea    -0x34(%ebp),%ecx
0818f791 +0x04b:  mov    %ecx,0xc(%esp)
0818f795 +0x04f:  lea    -0x30(%ebp),%ecx
0818f798 +0x052:  mov    %ecx,0x8(%esp)
0818f79c +0x056:  mov    %edx,0x4(%esp)
0818f7a0 +0x05a:  mov    %eax,(%esp)
0818f7a3 +0x05d:  call   086031f6 <_ZN8WongWork10CSimpleSSO16getGameStartTimeEjRlS1_RNS0_14stOutputData_tE>  ; WongWork::CSimpleSSO::getGameStartTime(unsigned int, long&, long&, WongWork::CSimpleSSO::stOutputData_t&)
0818f7a8 +0x062:  xor    $0x1,%eax
0818f7ab +0x065:  test   %al,%al
0818f7ad +0x067:  je     0818f7fc <+0xb6>
0818f7af +0x069:  mov    0xc(%ebp),%eax
0818f7b2 +0x06c:  mov    0xc0(%eax),%ebx
0818f7b8 +0x072:  movl   $0x5,0xc(%esp)
0818f7c0 +0x07a:  movl   $0x16a,0x8(%esp)
0818f7c8 +0x082:  movl   $&_ZZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818f7d0 +0x08a:  lea    -0x2c(%ebp),%eax
0818f7d3 +0x08d:  mov    %eax,(%esp)
0818f7d6 +0x090:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818f7db +0x095:  mov    %ebx,0x8(%esp)
0818f7df +0x099:  movl   $"get game start time error : user_idx[%d]",0x4(%esp)
0818f7e7 +0x0a1:  lea    -0x2c(%ebp),%eax
0818f7ea +0x0a4:  mov    %eax,(%esp)
0818f7ed +0x0a7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818f7f2 +0x0ac:  mov    $0xffffffff,%eax
0818f7f7 +0x0b1:  jmp    0818f965 <+0x21f>
0818f7fc +0x0b6:  mov    0xc(%ebp),%eax
0818f7ff +0x0b9:  mov    0xc0(%eax),%edx
0818f805 +0x0bf:  mov    &_ZN10GlobalData12s_GM_ManagerE,%eax
0818f80a +0x0c4:  mov    %edx,0x4(%esp)
0818f80e +0x0c8:  mov    %eax,(%esp)
0818f811 +0x0cb:  call   0829948c <_ZN11CGM_Manager4IsGmEj>  ; CGM_Manager::IsGm(unsigned int)
0818f816 +0x0d0:  test   %al,%al
0818f818 +0x0d2:  je     0818f892 <+0x14c>
0818f81a +0x0d4:  mov    0xc(%ebp),%eax
0818f81d +0x0d7:  add    $0x18,%eax
0818f820 +0x0da:  movl   $0x84,0x8(%esp)
0818f828 +0x0e2:  mov    %eax,0x4(%esp)
0818f82c +0x0e6:  mov    0x10(%ebp),%eax
0818f82f +0x0e9:  mov    %eax,(%esp)
0818f832 +0x0ec:  call   0807e8c0 <_init+0x11b8>
0818f837 +0x0f1:  test   %eax,%eax
0818f839 +0x0f3:  jne    0818f845 <+0xff>
0818f83b +0x0f5:  mov    $0x0,%eax
0818f840 +0x0fa:  jmp    0818f965 <+0x21f>
0818f845 +0x0ff:  mov    0xc(%ebp),%eax
0818f848 +0x102:  mov    0xc0(%eax),%ebx
0818f84e +0x108:  movl   $0x5,0xc(%esp)
0818f856 +0x110:  movl   $0x176,0x8(%esp)
0818f85e +0x118:  movl   $&_ZZN4ARAD26Arad_Dispatcher_Login_Impl22account_password_checkEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818f866 +0x120:  lea    -0x1c(%ebp),%eax
0818f869 +0x123:  mov    %eax,(%esp)
0818f86c +0x126:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818f871 +0x12b:  mov    %ebx,0x8(%esp)
0818f875 +0x12f:  movl   $"gm user password error user_id[%d]",0x4(%esp)
0818f87d +0x137:  lea    -0x1c(%ebp),%eax
0818f880 +0x13a:  mov    %eax,(%esp)
0818f883 +0x13d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818f888 +0x142:  mov    $0xffffffff,%eax
0818f88d +0x147:  jmp    0818f965 <+0x21f>
0818f892 +0x14c:  mov    -0x74(%ebp),%edx
0818f895 +0x14f:  mov    0xc(%ebp),%eax
0818f898 +0x152:  mov    %edx,0x3954(%eax)
0818f89e +0x158:  mov    -0x70(%ebp),%edx
0818f8a1 +0x15b:  mov    0xc(%ebp),%eax
0818f8a4 +0x15e:  mov    %edx,0x3960(%eax)
0818f8aa +0x164:  mov    -0x78(%ebp),%edx
0818f8ad +0x167:  mov    0xc(%ebp),%eax
0818f8b0 +0x16a:  mov    %edx,0x3950(%eax)
0818f8b6 +0x170:  mov    -0x7c(%ebp),%edx
0818f8b9 +0x173:  mov    0xc(%ebp),%eax
0818f8bc +0x176:  mov    %edx,0x3958(%eax)
0818f8c2 +0x17c:  mov    -0x68(%ebp),%edx
0818f8c5 +0x17f:  mov    0xc(%ebp),%eax
0818f8c8 +0x182:  mov    %edx,0x3968(%eax)
0818f8ce +0x188:  movzbl -0x6c(%ebp),%edx
0818f8d2 +0x18c:  mov    0xc(%ebp),%eax
0818f8d5 +0x18f:  mov    %dl,0x3964(%eax)
0818f8db +0x195:  movzbl -0x40(%ebp),%edx
0818f8df +0x199:  mov    0xc(%ebp),%eax
0818f8e2 +0x19c:  mov    %dl,0x39a2(%eax)
0818f8e8 +0x1a2:  movzbl -0x50(%ebp),%edx
0818f8ec +0x1a6:  mov    0xc(%ebp),%eax
0818f8ef +0x1a9:  mov    %dl,0x39dc(%eax)
0818f8f5 +0x1af:  mov    -0x4c(%ebp),%edx
0818f8f8 +0x1b2:  mov    0xc(%ebp),%eax
0818f8fb +0x1b5:  mov    %edx,0x395c(%eax)
0818f901 +0x1bb:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0818f908 +0x1c2:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0818f90d +0x1c7:  mov    %eax,%ebx
0818f90f +0x1c9:  mov    -0x7c(%ebp),%esi
0818f912 +0x1cc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0818f917 +0x1d1:  mov    0x37c(%eax),%eax
0818f91d +0x1d7:  mov    %ebx,0x8(%esp)
0818f921 +0x1db:  mov    %esi,0x4(%esp)
0818f925 +0x1df:  mov    %eax,(%esp)
0818f928 +0x1e2:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
0818f92d +0x1e7:  test   %al,%al
0818f92f +0x1e9:  je     0818f93e <+0x1f8>
0818f931 +0x1eb:  mov    0xc(%ebp),%eax
0818f934 +0x1ee:  movl   $0x0,0x395c(%eax)
0818f93e +0x1f8:  mov    0xc(%ebp),%eax
0818f941 +0x1fb:  add    $0x3a3a,%eax
0818f946 +0x200:  movl   $0x10,0x8(%esp)
0818f94e +0x208:  lea    -0x7c(%ebp),%edx
0818f951 +0x20b:  add    $0x18,%edx
0818f954 +0x20e:  mov    %edx,0x4(%esp)
0818f958 +0x212:  mov    %eax,(%esp)
0818f95b +0x215:  call   0807d8d0 <_init+0x1c8>
0818f960 +0x21a:  mov    $0x0,%eax
0818f965 +0x21f:  add    $0xa0,%esp
0818f96b +0x225:  pop    %ebx
0818f96c +0x226:  pop    %esi
0818f96d +0x227:  pop    %ebp
0818f96e +0x228:  ret
0818f96f +0x229:  nop
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::account_password_check @ 0x818f746

/* ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::account_password_check
          (Arad_Dispatcher_Login_Impl *this,SIG_LOGIN_DATA *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  SIG_LOGIN_DATA local_70;
  undefined4 local_6c;
  char acStack_68 [20];
  SIG_LOGIN_DATA local_54;
  undefined4 local_50;
  SIG_LOGIN_DATA local_44;
  long local_38 [2];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  time_t local_10;
  
  local_10 = time((time_t *)0x0);
  local_38[1] = 0;
  local_38[0] = 0;
  WongWork::CSimpleSSO::stOutputData_t::stOutputData_t((stOutputData_t *)&local_80);
  cVar1 = WongWork::CSimpleSSO::getGameStartTime
                    (GlobalData::s_psimpleSSO,*(uint *)(param_1 + 0xc0),local_38 + 1,local_38,
                     (stOutputData_t *)&local_80);
  if (cVar1 == '\x01') {
    cVar1 = CGM_Manager::IsGm(GlobalData::s_GM_Manager);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x3954) = local_78;
      *(undefined4 *)(param_1 + 0x3960) = local_74;
      *(undefined4 *)(param_1 + 0x3950) = local_7c;
      *(long *)(param_1 + 0x3958) = local_80;
      *(undefined4 *)(param_1 + 0x3968) = local_6c;
      param_1[0x3964] = local_70;
      param_1[0x39a2] = local_44;
      param_1[0x39dc] = local_54;
      *(undefined4 *)(param_1 + 0x395c) = local_50;
      lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar3 = G_CEnvironment();
      cVar1 = CheckDailyScheduleTime(*(int *)(iVar3 + 0x37c),local_80,lVar4);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x395c) = 0;
      }
      strncpy((char *)(param_1 + 0x3a3a),acStack_68,0x10);
      uVar2 = 0;
    }
    else {
      iVar3 = strncmp(param_2,(char *)(param_1 + 0x18),0x84);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xc0);
        cMyTrace::cMyTrace(local_20,
                           "int ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)"
                           ,0x176,5);
        cMyTrace::operator()(local_20,"gm user password error user_id[%d]",uVar2);
        uVar2 = 0xffffffff;
      }
    }
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    cMyTrace::cMyTrace(local_30,
                       "int ARAD::Arad_Dispatcher_Login_Impl::account_password_check(SIG_LOGIN_DATA*, char*)"
                       ,0x16a,5);
    cMyTrace::operator()(local_30,"get game start time error : user_idx[%d]",uVar2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
