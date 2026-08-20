# IsDoubleGoldCard

`_ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc`

`CConditionEventManager::IsDoubleGoldCard(CUser*, char)`

| 类 | 地址 |
|---|---|
| `CConditionEventManager` | `0x083358bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083358bc  _ZN22CConditionEventManager16IsDoubleGoldCardEP5CUserc
#           CConditionEventManager::IsDoubleGoldCard(CUser*, char)
# range [0x083358bc, 0x08335a39]
083358bc +0x000:  push   %ebp
083358bd +0x001:  mov    %esp,%ebp
083358bf +0x003:  push   %esi
083358c0 +0x004:  push   %ebx
083358c1 +0x005:  sub    $0x50,%esp
083358c4 +0x008:  mov    0x10(%ebp),%eax
083358c7 +0x00b:  mov    %al,-0x2c(%ebp)
083358ca +0x00e:  movsbl -0x2c(%ebp),%eax
083358ce +0x012:  mov    %eax,0x8(%esp)
083358d2 +0x016:  mov    0xc(%ebp),%eax
083358d5 +0x019:  mov    %eax,0x4(%esp)
083358d9 +0x01d:  mov    0x8(%ebp),%eax
083358dc +0x020:  mov    %eax,(%esp)
083358df +0x023:  call   08335a8a <_ZN22CConditionEventManager21CheckErrorCardForStepEP5CUserc>  ; CConditionEventManager::CheckErrorCardForStep(CUser*, char)
083358e4 +0x028:  mov    %al,-0xd(%ebp)
083358e7 +0x02b:  movzbl -0xd(%ebp),%eax
083358eb +0x02f:  xor    $0x1,%eax
083358ee +0x032:  test   %al,%al
083358f0 +0x034:  je     083358fc <+0x40>
083358f2 +0x036:  mov    $0x0,%ebx
083358f7 +0x03b:  jmp    08335a31 <+0x175>
083358fc +0x040:  mov    0x8(%ebp),%eax
083358ff +0x043:  mov    %eax,(%esp)
08335902 +0x046:  call   08335754 <_ZN22CConditionEventManager16GetCurEventIndexEv>  ; CConditionEventManager::GetCurEventIndex()
08335907 +0x04b:  mov    %eax,-0xc(%ebp)
0833590a +0x04e:  lea    -0x1c(%ebp),%eax
0833590d +0x051:  mov    %eax,(%esp)
08335910 +0x054:  call   08335cc8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x16e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x16e
08335915 +0x059:  movsbl -0x2c(%ebp),%edx
08335919 +0x05d:  mov    -0xc(%ebp),%eax
0833591c +0x060:  cwtl
0833591d +0x061:  mov    %edx,0x10(%esp)
08335921 +0x065:  mov    %eax,0xc(%esp)
08335925 +0x069:  lea    -0x1c(%ebp),%eax
08335928 +0x06c:  mov    %eax,0x8(%esp)
0833592c +0x070:  movl   $0x0,0x4(%esp)
08335934 +0x078:  mov    0x8(%ebp),%eax
08335937 +0x07b:  mov    %eax,(%esp)
0833593a +0x07e:  call   083353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>  ; CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, short, char)
0833593f +0x083:  lea    -0x1c(%ebp),%eax
08335942 +0x086:  mov    %eax,0x4(%esp)
08335946 +0x08a:  mov    0x8(%ebp),%eax
08335949 +0x08d:  mov    %eax,(%esp)
0833594c +0x090:  call   08335a3a <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE>  ; CConditionEventManager::IsDoubleGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)
08335951 +0x095:  mov    %al,-0xd(%ebp)
08335954 +0x098:  movzbl -0xd(%ebp),%eax
08335958 +0x09c:  xor    $0x1,%eax
0833595b +0x09f:  test   %al,%al
0833595d +0x0a1:  je     08335975 <+0xb9>
0833595f +0x0a3:  mov    0xc(%ebp),%eax
08335962 +0x0a6:  mov    %eax,(%esp)
08335965 +0x0a9:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0833596a +0x0ae:  test   %eax,%eax
0833596c +0x0b0:  je     08335975 <+0xb9>
0833596e +0x0b2:  mov    $0x1,%eax
08335973 +0x0b7:  jmp    0833597a <+0xbe>
08335975 +0x0b9:  mov    $0x0,%eax
0833597a +0x0be:  test   %al,%al
0833597c +0x0c0:  je     08335a05 <+0x149>
08335982 +0x0c6:  mov    0xc(%ebp),%eax
08335985 +0x0c9:  mov    %eax,(%esp)
08335988 +0x0cc:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0833598d +0x0d1:  mov    %eax,(%esp)
08335990 +0x0d4:  call   0822d952 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ffc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ffc
08335995 +0x0d9:  test   %al,%al
08335997 +0x0db:  je     08335a05 <+0x149>
08335999 +0x0dd:  lea    -0x28(%ebp),%eax
0833599c +0x0e0:  mov    %eax,(%esp)
0833599f +0x0e3:  call   08335cc8 <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x16e>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x16e
083359a4 +0x0e8:  movsbl -0x2c(%ebp),%edx
083359a8 +0x0ec:  mov    -0xc(%ebp),%eax
083359ab +0x0ef:  cwtl
083359ac +0x0f0:  mov    %edx,0x10(%esp)
083359b0 +0x0f4:  mov    %eax,0xc(%esp)
083359b4 +0x0f8:  lea    -0x28(%ebp),%eax
083359b7 +0x0fb:  mov    %eax,0x8(%esp)
083359bb +0x0ff:  movl   $0x1,0x4(%esp)
083359c3 +0x107:  mov    0x8(%ebp),%eax
083359c6 +0x10a:  mov    %eax,(%esp)
083359c9 +0x10d:  call   083353a0 <_ZN22CConditionEventManager22GetConditionRewardInfoEcRSt6vectorI26stConditionEventRewardInfoSaIS1_EEsc>  ; CConditionEventManager::GetConditionRewardInfo(char, std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&, short, char)
083359ce +0x112:  lea    -0x28(%ebp),%eax
083359d1 +0x115:  mov    %eax,0x4(%esp)
083359d5 +0x119:  mov    0x8(%ebp),%eax
083359d8 +0x11c:  mov    %eax,(%esp)
083359db +0x11f:  call   08335a3a <_ZN22CConditionEventManager23IsDoubleGoldCardProcessERSt6vectorI26stConditionEventRewardInfoSaIS1_EE>  ; CConditionEventManager::IsDoubleGoldCardProcess(std::vector<stConditionEventRewardInfo, std::allocator<stConditionEventRewardInfo> >&)
083359e0 +0x124:  mov    %al,-0xd(%ebp)
083359e3 +0x127:  lea    -0x28(%ebp),%eax
083359e6 +0x12a:  mov    %eax,(%esp)
083359e9 +0x12d:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
083359ee +0x132:  jmp    08335a05 <+0x149>
083359f0 +0x134:  mov    %edx,%ebx
083359f2 +0x136:  mov    %eax,%esi
083359f4 +0x138:  lea    -0x28(%ebp),%eax
083359f7 +0x13b:  mov    %eax,(%esp)
083359fa +0x13e:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
083359ff +0x143:  mov    %esi,%eax
08335a01 +0x145:  mov    %ebx,%edx
08335a03 +0x147:  jmp    08335a16 <+0x15a>
08335a05 +0x149:  movzbl -0xd(%ebp),%ebx
08335a09 +0x14d:  lea    -0x1c(%ebp),%eax
08335a0c +0x150:  mov    %eax,(%esp)
08335a0f +0x153:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
08335a14 +0x158:  jmp    08335a31 <+0x175>
08335a16 +0x15a:  mov    %edx,%ebx
08335a18 +0x15c:  mov    %eax,%esi
08335a1a +0x15e:  lea    -0x1c(%ebp),%eax
08335a1d +0x161:  mov    %eax,(%esp)
08335a20 +0x164:  call   08335cdc <_GLOBAL__I__ZN22CConditionEventManagerC2Ev+0x182>  ; global constructors keyed to CConditionEventManager::CConditionEventManager()+0x182
08335a25 +0x169:  mov    %esi,%eax
08335a27 +0x16b:  mov    %ebx,%edx
08335a29 +0x16d:  mov    %eax,(%esp)
08335a2c +0x170:  call   08ae3750 <_Unwind_Resume>
08335a31 +0x175:  mov    %ebx,%eax
08335a33 +0x177:  add    $0x50,%esp
08335a36 +0x17a:  pop    %ebx
08335a37 +0x17b:  pop    %esi
08335a38 +0x17c:  pop    %ebp
08335a39 +0x17d:  ret
```

## 反编译 C

```c
// CConditionEventManager::IsDoubleGoldCard @ 0x83358bc

/* CConditionEventManager::IsDoubleGoldCard(CUser*, char) */

char __thiscall
CConditionEventManager::IsDoubleGoldCard(CConditionEventManager *this,CUser *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CParty *this_00;
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_2c [12];
  vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>> local_20 [15];
  char local_11;
  undefined4 local_10;
  
  local_11 = CheckErrorCardForStep(this,param_1,param_2);
  if (local_11 == '\x01') {
    local_10 = GetCurEventIndex();
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::vector
              (local_20);
                    /* try { // try from 0833593a to 083359a3 has its CatchHandler @ 08335a16 */
    GetConditionRewardInfo(this,'\0',(vector *)local_20,(short)local_10,param_2);
    local_11 = IsDoubleGoldCardProcess(this,(vector *)local_20);
    if ((local_11 == '\x01') || (iVar3 = CUser::GetParty(param_1), iVar3 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      this_00 = (CParty *)CUser::GetParty(param_1);
      cVar2 = CParty::is_quick_party(this_00);
      if (cVar2 != '\0') {
        std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::vector
                  (local_2c);
                    /* try { // try from 083359c9 to 083359df has its CatchHandler @ 083359f0 */
        GetConditionRewardInfo(this,'\x01',(vector *)local_2c,(short)local_10,param_2);
        local_11 = IsDoubleGoldCardProcess(this,(vector *)local_2c);
                    /* try { // try from 083359e9 to 083359ed has its CatchHandler @ 08335a16 */
        std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::~vector
                  (local_2c);
      }
    }
    cVar2 = local_11;
    std::vector<stConditionEventRewardInfo,std::allocator<stConditionEventRewardInfo>>::~vector
              (local_20);
    return cVar2;
  }
  return '\0';
}
```
