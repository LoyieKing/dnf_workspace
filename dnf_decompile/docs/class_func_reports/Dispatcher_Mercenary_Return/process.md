# process

`_ZN27Dispatcher_Mercenary_Return7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Mercenary_Return::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Return` | `0x081dd99c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd99c  _ZN27Dispatcher_Mercenary_Return7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Mercenary_Return::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dd99c, 0x081dda1b]
081dd99c +0x00:  push   %ebp
081dd99d +0x01:  mov    %esp,%ebp
081dd99f +0x03:  sub    $0x28,%esp
081dd9a2 +0x06:  cmpl   $0x0,0xc(%ebp)
081dd9a6 +0x0a:  jne    081dd9af <+0x13>
081dd9a8 +0x0c:  mov    $0xffffffff,%eax
081dd9ad +0x11:  jmp    081dda1a <+0x7e>
081dd9af +0x13:  mov    0xc(%ebp),%eax
081dd9b2 +0x16:  mov    %eax,(%esp)
081dd9b5 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dd9ba +0x1e:  cmp    $0x3,%eax
081dd9bd +0x21:  setne  %al
081dd9c0 +0x24:  test   %al,%al
081dd9c2 +0x26:  je     081dd9cb <+0x2f>
081dd9c4 +0x28:  mov    $0xffffffff,%eax
081dd9c9 +0x2d:  jmp    081dda1a <+0x7e>
081dd9cb +0x2f:  mov    0x10(%ebp),%eax
081dd9ce +0x32:  mov    %eax,-0x10(%ebp)
081dd9d1 +0x35:  mov    0x14(%ebp),%eax
081dd9d4 +0x38:  mov    %eax,-0xc(%ebp)
081dd9d7 +0x3b:  mov    -0xc(%ebp),%eax
081dd9da +0x3e:  lea    0xc(%eax),%edx
081dd9dd +0x41:  mov    -0x10(%ebp),%eax
081dd9e0 +0x44:  mov    0x10(%eax),%eax
081dd9e3 +0x47:  mov    %edx,0x8(%esp)
081dd9e7 +0x4b:  mov    %eax,0x4(%esp)
081dd9eb +0x4f:  mov    0xc(%ebp),%eax
081dd9ee +0x52:  mov    %eax,(%esp)
081dd9f1 +0x55:  call   0868e692 <_ZN5CUser23Return_Mercenary_CharacEjR25competition_reward_result>  ; CUser::Return_Mercenary_Charac(unsigned int, competition_reward_result&)
081dd9f6 +0x5a:  mov    -0xc(%ebp),%edx
081dd9f9 +0x5d:  mov    %al,0x4(%edx)
081dd9fc +0x60:  mov    -0x10(%ebp),%eax
081dd9ff +0x63:  movzbl 0xd(%eax),%edx
081dda03 +0x67:  mov    -0xc(%ebp),%eax
081dda06 +0x6a:  mov    %dl,0x5(%eax)
081dda09 +0x6d:  mov    -0x10(%ebp),%eax
081dda0c +0x70:  mov    0x10(%eax),%edx
081dda0f +0x73:  mov    -0xc(%ebp),%eax
081dda12 +0x76:  mov    %edx,0x8(%eax)
081dda15 +0x79:  mov    $0x0,%eax
081dda1a +0x7e:  leave
081dda1b +0x7f:  ret
```

## 反编译 C

```c
// Dispatcher_Mercenary_Return::process @ 0x81dd99c

/* Dispatcher_Mercenary_Return::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Mercenary_Return::process
          (Dispatcher_Mercenary_Return *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      PVar1 = (ParamBase)
              CUser::Return_Mercenary_Charac
                        (param_1,*(uint *)(param_2 + 0x10),
                         (competition_reward_result *)(param_3 + 0xc));
      param_3[4] = PVar1;
      *(MSG_BASE *)(param_3 + 5) = param_2[0xd];
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
