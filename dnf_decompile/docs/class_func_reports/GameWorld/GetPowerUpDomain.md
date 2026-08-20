# GetPowerUpDomain

`_ZN9GameWorld16GetPowerUpDomainERSt6vectorIP5CUserSaIS2_EES5_`

`GameWorld::GetPowerUpDomain(std::vector<CUser*, std::allocator<CUser*> >&, std::vector<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf1fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf1fe  _ZN9GameWorld16GetPowerUpDomainERSt6vectorIP5CUserSaIS2_EES5_
#           GameWorld::GetPowerUpDomain(std::vector<CUser*, std::allocator<CUser*> >&, std::vector<CUser*, std::allocator<CUser*> >&)
# range [0x086cf1fe, 0x086cf355]
086cf1fe +0x000:  push   %ebp
086cf1ff +0x001:  mov    %esp,%ebp
086cf201 +0x003:  sub    $0x58,%esp
086cf204 +0x006:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086cf209 +0x00b:  mov    0xa678(%eax),%eax
086cf20f +0x011:  mov    %eax,-0x44(%ebp)
086cf212 +0x014:  fildl  -0x44(%ebp)
086cf215 +0x017:  fldl   &data#69d7849f(.rodata)
086cf21b +0x01d:  fdivrp %st,%st(1)
086cf21d +0x01f:  fstpl  -0x28(%ebp)
086cf220 +0x022:  mov    0x8(%ebp),%eax
086cf223 +0x025:  lea    0x134(%eax),%edx
086cf229 +0x02b:  lea    -0x30(%ebp),%eax
086cf22c +0x02e:  mov    %edx,0x4(%esp)
086cf230 +0x032:  mov    %eax,(%esp)
086cf233 +0x035:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086cf238 +0x03a:  sub    $0x4,%esp
086cf23b +0x03d:  jmp    086cf31e <+0x120>
086cf240 +0x042:  lea    -0x30(%ebp),%eax
086cf243 +0x045:  mov    %eax,(%esp)
086cf246 +0x048:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cf24b +0x04d:  mov    0x4(%eax),%eax
086cf24e +0x050:  mov    %eax,-0x34(%ebp)
086cf251 +0x053:  mov    -0x34(%ebp),%eax
086cf254 +0x056:  mov    %eax,(%esp)
086cf257 +0x059:  call   082f09a0 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x724>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x724
086cf25c +0x05e:  test   %al,%al
086cf25e +0x060:  setne  %al
086cf261 +0x063:  test   %al,%al
086cf263 +0x065:  je     086cf313 <+0x115>
086cf269 +0x06b:  mov    -0x34(%ebp),%eax
086cf26c +0x06e:  mov    %eax,(%esp)
086cf26f +0x071:  call   084ec408 <_GLOBAL__I__Z7getUserj+0x33ba>  ; global constructors keyed to getUser(unsigned int)+0x33ba
086cf274 +0x076:  test   %eax,%eax
086cf276 +0x078:  sete   %al
086cf279 +0x07b:  test   %al,%al
086cf27b +0x07d:  jne    086cf312 <+0x114>
086cf281 +0x083:  mov    -0x34(%ebp),%eax
086cf284 +0x086:  mov    %eax,(%esp)
086cf287 +0x089:  call   084ec408 <_GLOBAL__I__Z7getUserj+0x33ba>  ; global constructors keyed to getUser(unsigned int)+0x33ba
086cf28c +0x08e:  mov    $0x0,%edx
086cf291 +0x093:  mov    %eax,-0x40(%ebp)
086cf294 +0x096:  mov    %edx,-0x3c(%ebp)
086cf297 +0x099:  fildll -0x40(%ebp)
086cf29a +0x09c:  fstpl  -0x20(%ebp)
086cf29d +0x09f:  mov    -0x34(%ebp),%eax
086cf2a0 +0x0a2:  mov    %eax,(%esp)
086cf2a3 +0x0a5:  call   084ec42a <_GLOBAL__I__Z7getUserj+0x33dc>  ; global constructors keyed to getUser(unsigned int)+0x33dc
086cf2a8 +0x0aa:  mov    $0x0,%edx
086cf2ad +0x0af:  mov    %eax,-0x40(%ebp)
086cf2b0 +0x0b2:  mov    %edx,-0x3c(%ebp)
086cf2b3 +0x0b5:  fildll -0x40(%ebp)
086cf2b6 +0x0b8:  fstpl  -0x18(%ebp)
086cf2b9 +0x0bb:  fldl   -0x18(%ebp)
086cf2bc +0x0be:  fdivl  -0x20(%ebp)
086cf2bf +0x0c1:  fstpl  -0x10(%ebp)
086cf2c2 +0x0c4:  fldl   -0x28(%ebp)
086cf2c5 +0x0c7:  fldl   -0x10(%ebp)
086cf2c8 +0x0ca:  fxch   %st(1)
086cf2ca +0x0cc:  fucompp
086cf2cc +0x0ce:  fnstsw %ax
086cf2ce +0x0d0:  sahf
086cf2cf +0x0d1:  setae  %al
086cf2d2 +0x0d4:  test   %al,%al
086cf2d4 +0x0d6:  je     086cf313 <+0x115>
086cf2d6 +0x0d8:  mov    -0x34(%ebp),%eax
086cf2d9 +0x0db:  mov    %eax,(%esp)
086cf2dc +0x0de:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
086cf2e1 +0x0e3:  cmp    $0x1,%al
086cf2e3 +0x0e5:  sete   %al
086cf2e6 +0x0e8:  test   %al,%al
086cf2e8 +0x0ea:  je     086cf2fe <+0x100>
086cf2ea +0x0ec:  lea    -0x34(%ebp),%eax
086cf2ed +0x0ef:  mov    %eax,0x4(%esp)
086cf2f1 +0x0f3:  mov    0xc(%ebp),%eax
086cf2f4 +0x0f6:  mov    %eax,(%esp)
086cf2f7 +0x0f9:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
086cf2fc +0x0fe:  jmp    086cf313 <+0x115>
086cf2fe +0x100:  lea    -0x34(%ebp),%eax
086cf301 +0x103:  mov    %eax,0x4(%esp)
086cf305 +0x107:  mov    0x10(%ebp),%eax
086cf308 +0x10a:  mov    %eax,(%esp)
086cf30b +0x10d:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
086cf310 +0x112:  jmp    086cf313 <+0x115>
086cf312 +0x114:  nop
086cf313 +0x115:  lea    -0x30(%ebp),%eax
086cf316 +0x118:  mov    %eax,(%esp)
086cf319 +0x11b:  call   0811c9a4 <_GLOBAL__I_events+0x1047>  ; global constructors keyed to events+0x1047
086cf31e +0x120:  mov    0x8(%ebp),%eax
086cf321 +0x123:  lea    0x134(%eax),%edx
086cf327 +0x129:  lea    -0x2c(%ebp),%eax
086cf32a +0x12c:  mov    %edx,0x4(%esp)
086cf32e +0x130:  mov    %eax,(%esp)
086cf331 +0x133:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086cf336 +0x138:  sub    $0x4,%esp
086cf339 +0x13b:  lea    -0x2c(%ebp),%eax
086cf33c +0x13e:  mov    %eax,0x4(%esp)
086cf340 +0x142:  lea    -0x30(%ebp),%eax
086cf343 +0x145:  mov    %eax,(%esp)
086cf346 +0x148:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086cf34b +0x14d:  test   %al,%al
086cf34d +0x14f:  jne    086cf240 <+0x42>
086cf353 +0x155:  leave
086cf354 +0x156:  ret
086cf355 +0x157:  nop
```

## 反编译 C

```c
// GameWorld::GetPowerUpDomain @ 0x86cf1fe

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameWorld::GetPowerUpDomain(std::vector<CUser*, std::allocator<CUser*> >&, std::vector<CUser*,
   std::allocator<CUser*> >&) */

void __thiscall GameWorld::GetPowerUpDomain(GameWorld *this,vector *param_1,vector *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  CUserCharacInfo *local_38;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_34 [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_30 [4];
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  
  iVar2 = G_CDataManager();
  local_2c = (double)*(int *)(iVar2 + 0xa678) / _DAT_08cfd828;
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_34);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_34,
                       (_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_34);
    local_38 = *(CUserCharacInfo **)(iVar2 + 4);
    cVar1 = CUserCharacInfo::isJoinPowerWar(local_38);
    if (cVar1 != '\0') {
      iVar2 = CUserCharacInfo::GetPowerWarAssaultCount(local_38);
      if (iVar2 != 0) {
        uVar3 = CUserCharacInfo::GetPowerWarAssaultCount(local_38);
        local_24 = (double)uVar3;
        uVar3 = CUserCharacInfo::GetPowerWarAssaultVictoryCount(local_38);
        local_1c = (double)uVar3;
        local_14 = local_1c / local_24;
        if (local_14 <= local_2c) {
          cVar1 = CUser::getPowerSide((CUser *)local_38);
          if (cVar1 == '\x01') {
            std::vector<CUser*,std::allocator<CUser*>>::push_back
                      ((vector<CUser*,std::allocator<CUser*>> *)param_1,(CUser **)&local_38);
          }
          else {
            std::vector<CUser*,std::allocator<CUser*>>::push_back
                      ((vector<CUser*,std::allocator<CUser*>> *)param_2,(CUser **)&local_38);
          }
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_34);
  }
  return;
}
```
