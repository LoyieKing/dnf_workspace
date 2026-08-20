# _VictoryBonus

`_ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc`

`pvp_assault::CAssaultPlace::_VictoryBonus(CUser*, char)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ec89c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ec89c  _ZN11pvp_assault13CAssaultPlace13_VictoryBonusEP5CUserc
#           pvp_assault::CAssaultPlace::_VictoryBonus(CUser*, char)
# range [0x082ec89c, 0x082ecaed]
082ec89c +0x000:  push   %ebp
082ec89d +0x001:  mov    %esp,%ebp
082ec89f +0x003:  push   %ebx
082ec8a0 +0x004:  sub    $0x74,%esp
082ec8a3 +0x007:  mov    0x10(%ebp),%eax
082ec8a6 +0x00a:  mov    %al,-0x4c(%ebp)
082ec8a9 +0x00d:  movl   $0x0,-0x20(%ebp)
082ec8b0 +0x014:  movl   $0x0,-0x1c(%ebp)
082ec8b7 +0x01b:  movl   $0x0,-0x18(%ebp)
082ec8be +0x022:  movl   $0x0,-0x14(%ebp)
082ec8c5 +0x029:  movl   $0x0,-0x10(%ebp)
082ec8cc +0x030:  movl   $0x0,-0xc(%ebp)
082ec8d3 +0x037:  jmp    082ec939 <+0x9d>
082ec8d5 +0x039:  mov    -0xc(%ebp),%eax
082ec8d8 +0x03c:  shl    $0x5,%eax
082ec8db +0x03f:  add    0x8(%ebp),%eax
082ec8de +0x042:  mov    %eax,(%esp)
082ec8e1 +0x045:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ec8e6 +0x04a:  test   %eax,%eax
082ec8e8 +0x04c:  sete   %al
082ec8eb +0x04f:  test   %al,%al
082ec8ed +0x051:  jne    082ec934 <+0x98>
082ec8ef +0x053:  mov    0xc(%ebp),%eax
082ec8f2 +0x056:  mov    %eax,(%esp)
082ec8f5 +0x059:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec8fa +0x05e:  mov    %eax,%ebx
082ec8fc +0x060:  mov    -0xc(%ebp),%eax
082ec8ff +0x063:  shl    $0x5,%eax
082ec902 +0x066:  add    0x8(%ebp),%eax
082ec905 +0x069:  mov    %eax,(%esp)
082ec908 +0x06c:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ec90d +0x071:  mov    %eax,(%esp)
082ec910 +0x074:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec915 +0x079:  cmp    %al,%bl
082ec917 +0x07b:  setne  %al
082ec91a +0x07e:  test   %al,%al
082ec91c +0x080:  je     082ec935 <+0x99>
082ec91e +0x082:  mov    -0xc(%ebp),%eax
082ec921 +0x085:  shl    $0x5,%eax
082ec924 +0x088:  add    0x8(%ebp),%eax
082ec927 +0x08b:  mov    %eax,(%esp)
082ec92a +0x08e:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082ec92f +0x093:  mov    %eax,-0x10(%ebp)
082ec932 +0x096:  jmp    082ec944 <+0xa8>
082ec934 +0x098:  nop
082ec935 +0x099:  addl   $0x1,-0xc(%ebp)
082ec939 +0x09d:  cmpl   $0x7,-0xc(%ebp)
082ec93d +0x0a1:  setle  %al
082ec940 +0x0a4:  test   %al,%al
082ec942 +0x0a6:  jne    082ec8d5 <+0x39>
082ec944 +0x0a8:  mov    0xc(%ebp),%eax
082ec947 +0x0ab:  mov    %eax,(%esp)
082ec94a +0x0ae:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
082ec94f +0x0b3:  cmp    -0x4c(%ebp),%al
082ec952 +0x0b6:  sete   %al
082ec955 +0x0b9:  test   %al,%al
082ec957 +0x0bb:  je     082eca1f <+0x183>
082ec95d +0x0c1:  mov    0xc(%ebp),%eax
082ec960 +0x0c4:  mov    %eax,(%esp)
082ec963 +0x0c7:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082ec968 +0x0cc:  mov    %eax,-0x20(%ebp)
082ec96b +0x0cf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ec970 +0x0d4:  lea    0xa628(%eax),%ecx
082ec976 +0x0da:  lea    -0x40(%ebp),%eax
082ec979 +0x0dd:  mov    -0x20(%ebp),%edx
082ec97c +0x0e0:  mov    %edx,0x8(%esp)
082ec980 +0x0e4:  mov    %ecx,0x4(%esp)
082ec984 +0x0e8:  mov    %eax,(%esp)
082ec987 +0x0eb:  call   08a59c6e <_ZN20PowerParameterScript10GetPenaltyEi>  ; PowerParameterScript::GetPenalty(int)
082ec98c +0x0f0:  sub    $0x4,%esp
082ec98f +0x0f3:  mov    -0x34(%ebp),%eax
082ec992 +0x0f6:  mov    %eax,-0x1c(%ebp)
082ec995 +0x0f9:  cmpl   $0x0,-0x10(%ebp)
082ec999 +0x0fd:  je     082ec9ec <+0x150>
082ec99b +0x0ff:  mov    -0x10(%ebp),%eax
082ec99e +0x102:  mov    %eax,(%esp)
082ec9a1 +0x105:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082ec9a6 +0x10a:  mov    %eax,-0x14(%ebp)
082ec9a9 +0x10d:  cmpl   $0x4,-0x14(%ebp)
082ec9ad +0x111:  jle    082ec9ec <+0x150>
082ec9af +0x113:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ec9b4 +0x118:  lea    0xa628(%eax),%edx
082ec9ba +0x11e:  mov    -0x14(%ebp),%eax
082ec9bd +0x121:  mov    %eax,0x4(%esp)
082ec9c1 +0x125:  mov    %edx,(%esp)
082ec9c4 +0x128:  call   08a59d58 <_ZN20PowerParameterScript13GetBreakBonusEi>  ; PowerParameterScript::GetBreakBonus(int)
082ec9c9 +0x12d:  mov    %eax,-0x18(%ebp)
082ec9cc +0x130:  mov    -0x14(%ebp),%eax
082ec9cf +0x133:  mov    %eax,0xc(%esp)
082ec9d3 +0x137:  mov    -0x10(%ebp),%eax
082ec9d6 +0x13a:  mov    %eax,0x8(%esp)
082ec9da +0x13e:  mov    0xc(%ebp),%eax
082ec9dd +0x141:  mov    %eax,0x4(%esp)
082ec9e1 +0x145:  mov    0x8(%ebp),%eax
082ec9e4 +0x148:  mov    %eax,(%esp)
082ec9e7 +0x14b:  call   082ecaee <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i>  ; pvp_assault::CAssaultPlace::_SendHoldVictory(CUser*, CUser*, int)
082ec9ec +0x150:  mov    -0x18(%ebp),%eax
082ec9ef +0x153:  mov    %eax,0x14(%esp)
082ec9f3 +0x157:  mov    -0x14(%ebp),%eax
082ec9f6 +0x15a:  mov    %eax,0x10(%esp)
082ec9fa +0x15e:  mov    -0x1c(%ebp),%eax
082ec9fd +0x161:  mov    %eax,0xc(%esp)
082eca01 +0x165:  mov    -0x20(%ebp),%eax
082eca04 +0x168:  mov    %eax,0x8(%esp)
082eca08 +0x16c:  mov    0xc(%ebp),%eax
082eca0b +0x16f:  mov    %eax,0x4(%esp)
082eca0f +0x173:  mov    0x8(%ebp),%eax
082eca12 +0x176:  mov    %eax,(%esp)
082eca15 +0x179:  call   082ecdbc <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii>  ; pvp_assault::CAssaultPlace::_SendVictoryBonus(CUser*, int, int, int, int)
082eca1a +0x17e:  jmp    082ecae0 <+0x244>
082eca1f +0x183:  cmpl   $0x0,-0x10(%ebp)
082eca23 +0x187:  je     082ecae0 <+0x244>
082eca29 +0x18d:  mov    -0x10(%ebp),%eax
082eca2c +0x190:  mov    %eax,(%esp)
082eca2f +0x193:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082eca34 +0x198:  mov    %eax,-0x20(%ebp)
082eca37 +0x19b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082eca3c +0x1a0:  lea    0xa628(%eax),%ecx
082eca42 +0x1a6:  lea    -0x30(%ebp),%eax
082eca45 +0x1a9:  mov    -0x20(%ebp),%edx
082eca48 +0x1ac:  mov    %edx,0x8(%esp)
082eca4c +0x1b0:  mov    %ecx,0x4(%esp)
082eca50 +0x1b4:  mov    %eax,(%esp)
082eca53 +0x1b7:  call   08a59c6e <_ZN20PowerParameterScript10GetPenaltyEi>  ; PowerParameterScript::GetPenalty(int)
082eca58 +0x1bc:  sub    $0x4,%esp
082eca5b +0x1bf:  mov    -0x24(%ebp),%eax
082eca5e +0x1c2:  mov    %eax,-0x1c(%ebp)
082eca61 +0x1c5:  mov    0xc(%ebp),%eax
082eca64 +0x1c8:  mov    %eax,(%esp)
082eca67 +0x1cb:  call   0868856c <_ZN5CUser23GetPowerWarPartyVictoryEv>  ; CUser::GetPowerWarPartyVictory()
082eca6c +0x1d0:  mov    %eax,-0x14(%ebp)
082eca6f +0x1d3:  cmpl   $0x4,-0x14(%ebp)
082eca73 +0x1d7:  jle    082ecab2 <+0x216>
082eca75 +0x1d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082eca7a +0x1de:  lea    0xa628(%eax),%edx
082eca80 +0x1e4:  mov    -0x14(%ebp),%eax
082eca83 +0x1e7:  mov    %eax,0x4(%esp)
082eca87 +0x1eb:  mov    %edx,(%esp)
082eca8a +0x1ee:  call   08a59d58 <_ZN20PowerParameterScript13GetBreakBonusEi>  ; PowerParameterScript::GetBreakBonus(int)
082eca8f +0x1f3:  mov    %eax,-0x18(%ebp)
082eca92 +0x1f6:  mov    -0x14(%ebp),%eax
082eca95 +0x1f9:  mov    %eax,0xc(%esp)
082eca99 +0x1fd:  mov    0xc(%ebp),%eax
082eca9c +0x200:  mov    %eax,0x8(%esp)
082ecaa0 +0x204:  mov    -0x10(%ebp),%eax
082ecaa3 +0x207:  mov    %eax,0x4(%esp)
082ecaa7 +0x20b:  mov    0x8(%ebp),%eax
082ecaaa +0x20e:  mov    %eax,(%esp)
082ecaad +0x211:  call   082ecaee <_ZN11pvp_assault13CAssaultPlace16_SendHoldVictoryEP5CUserS2_i>  ; pvp_assault::CAssaultPlace::_SendHoldVictory(CUser*, CUser*, int)
082ecab2 +0x216:  mov    -0x18(%ebp),%eax
082ecab5 +0x219:  mov    %eax,0x14(%esp)
082ecab9 +0x21d:  mov    -0x14(%ebp),%eax
082ecabc +0x220:  mov    %eax,0x10(%esp)
082ecac0 +0x224:  mov    -0x1c(%ebp),%eax
082ecac3 +0x227:  mov    %eax,0xc(%esp)
082ecac7 +0x22b:  mov    -0x20(%ebp),%eax
082ecaca +0x22e:  mov    %eax,0x8(%esp)
082ecace +0x232:  mov    -0x10(%ebp),%eax
082ecad1 +0x235:  mov    %eax,0x4(%esp)
082ecad5 +0x239:  mov    0x8(%ebp),%eax
082ecad8 +0x23c:  mov    %eax,(%esp)
082ecadb +0x23f:  call   082ecdbc <_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii>  ; pvp_assault::CAssaultPlace::_SendVictoryBonus(CUser*, int, int, int, int)
082ecae0 +0x244:  mov    -0x18(%ebp),%eax
082ecae3 +0x247:  mov    -0x1c(%ebp),%edx
082ecae6 +0x24a:  lea    (%edx,%eax,1),%eax
082ecae9 +0x24d:  mov    -0x4(%ebp),%ebx
082ecaec +0x250:  leave
082ecaed +0x251:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_VictoryBonus @ 0x82ec89c

/* pvp_assault::CAssaultPlace::_VictoryBonus(CUser*, char) */

int __thiscall
pvp_assault::CAssaultPlace::_VictoryBonus(CAssaultPlace *this,CUser *param_1,char param_2)

{
  char cVar1;
  char cVar2;
  CUser *this_00;
  int iVar3;
  undefined1 local_44 [12];
  int local_38;
  undefined1 local_34 [12];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CUser *local_14;
  int local_10;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = (CUser *)0x0;
  local_10 = 0;
  do {
    if (7 < local_10) {
LAB_082ec944:
      cVar2 = CUser::getPowerSide(param_1);
      if (cVar2 == param_2) {
        local_24 = CUser::GetPowerWarPartyVictory(param_1);
        G_CDataManager();
        PowerParameterScript::GetPenalty((int)local_44);
        local_20 = local_38;
        if (local_14 != (CUser *)0x0) {
          local_18 = CUser::GetPowerWarPartyVictory(local_14);
          if (4 < local_18) {
            iVar3 = G_CDataManager();
            local_1c = PowerParameterScript::GetBreakBonus
                                 ((PowerParameterScript *)(iVar3 + 0xa628),local_18);
            _SendHoldVictory(this,param_1,local_14,local_18);
          }
        }
        _SendVictoryBonus(this,param_1,local_24,local_20,local_18,local_1c);
      }
      else if (local_14 != (CUser *)0x0) {
        local_24 = CUser::GetPowerWarPartyVictory(local_14);
        G_CDataManager();
        PowerParameterScript::GetPenalty((int)local_34);
        local_20 = local_28;
        local_18 = CUser::GetPowerWarPartyVictory(param_1);
        if (4 < local_18) {
          iVar3 = G_CDataManager();
          local_1c = PowerParameterScript::GetBreakBonus
                               ((PowerParameterScript *)(iVar3 + 0xa628),local_18);
          _SendHoldVictory(this,local_14,param_1,local_18);
        }
        _SendVictoryBonus(this,local_14,local_24,local_20,local_18,local_1c);
      }
      return local_20 + local_1c;
    }
    iVar3 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
    if (iVar3 != 0) {
      cVar2 = CUser::getPowerSide(param_1);
      this_00 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      cVar1 = CUser::getPowerSide(this_00);
      if (cVar2 != cVar1) {
        local_14 = (CUser *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
        goto LAB_082ec944;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
