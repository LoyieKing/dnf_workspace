# dispatch_sig

`_ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci`

`Inter_PvPBuddyConnList::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_PvPBuddyConnList` | `0x084e16fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e16fe  _ZN22Inter_PvPBuddyConnList12dispatch_sigEP5CUserPci
#           Inter_PvPBuddyConnList::dispatch_sig(CUser*, char*, int)
# range [0x084e16fe, 0x084e1831]
084e16fe +0x000:  push   %ebp
084e16ff +0x001:  mov    %esp,%ebp
084e1701 +0x003:  push   %esi
084e1702 +0x004:  push   %ebx
084e1703 +0x005:  sub    $0x30,%esp
084e1706 +0x008:  mov    0x10(%ebp),%eax
084e1709 +0x00b:  mov    %eax,-0x10(%ebp)
084e170c +0x00e:  mov    0xc(%ebp),%eax
084e170f +0x011:  mov    %eax,(%esp)
084e1712 +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e1717 +0x019:  cmp    $0x2,%eax
084e171a +0x01c:  setle  %al
084e171d +0x01f:  test   %al,%al
084e171f +0x021:  je     084e172b <+0x2d>
084e1721 +0x023:  mov    $0x0,%ebx
084e1726 +0x028:  jmp    084e1828 <+0x12a>
084e172b +0x02d:  mov    -0x10(%ebp),%eax
084e172e +0x030:  mov    0xa(%eax),%ebx
084e1731 +0x033:  mov    0xc(%ebp),%eax
084e1734 +0x036:  mov    %eax,(%esp)
084e1737 +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e173c +0x03e:  cmp    %eax,%ebx
084e173e +0x040:  setne  %al
084e1741 +0x043:  test   %al,%al
084e1743 +0x045:  je     084e174f <+0x51>
084e1745 +0x047:  mov    $0x0,%ebx
084e174a +0x04c:  jmp    084e1828 <+0x12a>
084e174f +0x051:  lea    -0x1c(%ebp),%eax
084e1752 +0x054:  mov    %eax,(%esp)
084e1755 +0x057:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e175a +0x05c:  movl   $0x10f,0x8(%esp)
084e1762 +0x064:  movl   $0x0,0x4(%esp)
084e176a +0x06c:  lea    -0x1c(%ebp),%eax
084e176d +0x06f:  mov    %eax,(%esp)
084e1770 +0x072:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1775 +0x077:  mov    -0x10(%ebp),%eax
084e1778 +0x07a:  mov    0x12(%eax),%eax
084e177b +0x07d:  mov    %eax,0x4(%esp)
084e177f +0x081:  lea    -0x1c(%ebp),%eax
084e1782 +0x084:  mov    %eax,(%esp)
084e1785 +0x087:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e178a +0x08c:  movl   $0x0,-0xc(%ebp)
084e1791 +0x093:  jmp    084e17c6 <+0xc8>
084e1793 +0x095:  mov    -0xc(%ebp),%edx
084e1796 +0x098:  mov    %edx,%eax
084e1798 +0x09a:  shl    $0x2,%eax
084e179b +0x09d:  add    %edx,%eax
084e179d +0x09f:  shl    $0x3,%eax
084e17a0 +0x0a2:  add    %edx,%eax
084e17a2 +0x0a4:  add    $0x10,%eax
084e17a5 +0x0a7:  add    -0x10(%ebp),%eax
084e17a8 +0x0aa:  add    $0x6,%eax
084e17ab +0x0ad:  movl   $0x29,0x8(%esp)
084e17b3 +0x0b5:  mov    %eax,0x4(%esp)
084e17b7 +0x0b9:  lea    -0x1c(%ebp),%eax
084e17ba +0x0bc:  mov    %eax,(%esp)
084e17bd +0x0bf:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e17c2 +0x0c4:  addl   $0x1,-0xc(%ebp)
084e17c6 +0x0c8:  mov    -0x10(%ebp),%eax
084e17c9 +0x0cb:  mov    0x12(%eax),%eax
084e17cc +0x0ce:  cmp    -0xc(%ebp),%eax
084e17cf +0x0d1:  setg   %al
084e17d2 +0x0d4:  test   %al,%al
084e17d4 +0x0d6:  jne    084e1793 <+0x95>
084e17d6 +0x0d8:  movl   $0x1,0x4(%esp)
084e17de +0x0e0:  lea    -0x1c(%ebp),%eax
084e17e1 +0x0e3:  mov    %eax,(%esp)
084e17e4 +0x0e6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e17e9 +0x0eb:  lea    -0x1c(%ebp),%eax
084e17ec +0x0ee:  mov    %eax,0x4(%esp)
084e17f0 +0x0f2:  mov    0xc(%ebp),%eax
084e17f3 +0x0f5:  mov    %eax,(%esp)
084e17f6 +0x0f8:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e17fb +0x0fd:  mov    $0x0,%ebx
084e1800 +0x102:  lea    -0x1c(%ebp),%eax
084e1803 +0x105:  mov    %eax,(%esp)
084e1806 +0x108:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e180b +0x10d:  jmp    084e1828 <+0x12a>
084e180d +0x10f:  mov    %edx,%ebx
084e180f +0x111:  mov    %eax,%esi
084e1811 +0x113:  lea    -0x1c(%ebp),%eax
084e1814 +0x116:  mov    %eax,(%esp)
084e1817 +0x119:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e181c +0x11e:  mov    %esi,%eax
084e181e +0x120:  mov    %ebx,%edx
084e1820 +0x122:  mov    %eax,(%esp)
084e1823 +0x125:  call   08ae3750 <_Unwind_Resume>
084e1828 +0x12a:  mov    %ebx,%eax
084e182a +0x12c:  add    $0x30,%esp
084e182d +0x12f:  pop    %ebx
084e182e +0x130:  pop    %esi
084e182f +0x131:  pop    %ebp
084e1830 +0x132:  ret
084e1831 +0x133:  nop
```

## 反编译 C

```c
// Inter_PvPBuddyConnList::dispatch_sig @ 0x84e16fe

/* Inter_PvPBuddyConnList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_PvPBuddyConnList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = *(int *)(local_14 + 10),
     iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar1 == iVar2)) {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e1770 to 084e17fa has its CatchHandler @ 084e180d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x10f);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
    for (local_10 = 0; local_10 < *(int *)(local_14 + 0x12); local_10 = local_10 + 1) {
      InterfacePacketBuf::put_binary
                ((InterfacePacketBuf *)local_20,(char *)(local_10 * 0x29 + local_14 + 0x16),0x29);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
