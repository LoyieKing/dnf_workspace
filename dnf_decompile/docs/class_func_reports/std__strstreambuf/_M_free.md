# _M_free

`_ZNSt12strstreambuf7_M_freeEPc`

`std::strstreambuf::_M_free(char*)`

| 类 | 地址 |
|---|---|
| `std::strstreambuf` | `0x086dda00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dda00  _ZNSt12strstreambuf7_M_freeEPc
#           std::strstreambuf::_M_free(char*)
# range [0x086dda00, 0x086dda3f]
086dda00 +0x00:  push   %ebp
086dda01 +0x01:  mov    %esp,%ebp
086dda03 +0x03:  sub    $0x8,%esp
086dda06 +0x06:  mov    0xc(%ebp),%eax
086dda09 +0x09:  mov    0x8(%ebp),%edx
086dda0c +0x0c:  test   %eax,%eax
086dda0e +0x0e:  je     086dda30 <+0x30>
086dda10 +0x10:  mov    0x24(%edx),%edx
086dda13 +0x13:  test   %edx,%edx
086dda15 +0x15:  je     086dda20 <+0x20>
086dda17 +0x17:  mov    %eax,0x8(%ebp)
086dda1a +0x1a:  leave
086dda1b +0x1b:  jmp    *%edx
086dda1d +0x1d:  lea    0x0(%esi),%esi
086dda20 +0x20:  mov    %eax,0x8(%ebp)
086dda23 +0x23:  leave
086dda24 +0x24:  jmp    08724bb0 <_ZdaPv>  ; operator delete[](void*)
086dda29 +0x29:  lea    0x0(%esi,%eiz,1),%esi
086dda30 +0x30:  leave
086dda31 +0x31:  ret
086dda32 +0x32:  nop
086dda33 +0x33:  nop
086dda34 +0x34:  nop
086dda35 +0x35:  nop
086dda36 +0x36:  nop
086dda37 +0x37:  nop
086dda38 +0x38:  nop
086dda39 +0x39:  nop
086dda3a +0x3a:  nop
086dda3b +0x3b:  nop
086dda3c +0x3c:  nop
086dda3d +0x3d:  nop
086dda3e +0x3e:  nop
086dda3f +0x3f:  nop
```

## 反编译 C

```c
// std::strstreambuf::_M_free @ 0x86dda00

/* std::strstreambuf::_M_free(char*) */

void __thiscall std::strstreambuf::_M_free(strstreambuf *this,char *param_1)

{
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*(code **)(this + 0x24) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x086dda1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this + 0x24))();
    return;
  }
  operator_delete__(param_1);
  return;
}
```
