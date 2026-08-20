# get_dimension_member_count

`_ZNK8CDungeon26get_dimension_member_countER19DimensionPartyCount`

`CDungeon::get_dimension_member_count(DimensionPartyCount&) const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834d220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d220  _ZNK8CDungeon26get_dimension_member_countER19DimensionPartyCount
#           CDungeon::get_dimension_member_count(DimensionPartyCount&) const
# range [0x0834d220, 0x0834d2d3]
0834d220 +0x00:  push   %ebp
0834d221 +0x01:  mov    %esp,%ebp
0834d223 +0x03:  sub    $0x28,%esp
0834d226 +0x06:  mov    0x8(%ebp),%eax
0834d229 +0x09:  lea    0x6bc(%eax),%edx
0834d22f +0x0f:  lea    -0x14(%ebp),%eax
0834d232 +0x12:  mov    %edx,0x4(%esp)
0834d236 +0x16:  mov    %eax,(%esp)
0834d239 +0x19:  call   0838a5ba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a05a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a05a
0834d23e +0x1e:  sub    $0x4,%esp
0834d241 +0x21:  mov    0x8(%ebp),%eax
0834d244 +0x24:  lea    0x6bc(%eax),%edx
0834d24a +0x2a:  lea    -0x10(%ebp),%eax
0834d24d +0x2d:  mov    %edx,0x4(%esp)
0834d251 +0x31:  mov    %eax,(%esp)
0834d254 +0x34:  call   0838a58e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a02e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a02e
0834d259 +0x39:  sub    $0x4,%esp
0834d25c +0x3c:  lea    -0x18(%ebp),%eax
0834d25f +0x3f:  mov    0xc(%ebp),%edx
0834d262 +0x42:  mov    %edx,0xc(%esp)
0834d266 +0x46:  mov    -0x14(%ebp),%edx
0834d269 +0x49:  mov    %edx,0x8(%esp)
0834d26d +0x4d:  mov    -0x10(%ebp),%edx
0834d270 +0x50:  mov    %edx,0x4(%esp)
0834d274 +0x54:  mov    %eax,(%esp)
0834d277 +0x57:  call   0838a5e6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a086>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a086
0834d27c +0x5c:  sub    $0x4,%esp
0834d27f +0x5f:  mov    0x8(%ebp),%eax
0834d282 +0x62:  lea    0x6bc(%eax),%edx
0834d288 +0x68:  lea    -0xc(%ebp),%eax
0834d28b +0x6b:  mov    %edx,0x4(%esp)
0834d28f +0x6f:  mov    %eax,(%esp)
0834d292 +0x72:  call   0838a5ba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a05a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a05a
0834d297 +0x77:  sub    $0x4,%esp
0834d29a +0x7a:  lea    -0xc(%ebp),%eax
0834d29d +0x7d:  mov    %eax,0x4(%esp)
0834d2a1 +0x81:  lea    -0x18(%ebp),%eax
0834d2a4 +0x84:  mov    %eax,(%esp)
0834d2a7 +0x87:  call   0838a63a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a0da>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a0da
0834d2ac +0x8c:  test   %al,%al
0834d2ae +0x8e:  je     0834d2cc <+0xac>
0834d2b0 +0x90:  lea    -0x18(%ebp),%eax
0834d2b3 +0x93:  mov    %eax,(%esp)
0834d2b6 +0x96:  call   0838a666 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x1a106>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x1a106
0834d2bb +0x9b:  movzbl 0x2(%eax),%edx
0834d2bf +0x9f:  mov    0xc(%ebp),%eax
0834d2c2 +0xa2:  mov    %dl,0x2(%eax)
0834d2c5 +0xa5:  mov    $0x1,%eax
0834d2ca +0xaa:  jmp    0834d2d1 <+0xb1>
0834d2cc +0xac:  mov    $0x0,%eax
0834d2d1 +0xb1:  leave
0834d2d2 +0xb2:  ret
0834d2d3 +0xb3:  nop
```

## 反编译 C

```c
// CDungeon::get_dimension_member_count @ 0x834d220

/* CDungeon::get_dimension_member_count(DimensionPartyCount&) const */

bool __thiscall CDungeon::get_dimension_member_count(CDungeon *this,DimensionPartyCount *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<DimensionPartyCount_const*,std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::end();
  std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::begin();
  std::
  find<__gnu_cxx::__normal_iterator<DimensionPartyCount_const*,std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>>,DimensionPartyCount>
            (local_1c,local_14,local_18,param_1);
  std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>::end();
  bVar1 = __gnu_cxx::operator!=(local_1c,local_10);
  if (bVar1) {
    iVar2 = __gnu_cxx::
            __normal_iterator<DimensionPartyCount_const*,std::vector<DimensionPartyCount,std::allocator<DimensionPartyCount>>>
            ::operator->(local_1c);
    param_1[2] = *(DimensionPartyCount *)(iVar2 + 2);
  }
  return bVar1;
}
```
