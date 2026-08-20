# send

`_ZN19DisPatcher_UseSkill4sendEP5CUserR9ParamBase`

`DisPatcher_UseSkill::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UseSkill` | `0x081caf28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081caf28  _ZN19DisPatcher_UseSkill4sendEP5CUserR9ParamBase
#           DisPatcher_UseSkill::send(CUser*, ParamBase&)
# range [0x081caf28, 0x081caf41]
081caf28 +0x00:  push   %ebp
081caf29 +0x01:  mov    %esp,%ebp
081caf2b +0x03:  sub    $0x10,%esp
081caf2e +0x06:  mov    0x10(%ebp),%eax
081caf31 +0x09:  mov    %eax,-0x4(%ebp)
081caf34 +0x0c:  mov    -0x4(%ebp),%eax
081caf37 +0x0f:  mov    0x4(%eax),%eax
081caf3a +0x12:  cmp    $0x7fffffff,%eax
081caf3f +0x17:  leave
081caf40 +0x18:  ret
081caf41 +0x19:  nop
```

## 反编译 C

```c
// DisPatcher_UseSkill::send @ 0x81caf28

/* DisPatcher_UseSkill::send(CUser*, ParamBase&) */

undefined4 __thiscall
DisPatcher_UseSkill::send(DisPatcher_UseSkill *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}
```
