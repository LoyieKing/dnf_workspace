# process

`_ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Expand_Equipslot_Flag_Update::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Expand_Equipslot_Flag_Update` | `0x081d5f10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5f10  _ZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Expand_Equipslot_Flag_Update::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d5f10, 0x081d5fad]
081d5f10 +0x00:  push   %ebp
081d5f11 +0x01:  mov    %esp,%ebp
081d5f13 +0x03:  sub    $0x28,%esp
081d5f16 +0x06:  cmpl   $0x0,0xc(%ebp)
081d5f1a +0x0a:  jne    081d5f26 <+0x16>
081d5f1c +0x0c:  mov    $0x1,%eax
081d5f21 +0x11:  jmp    081d5fac <+0x9c>
081d5f26 +0x16:  mov    0xc(%ebp),%eax
081d5f29 +0x19:  mov    %eax,(%esp)
081d5f2c +0x1c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d5f31 +0x21:  cmp    $0x2,%eax
081d5f34 +0x24:  setle  %al
081d5f37 +0x27:  test   %al,%al
081d5f39 +0x29:  je     081d5f42 <+0x32>
081d5f3b +0x2b:  mov    $0x13,%eax
081d5f40 +0x30:  jmp    081d5fac <+0x9c>
081d5f42 +0x32:  mov    0x10(%ebp),%eax
081d5f45 +0x35:  mov    %eax,-0x14(%ebp)
081d5f48 +0x38:  mov    0x14(%ebp),%eax
081d5f4b +0x3b:  mov    %eax,-0x10(%ebp)
081d5f4e +0x3e:  mov    -0x14(%ebp),%eax
081d5f51 +0x41:  movzbl 0xd(%eax),%eax
081d5f55 +0x45:  movsbl %al,%eax
081d5f58 +0x48:  mov    %eax,0x4(%esp)
081d5f5c +0x4c:  mov    0xc(%ebp),%eax
081d5f5f +0x4f:  mov    %eax,(%esp)
081d5f62 +0x52:  call   0868aa54 <_ZN5CUser19UpdateEquipslotFlagEc>  ; CUser::UpdateEquipslotFlag(char)
081d5f67 +0x57:  mov    %al,-0x9(%ebp)
081d5f6a +0x5a:  cmpb   $0x13,-0x9(%ebp)
081d5f6e +0x5e:  jne    081d5f9d <+0x8d>
081d5f70 +0x60:  mov    0xc(%ebp),%eax
081d5f73 +0x63:  mov    %eax,(%esp)
081d5f76 +0x66:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d5f7b +0x6b:  mov    %eax,0xc(%esp)
081d5f7f +0x6f:  movl   $0x0,0x8(%esp)
081d5f87 +0x77:  movl   $&_ZZN39Dispatcher_Expand_Equipslot_Flag_Update7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5f8f +0x7f:  movl   $0x3df3,(%esp)
081d5f96 +0x86:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5f9b +0x8b:  jmp    081d5fac <+0x9c>
081d5f9d +0x8d:  mov    -0x10(%ebp),%eax
081d5fa0 +0x90:  movzbl -0x9(%ebp),%edx
081d5fa4 +0x94:  mov    %dl,0x4(%eax)
081d5fa7 +0x97:  mov    $0x0,%eax
081d5fac +0x9c:  leave
081d5fad +0x9d:  ret
```

## 反编译 C

```c
// Dispatcher_Expand_Equipslot_Flag_Update::process @ 0x81d5f10

/* Dispatcher_Expand_Equipslot_Flag_Update::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Expand_Equipslot_Flag_Update::process
          (Dispatcher_Expand_Equipslot_Flag_Update *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      uVar2 = 0x13;
    }
    else {
      PVar1 = (ParamBase)CUser::UpdateEquipslotFlag(param_1,(char)param_2[0xd]);
      if (PVar1 == (ParamBase)0x13) {
        uVar4 = CUser::get_acc_id(param_1);
        uVar2 = LineFunc(0x3df3,
                         "virtual int Dispatcher_Expand_Equipslot_Flag_Update::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar4);
      }
      else {
        param_3[4] = PVar1;
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
