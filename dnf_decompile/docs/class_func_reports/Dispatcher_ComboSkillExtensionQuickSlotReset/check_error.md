# check_error

`_ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_ComboSkillExtensionQuickSlotReset::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkillExtensionQuickSlotReset` | `0x0825f594` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f594  _ZN44Dispatcher_ComboSkillExtensionQuickSlotReset11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_ComboSkillExtensionQuickSlotReset::check_error(CUser*, MSG_BASE&)
# range [0x0825f594, 0x0825f609]
0825f594 +0x00:  push   %ebp
0825f595 +0x01:  mov    %esp,%ebp
0825f597 +0x03:  sub    $0x28,%esp
0825f59a +0x06:  mov    0x10(%ebp),%eax
0825f59d +0x09:  mov    %eax,-0xc(%ebp)
0825f5a0 +0x0c:  cmpl   $0x0,0xc(%ebp)
0825f5a4 +0x10:  jne    0825f5ad <+0x19>
0825f5a6 +0x12:  mov    $0xffffffff,%eax
0825f5ab +0x17:  jmp    0825f607 <+0x73>
0825f5ad +0x19:  mov    0xc(%ebp),%eax
0825f5b0 +0x1c:  mov    %eax,(%esp)
0825f5b3 +0x1f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0825f5b8 +0x24:  cmp    $0x2,%eax
0825f5bb +0x27:  setle  %al
0825f5be +0x2a:  test   %al,%al
0825f5c0 +0x2c:  je     0825f5c9 <+0x35>
0825f5c2 +0x2e:  mov    $0xffffffff,%eax
0825f5c7 +0x33:  jmp    0825f607 <+0x73>
0825f5c9 +0x35:  mov    0xc(%ebp),%eax
0825f5cc +0x38:  mov    %eax,(%esp)
0825f5cf +0x3b:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
0825f5d4 +0x40:  cmp    $0x9,%eax
0825f5d7 +0x43:  setne  %al
0825f5da +0x46:  test   %al,%al
0825f5dc +0x48:  je     0825f5e5 <+0x51>
0825f5de +0x4a:  mov    $0xffffffff,%eax
0825f5e3 +0x4f:  jmp    0825f607 <+0x73>
0825f5e5 +0x51:  mov    -0xc(%ebp),%eax
0825f5e8 +0x54:  movzbl 0xd(%eax),%eax
0825f5ec +0x58:  test   %al,%al
0825f5ee +0x5a:  je     0825f602 <+0x6e>
0825f5f0 +0x5c:  mov    -0xc(%ebp),%eax
0825f5f3 +0x5f:  movzbl 0xd(%eax),%eax
0825f5f7 +0x63:  cmp    $0x1,%al
0825f5f9 +0x65:  je     0825f602 <+0x6e>
0825f5fb +0x67:  mov    $0x13,%eax
0825f600 +0x6c:  jmp    0825f607 <+0x73>
0825f602 +0x6e:  mov    $0x0,%eax
0825f607 +0x73:  leave
0825f608 +0x74:  ret
0825f609 +0x75:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkillExtensionQuickSlotReset::check_error @ 0x825f594

/* Dispatcher_ComboSkillExtensionQuickSlotReset::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ComboSkillExtensionQuickSlotReset::check_error
          (Dispatcher_ComboSkillExtensionQuickSlotReset *this,CUser *param_1,MSG_BASE *param_2)

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
