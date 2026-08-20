# GenerateRandomData

`_ZN8Sanicova4CPad18GenerateRandomDataEv`

`Sanicova::CPad::GenerateRandomData()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x085998ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085998ea  _ZN8Sanicova4CPad18GenerateRandomDataEv
#           Sanicova::CPad::GenerateRandomData()
# range [0x085998ea, 0x08599917]
085998ea +0x00:  push   %ebp
085998eb +0x01:  mov    %esp,%ebp
085998ed +0x03:  sub    $0x18,%esp
085998f0 +0x06:  mov    0x8(%ebp),%eax
085998f3 +0x09:  mov    %eax,(%esp)
085998f6 +0x0c:  call   085998a6 <_ZN8Sanicova4CPad17isValidKeyGenTimeEv>  ; Sanicova::CPad::isValidKeyGenTime()
085998fb +0x11:  test   %al,%al
085998fd +0x13:  je     08599915 <+0x2b>
085998ff +0x15:  mov    0x8(%ebp),%eax
08599902 +0x18:  mov    %eax,(%esp)
08599905 +0x1b:  call   08599918 <_ZN8Sanicova4CPad20GenerateRandomKeyIdxEv>  ; Sanicova::CPad::GenerateRandomKeyIdx()
0859990a +0x20:  mov    0x8(%ebp),%eax
0859990d +0x23:  mov    %eax,(%esp)
08599910 +0x26:  call   08599946 <_ZN8Sanicova4CPad23GenerateRandomShakeDataEv>  ; Sanicova::CPad::GenerateRandomShakeData()
08599915 +0x2b:  leave
08599916 +0x2c:  ret
08599917 +0x2d:  nop
```

## 反编译 C

```c
// Sanicova::CPad::GenerateRandomData @ 0x85998ea

/* Sanicova::CPad::GenerateRandomData() */

void __thiscall Sanicova::CPad::GenerateRandomData(CPad *this)

{
  char cVar1;
  
  cVar1 = isValidKeyGenTime(this);
  if (cVar1 != '\0') {
    GenerateRandomKeyIdx(this);
    GenerateRandomShakeData(this);
  }
  return;
}
```
