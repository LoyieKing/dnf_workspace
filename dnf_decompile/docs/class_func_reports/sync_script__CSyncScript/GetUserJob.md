# GetUserJob

`_ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB`

`sync_script::CSyncScript::GetUserJob(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d2dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d2dc  _ZN11sync_script11CSyncScript10GetUserJobE17ENUM_CHARACTERJOB
#           sync_script::CSyncScript::GetUserJob(ENUM_CHARACTERJOB)
# range [0x0861d2dc, 0x0861d32f]
0861d2dc +0x00:  push   %ebp
0861d2dd +0x01:  mov    %esp,%ebp
0861d2df +0x03:  mov    0xc(%ebp),%eax
0861d2e2 +0x06:  cmp    $0x7,%eax
0861d2e5 +0x09:  ja     0861d328 <+0x4c>
0861d2e7 +0x0b:  mov    &data#7e338a98(.rodata)(,%eax,4),%eax
0861d2ee +0x12:  jmp    *%eax
0861d2f0 +0x14:  mov    $"귀검사",%eax
0861d2f5 +0x19:  jmp    0861d32d <+0x51>
0861d2f7 +0x1b:  mov    $"격투가",%eax
0861d2fc +0x20:  jmp    0861d32d <+0x51>
0861d2fe +0x22:  mov    $"거너",%eax
0861d303 +0x27:  jmp    0861d32d <+0x51>
0861d305 +0x29:  mov    $"마법사",%eax
0861d30a +0x2e:  jmp    0861d32d <+0x51>
0861d30c +0x30:  mov    $"프리스트",%eax
0861d311 +0x35:  jmp    0861d32d <+0x51>
0861d313 +0x37:  mov    $"여거너",%eax
0861d318 +0x3c:  jmp    0861d32d <+0x51>
0861d31a +0x3e:  mov    $"도적",%eax
0861d31f +0x43:  jmp    0861d32d <+0x51>
0861d321 +0x45:  mov    $"남격투가",%eax
0861d326 +0x4a:  jmp    0861d32d <+0x51>
0861d328 +0x4c:  mov    $"",%eax
0861d32d +0x51:  pop    %ebp
0861d32e +0x52:  ret
0861d32f +0x53:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::GetUserJob @ 0x861d2dc

/* sync_script::CSyncScript::GetUserJob(ENUM_CHARACTERJOB) */

undefined * __thiscall sync_script::CSyncScript::GetUserJob(undefined4 this,undefined4 param_2)

{
  undefined *puVar1;
  
  switch(param_2) {
  case 0:
    puVar1 = &DAT_08ce2e6c;
    break;
  case 1:
    puVar1 = &DAT_08ce2e73;
    break;
  case 2:
    puVar1 = &DAT_08ce2e7a;
    break;
  case 3:
    puVar1 = &DAT_08ce2e7f;
    break;
  case 4:
    puVar1 = &DAT_08ce2e86;
    break;
  case 5:
    puVar1 = &DAT_08ce2e8f;
    break;
  case 6:
    puVar1 = &DAT_08ce2e96;
    break;
  case 7:
    puVar1 = &DAT_08ce2e9b;
    break;
  default:
    puVar1 = &DAT_08ce2e28;
  }
  return puVar1;
}
```
