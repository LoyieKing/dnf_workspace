# getSectionData

`_ZN20PcBangItemRentarData14getSectionDataEi`

`PcBangItemRentarData::getSectionData(int)`

| 类 | 地址 |
|---|---|
| `PcBangItemRentarData` | `0x08915518` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08915518  _ZN20PcBangItemRentarData14getSectionDataEi
#           PcBangItemRentarData::getSectionData(int)
# range [0x08915518, 0x0891559b]
08915518 +0x00:  push   %ebp
08915519 +0x01:  mov    %esp,%ebp
0891551b +0x03:  sub    $0x28,%esp
0891551e +0x06:  mov    0x8(%ebp),%edx
08915521 +0x09:  lea    -0x10(%ebp),%eax
08915524 +0x0c:  mov    %edx,0x4(%esp)
08915528 +0x10:  mov    %eax,(%esp)
0891552b +0x13:  call   08921a38 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x8717>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x8717
08915530 +0x18:  sub    $0x4,%esp
08915533 +0x1b:  jmp    08915569 <+0x51>
08915535 +0x1d:  lea    -0x10(%ebp),%eax
08915538 +0x20:  mov    %eax,(%esp)
0891553b +0x23:  call   08921af4 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87d3>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87d3
08915540 +0x28:  movzbl 0x1(%eax),%eax
08915544 +0x2c:  movzbl %al,%eax
08915547 +0x2f:  cmp    0xc(%ebp),%eax
0891554a +0x32:  setle  %al
0891554d +0x35:  test   %al,%al
0891554f +0x37:  je     0891555e <+0x46>
08915551 +0x39:  lea    -0x10(%ebp),%eax
08915554 +0x3c:  mov    %eax,(%esp)
08915557 +0x3f:  call   08921b08 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87e7>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87e7
0891555c +0x44:  jmp    08915599 <+0x81>
0891555e +0x46:  lea    -0x10(%ebp),%eax
08915561 +0x49:  mov    %eax,(%esp)
08915564 +0x4c:  call   08921ade <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87bd>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87bd
08915569 +0x51:  mov    0x8(%ebp),%edx
0891556c +0x54:  lea    -0xc(%ebp),%eax
0891556f +0x57:  mov    %edx,0x4(%esp)
08915573 +0x5b:  mov    %eax,(%esp)
08915576 +0x5e:  call   08921a80 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x875f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x875f
0891557b +0x63:  sub    $0x4,%esp
0891557e +0x66:  lea    -0xc(%ebp),%eax
08915581 +0x69:  mov    %eax,0x4(%esp)
08915585 +0x6d:  lea    -0x10(%ebp),%eax
08915588 +0x70:  mov    %eax,(%esp)
0891558b +0x73:  call   08921ac1 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x87a0>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x87a0
08915590 +0x78:  test   %al,%al
08915592 +0x7a:  jne    08915535 <+0x1d>
08915594 +0x7c:  mov    $0x0,%eax
08915599 +0x81:  leave
0891559a +0x82:  ret
0891559b +0x83:  nop
```

## 反编译 C

```c
// PcBangItemRentarData::getSectionData @ 0x8915518

/* PcBangItemRentarData::getSectionData(int) */

undefined4 __thiscall PcBangItemRentarData::getSectionData(PcBangItemRentarData *this,int param_1)

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
