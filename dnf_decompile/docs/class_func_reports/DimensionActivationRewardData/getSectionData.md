# getSectionData

`_ZN29DimensionActivationRewardData14getSectionDataEi`

`DimensionActivationRewardData::getSectionData(int)`

| 类 | 地址 |
|---|---|
| `DimensionActivationRewardData` | `0x08915f16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08915f16  _ZN29DimensionActivationRewardData14getSectionDataEi
#           DimensionActivationRewardData::getSectionData(int)
# range [0x08915f16, 0x08915f99]
08915f16 +0x00:  push   %ebp
08915f17 +0x01:  mov    %esp,%ebp
08915f19 +0x03:  sub    $0x28,%esp
08915f1c +0x06:  mov    0x8(%ebp),%edx
08915f1f +0x09:  lea    -0x10(%ebp),%eax
08915f22 +0x0c:  mov    %edx,0x4(%esp)
08915f26 +0x10:  mov    %eax,(%esp)
08915f29 +0x13:  call   08921a38 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8717>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8717
08915f2e +0x18:  sub    $0x4,%esp
08915f31 +0x1b:  jmp    08915f67 <+0x51>
08915f33 +0x1d:  lea    -0x10(%ebp),%eax
08915f36 +0x20:  mov    %eax,(%esp)
08915f39 +0x23:  call   08921af4 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87d3>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87d3
08915f3e +0x28:  movzbl 0x1(%eax),%eax
08915f42 +0x2c:  movzbl %al,%eax
08915f45 +0x2f:  cmp    0xc(%ebp),%eax
08915f48 +0x32:  setle  %al
08915f4b +0x35:  test   %al,%al
08915f4d +0x37:  je     08915f5c <+0x46>
08915f4f +0x39:  lea    -0x10(%ebp),%eax
08915f52 +0x3c:  mov    %eax,(%esp)
08915f55 +0x3f:  call   08921b08 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87e7>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87e7
08915f5a +0x44:  jmp    08915f97 <+0x81>
08915f5c +0x46:  lea    -0x10(%ebp),%eax
08915f5f +0x49:  mov    %eax,(%esp)
08915f62 +0x4c:  call   08921ade <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87bd>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87bd
08915f67 +0x51:  mov    0x8(%ebp),%edx
08915f6a +0x54:  lea    -0xc(%ebp),%eax
08915f6d +0x57:  mov    %edx,0x4(%esp)
08915f71 +0x5b:  mov    %eax,(%esp)
08915f74 +0x5e:  call   08921a80 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x875f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x875f
08915f79 +0x63:  sub    $0x4,%esp
08915f7c +0x66:  lea    -0xc(%ebp),%eax
08915f7f +0x69:  mov    %eax,0x4(%esp)
08915f83 +0x6d:  lea    -0x10(%ebp),%eax
08915f86 +0x70:  mov    %eax,(%esp)
08915f89 +0x73:  call   08921ac1 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87a0>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87a0
08915f8e +0x78:  test   %al,%al
08915f90 +0x7a:  jne    08915f33 <+0x1d>
08915f92 +0x7c:  mov    $0x0,%eax
08915f97 +0x81:  leave
08915f98 +0x82:  ret
08915f99 +0x83:  nop
```

## 反编译 C

```c
// DimensionActivationRewardData::getSectionData @ 0x8915f16

/* DimensionActivationRewardData::getSectionData(int) */

undefined4 __thiscall
DimensionActivationRewardData::getSectionData(DimensionActivationRewardData *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  vector<EventRewardSection,std::allocator<EventRewardSection>> local_14 [4];
  vector<EventRewardSection,std::allocator<EventRewardSection>> local_10 [12];
  
  std::vector<EventRewardSection,std::allocator<EventRewardSection>>::rbegin(local_14);
  while( true ) {
    std::vector<EventRewardSection,std::allocator<EventRewardSection>>::rend(local_10);
    bVar1 = std::operator!=((reverse_iterator *)local_14,(reverse_iterator *)local_10);
    if (!bVar1) {
      return 0;
    }
    iVar2 = std::
            reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
            ::operator->((reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
                          *)local_14);
    if ((int)(uint)*(byte *)(iVar2 + 1) <= param_1) break;
    std::
    reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
    ::operator++((reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
                  *)local_14);
  }
  uVar3 = std::
          reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
          ::operator*((reverse_iterator<__gnu_cxx::__normal_iterator<EventRewardSection*,std::vector<EventRewardSection,std::allocator<EventRewardSection>>>>
                       *)local_14);
  return uVar3;
}
```
