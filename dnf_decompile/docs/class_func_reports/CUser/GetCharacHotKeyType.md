# GetCharacHotKeyType

`_ZN5CUser19GetCharacHotKeyTypeEi`

`CUser::GetCharacHotKeyType(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692ef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692ef2  _ZN5CUser19GetCharacHotKeyTypeEi
#           CUser::GetCharacHotKeyType(int)
# range [0x08692ef2, 0x08692f09]
08692ef2 +0x00:  push   %ebp
08692ef3 +0x01:  mov    %esp,%ebp
08692ef5 +0x03:  cmpl   $0xa,0xc(%ebp)
08692ef9 +0x07:  jne    08692f02 <+0x10>
08692efb +0x09:  mov    $0x1,%eax
08692f00 +0x0e:  jmp    08692f07 <+0x15>
08692f02 +0x10:  mov    $0x0,%eax
08692f07 +0x15:  pop    %ebp
08692f08 +0x16:  ret
08692f09 +0x17:  nop
```

## 反编译 C

```c
// CUser::GetCharacHotKeyType @ 0x8692ef2

/* CUser::GetCharacHotKeyType(int) */

bool __thiscall CUser::GetCharacHotKeyType(CUser *this,int param_1)

{
  return param_1 == 10;
}
```
