# check_error

`_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ComboSkill::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkill` | `0x0825f3ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f3ce  _ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ComboSkill::check_error(CUser*, MSG_BASE&)
# range [0x0825f3ce, 0x0825f443]
0825f3ce +0x00:  push   %ebp
0825f3cf +0x01:  mov    %esp,%ebp
0825f3d1 +0x03:  sub    $0x28,%esp
0825f3d4 +0x06:  mov    0x10(%ebp),%eax
0825f3d7 +0x09:  mov    %eax,-0xc(%ebp)
0825f3da +0x0c:  cmpl   $0x0,0xc(%ebp)
0825f3de +0x10:  jne    0825f3e7 <+0x19>
0825f3e0 +0x12:  mov    $0xffffffff,%eax
0825f3e5 +0x17:  jmp    0825f441 <+0x73>
0825f3e7 +0x19:  mov    0xc(%ebp),%eax
0825f3ea +0x1c:  mov    %eax,(%esp)
0825f3ed +0x1f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825f3f2 +0x24:  cmp    $0x2,%eax
0825f3f5 +0x27:  setle  %al
0825f3f8 +0x2a:  test   %al,%al
0825f3fa +0x2c:  je     0825f403 <+0x35>
0825f3fc +0x2e:  mov    $0xffffffff,%eax
0825f401 +0x33:  jmp    0825f441 <+0x73>
0825f403 +0x35:  mov    0xc(%ebp),%eax
0825f406 +0x38:  mov    %eax,(%esp)
0825f409 +0x3b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0825f40e +0x40:  cmp    $0x9,%eax
0825f411 +0x43:  setne  %al
0825f414 +0x46:  test   %al,%al
0825f416 +0x48:  je     0825f41f <+0x51>
0825f418 +0x4a:  mov    $0xffffffff,%eax
0825f41d +0x4f:  jmp    0825f441 <+0x73>
0825f41f +0x51:  mov    -0xc(%ebp),%eax
0825f422 +0x54:  movzbl 0xd(%eax),%eax
0825f426 +0x58:  test   %al,%al
0825f428 +0x5a:  je     0825f43c <+0x6e>
0825f42a +0x5c:  mov    -0xc(%ebp),%eax
0825f42d +0x5f:  movzbl 0xd(%eax),%eax
0825f431 +0x63:  cmp    $0x1,%al
0825f433 +0x65:  je     0825f43c <+0x6e>
0825f435 +0x67:  mov    $0x13,%eax
0825f43a +0x6c:  jmp    0825f441 <+0x73>
0825f43c +0x6e:  mov    $0x0,%eax
0825f441 +0x73:  leave
0825f442 +0x74:  ret
0825f443 +0x75:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkill::check_error @ 0x825f3ce

/* Dispatcher_ComboSkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkill::check_error(Dispatcher_ComboSkill *this,CUser *param_1,MSG_BASE *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar2 == 9) {
        if ((param_2[0xd] == (MSG_BASE)0x0) || (param_2[0xd] == (MSG_BASE)0x1)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 0x13;
        }
      }
      else {
        uVar1 = 0xffffffff;
      }
    }
  }
  return uVar1;
}
```
