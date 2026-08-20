# process

`_ZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SaveCharacterOption::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SaveCharacterOption` | `0x081ce97c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce97c  _ZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SaveCharacterOption::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ce97c, 0x081cea27]
081ce97c +0x00:  push   %ebp
081ce97d +0x01:  mov    %esp,%ebp
081ce97f +0x03:  sub    $0x28,%esp
081ce982 +0x06:  mov    0x14(%ebp),%eax
081ce985 +0x09:  mov    %eax,-0x10(%ebp)
081ce988 +0x0c:  mov    0x10(%ebp),%eax
081ce98b +0x0f:  mov    %eax,0x8(%esp)
081ce98f +0x13:  mov    0xc(%ebp),%eax
081ce992 +0x16:  mov    %eax,0x4(%esp)
081ce996 +0x1a:  mov    0x8(%ebp),%eax
081ce999 +0x1d:  mov    %eax,(%esp)
081ce99c +0x20:  call   081cea28 <_ZN30Dispatcher_SaveCharacterOption11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SaveCharacterOption::check_error(CUser*, MSG_BASE&)
081ce9a1 +0x25:  mov    %eax,%edx
081ce9a3 +0x27:  mov    -0x10(%ebp),%eax
081ce9a6 +0x2a:  mov    %edx,0x4(%eax)
081ce9a9 +0x2d:  mov    -0x10(%ebp),%eax
081ce9ac +0x30:  mov    0x4(%eax),%eax
081ce9af +0x33:  test   %eax,%eax
081ce9b1 +0x35:  jle    081ce9ba <+0x3e>
081ce9b3 +0x37:  mov    $0x0,%eax
081ce9b8 +0x3c:  jmp    081cea26 <+0xaa>
081ce9ba +0x3e:  mov    -0x10(%ebp),%eax
081ce9bd +0x41:  mov    0x4(%eax),%eax
081ce9c0 +0x44:  test   %eax,%eax
081ce9c2 +0x46:  jns    081ce9f3 <+0x77>
081ce9c4 +0x48:  mov    0xc(%ebp),%eax
081ce9c7 +0x4b:  mov    %eax,(%esp)
081ce9ca +0x4e:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ce9cf +0x53:  mov    -0x10(%ebp),%edx
081ce9d2 +0x56:  mov    0x4(%edx),%edx
081ce9d5 +0x59:  mov    %eax,0xc(%esp)
081ce9d9 +0x5d:  mov    %edx,0x8(%esp)
081ce9dd +0x61:  movl   $&_ZZN30Dispatcher_SaveCharacterOption7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ce9e5 +0x69:  movl   $0x283d,(%esp)
081ce9ec +0x70:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce9f1 +0x75:  jmp    081cea26 <+0xaa>
081ce9f3 +0x77:  mov    0x10(%ebp),%eax
081ce9f6 +0x7a:  mov    %eax,-0xc(%ebp)
081ce9f9 +0x7d:  mov    0xc(%ebp),%eax
081ce9fc +0x80:  movl   $0x1,0x4(%esp)
081cea04 +0x88:  mov    %eax,(%esp)
081cea07 +0x8b:  call   0822f292 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x493c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x493c
081cea0c +0x90:  mov    -0xc(%ebp),%eax
081cea0f +0x93:  lea    0x11(%eax),%edx
081cea12 +0x96:  mov    0xc(%ebp),%eax
081cea15 +0x99:  mov    %edx,0x4(%esp)
081cea19 +0x9d:  mov    %eax,(%esp)
081cea1c +0xa0:  call   0868efae <_ZN15CUserCharacInfo18SetCurCharacOptionER15CharacterOption>  ; CUserCharacInfo::SetCurCharacOption(CharacterOption&)
081cea21 +0xa5:  mov    $0x0,%eax
081cea26 +0xaa:  leave
081cea27 +0xab:  ret
```

## 反编译 C

```c
// Dispatcher_SaveCharacterOption::process @ 0x81ce97c

/* Dispatcher_SaveCharacterOption::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SaveCharacterOption::process
          (Dispatcher_SaveCharacterOption *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x283d,
                       "virtual int Dispatcher_SaveCharacterOption::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      CUserCharacInfo::setSaveCharacOption((CUserCharacInfo *)param_1,true);
      CUserCharacInfo::SetCurCharacOption
                ((CUserCharacInfo *)param_1,(CharacterOption *)(param_2 + 0x11));
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
