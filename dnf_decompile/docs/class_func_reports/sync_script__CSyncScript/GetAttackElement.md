# GetAttackElement

`_ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo`

`sync_script::CSyncScript::GetAttackElement(EquipmentParameterInfo*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d42e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d42e  _ZN11sync_script11CSyncScript16GetAttackElementEP22EquipmentParameterInfo
#           sync_script::CSyncScript::GetAttackElement(EquipmentParameterInfo*)
# range [0x0861d42e, 0x0861d471]
0861d42e +0x00:  push   %ebp
0861d42f +0x01:  mov    %esp,%ebp
0861d431 +0x03:  mov    0xc(%ebp),%eax
0861d434 +0x06:  mov    0x140(%eax),%eax
0861d43a +0x0c:  cmp    $0x4,%eax
0861d43d +0x0f:  ja     0861d46b <+0x3d>
0861d43f +0x11:  mov    &data#87a06290(.rodata)(,%eax,4),%eax
0861d446 +0x18:  jmp    *%eax
0861d448 +0x1a:  mov    $"화",%eax
0861d44d +0x1f:  jmp    0861d470 <+0x42>
0861d44f +0x21:  mov    $"수",%eax
0861d454 +0x26:  jmp    0861d470 <+0x42>
0861d456 +0x28:  mov    $"암",%eax
0861d45b +0x2d:  jmp    0861d470 <+0x42>
0861d45d +0x2f:  mov    $"명",%eax
0861d462 +0x34:  jmp    0861d470 <+0x42>
0861d464 +0x36:  mov    $"무",%eax
0861d469 +0x3b:  jmp    0861d470 <+0x42>
0861d46b +0x3d:  mov    $"",%eax
0861d470 +0x42:  pop    %ebp
0861d471 +0x43:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::GetAttackElement @ 0x861d42e

/* sync_script::CSyncScript::GetAttackElement(EquipmentParameterInfo*) */

undefined * __thiscall
sync_script::CSyncScript::GetAttackElement(CSyncScript *this,EquipmentParameterInfo *param_1)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0x140)) {
  case 0:
    puVar1 = &DAT_08ce2f00;
    break;
  case 1:
    puVar1 = &DAT_08ce2f03;
    break;
  case 2:
    puVar1 = &DAT_08ce2f06;
    break;
  case 3:
    puVar1 = &DAT_08ce2f09;
    break;
  case 4:
    puVar1 = &DAT_08ce2f0c;
    break;
  default:
    puVar1 = &DAT_08ce2e28;
  }
  return puVar1;
}
```
