# send

`_ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase`

`Dispatcher_ObjectBringUp::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ObjectBringUp` | `0x081e1704` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e1704  _ZN24Dispatcher_ObjectBringUp4sendEP5CUserR9ParamBase
#           Dispatcher_ObjectBringUp::send(CUser*, ParamBase&)
# range [0x081e1704, 0x081e191f]
081e1704 +0x000:  push   %ebp
081e1705 +0x001:  mov    %esp,%ebp
081e1707 +0x003:  push   %esi
081e1708 +0x004:  push   %ebx
081e1709 +0x005:  sub    $0x30,%esp
081e170c +0x008:  mov    0x10(%ebp),%eax
081e170f +0x00b:  mov    %eax,-0xc(%ebp)
081e1712 +0x00e:  lea    -0x1c(%ebp),%eax
081e1715 +0x011:  mov    %eax,(%esp)
081e1718 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e171d +0x019:  movl   $0x1d5,0x8(%esp)
081e1725 +0x021:  movl   $0x1,0x4(%esp)
081e172d +0x029:  lea    -0x1c(%ebp),%eax
081e1730 +0x02c:  mov    %eax,(%esp)
081e1733 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e1738 +0x034:  mov    -0xc(%ebp),%eax
081e173b +0x037:  mov    0x4(%eax),%eax
081e173e +0x03a:  test   %eax,%eax
081e1740 +0x03c:  jne    081e18a0 <+0x19c>
081e1746 +0x042:  movl   $0x1,0x4(%esp)
081e174e +0x04a:  lea    -0x1c(%ebp),%eax
081e1751 +0x04d:  mov    %eax,(%esp)
081e1754 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e1759 +0x055:  mov    -0xc(%ebp),%eax
081e175c +0x058:  movzwl 0x8(%eax),%eax
081e1760 +0x05c:  movzwl %ax,%eax
081e1763 +0x05f:  mov    %eax,0x4(%esp)
081e1767 +0x063:  lea    -0x1c(%ebp),%eax
081e176a +0x066:  mov    %eax,(%esp)
081e176d +0x069:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e1772 +0x06e:  mov    -0xc(%ebp),%eax
081e1775 +0x071:  movzbl 0xa(%eax),%eax
081e1779 +0x075:  movzbl %al,%eax
081e177c +0x078:  mov    %eax,0x4(%esp)
081e1780 +0x07c:  lea    -0x1c(%ebp),%eax
081e1783 +0x07f:  mov    %eax,(%esp)
081e1786 +0x082:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e178b +0x087:  mov    -0xc(%ebp),%eax
081e178e +0x08a:  movzbl 0xb(%eax),%eax
081e1792 +0x08e:  movzbl %al,%eax
081e1795 +0x091:  mov    %eax,0x4(%esp)
081e1799 +0x095:  lea    -0x1c(%ebp),%eax
081e179c +0x098:  mov    %eax,(%esp)
081e179f +0x09b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e17a4 +0x0a0:  mov    -0xc(%ebp),%eax
081e17a7 +0x0a3:  movzbl 0xb(%eax),%eax
081e17ab +0x0a7:  test   %al,%al
081e17ad +0x0a9:  je     081e18c8 <+0x1c4>
081e17b3 +0x0af:  mov    -0xc(%ebp),%eax
081e17b6 +0x0b2:  lea    0xc(%eax),%edx
081e17b9 +0x0b5:  lea    -0x20(%ebp),%eax
081e17bc +0x0b8:  mov    %edx,0x4(%esp)
081e17c0 +0x0bc:  mov    %eax,(%esp)
081e17c3 +0x0bf:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
081e17c8 +0x0c4:  sub    $0x4,%esp
081e17cb +0x0c7:  jmp    081e186c <+0x168>
081e17d0 +0x0cc:  lea    -0x20(%ebp),%eax
081e17d3 +0x0cf:  mov    %eax,(%esp)
081e17d6 +0x0d2:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081e17db +0x0d7:  mov    (%eax),%eax
081e17dd +0x0d9:  mov    %eax,0x4(%esp)
081e17e1 +0x0dd:  lea    -0x1c(%ebp),%eax
081e17e4 +0x0e0:  mov    %eax,(%esp)
081e17e7 +0x0e3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e17ec +0x0e8:  lea    -0x20(%ebp),%eax
081e17ef +0x0eb:  mov    %eax,(%esp)
081e17f2 +0x0ee:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081e17f7 +0x0f3:  lea    -0x20(%ebp),%eax
081e17fa +0x0f6:  mov    %eax,(%esp)
081e17fd +0x0f9:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081e1802 +0x0fe:  mov    (%eax),%eax
081e1804 +0x100:  mov    %eax,0x4(%esp)
081e1808 +0x104:  lea    -0x1c(%ebp),%eax
081e180b +0x107:  mov    %eax,(%esp)
081e180e +0x10a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e1813 +0x10f:  lea    -0x20(%ebp),%eax
081e1816 +0x112:  mov    %eax,(%esp)
081e1819 +0x115:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081e181e +0x11a:  lea    -0x20(%ebp),%eax
081e1821 +0x11d:  mov    %eax,(%esp)
081e1824 +0x120:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081e1829 +0x125:  mov    (%eax),%eax
081e182b +0x127:  mov    %eax,0x4(%esp)
081e182f +0x12b:  lea    -0x1c(%ebp),%eax
081e1832 +0x12e:  mov    %eax,(%esp)
081e1835 +0x131:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081e183a +0x136:  lea    -0x20(%ebp),%eax
081e183d +0x139:  mov    %eax,(%esp)
081e1840 +0x13c:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081e1845 +0x141:  lea    -0x20(%ebp),%eax
081e1848 +0x144:  mov    %eax,(%esp)
081e184b +0x147:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081e1850 +0x14c:  mov    (%eax),%eax
081e1852 +0x14e:  mov    %eax,0x4(%esp)
081e1856 +0x152:  lea    -0x1c(%ebp),%eax
081e1859 +0x155:  mov    %eax,(%esp)
081e185c +0x158:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e1861 +0x15d:  lea    -0x20(%ebp),%eax
081e1864 +0x160:  mov    %eax,(%esp)
081e1867 +0x163:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081e186c +0x168:  mov    -0xc(%ebp),%eax
081e186f +0x16b:  lea    0xc(%eax),%edx
081e1872 +0x16e:  lea    -0x10(%ebp),%eax
081e1875 +0x171:  mov    %edx,0x4(%esp)
081e1879 +0x175:  mov    %eax,(%esp)
081e187c +0x178:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081e1881 +0x17d:  sub    $0x4,%esp
081e1884 +0x180:  lea    -0x10(%ebp),%eax
081e1887 +0x183:  mov    %eax,0x4(%esp)
081e188b +0x187:  lea    -0x20(%ebp),%eax
081e188e +0x18a:  mov    %eax,(%esp)
081e1891 +0x18d:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
081e1896 +0x192:  test   %al,%al
081e1898 +0x194:  jne    081e17d0 <+0xcc>
081e189e +0x19a:  jmp    081e18c8 <+0x1c4>
081e18a0 +0x19c:  movl   $0x0,0x4(%esp)
081e18a8 +0x1a4:  lea    -0x1c(%ebp),%eax
081e18ab +0x1a7:  mov    %eax,(%esp)
081e18ae +0x1aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e18b3 +0x1af:  mov    -0xc(%ebp),%eax
081e18b6 +0x1b2:  mov    0x4(%eax),%eax
081e18b9 +0x1b5:  mov    %eax,0x4(%esp)
081e18bd +0x1b9:  lea    -0x1c(%ebp),%eax
081e18c0 +0x1bc:  mov    %eax,(%esp)
081e18c3 +0x1bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e18c8 +0x1c4:  movl   $0x1,0x4(%esp)
081e18d0 +0x1cc:  lea    -0x1c(%ebp),%eax
081e18d3 +0x1cf:  mov    %eax,(%esp)
081e18d6 +0x1d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e18db +0x1d7:  lea    -0x1c(%ebp),%eax
081e18de +0x1da:  mov    %eax,0x4(%esp)
081e18e2 +0x1de:  mov    0xc(%ebp),%eax
081e18e5 +0x1e1:  mov    %eax,(%esp)
081e18e8 +0x1e4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e18ed +0x1e9:  jmp    081e190a <+0x206>
081e18ef +0x1eb:  mov    %edx,%ebx
081e18f1 +0x1ed:  mov    %eax,%esi
081e18f3 +0x1ef:  lea    -0x1c(%ebp),%eax
081e18f6 +0x1f2:  mov    %eax,(%esp)
081e18f9 +0x1f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e18fe +0x1fa:  mov    %esi,%eax
081e1900 +0x1fc:  mov    %ebx,%edx
081e1902 +0x1fe:  mov    %eax,(%esp)
081e1905 +0x201:  call   08ae3750 <_Unwind_Resume>
081e190a +0x206:  lea    -0x1c(%ebp),%eax
081e190d +0x209:  mov    %eax,(%esp)
081e1910 +0x20c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e1915 +0x211:  lea    -0x8(%ebp),%esp
081e1918 +0x214:  add    $0x0,%esp
081e191b +0x217:  pop    %ebx
081e191c +0x218:  pop    %esi
081e191d +0x219:  pop    %ebp
081e191e +0x21a:  ret
081e191f +0x21b:  nop
```

## 反编译 C

```c
// Dispatcher_ObjectBringUp::send @ 0x81e1704

/* Dispatcher_ObjectBringUp::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_ObjectBringUp::send(Dispatcher_ObjectBringUp *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_24 [4];
  PacketGuard local_20 [12];
  __normal_iterator local_14 [4];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081e1733 to 081e18ec has its CatchHandler @ 081e18ef */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x1d5);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_10[10]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_10[0xb]);
    if (local_10[0xb] != (ParamBase)0x0) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_24,local_14);
        if (!bVar1) break;
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
        piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,*piVar2);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_24);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
