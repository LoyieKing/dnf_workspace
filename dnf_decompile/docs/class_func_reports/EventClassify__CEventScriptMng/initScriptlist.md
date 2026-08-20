# initScriptlist

`_ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList`

`EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList&)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810ba7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ba7a  _ZN13EventClassify15CEventScriptMng14initScriptlistER19InGameEventInfoList
#           EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList&)
# range [0x0810ba7a, 0x0810bd13]
0810ba7a +0x000:  push   %ebp
0810ba7b +0x001:  mov    %esp,%ebp
0810ba7d +0x003:  push   %esi
0810ba7e +0x004:  push   %ebx
0810ba7f +0x005:  sub    $0x30,%esp
0810ba82 +0x008:  mov    0xc(%ebp),%edx
0810ba85 +0x00b:  lea    -0x18(%ebp),%eax
0810ba88 +0x00e:  mov    %edx,0x4(%esp)
0810ba8c +0x012:  mov    %eax,(%esp)
0810ba8f +0x015:  call   081117ba <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xccc>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xccc
0810ba94 +0x01a:  sub    $0x4,%esp
0810ba97 +0x01d:  mov    0xc(%ebp),%edx
0810ba9a +0x020:  lea    -0x1c(%ebp),%eax
0810ba9d +0x023:  mov    %edx,0x4(%esp)
0810baa1 +0x027:  mov    %eax,(%esp)
0810baa4 +0x02a:  call   081117e0 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xcf2>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xcf2
0810baa9 +0x02f:  sub    $0x4,%esp
0810baac +0x032:  jmp    0810bcdf <+0x265>
0810bab1 +0x037:  lea    -0x18(%ebp),%eax
0810bab4 +0x03a:  mov    %eax,(%esp)
0810bab7 +0x03d:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810babc +0x042:  mov    0x18(%eax),%eax
0810babf +0x045:  test   %eax,%eax
0810bac1 +0x047:  setne  %al
0810bac4 +0x04a:  test   %al,%al
0810bac6 +0x04c:  je     0810bcd4 <+0x25a>
0810bacc +0x052:  lea    -0xd(%ebp),%eax
0810bacf +0x055:  mov    %eax,(%esp)
0810bad2 +0x058:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0810bad7 +0x05d:  lea    -0x18(%ebp),%eax
0810bada +0x060:  mov    %eax,(%esp)
0810badd +0x063:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bae2 +0x068:  add    $0xc,%eax
0810bae5 +0x06b:  mov    %eax,(%esp)
0810bae8 +0x06e:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810baed +0x073:  lea    -0xd(%ebp),%edx
0810baf0 +0x076:  mov    %edx,0x8(%esp)
0810baf4 +0x07a:  mov    %eax,0x4(%esp)
0810baf8 +0x07e:  lea    -0x14(%ebp),%eax
0810bafb +0x081:  mov    %eax,(%esp)
0810bafe +0x084:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0810bb03 +0x089:  lea    -0x18(%ebp),%eax
0810bb06 +0x08c:  mov    %eax,(%esp)
0810bb09 +0x08f:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bb0e +0x094:  mov    0x4(%eax),%eax
0810bb11 +0x097:  mov    0x8(%ebp),%edx
0810bb14 +0x09a:  lea    0x18(%edx),%ecx
0810bb17 +0x09d:  lea    -0x14(%ebp),%edx
0810bb1a +0x0a0:  mov    %edx,0x8(%esp)
0810bb1e +0x0a4:  mov    %eax,0x4(%esp)
0810bb22 +0x0a8:  mov    %ecx,(%esp)
0810bb25 +0x0ab:  call   08982f38 <_ZN23InGameEventScriptLoader14getEventScriptEiRKSs>  ; InGameEventScriptLoader::getEventScript(int, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
0810bb2a +0x0b0:  mov    %eax,-0xc(%ebp)
0810bb2d +0x0b3:  lea    -0x14(%ebp),%eax
0810bb30 +0x0b6:  mov    %eax,(%esp)
0810bb33 +0x0b9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0810bb38 +0x0be:  jmp    0810bb6a <+0xf0>
0810bb3a +0x0c0:  mov    %edx,%ebx
0810bb3c +0x0c2:  mov    %eax,%esi
0810bb3e +0x0c4:  lea    -0x14(%ebp),%eax
0810bb41 +0x0c7:  mov    %eax,(%esp)
0810bb44 +0x0ca:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0810bb49 +0x0cf:  mov    %esi,%eax
0810bb4b +0x0d1:  mov    %ebx,%edx
0810bb4d +0x0d3:  jmp    0810bb4f <+0xd5>
0810bb4f +0x0d5:  mov    %edx,%ebx
0810bb51 +0x0d7:  mov    %eax,%esi
0810bb53 +0x0d9:  lea    -0xd(%ebp),%eax
0810bb56 +0x0dc:  mov    %eax,(%esp)
0810bb59 +0x0df:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0810bb5e +0x0e4:  mov    %esi,%eax
0810bb60 +0x0e6:  mov    %ebx,%edx
0810bb62 +0x0e8:  mov    %eax,(%esp)
0810bb65 +0x0eb:  call   08ae3750 <_Unwind_Resume>
0810bb6a +0x0f0:  lea    -0xd(%ebp),%eax
0810bb6d +0x0f3:  mov    %eax,(%esp)
0810bb70 +0x0f6:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0810bb75 +0x0fb:  cmpl   $0x0,-0xc(%ebp)
0810bb79 +0x0ff:  jne    0810bb85 <+0x10b>
0810bb7b +0x101:  mov    $0x0,%eax
0810bb80 +0x106:  jmp    0810bd09 <+0x28f>
0810bb85 +0x10b:  lea    -0x18(%ebp),%eax
0810bb88 +0x10e:  mov    %eax,(%esp)
0810bb8b +0x111:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bb90 +0x116:  lea    0x4(%eax),%edx
0810bb93 +0x119:  mov    0x8(%ebp),%eax
0810bb96 +0x11c:  add    $0x30,%eax
0810bb99 +0x11f:  mov    %edx,0x4(%esp)
0810bb9d +0x123:  mov    %eax,(%esp)
0810bba0 +0x126:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810bba5 +0x12b:  mov    %eax,%ebx
0810bba7 +0x12d:  lea    -0x18(%ebp),%eax
0810bbaa +0x130:  mov    %eax,(%esp)
0810bbad +0x133:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bbb2 +0x138:  mov    0x4(%eax),%eax
0810bbb5 +0x13b:  movl   $0x0,0x8(%esp)
0810bbbd +0x143:  mov    %eax,0x4(%esp)
0810bbc1 +0x147:  mov    0x8(%ebp),%eax
0810bbc4 +0x14a:  mov    %eax,(%esp)
0810bbc7 +0x14d:  call   0810b402 <_ZN13EventClassify15CEventScriptMng19create_event_entityEib>  ; EventClassify::CEventScriptMng::create_event_entity(int, bool)
0810bbcc +0x152:  mov    %eax,(%ebx)
0810bbce +0x154:  lea    -0x18(%ebp),%eax
0810bbd1 +0x157:  mov    %eax,(%esp)
0810bbd4 +0x15a:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bbd9 +0x15f:  lea    0x4(%eax),%edx
0810bbdc +0x162:  mov    0x8(%ebp),%eax
0810bbdf +0x165:  add    $0x30,%eax
0810bbe2 +0x168:  mov    %edx,0x4(%esp)
0810bbe6 +0x16c:  mov    %eax,(%esp)
0810bbe9 +0x16f:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810bbee +0x174:  mov    (%eax),%ebx
0810bbf0 +0x176:  mov    (%ebx),%eax
0810bbf2 +0x178:  add    $0xc,%eax
0810bbf5 +0x17b:  mov    (%eax),%esi
0810bbf7 +0x17d:  lea    -0x18(%ebp),%eax
0810bbfa +0x180:  mov    %eax,(%esp)
0810bbfd +0x183:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bc02 +0x188:  mov    0x18(%eax),%eax
0810bc05 +0x18b:  test   %eax,%eax
0810bc07 +0x18d:  setne  %al
0810bc0a +0x190:  movzbl %al,%eax
0810bc0d +0x193:  mov    %eax,0x4(%esp)
0810bc11 +0x197:  mov    %ebx,(%esp)
0810bc14 +0x19a:  call   *%esi
0810bc16 +0x19c:  lea    -0x18(%ebp),%eax
0810bc19 +0x19f:  mov    %eax,(%esp)
0810bc1c +0x1a2:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bc21 +0x1a7:  lea    0x4(%eax),%edx
0810bc24 +0x1aa:  mov    0x8(%ebp),%eax
0810bc27 +0x1ad:  add    $0x30,%eax
0810bc2a +0x1b0:  mov    %edx,0x4(%esp)
0810bc2e +0x1b4:  mov    %eax,(%esp)
0810bc31 +0x1b7:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810bc36 +0x1bc:  mov    (%eax),%ebx
0810bc38 +0x1be:  mov    (%ebx),%eax
0810bc3a +0x1c0:  add    $0x10,%eax
0810bc3d +0x1c3:  mov    (%eax),%esi
0810bc3f +0x1c5:  lea    -0x18(%ebp),%eax
0810bc42 +0x1c8:  mov    %eax,(%esp)
0810bc45 +0x1cb:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bc4a +0x1d0:  mov    (%eax),%eax
0810bc4c +0x1d2:  mov    -0xc(%ebp),%edx
0810bc4f +0x1d5:  mov    %edx,0x8(%esp)
0810bc53 +0x1d9:  mov    %eax,0x4(%esp)
0810bc57 +0x1dd:  mov    %ebx,(%esp)
0810bc5a +0x1e0:  call   *%esi
0810bc5c +0x1e2:  lea    -0x18(%ebp),%eax
0810bc5f +0x1e5:  mov    %eax,(%esp)
0810bc62 +0x1e8:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bc67 +0x1ed:  mov    0x10(%eax),%ebx
0810bc6a +0x1f0:  lea    -0x18(%ebp),%eax
0810bc6d +0x1f3:  mov    %eax,(%esp)
0810bc70 +0x1f6:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bc75 +0x1fb:  lea    0x4(%eax),%edx
0810bc78 +0x1fe:  mov    0x8(%ebp),%eax
0810bc7b +0x201:  add    $0x30,%eax
0810bc7e +0x204:  mov    %edx,0x4(%esp)
0810bc82 +0x208:  mov    %eax,(%esp)
0810bc85 +0x20b:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810bc8a +0x210:  mov    (%eax),%eax
0810bc8c +0x212:  mov    %ebx,0x4(%esp)
0810bc90 +0x216:  mov    %eax,(%esp)
0810bc93 +0x219:  call   0810b078 <_ZN13EventClassify12CEventEntity20set_event_start_timeEi>  ; EventClassify::CEventEntity::set_event_start_time(int)
0810bc98 +0x21e:  lea    -0x18(%ebp),%eax
0810bc9b +0x221:  mov    %eax,(%esp)
0810bc9e +0x224:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bca3 +0x229:  mov    0x14(%eax),%ebx
0810bca6 +0x22c:  lea    -0x18(%ebp),%eax
0810bca9 +0x22f:  mov    %eax,(%esp)
0810bcac +0x232:  call   0811181a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd2c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd2c
0810bcb1 +0x237:  lea    0x4(%eax),%edx
0810bcb4 +0x23a:  mov    0x8(%ebp),%eax
0810bcb7 +0x23d:  add    $0x30,%eax
0810bcba +0x240:  mov    %edx,0x4(%esp)
0810bcbe +0x244:  mov    %eax,(%esp)
0810bcc1 +0x247:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810bcc6 +0x24c:  mov    (%eax),%eax
0810bcc8 +0x24e:  mov    %ebx,0x4(%esp)
0810bccc +0x252:  mov    %eax,(%esp)
0810bccf +0x255:  call   0810b086 <_ZN13EventClassify12CEventEntity18set_event_end_timeEi>  ; EventClassify::CEventEntity::set_event_end_time(int)
0810bcd4 +0x25a:  lea    -0x18(%ebp),%eax
0810bcd7 +0x25d:  mov    %eax,(%esp)
0810bcda +0x260:  call   08111828 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd3a
0810bcdf +0x265:  lea    -0x1c(%ebp),%eax
0810bce2 +0x268:  mov    %eax,0x4(%esp)
0810bce6 +0x26c:  lea    -0x18(%ebp),%eax
0810bce9 +0x26f:  mov    %eax,(%esp)
0810bcec +0x272:  call   08111806 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xd18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xd18
0810bcf1 +0x277:  test   %al,%al
0810bcf3 +0x279:  jne    0810bab1 <+0x37>
0810bcf9 +0x27f:  mov    0x8(%ebp),%eax
0810bcfc +0x282:  mov    %eax,(%esp)
0810bcff +0x285:  call   0810bd14 <_ZN13EventClassify15CEventScriptMng17init_evnet_entityEv>  ; EventClassify::CEventScriptMng::init_evnet_entity()
0810bd04 +0x28a:  mov    $0x1,%eax
0810bd09 +0x28f:  lea    -0x8(%ebp),%esp
0810bd0c +0x292:  add    $0x0,%esp
0810bd0f +0x295:  pop    %ebx
0810bd10 +0x296:  pop    %esi
0810bd11 +0x297:  pop    %ebp
0810bd12 +0x298:  ret
0810bd13 +0x299:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::initScriptlist @ 0x810ba7a

/* EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList&) */

undefined4 EventClassify::CEventScriptMng::initScriptlist(InGameEventInfoList *param_1)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  TCHAR *pTVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_20 [4];
  map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  local_1c [4];
  string local_18 [7];
  allocator<char> local_11;
  int local_10;
  
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::begin(local_1c);
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::end(local_20);
  do {
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c,
                       (_Rb_tree_iterator *)local_20);
    if (cVar3 == '\0') {
      init_evnet_entity((CEventScriptMng *)param_1);
      return 1;
    }
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
    if (*(int *)(iVar4 + 0x18) != 0) {
      std::allocator<char>::allocator();
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
                    /* try { // try from 0810bae8 to 0810bb02 has its CatchHandler @ 0810bb4f */
      pTVar5 = toTString((string *)(iVar4 + 0xc));
      std::string::string(local_18,pTVar5,(allocator *)&local_11);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
                    /* try { // try from 0810bb25 to 0810bb29 has its CatchHandler @ 0810bb3a */
      local_10 = InGameEventScriptLoader::getEventScript
                           ((InGameEventScriptLoader *)(param_1 + 0x18),*(int *)(iVar4 + 4),local_18
                           );
                    /* try { // try from 0810bb33 to 0810bb37 has its CatchHandler @ 0810bb4f */
      std::string::~string(local_18);
      std::allocator<char>::~allocator(&local_11);
      if (local_10 == 0) {
        return 0;
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar4 + 4));
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      uVar7 = create_event_entity((CEventScriptMng *)param_1,*(int *)(iVar4 + 4),false);
      *puVar6 = uVar7;
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar4 + 4));
      piVar1 = (int *)*puVar6;
      pcVar2 = *(code **)(*piVar1 + 0xc);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      (*pcVar2)(piVar1,*(int *)(iVar4 + 0x18) != 0);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar4 + 4));
      piVar1 = (int *)*puVar6;
      pcVar2 = *(code **)(*piVar1 + 0x10);
      puVar6 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      (*pcVar2)(piVar1,*puVar6,local_10);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      iVar4 = *(int *)(iVar4 + 0x10);
      iVar8 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar8 + 4));
      CEventEntity::set_event_start_time((CEventEntity *)*puVar6,iVar4);
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      iVar4 = *(int *)(iVar4 + 0x14);
      iVar8 = std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
      puVar6 = (undefined4 *)
               std::
               map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
               ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                             *)(param_1 + 0x30),(int *)(iVar8 + 4));
      CEventEntity::set_event_end_time((CEventEntity *)*puVar6,iVar4);
    }
    std::_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,InGameEventInfo>> *)local_1c);
  } while( true );
}
```
