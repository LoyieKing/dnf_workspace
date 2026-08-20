# send

`_ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase`

`Dispatcher_Exchange_Random_Item_Reward::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Exchange_Random_Item_Reward` | `0x081de72c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081de72c  _ZN38Dispatcher_Exchange_Random_Item_Reward4sendEP5CUserR9ParamBase
#           Dispatcher_Exchange_Random_Item_Reward::send(CUser*, ParamBase&)
# range [0x081de72c, 0x081de9d9]
081de72c +0x000:  push   %ebp
081de72d +0x001:  mov    %esp,%ebp
081de72f +0x003:  push   %esi
081de730 +0x004:  push   %ebx
081de731 +0x005:  sub    $0x30,%esp
081de734 +0x008:  mov    0x10(%ebp),%eax
081de737 +0x00b:  mov    %eax,-0xc(%ebp)
081de73a +0x00e:  lea    -0x20(%ebp),%eax
081de73d +0x011:  mov    %eax,(%esp)
081de740 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081de745 +0x019:  movl   $0x1c1,0x8(%esp)
081de74d +0x021:  movl   $0x1,0x4(%esp)
081de755 +0x029:  lea    -0x20(%ebp),%eax
081de758 +0x02c:  mov    %eax,(%esp)
081de75b +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081de760 +0x034:  mov    -0xc(%ebp),%eax
081de763 +0x037:  mov    0x4(%eax),%eax
081de766 +0x03a:  test   %eax,%eax
081de768 +0x03c:  jne    081de95a <+0x22e>
081de76e +0x042:  movl   $0x1,0x4(%esp)
081de776 +0x04a:  lea    -0x20(%ebp),%eax
081de779 +0x04d:  mov    %eax,(%esp)
081de77c +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081de781 +0x055:  mov    -0xc(%ebp),%eax
081de784 +0x058:  add    $0xc,%eax
081de787 +0x05b:  mov    %eax,(%esp)
081de78a +0x05e:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081de78f +0x063:  mov    %eax,0x4(%esp)
081de793 +0x067:  lea    -0x20(%ebp),%eax
081de796 +0x06a:  mov    %eax,(%esp)
081de799 +0x06d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081de79e +0x072:  mov    -0xc(%ebp),%eax
081de7a1 +0x075:  add    $0xc,%eax
081de7a4 +0x078:  mov    %eax,(%esp)
081de7a7 +0x07b:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081de7ac +0x080:  test   %eax,%eax
081de7ae +0x082:  setne  %al
081de7b1 +0x085:  test   %al,%al
081de7b3 +0x087:  je     081de845 <+0x119>
081de7b9 +0x08d:  mov    -0xc(%ebp),%eax
081de7bc +0x090:  lea    0xc(%eax),%edx
081de7bf +0x093:  lea    -0x24(%ebp),%eax
081de7c2 +0x096:  mov    %edx,0x4(%esp)
081de7c6 +0x09a:  mov    %eax,(%esp)
081de7c9 +0x09d:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
081de7ce +0x0a2:  sub    $0x4,%esp
081de7d1 +0x0a5:  jmp    081de817 <+0xeb>
081de7d3 +0x0a7:  lea    -0x24(%ebp),%eax
081de7d6 +0x0aa:  mov    %eax,(%esp)
081de7d9 +0x0ad:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
081de7de +0x0b2:  mov    (%eax),%eax
081de7e0 +0x0b4:  mov    %eax,0x4(%esp)
081de7e4 +0x0b8:  lea    -0x20(%ebp),%eax
081de7e7 +0x0bb:  mov    %eax,(%esp)
081de7ea +0x0be:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081de7ef +0x0c3:  lea    -0x24(%ebp),%eax
081de7f2 +0x0c6:  mov    %eax,(%esp)
081de7f5 +0x0c9:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
081de7fa +0x0ce:  mov    0x4(%eax),%eax
081de7fd +0x0d1:  mov    %eax,0x4(%esp)
081de801 +0x0d5:  lea    -0x20(%ebp),%eax
081de804 +0x0d8:  mov    %eax,(%esp)
081de807 +0x0db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081de80c +0x0e0:  lea    -0x24(%ebp),%eax
081de80f +0x0e3:  mov    %eax,(%esp)
081de812 +0x0e6:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
081de817 +0x0eb:  mov    -0xc(%ebp),%eax
081de81a +0x0ee:  lea    0xc(%eax),%edx
081de81d +0x0f1:  lea    -0x14(%ebp),%eax
081de820 +0x0f4:  mov    %edx,0x4(%esp)
081de824 +0x0f8:  mov    %eax,(%esp)
081de827 +0x0fb:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
081de82c +0x100:  sub    $0x4,%esp
081de82f +0x103:  lea    -0x14(%ebp),%eax
081de832 +0x106:  mov    %eax,0x4(%esp)
081de836 +0x10a:  lea    -0x24(%ebp),%eax
081de839 +0x10d:  mov    %eax,(%esp)
081de83c +0x110:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
081de841 +0x115:  test   %al,%al
081de843 +0x117:  jne    081de7d3 <+0xa7>
081de845 +0x119:  mov    -0xc(%ebp),%eax
081de848 +0x11c:  movzbl 0x9(%eax),%eax
081de84c +0x120:  movzbl %al,%eax
081de84f +0x123:  mov    %eax,0x4(%esp)
081de853 +0x127:  lea    -0x20(%ebp),%eax
081de856 +0x12a:  mov    %eax,(%esp)
081de859 +0x12d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081de85e +0x132:  mov    -0xc(%ebp),%eax
081de861 +0x135:  movzbl 0x9(%eax),%eax
081de865 +0x139:  test   %al,%al
081de867 +0x13b:  je     081de982 <+0x256>
081de86d +0x141:  mov    -0xc(%ebp),%eax
081de870 +0x144:  lea    0x18(%eax),%edx
081de873 +0x147:  lea    -0x28(%ebp),%eax
081de876 +0x14a:  mov    %edx,0x4(%esp)
081de87a +0x14e:  mov    %eax,(%esp)
081de87d +0x151:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
081de882 +0x156:  sub    $0x4,%esp
081de885 +0x159:  jmp    081de926 <+0x1fa>
081de88a +0x15e:  lea    -0x28(%ebp),%eax
081de88d +0x161:  mov    %eax,(%esp)
081de890 +0x164:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081de895 +0x169:  mov    (%eax),%eax
081de897 +0x16b:  mov    %eax,0x4(%esp)
081de89b +0x16f:  lea    -0x20(%ebp),%eax
081de89e +0x172:  mov    %eax,(%esp)
081de8a1 +0x175:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081de8a6 +0x17a:  lea    -0x28(%ebp),%eax
081de8a9 +0x17d:  mov    %eax,(%esp)
081de8ac +0x180:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081de8b1 +0x185:  lea    -0x28(%ebp),%eax
081de8b4 +0x188:  mov    %eax,(%esp)
081de8b7 +0x18b:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081de8bc +0x190:  mov    (%eax),%eax
081de8be +0x192:  mov    %eax,0x4(%esp)
081de8c2 +0x196:  lea    -0x20(%ebp),%eax
081de8c5 +0x199:  mov    %eax,(%esp)
081de8c8 +0x19c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081de8cd +0x1a1:  lea    -0x28(%ebp),%eax
081de8d0 +0x1a4:  mov    %eax,(%esp)
081de8d3 +0x1a7:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081de8d8 +0x1ac:  lea    -0x28(%ebp),%eax
081de8db +0x1af:  mov    %eax,(%esp)
081de8de +0x1b2:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081de8e3 +0x1b7:  mov    (%eax),%eax
081de8e5 +0x1b9:  mov    %eax,0x4(%esp)
081de8e9 +0x1bd:  lea    -0x20(%ebp),%eax
081de8ec +0x1c0:  mov    %eax,(%esp)
081de8ef +0x1c3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081de8f4 +0x1c8:  lea    -0x28(%ebp),%eax
081de8f7 +0x1cb:  mov    %eax,(%esp)
081de8fa +0x1ce:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081de8ff +0x1d3:  lea    -0x28(%ebp),%eax
081de902 +0x1d6:  mov    %eax,(%esp)
081de905 +0x1d9:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
081de90a +0x1de:  mov    (%eax),%eax
081de90c +0x1e0:  mov    %eax,0x4(%esp)
081de910 +0x1e4:  lea    -0x20(%ebp),%eax
081de913 +0x1e7:  mov    %eax,(%esp)
081de916 +0x1ea:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081de91b +0x1ef:  lea    -0x28(%ebp),%eax
081de91e +0x1f2:  mov    %eax,(%esp)
081de921 +0x1f5:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
081de926 +0x1fa:  mov    -0xc(%ebp),%eax
081de929 +0x1fd:  lea    0x18(%eax),%edx
081de92c +0x200:  lea    -0x10(%ebp),%eax
081de92f +0x203:  mov    %edx,0x4(%esp)
081de933 +0x207:  mov    %eax,(%esp)
081de936 +0x20a:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
081de93b +0x20f:  sub    $0x4,%esp
081de93e +0x212:  lea    -0x10(%ebp),%eax
081de941 +0x215:  mov    %eax,0x4(%esp)
081de945 +0x219:  lea    -0x28(%ebp),%eax
081de948 +0x21c:  mov    %eax,(%esp)
081de94b +0x21f:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
081de950 +0x224:  test   %al,%al
081de952 +0x226:  jne    081de88a <+0x15e>
081de958 +0x22c:  jmp    081de982 <+0x256>
081de95a +0x22e:  movl   $0x0,0x4(%esp)
081de962 +0x236:  lea    -0x20(%ebp),%eax
081de965 +0x239:  mov    %eax,(%esp)
081de968 +0x23c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081de96d +0x241:  mov    -0xc(%ebp),%eax
081de970 +0x244:  mov    0x4(%eax),%eax
081de973 +0x247:  mov    %eax,0x4(%esp)
081de977 +0x24b:  lea    -0x20(%ebp),%eax
081de97a +0x24e:  mov    %eax,(%esp)
081de97d +0x251:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081de982 +0x256:  movl   $0x1,0x4(%esp)
081de98a +0x25e:  lea    -0x20(%ebp),%eax
081de98d +0x261:  mov    %eax,(%esp)
081de990 +0x264:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081de995 +0x269:  lea    -0x20(%ebp),%eax
081de998 +0x26c:  mov    %eax,0x4(%esp)
081de99c +0x270:  mov    0xc(%ebp),%eax
081de99f +0x273:  mov    %eax,(%esp)
081de9a2 +0x276:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081de9a7 +0x27b:  jmp    081de9c4 <+0x298>
081de9a9 +0x27d:  mov    %edx,%ebx
081de9ab +0x27f:  mov    %eax,%esi
081de9ad +0x281:  lea    -0x20(%ebp),%eax
081de9b0 +0x284:  mov    %eax,(%esp)
081de9b3 +0x287:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081de9b8 +0x28c:  mov    %esi,%eax
081de9ba +0x28e:  mov    %ebx,%edx
081de9bc +0x290:  mov    %eax,(%esp)
081de9bf +0x293:  call   08ae3750 <_Unwind_Resume>
081de9c4 +0x298:  lea    -0x20(%ebp),%eax
081de9c7 +0x29b:  mov    %eax,(%esp)
081de9ca +0x29e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081de9cf +0x2a3:  lea    -0x8(%ebp),%esp
081de9d2 +0x2a6:  add    $0x0,%esp
081de9d5 +0x2a9:  pop    %ebx
081de9d6 +0x2aa:  pop    %esi
081de9d7 +0x2ab:  pop    %ebp
081de9d8 +0x2ac:  ret
081de9d9 +0x2ad:  nop
```

## 反编译 C

```c
// Dispatcher_Exchange_Random_Item_Reward::send @ 0x81de72c

/* Dispatcher_Exchange_Random_Item_Reward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Exchange_Random_Item_Reward::send
          (Dispatcher_Exchange_Random_Item_Reward *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_2c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_28 [4];
  PacketGuard local_24 [12];
  __normal_iterator local_18 [4];
  __normal_iterator local_14 [4];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 081de75b to 081de9a6 has its CatchHandler @ 081de9a9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1c1);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_10 + 0xc));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,iVar2);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (local_10 + 0xc));
    if (iVar2 != 0) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar1 = __gnu_cxx::operator!=(local_28,local_18);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_28);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar3);
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_28);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*(int *)(iVar2 + 4));
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_28);
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(byte)local_10[9]);
    if (local_10[9] != (ParamBase)0x0) {
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=(local_2c,local_14);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*(local_2c);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,*piVar3);
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  (local_2c);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,*(int *)(local_10 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  CUser::Send(param_1,local_24);
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
