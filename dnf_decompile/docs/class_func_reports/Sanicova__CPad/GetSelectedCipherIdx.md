# GetSelectedCipherIdx

`_ZN8Sanicova4CPad20GetSelectedCipherIdxEv`

`Sanicova::CPad::GetSelectedCipherIdx()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x0859984c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859984c  _ZN8Sanicova4CPad20GetSelectedCipherIdxEv
#           Sanicova::CPad::GetSelectedCipherIdx()
# range [0x0859984c, 0x08599871]
0859984c +0x00:  push   %ebp
0859984d +0x01:  mov    %esp,%ebp
0859984f +0x03:  sub    $0x28,%esp
08599852 +0x06:  movw   $0x1387,-0xa(%ebp)
08599858 +0x0c:  mov    0x8(%ebp),%eax
0859985b +0x0f:  lea    0x2e(%eax),%edx
0859985e +0x12:  lea    -0xa(%ebp),%eax
08599861 +0x15:  mov    %eax,0x4(%esp)
08599865 +0x19:  mov    %edx,(%esp)
08599868 +0x1c:  call   0828716d <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0xab>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0xab
0859986d +0x21:  movzwl (%eax),%eax
08599870 +0x24:  leave
08599871 +0x25:  ret
```

## 反编译 C

```c
// Sanicova::CPad::GetSelectedCipherIdx @ 0x859984c

/* Sanicova::CPad::GetSelectedCipherIdx() */

ushort __thiscall Sanicova::CPad::GetSelectedCipherIdx(CPad *this)

{
  ushort *puVar1;
  ushort local_e [5];
  
  local_e[0] = 4999;
  puVar1 = std::min<unsigned_short>((ushort *)(this + 0x2e),local_e);
  return *puVar1;
}
```
