# init

`_ZN19Secu_AccountHacking4initEP5CUser`

`Secu_AccountHacking::init(CUser*)`

| 类 | 地址 |
|---|---|
| `Secu_AccountHacking` | `0x08278a98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08278a98  _ZN19Secu_AccountHacking4initEP5CUser
#           Secu_AccountHacking::init(CUser*)
# range [0x08278a98, 0x08278ab3]
08278a98 +0x00:  push   %ebp
08278a99 +0x01:  mov    %esp,%ebp
08278a9b +0x03:  sub    $0x18,%esp
08278a9e +0x06:  mov    0x8(%ebp),%eax
08278aa1 +0x09:  mov    0xc(%ebp),%edx
08278aa4 +0x0c:  mov    %edx,0x10(%eax)
08278aa7 +0x0f:  mov    0x8(%ebp),%eax
08278aaa +0x12:  mov    %eax,(%esp)
08278aad +0x15:  call   08278ab4 <_ZN19Secu_AccountHacking9resetInfoEv>  ; Secu_AccountHacking::resetInfo()
08278ab2 +0x1a:  leave
08278ab3 +0x1b:  ret
```

## 反编译 C

```c
// Secu_AccountHacking::init @ 0x8278a98

/* Secu_AccountHacking::init(CUser*) */

void __thiscall Secu_AccountHacking::init(Secu_AccountHacking *this,CUser *param_1)

{
  *(CUser **)(this + 0x10) = param_1;
  resetInfo(this);
  return;
}
```
