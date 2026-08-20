# clear

`_ZN9NpcScript5clearEv`

`NpcScript::clear()`

| 类 | 地址 |
|---|---|
| `NpcScript` | `0x089fbf22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fbf22  _ZN9NpcScript5clearEv
#           NpcScript::clear()
# range [0x089fbf22, 0x089fc1a7]
089fbf22 +0x000:  push   %ebp
089fbf23 +0x001:  mov    %esp,%ebp
089fbf25 +0x003:  sub    $0x28,%esp
089fbf28 +0x006:  mov    0x8(%ebp),%eax
089fbf2b +0x009:  movl   $0x0,(%eax)
089fbf31 +0x00f:  mov    0x8(%ebp),%eax
089fbf34 +0x012:  add    $0x4,%eax
089fbf37 +0x015:  movl   $"",0x4(%esp)
089fbf3f +0x01d:  mov    %eax,(%esp)
089fbf42 +0x020:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbf47 +0x025:  mov    0x8(%ebp),%eax
089fbf4a +0x028:  add    $0x8,%eax
089fbf4d +0x02b:  movl   $"",0x4(%esp)
089fbf55 +0x033:  mov    %eax,(%esp)
089fbf58 +0x036:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbf5d +0x03b:  mov    0x8(%ebp),%eax
089fbf60 +0x03e:  add    $0xc,%eax
089fbf63 +0x041:  movl   $"",0x4(%esp)
089fbf6b +0x049:  mov    %eax,(%esp)
089fbf6e +0x04c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbf73 +0x051:  mov    0x8(%ebp),%eax
089fbf76 +0x054:  movl   $0x0,0x10(%eax)
089fbf7d +0x05b:  mov    0x8(%ebp),%eax
089fbf80 +0x05e:  add    $0x14,%eax
089fbf83 +0x061:  movl   $"",0x4(%esp)
089fbf8b +0x069:  mov    %eax,(%esp)
089fbf8e +0x06c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbf93 +0x071:  mov    0x8(%ebp),%eax
089fbf96 +0x074:  movl   $0x0,0x18(%eax)
089fbf9d +0x07b:  mov    0x8(%ebp),%eax
089fbfa0 +0x07e:  add    $0x1c,%eax
089fbfa3 +0x081:  movl   $"",0x4(%esp)
089fbfab +0x089:  mov    %eax,(%esp)
089fbfae +0x08c:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbfb3 +0x091:  mov    0x8(%ebp),%eax
089fbfb6 +0x094:  movl   $0x0,0x20(%eax)
089fbfbd +0x09b:  mov    0x8(%ebp),%eax
089fbfc0 +0x09e:  add    $0x24,%eax
089fbfc3 +0x0a1:  movl   $"",0x4(%esp)
089fbfcb +0x0a9:  mov    %eax,(%esp)
089fbfce +0x0ac:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbfd3 +0x0b1:  mov    0x8(%ebp),%eax
089fbfd6 +0x0b4:  add    $0x28,%eax
089fbfd9 +0x0b7:  movl   $"",0x4(%esp)
089fbfe1 +0x0bf:  mov    %eax,(%esp)
089fbfe4 +0x0c2:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fbfe9 +0x0c7:  movl   $0x0,-0x10(%ebp)
089fbff0 +0x0ce:  jmp    089fc015 <+0xf3>
089fbff2 +0x0d0:  mov    -0x10(%ebp),%eax
089fbff5 +0x0d3:  add    $0x8,%eax
089fbff8 +0x0d6:  shl    $0x2,%eax
089fbffb +0x0d9:  add    0x8(%ebp),%eax
089fbffe +0x0dc:  add    $0xc,%eax
089fc001 +0x0df:  movl   $"",0x4(%esp)
089fc009 +0x0e7:  mov    %eax,(%esp)
089fc00c +0x0ea:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fc011 +0x0ef:  addl   $0x1,-0x10(%ebp)
089fc015 +0x0f3:  cmpl   $0x1,-0x10(%ebp)
089fc019 +0x0f7:  setle  %al
089fc01c +0x0fa:  test   %al,%al
089fc01e +0x0fc:  jne    089fbff2 <+0xd0>
089fc020 +0x0fe:  mov    0x8(%ebp),%eax
089fc023 +0x101:  movb   $0x1,0x34(%eax)
089fc027 +0x105:  mov    0x8(%ebp),%eax
089fc02a +0x108:  add    $0x4c,%eax
089fc02d +0x10b:  mov    %eax,(%esp)
089fc030 +0x10e:  call   08a015ec <_GLOBAL__I_g_npcScriptBaseDirectory+0xc7e>  ; global constructors keyed to g_npcScriptBaseDirectory+0xc7e
089fc035 +0x113:  mov    0x8(%ebp),%eax
089fc038 +0x116:  add    $0x64,%eax
089fc03b +0x119:  movl   $"",0x4(%esp)
089fc043 +0x121:  mov    %eax,(%esp)
089fc046 +0x124:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fc04b +0x129:  movl   $0x0,-0xc(%ebp)
089fc052 +0x130:  jmp    089fc075 <+0x153>
089fc054 +0x132:  mov    -0xc(%ebp),%edx
089fc057 +0x135:  mov    %edx,%eax
089fc059 +0x137:  add    %eax,%eax
089fc05b +0x139:  add    %edx,%eax
089fc05d +0x13b:  shl    $0x2,%eax
089fc060 +0x13e:  add    $0x60,%eax
089fc063 +0x141:  add    0x8(%ebp),%eax
089fc066 +0x144:  add    $0x8,%eax
089fc069 +0x147:  mov    %eax,(%esp)
089fc06c +0x14a:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
089fc071 +0x14f:  addl   $0x1,-0xc(%ebp)
089fc075 +0x153:  cmpl   $0xb,-0xc(%ebp)
089fc079 +0x157:  setle  %al
089fc07c +0x15a:  test   %al,%al
089fc07e +0x15c:  jne    089fc054 <+0x132>
089fc080 +0x15e:  mov    0x8(%ebp),%eax
089fc083 +0x161:  add    $0x100,%eax
089fc088 +0x166:  movl   $"",0x4(%esp)
089fc090 +0x16e:  mov    %eax,(%esp)
089fc093 +0x171:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fc098 +0x176:  mov    0x8(%ebp),%eax
089fc09b +0x179:  movl   $0xffffffff,0x38(%eax)
089fc0a2 +0x180:  mov    0x8(%ebp),%eax
089fc0a5 +0x183:  add    $0x104,%eax
089fc0aa +0x188:  mov    %eax,(%esp)
089fc0ad +0x18b:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
089fc0b2 +0x190:  mov    0x8(%ebp),%eax
089fc0b5 +0x193:  add    $0x110,%eax
089fc0ba +0x198:  mov    %eax,(%esp)
089fc0bd +0x19b:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
089fc0c2 +0x1a0:  mov    0x8(%ebp),%eax
089fc0c5 +0x1a3:  add    $0x11c,%eax
089fc0ca +0x1a8:  mov    %eax,(%esp)
089fc0cd +0x1ab:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
089fc0d2 +0x1b0:  mov    0x8(%ebp),%eax
089fc0d5 +0x1b3:  add    $0x128,%eax
089fc0da +0x1b8:  mov    %eax,(%esp)
089fc0dd +0x1bb:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
089fc0e2 +0x1c0:  mov    0x8(%ebp),%eax
089fc0e5 +0x1c3:  add    $0x134,%eax
089fc0ea +0x1c8:  mov    %eax,(%esp)
089fc0ed +0x1cb:  call   0838355e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12ffe>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12ffe
089fc0f2 +0x1d0:  mov    0x8(%ebp),%eax
089fc0f5 +0x1d3:  add    $0x140,%eax
089fc0fa +0x1d8:  mov    %eax,(%esp)
089fc0fd +0x1db:  call   08a01600 <_GLOBAL__I_g_npcScriptBaseDirectory+0xc92>  ; global constructors keyed to g_npcScriptBaseDirectory+0xc92
089fc102 +0x1e0:  mov    0x8(%ebp),%eax
089fc105 +0x1e3:  add    $0x158,%eax
089fc10a +0x1e8:  mov    %eax,(%esp)
089fc10d +0x1eb:  call   08a0161c <_GLOBAL__I_g_npcScriptBaseDirectory+0xcae>  ; global constructors keyed to g_npcScriptBaseDirectory+0xcae
089fc112 +0x1f0:  mov    0x8(%ebp),%eax
089fc115 +0x1f3:  add    $0x164,%eax
089fc11a +0x1f8:  mov    %eax,(%esp)
089fc11d +0x1fb:  call   08a01638 <_GLOBAL__I_g_npcScriptBaseDirectory+0xcca>  ; global constructors keyed to g_npcScriptBaseDirectory+0xcca
089fc122 +0x200:  mov    0x8(%ebp),%eax
089fc125 +0x203:  add    $0x170,%eax
089fc12a +0x208:  mov    %eax,(%esp)
089fc12d +0x20b:  call   089fb56c <_ZN25stFavorableRelationShip_t5clearEv>  ; stFavorableRelationShip_t::clear()
089fc132 +0x210:  mov    0x8(%ebp),%eax
089fc135 +0x213:  add    $0x14c,%eax
089fc13a +0x218:  mov    %eax,(%esp)
089fc13d +0x21b:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
089fc142 +0x220:  mov    0x8(%ebp),%eax
089fc145 +0x223:  movb   $0x0,0x688(%eax)
089fc14c +0x22a:  mov    0x8(%ebp),%eax
089fc14f +0x22d:  add    $0x68c,%eax
089fc154 +0x232:  mov    %eax,(%esp)
089fc157 +0x235:  call   083416c8 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x3795>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x3795
089fc15c +0x23a:  mov    0x8(%ebp),%eax
089fc15f +0x23d:  add    $0x698,%eax
089fc164 +0x242:  mov    %eax,(%esp)
089fc167 +0x245:  call   08a01654 <_GLOBAL__I_g_npcScriptBaseDirectory+0xce6>  ; global constructors keyed to g_npcScriptBaseDirectory+0xce6
089fc16c +0x24a:  mov    0x8(%ebp),%eax
089fc16f +0x24d:  add    $0xf8,%eax
089fc174 +0x252:  movl   $"",0x4(%esp)
089fc17c +0x25a:  mov    %eax,(%esp)
089fc17f +0x25d:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fc184 +0x262:  mov    0x8(%ebp),%eax
089fc187 +0x265:  add    $0xfc,%eax
089fc18c +0x26a:  movl   $"",0x4(%esp)
089fc194 +0x272:  mov    %eax,(%esp)
089fc197 +0x275:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
089fc19c +0x27a:  mov    0x8(%ebp),%eax
089fc19f +0x27d:  movb   $0x0,0x6b8(%eax)
089fc1a6 +0x284:  leave
089fc1a7 +0x285:  ret
```

## 反编译 C

```c
// NpcScript::clear @ 0x89fbf22

/* NpcScript::clear() */

void __thiscall NpcScript::clear(NpcScript *this)

{
  int local_14;
  int local_10;
  
  *(undefined4 *)this = 0;
  std::string::operator=((string *)(this + 4),"");
  std::string::operator=((string *)(this + 8),"");
  std::string::operator=((string *)(this + 0xc),"");
  *(undefined4 *)(this + 0x10) = 0;
  std::string::operator=((string *)(this + 0x14),"");
  *(undefined4 *)(this + 0x18) = 0;
  std::string::operator=((string *)(this + 0x1c),"");
  *(undefined4 *)(this + 0x20) = 0;
  std::string::operator=((string *)(this + 0x24),"");
  std::string::operator=((string *)(this + 0x28),"");
  for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
    std::string::operator=((string *)(this + (local_14 + 8) * 4 + 0xc),"");
  }
  this[0x34] = (NpcScript)0x1;
  std::
  map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
  ::clear((map<ENUM_NPC_ROLE,int,std::less<ENUM_NPC_ROLE>,std::allocator<std::pair<ENUM_NPC_ROLE_const,int>>>
           *)(this + 0x4c));
  std::string::operator=((string *)(this + 100),"");
  for (local_10 = 0; local_10 < 0xc; local_10 = local_10 + 1) {
    std::vector<int,std::allocator<int>>::clear
              ((vector<int,std::allocator<int>> *)(this + local_10 * 0xc + 0x68));
  }
  std::string::operator=((string *)(this + 0x100),"");
  *(undefined4 *)(this + 0x38) = 0xffffffff;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x104));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x110));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x11c));
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x128));
  std::vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>>::clear
            ((vector<InteractiveDialogScript,std::allocator<InteractiveDialogScript>> *)
             (this + 0x134));
  std::vector<PresentResponceScript,std::allocator<PresentResponceScript>>::clear
            ((vector<PresentResponceScript,std::allocator<PresentResponceScript>> *)(this + 0x140));
  std::vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>::clear
            ((vector<PresentResponceScriptException,std::allocator<PresentResponceScriptException>>
              *)(this + 0x158));
  std::vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>>::clear
            ((vector<PresentResponceScriptEvent,std::allocator<PresentResponceScriptEvent>> *)
             (this + 0x164));
  stFavorableRelationShip_t::clear((stFavorableRelationShip_t *)(this + 0x170));
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x14c));
  this[0x688] = (NpcScript)0x0;
  std::vector<std::string,std::allocator<std::string>>::clear
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x68c));
  std::vector<ClickMarkInfo,std::allocator<ClickMarkInfo>>::clear
            ((vector<ClickMarkInfo,std::allocator<ClickMarkInfo>> *)(this + 0x698));
  std::string::operator=((string *)(this + 0xf8),"");
  std::string::operator=((string *)(this + 0xfc),"");
  this[0x6b8] = (NpcScript)0x0;
  return;
}
```
