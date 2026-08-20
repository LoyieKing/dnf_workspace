# GetUsableCharacter

`_ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript`

`sync_script::CSyncScript::GetUsableCharacter(STStackableScript*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d38e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d38e  _ZN11sync_script11CSyncScript18GetUsableCharacterEP17STStackableScript
#           sync_script::CSyncScript::GetUsableCharacter(STStackableScript*)
# range [0x0861d38e, 0x0861d3eb]
0861d38e +0x00:  push   %ebp
0861d38f +0x01:  mov    %esp,%ebp
0861d391 +0x03:  sub    $0x18,%esp
0861d394 +0x06:  mov    0xc(%ebp),%eax
0861d397 +0x09:  movzbl 0xa0(%eax),%eax
0861d39e +0x10:  test   %al,%al
0861d3a0 +0x12:  je     0861d3a9 <+0x1b>
0861d3a2 +0x14:  mov    $"모두",%eax
0861d3a7 +0x19:  jmp    0861d3e9 <+0x5b>
0861d3a9 +0x1b:  movl   $0x0,-0x4(%ebp)
0861d3b0 +0x22:  jmp    0861d3d9 <+0x4b>
0861d3b2 +0x24:  mov    -0x4(%ebp),%eax
0861d3b5 +0x27:  mov    0xc(%ebp),%edx
0861d3b8 +0x2a:  movzbl 0x38(%edx,%eax,1),%eax
0861d3bd +0x2f:  test   %al,%al
0861d3bf +0x31:  je     0861d3d5 <+0x47>
0861d3c1 +0x33:  mov    -0x4(%ebp),%eax
0861d3c4 +0x36:  mov    %eax,0x4(%esp)
0861d3c8 +0x3a:  mov    0x8(%ebp),%eax
0861d3cb +0x3d:  mov    %eax,(%esp)
0861d3ce +0x40:  call   0861d2dc <_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB>  ; sync_script::CSyncScript::GetUserJob(ENUM_CHARACTERJOB)
0861d3d3 +0x45:  jmp    0861d3e9 <+0x5b>
0861d3d5 +0x47:  addl   $0x1,-0x4(%ebp)
0861d3d9 +0x4b:  cmpl   $0xa,-0x4(%ebp)
0861d3dd +0x4f:  setle  %al
0861d3e0 +0x52:  test   %al,%al
0861d3e2 +0x54:  jne    0861d3b2 <+0x24>
0861d3e4 +0x56:  mov    $"",%eax
0861d3e9 +0x5b:  leave
0861d3ea +0x5c:  ret
0861d3eb +0x5d:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::GetUsableCharacter @ 0x861d38e

/* sync_script::CSyncScript::GetUsableCharacter(STStackableScript*) */

undefined * __thiscall
sync_script::CSyncScript::GetUsableCharacter(CSyncScript *this,STStackableScript *param_1)

{
  undefined *puVar1;
  int local_8;
  
  if (param_1[0xa0] == (STStackableScript)0x0) {
    for (local_8 = 0; local_8 < 0xb; local_8 = local_8 + 1) {
      if (param_1[local_8 + 0x38] != (STStackableScript)0x0) {
        puVar1 = (undefined *)GetUserJob(this,local_8);
        return puVar1;
      }
    }
    puVar1 = &DAT_08ce2e28;
  }
  else {
    puVar1 = &DAT_08ce2ec4;
  }
  return puVar1;
}
```
