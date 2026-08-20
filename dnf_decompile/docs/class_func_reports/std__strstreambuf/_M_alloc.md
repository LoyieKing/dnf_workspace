# _M_alloc

`_ZNSt12strstreambuf8_M_allocEj`

`std::strstreambuf::_M_alloc(unsigned int)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dda40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dda40  _ZNSt12strstreambuf8_M_allocEj
#           std::strstreambuf::_M_alloc(unsigned int)
# range [0x086dda40, 0x086dda6f]
086dda40 +0x00:  push   %ebp
086dda41 +0x01:  mov    %esp,%ebp
086dda43 +0x03:  sub    $0x8,%esp
086dda46 +0x06:  mov    0x8(%ebp),%eax
086dda49 +0x09:  mov    0xc(%ebp),%edx
086dda4c +0x0c:  mov    0x20(%eax),%eax
086dda4f +0x0f:  test   %eax,%eax
086dda51 +0x11:  je     086dda60 <+0x20>
086dda53 +0x13:  mov    %edx,0x8(%ebp)
086dda56 +0x16:  leave
086dda57 +0x17:  jmp    *%eax
086dda59 +0x19:  lea    0x0(%esi,%eiz,1),%esi
086dda60 +0x20:  mov    %edx,0x8(%ebp)
086dda63 +0x23:  leave
086dda64 +0x24:  jmp    08722dc0 <_Znaj>  ; operator new[](unsigned int)
086dda69 +0x29:  nop
086dda6a +0x2a:  nop
086dda6b +0x2b:  nop
086dda6c +0x2c:  nop
086dda6d +0x2d:  nop
086dda6e +0x2e:  nop
086dda6f +0x2f:  nop
```

## 反编译 C

```c
// std::strstreambuf::_M_alloc @ 0x86dda40

/* std::strstreambuf::_M_alloc(unsigned int) */

void __thiscall std::strstreambuf::_M_alloc(strstreambuf *this,uint param_1)

{
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x086dda57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x20))();
    return;
  }
  operator_new__(param_1);
  return;
}
```
