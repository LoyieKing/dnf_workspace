# unhook

`_ZNSt15_List_node_base6unhookEv`

`std::_List_node_base::unhook()`

| 类 | 地址 |
|---|---|
| `std::_List_node_base` | `0x086dad40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dad40  _ZNSt15_List_node_base6unhookEv
#           std::_List_node_base::unhook()
# range [0x086dad40, 0x086dad7f]
086dad40 +0x00:  push   %ebp
086dad41 +0x01:  mov    %esp,%ebp
086dad43 +0x03:  mov    0x8(%ebp),%edx
086dad46 +0x06:  mov    (%edx),%eax
086dad48 +0x08:  mov    0x4(%edx),%edx
086dad4b +0x0b:  mov    %eax,(%edx)
086dad4d +0x0d:  mov    %edx,0x4(%eax)
086dad50 +0x10:  pop    %ebp
086dad51 +0x11:  ret
086dad52 +0x12:  nop
086dad53 +0x13:  nop
086dad54 +0x14:  nop
086dad55 +0x15:  nop
086dad56 +0x16:  nop
086dad57 +0x17:  nop
086dad58 +0x18:  nop
086dad59 +0x19:  nop
086dad5a +0x1a:  nop
086dad5b +0x1b:  nop
086dad5c +0x1c:  nop
086dad5d +0x1d:  nop
086dad5e +0x1e:  nop
086dad5f +0x1f:  nop
086dad60 +0x20:  push   %ebp
086dad61 +0x21:  mov    $&data#48251277(.rodata),%eax
086dad66 +0x26:  mov    %esp,%ebp
086dad68 +0x28:  pop    %ebp
086dad69 +0x29:  ret
086dad6a +0x2a:  nop
086dad6b +0x2b:  nop
086dad6c +0x2c:  nop
086dad6d +0x2d:  nop
086dad6e +0x2e:  nop
086dad6f +0x2f:  nop
086dad70 +0x30:  push   %ebp
086dad71 +0x31:  mov    $"__gnu_cxx::__concurrence_unlock_error",%eax
086dad76 +0x36:  mov    %esp,%ebp
086dad78 +0x38:  pop    %ebp
086dad79 +0x39:  ret
086dad7a +0x3a:  nop
086dad7b +0x3b:  nop
086dad7c +0x3c:  nop
086dad7d +0x3d:  nop
086dad7e +0x3e:  nop
086dad7f +0x3f:  nop
```

## 反编译 C

```c
// std::_List_node_base::unhook @ 0x86dad40

/* std::_List_node_base::unhook() */

void __thiscall std::_List_node_base::unhook(_List_node_base *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)this;
  piVar2 = *(int **)(this + 4);
  *piVar2 = iVar1;
  *(int **)(iVar1 + 4) = piVar2;
  return;
}
```
