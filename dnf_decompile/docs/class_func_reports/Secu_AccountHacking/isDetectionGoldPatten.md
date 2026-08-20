# isDetectionGoldPatten

`_ZN19Secu_AccountHacking21isDetectionGoldPattenEv`

`Secu_AccountHacking::isDetectionGoldPatten()`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x082792a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082792a0  _ZN19Secu_AccountHacking21isDetectionGoldPattenEv
#           Secu_AccountHacking::isDetectionGoldPatten()
# range [0x082792a0, 0x082792db]
082792a0 +0x00:  push   %ebp
082792a1 +0x01:  mov    %esp,%ebp
082792a3 +0x03:  mov    0x8(%ebp),%eax
082792a6 +0x06:  movzbl (%eax),%eax
082792a9 +0x09:  test   %al,%al
082792ab +0x0b:  jne    082792ce <+0x2e>
082792ad +0x0d:  mov    0x8(%ebp),%eax
082792b0 +0x10:  movzbl 0x1(%eax),%eax
082792b4 +0x14:  test   %al,%al
082792b6 +0x16:  jne    082792ce <+0x2e>
082792b8 +0x18:  mov    0x8(%ebp),%eax
082792bb +0x1b:  movzbl 0x2(%eax),%eax
082792bf +0x1f:  test   %al,%al
082792c1 +0x21:  jne    082792ce <+0x2e>
082792c3 +0x23:  mov    0x8(%ebp),%eax
082792c6 +0x26:  movzbl 0x3(%eax),%eax
082792ca +0x2a:  test   %al,%al
082792cc +0x2c:  je     082792d5 <+0x35>
082792ce +0x2e:  mov    $0x1,%eax
082792d3 +0x33:  jmp    082792da <+0x3a>
082792d5 +0x35:  mov    $0x0,%eax
082792da +0x3a:  pop    %ebp
082792db +0x3b:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::isDetectionGoldPatten @ 0x82792a0

/* Secu_AccountHacking::isDetectionGoldPatten() */

undefined4 __thiscall Secu_AccountHacking::isDetectionGoldPatten(Secu_AccountHacking *this)

{
  undefined4 uVar1;
  
  if ((((*this == (Secu_AccountHacking)0x0) && (this[1] == (Secu_AccountHacking)0x0)) &&
      (this[2] == (Secu_AccountHacking)0x0)) && (this[3] == (Secu_AccountHacking)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
