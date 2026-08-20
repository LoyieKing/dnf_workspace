# GetAttachType

`_ZN11sync_script11CSyncScript13GetAttachTypeEi`

`sync_script::CSyncScript::GetAttachType(int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861d3ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861d3ec  _ZN11sync_script11CSyncScript13GetAttachTypeEi
#           sync_script::CSyncScript::GetAttachType(int)
# range [0x0861d3ec, 0x0861d42d]
0861d3ec +0x00:  push   %ebp
0861d3ed +0x01:  mov    %esp,%ebp
0861d3ef +0x03:  cmpl   $0x5,0xc(%ebp)
0861d3f3 +0x07:  ja     0861d426 <+0x3a>
0861d3f5 +0x09:  mov    0xc(%ebp),%eax
0861d3f8 +0x0c:  shl    $0x2,%eax
0861d3fb +0x0f:  mov    &data#3ffec809(.rodata)(%eax),%eax
0861d401 +0x15:  jmp    *%eax
0861d403 +0x17:  mov    $"자유",%eax
0861d408 +0x1c:  jmp    0861d42b <+0x3f>
0861d40a +0x1e:  mov    $"교환",%eax
0861d40f +0x23:  jmp    0861d42b <+0x3f>
0861d411 +0x25:  mov    $"교환삭제",%eax
0861d416 +0x2a:  jmp    0861d42b <+0x3f>
0861d418 +0x2c:  mov    $"밀봉",%eax
0861d41d +0x31:  jmp    0861d42b <+0x3f>
0861d41f +0x33:  mov    $"계정",%eax
0861d424 +0x38:  jmp    0861d42b <+0x3f>
0861d426 +0x3a:  mov    $"",%eax
0861d42b +0x3f:  pop    %ebp
0861d42c +0x40:  ret
0861d42d +0x41:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::GetAttachType @ 0x861d3ec

/* sync_script::CSyncScript::GetAttachType(int) */

undefined * __thiscall sync_script::CSyncScript::GetAttachType(CSyncScript *this,int param_1)

{
  undefined *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = &DAT_08ce2ec9;
    break;
  case 1:
    puVar1 = &DAT_08ce2ece;
    break;
  case 2:
    puVar1 = &DAT_08ce2ed3;
    break;
  case 3:
    puVar1 = &DAT_08ce2edc;
    break;
  default:
    puVar1 = &DAT_08ce2e28;
    break;
  case 5:
    puVar1 = &DAT_08ce2ee1;
  }
  return puVar1;
}
```
