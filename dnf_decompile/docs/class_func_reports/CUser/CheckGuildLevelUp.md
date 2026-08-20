# CheckGuildLevelUp

`_ZN5CUser17CheckGuildLevelUpERj`

`CUser::CheckGuildLevelUp(unsigned int&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0866c27e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0866c27e  _ZN5CUser17CheckGuildLevelUpERj
#           CUser::CheckGuildLevelUp(unsigned int&)
# range [0x0866c27e, 0x0866c413]
0866c27e +0x000:  push   %ebp
0866c27f +0x001:  mov    %esp,%ebp
0866c281 +0x003:  push   %esi
0866c282 +0x004:  push   %ebx
0866c283 +0x005:  sub    $0x30,%esp
0866c286 +0x008:  mov    0x8(%ebp),%eax
0866c289 +0x00b:  mov    %eax,(%esp)
0866c28c +0x00e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0866c291 +0x013:  test   %eax,%eax
0866c293 +0x015:  sete   %al
0866c296 +0x018:  test   %al,%al
0866c298 +0x01a:  je     0866c2a4 <+0x26>
0866c29a +0x01c:  mov    $0x22,%eax
0866c29f +0x021:  jmp    0866c40c <+0x18e>
0866c2a4 +0x026:  mov    0x8(%ebp),%eax
0866c2a7 +0x029:  mov    %eax,(%esp)
0866c2aa +0x02c:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
0866c2af +0x031:  xor    $0x1,%eax
0866c2b2 +0x034:  test   %al,%al
0866c2b4 +0x036:  je     0866c2cf <+0x51>
0866c2b6 +0x038:  mov    0x8(%ebp),%eax
0866c2b9 +0x03b:  mov    %eax,(%esp)
0866c2bc +0x03e:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
0866c2c1 +0x043:  xor    $0x1,%eax
0866c2c4 +0x046:  test   %al,%al
0866c2c6 +0x048:  je     0866c2cf <+0x51>
0866c2c8 +0x04a:  mov    $0x1,%eax
0866c2cd +0x04f:  jmp    0866c2d4 <+0x56>
0866c2cf +0x051:  mov    $0x0,%eax
0866c2d4 +0x056:  test   %al,%al
0866c2d6 +0x058:  je     0866c2e2 <+0x64>
0866c2d8 +0x05a:  mov    $0x53,%eax
0866c2dd +0x05f:  jmp    0866c40c <+0x18e>
0866c2e2 +0x064:  mov    0x8(%ebp),%eax
0866c2e5 +0x067:  movzbl 0x8d03b(%eax),%eax
0866c2ec +0x06e:  movzbl %al,%eax
0866c2ef +0x071:  add    $0x1,%eax
0866c2f2 +0x074:  cmp    $0x10,%eax
0866c2f5 +0x077:  jle    0866c301 <+0x83>
0866c2f7 +0x079:  mov    $0x25,%eax
0866c2fc +0x07e:  jmp    0866c40c <+0x18e>
0866c301 +0x083:  mov    0x8(%ebp),%eax
0866c304 +0x086:  movzbl 0x8d03b(%eax),%eax
0866c30b +0x08d:  movzbl %al,%eax
0866c30e +0x090:  lea    0x1(%eax),%ebx
0866c311 +0x093:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866c316 +0x098:  add    $0xa50c,%eax
0866c31b +0x09d:  mov    %ebx,0x4(%esp)
0866c31f +0x0a1:  mov    %eax,(%esp)
0866c322 +0x0a4:  call   08979648 <_ZN20GuildParameterScript20getGuildLevelUpParamEi>  ; GuildParameterScript::getGuildLevelUpParam(int)
0866c327 +0x0a9:  mov    %eax,-0x10(%ebp)
0866c32a +0x0ac:  cmpl   $0x0,-0x10(%ebp)
0866c32e +0x0b0:  jne    0866c381 <+0x103>
0866c330 +0x0b2:  mov    0x8(%ebp),%eax
0866c333 +0x0b5:  movzbl 0x8d03b(%eax),%eax
0866c33a +0x0bc:  movzbl %al,%ebx
0866c33d +0x0bf:  movl   $0x5,0xc(%esp)
0866c345 +0x0c7:  movl   $0x53c2,0x8(%esp)
0866c34d +0x0cf:  movl   $&_ZZN5CUser17CheckGuildLevelUpERjE19__PRETTY_FUNCTION__,0x4(%esp)
0866c355 +0x0d7:  lea    -0x20(%ebp),%eax
0866c358 +0x0da:  mov    %eax,(%esp)
0866c35b +0x0dd:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0866c360 +0x0e2:  mov    %ebx,0x8(%esp)
0866c364 +0x0e6:  movl   $"CUser::CheckGuildLevelUp Guild Param Err(g lev : %d)",0x4(%esp)
0866c36c +0x0ee:  lea    -0x20(%ebp),%eax
0866c36f +0x0f1:  mov    %eax,(%esp)
0866c372 +0x0f4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0866c377 +0x0f9:  mov    $0x22,%eax
0866c37c +0x0fe:  jmp    0866c40c <+0x18e>
0866c381 +0x103:  movl   $0x0,-0xc(%ebp)
0866c388 +0x10a:  mov    0x8(%ebp),%eax
0866c38b +0x10d:  movzwl 0x8d042(%eax),%eax
0866c392 +0x114:  movzwl %ax,%ebx
0866c395 +0x117:  mov    0x8(%ebp),%eax
0866c398 +0x11a:  movzbl 0x8d03b(%eax),%eax
0866c39f +0x121:  movzbl %al,%eax
0866c3a2 +0x124:  lea    0x1(%eax),%esi
0866c3a5 +0x127:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0866c3aa +0x12c:  add    $0xa50c,%eax
0866c3af +0x131:  mov    %ebx,0x8(%esp)
0866c3b3 +0x135:  mov    %esi,0x4(%esp)
0866c3b7 +0x139:  mov    %eax,(%esp)
0866c3ba +0x13c:  call   089797a4 <_ZN20GuildParameterScript15getLevelupPriceEii>  ; GuildParameterScript::getLevelupPrice(int, int)
0866c3bf +0x141:  mov    %eax,-0xc(%ebp)
0866c3c2 +0x144:  mov    -0xc(%ebp),%edx
0866c3c5 +0x147:  mov    0x8(%ebp),%eax
0866c3c8 +0x14a:  mov    0x8d0c0(%eax),%eax
0866c3ce +0x150:  cmp    %eax,%edx
0866c3d0 +0x152:  jbe    0866c3d9 <+0x15b>
0866c3d2 +0x154:  mov    $0x16,%eax
0866c3d7 +0x159:  jmp    0866c40c <+0x18e>
0866c3d9 +0x15b:  mov    -0xc(%ebp),%edx
0866c3dc +0x15e:  mov    0xc(%ebp),%eax
0866c3df +0x161:  mov    %edx,(%eax)
0866c3e1 +0x163:  mov    -0x10(%ebp),%eax
0866c3e4 +0x166:  mov    0x4(%eax),%eax
0866c3e7 +0x169:  mov    %eax,%ebx
0866c3e9 +0x16b:  mov    0x8(%ebp),%eax
0866c3ec +0x16e:  mov    %eax,(%esp)
0866c3ef +0x171:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
0866c3f4 +0x176:  mov    0x29(%eax),%eax
0866c3f7 +0x179:  cmp    %eax,%ebx
0866c3f9 +0x17b:  seta   %al
0866c3fc +0x17e:  test   %al,%al
0866c3fe +0x180:  je     0866c407 <+0x189>
0866c400 +0x182:  mov    $0x54,%eax
0866c405 +0x187:  jmp    0866c40c <+0x18e>
0866c407 +0x189:  mov    $0x0,%eax
0866c40c +0x18e:  add    $0x30,%esp
0866c40f +0x191:  pop    %ebx
0866c410 +0x192:  pop    %esi
0866c411 +0x193:  pop    %ebp
0866c412 +0x194:  ret
0866c413 +0x195:  nop
```

## 反编译 C

```c
// CUser::CheckGuildLevelUp @ 0x866c27e

/* CUser::CheckGuildLevelUp(unsigned int&) */

undefined4 __thiscall CUser::CheckGuildLevelUp(CUser *this,uint *param_1)

{
  CUser CVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  iVar6 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
  if (iVar6 != 0) {
    cVar5 = IsGuildMaster(this);
    if ((cVar5 == '\x01') || (cVar5 = IsSubGuildMaster(this), cVar5 == '\x01')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar7 = 0x53;
    }
    else if ((byte)this[0x8d03b] + 1 < 0x11) {
      CVar1 = this[0x8d03b];
      iVar6 = G_CDataManager();
      local_14 = GuildParameterScript::getGuildLevelUpParam
                           ((GuildParameterScript *)(iVar6 + 0xa50c),(byte)CVar1 + 1);
      if (local_14 == 0) {
        CVar1 = this[0x8d03b];
        cMyTrace::cMyTrace(local_24,"unsigned int CUser::CheckGuildLevelUp(unsigned int&)",0x53c2,5)
        ;
        cMyTrace::operator()
                  (local_24,"CUser::CheckGuildLevelUp Guild Param Err(g lev : %d)",(uint)(byte)CVar1
                  );
        uVar7 = 0x22;
      }
      else {
        local_10 = 0;
        uVar2 = *(ushort *)(this + 0x8d042);
        CVar1 = this[0x8d03b];
        iVar6 = G_CDataManager();
        local_10 = GuildParameterScript::getLevelupPrice
                             ((GuildParameterScript *)(iVar6 + 0xa50c),(byte)CVar1 + 1,(uint)uVar2);
        if (*(uint *)(this + 0x8d0c0) < local_10) {
          uVar7 = 0x16;
        }
        else {
          *param_1 = local_10;
          uVar3 = *(uint *)(local_14 + 4);
          iVar6 = GetGuildDBInfo(this);
          if (*(uint *)(iVar6 + 0x29) < uVar3) {
            uVar7 = 0x54;
          }
          else {
            uVar7 = 0;
          }
        }
      }
    }
    else {
      uVar7 = 0x25;
    }
    return uVar7;
  }
  return 0x22;
}
```
