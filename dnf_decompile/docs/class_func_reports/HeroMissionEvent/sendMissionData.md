# sendMissionData

`_ZN16HeroMissionEvent15sendMissionDataEP5CUser`

`HeroMissionEvent::sendMissionData(CUser*)`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x0816770e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816770e  _ZN16HeroMissionEvent15sendMissionDataEP5CUser
#           HeroMissionEvent::sendMissionData(CUser*)
# range [0x0816770e, 0x081679ab]
0816770e +0x000:  push   %ebp
0816770f +0x001:  mov    %esp,%ebp
08167711 +0x003:  push   %esi
08167712 +0x004:  push   %ebx
08167713 +0x005:  sub    $0x40,%esp
08167716 +0x008:  mov    0x8(%ebp),%eax
08167719 +0x00b:  mov    (%eax),%eax
0816771b +0x00d:  add    $0x34,%eax
0816771e +0x010:  mov    (%eax),%edx
08167720 +0x012:  mov    0x8(%ebp),%eax
08167723 +0x015:  movl   $0x0,0x4(%esp)
0816772b +0x01d:  mov    %eax,(%esp)
0816772e +0x020:  call   *%edx
08167730 +0x022:  xor    $0x1,%eax
08167733 +0x025:  test   %al,%al
08167735 +0x027:  jne    081679a0 <+0x292>
0816773b +0x02d:  cmpl   $0x0,0xc(%ebp)
0816773f +0x031:  jne    08167772 <+0x64>
08167741 +0x033:  movl   $"[HeroMission] Invalid user pointer. (processMission)",0x10(%esp)
08167749 +0x03b:  movl   $0x307,0xc(%esp)
08167751 +0x043:  movl   $&_ZZN16HeroMissionEvent15sendMissionDataEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08167759 +0x04b:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
08167761 +0x053:  movl   $0x1,(%esp)
08167768 +0x05a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816776d +0x05f:  jmp    081679a1 <+0x293>
08167772 +0x064:  movl   $0xffffffff,0x4(%esp)
0816777a +0x06c:  mov    0xc(%ebp),%eax
0816777d +0x06f:  mov    %eax,(%esp)
08167780 +0x072:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08167785 +0x077:  mov    %eax,-0x14(%ebp)
08167788 +0x07a:  mov    0x8(%ebp),%eax
0816778b +0x07d:  lea    0x24(%eax),%ecx
0816778e +0x080:  lea    -0x18(%ebp),%eax
08167791 +0x083:  lea    -0x14(%ebp),%edx
08167794 +0x086:  mov    %edx,0x8(%esp)
08167798 +0x08a:  mov    %ecx,0x4(%esp)
0816779c +0x08e:  mov    %eax,(%esp)
0816779f +0x091:  call   081687f8 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x659>  ; global constructors keyed to HeroMissionValue::clear()+0x659
081677a4 +0x096:  sub    $0x4,%esp
081677a7 +0x099:  mov    0x8(%ebp),%eax
081677aa +0x09c:  lea    0x24(%eax),%edx
081677ad +0x09f:  lea    -0x10(%ebp),%eax
081677b0 +0x0a2:  mov    %edx,0x4(%esp)
081677b4 +0x0a6:  mov    %eax,(%esp)
081677b7 +0x0a9:  call   08168824 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x685>  ; global constructors keyed to HeroMissionValue::clear()+0x685
081677bc +0x0ae:  sub    $0x4,%esp
081677bf +0x0b1:  lea    -0x10(%ebp),%eax
081677c2 +0x0b4:  mov    %eax,0x4(%esp)
081677c6 +0x0b8:  lea    -0x18(%ebp),%eax
081677c9 +0x0bb:  mov    %eax,(%esp)
081677cc +0x0be:  call   0816892c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x78d>  ; global constructors keyed to HeroMissionValue::clear()+0x78d
081677d1 +0x0c3:  test   %al,%al
081677d3 +0x0c5:  je     0816781d <+0x10f>
081677d5 +0x0c7:  movl   $0xffffffff,0x4(%esp)
081677dd +0x0cf:  mov    0xc(%ebp),%eax
081677e0 +0x0d2:  mov    %eax,(%esp)
081677e3 +0x0d5:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081677e8 +0x0da:  mov    %eax,0x14(%esp)
081677ec +0x0de:  movl   $"[HeroMission] Not exist hero mission value. (charac:%u)",0x10(%esp)
081677f4 +0x0e6:  movl   $0x30e,0xc(%esp)
081677fc +0x0ee:  movl   $&_ZZN16HeroMissionEvent15sendMissionDataEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
08167804 +0x0f6:  movl   $"localtaiwan/Event/EventHeroMission.cpp",0x4(%esp)
0816780c +0x0fe:  movl   $0x1,(%esp)
08167813 +0x105:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08167818 +0x10a:  jmp    081679a1 <+0x293>
0816781d +0x10f:  lea    -0x24(%ebp),%eax
08167820 +0x112:  mov    %eax,(%esp)
08167823 +0x115:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08167828 +0x11a:  movl   $0x22f,0x8(%esp)
08167830 +0x122:  movl   $0x0,0x4(%esp)
08167838 +0x12a:  lea    -0x24(%ebp),%eax
0816783b +0x12d:  mov    %eax,(%esp)
0816783e +0x130:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08167843 +0x135:  lea    -0x18(%ebp),%eax
08167846 +0x138:  mov    %eax,(%esp)
08167849 +0x13b:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
0816784e +0x140:  add    $0x4,%eax
08167851 +0x143:  mov    %eax,(%esp)
08167854 +0x146:  call   081689a4 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x805>  ; global constructors keyed to HeroMissionValue::clear()+0x805
08167859 +0x14b:  mov    %eax,0x4(%esp)
0816785d +0x14f:  lea    -0x24(%ebp),%eax
08167860 +0x152:  mov    %eax,(%esp)
08167863 +0x155:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08167868 +0x15a:  lea    -0x18(%ebp),%eax
0816786b +0x15d:  mov    %eax,(%esp)
0816786e +0x160:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
08167873 +0x165:  lea    0x4(%eax),%edx
08167876 +0x168:  lea    -0x28(%ebp),%eax
08167879 +0x16b:  mov    %edx,0x4(%esp)
0816787d +0x16f:  mov    %eax,(%esp)
08167880 +0x172:  call   081684f6 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x357>  ; global constructors keyed to HeroMissionValue::clear()+0x357
08167885 +0x177:  sub    $0x4,%esp
08167888 +0x17a:  jmp    08167917 <+0x209>
0816788d +0x17f:  lea    -0x28(%ebp),%eax
08167890 +0x182:  mov    %eax,(%esp)
08167893 +0x185:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
08167898 +0x18a:  mov    (%eax),%eax
0816789a +0x18c:  mov    %eax,0x4(%esp)
0816789e +0x190:  lea    -0x24(%ebp),%eax
081678a1 +0x193:  mov    %eax,(%esp)
081678a4 +0x196:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081678a9 +0x19b:  lea    -0x28(%ebp),%eax
081678ac +0x19e:  mov    %eax,(%esp)
081678af +0x1a1:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
081678b4 +0x1a6:  movzwl 0x4(%eax),%eax
081678b8 +0x1aa:  movzwl %ax,%eax
081678bb +0x1ad:  mov    %eax,0x4(%esp)
081678bf +0x1b1:  lea    -0x24(%ebp),%eax
081678c2 +0x1b4:  mov    %eax,(%esp)
081678c5 +0x1b7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081678ca +0x1bc:  lea    -0x28(%ebp),%eax
081678cd +0x1bf:  mov    %eax,(%esp)
081678d0 +0x1c2:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
081678d5 +0x1c7:  movzwl 0x8(%eax),%eax
081678d9 +0x1cb:  movzwl %ax,%eax
081678dc +0x1ce:  mov    %eax,0x4(%esp)
081678e0 +0x1d2:  lea    -0x24(%ebp),%eax
081678e3 +0x1d5:  mov    %eax,(%esp)
081678e6 +0x1d8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081678eb +0x1dd:  lea    -0x28(%ebp),%eax
081678ee +0x1e0:  mov    %eax,(%esp)
081678f1 +0x1e3:  call   08168582 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3e3>  ; global constructors keyed to HeroMissionValue::clear()+0x3e3
081678f6 +0x1e8:  movzwl 0xa(%eax),%eax
081678fa +0x1ec:  movzwl %ax,%eax
081678fd +0x1ef:  mov    %eax,0x4(%esp)
08167901 +0x1f3:  lea    -0x24(%ebp),%eax
08167904 +0x1f6:  mov    %eax,(%esp)
08167907 +0x1f9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0816790c +0x1fe:  lea    -0x28(%ebp),%eax
0816790f +0x201:  mov    %eax,(%esp)
08167912 +0x204:  call   0816856c <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3cd>  ; global constructors keyed to HeroMissionValue::clear()+0x3cd
08167917 +0x209:  lea    -0x18(%ebp),%eax
0816791a +0x20c:  mov    %eax,(%esp)
0816791d +0x20f:  call   08168940 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x7a1>  ; global constructors keyed to HeroMissionValue::clear()+0x7a1
08167922 +0x214:  lea    0x4(%eax),%edx
08167925 +0x217:  lea    -0xc(%ebp),%eax
08167928 +0x21a:  mov    %edx,0x4(%esp)
0816792c +0x21e:  mov    %eax,(%esp)
0816792f +0x221:  call   0816851a <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x37b>  ; global constructors keyed to HeroMissionValue::clear()+0x37b
08167934 +0x226:  sub    $0x4,%esp
08167937 +0x229:  lea    -0xc(%ebp),%eax
0816793a +0x22c:  mov    %eax,0x4(%esp)
0816793e +0x230:  lea    -0x28(%ebp),%eax
08167941 +0x233:  mov    %eax,(%esp)
08167944 +0x236:  call   08168540 <_GLOBAL__I__ZN16HeroMissionValue5clearEv+0x3a1>  ; global constructors keyed to HeroMissionValue::clear()+0x3a1
08167949 +0x23b:  test   %al,%al
0816794b +0x23d:  jne    0816788d <+0x17f>
08167951 +0x243:  movl   $0x1,0x4(%esp)
08167959 +0x24b:  lea    -0x24(%ebp),%eax
0816795c +0x24e:  mov    %eax,(%esp)
0816795f +0x251:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08167964 +0x256:  lea    -0x24(%ebp),%eax
08167967 +0x259:  mov    %eax,0x4(%esp)
0816796b +0x25d:  mov    0xc(%ebp),%eax
0816796e +0x260:  mov    %eax,(%esp)
08167971 +0x263:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08167976 +0x268:  jmp    08167993 <+0x285>
08167978 +0x26a:  mov    %edx,%ebx
0816797a +0x26c:  mov    %eax,%esi
0816797c +0x26e:  lea    -0x24(%ebp),%eax
0816797f +0x271:  mov    %eax,(%esp)
08167982 +0x274:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08167987 +0x279:  mov    %esi,%eax
08167989 +0x27b:  mov    %ebx,%edx
0816798b +0x27d:  mov    %eax,(%esp)
0816798e +0x280:  call   08ae3750 <_Unwind_Resume>
08167993 +0x285:  lea    -0x24(%ebp),%eax
08167996 +0x288:  mov    %eax,(%esp)
08167999 +0x28b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0816799e +0x290:  jmp    081679a1 <+0x293>
081679a0 +0x292:  nop
081679a1 +0x293:  lea    -0x8(%ebp),%esp
081679a4 +0x296:  add    $0x0,%esp
081679a7 +0x299:  pop    %ebx
081679a8 +0x29a:  pop    %esi
081679a9 +0x29b:  pop    %ebp
081679aa +0x29c:  ret
081679ab +0x29d:  nop
```

## 反编译 C

```c
// HeroMissionEvent::sendMissionData @ 0x816770e

/* HeroMissionEvent::sendMissionData(CUser*) */

void __thiscall HeroMissionEvent::sendMissionData(HeroMissionEvent *this,CUser *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
  local_2c [4];
  PacketGuard local_28 [12];
  _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
  local_1c [4];
  undefined4 local_18;
  map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
  local_14 [4];
  __normal_iterator local_10 [4];
  
  cVar1 = (**(code **)(*(int *)this + 0x34))(this,0);
  if (cVar1 == '\x01') {
    if (param_1 == (CUser *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/Event/EventHeroMission.cpp",
                 "void HeroMissionEvent::sendMissionData(CUser*)",0x307,
                 "[HeroMission] Invalid user pointer. (processMission)");
    }
    else {
      local_18 = CUser::get_charac_no(param_1,-1);
      std::
      map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
      ::find((uint *)local_1c);
      std::
      map<unsigned_int,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>>
      ::end(local_14);
      cVar1 = std::
              _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
              ::operator==(local_1c,(_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') {
        PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0816783e to 08167975 has its CatchHandler @ 08167978 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x22f);
        iVar4 = std::
                _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
                ::operator->(local_1c);
        iVar4 = std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::size
                          ((vector<HeroMissionValue,std::allocator<HeroMissionValue>> *)(iVar4 + 4))
        ;
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,iVar4);
        std::
        _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
        ::operator->(local_1c);
        std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::begin();
        while( true ) {
          std::
          _Rb_tree_iterator<std::pair<unsigned_int_const,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>>
          ::operator->(local_1c);
          std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>::end();
          bVar2 = __gnu_cxx::operator!=(local_2c,local_10);
          if (!bVar2) break;
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                          ::operator->(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*piVar5);
          iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)*(ushort *)(iVar4 + 4))
          ;
          iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_2c);
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(uint)*(ushort *)(iVar4 + 8))
          ;
          iVar4 = __gnu_cxx::
                  __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
                  ::operator->(local_2c);
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_28,(uint)*(ushort *)(iVar4 + 10));
          __gnu_cxx::
          __normal_iterator<HeroMissionValue*,std::vector<HeroMissionValue,std::allocator<HeroMissionValue>>>
          ::operator++(local_2c);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
        CUser::Send(param_1,local_28);
        PacketGuard::~PacketGuard(local_28);
      }
      else {
        uVar3 = CUser::get_charac_no(param_1,-1);
        LogManager::logFormat
                  (1,"localtaiwan/Event/EventHeroMission.cpp",
                   "void HeroMissionEvent::sendMissionData(CUser*)",0x30e,
                   "[HeroMission] Not exist hero mission value. (charac:%u)",uVar3);
      }
    }
  }
  return;
}
```
