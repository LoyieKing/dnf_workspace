# process

`_ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Debug_Clear_Quest::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Debug_Clear_Quest` | `0x081df91c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081df91c  _ZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Debug_Clear_Quest::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081df91c, 0x081dfb3f]
081df91c +0x000:  push   %ebp
081df91d +0x001:  mov    %esp,%ebp
081df91f +0x003:  push   %ebx
081df920 +0x004:  sub    $0x54,%esp
081df923 +0x007:  mov    0xc(%ebp),%eax
081df926 +0x00a:  mov    %eax,(%esp)
081df929 +0x00d:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
081df92e +0x012:  xor    $0x1,%eax
081df931 +0x015:  test   %al,%al
081df933 +0x017:  je     081df95e <+0x42>
081df935 +0x019:  movl   $0x0,0xc(%esp)
081df93d +0x021:  movl   $0x0,0x8(%esp)
081df945 +0x029:  movl   $&_ZZN28Dispatcher_Debug_Clear_Quest7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081df94d +0x031:  movl   $0x51f3,(%esp)
081df954 +0x038:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081df959 +0x03d:  jmp    081dfb3a <+0x21e>
081df95e +0x042:  mov    0x10(%ebp),%eax
081df961 +0x045:  mov    %eax,-0x1c(%ebp)
081df964 +0x048:  mov    0x14(%ebp),%eax
081df967 +0x04b:  mov    %eax,-0x18(%ebp)
081df96a +0x04e:  mov    -0x18(%ebp),%eax
081df96d +0x051:  lea    0x4(%eax),%edx
081df970 +0x054:  mov    -0x1c(%ebp),%eax
081df973 +0x057:  mov    %eax,0x4(%esp)
081df977 +0x05b:  mov    %edx,(%esp)
081df97a +0x05e:  call   08235266 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa910>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa910
081df97f +0x063:  movl   $0x0,-0x14(%ebp)
081df986 +0x06a:  movl   $0x0,-0x10(%ebp)
081df98d +0x071:  jmp    081dfb02 <+0x1e6>
081df992 +0x076:  mov    -0x10(%ebp),%eax
081df995 +0x079:  mov    -0x1c(%ebp),%edx
081df998 +0x07c:  add    $0x14,%edx
081df99b +0x07f:  mov    %eax,0x4(%esp)
081df99f +0x083:  mov    %edx,(%esp)
081df9a2 +0x086:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081df9a7 +0x08b:  mov    (%eax),%ebx
081df9a9 +0x08d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081df9ae +0x092:  mov    %ebx,0x4(%esp)
081df9b2 +0x096:  mov    %eax,(%esp)
081df9b5 +0x099:  call   0835fdc6 <_ZNK12CDataManager10find_questEi>  ; CDataManager::find_quest(int) const
081df9ba +0x09e:  mov    %eax,-0xc(%ebp)
081df9bd +0x0a1:  cmpl   $0x0,-0xc(%ebp)
081df9c1 +0x0a5:  jne    081df9cd <+0xb1>
081df9c3 +0x0a7:  mov    $0x1,%eax
081df9c8 +0x0ac:  jmp    081dfb3a <+0x21e>
081df9cd +0x0b1:  cmpl   $0x0,-0xc(%ebp)
081df9d1 +0x0b5:  je     081dfaf7 <+0x1db>
081df9d7 +0x0bb:  mov    0xc(%ebp),%eax
081df9da +0x0be:  mov    %eax,0x4(%esp)
081df9de +0x0c2:  lea    -0x44(%ebp),%eax
081df9e1 +0x0c5:  mov    %eax,(%esp)
081df9e4 +0x0c8:  call   083480b4 <_ZN18stSelectQuestParamC1EP5CUser>  ; stSelectQuestParam::stSelectQuestParam(CUser*)
081df9e9 +0x0cd:  mov    -0xc(%ebp),%eax
081df9ec +0x0d0:  mov    %eax,(%esp)
081df9ef +0x0d3:  call   0822b5e2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c
081df9f4 +0x0d8:  xor    $0x1,%eax
081df9f7 +0x0db:  test   %al,%al
081df9f9 +0x0dd:  jne    081dfafa <+0x1de>
081df9ff +0x0e3:  lea    -0x44(%ebp),%eax
081dfa02 +0x0e6:  mov    %eax,0x4(%esp)
081dfa06 +0x0ea:  mov    -0xc(%ebp),%eax
081dfa09 +0x0ed:  mov    %eax,(%esp)
081dfa0c +0x0f0:  call   08352d86 <_ZNK5Quest14check_possibleERK18stSelectQuestParam>  ; Quest::check_possible(stSelectQuestParam const&) const
081dfa11 +0x0f5:  xor    $0x1,%eax
081dfa14 +0x0f8:  test   %al,%al
081dfa16 +0x0fa:  jne    081dfafd <+0x1e1>
081dfa1c +0x100:  cmpl   $0x0,-0xc(%ebp)
081dfa20 +0x104:  je     081dfafe <+0x1e2>
081dfa26 +0x10a:  mov    -0x10(%ebp),%eax
081dfa29 +0x10d:  mov    -0x1c(%ebp),%edx
081dfa2c +0x110:  add    $0x14,%edx
081dfa2f +0x113:  mov    %eax,0x4(%esp)
081dfa33 +0x117:  mov    %edx,(%esp)
081dfa36 +0x11a:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081dfa3b +0x11f:  mov    (%eax),%eax
081dfa3d +0x121:  mov    %eax,%ebx
081dfa3f +0x123:  mov    0xc(%ebp),%eax
081dfa42 +0x126:  mov    %eax,(%esp)
081dfa45 +0x129:  call   0814aa5e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x7fd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x7fd
081dfa4a +0x12e:  add    $0x4,%eax
081dfa4d +0x131:  mov    %ebx,0x4(%esp)
081dfa51 +0x135:  mov    %eax,(%esp)
081dfa54 +0x138:  call   0808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>  ; WongWork::CQuestClear::setClearedQuest(unsigned int)
081dfa59 +0x13d:  mov    -0xc(%ebp),%eax
081dfa5c +0x140:  movzwl 0x138(%eax),%eax
081dfa63 +0x147:  test   %ax,%ax
081dfa66 +0x14a:  jle    081dfaa5 <+0x189>
081dfa68 +0x14c:  mov    -0x10(%ebp),%eax
081dfa6b +0x14f:  mov    -0x1c(%ebp),%edx
081dfa6e +0x152:  add    $0x14,%edx
081dfa71 +0x155:  mov    %eax,0x4(%esp)
081dfa75 +0x159:  mov    %edx,(%esp)
081dfa78 +0x15c:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081dfa7d +0x161:  mov    (%eax),%edx
081dfa7f +0x163:  mov    -0xc(%ebp),%eax
081dfa82 +0x166:  movzwl 0x138(%eax),%eax
081dfa89 +0x16d:  cwtl
081dfa8a +0x16e:  movl   $0x1,0xc(%esp)
081dfa92 +0x176:  mov    %edx,0x8(%esp)
081dfa96 +0x17a:  mov    %eax,0x4(%esp)
081dfa9a +0x17e:  mov    0xc(%ebp),%eax
081dfa9d +0x181:  mov    %eax,(%esp)
081dfaa0 +0x184:  call   0868ac66 <_ZN5CUser13incQuestPointEiib>  ; CUser::incQuestPoint(int, int, bool)
081dfaa5 +0x189:  mov    -0xc(%ebp),%eax
081dfaa8 +0x18c:  movzwl 0x13a(%eax),%eax
081dfaaf +0x193:  test   %ax,%ax
081dfab2 +0x196:  jle    081dfaf1 <+0x1d5>
081dfab4 +0x198:  mov    -0x10(%ebp),%eax
081dfab7 +0x19b:  mov    -0x1c(%ebp),%edx
081dfaba +0x19e:  add    $0x14,%edx
081dfabd +0x1a1:  mov    %eax,0x4(%esp)
081dfac1 +0x1a5:  mov    %edx,(%esp)
081dfac4 +0x1a8:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
081dfac9 +0x1ad:  mov    (%eax),%edx
081dfacb +0x1af:  mov    -0xc(%ebp),%eax
081dface +0x1b2:  movzwl 0x13a(%eax),%eax
081dfad5 +0x1b9:  cwtl
081dfad6 +0x1ba:  movl   $0x1,0xc(%esp)
081dfade +0x1c2:  mov    %edx,0x8(%esp)
081dfae2 +0x1c6:  mov    %eax,0x4(%esp)
081dfae6 +0x1ca:  mov    0xc(%ebp),%eax
081dfae9 +0x1cd:  mov    %eax,(%esp)
081dfaec +0x1d0:  call   0868af66 <_ZN5CUser13incQuestPieceEiib>  ; CUser::incQuestPiece(int, int, bool)
081dfaf1 +0x1d5:  addl   $0x1,-0x14(%ebp)
081dfaf5 +0x1d9:  jmp    081dfafe <+0x1e2>
081dfaf7 +0x1db:  nop
081dfaf8 +0x1dc:  jmp    081dfafe <+0x1e2>
081dfafa +0x1de:  nop
081dfafb +0x1df:  jmp    081dfafe <+0x1e2>
081dfafd +0x1e1:  nop
081dfafe +0x1e2:  addl   $0x1,-0x10(%ebp)
081dfb02 +0x1e6:  mov    -0x1c(%ebp),%eax
081dfb05 +0x1e9:  mov    0x10(%eax),%eax
081dfb08 +0x1ec:  cmp    -0x10(%ebp),%eax
081dfb0b +0x1ef:  setg   %al
081dfb0e +0x1f2:  test   %al,%al
081dfb10 +0x1f4:  jne    081df992 <+0x76>
081dfb16 +0x1fa:  mov    -0x18(%ebp),%eax
081dfb19 +0x1fd:  mov    -0x14(%ebp),%edx
081dfb1c +0x200:  mov    %edx,0x14(%eax)
081dfb1f +0x203:  mov    0xc(%ebp),%eax
081dfb22 +0x206:  mov    %eax,(%esp)
081dfb25 +0x209:  call   0868ac24 <_ZN5CUser12sendCharacQpEv>  ; CUser::sendCharacQp()
081dfb2a +0x20e:  mov    0xc(%ebp),%eax
081dfb2d +0x211:  mov    %eax,(%esp)
081dfb30 +0x214:  call   0868af2c <_ZN5CUser20sendCharacQuestPieceEv>  ; CUser::sendCharacQuestPiece()
081dfb35 +0x219:  mov    $0x0,%eax
081dfb3a +0x21e:  add    $0x54,%esp
081dfb3d +0x221:  pop    %ebx
081dfb3e +0x222:  pop    %ebp
081dfb3f +0x223:  ret
```

## 反编译 C

```c
// Dispatcher_Debug_Clear_Quest::process @ 0x81df91c

/* Dispatcher_Debug_Clear_Quest::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Debug_Clear_Quest::process
          (Dispatcher_Debug_Clear_Quest *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  stSelectQuestParam local_48 [40];
  MSG_BASE *local_20;
  ParamBase *local_1c;
  int local_18;
  uint local_14;
  Quest *local_10;
  
  cVar2 = CUser::isGMUser(param_1);
  if (cVar2 == '\x01') {
    local_20 = param_2;
    local_1c = param_3;
    MsgClearQuestIndex::operator=((MsgClearQuestIndex *)(param_3 + 4),(MsgClearQuestIndex *)param_2)
    ;
    local_18 = 0;
    for (local_14 = 0; (int)local_14 < *(int *)(local_20 + 0x10); local_14 = local_14 + 1) {
      std::vector<int,std::allocator<int>>::operator[]
                ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14);
      iVar4 = G_CDataManager();
      local_10 = (Quest *)CDataManager::find_quest(iVar4);
      if (local_10 == (Quest *)0x0) {
        return 1;
      }
      if (local_10 != (Quest *)0x0) {
        stSelectQuestParam::stSelectQuestParam(local_48,param_1);
        cVar2 = Quest::exposeQuest(local_10);
        if (((cVar2 == '\x01') &&
            (cVar2 = Quest::check_possible(local_10,local_48), cVar2 == '\x01')) &&
           (local_10 != (Quest *)0x0)) {
          puVar5 = (uint *)std::vector<int,std::allocator<int>>::operator[]
                                     ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14)
          ;
          uVar1 = *puVar5;
          iVar4 = CUser::getCurCharacQuestW(param_1);
          WongWork::CQuestClear::setClearedQuest((CQuestClear *)(iVar4 + 4),uVar1);
          if (0 < *(short *)(local_10 + 0x138)) {
            piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                      ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14
                                      );
            CUser::incQuestPoint(param_1,(int)*(short *)(local_10 + 0x138),*piVar6,true);
          }
          if (0 < *(short *)(local_10 + 0x13a)) {
            piVar6 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                      ((vector<int,std::allocator<int>> *)(local_20 + 0x14),local_14
                                      );
            CUser::incQuestPiece(param_1,(int)*(short *)(local_10 + 0x13a),*piVar6,true);
          }
          local_18 = local_18 + 1;
        }
      }
    }
    *(int *)(local_1c + 0x14) = local_18;
    CUser::sendCharacQp(param_1);
    CUser::sendCharacQuestPiece(param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = LineFunc(0x51f3,
                     "virtual int Dispatcher_Debug_Clear_Quest::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0,0);
  }
  return uVar3;
}
```
