# check_error

`_ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeHostWarRoom` | `0x081d74d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d74d4  _ZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)
# range [0x081d74d4, 0x081d75af]
081d74d4 +0x00:  push   %ebp
081d74d5 +0x01:  mov    %esp,%ebp
081d74d7 +0x03:  sub    $0x28,%esp
081d74da +0x06:  cmpl   $0x0,0xc(%ebp)
081d74de +0x0a:  jne    081d7509 <+0x35>
081d74e0 +0x0c:  movl   $0x0,0xc(%esp)
081d74e8 +0x14:  movl   $0x0,0x8(%esp)
081d74f0 +0x1c:  movl   $&_ZZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d74f8 +0x24:  movl   $0x41b1,(%esp)
081d74ff +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7504 +0x30:  jmp    081d75ad <+0xd9>
081d7509 +0x35:  mov    0xc(%ebp),%eax
081d750c +0x38:  mov    %eax,(%esp)
081d750f +0x3b:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d7514 +0x40:  test   %eax,%eax
081d7516 +0x42:  sete   %al
081d7519 +0x45:  test   %al,%al
081d751b +0x47:  je     081d7543 <+0x6f>
081d751d +0x49:  movl   $0x0,0xc(%esp)
081d7525 +0x51:  movl   $0x0,0x8(%esp)
081d752d +0x59:  movl   $&_ZZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d7535 +0x61:  movl   $0x41b4,(%esp)
081d753c +0x68:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d7541 +0x6d:  jmp    081d75ad <+0xd9>
081d7543 +0x6f:  mov    0x10(%ebp),%eax
081d7546 +0x72:  mov    %eax,-0xc(%ebp)
081d7549 +0x75:  mov    -0xc(%ebp),%eax
081d754c +0x78:  movzbl 0xd(%eax),%eax
081d7550 +0x7c:  test   %al,%al
081d7552 +0x7e:  js     081d755f <+0x8b>
081d7554 +0x80:  mov    -0xc(%ebp),%eax
081d7557 +0x83:  movzbl 0xd(%eax),%eax
081d755b +0x87:  cmp    $0x5,%al
081d755d +0x89:  jle    081d758c <+0xb8>
081d755f +0x8b:  mov    0xc(%ebp),%eax
081d7562 +0x8e:  mov    %eax,(%esp)
081d7565 +0x91:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d756a +0x96:  mov    %eax,0xc(%esp)
081d756e +0x9a:  movl   $0x0,0x8(%esp)
081d7576 +0xa2:  movl   $&_ZZN28Dispatcher_ChangeHostWarRoom11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d757e +0xaa:  movl   $0x41b8,(%esp)
081d7585 +0xb1:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d758a +0xb6:  jmp    081d75ad <+0xd9>
081d758c +0xb8:  mov    0xc(%ebp),%eax
081d758f +0xbb:  mov    %eax,(%esp)
081d7592 +0xbe:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d7597 +0xc3:  cmp    $0x8,%eax
081d759a +0xc6:  setne  %al
081d759d +0xc9:  test   %al,%al
081d759f +0xcb:  je     081d75a8 <+0xd4>
081d75a1 +0xcd:  mov    $0xffffffff,%eax
081d75a6 +0xd2:  jmp    081d75ad <+0xd9>
081d75a8 +0xd4:  mov    $0x0,%eax
081d75ad +0xd9:  leave
081d75ae +0xda:  ret
081d75af +0xdb:  nop
```

## 反编译 C

```c
// Dispatcher_ChangeHostWarRoom::check_error @ 0x81d74d4

/* Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ChangeHostWarRoom::check_error
          (Dispatcher_ChangeHostWarRoom *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = LineFunc(0x41b1,"int Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)",0,0);
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar1 = LineFunc(0x41b4,"int Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)",0,0
                      );
    }
    else if (((char)param_2[0xd] < '\0') || ('\x05' < (char)param_2[0xd])) {
      uVar3 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x41b8,"int Dispatcher_ChangeHostWarRoom::check_error(CUser*, MSG_BASE&)",0,
                       uVar3);
    }
    else {
      iVar2 = CUser::get_state(param_1);
      if (iVar2 == 8) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}
```
