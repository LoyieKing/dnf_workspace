# SendSkillInfo

`_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND`

`SkillSlot::SendSkillInfo(int, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `SkillSlot` | `0x086086ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086086ce  _ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND
#           SkillSlot::SendSkillInfo(int, ENUM_SKILL_TREE_KIND)
# range [0x086086ce, 0x086088df]
086086ce +0x000:  push   %ebp
086086cf +0x001:  mov    %esp,%ebp
086086d1 +0x003:  push   %esi
086086d2 +0x004:  push   %ebx
086086d3 +0x005:  sub    $0x30,%esp
086086d6 +0x008:  mov    0x8(%ebp),%eax
086086d9 +0x00b:  mov    (%eax),%eax
086086db +0x00d:  test   %eax,%eax
086086dd +0x00f:  je     086088d8 <+0x20a>
086086e3 +0x015:  lea    -0x20(%ebp),%eax
086086e6 +0x018:  mov    %eax,(%esp)
086086e9 +0x01b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086086ee +0x020:  lea    -0x20(%ebp),%eax
086086f1 +0x023:  mov    %eax,(%esp)
086086f4 +0x026:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086086f9 +0x02b:  movl   $0x1e5,0x8(%esp)
08608701 +0x033:  movl   $0x1,0x4(%esp)
08608709 +0x03b:  lea    -0x20(%ebp),%eax
0860870c +0x03e:  mov    %eax,(%esp)
0860870f +0x041:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08608714 +0x046:  movl   $0x1,0x4(%esp)
0860871c +0x04e:  lea    -0x20(%ebp),%eax
0860871f +0x051:  mov    %eax,(%esp)
08608722 +0x054:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08608727 +0x059:  mov    0xc(%ebp),%eax
0860872a +0x05c:  mov    %eax,0x4(%esp)
0860872e +0x060:  lea    -0x20(%ebp),%eax
08608731 +0x063:  mov    %eax,(%esp)
08608734 +0x066:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08608739 +0x06b:  mov    0xc(%ebp),%eax
0860873c +0x06e:  mov    0x8(%ebp),%edx
0860873f +0x071:  mov    (%edx),%edx
08608741 +0x073:  add    $0x796e8,%edx
08608747 +0x079:  mov    %eax,0x4(%esp)
0860874b +0x07d:  mov    %edx,(%esp)
0860874e +0x080:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08608753 +0x085:  movzbl 0x26(%eax),%eax
08608757 +0x089:  movsbl %al,%eax
0860875a +0x08c:  mov    %eax,0x4(%esp)
0860875e +0x090:  lea    -0x20(%ebp),%eax
08608761 +0x093:  mov    %eax,(%esp)
08608764 +0x096:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08608769 +0x09b:  mov    0xc(%ebp),%eax
0860876c +0x09e:  mov    0x8(%ebp),%edx
0860876f +0x0a1:  mov    (%edx),%edx
08608771 +0x0a3:  add    $0x796e8,%edx
08608777 +0x0a9:  mov    %eax,0x4(%esp)
0860877b +0x0ad:  mov    %edx,(%esp)
0860877e +0x0b0:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
08608783 +0x0b5:  movzbl 0x29(%eax),%eax
08608787 +0x0b9:  shl    $0x4,%eax
0860878a +0x0bc:  sar    $0x4,%al
0860878d +0x0bf:  movsbl %al,%eax
08608790 +0x0c2:  mov    %eax,0x4(%esp)
08608794 +0x0c6:  lea    -0x20(%ebp),%eax
08608797 +0x0c9:  mov    %eax,(%esp)
0860879a +0x0cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860879f +0x0d1:  lea    -0x20(%ebp),%eax
086087a2 +0x0d4:  mov    %eax,(%esp)
086087a5 +0x0d7:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
086087aa +0x0dc:  mov    %eax,-0x24(%ebp)
086087ad +0x0df:  movl   $0x0,-0x14(%ebp)
086087b4 +0x0e6:  movl   $0x0,0x4(%esp)
086087bc +0x0ee:  lea    -0x20(%ebp),%eax
086087bf +0x0f1:  mov    %eax,(%esp)
086087c2 +0x0f4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086087c7 +0x0f9:  movl   $0x0,-0x10(%ebp)
086087ce +0x100:  mov    0x10(%ebp),%eax
086087d1 +0x103:  cmp    $0xffffffff,%eax
086087d4 +0x106:  je     086087dd <+0x10f>
086087d6 +0x108:  mov    0x10(%ebp),%eax
086087d9 +0x10b:  test   %eax,%eax
086087db +0x10d:  jne    086087e8 <+0x11a>
086087dd +0x10f:  mov    0x8(%ebp),%eax
086087e0 +0x112:  add    $0x46,%eax
086087e3 +0x115:  mov    %eax,-0x10(%ebp)
086087e6 +0x118:  jmp    086087f3 <+0x125>
086087e8 +0x11a:  mov    0x8(%ebp),%eax
086087eb +0x11d:  add    $0x1de,%eax
086087f0 +0x122:  mov    %eax,-0x10(%ebp)
086087f3 +0x125:  movl   $0x0,-0xc(%ebp)
086087fa +0x12c:  jmp    08608860 <+0x192>
086087fc +0x12e:  mov    -0xc(%ebp),%eax
086087ff +0x131:  add    %eax,%eax
08608801 +0x133:  add    -0x10(%ebp),%eax
08608804 +0x136:  movzbl (%eax),%eax
08608807 +0x139:  test   %al,%al
08608809 +0x13b:  je     0860885c <+0x18e>
0860880b +0x13d:  mov    -0xc(%ebp),%eax
0860880e +0x140:  mov    %eax,0x4(%esp)
08608812 +0x144:  lea    -0x20(%ebp),%eax
08608815 +0x147:  mov    %eax,(%esp)
08608818 +0x14a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860881d +0x14f:  mov    -0xc(%ebp),%eax
08608820 +0x152:  add    %eax,%eax
08608822 +0x154:  add    -0x10(%ebp),%eax
08608825 +0x157:  movzbl (%eax),%eax
08608828 +0x15a:  movzbl %al,%eax
0860882b +0x15d:  mov    %eax,0x4(%esp)
0860882f +0x161:  lea    -0x20(%ebp),%eax
08608832 +0x164:  mov    %eax,(%esp)
08608835 +0x167:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0860883a +0x16c:  mov    -0xc(%ebp),%eax
0860883d +0x16f:  add    %eax,%eax
0860883f +0x171:  add    -0x10(%ebp),%eax
08608842 +0x174:  movzbl 0x1(%eax),%eax
08608846 +0x178:  movsbl %al,%eax
08608849 +0x17b:  mov    %eax,0x4(%esp)
0860884d +0x17f:  lea    -0x20(%ebp),%eax
08608850 +0x182:  mov    %eax,(%esp)
08608853 +0x185:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08608858 +0x18a:  addl   $0x1,-0x14(%ebp)
0860885c +0x18e:  addl   $0x1,-0xc(%ebp)
08608860 +0x192:  cmpl   $0xcb,-0xc(%ebp)
08608867 +0x199:  setle  %al
0860886a +0x19c:  test   %al,%al
0860886c +0x19e:  jne    086087fc <+0x12e>
0860886e +0x1a0:  mov    -0x14(%ebp),%eax
08608871 +0x1a3:  mov    %eax,0x8(%esp)
08608875 +0x1a7:  lea    -0x24(%ebp),%eax
08608878 +0x1aa:  mov    %eax,0x4(%esp)
0860887c +0x1ae:  lea    -0x20(%ebp),%eax
0860887f +0x1b1:  mov    %eax,(%esp)
08608882 +0x1b4:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
08608887 +0x1b9:  movl   $0x1,0x4(%esp)
0860888f +0x1c1:  lea    -0x20(%ebp),%eax
08608892 +0x1c4:  mov    %eax,(%esp)
08608895 +0x1c7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0860889a +0x1cc:  mov    0x8(%ebp),%eax
0860889d +0x1cf:  mov    (%eax),%eax
0860889f +0x1d1:  lea    -0x20(%ebp),%edx
086088a2 +0x1d4:  mov    %edx,0x4(%esp)
086088a6 +0x1d8:  mov    %eax,(%esp)
086088a9 +0x1db:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086088ae +0x1e0:  jmp    086088cb <+0x1fd>
086088b0 +0x1e2:  mov    %edx,%ebx
086088b2 +0x1e4:  mov    %eax,%esi
086088b4 +0x1e6:  lea    -0x20(%ebp),%eax
086088b7 +0x1e9:  mov    %eax,(%esp)
086088ba +0x1ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086088bf +0x1f1:  mov    %esi,%eax
086088c1 +0x1f3:  mov    %ebx,%edx
086088c3 +0x1f5:  mov    %eax,(%esp)
086088c6 +0x1f8:  call   08ae3750 <_Unwind_Resume>
086088cb +0x1fd:  lea    -0x20(%ebp),%eax
086088ce +0x200:  mov    %eax,(%esp)
086088d1 +0x203:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086088d6 +0x208:  jmp    086088d9 <+0x20b>
086088d8 +0x20a:  nop
086088d9 +0x20b:  add    $0x30,%esp
086088dc +0x20e:  pop    %ebx
086088dd +0x20f:  pop    %esi
086088de +0x210:  pop    %ebp
086088df +0x211:  ret
```

## 反编译 C

```c
// SkillSlot::SendSkillInfo @ 0x86086ce

/* SkillSlot::SendSkillInfo(int, ENUM_SKILL_TREE_KIND) */

void __thiscall SkillSlot::SendSkillInfo(SkillSlot *this,uint param_1,int param_3)

{
  int iVar1;
  int local_28;
  PacketGuard local_24 [12];
  int local_18;
  SkillSlot *local_14;
  int local_10;
  
  if (*(int *)this != 0) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086086f4 to 086088ad has its CatchHandler @ 086088b0 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x1e5);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,param_1);
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8)
                       ,param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)*(char *)(iVar1 + 0x26));
    iVar1 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(*(int *)this + 0x796e8)
                       ,param_1);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_24,(int)((char)(*(char *)(iVar1 + 0x29) << 4) >> 4));
    local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
    local_18 = 0;
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    if ((param_3 == -1) || (param_3 == 0)) {
      local_14 = this + 0x46;
    }
    else {
      local_14 = this + 0x1de;
    }
    for (local_10 = 0; local_10 < 0xcc; local_10 = local_10 + 1) {
      if (local_14[local_10 * 2] != (SkillSlot)0x0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(uint)(byte)local_14[local_10 * 2]);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_24,(int)(char)local_14[local_10 * 2 + 1]);
        local_18 = local_18 + 1;
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,&local_28,local_18);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(*(CUser **)this,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}
```
