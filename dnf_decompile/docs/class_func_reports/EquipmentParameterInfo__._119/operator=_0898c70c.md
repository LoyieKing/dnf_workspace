# operator=

`_ZN22EquipmentParameterInfo5._119aSERKS0_`

`EquipmentParameterInfo::._119::operator=(EquipmentParameterInfo::._119 const&)`

| 类 | 地址 |
|---|---|
| `EquipmentParameterInfo::._119` | `0x0898c70c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898c70c  _ZN22EquipmentParameterInfo5._119aSERKS0_
#           EquipmentParameterInfo::._119::operator=(EquipmentParameterInfo::._119 const&)
# range [0x0898c70c, 0x0898c75a]
0898c70c +0x00:  push   %ebp
0898c70d +0x01:  mov    %esp,%ebp
0898c70f +0x03:  sub    $0x18,%esp
0898c712 +0x06:  mov    0xc(%ebp),%edx
0898c715 +0x09:  mov    0x8(%ebp),%eax
0898c718 +0x0c:  mov    %edx,0x4(%esp)
0898c71c +0x10:  mov    %eax,(%esp)
0898c71f +0x13:  call   08380830 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x102d0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x102d0
0898c724 +0x18:  mov    0xc(%ebp),%eax
0898c727 +0x1b:  movzbl 0xc(%eax),%edx
0898c72b +0x1f:  mov    0x8(%ebp),%eax
0898c72e +0x22:  mov    %dl,0xc(%eax)
0898c731 +0x25:  mov    0xc(%ebp),%eax
0898c734 +0x28:  movzbl 0xd(%eax),%edx
0898c738 +0x2c:  mov    0x8(%ebp),%eax
0898c73b +0x2f:  mov    %dl,0xd(%eax)
0898c73e +0x32:  mov    0xc(%ebp),%eax
0898c741 +0x35:  lea    0x10(%eax),%edx
0898c744 +0x38:  mov    0x8(%ebp),%eax
0898c747 +0x3b:  add    $0x10,%eax
0898c74a +0x3e:  mov    %edx,0x4(%esp)
0898c74e +0x42:  mov    %eax,(%esp)
0898c751 +0x45:  call   0838034c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xfdec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xfdec
0898c756 +0x4a:  mov    0x8(%ebp),%eax
0898c759 +0x4d:  leave
0898c75a +0x4e:  ret
```

## 反编译 C

```c
// EquipmentParameterInfo::._119::operator= @ 0x898c70c

vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>> *
_ZN22EquipmentParameterInfo5__119aSERKS0_
          (vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
           *param_1,vector *param_2)

{
  std::
  vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>::
  operator=(param_1,param_2);
  param_1[0xc] = *(vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
                   *)(param_2 + 0xc);
  param_1[0xd] = *(vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
                   *)(param_2 + 0xd);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(param_1 + 0x10),param_2 + 0x10);
  return param_1;
}
```
