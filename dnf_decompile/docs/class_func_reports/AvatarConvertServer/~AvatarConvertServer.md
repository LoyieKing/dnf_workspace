# ~AvatarConvertServer

`_ZN19AvatarConvertServerD1Ev`

`AvatarConvertServer::~AvatarConvertServer()`

| 类 | 地址 |
|---|---|
| `AvatarConvertServer` | `0x081921ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081921ec  _ZN19AvatarConvertServerD1Ev
#           AvatarConvertServer::~AvatarConvertServer()
# range [0x081921ec, 0x0819220b]
081921ec +0x00:  push   %ebp
081921ed +0x01:  mov    %esp,%ebp
081921ef +0x03:  sub    $0x18,%esp
081921f2 +0x06:  mov    0x8(%ebp),%eax
081921f5 +0x09:  movl   $&_ZTV19AvatarConvertServer+0x8,(%eax)
081921fb +0x0f:  mov    0x8(%ebp),%eax
081921fe +0x12:  add    $0x4,%eax
08192201 +0x15:  mov    %eax,(%esp)
08192204 +0x18:  call   088b1b22 <_ZN4ARAD6SCRIPT13AvatarConvertD1Ev>  ; ARAD::SCRIPT::AvatarConvert::~AvatarConvert()
08192209 +0x1d:  leave
0819220a +0x1e:  ret
0819220b +0x1f:  nop
```

## 反编译 C

```c
// AvatarConvertServer::~AvatarConvertServer @ 0x81921ec

/* AvatarConvertServer::~AvatarConvertServer() */

void __thiscall AvatarConvertServer::~AvatarConvertServer(AvatarConvertServer *this)

{
  *(undefined ***)this = &PTR_Load_08b9b938;
  ARAD::SCRIPT::AvatarConvert::~AvatarConvert((AvatarConvert *)(this + 4));
  return;
}
```
