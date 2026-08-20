# ReviveUser

`_ZN6CParty10ReviveUserEP5CUsert`

`CParty::ReviveUser(CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b27c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b27c8  _ZN6CParty10ReviveUserEP5CUsert
#           CParty::ReviveUser(CUser*, unsigned short)
# range [0x085b27c8, 0x085b29bb]
085b27c8 +0x000:  push   %ebp
085b27c9 +0x001:  mov    %esp,%ebp
085b27cb +0x003:  sub    $0x38,%esp
085b27ce +0x006:  mov    0x10(%ebp),%eax
085b27d1 +0x009:  mov    %ax,-0x1c(%ebp)
085b27d5 +0x00d:  mov    0x8(%ebp),%eax
085b27d8 +0x010:  mov    %eax,(%esp)
085b27db +0x013:  call   0822d83a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ee4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ee4
085b27e0 +0x018:  cmp    $0x2,%al
085b27e2 +0x01a:  setne  %al
085b27e5 +0x01d:  test   %al,%al
085b27e7 +0x01f:  je     085b2807 <+0x3f>
085b27e9 +0x021:  mov    0x8(%ebp),%eax
085b27ec +0x024:  mov    %eax,(%esp)
085b27ef +0x027:  call   0814581c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x29f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x29f
085b27f4 +0x02c:  test   %al,%al
085b27f6 +0x02e:  sete   %al
085b27f9 +0x031:  test   %al,%al
085b27fb +0x033:  je     085b2807 <+0x3f>
085b27fd +0x035:  mov    $0x13,%eax
085b2802 +0x03a:  jmp    085b29ba <+0x1f2>
085b2807 +0x03f:  movl   $0x0,-0x18(%ebp)
085b280e +0x046:  movl   $0x0,-0x10(%ebp)
085b2815 +0x04d:  jmp    085b289a <+0xd2>
085b281a +0x052:  mov    -0x10(%ebp),%eax
085b281d +0x055:  mov    %eax,0x4(%esp)
085b2821 +0x059:  mov    0x8(%ebp),%eax
085b2824 +0x05c:  mov    %eax,(%esp)
085b2827 +0x05f:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b282c +0x064:  xor    $0x1,%eax
085b282f +0x067:  test   %al,%al
085b2831 +0x069:  jne    085b2895 <+0xcd>
085b2833 +0x06b:  mov    -0x10(%ebp),%edx
085b2836 +0x06e:  mov    0x8(%ebp),%ecx
085b2839 +0x071:  mov    %edx,%eax
085b283b +0x073:  add    %eax,%eax
085b283d +0x075:  add    %edx,%eax
085b283f +0x077:  shl    $0x3,%eax
085b2842 +0x07a:  lea    (%ecx,%eax,1),%eax
085b2845 +0x07d:  add    $0x78,%eax
085b2848 +0x080:  mov    (%eax),%eax
085b284a +0x082:  mov    %eax,(%esp)
085b284d +0x085:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085b2852 +0x08a:  cmp    -0x1c(%ebp),%ax
085b2856 +0x08e:  sete   %al
085b2859 +0x091:  test   %al,%al
085b285b +0x093:  je     085b2896 <+0xce>
085b285d +0x095:  mov    -0x10(%ebp),%eax
085b2860 +0x098:  mov    0x8(%ebp),%edx
085b2863 +0x09b:  movzbl 0x380(%edx,%eax,1),%eax
085b286b +0x0a3:  test   %al,%al
085b286d +0x0a5:  je     085b2879 <+0xb1>
085b286f +0x0a7:  mov    $0x12,%eax
085b2874 +0x0ac:  jmp    085b29ba <+0x1f2>
085b2879 +0x0b1:  mov    -0x10(%ebp),%edx
085b287c +0x0b4:  mov    0x8(%ebp),%ecx
085b287f +0x0b7:  mov    %edx,%eax
085b2881 +0x0b9:  add    %eax,%eax
085b2883 +0x0bb:  add    %edx,%eax
085b2885 +0x0bd:  shl    $0x3,%eax
085b2888 +0x0c0:  lea    (%ecx,%eax,1),%eax
085b288b +0x0c3:  add    $0x78,%eax
085b288e +0x0c6:  mov    (%eax),%eax
085b2890 +0x0c8:  mov    %eax,-0x18(%ebp)
085b2893 +0x0cb:  jmp    085b28a9 <+0xe1>
085b2895 +0x0cd:  nop
085b2896 +0x0ce:  addl   $0x1,-0x10(%ebp)
085b289a +0x0d2:  cmpl   $0x3,-0x10(%ebp)
085b289e +0x0d6:  setle  %al
085b28a1 +0x0d9:  test   %al,%al
085b28a3 +0x0db:  jne    085b281a <+0x52>
085b28a9 +0x0e1:  cmpl   $0x0,-0x18(%ebp)
085b28ad +0x0e5:  jne    085b28b9 <+0xf1>
085b28af +0x0e7:  mov    $0x15,%eax
085b28b4 +0x0ec:  jmp    085b29ba <+0x1f2>
085b28b9 +0x0f1:  movl   $0x0,0x4(%esp)
085b28c1 +0x0f9:  mov    0x8(%ebp),%eax
085b28c4 +0x0fc:  mov    %eax,(%esp)
085b28c7 +0x0ff:  call   085be39a <_ZN6CParty25checkFreeRevivalConditionEPK8CDungeon>  ; CParty::checkFreeRevivalCondition(CDungeon const*)
085b28cc +0x104:  mov    %al,-0x11(%ebp)
085b28cf +0x107:  movl   $0x0,-0xc(%ebp)
085b28d6 +0x10e:  jmp    085b2981 <+0x1b9>
085b28db +0x113:  mov    -0xc(%ebp),%eax
085b28de +0x116:  mov    %eax,0x4(%esp)
085b28e2 +0x11a:  mov    0x8(%ebp),%eax
085b28e5 +0x11d:  mov    %eax,(%esp)
085b28e8 +0x120:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b28ed +0x125:  xor    $0x1,%eax
085b28f0 +0x128:  test   %al,%al
085b28f2 +0x12a:  jne    085b2979 <+0x1b1>
085b28f8 +0x130:  mov    -0xc(%ebp),%edx
085b28fb +0x133:  mov    0x8(%ebp),%ecx
085b28fe +0x136:  mov    %edx,%eax
085b2900 +0x138:  add    %eax,%eax
085b2902 +0x13a:  add    %edx,%eax
085b2904 +0x13c:  shl    $0x3,%eax
085b2907 +0x13f:  lea    (%ecx,%eax,1),%eax
085b290a +0x142:  add    $0x78,%eax
085b290d +0x145:  mov    (%eax),%eax
085b290f +0x147:  cmp    0xc(%ebp),%eax
085b2912 +0x14a:  jne    085b297d <+0x1b5>
085b2914 +0x14c:  cmpb   $0x0,-0x11(%ebp)
085b2918 +0x150:  jne    085b297c <+0x1b4>
085b291a +0x152:  mov    -0xc(%ebp),%edx
085b291d +0x155:  mov    0x8(%ebp),%eax
085b2920 +0x158:  add    $0x2c0,%edx
085b2926 +0x15e:  mov    0x14(%eax,%edx,4),%eax
085b292a +0x162:  test   %eax,%eax
085b292c +0x164:  jne    085b2938 <+0x170>
085b292e +0x166:  mov    $0x1,%eax
085b2933 +0x16b:  jmp    085b29ba <+0x1f2>
085b2938 +0x170:  mov    -0x18(%ebp),%eax
085b293b +0x173:  mov    %eax,(%esp)
085b293e +0x176:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085b2943 +0x17b:  mov    0xc(%ebp),%edx
085b2946 +0x17e:  mov    0x796f8(%edx),%edx
085b294c +0x184:  mov    %eax,0x4(%esp)
085b2950 +0x188:  mov    %edx,(%esp)
085b2953 +0x18b:  call   084ba030 <_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc>  ; HistoryLog::WriteUseCoin(_IO_FILE*, char const*)
085b2958 +0x190:  mov    -0xc(%ebp),%eax
085b295b +0x193:  mov    0x8(%ebp),%edx
085b295e +0x196:  lea    0x2c0(%eax),%ecx
085b2964 +0x19c:  mov    0x14(%edx,%ecx,4),%edx
085b2968 +0x1a0:  lea    -0x1(%edx),%ecx
085b296b +0x1a3:  mov    0x8(%ebp),%edx
085b296e +0x1a6:  add    $0x2c0,%eax
085b2973 +0x1ab:  mov    %ecx,0x14(%edx,%eax,4)
085b2977 +0x1af:  jmp    085b297d <+0x1b5>
085b2979 +0x1b1:  nop
085b297a +0x1b2:  jmp    085b297d <+0x1b5>
085b297c +0x1b4:  nop
085b297d +0x1b5:  addl   $0x1,-0xc(%ebp)
085b2981 +0x1b9:  cmpl   $0x3,-0xc(%ebp)
085b2985 +0x1bd:  setle  %al
085b2988 +0x1c0:  test   %al,%al
085b298a +0x1c2:  jne    085b28db <+0x113>
085b2990 +0x1c8:  movl   $0x1,0x8(%esp)
085b2998 +0x1d0:  mov    -0x18(%ebp),%eax
085b299b +0x1d3:  mov    %eax,0x4(%esp)
085b299f +0x1d7:  mov    0x8(%ebp),%eax
085b29a2 +0x1da:  mov    %eax,(%esp)
085b29a5 +0x1dd:  call   085b29bc <_ZN6CParty15set_charac_liveEP5CUser23ENUM_USER_DUNGEON_STATE>  ; CParty::set_charac_live(CUser*, ENUM_USER_DUNGEON_STATE)
085b29aa +0x1e2:  mov    0x8(%ebp),%eax
085b29ad +0x1e5:  mov    %eax,(%esp)
085b29b0 +0x1e8:  call   085b916e <_ZN6CParty33Reset_party_overlapped_drop_ratioEv>  ; CParty::Reset_party_overlapped_drop_ratio()
085b29b5 +0x1ed:  mov    $0x0,%eax
085b29ba +0x1f2:  leave
085b29bb +0x1f3:  ret
```

## 反编译 C

```c
// CParty::ReviveUser @ 0x85b27c8

/* CParty::ReviveUser(CUser*, unsigned short) */

undefined4 __thiscall CParty::ReviveUser(CParty *this,CUser *param_1,ushort param_2)

{
  char cVar1;
  char cVar2;
  ushort uVar3;
  undefined4 uVar4;
  char *pcVar5;
  CUserCharacInfo *local_1c;
  int local_14;
  int local_10;
  
  cVar1 = get_state(this);
  if ((cVar1 == '\x02') || (cVar1 = GetEPLPState(this), cVar1 != '\0')) {
    local_1c = (CUserCharacInfo *)0x0;
    for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
      cVar1 = _checkValidUser(this,local_14);
      if ((cVar1 == '\x01') &&
         (uVar3 = CUser::get_unique_id(*(CUser **)(this + local_14 * 0x18 + 0x78)), uVar3 == param_2
         )) {
        if (this[local_14 + 0x380] != (CParty)0x0) {
          return 0x12;
        }
        local_1c = *(CUserCharacInfo **)(this + local_14 * 0x18 + 0x78);
        break;
      }
    }
    if (local_1c == (CUserCharacInfo *)0x0) {
      uVar4 = 0x15;
    }
    else {
      cVar1 = checkFreeRevivalCondition(this,(CDungeon *)0x0);
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        cVar2 = _checkValidUser(this,local_10);
        if (((cVar2 == '\x01') && (*(CUser **)(this + local_10 * 0x18 + 0x78) == param_1)) &&
           (cVar1 == '\0')) {
          if (*(int *)(this + (local_10 + 0x2c0) * 4 + 0x14) == 0) {
            return 1;
          }
          pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_1c);
          HistoryLog::WriteUseCoin(*(_IO_FILE **)(param_1 + 0x796f8),pcVar5);
          *(int *)(this + (local_10 + 0x2c0) * 4 + 0x14) =
               *(int *)(this + (local_10 + 0x2c0) * 4 + 0x14) + -1;
        }
      }
      set_charac_live(this,local_1c,1);
      Reset_party_overlapped_drop_ratio(this);
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0x13;
  }
  return uVar4;
}
```
