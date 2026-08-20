# process

`_ZN36Dispatcher_Skill_Command_All_Default7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Skill_Command_All_Default::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Skill_Command_All_Default` | `0x081d2ef8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2ef8  _ZN36Dispatcher_Skill_Command_All_Default7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Skill_Command_All_Default::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d2ef8, 0x081d2f33]
081d2ef8 +0x00:  push   %ebp
081d2ef9 +0x01:  mov    %esp,%ebp
081d2efb +0x03:  sub    $0x28,%esp
081d2efe +0x06:  mov    0x14(%ebp),%eax
081d2f01 +0x09:  mov    %eax,-0x10(%ebp)
081d2f04 +0x0c:  mov    0x10(%ebp),%eax
081d2f07 +0x0f:  mov    %eax,-0xc(%ebp)
081d2f0a +0x12:  mov    0xc(%ebp),%eax
081d2f0d +0x15:  mov    %eax,(%esp)
081d2f10 +0x18:  call   086550ee <_ZN5CUser19defaultSkillCommandEv>  ; CUser::defaultSkillCommand()
081d2f15 +0x1d:  xor    $0x1,%eax
081d2f18 +0x20:  test   %al,%al
081d2f1a +0x22:  je     081d2f2d <+0x35>
081d2f1c +0x24:  mov    -0x10(%ebp),%eax
081d2f1f +0x27:  movl   $0xfc,0x4(%eax)
081d2f26 +0x2e:  mov    $0x0,%eax
081d2f2b +0x33:  jmp    081d2f32 <+0x3a>
081d2f2d +0x35:  mov    $0x0,%eax
081d2f32 +0x3a:  leave
081d2f33 +0x3b:  ret
```

## 反编译 C

```c
// Dispatcher_Skill_Command_All_Default::process @ 0x81d2ef8

/* Dispatcher_Skill_Command_All_Default::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Skill_Command_All_Default::process
          (Dispatcher_Skill_Command_All_Default *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  
  cVar1 = CUser::defaultSkillCommand(param_1);
  if (cVar1 != '\x01') {
    *(undefined4 *)(param_3 + 4) = 0xfc;
  }
  return 0;
}
```
