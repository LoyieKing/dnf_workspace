# read

`_ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE`

`Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PvpMissionHPPercent` | `0x081d574e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d574e  _ZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASE
#           Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&)
# range [0x081d574e, 0x081d5863]
081d574e +0x000:  push   %ebp
081d574f +0x001:  mov    %esp,%ebp
081d5751 +0x003:  push   %ebx
081d5752 +0x004:  sub    $0x34,%esp
081d5755 +0x007:  mov    0x10(%ebp),%eax
081d5758 +0x00a:  mov    %eax,-0x10(%ebp)
081d575b +0x00d:  mov    -0x10(%ebp),%eax
081d575e +0x010:  add    $0xd,%eax
081d5761 +0x013:  mov    %eax,0x4(%esp)
081d5765 +0x017:  mov    0xc(%ebp),%eax
081d5768 +0x01a:  mov    %eax,(%esp)
081d576b +0x01d:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
081d5770 +0x022:  mov    -0x10(%ebp),%eax
081d5773 +0x025:  movzbl 0xd(%eax),%eax
081d5777 +0x029:  test   %al,%al
081d5779 +0x02b:  je     081d5786 <+0x38>
081d577b +0x02d:  mov    -0x10(%ebp),%eax
081d577e +0x030:  movzbl 0xd(%eax),%eax
081d5782 +0x034:  cmp    $0x4,%al
081d5784 +0x036:  jbe    081d57f0 <+0xa2>
081d5786 +0x038:  mov    -0x10(%ebp),%eax
081d5789 +0x03b:  movzbl 0xd(%eax),%eax
081d578d +0x03f:  movzbl %al,%ebx
081d5790 +0x042:  movl   $0x5,0xc(%esp)
081d5798 +0x04a:  movl   $0x3924,0x8(%esp)
081d57a0 +0x052:  movl   $&_ZZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d57a8 +0x05a:  lea    -0x20(%ebp),%eax
081d57ab +0x05d:  mov    %eax,(%esp)
081d57ae +0x060:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081d57b3 +0x065:  mov    %ebx,0x8(%esp)
081d57b7 +0x069:  movl   $"[@missionSystem] HackUser: <clearMissionCount : %d>",0x4(%esp)
081d57bf +0x071:  lea    -0x20(%ebp),%eax
081d57c2 +0x074:  mov    %eax,(%esp)
081d57c5 +0x077:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081d57ca +0x07c:  movl   $0x0,0xc(%esp)
081d57d2 +0x084:  movl   $0x0,0x8(%esp)
081d57da +0x08c:  movl   $&_ZZN30Dispatcher_PvpMissionHPPercent4readER9PacketBufR8MSG_BASEE19__PRETTY_FUNCTION__,0x4(%esp)
081d57e2 +0x094:  movl   $0x3925,(%esp)
081d57e9 +0x09b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d57ee +0x0a0:  jmp    081d585e <+0x110>
081d57f0 +0x0a2:  mov    -0x10(%ebp),%eax
081d57f3 +0x0a5:  movzbl 0xd(%eax),%eax
081d57f7 +0x0a9:  movzbl %al,%eax
081d57fa +0x0ac:  mov    -0x10(%ebp),%edx
081d57fd +0x0af:  add    $0xe,%edx
081d5800 +0x0b2:  movl   $0x0,0x8(%esp)
081d5808 +0x0ba:  mov    %eax,0x4(%esp)
081d580c +0x0be:  mov    %edx,(%esp)
081d580f +0x0c1:  call   08237016 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc6c0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc6c0
081d5814 +0x0c6:  movl   $0x0,-0xc(%ebp)
081d581b +0x0cd:  jmp    081d5845 <+0xf7>
081d581d +0x0cf:  mov    -0xc(%ebp),%eax
081d5820 +0x0d2:  mov    -0x10(%ebp),%edx
081d5823 +0x0d5:  add    $0xe,%edx
081d5826 +0x0d8:  mov    %eax,0x4(%esp)
081d582a +0x0dc:  mov    %edx,(%esp)
081d582d +0x0df:  call   0816eee8 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x1d6>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x1d6
081d5832 +0x0e4:  mov    %eax,0x4(%esp)
081d5836 +0x0e8:  mov    0xc(%ebp),%eax
081d5839 +0x0eb:  mov    %eax,(%esp)
081d583c +0x0ee:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
081d5841 +0x0f3:  addl   $0x1,-0xc(%ebp)
081d5845 +0x0f7:  mov    -0x10(%ebp),%eax
081d5848 +0x0fa:  movzbl 0xd(%eax),%eax
081d584c +0x0fe:  movzbl %al,%eax
081d584f +0x101:  cmp    -0xc(%ebp),%eax
081d5852 +0x104:  setg   %al
081d5855 +0x107:  test   %al,%al
081d5857 +0x109:  jne    081d581d <+0xcf>
081d5859 +0x10b:  mov    $0x0,%eax
081d585e +0x110:  add    $0x34,%esp
081d5861 +0x113:  pop    %ebx
081d5862 +0x114:  pop    %ebp
081d5863 +0x115:  ret
```

## 反编译 C

```c
// Dispatcher_PvpMissionHPPercent::read @ 0x81d574e

/* Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_PvpMissionHPPercent::read
          (Dispatcher_PvpMissionHPPercent *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  short *psVar3;
  cMyTrace local_24 [16];
  MSG_BASE *local_14;
  uint local_10;
  
  local_14 = param_2;
  PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0xd));
  if ((local_14[0xd] == (MSG_BASE)0x0) || (4 < (byte)local_14[0xd])) {
    MVar1 = local_14[0xd];
    cMyTrace::cMyTrace(local_24,
                       "virtual int Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&)",
                       0x3924,5);
    cMyTrace::operator()
              (local_24,"[@missionSystem] HackUser: <clearMissionCount : %d>",(uint)(byte)MVar1);
    uVar2 = LineFunc(0x3925,
                     "virtual int Dispatcher_PvpMissionHPPercent::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  else {
    std::vector<short,std::allocator<short>>::resize
              ((vector<short,std::allocator<short>> *)(local_14 + 0xe),(uint)(byte)local_14[0xd],0);
    for (local_10 = 0; (int)local_10 < (int)(uint)(byte)local_14[0xd]; local_10 = local_10 + 1) {
      psVar3 = (short *)std::vector<short,std::allocator<short>>::operator[]
                                  ((vector<short,std::allocator<short>> *)(local_14 + 0xe),local_10)
      ;
      PacketBuf::get_short(param_1,psVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}
```
