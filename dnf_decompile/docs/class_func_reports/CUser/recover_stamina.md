# recover_stamina

`_ZN5CUser15recover_staminaEv`

`CUser::recover_stamina()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865784e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865784e  _ZN5CUser15recover_staminaEv
#           CUser::recover_stamina()
# range [0x0865784e, 0x08657989]
0865784e +0x000:  push   %ebp
0865784f +0x001:  mov    %esp,%ebp
08657851 +0x003:  push   %esi
08657852 +0x004:  push   %ebx
08657853 +0x005:  sub    $0x20,%esp
08657856 +0x008:  mov    0x8(%ebp),%eax
08657859 +0x00b:  mov    0x8cfc4(%eax),%eax
0865785f +0x011:  cmp    $0x2,%eax
08657862 +0x014:  jle    0865797d <+0x12f>
08657868 +0x01a:  mov    0x8(%ebp),%eax
0865786b +0x01d:  mov    0x8cfc4(%eax),%eax
08657871 +0x023:  cmp    $0x5,%eax
08657874 +0x026:  je     0865797d <+0x12f>
0865787a +0x02c:  mov    0x8(%ebp),%eax
0865787d +0x02f:  mov    %eax,(%esp)
08657880 +0x032:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657885 +0x037:  movzbl 0x75(%eax),%eax
08657889 +0x03b:  cmp    $0x63,%al
0865788b +0x03d:  setbe  %al
0865788e +0x040:  test   %al,%al
08657890 +0x042:  je     08657969 <+0x11b>
08657896 +0x048:  nop
08657897 +0x049:  mov    0x8(%ebp),%eax
0865789a +0x04c:  movl   $0x9,0x4(%esp)
086578a2 +0x054:  mov    %eax,(%esp)
086578a5 +0x057:  call   08696664 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x2eb9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x2eb9
086578aa +0x05c:  mov    0x8(%ebp),%eax
086578ad +0x05f:  mov    %eax,(%esp)
086578b0 +0x062:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086578b5 +0x067:  movzbl 0x75(%eax),%eax
086578b9 +0x06b:  cmp    $0x64,%al
086578bb +0x06d:  seta   %al
086578be +0x070:  test   %al,%al
086578c0 +0x072:  je     086578d5 <+0x87>
086578c2 +0x074:  mov    0x8(%ebp),%eax
086578c5 +0x077:  movl   $0x64,0x4(%esp)
086578cd +0x07f:  mov    %eax,(%esp)
086578d0 +0x082:  call   082f0914 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x698>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x698
086578d5 +0x087:  lea    -0x14(%ebp),%eax
086578d8 +0x08a:  mov    %eax,(%esp)
086578db +0x08d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086578e0 +0x092:  movl   $0x4,0x8(%esp)
086578e8 +0x09a:  movl   $0x0,0x4(%esp)
086578f0 +0x0a2:  lea    -0x14(%ebp),%eax
086578f3 +0x0a5:  mov    %eax,(%esp)
086578f6 +0x0a8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086578fb +0x0ad:  mov    0x8(%ebp),%eax
086578fe +0x0b0:  mov    %eax,(%esp)
08657901 +0x0b3:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657906 +0x0b8:  movzbl 0x75(%eax),%eax
0865790a +0x0bc:  movzbl %al,%eax
0865790d +0x0bf:  mov    %eax,0x4(%esp)
08657911 +0x0c3:  lea    -0x14(%ebp),%eax
08657914 +0x0c6:  mov    %eax,(%esp)
08657917 +0x0c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0865791c +0x0ce:  movl   $0x1,0x4(%esp)
08657924 +0x0d6:  lea    -0x14(%ebp),%eax
08657927 +0x0d9:  mov    %eax,(%esp)
0865792a +0x0dc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865792f +0x0e1:  lea    -0x14(%ebp),%eax
08657932 +0x0e4:  mov    %eax,0x4(%esp)
08657936 +0x0e8:  mov    0x8(%ebp),%eax
08657939 +0x0eb:  mov    %eax,(%esp)
0865793c +0x0ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08657941 +0x0f3:  jmp    0865795e <+0x110>
08657943 +0x0f5:  mov    %edx,%ebx
08657945 +0x0f7:  mov    %eax,%esi
08657947 +0x0f9:  lea    -0x14(%ebp),%eax
0865794a +0x0fc:  mov    %eax,(%esp)
0865794d +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08657952 +0x104:  mov    %esi,%eax
08657954 +0x106:  mov    %ebx,%edx
08657956 +0x108:  mov    %eax,(%esp)
08657959 +0x10b:  call   08ae3750 <_Unwind_Resume>
0865795e +0x110:  lea    -0x14(%ebp),%eax
08657961 +0x113:  mov    %eax,(%esp)
08657964 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08657969 +0x11b:  mov    0x8(%ebp),%eax
0865796c +0x11e:  mov    %eax,(%esp)
0865796f +0x121:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08657974 +0x126:  movzbl 0x75(%eax),%eax
08657978 +0x12a:  movzbl %al,%eax
0865797b +0x12d:  jmp    08657982 <+0x134>
0865797d +0x12f:  mov    $0x0,%eax
08657982 +0x134:  add    $0x20,%esp
08657985 +0x137:  pop    %ebx
08657986 +0x138:  pop    %esi
08657987 +0x139:  pop    %ebp
08657988 +0x13a:  ret
08657989 +0x13b:  nop
```

## 反编译 C

```c
// CUser::recover_stamina @ 0x865784e

/* CUser::recover_stamina() */

undefined1 __thiscall CUser::recover_stamina(CUser *this)

{
  undefined1 uVar1;
  int iVar2;
  PacketGuard local_18 [12];
  
  if ((*(int *)(this + 0x8cfc4) < 3) || (*(int *)(this + 0x8cfc4) == 5)) {
    uVar1 = 0;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    if (*(byte *)(iVar2 + 0x75) < 100) {
      CUserCharacInfo::addCurcharacStamina((CUserCharacInfo *)this,'\t');
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      if (100 < *(byte *)(iVar2 + 0x75)) {
        CUserCharacInfo::setCurCharacStamina((CUserCharacInfo *)this,'d');
      }
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 086578f6 to 08657940 has its CatchHandler @ 08657943 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,4);
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(uint)*(byte *)(iVar2 + 0x75));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      Send(this,local_18);
      PacketGuard::~PacketGuard(local_18);
    }
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
    uVar1 = *(undefined1 *)(iVar2 + 0x75);
  }
  return uVar1;
}
```
