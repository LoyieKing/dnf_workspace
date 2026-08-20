# process

`_ZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MailBox_Extract::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MailBox_Extract` | `0x081cce50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cce50  _ZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MailBox_Extract::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cce50, 0x081ccee9]
081cce50 +0x00:  push   %ebp
081cce51 +0x01:  mov    %esp,%ebp
081cce53 +0x03:  sub    $0x28,%esp
081cce56 +0x06:  mov    0x14(%ebp),%eax
081cce59 +0x09:  mov    %eax,-0x10(%ebp)
081cce5c +0x0c:  mov    0x10(%ebp),%eax
081cce5f +0x0f:  mov    %eax,0x8(%esp)
081cce63 +0x13:  mov    0xc(%ebp),%eax
081cce66 +0x16:  mov    %eax,0x4(%esp)
081cce6a +0x1a:  mov    0x8(%ebp),%eax
081cce6d +0x1d:  mov    %eax,(%esp)
081cce70 +0x20:  call   081cceea <_ZN26Dispatcher_MailBox_Extract11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MailBox_Extract::check_error(CUser*, MSG_BASE&)
081cce75 +0x25:  mov    %eax,%edx
081cce77 +0x27:  mov    -0x10(%ebp),%eax
081cce7a +0x2a:  mov    %edx,0x4(%eax)
081cce7d +0x2d:  mov    -0x10(%ebp),%eax
081cce80 +0x30:  mov    0x4(%eax),%eax
081cce83 +0x33:  test   %eax,%eax
081cce85 +0x35:  jle    081cce8e <+0x3e>
081cce87 +0x37:  mov    $0x0,%eax
081cce8c +0x3c:  jmp    081ccee7 <+0x97>
081cce8e +0x3e:  mov    -0x10(%ebp),%eax
081cce91 +0x41:  mov    0x4(%eax),%eax
081cce94 +0x44:  test   %eax,%eax
081cce96 +0x46:  jns    081ccec7 <+0x77>
081cce98 +0x48:  mov    0xc(%ebp),%eax
081cce9b +0x4b:  mov    %eax,(%esp)
081cce9e +0x4e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ccea3 +0x53:  mov    -0x10(%ebp),%edx
081ccea6 +0x56:  mov    0x4(%edx),%edx
081ccea9 +0x59:  mov    %eax,0xc(%esp)
081ccead +0x5d:  mov    %edx,0x8(%esp)
081cceb1 +0x61:  movl   $&_ZZN26Dispatcher_MailBox_Extract7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cceb9 +0x69:  movl   $0x245d,(%esp)
081ccec0 +0x70:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ccec5 +0x75:  jmp    081ccee7 <+0x97>
081ccec7 +0x77:  mov    0x10(%ebp),%eax
081cceca +0x7a:  mov    %eax,-0xc(%ebp)
081ccecd +0x7d:  mov    -0xc(%ebp),%eax
081cced0 +0x80:  mov    0xd(%eax),%eax
081cced3 +0x83:  mov    %eax,0x4(%esp)
081cced7 +0x87:  mov    0xc(%ebp),%eax
081cceda +0x8a:  mov    %eax,(%esp)
081ccedd +0x8d:  call   085549de <_ZN8WongWork14CMailBoxHelper10GetPackegeEP5CUserj>  ; WongWork::CMailBoxHelper::GetPackege(CUser*, unsigned int)
081ccee2 +0x92:  mov    $0x0,%eax
081ccee7 +0x97:  leave
081ccee8 +0x98:  ret
081ccee9 +0x99:  nop
```

## 反编译 C

```c
// Dispatcher_MailBox_Extract::process @ 0x81cce50

/* Dispatcher_MailBox_Extract::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MailBox_Extract::process
          (Dispatcher_MailBox_Extract *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x245d,
                       "virtual int Dispatcher_MailBox_Extract::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      WongWork::CMailBoxHelper::GetPackege(param_1,*(uint *)(param_2 + 0xd));
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
