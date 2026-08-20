# check_error

`_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_WarRoomWpPerMonster` | `0x081d5df2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5df2  _ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)
# range [0x081d5df2, 0x081d5e81]
081d5df2 +0x00:  push   %ebp
081d5df3 +0x01:  mov    %esp,%ebp
081d5df5 +0x03:  sub    $0x18,%esp
081d5df8 +0x06:  cmpl   $0x0,0xc(%ebp)
081d5dfc +0x0a:  jne    081d5e24 <+0x32>
081d5dfe +0x0c:  movl   $0x0,0xc(%esp)
081d5e06 +0x14:  movl   $0x0,0x8(%esp)
081d5e0e +0x1c:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5e16 +0x24:  movl   $0x39af,(%esp)
081d5e1d +0x2b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5e22 +0x30:  jmp    081d5e7f <+0x8d>
081d5e24 +0x32:  mov    0xc(%ebp),%eax
081d5e27 +0x35:  mov    %eax,(%esp)
081d5e2a +0x38:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081d5e2f +0x3d:  test   %eax,%eax
081d5e31 +0x3f:  sete   %al
081d5e34 +0x42:  test   %al,%al
081d5e36 +0x44:  je     081d5e5e <+0x6c>
081d5e38 +0x46:  movl   $0x0,0xc(%esp)
081d5e40 +0x4e:  movl   $0x0,0x8(%esp)
081d5e48 +0x56:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d5e50 +0x5e:  movl   $0x39b2,(%esp)
081d5e57 +0x65:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5e5c +0x6a:  jmp    081d5e7f <+0x8d>
081d5e5e +0x6c:  mov    0xc(%ebp),%eax
081d5e61 +0x6f:  mov    %eax,(%esp)
081d5e64 +0x72:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d5e69 +0x77:  cmp    $0x8,%eax
081d5e6c +0x7a:  setne  %al
081d5e6f +0x7d:  test   %al,%al
081d5e71 +0x7f:  je     081d5e7a <+0x88>
081d5e73 +0x81:  mov    $0xffffffff,%eax
081d5e78 +0x86:  jmp    081d5e7f <+0x8d>
081d5e7a +0x88:  mov    $0x0,%eax
081d5e7f +0x8d:  leave
081d5e80 +0x8e:  ret
081d5e81 +0x8f:  nop
```

## 反编译 C

```c
// Dispatcher_WarRoomWpPerMonster::check_error @ 0x81d5df2

/* Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_WarRoomWpPerMonster::check_error(CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar1 = LineFunc(0x39af,"int Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)",0,0
                    );
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar1 = LineFunc(0x39b2,"int Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)",0
                       ,0);
    }
    else {
      iVar2 = CUser::get_state((CUser *)param_2);
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
