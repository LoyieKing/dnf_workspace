# operator=

`_ZN22EquipmentParameterInfo5._159aSERKS0_`

`EquipmentParameterInfo::._159::operator=(EquipmentParameterInfo::._159 const&)`

| 类 | 地址 |
|---|---|
| `EquipmentParameterInfo::._159` | `0x0861c9b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861c9b8  _ZN22EquipmentParameterInfo5._159aSERKS0_
#           EquipmentParameterInfo::._159::operator=(EquipmentParameterInfo::._159 const&)
# range [0x0861c9b8, 0x0861ca06]
0861c9b8 +0x00:  push   %ebp
0861c9b9 +0x01:  mov    %esp,%ebp
0861c9bb +0x03:  sub    $0x18,%esp
0861c9be +0x06:  mov    0xc(%ebp),%edx
0861c9c1 +0x09:  mov    0x8(%ebp),%eax
0861c9c4 +0x0c:  mov    %edx,0x4(%esp)
0861c9c8 +0x10:  mov    %eax,(%esp)
0861c9cb +0x13:  call   08380830 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x102d0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x102d0
0861c9d0 +0x18:  mov    0xc(%ebp),%eax
0861c9d3 +0x1b:  movzbl 0xc(%eax),%edx
0861c9d7 +0x1f:  mov    0x8(%ebp),%eax
0861c9da +0x22:  mov    %dl,0xc(%eax)
0861c9dd +0x25:  mov    0xc(%ebp),%eax
0861c9e0 +0x28:  movzbl 0xd(%eax),%edx
0861c9e4 +0x2c:  mov    0x8(%ebp),%eax
0861c9e7 +0x2f:  mov    %dl,0xd(%eax)
0861c9ea +0x32:  mov    0xc(%ebp),%eax
0861c9ed +0x35:  lea    0x10(%eax),%edx
0861c9f0 +0x38:  mov    0x8(%ebp),%eax
0861c9f3 +0x3b:  add    $0x10,%eax
0861c9f6 +0x3e:  mov    %edx,0x4(%esp)
0861c9fa +0x42:  mov    %eax,(%esp)
0861c9fd +0x45:  call   0838034c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xfdec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xfdec
0861ca02 +0x4a:  mov    0x8(%ebp),%eax
0861ca05 +0x4d:  leave
0861ca06 +0x4e:  ret
```

## 反编译 C

```c
// EquipmentParameterInfo::._159::operator= @ 0x861c9b8

vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>> *
_ZN22EquipmentParameterInfo5__159aSERKS0_
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
