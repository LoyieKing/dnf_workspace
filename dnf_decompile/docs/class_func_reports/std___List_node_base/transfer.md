# transfer

`_ZNSt15_List_node_base8transferEPS_S0_`

`std::_List_node_base::transfer(std::_List_node_base*, std::_List_node_base*)`

| 类 | 地址 |
|---|---|
| `std::_List_node_base` | `0x086dacb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086dacb0  _ZNSt15_List_node_base8transferEPS_S0_
#           std::_List_node_base::transfer(std::_List_node_base*, std::_List_node_base*)
# range [0x086dacb0, 0x086dacef]
086dacb0 +0x00:  push   %ebp
086dacb1 +0x01:  mov    %esp,%ebp
086dacb3 +0x03:  sub    $0x8,%esp
086dacb6 +0x06:  mov    0x8(%ebp),%edx
086dacb9 +0x09:  mov    0x10(%ebp),%eax
086dacbc +0x0c:  mov    %ebx,(%esp)
086dacbf +0x0f:  mov    0xc(%ebp),%ecx
086dacc2 +0x12:  mov    %esi,0x4(%esp)
086dacc6 +0x16:  cmp    %eax,%edx
086dacc8 +0x18:  je     086dace5 <+0x35>
086dacca +0x1a:  mov    0x4(%ecx),%ebx
086daccd +0x1d:  mov    0x4(%eax),%esi
086dacd0 +0x20:  mov    %edx,(%esi)
086dacd2 +0x22:  mov    %eax,(%ebx)
086dacd4 +0x24:  mov    0x4(%edx),%ebx
086dacd7 +0x27:  mov    %esi,0x4(%edx)
086dacda +0x2a:  mov    0x4(%ecx),%edx
086dacdd +0x2d:  mov    %ecx,(%ebx)
086dacdf +0x2f:  mov    %edx,0x4(%eax)
086dace2 +0x32:  mov    %ebx,0x4(%ecx)
086dace5 +0x35:  mov    (%esp),%ebx
086dace8 +0x38:  mov    0x4(%esp),%esi
086dacec +0x3c:  mov    %ebp,%esp
086dacee +0x3e:  pop    %ebp
086dacef +0x3f:  ret
```

## 反编译 C

```c
// std::_List_node_base::transfer @ 0x86dacb0

/* std::_List_node_base::transfer(std::_List_node_base*, std::_List_node_base*) */

void __thiscall
std::_List_node_base::transfer
          (_List_node_base *this,_List_node_base *param_1,_List_node_base *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (this != param_2) {
    puVar1 = *(undefined4 **)(param_1 + 4);
    puVar2 = *(undefined4 **)(param_2 + 4);
    *puVar2 = this;
    *puVar1 = param_2;
    puVar1 = *(undefined4 **)(this + 4);
    *(undefined4 **)(this + 4) = puVar2;
    uVar3 = *(undefined4 *)(param_1 + 4);
    *puVar1 = param_1;
    *(undefined4 *)(param_2 + 4) = uVar3;
    *(undefined4 **)(param_1 + 4) = puVar1;
  }
  return;
}
```
