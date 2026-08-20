# process

`_ZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_SkillInit::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SkillInit` | `0x081e598a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e598a  _ZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_SkillInit::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e598a, 0x081e5a2b]
081e598a +0x00:  push   %ebp
081e598b +0x01:  mov    %esp,%ebp
081e598d +0x03:  sub    $0x28,%esp
081e5990 +0x06:  mov    0x14(%ebp),%eax
081e5993 +0x09:  mov    %eax,-0x10(%ebp)
081e5996 +0x0c:  mov    0x10(%ebp),%eax
081e5999 +0x0f:  mov    %eax,0x8(%esp)
081e599d +0x13:  mov    0xc(%ebp),%eax
081e59a0 +0x16:  mov    %eax,0x4(%esp)
081e59a4 +0x1a:  mov    0x8(%ebp),%eax
081e59a7 +0x1d:  mov    %eax,(%esp)
081e59aa +0x20:  call   081e5a2c <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_SkillInit::check_error(CUser*, MSG_BASE&)
081e59af +0x25:  mov    -0x10(%ebp),%edx
081e59b2 +0x28:  mov    %eax,0x4(%edx)
081e59b5 +0x2b:  mov    -0x10(%ebp),%eax
081e59b8 +0x2e:  mov    0x4(%eax),%eax
081e59bb +0x31:  test   %eax,%eax
081e59bd +0x33:  jle    081e59c6 <+0x3c>
081e59bf +0x35:  mov    $0x0,%eax
081e59c4 +0x3a:  jmp    081e5a29 <+0x9f>
081e59c6 +0x3c:  mov    -0x10(%ebp),%eax
081e59c9 +0x3f:  mov    0x4(%eax),%eax
081e59cc +0x42:  test   %eax,%eax
081e59ce +0x44:  jns    081e59f8 <+0x6e>
081e59d0 +0x46:  mov    -0x10(%ebp),%eax
081e59d3 +0x49:  mov    0x4(%eax),%eax
081e59d6 +0x4c:  movl   $0x0,0xc(%esp)
081e59de +0x54:  mov    %eax,0x8(%esp)
081e59e2 +0x58:  movl   $&_ZZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e59ea +0x60:  movl   $0x5f3d,(%esp)
081e59f1 +0x67:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e59f6 +0x6c:  jmp    081e5a29 <+0x9f>
081e59f8 +0x6e:  mov    0x10(%ebp),%eax
081e59fb +0x71:  mov    %eax,-0xc(%ebp)
081e59fe +0x74:  mov    -0xc(%ebp),%eax
081e5a01 +0x77:  movzbl 0xd(%eax),%edx
081e5a05 +0x7b:  mov    -0x10(%ebp),%eax
081e5a08 +0x7e:  mov    %dl,0x8(%eax)
081e5a0b +0x81:  mov    -0x10(%ebp),%eax
081e5a0e +0x84:  mov    %eax,0x8(%esp)
081e5a12 +0x88:  mov    0xc(%ebp),%eax
081e5a15 +0x8b:  mov    %eax,0x4(%esp)
081e5a19 +0x8f:  mov    0x8(%ebp),%eax
081e5a1c +0x92:  mov    %eax,(%esp)
081e5a1f +0x95:  call   081e5bdc <_ZN20Dispatcher_SkillInit18process_skill_initEP5CUserR9ParamBase>  ; Dispatcher_SkillInit::process_skill_init(CUser*, ParamBase&)
081e5a24 +0x9a:  mov    $0x0,%eax
081e5a29 +0x9f:  leave
081e5a2a +0xa0:  ret
081e5a2b +0xa1:  nop
```

## 反编译 C

```c
// Dispatcher_SkillInit::process @ 0x81e598a

/* Dispatcher_SkillInit::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SkillInit::process
          (Dispatcher_SkillInit *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x5f3d,
                       "virtual int Dispatcher_SkillInit::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      process_skill_init(this,param_1,param_3);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
