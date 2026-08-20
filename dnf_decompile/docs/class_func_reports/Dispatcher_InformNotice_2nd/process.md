# process

`_ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_InformNotice_2nd::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_InformNotice_2nd` | `0x081e30fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e30fa  _ZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_InformNotice_2nd::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e30fa, 0x081e31a5]
081e30fa +0x00:  push   %ebp
081e30fb +0x01:  mov    %esp,%ebp
081e30fd +0x03:  sub    $0x28,%esp
081e3100 +0x06:  mov    0x14(%ebp),%eax
081e3103 +0x09:  mov    %eax,-0x14(%ebp)
081e3106 +0x0c:  mov    0x10(%ebp),%eax
081e3109 +0x0f:  mov    %eax,0x8(%esp)
081e310d +0x13:  mov    0xc(%ebp),%eax
081e3110 +0x16:  mov    %eax,0x4(%esp)
081e3114 +0x1a:  mov    0x8(%ebp),%eax
081e3117 +0x1d:  mov    %eax,(%esp)
081e311a +0x20:  call   081e31a6 <_ZN27Dispatcher_InformNotice_2nd11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_InformNotice_2nd::check_error(CUser*, MSG_BASE&)
081e311f +0x25:  mov    -0x14(%ebp),%edx
081e3122 +0x28:  mov    %eax,0x4(%edx)
081e3125 +0x2b:  mov    -0x14(%ebp),%eax
081e3128 +0x2e:  mov    0x4(%eax),%eax
081e312b +0x31:  test   %eax,%eax
081e312d +0x33:  jle    081e3136 <+0x3c>
081e312f +0x35:  mov    $0x0,%eax
081e3134 +0x3a:  jmp    081e31a4 <+0xaa>
081e3136 +0x3c:  mov    -0x14(%ebp),%eax
081e3139 +0x3f:  mov    0x4(%eax),%eax
081e313c +0x42:  test   %eax,%eax
081e313e +0x44:  jns    081e3168 <+0x6e>
081e3140 +0x46:  mov    -0x14(%ebp),%eax
081e3143 +0x49:  mov    0x4(%eax),%eax
081e3146 +0x4c:  movl   $0x0,0xc(%esp)
081e314e +0x54:  mov    %eax,0x8(%esp)
081e3152 +0x58:  movl   $&_ZZN27Dispatcher_InformNotice_2nd7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e315a +0x60:  movl   $0x59c7,(%esp)
081e3161 +0x67:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3166 +0x6c:  jmp    081e31a4 <+0xaa>
081e3168 +0x6e:  mov    0x10(%ebp),%eax
081e316b +0x71:  mov    %eax,-0x10(%ebp)
081e316e +0x74:  movl   $0x13,0x4(%esp)
081e3176 +0x7c:  mov    0xc(%ebp),%eax
081e3179 +0x7f:  mov    %eax,(%esp)
081e317c +0x82:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
081e3181 +0x87:  mov    %eax,-0xc(%ebp)
081e3184 +0x8a:  cmpl   $0x0,-0xc(%ebp)
081e3188 +0x8e:  je     081e319f <+0xa5>
081e318a +0x90:  mov    -0x10(%ebp),%eax
081e318d +0x93:  mov    0xd(%eax),%eax
081e3190 +0x96:  mov    %eax,0x4(%esp)
081e3194 +0x9a:  mov    -0xc(%ebp),%eax
081e3197 +0x9d:  mov    %eax,(%esp)
081e319a +0xa0:  call   080e4806 <_ZN19CCharacInformNotice22handleInformNoticeFlagEj>  ; CCharacInformNotice::handleInformNoticeFlag(unsigned int)
081e319f +0xa5:  mov    $0x0,%eax
081e31a4 +0xaa:  leave
081e31a5 +0xab:  ret
```

## 反编译 C

```c
// Dispatcher_InformNotice_2nd::process @ 0x81e30fa

/* Dispatcher_InformNotice_2nd::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_InformNotice_2nd::process
          (Dispatcher_InformNotice_2nd *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CCharacInformNotice *this_00;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x59c7,
                       "virtual int Dispatcher_InformNotice_2nd::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      this_00 = (CCharacInformNotice *)CUser::GetCharacExpandData(param_1,0x13);
      if (this_00 != (CCharacInformNotice *)0x0) {
        CCharacInformNotice::handleInformNoticeFlag(this_00,*(uint *)(param_2 + 0xd));
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
