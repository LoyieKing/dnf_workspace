# GetShakeData

`_ZN8Sanicova4CPad12GetShakeDataEi`

`Sanicova::CPad::GetShakeData(int)`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x08599936` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599936  _ZN8Sanicova4CPad12GetShakeDataEi
#           Sanicova::CPad::GetShakeData(int)
# range [0x08599936, 0x08599945]
08599936 +0x00:  push   %ebp
08599937 +0x01:  mov    %esp,%ebp
08599939 +0x03:  mov    0xc(%ebp),%eax
0859993c +0x06:  mov    0x8(%ebp),%edx
0859993f +0x09:  movzbl 0x34(%edx,%eax,1),%eax
08599944 +0x0e:  pop    %ebp
08599945 +0x0f:  ret
```

## 反编译 C

```c
// Sanicova::CPad::GetShakeData @ 0x8599936

/* Sanicova::CPad::GetShakeData(int) */

CPad __thiscall Sanicova::CPad::GetShakeData(CPad *this,int param_1)

{
  return this[param_1 + 0x34];
}
```
