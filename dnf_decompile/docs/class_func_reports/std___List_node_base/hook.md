# hook

`_ZNSt15_List_node_base4hookEPS_`

`std::_List_node_base::hook(std::_List_node_base*)`

| 类 | 地址 |
|---|---|
| `std::_List_node_base` | `0x086dad20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dad20  _ZNSt15_List_node_base4hookEPS_
#           std::_List_node_base::hook(std::_List_node_base*)
# range [0x086dad20, 0x086dad3f]
086dad20 +0x00:  push   %ebp
086dad21 +0x01:  mov    %esp,%ebp
086dad23 +0x03:  mov    0xc(%ebp),%eax
086dad26 +0x06:  mov    0x8(%ebp),%edx
086dad29 +0x09:  mov    0x4(%eax),%ecx
086dad2c +0x0c:  mov    %eax,(%edx)
086dad2e +0x0e:  mov    %ecx,0x4(%edx)
086dad31 +0x11:  mov    0x4(%eax),%ecx
086dad34 +0x14:  mov    %edx,0x4(%eax)
086dad37 +0x17:  mov    %edx,(%ecx)
086dad39 +0x19:  pop    %ebp
086dad3a +0x1a:  ret
086dad3b +0x1b:  nop
086dad3c +0x1c:  nop
086dad3d +0x1d:  nop
086dad3e +0x1e:  nop
086dad3f +0x1f:  nop
```

## 反编译 C

```c
// std::_List_node_base::hook @ 0x86dad20

/* std::_List_node_base::hook(std::_List_node_base*) */

void __thiscall std::_List_node_base::hook(_List_node_base *this,_List_node_base *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(_List_node_base **)this = param_1;
  *(undefined4 *)(this + 4) = uVar1;
  puVar2 = *(undefined4 **)(param_1 + 4);
  *(_List_node_base **)(param_1 + 4) = this;
  *puVar2 = this;
  return;
}
```
