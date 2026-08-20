# sendComboSkillList

`_ZN5CUser18sendComboSkillListEv`

`CUser::sendComboSkillList()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086924aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086924aa  _ZN5CUser18sendComboSkillListEv
#           CUser::sendComboSkillList()
# range [0x086924aa, 0x086925c3]
086924aa +0x000:  push   %ebp
086924ab +0x001:  mov    %esp,%ebp
086924ad +0x003:  push   %esi
086924ae +0x004:  push   %ebx
086924af +0x005:  sub    $0x20,%esp
086924b2 +0x008:  mov    0x8(%ebp),%eax
086924b5 +0x00b:  mov    %eax,(%esp)
086924b8 +0x00e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
086924bd +0x013:  cmp    $0x9,%eax
086924c0 +0x016:  setne  %al
086924c3 +0x019:  test   %al,%al
086924c5 +0x01b:  jne    086925bb <+0x111>
086924cb +0x021:  mov    0x8(%ebp),%eax
086924ce +0x024:  mov    %eax,(%esp)
086924d1 +0x027:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
086924d6 +0x02c:  mov    %eax,(%esp)
086924d9 +0x02f:  call   086090a0 <_ZN9SkillSlot26eraseDuplicationComboSKillEv>  ; SkillSlot::eraseDuplicationComboSKill()
086924de +0x034:  lea    -0x14(%ebp),%eax
086924e1 +0x037:  mov    %eax,(%esp)
086924e4 +0x03a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086924e9 +0x03f:  movl   $0x1bd,0x8(%esp)
086924f1 +0x047:  movl   $0x0,0x4(%esp)
086924f9 +0x04f:  lea    -0x14(%ebp),%eax
086924fc +0x052:  mov    %eax,(%esp)
086924ff +0x055:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08692504 +0x05a:  mov    0x8(%ebp),%eax
08692507 +0x05d:  mov    %eax,(%esp)
0869250a +0x060:  call   08692f26 <_ZN5CUser15isComboSkillSetEv>  ; CUser::isComboSkillSet()
0869250f +0x065:  test   %al,%al
08692511 +0x067:  je     0869251a <+0x70>
08692513 +0x069:  mov    $0x1,%eax
08692518 +0x06e:  jmp    0869251f <+0x75>
0869251a +0x070:  mov    $0x0,%eax
0869251f +0x075:  mov    %eax,0x4(%esp)
08692523 +0x079:  lea    -0x14(%ebp),%eax
08692526 +0x07c:  mov    %eax,(%esp)
08692529 +0x07f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0869252e +0x084:  movl   $0x2,0x4(%esp)
08692536 +0x08c:  lea    -0x14(%ebp),%eax
08692539 +0x08f:  mov    %eax,(%esp)
0869253c +0x092:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08692541 +0x097:  mov    0x8(%ebp),%eax
08692544 +0x09a:  mov    %eax,(%esp)
08692547 +0x09d:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
0869254c +0x0a2:  lea    -0x14(%ebp),%edx
0869254f +0x0a5:  mov    %edx,0x4(%esp)
08692553 +0x0a9:  mov    %eax,(%esp)
08692556 +0x0ac:  call   08608c12 <_ZNK9SkillSlot21getComboSkillSendInfoER11PacketGuard>  ; SkillSlot::getComboSkillSendInfo(PacketGuard&) const
0869255b +0x0b1:  movl   $0x1,0x4(%esp)
08692563 +0x0b9:  lea    -0x14(%ebp),%eax
08692566 +0x0bc:  mov    %eax,(%esp)
08692569 +0x0bf:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0869256e +0x0c4:  lea    -0x14(%ebp),%eax
08692571 +0x0c7:  mov    %eax,0x4(%esp)
08692575 +0x0cb:  mov    0x8(%ebp),%eax
08692578 +0x0ce:  mov    %eax,(%esp)
0869257b +0x0d1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08692580 +0x0d6:  movl   $0x0,0x4(%esp)
08692588 +0x0de:  mov    0x8(%ebp),%eax
0869258b +0x0e1:  mov    %eax,(%esp)
0869258e +0x0e4:  call   08692f0a <_ZN5CUser16setComboSkillSetEb>  ; CUser::setComboSkillSet(bool)
08692593 +0x0e9:  lea    -0x14(%ebp),%eax
08692596 +0x0ec:  mov    %eax,(%esp)
08692599 +0x0ef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0869259e +0x0f4:  jmp    086925bc <+0x112>
086925a0 +0x0f6:  mov    %edx,%ebx
086925a2 +0x0f8:  mov    %eax,%esi
086925a4 +0x0fa:  lea    -0x14(%ebp),%eax
086925a7 +0x0fd:  mov    %eax,(%esp)
086925aa +0x100:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086925af +0x105:  mov    %esi,%eax
086925b1 +0x107:  mov    %ebx,%edx
086925b3 +0x109:  mov    %eax,(%esp)
086925b6 +0x10c:  call   08ae3750 <_Unwind_Resume>
086925bb +0x111:  nop
086925bc +0x112:  add    $0x20,%esp
086925bf +0x115:  pop    %ebx
086925c0 +0x116:  pop    %esi
086925c1 +0x117:  pop    %ebp
086925c2 +0x118:  ret
086925c3 +0x119:  nop
```

## 反编译 C

```c
// CUser::sendComboSkillList @ 0x86924aa

/* CUser::sendComboSkillList() */

void __thiscall CUser::sendComboSkillList(CUser *this)

{
  char cVar1;
  int iVar2;
  SkillSlot *pSVar3;
  PacketGuard local_18 [12];
  
  iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  if (iVar2 == 9) {
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)this);
    SkillSlot::eraseDuplicationComboSKill(pSVar3);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086924ff to 0869257f has its CatchHandler @ 086925a0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1bd);
    cVar1 = isComboSkillSet(this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)(cVar1 != '\0'));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,2);
    pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)this);
    SkillSlot::getComboSkillSendInfo(pSVar3,local_18);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    Send(this,local_18);
    setComboSkillSet(this,false);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
