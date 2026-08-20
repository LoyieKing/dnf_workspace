# punish_user_check

`_ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA`

`ARAD::Arad_Dispatcher_Login_Impl::punish_user_check(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_Dispatcher_Login_Impl` | `0x0818f970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818f970  _ZN4ARAD26Arad_Dispatcher_Login_Impl17punish_user_checkEP14SIG_LOGIN_DATA
#           ARAD::Arad_Dispatcher_Login_Impl::punish_user_check(SIG_LOGIN_DATA*)
# range [0x0818f970, 0x0818fabd]
0818f970 +0x000:  push   %ebp
0818f971 +0x001:  mov    %esp,%ebp
0818f973 +0x003:  sub    $0x28,%esp
0818f976 +0x006:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0818f97d +0x00d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0818f982 +0x012:  mov    %eax,-0x18(%ebp)
0818f985 +0x015:  movl   $0x0,-0x14(%ebp)
0818f98c +0x01c:  jmp    0818faa0 <+0x130>
0818f991 +0x021:  mov    -0x14(%ebp),%edx
0818f994 +0x024:  mov    0xc(%ebp),%ecx
0818f997 +0x027:  mov    %edx,%eax
0818f999 +0x029:  add    %eax,%eax
0818f99b +0x02b:  add    %edx,%eax
0818f99d +0x02d:  shl    $0x3,%eax
0818f9a0 +0x030:  lea    (%ecx,%eax,1),%eax
0818f9a3 +0x033:  add    $0x3a68,%eax
0818f9a8 +0x038:  mov    (%eax),%eax
0818f9aa +0x03a:  mov    %eax,-0x10(%ebp)
0818f9ad +0x03d:  mov    -0x14(%ebp),%edx
0818f9b0 +0x040:  mov    0xc(%ebp),%ecx
0818f9b3 +0x043:  mov    %edx,%eax
0818f9b5 +0x045:  add    %eax,%eax
0818f9b7 +0x047:  add    %edx,%eax
0818f9b9 +0x049:  shl    $0x3,%eax
0818f9bc +0x04c:  lea    (%ecx,%eax,1),%eax
0818f9bf +0x04f:  add    $0x3a54,%eax
0818f9c4 +0x054:  mov    (%eax),%eax
0818f9c6 +0x056:  mov    %eax,-0xc(%ebp)
0818f9c9 +0x059:  mov    -0xc(%ebp),%eax
0818f9cc +0x05c:  mov    %eax,0x4(%esp)
0818f9d0 +0x060:  mov    0xc(%ebp),%eax
0818f9d3 +0x063:  mov    %eax,(%esp)
0818f9d6 +0x066:  call   08196dbf <_ZN4ARAD12PUNISH_CHECK19punish_check_by_HUBEP14SIG_LOGIN_DATAi>  ; ARAD::PUNISH_CHECK::punish_check_by_HUB(SIG_LOGIN_DATA*, int)
0818f9db +0x06b:  mov    -0xc(%ebp),%eax
0818f9de +0x06e:  mov    %eax,0x4(%esp)
0818f9e2 +0x072:  mov    0xc(%ebp),%eax
0818f9e5 +0x075:  mov    %eax,(%esp)
0818f9e8 +0x078:  call   08196dce <_ZN4ARAD12PUNISH_CHECK19punish_check_by_RESEP14SIG_LOGIN_DATAi>  ; ARAD::PUNISH_CHECK::punish_check_by_RES(SIG_LOGIN_DATA*, int)
0818f9ed +0x07d:  mov    -0x18(%ebp),%eax
0818f9f0 +0x080:  cmp    -0x10(%ebp),%eax
0818f9f3 +0x083:  jg     0818fa9b <+0x12b>
0818f9f9 +0x089:  mov    -0xc(%ebp),%eax
0818f9fc +0x08c:  mov    %eax,0x8(%esp)
0818fa00 +0x090:  mov    -0x10(%ebp),%eax
0818fa03 +0x093:  mov    %eax,0x4(%esp)
0818fa07 +0x097:  mov    0xc(%ebp),%eax
0818fa0a +0x09a:  mov    %eax,(%esp)
0818fa0d +0x09d:  call   08196d1a <_ZN4ARAD12PUNISH_CHECK19punish_check_by_WEBEP14SIG_LOGIN_DATAli>  ; ARAD::PUNISH_CHECK::punish_check_by_WEB(SIG_LOGIN_DATA*, long, int)
0818fa12 +0x0a2:  test   %eax,%eax
0818fa14 +0x0a4:  sete   %al
0818fa17 +0x0a7:  test   %al,%al
0818fa19 +0x0a9:  je     0818fa31 <+0xc1>
0818fa1b +0x0ab:  mov    0xc(%ebp),%eax
0818fa1e +0x0ae:  mov    -0x14(%ebp),%edx
0818fa21 +0x0b1:  mov    %edx,0x3a50(%eax)
0818fa27 +0x0b7:  mov    $0x0,%eax
0818fa2c +0x0bc:  jmp    0818fabc <+0x14c>
0818fa31 +0x0c1:  mov    -0xc(%ebp),%eax
0818fa34 +0x0c4:  mov    %eax,0x8(%esp)
0818fa38 +0x0c8:  mov    -0x10(%ebp),%eax
0818fa3b +0x0cb:  mov    %eax,0x4(%esp)
0818fa3f +0x0cf:  mov    0xc(%ebp),%eax
0818fa42 +0x0d2:  mov    %eax,(%esp)
0818fa45 +0x0d5:  call   08196d88 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_SYSEP14SIG_LOGIN_DATAli>  ; ARAD::PUNISH_CHECK::punish_check_by_SYS(SIG_LOGIN_DATA*, long, int)
0818fa4a +0x0da:  test   %eax,%eax
0818fa4c +0x0dc:  sete   %al
0818fa4f +0x0df:  test   %al,%al
0818fa51 +0x0e1:  je     0818fa66 <+0xf6>
0818fa53 +0x0e3:  mov    0xc(%ebp),%eax
0818fa56 +0x0e6:  mov    -0x14(%ebp),%edx
0818fa59 +0x0e9:  mov    %edx,0x3a50(%eax)
0818fa5f +0x0ef:  mov    $0x0,%eax
0818fa64 +0x0f4:  jmp    0818fabc <+0x14c>
0818fa66 +0x0f6:  mov    -0xc(%ebp),%eax
0818fa69 +0x0f9:  mov    %eax,0x8(%esp)
0818fa6d +0x0fd:  mov    -0x10(%ebp),%eax
0818fa70 +0x100:  mov    %eax,0x4(%esp)
0818fa74 +0x104:  mov    0xc(%ebp),%eax
0818fa77 +0x107:  mov    %eax,(%esp)
0818fa7a +0x10a:  call   08196d51 <_ZN4ARAD12PUNISH_CHECK19punish_check_by_ARSEP14SIG_LOGIN_DATAli>  ; ARAD::PUNISH_CHECK::punish_check_by_ARS(SIG_LOGIN_DATA*, long, int)
0818fa7f +0x10f:  test   %eax,%eax
0818fa81 +0x111:  sete   %al
0818fa84 +0x114:  test   %al,%al
0818fa86 +0x116:  je     0818fa9c <+0x12c>
0818fa88 +0x118:  mov    0xc(%ebp),%eax
0818fa8b +0x11b:  mov    -0x14(%ebp),%edx
0818fa8e +0x11e:  mov    %edx,0x3a50(%eax)
0818fa94 +0x124:  mov    $0x0,%eax
0818fa99 +0x129:  jmp    0818fabc <+0x14c>
0818fa9b +0x12b:  nop
0818fa9c +0x12c:  addl   $0x1,-0x14(%ebp)
0818faa0 +0x130:  mov    0xc(%ebp),%eax
0818faa3 +0x133:  mov    0x3a50(%eax),%eax
0818faa9 +0x139:  cmp    -0x14(%ebp),%eax
0818faac +0x13c:  setg   %al
0818faaf +0x13f:  test   %al,%al
0818fab1 +0x141:  jne    0818f991 <+0x21>
0818fab7 +0x147:  mov    $0x1,%eax
0818fabc +0x14c:  leave
0818fabd +0x14d:  ret
```

## 反编译 C

```c
// ARAD::Arad_Dispatcher_Login_Impl::punish_user_check @ 0x818f970

/* ARAD::Arad_Dispatcher_Login_Impl::punish_user_check(SIG_LOGIN_DATA*) */

undefined4 __thiscall
ARAD::Arad_Dispatcher_Login_Impl::punish_user_check
          (Arad_Dispatcher_Login_Impl *this,SIG_LOGIN_DATA *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_18 = 0;
  do {
    if (*(int *)(param_1 + 0x3a50) <= local_18) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + local_18 * 0x18 + 0x3a68);
    iVar1 = *(int *)(param_1 + local_18 * 0x18 + 0x3a54);
    PUNISH_CHECK::punish_check_by_HUB(param_1,iVar1);
    PUNISH_CHECK::punish_check_by_RES(param_1,iVar1);
    if (iVar2 <= iVar4) {
      iVar3 = PUNISH_CHECK::punish_check_by_WEB(param_1,iVar4,iVar1);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x3a50) = local_18;
        return 0;
      }
      iVar3 = PUNISH_CHECK::punish_check_by_SYS(param_1,iVar4,iVar1);
      if (iVar3 == 0) {
        *(int *)(param_1 + 0x3a50) = local_18;
        return 0;
      }
      iVar4 = PUNISH_CHECK::punish_check_by_ARS(param_1,iVar4,iVar1);
      if (iVar4 == 0) {
        *(int *)(param_1 + 0x3a50) = local_18;
        return 0;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}
```
