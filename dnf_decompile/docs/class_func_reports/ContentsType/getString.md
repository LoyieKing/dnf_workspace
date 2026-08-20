# getString

`_ZN12ContentsType9getStringENS_1TE`

`ContentsType::getString(ContentsType::T)`

| 类 | 地址 |
|---|---|
| `ContentsType` | `0x08ac3434` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac3434  _ZN12ContentsType9getStringENS_1TE
#           ContentsType::getString(ContentsType::T)
# range [0x08ac3434, 0x08ac34a3]
08ac3434 +0x00:  push   %ebp
08ac3435 +0x01:  mov    %esp,%ebp
08ac3437 +0x03:  mov    0x8(%ebp),%eax
08ac343a +0x06:  cmp    $0xc,%eax
08ac343d +0x09:  ja     08ac349c <+0x68>
08ac343f +0x0b:  mov    &data#f29ad5b4(.rodata)(,%eax,4),%eax
08ac3446 +0x12:  jmp    *%eax
08ac3448 +0x14:  mov    $"[normal]",%eax
08ac344d +0x19:  jmp    08ac34a1 <+0x6d>
08ac344f +0x1b:  mov    $"[ancient]",%eax
08ac3454 +0x20:  jmp    08ac34a1 <+0x6d>
08ac3456 +0x22:  mov    $"[dimension]",%eax
08ac345b +0x27:  jmp    08ac34a1 <+0x6d>
08ac345d +0x29:  mov    $"[tower]",%eax
08ac3462 +0x2e:  jmp    08ac34a1 <+0x6d>
08ac3464 +0x30:  mov    $"[infinite]",%eax
08ac3469 +0x35:  jmp    08ac34a1 <+0x6d>
08ac346b +0x37:  mov    $"[ultimate]",%eax
08ac3470 +0x3c:  jmp    08ac34a1 <+0x6d>
08ac3472 +0x3e:  mov    $"[despair]",%eax
08ac3477 +0x43:  jmp    08ac34a1 <+0x6d>
08ac3479 +0x45:  mov    $"[tournament]",%eax
08ac347e +0x4a:  jmp    08ac34a1 <+0x6d>
08ac3480 +0x4c:  mov    $"[pvp]",%eax
08ac3485 +0x51:  jmp    08ac34a1 <+0x6d>
08ac3487 +0x53:  mov    $"[fair pvp]",%eax
08ac348c +0x58:  jmp    08ac34a1 <+0x6d>
08ac348e +0x5a:  mov    $"[warroom]",%eax
08ac3493 +0x5f:  jmp    08ac34a1 <+0x6d>
08ac3495 +0x61:  mov    $"[assault]",%eax
08ac349a +0x66:  jmp    08ac34a1 <+0x6d>
08ac349c +0x68:  mov    $"",%eax
08ac34a1 +0x6d:  pop    %ebp
08ac34a2 +0x6e:  ret
08ac34a3 +0x6f:  nop
```

## 反编译 C

```c
// ContentsType::getString @ 0x8ac3434

/* ContentsType::getString(ContentsType::T) */

char * ContentsType::getString(undefined4 param_1)

{
  char *pcVar1;
  
  switch(param_1) {
  default:
    pcVar1 = "";
    break;
  case 1:
    pcVar1 = "[normal]";
    break;
  case 2:
    pcVar1 = "[ancient]";
    break;
  case 3:
    pcVar1 = "[dimension]";
    break;
  case 4:
    pcVar1 = "[tower]";
    break;
  case 5:
    pcVar1 = "[infinite]";
    break;
  case 6:
    pcVar1 = "[ultimate]";
    break;
  case 7:
    pcVar1 = "[despair]";
    break;
  case 8:
    pcVar1 = "[tournament]";
    break;
  case 9:
    pcVar1 = "[pvp]";
    break;
  case 10:
    pcVar1 = "[fair pvp]";
    break;
  case 0xb:
    pcVar1 = "[warroom]";
    break;
  case 0xc:
    pcVar1 = "[assault]";
  }
  return pcVar1;
}
```
