# process

`_ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ChangeLetterStat::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeLetterStat` | `0x081ce1fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce1fc  _ZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ChangeLetterStat::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ce1fc, 0x081ce2b9]
081ce1fc +0x00:  push   %ebp
081ce1fd +0x01:  mov    %esp,%ebp
081ce1ff +0x03:  sub    $0x28,%esp
081ce202 +0x06:  mov    0x14(%ebp),%eax
081ce205 +0x09:  mov    %eax,-0x10(%ebp)
081ce208 +0x0c:  mov    0x10(%ebp),%eax
081ce20b +0x0f:  mov    %eax,0x8(%esp)
081ce20f +0x13:  mov    0xc(%ebp),%eax
081ce212 +0x16:  mov    %eax,0x4(%esp)
081ce216 +0x1a:  mov    0x8(%ebp),%eax
081ce219 +0x1d:  mov    %eax,(%esp)
081ce21c +0x20:  call   081ce2ba <_ZN27Dispatcher_ChangeLetterStat11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ChangeLetterStat::check_error(CUser*, MSG_BASE&)
081ce221 +0x25:  mov    %eax,%edx
081ce223 +0x27:  mov    -0x10(%ebp),%eax
081ce226 +0x2a:  mov    %edx,0x4(%eax)
081ce229 +0x2d:  mov    -0x10(%ebp),%eax
081ce22c +0x30:  mov    0x4(%eax),%eax
081ce22f +0x33:  test   %eax,%eax
081ce231 +0x35:  jle    081ce23a <+0x3e>
081ce233 +0x37:  mov    $0x0,%eax
081ce238 +0x3c:  jmp    081ce2b8 <+0xbc>
081ce23a +0x3e:  mov    -0x10(%ebp),%eax
081ce23d +0x41:  mov    0x4(%eax),%eax
081ce240 +0x44:  test   %eax,%eax
081ce242 +0x46:  jns    081ce273 <+0x77>
081ce244 +0x48:  mov    0xc(%ebp),%eax
081ce247 +0x4b:  mov    %eax,(%esp)
081ce24a +0x4e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ce24f +0x53:  mov    -0x10(%ebp),%edx
081ce252 +0x56:  mov    0x4(%edx),%edx
081ce255 +0x59:  mov    %eax,0xc(%esp)
081ce259 +0x5d:  mov    %edx,0x8(%esp)
081ce25d +0x61:  movl   $&_ZZN27Dispatcher_ChangeLetterStat7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ce265 +0x69:  movl   $0x2744,(%esp)
081ce26c +0x70:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce271 +0x75:  jmp    081ce2b8 <+0xbc>
081ce273 +0x77:  mov    0x10(%ebp),%eax
081ce276 +0x7a:  mov    %eax,-0xc(%ebp)
081ce279 +0x7d:  mov    -0xc(%ebp),%eax
081ce27c +0x80:  movzwl 0x11(%eax),%eax
081ce280 +0x84:  movswl %ax,%edx
081ce283 +0x87:  mov    -0xc(%ebp),%eax
081ce286 +0x8a:  mov    0xd(%eax),%eax
081ce289 +0x8d:  mov    %edx,0x8(%esp)
081ce28d +0x91:  mov    %eax,0x4(%esp)
081ce291 +0x95:  mov    0xc(%ebp),%eax
081ce294 +0x98:  mov    %eax,(%esp)
081ce297 +0x9b:  call   085568a6 <_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii>  ; WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser*, int, int)
081ce29c +0xa0:  mov    -0x10(%ebp),%edx
081ce29f +0xa3:  mov    %eax,0x4(%edx)
081ce2a2 +0xa6:  mov    -0x10(%ebp),%eax
081ce2a5 +0xa9:  mov    0x4(%eax),%eax
081ce2a8 +0xac:  test   %eax,%eax
081ce2aa +0xae:  je     081ce2b3 <+0xb7>
081ce2ac +0xb0:  mov    $0x0,%eax
081ce2b1 +0xb5:  jmp    081ce2b8 <+0xbc>
081ce2b3 +0xb7:  mov    $0x0,%eax
081ce2b8 +0xbc:  leave
081ce2b9 +0xbd:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeLetterStat::process @ 0x81ce1fc

/* Dispatcher_ChangeLetterStat::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ChangeLetterStat::process
          (Dispatcher_ChangeLetterStat *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2744,
                       "virtual int Dispatcher_ChangeLetterStat::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      uVar1 = WongWork::CMailBoxHelper::ReqChangeLetterStat
                        (param_1,*(int *)(param_2 + 0xd),(int)*(short *)(param_2 + 0x11));
      *(undefined4 *)(param_3 + 4) = uVar1;
      if (*(int *)(param_3 + 4) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
