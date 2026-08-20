# operator=

`_ZN22EquipmentParameterInfo5._119aSERKS0_`

`EquipmentParameterInfo::._119::operator=(EquipmentParameterInfo::._119 const&)`

| 类 | 地址 |
|---|---|
| `EquipmentParameterInfo::._119` | `0x088fd910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088fd910  _ZN22EquipmentParameterInfo5._119aSERKS0_
#           EquipmentParameterInfo::._119::operator=(EquipmentParameterInfo::._119 const&)
# range [0x088fd910, 0x088fd95e]
088fd910 +0x00:  push   %ebp
088fd911 +0x01:  mov    %esp,%ebp
088fd913 +0x03:  sub    $0x18,%esp
088fd916 +0x06:  mov    0xc(%ebp),%edx
088fd919 +0x09:  mov    0x8(%ebp),%eax
088fd91c +0x0c:  mov    %edx,0x4(%esp)
088fd920 +0x10:  mov    %eax,(%esp)
088fd923 +0x13:  call   08380830 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x102d0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x102d0
088fd928 +0x18:  mov    0xc(%ebp),%eax
088fd92b +0x1b:  movzbl 0xc(%eax),%edx
088fd92f +0x1f:  mov    0x8(%ebp),%eax
088fd932 +0x22:  mov    %dl,0xc(%eax)
088fd935 +0x25:  mov    0xc(%ebp),%eax
088fd938 +0x28:  movzbl 0xd(%eax),%edx
088fd93c +0x2c:  mov    0x8(%ebp),%eax
088fd93f +0x2f:  mov    %dl,0xd(%eax)
088fd942 +0x32:  mov    0xc(%ebp),%eax
088fd945 +0x35:  lea    0x10(%eax),%edx
088fd948 +0x38:  mov    0x8(%ebp),%eax
088fd94b +0x3b:  add    $0x10,%eax
088fd94e +0x3e:  mov    %edx,0x4(%esp)
088fd952 +0x42:  mov    %eax,(%esp)
088fd955 +0x45:  call   0838034c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xfdec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xfdec
088fd95a +0x4a:  mov    0x8(%ebp),%eax
088fd95d +0x4d:  leave
088fd95e +0x4e:  ret
```

## 反编译 C

```c
// EquipmentParameterInfo::._119::operator= @ 0x88fd910

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
