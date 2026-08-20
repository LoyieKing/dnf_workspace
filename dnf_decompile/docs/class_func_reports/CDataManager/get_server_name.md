# get_server_name

`_ZNK12CDataManager15get_server_nameEi`

`CDataManager::get_server_name(int) const`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365f00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365f00  _ZNK12CDataManager15get_server_nameEi
#           CDataManager::get_server_name(int) const
# range [0x08365f00, 0x08365fbf]
08365f00 +0x00:  push   %ebp
08365f01 +0x01:  mov    %esp,%ebp
08365f03 +0x03:  cmpl   $0x0,0xc(%ebp)
08365f07 +0x07:  js     08365f0f <+0xf>
08365f09 +0x09:  cmpl   $0x12,0xc(%ebp)
08365f0d +0x0d:  jle    08365f19 <+0x19>
08365f0f +0x0f:  mov    $"ERROR_SERVER",%eax
08365f14 +0x14:  jmp    08365fbe <+0xbe>
08365f19 +0x19:  cmpl   $0x64,0xc(%ebp)
08365f1d +0x1d:  ja     08365fb9 <+0xb9>
08365f23 +0x23:  mov    0xc(%ebp),%eax
08365f26 +0x26:  shl    $0x2,%eax
08365f29 +0x29:  mov    &data#7596643b(.rodata)(%eax),%eax
08365f2f +0x2f:  jmp    *%eax
08365f31 +0x31:  mov    $"카인",%eax
08365f36 +0x36:  jmp    08365fbe <+0xbe>
08365f3b +0x3b:  mov    $"디레지에",%eax
08365f40 +0x40:  jmp    08365fbe <+0xbe>
08365f42 +0x42:  mov    $"시로코",%eax
08365f47 +0x47:  jmp    08365fbe <+0xbe>
08365f49 +0x49:  mov    $"프레이",%eax
08365f4e +0x4e:  jmp    08365fbe <+0xbe>
08365f50 +0x50:  mov    $"카시야스",%eax
08365f55 +0x55:  jmp    08365fbe <+0xbe>
08365f57 +0x57:  mov    $"힐더",%eax
08365f5c +0x5c:  jmp    08365fbe <+0xbe>
08365f5e +0x5e:  mov    $"루크",%eax
08365f63 +0x63:  jmp    08365fbe <+0xbe>
08365f65 +0x65:  mov    $"세리아",%eax
08365f6a +0x6a:  jmp    08365fbe <+0xbe>
08365f6c +0x6c:  mov    $"안톤",%eax
08365f71 +0x71:  jmp    08365fbe <+0xbe>
08365f73 +0x73:  mov    $"록시",%eax
08365f78 +0x78:  jmp    08365fbe <+0xbe>
08365f7a +0x7a:  mov    $"바칼",%eax
08365f7f +0x7f:  jmp    08365fbe <+0xbe>
08365f81 +0x81:  mov    $"오즈마",%eax
08365f86 +0x86:  jmp    08365fbe <+0xbe>
08365f88 +0x88:  mov    $"카잔",%eax
08365f8d +0x8d:  jmp    08365fbe <+0xbe>
08365f8f +0x8f:  mov    $"이벤트1",%eax
08365f94 +0x94:  jmp    08365fbe <+0xbe>
08365f96 +0x96:  mov    $"이벤트2",%eax
08365f9b +0x9b:  jmp    08365fbe <+0xbe>
08365f9d +0x9d:  mov    $"이벤트3",%eax
08365fa2 +0xa2:  jmp    08365fbe <+0xbe>
08365fa4 +0xa4:  mov    $"스타트",%eax
08365fa9 +0xa9:  jmp    08365fbe <+0xbe>
08365fab +0xab:  mov    $"퍼섭1",%eax
08365fb0 +0xb0:  jmp    08365fbe <+0xbe>
08365fb2 +0xb2:  mov    $"퍼섭2",%eax
08365fb7 +0xb7:  jmp    08365fbe <+0xbe>
08365fb9 +0xb9:  mov    $"ERROR_SERVER",%eax
08365fbe +0xbe:  pop    %ebp
08365fbf +0xbf:  ret
```

## 反编译 C

```c
// CDataManager::get_server_name @ 0x8365f00

/* CDataManager::get_server_name(int) const */

char * __thiscall CDataManager::get_server_name(CDataManager *this,int param_1)

{
  char *pcVar1;
  
  if ((param_1 < 0) || (0x12 < param_1)) {
    pcVar1 = "ERROR_SERVER";
  }
  else {
    switch(param_1) {
    default:
      pcVar1 = "ERROR_SERVER";
      break;
    case 1:
      pcVar1 = &DAT_08c3327b;
      break;
    case 2:
      pcVar1 = &DAT_08c33280;
      break;
    case 3:
      pcVar1 = &DAT_08c33289;
      break;
    case 4:
      pcVar1 = &DAT_08c33290;
      break;
    case 5:
      pcVar1 = &DAT_08c33297;
      break;
    case 6:
      pcVar1 = &DAT_08c332a0;
      break;
    case 7:
      pcVar1 = &DAT_08c332a5;
      break;
    case 8:
      pcVar1 = &DAT_08c332aa;
      break;
    case 9:
      pcVar1 = &DAT_08c332b1;
      break;
    case 10:
      pcVar1 = &DAT_08c332b6;
      break;
    case 0xb:
      pcVar1 = &DAT_08c332bb;
      break;
    case 0xc:
      pcVar1 = &DAT_08c332c0;
      break;
    case 0xd:
      pcVar1 = &DAT_08c332c7;
      break;
    case 0xe:
      pcVar1 = &DAT_08c332cc;
      break;
    case 0xf:
      pcVar1 = &DAT_08c332d4;
      break;
    case 0x10:
      pcVar1 = &DAT_08c332dc;
      break;
    case 0x11:
      pcVar1 = &DAT_08c332e4;
    }
  }
  return pcVar1;
}
```
