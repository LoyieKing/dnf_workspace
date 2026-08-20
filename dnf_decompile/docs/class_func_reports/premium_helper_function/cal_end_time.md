# cal_end_time

`_ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi`

`premium_helper_function::cal_end_time(CUser*, long&, long&, long, int, bool, int)`

| 类 | 地址 |
|---|---|
| `premium_helper_function` | `0x0827d024` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827d024  _ZN23premium_helper_function12cal_end_timeEP5CUserRlS2_libi
#           premium_helper_function::cal_end_time(CUser*, long&, long&, long, int, bool, int)
# range [0x0827d024, 0x0827d0f4]
0827d024 +0x00:  push   %ebp
0827d025 +0x01:  mov    %esp,%ebp
0827d027 +0x03:  sub    $0x38,%esp
0827d02a +0x06:  mov    0x1c(%ebp),%eax
0827d02d +0x09:  mov    %al,-0x1c(%ebp)
0827d030 +0x0c:  cmpb   $0x0,-0x1c(%ebp)
0827d034 +0x10:  je     0827d095 <+0x71>
0827d036 +0x12:  mov    0x8(%ebp),%eax
0827d039 +0x15:  mov    %eax,(%esp)
0827d03c +0x18:  call   0812ce28 <_GLOBAL__I__ZN16CLocalChina_User16SendFatigueEventEv+0xa4>  ; global constructors keyed to CLocalChina_User::SendFatigueEvent()+0xa4
0827d041 +0x1d:  mov    0x18(%ebp),%edx
0827d044 +0x20:  mov    %edx,0x4(%esp)
0827d048 +0x24:  mov    %eax,(%esp)
0827d04b +0x27:  call   086adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>  ; WongWork::CUserPremium::GetPremiumInfo(int) const
0827d050 +0x2c:  mov    %eax,-0xc(%ebp)
0827d053 +0x2f:  mov    -0xc(%ebp),%eax
0827d056 +0x32:  mov    (%eax),%eax
0827d058 +0x34:  cmp    0x18(%ebp),%eax
0827d05b +0x37:  jne    0827d080 <+0x5c>
0827d05d +0x39:  mov    -0xc(%ebp),%eax
0827d060 +0x3c:  mov    0x8(%eax),%edx
0827d063 +0x3f:  mov    0x20(%ebp),%eax
0827d066 +0x42:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0827d06c +0x48:  add    %eax,%edx
0827d06e +0x4a:  mov    0x10(%ebp),%eax
0827d071 +0x4d:  mov    %edx,(%eax)
0827d073 +0x4f:  mov    -0xc(%ebp),%eax
0827d076 +0x52:  mov    0x4(%eax),%edx
0827d079 +0x55:  mov    0xc(%ebp),%eax
0827d07c +0x58:  mov    %edx,(%eax)
0827d07e +0x5a:  jmp    0827d0a8 <+0x84>
0827d080 +0x5c:  mov    0x20(%ebp),%eax
0827d083 +0x5f:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0827d089 +0x65:  mov    %eax,%edx
0827d08b +0x67:  add    0x14(%ebp),%edx
0827d08e +0x6a:  mov    0x10(%ebp),%eax
0827d091 +0x6d:  mov    %edx,(%eax)
0827d093 +0x6f:  jmp    0827d0a8 <+0x84>
0827d095 +0x71:  mov    0x20(%ebp),%eax
0827d098 +0x74:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
0827d09e +0x7a:  mov    %eax,%edx
0827d0a0 +0x7c:  add    0x14(%ebp),%edx
0827d0a3 +0x7f:  mov    0x10(%ebp),%eax
0827d0a6 +0x82:  mov    %edx,(%eax)
0827d0a8 +0x84:  mov    0x18(%ebp),%edx
0827d0ab +0x87:  mov    %edx,%eax
0827d0ad +0x89:  shl    $0x3,%eax
0827d0b0 +0x8c:  add    %edx,%eax
0827d0b2 +0x8e:  shl    $0x5,%eax
0827d0b5 +0x91:  mov    &g_SPremiumInfo+0x8(%eax),%eax
0827d0bb +0x97:  test   %eax,%eax
0827d0bd +0x99:  je     0827d0f3 <+0xcf>
0827d0bf +0x9b:  mov    0x18(%ebp),%edx
0827d0c2 +0x9e:  mov    %edx,%eax
0827d0c4 +0xa0:  shl    $0x3,%eax
0827d0c7 +0xa3:  add    %edx,%eax
0827d0c9 +0xa5:  shl    $0x5,%eax
0827d0cc +0xa8:  mov    &g_SPremiumInfo+0x8(%eax),%edx
0827d0d2 +0xae:  mov    0xc(%ebp),%eax
0827d0d5 +0xb1:  mov    (%eax),%eax
0827d0d7 +0xb3:  cmp    %eax,%edx
0827d0d9 +0xb5:  jle    0827d0f3 <+0xcf>
0827d0db +0xb7:  mov    0x18(%ebp),%edx
0827d0de +0xba:  mov    %edx,%eax
0827d0e0 +0xbc:  shl    $0x3,%eax
0827d0e3 +0xbf:  add    %edx,%eax
0827d0e5 +0xc1:  shl    $0x5,%eax
0827d0e8 +0xc4:  mov    &g_SPremiumInfo+0x8(%eax),%edx
0827d0ee +0xca:  mov    0x10(%ebp),%eax
0827d0f1 +0xcd:  mov    %edx,(%eax)
0827d0f3 +0xcf:  leave
0827d0f4 +0xd0:  ret
```

## 反编译 C

```c
// premium_helper_function::cal_end_time @ 0x827d024

/* premium_helper_function::cal_end_time(CUser*, long&, long&, long, int, bool, int) */

void premium_helper_function::cal_end_time
               (CUser *param_1,long *param_2,long *param_3,long param_4,int param_5,bool param_6,
               int param_7)

{
  CUserPremium *this;
  int *piVar1;
  
  if (param_6) {
    this = (CUserPremium *)CUser::GetPremiumInfo(param_1);
    piVar1 = (int *)WongWork::CUserPremium::GetPremiumInfo(this,param_5);
    if (*piVar1 == param_5) {
      *param_3 = piVar1[2] + param_7 * 0x15180;
      *param_2 = piVar1[1];
    }
    else {
      *param_3 = param_7 * 0x15180 + param_4;
    }
  }
  else {
    *param_3 = param_7 * 0x15180 + param_4;
  }
  if ((*(int *)(g_SPremiumInfo + param_5 * 0x120 + 8) != 0) &&
     (*param_2 < *(int *)(g_SPremiumInfo + param_5 * 0x120 + 8))) {
    *param_3 = *(long *)(g_SPremiumInfo + param_5 * 0x120 + 8);
  }
  return;
}
```
