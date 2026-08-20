# ResultToStr

`_ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc`

`game_master::CIndependentDrop::ResultToStr(std::vector<stMonsterIndependentDrop_t, std::allocator<stMonsterIndependentDrop_t> > const&, char*)`

| 类 | 地址 |
|---|---|
| `game_master::CIndependentDrop` | `0x084b165c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b165c  _ZN11game_master16CIndependentDrop11ResultToStrERKSt6vectorI26stMonsterIndependentDrop_tSaIS2_EEPc
#           game_master::CIndependentDrop::ResultToStr(std::vector<stMonsterIndependentDrop_t, std::allocator<stMonsterIndependentDrop_t> > const&, char*)
# range [0x084b165c, 0x084b1755]
084b165c +0x00:  push   %ebp
084b165d +0x01:  mov    %esp,%ebp
084b165f +0x03:  push   %esi
084b1660 +0x04:  push   %ebx
084b1661 +0x05:  sub    $0x60,%esp
084b1664 +0x08:  lea    -0xc(%ebp),%eax
084b1667 +0x0b:  mov    0xc(%ebp),%edx
084b166a +0x0e:  mov    %edx,0x4(%esp)
084b166e +0x12:  mov    %eax,(%esp)
084b1671 +0x15:  call   0838834e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17dee>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17dee
084b1676 +0x1a:  sub    $0x4,%esp
084b1679 +0x1d:  lea    -0x10(%ebp),%eax
084b167c +0x20:  mov    0xc(%ebp),%edx
084b167f +0x23:  mov    %edx,0x4(%esp)
084b1683 +0x27:  mov    %eax,(%esp)
084b1686 +0x2a:  call   0838837a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17e1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17e1a
084b168b +0x2f:  sub    $0x4,%esp
084b168e +0x32:  jmp    084b1732 <+0xd6>
084b1693 +0x37:  lea    -0xc(%ebp),%eax
084b1696 +0x3a:  mov    %eax,(%esp)
084b1699 +0x3d:  call   083883e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17e88>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17e88
084b169e +0x42:  mov    %eax,0x4(%esp)
084b16a2 +0x46:  lea    -0x58(%ebp),%eax
084b16a5 +0x49:  mov    %eax,(%esp)
084b16a8 +0x4c:  call   08376bb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x6652>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x6652
084b16ad +0x51:  mov    -0x2c(%ebp),%eax
084b16b0 +0x54:  test   %eax,%eax
084b16b2 +0x56:  jne    084b16d7 <+0x7b>
084b16b4 +0x58:  movl   $0x0,0xc(%esp)
084b16bc +0x60:  mov    0x10(%ebp),%eax
084b16bf +0x63:  mov    %eax,0x8(%esp)
084b16c3 +0x67:  lea    -0x58(%ebp),%eax
084b16c6 +0x6a:  mov    %eax,0x4(%esp)
084b16ca +0x6e:  mov    0x8(%ebp),%eax
084b16cd +0x71:  mov    %eax,(%esp)
084b16d0 +0x74:  call   084b1756 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb>  ; game_master::CIndependentDrop::PrintItemDropList(stMonsterIndependentDrop_t const&, char*, bool)
084b16d5 +0x79:  jmp    084b171c <+0xc0>
084b16d7 +0x7b:  mov    -0x2c(%ebp),%eax
084b16da +0x7e:  test   %eax,%eax
084b16dc +0x80:  je     084b171c <+0xc0>
084b16de +0x82:  movl   $0x1,0xc(%esp)
084b16e6 +0x8a:  mov    0x10(%ebp),%eax
084b16e9 +0x8d:  mov    %eax,0x8(%esp)
084b16ed +0x91:  lea    -0x58(%ebp),%eax
084b16f0 +0x94:  mov    %eax,0x4(%esp)
084b16f4 +0x98:  mov    0x8(%ebp),%eax
084b16f7 +0x9b:  mov    %eax,(%esp)
084b16fa +0x9e:  call   084b1756 <_ZN11game_master16CIndependentDrop17PrintItemDropListERK26stMonsterIndependentDrop_tPcb>  ; game_master::CIndependentDrop::PrintItemDropList(stMonsterIndependentDrop_t const&, char*, bool)
084b16ff +0xa3:  jmp    084b171c <+0xc0>
084b1701 +0xa5:  mov    %edx,%ebx
084b1703 +0xa7:  mov    %eax,%esi
084b1705 +0xa9:  lea    -0x58(%ebp),%eax
084b1708 +0xac:  mov    %eax,(%esp)
084b170b +0xaf:  call   08376c5a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x66fa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x66fa
084b1710 +0xb4:  mov    %esi,%eax
084b1712 +0xb6:  mov    %ebx,%edx
084b1714 +0xb8:  mov    %eax,(%esp)
084b1717 +0xbb:  call   08ae3750 <_Unwind_Resume>
084b171c +0xc0:  lea    -0x58(%ebp),%eax
084b171f +0xc3:  mov    %eax,(%esp)
084b1722 +0xc6:  call   08376c5a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x66fa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x66fa
084b1727 +0xcb:  lea    -0xc(%ebp),%eax
084b172a +0xce:  mov    %eax,(%esp)
084b172d +0xd1:  call   083883d2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17e72>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17e72
084b1732 +0xd6:  lea    -0x10(%ebp),%eax
084b1735 +0xd9:  mov    %eax,0x4(%esp)
084b1739 +0xdd:  lea    -0xc(%ebp),%eax
084b173c +0xe0:  mov    %eax,(%esp)
084b173f +0xe3:  call   083883a6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x17e46>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x17e46
084b1744 +0xe8:  test   %al,%al
084b1746 +0xea:  jne    084b1693 <+0x37>
084b174c +0xf0:  lea    -0x8(%ebp),%esp
084b174f +0xf3:  add    $0x0,%esp
084b1752 +0xf6:  pop    %ebx
084b1753 +0xf7:  pop    %esi
084b1754 +0xf8:  pop    %ebp
084b1755 +0xf9:  ret
```

## 反编译 C

```c
// game_master::CIndependentDrop::ResultToStr @ 0x84b165c

/* game_master::CIndependentDrop::ResultToStr(std::vector<stMonsterIndependentDrop_t,
   std::allocator<stMonsterIndependentDrop_t> > const&, char*) */

void __thiscall
game_master::CIndependentDrop::ResultToStr(CIndependentDrop *this,vector *param_1,char *param_2)

{
  bool bVar1;
  stMonsterIndependentDrop_t *psVar2;
  stMonsterIndependentDrop_t local_5c [44];
  int local_30;
  __normal_iterator local_14 [4];
  __normal_iterator<stMonsterIndependentDrop_t_const*,std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>>
  local_10 [4];
  
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::begin();
  std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) break;
    psVar2 = (stMonsterIndependentDrop_t *)
             __gnu_cxx::
             __normal_iterator<stMonsterIndependentDrop_t_const*,std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>>
             ::operator*(local_10);
    stMonsterIndependentDrop_t::stMonsterIndependentDrop_t(local_5c,psVar2);
    if (local_30 == 0) {
                    /* try { // try from 084b16d0 to 084b16fe has its CatchHandler @ 084b1701 */
      PrintItemDropList(this,local_5c,param_2,false);
    }
    else if (local_30 != 0) {
      PrintItemDropList(this,local_5c,param_2,true);
    }
    stMonsterIndependentDrop_t::~stMonsterIndependentDrop_t(local_5c);
    __gnu_cxx::
    __normal_iterator<stMonsterIndependentDrop_t_const*,std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>>
    ::operator++(local_10);
  }
  return;
}
```
