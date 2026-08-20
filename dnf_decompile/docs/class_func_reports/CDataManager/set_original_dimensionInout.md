# set_original_dimensionInout

`_ZN12CDataManager27set_original_dimensionInoutEic`

`CDataManager::set_original_dimensionInout(int, char)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365e78  _ZN12CDataManager27set_original_dimensionInoutEic
#           CDataManager::set_original_dimensionInout(int, char)
# range [0x08365e78, 0x08365e9f]
08365e78 +0x00:  push   %ebp
08365e79 +0x01:  mov    %esp,%ebp
08365e7b +0x03:  sub    $0x4,%esp
08365e7e +0x06:  mov    0x10(%ebp),%eax
08365e81 +0x09:  mov    %al,-0x4(%ebp)
08365e84 +0x0c:  cmpl   $0x5,0xc(%ebp)
08365e88 +0x10:  jg     08365e9d <+0x25>
08365e8a +0x12:  mov    0xc(%ebp),%eax
08365e8d +0x15:  mov    0x8(%ebp),%edx
08365e90 +0x18:  movzbl -0x4(%ebp),%ecx
08365e94 +0x1c:  mov    %cl,0xaa7a(%edx,%eax,1)
08365e9b +0x23:  jmp    08365e9e <+0x26>
08365e9d +0x25:  nop
08365e9e +0x26:  leave
08365e9f +0x27:  ret
```

## 反编译 C

```c
// CDataManager::set_original_dimensionInout @ 0x8365e78

/* CDataManager::set_original_dimensionInout(int, char) */

void __thiscall
CDataManager::set_original_dimensionInout(CDataManager *this,int param_1,char param_2)

{
  if (param_1 < 6) {
    this[param_1 + 0xaa7a] = (CDataManager)param_2;
  }
  return;
}
```
