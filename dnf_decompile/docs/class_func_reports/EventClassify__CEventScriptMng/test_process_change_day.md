# test_process_change_day

`_ZN13EventClassify15CEventScriptMng23test_process_change_dayEi`

`EventClassify::CEventScriptMng::test_process_change_day(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810cc70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810cc70  _ZN13EventClassify15CEventScriptMng23test_process_change_dayEi
#           EventClassify::CEventScriptMng::test_process_change_day(int)
# range [0x0810cc70, 0x0810cdaf]
0810cc70 +0x000:  push   %ebp
0810cc71 +0x001:  mov    %esp,%ebp
0810cc73 +0x003:  push   %ebx
0810cc74 +0x004:  sub    $0x24,%esp
0810cc77 +0x007:  cmpl   $0x132daaf,0xc(%ebp)
0810cc7e +0x00e:  jle    0810cda9 <+0x139>
0810cc84 +0x014:  mov    0x8(%ebp),%eax
0810cc87 +0x017:  mov    0xc(%ebp),%edx
0810cc8a +0x01a:  mov    %edx,0x48(%eax)
0810cc8d +0x01d:  mov    0xc(%ebp),%ecx
0810cc90 +0x020:  mov    $0x51eb851f,%edx
0810cc95 +0x025:  mov    %ecx,%eax
0810cc97 +0x027:  imul   %edx
0810cc99 +0x029:  sar    $0x5,%edx
0810cc9c +0x02c:  mov    %ecx,%eax
0810cc9e +0x02e:  sar    $0x1f,%eax
0810cca1 +0x031:  mov    %edx,%ebx
0810cca3 +0x033:  sub    %eax,%ebx
0810cca5 +0x035:  mov    %ebx,%eax
0810cca7 +0x037:  imul   $0x64,%eax,%eax
0810ccaa +0x03a:  mov    %ecx,%edx
0810ccac +0x03c:  sub    %eax,%edx
0810ccae +0x03e:  mov    %edx,%eax
0810ccb0 +0x040:  mov    %eax,%edx
0810ccb2 +0x042:  mov    0x8(%ebp),%eax
0810ccb5 +0x045:  mov    %dl,0x4c(%eax)
0810ccb8 +0x048:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0810ccbd +0x04d:  lea    0x134(%eax),%edx
0810ccc3 +0x053:  lea    -0x18(%ebp),%eax
0810ccc6 +0x056:  mov    %edx,0x4(%esp)
0810ccca +0x05a:  mov    %eax,(%esp)
0810cccd +0x05d:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
0810ccd2 +0x062:  sub    $0x4,%esp
0810ccd5 +0x065:  jmp    0810cd70 <+0x100>
0810ccda +0x06a:  lea    -0x18(%ebp),%eax
0810ccdd +0x06d:  mov    %eax,(%esp)
0810cce0 +0x070:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
0810cce5 +0x075:  mov    0x4(%eax),%eax
0810cce8 +0x078:  mov    %eax,-0xc(%ebp)
0810cceb +0x07b:  cmpl   $0x0,-0xc(%ebp)
0810ccef +0x07f:  je     0810cd08 <+0x98>
0810ccf1 +0x081:  mov    -0xc(%ebp),%eax
0810ccf4 +0x084:  mov    %eax,(%esp)
0810ccf7 +0x087:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0810ccfc +0x08c:  cmp    $0x2,%eax
0810ccff +0x08f:  jle    0810cd08 <+0x98>
0810cd01 +0x091:  mov    $0x1,%eax
0810cd06 +0x096:  jmp    0810cd0d <+0x9d>
0810cd08 +0x098:  mov    $0x0,%eax
0810cd0d +0x09d:  test   %al,%al
0810cd0f +0x09f:  je     0810cd53 <+0xe3>
0810cd11 +0x0a1:  movl   $0x0,0x4(%esp)
0810cd19 +0x0a9:  mov    -0xc(%ebp),%eax
0810cd1c +0x0ac:  mov    %eax,(%esp)
0810cd1f +0x0af:  call   08657ada <_ZN5CUser14RecoverFatigueEi>  ; CUser::RecoverFatigue(int)
0810cd24 +0x0b4:  mov    -0xc(%ebp),%eax
0810cd27 +0x0b7:  mov    %eax,(%esp)
0810cd2a +0x0ba:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0810cd2f +0x0bf:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0810cd34 +0x0c4:  mov    %eax,(%esp)
0810cd37 +0x0c7:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
0810cd3c +0x0cc:  movl   $0x1,0x8(%esp)
0810cd44 +0x0d4:  mov    -0xc(%ebp),%edx
0810cd47 +0x0d7:  mov    %edx,0x4(%esp)
0810cd4b +0x0db:  mov    %eax,(%esp)
0810cd4e +0x0de:  call   0810c40e <_ZN13EventClassify15CEventScriptMng20send_event_init_dataEP5CUserb>  ; EventClassify::CEventScriptMng::send_event_init_data(CUser*, bool)
0810cd53 +0x0e3:  lea    -0x10(%ebp),%eax
0810cd56 +0x0e6:  movl   $0x0,0x8(%esp)
0810cd5e +0x0ee:  lea    -0x18(%ebp),%edx
0810cd61 +0x0f1:  mov    %edx,0x4(%esp)
0810cd65 +0x0f5:  mov    %eax,(%esp)
0810cd68 +0x0f8:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
0810cd6d +0x0fd:  sub    $0x4,%esp
0810cd70 +0x100:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0810cd75 +0x105:  lea    0x134(%eax),%edx
0810cd7b +0x10b:  lea    -0x14(%ebp),%eax
0810cd7e +0x10e:  mov    %edx,0x4(%esp)
0810cd82 +0x112:  mov    %eax,(%esp)
0810cd85 +0x115:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
0810cd8a +0x11a:  sub    $0x4,%esp
0810cd8d +0x11d:  lea    -0x14(%ebp),%eax
0810cd90 +0x120:  mov    %eax,0x4(%esp)
0810cd94 +0x124:  lea    -0x18(%ebp),%eax
0810cd97 +0x127:  mov    %eax,(%esp)
0810cd9a +0x12a:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
0810cd9f +0x12f:  test   %al,%al
0810cda1 +0x131:  jne    0810ccda <+0x6a>
0810cda7 +0x137:  jmp    0810cdaa <+0x13a>
0810cda9 +0x139:  nop
0810cdaa +0x13a:  mov    -0x4(%ebp),%ebx
0810cdad +0x13d:  leave
0810cdae +0x13e:  ret
0810cdaf +0x13f:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::test_process_change_day @ 0x810cc70

/* EventClassify::CEventScriptMng::test_process_change_day(int) */

void __thiscall
EventClassify::CEventScriptMng::test_process_change_day(CEventScriptMng *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CEventScriptMng *this_01;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  if (0x132daaf < param_1) {
    *(int *)(this + 0x48) = param_1;
    this[0x4c] = (CEventScriptMng)((char)param_1 + (char)(param_1 / 100) * -100);
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_1c);
    while( true ) {
      G_GameWorld();
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_18);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar2 == '\0') break;
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
      local_10 = *(CUser **)(iVar3 + 4);
      if ((local_10 == (CUser *)0x0) || (iVar3 = CUser::get_state(local_10), iVar3 < 3)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::RecoverFatigue(local_10,0);
        CUser::SendFatigue(local_10);
        this_00 = (CDataManager *)G_CDataManager();
        this_01 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
        send_event_init_data(this_01,local_10,true);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)local_1c);
    }
  }
  return;
}
```
