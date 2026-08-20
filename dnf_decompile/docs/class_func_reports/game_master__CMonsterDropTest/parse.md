# parse

`_ZN11game_master16CMonsterDropTest5parseEv`

`game_master::CMonsterDropTest::parse()`

| 类 | 地址 |
|---|---|
| `game_master::CMonsterDropTest` | `0x084ace8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ace8a  _ZN11game_master16CMonsterDropTest5parseEv
#           game_master::CMonsterDropTest::parse()
# range [0x084ace8a, 0x084acf97]
084ace8a +0x000:  push   %ebp
084ace8b +0x001:  mov    %esp,%ebp
084ace8d +0x003:  push   %esi
084ace8e +0x004:  push   %ebx
084ace8f +0x005:  sub    $0x20,%esp
084ace92 +0x008:  mov    0x8(%ebp),%eax
084ace95 +0x00b:  mov    %eax,(%esp)
084ace98 +0x00e:  call   084b4096 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x149>  ; global constructors keyed to game_master::CMacro::Reset()+0x149
084ace9d +0x013:  mov    0x8(%ebp),%eax
084acea0 +0x016:  lea    0xc(%eax),%esi
084acea3 +0x019:  mov    0x8(%ebp),%eax
084acea6 +0x01c:  lea    0x8(%eax),%ebx
084acea9 +0x01f:  mov    0x8(%ebp),%eax
084aceac +0x022:  mov    0x4(%eax),%eax
084aceaf +0x025:  add    $0xc,%eax
084aceb2 +0x028:  mov    %eax,(%esp)
084aceb5 +0x02b:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084aceba +0x030:  mov    %esi,0xc(%esp)
084acebe +0x034:  mov    %ebx,0x8(%esp)
084acec2 +0x038:  movl   $"%d%d",0x4(%esp)
084aceca +0x040:  mov    %eax,(%esp)
084acecd +0x043:  call   0807d9e0 <_init+0x2d8>
084aced2 +0x048:  mov    0x8(%ebp),%eax
084aced5 +0x04b:  mov    %eax,(%esp)
084aced8 +0x04e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084acedd +0x053:  mov    %eax,-0x10(%ebp)
084acee0 +0x056:  cmpl   $0x0,-0x10(%ebp)
084acee4 +0x05a:  je     084acf90 <+0x106>
084aceea +0x060:  mov    -0x10(%ebp),%eax
084aceed +0x063:  mov    %eax,(%esp)
084acef0 +0x066:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
084acef5 +0x06b:  mov    %eax,-0xc(%ebp)
084acef8 +0x06e:  cmpl   $0x0,-0xc(%ebp)
084acefc +0x072:  jne    084acf13 <+0x89>
084acefe +0x074:  movl   $"Party가 없습니다",0x4(%esp)
084acf06 +0x07c:  mov    -0x10(%ebp),%eax
084acf09 +0x07f:  mov    %eax,(%esp)
084acf0c +0x082:  call   084aeac6 <_ZN11game_master12CBoosterTest11SendChatMsgEP5CUserPc>  ; game_master::CBoosterTest::SendChatMsg(CUser*, char*)
084acf11 +0x087:  jmp    084acf91 <+0x107>
084acf13 +0x089:  mov    0x8(%ebp),%eax
084acf16 +0x08c:  mov    0x8(%eax),%eax
084acf19 +0x08f:  cmp    $0x1,%eax
084acf1c +0x092:  je     084acf2a <+0xa0>
084acf1e +0x094:  cmp    $0x1,%eax
084acf21 +0x097:  jb     084acf91 <+0x107>
084acf23 +0x099:  cmp    $0x3,%eax
084acf26 +0x09c:  ja     084acf91 <+0x107>
084acf28 +0x09e:  jmp    084acf7b <+0xf1>
084acf2a +0x0a0:  mov    -0xc(%ebp),%eax
084acf2d +0x0a3:  mov    %eax,(%esp)
084acf30 +0x0a6:  call   084b42a8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x35b>  ; global constructors keyed to game_master::CMacro::Reset()+0x35b
084acf35 +0x0ab:  mov    %eax,(%esp)
084acf38 +0x0ae:  call   084b4710 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x7c3>  ; global constructors keyed to game_master::CMacro::Reset()+0x7c3
084acf3d +0x0b3:  mov    -0xc(%ebp),%eax
084acf40 +0x0b6:  add    $0xb24,%eax
084acf45 +0x0bb:  mov    %eax,(%esp)
084acf48 +0x0be:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
084acf4d +0x0c3:  mov    %eax,%ebx
084acf4f +0x0c5:  mov    -0xc(%ebp),%eax
084acf52 +0x0c8:  mov    %eax,(%esp)
084acf55 +0x0cb:  call   084b42a8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x35b>  ; global constructors keyed to game_master::CMacro::Reset()+0x35b
084acf5a +0x0d0:  mov    %ebx,0x4(%esp)
084acf5e +0x0d4:  mov    %eax,(%esp)
084acf61 +0x0d7:  call   084b472c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x7df>  ; global constructors keyed to game_master::CMacro::Reset()+0x7df
084acf66 +0x0dc:  movl   $0x1,0x4(%esp)
084acf6e +0x0e4:  mov    -0xc(%ebp),%eax
084acf71 +0x0e7:  mov    %eax,(%esp)
084acf74 +0x0ea:  call   084b428c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x33f>  ; global constructors keyed to game_master::CMacro::Reset()+0x33f
084acf79 +0x0ef:  jmp    084acf91 <+0x107>
084acf7b +0x0f1:  movl   $0x0,0x4(%esp)
084acf83 +0x0f9:  mov    -0xc(%ebp),%eax
084acf86 +0x0fc:  mov    %eax,(%esp)
084acf89 +0x0ff:  call   084b428c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x33f>  ; global constructors keyed to game_master::CMacro::Reset()+0x33f
084acf8e +0x104:  jmp    084acf91 <+0x107>
084acf90 +0x106:  nop
084acf91 +0x107:  add    $0x20,%esp
084acf94 +0x10a:  pop    %ebx
084acf95 +0x10b:  pop    %esi
084acf96 +0x10c:  pop    %ebp
084acf97 +0x10d:  ret
```

## 反编译 C

```c
// game_master::CMonsterDropTest::parse @ 0x84ace8a

/* game_master::CMonsterDropTest::parse() */

void __thiscall game_master::CMonsterDropTest::parse(CMonsterDropTest *this)

{
  uint uVar1;
  char *__s;
  CUser *this_00;
  CParty *this_01;
  vector<MapInfo,std::allocator<MapInfo>> *pvVar2;
  MapInfo *pMVar3;
  
  clear(this);
  __s = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  sscanf(__s,"%d%d",this + 8,this + 0xc);
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUser *)0x0) {
    this_01 = (CParty *)CUser::GetParty(this_00);
    if (this_01 == (CParty *)0x0) {
      CBoosterTest::SendChatMsg(this_00,&DAT_08c7fd9c);
    }
    else {
      uVar1 = *(uint *)(this + 8);
      if (uVar1 == 1) {
        pvVar2 = (vector<MapInfo,std::allocator<MapInfo>> *)CParty::getPassedMapInfoList(this_01);
        std::vector<MapInfo,std::allocator<MapInfo>>::clear(pvVar2);
        pMVar3 = (MapInfo *)CBattle_Field::GetCurrentMapInfo((CBattle_Field *)(this_01 + 0xb24));
        pvVar2 = (vector<MapInfo,std::allocator<MapInfo>> *)CParty::getPassedMapInfoList(this_01);
        std::vector<MapInfo,std::allocator<MapInfo>>::push_back(pvVar2,pMVar3);
        CParty::setDungeonMapSaving(this_01,true);
      }
      else if ((uVar1 != 0) && (uVar1 < 4)) {
        CParty::setDungeonMapSaving(this_01,false);
      }
    }
  }
  return;
}
```
