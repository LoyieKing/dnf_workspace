# check_rule

`_ZN13User_Teleport10check_ruleERK15STCheckRuleData`

`User_Teleport::check_rule(STCheckRuleData const&)`

| 类 | 地址 |
|---|---|
| `User_Teleport` | `0x0828415e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828415e  _ZN13User_Teleport10check_ruleERK15STCheckRuleData
#           User_Teleport::check_rule(STCheckRuleData const&)
# range [0x0828415e, 0x082842b7]
0828415e +0x000:  push   %ebp
0828415f +0x001:  mov    %esp,%ebp
08284161 +0x003:  push   %ebx
08284162 +0x004:  sub    $0x24,%esp
08284165 +0x007:  mov    0x8(%ebp),%eax
08284168 +0x00a:  mov    0xc(%ebp),%edx
0828416b +0x00d:  mov    %edx,0x4(%esp)
0828416f +0x011:  mov    %eax,(%esp)
08284172 +0x014:  call   08283d82 <_ZN8Teleport10check_ruleERK15STCheckRuleData>  ; Teleport::check_rule(STCheckRuleData const&)
08284177 +0x019:  mov    %eax,-0x14(%ebp)
0828417a +0x01c:  cmpl   $0x0,-0x14(%ebp)
0828417e +0x020:  je     08284188 <+0x2a>
08284180 +0x022:  mov    -0x14(%ebp),%eax
08284183 +0x025:  jmp    082842b2 <+0x154>
08284188 +0x02a:  movl   $0x0,-0x10(%ebp)
0828418f +0x031:  mov    0xc(%ebp),%eax
08284192 +0x034:  mov    (%eax),%eax
08284194 +0x036:  movzwl %ax,%ebx
08284197 +0x039:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0828419c +0x03e:  mov    %ebx,0x4(%esp)
082841a0 +0x042:  mov    %eax,(%esp)
082841a3 +0x045:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
082841a8 +0x04a:  mov    %eax,-0x10(%ebp)
082841ab +0x04d:  cmpl   $0x0,-0x10(%ebp)
082841af +0x051:  jne    082841bb <+0x5d>
082841b1 +0x053:  mov    $0x15,%eax
082841b6 +0x058:  jmp    082842b2 <+0x154>
082841bb +0x05d:  mov    -0x10(%ebp),%eax
082841be +0x060:  mov    %eax,(%esp)
082841c1 +0x063:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082841c6 +0x068:  cmp    $0x3,%eax
082841c9 +0x06b:  setne  %al
082841cc +0x06e:  test   %al,%al
082841ce +0x070:  je     082841da <+0x7c>
082841d0 +0x072:  mov    $0x4,%eax
082841d5 +0x077:  jmp    082842b2 <+0x154>
082841da +0x07c:  mov    -0x10(%ebp),%eax
082841dd +0x07f:  mov    %eax,(%esp)
082841e0 +0x082:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082841e5 +0x087:  cmp    $0x7,%al
082841e7 +0x089:  je     08284207 <+0xa9>
082841e9 +0x08b:  mov    -0x10(%ebp),%eax
082841ec +0x08e:  mov    %eax,(%esp)
082841ef +0x091:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
082841f4 +0x096:  cmp    $0x8,%al
082841f6 +0x098:  je     08284207 <+0xa9>
082841f8 +0x09a:  mov    -0x10(%ebp),%eax
082841fb +0x09d:  mov    %eax,(%esp)
082841fe +0x0a0:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08284203 +0x0a5:  cmp    $0xa,%al
08284205 +0x0a7:  jne    0828420e <+0xb0>
08284207 +0x0a9:  mov    $0x1,%eax
0828420c +0x0ae:  jmp    08284213 <+0xb5>
0828420e +0x0b0:  mov    $0x0,%eax
08284213 +0x0b5:  test   %al,%al
08284215 +0x0b7:  je     08284221 <+0xc3>
08284217 +0x0b9:  mov    $0x4,%eax
0828421c +0x0be:  jmp    082842b2 <+0x154>
08284221 +0x0c3:  movl   $0x0,0x4(%esp)
08284229 +0x0cb:  mov    -0x10(%ebp),%eax
0828422c +0x0ce:  mov    %eax,(%esp)
0828422f +0x0d1:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08284234 +0x0d6:  mov    %eax,%ebx
08284236 +0x0d8:  mov    -0x10(%ebp),%eax
08284239 +0x0db:  mov    %eax,(%esp)
0828423c +0x0de:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08284241 +0x0e3:  movsbl %al,%eax
08284244 +0x0e6:  mov    %ebx,0x4(%esp)
08284248 +0x0ea:  mov    %eax,(%esp)
0828424b +0x0ed:  call   08285e14 <_ZN24CHackLog_InvalidAreaMove14checkSeriaRoomEii>  ; CHackLog_InvalidAreaMove::checkSeriaRoom(int, int)
08284250 +0x0f2:  test   %al,%al
08284252 +0x0f4:  je     0828425b <+0xfd>
08284254 +0x0f6:  mov    $0x4,%eax
08284259 +0x0fb:  jmp    082842b2 <+0x154>
0828425b +0x0fd:  mov    -0x10(%ebp),%eax
0828425e +0x100:  mov    %eax,(%esp)
08284261 +0x103:  call   0822f6d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d7c
08284266 +0x108:  test   %eax,%eax
08284268 +0x10a:  setne  %al
0828426b +0x10d:  test   %al,%al
0828426d +0x10f:  je     08284276 <+0x118>
0828426f +0x111:  mov    $0x9c,%eax
08284274 +0x116:  jmp    082842b2 <+0x154>
08284276 +0x118:  mov    -0x10(%ebp),%eax
08284279 +0x11b:  mov    %eax,(%esp)
0828427c +0x11e:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08284281 +0x123:  mov    %eax,-0xc(%ebp)
08284284 +0x126:  cmpl   $0x0,-0xc(%ebp)
08284288 +0x12a:  je     082842ad <+0x14f>
0828428a +0x12c:  mov    -0xc(%ebp),%eax
0828428d +0x12f:  mov    %eax,(%esp)
08284290 +0x132:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
08284295 +0x137:  mov    %eax,(%esp)
08284298 +0x13a:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
0828429d +0x13f:  cmp    $0xff,%al
0828429f +0x141:  setne  %al
082842a2 +0x144:  test   %al,%al
082842a4 +0x146:  je     082842ad <+0x14f>
082842a6 +0x148:  mov    $0x9e,%eax
082842ab +0x14d:  jmp    082842b2 <+0x154>
082842ad +0x14f:  mov    $0x0,%eax
082842b2 +0x154:  add    $0x24,%esp
082842b5 +0x157:  pop    %ebx
082842b6 +0x158:  pop    %ebp
082842b7 +0x159:  ret
```

## 反编译 C

```c
// User_Teleport::check_rule @ 0x828415e

/* User_Teleport::check_rule(STCheckRuleData const&) */

int __thiscall User_Teleport::check_rule(User_Teleport *this,STCheckRuleData *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  GameWorld *this_00;
  CUser *this_01;
  CParty *this_02;
  CPartyTelePort *this_03;
  
  iVar4 = Teleport::check_rule((Teleport *)this,param_1);
  if (iVar4 == 0) {
    uVar1 = *(undefined4 *)param_1;
    this_00 = (GameWorld *)G_GameWorld();
    this_01 = (CUser *)GameWorld::find_from_world(this_00,(ushort)uVar1);
    if (this_01 == (CUser *)0x0) {
      iVar4 = 0x15;
    }
    else {
      iVar4 = CUser::get_state(this_01);
      if (iVar4 == 3) {
        cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01);
        if (((cVar3 == '\a') ||
            (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01), cVar3 == '\b'))
           || (cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01), cVar3 == '\n')
           ) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (bVar2) {
          iVar4 = 4;
        }
        else {
          iVar4 = CUser::get_area(this_01,false);
          cVar3 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)this_01);
          cVar3 = CHackLog_InvalidAreaMove::checkSeriaRoom((int)cVar3,iVar4);
          if (cVar3 == '\0') {
            iVar4 = CUserCharacInfo::GetAssaultPlace((CUserCharacInfo *)this_01);
            if (iVar4 == 0) {
              this_02 = (CParty *)CUser::GetParty(this_01);
              if (this_02 != (CParty *)0x0) {
                this_03 = (CPartyTelePort *)CParty::GetPartyTelePort(this_02);
                cVar3 = CPartyTelePort::get_teleport_state(this_03);
                if (cVar3 != -1) {
                  return 0x9e;
                }
              }
              iVar4 = 0;
            }
            else {
              iVar4 = 0x9c;
            }
          }
          else {
            iVar4 = 4;
          }
        }
      }
      else {
        iVar4 = 4;
      }
    }
  }
  return iVar4;
}
```
