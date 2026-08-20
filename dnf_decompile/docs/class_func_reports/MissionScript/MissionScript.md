# MissionScript

`_ZN13MissionScriptC1Ev`

`MissionScript::MissionScript()`

| 类 | 地址 |
|---|---|
| `MissionScript` | `0x08a5ba8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5ba8c  _ZN13MissionScriptC1Ev
#           MissionScript::MissionScript()
# range [0x08a5ba8c, 0x08a5bbb1]
08a5ba8c +0x000:  push   %ebp
08a5ba8d +0x001:  mov    %esp,%ebp
08a5ba8f +0x003:  push   %esi
08a5ba90 +0x004:  push   %ebx
08a5ba91 +0x005:  sub    $0x10,%esp
08a5ba94 +0x008:  mov    0x8(%ebp),%eax
08a5ba97 +0x00b:  add    $0x10,%eax
08a5ba9a +0x00e:  mov    %eax,(%esp)
08a5ba9d +0x011:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08a5baa2 +0x016:  mov    0x8(%ebp),%eax
08a5baa5 +0x019:  add    $0x18,%eax
08a5baa8 +0x01c:  mov    %eax,(%esp)
08a5baab +0x01f:  call   081b5c8e <_GLOBAL__I__ZN23NeedMaterialDataManagerC2Ev+0x31>  ; global constructors keyed to NeedMaterialDataManager::NeedMaterialDataManager()+0x31
08a5bab0 +0x024:  mov    0x8(%ebp),%eax
08a5bab3 +0x027:  add    $0x28,%eax
08a5bab6 +0x02a:  mov    %eax,(%esp)
08a5bab9 +0x02d:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a5babe +0x032:  mov    0x8(%ebp),%eax
08a5bac1 +0x035:  add    $0x38,%eax
08a5bac4 +0x038:  mov    %eax,(%esp)
08a5bac7 +0x03b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a5bacc +0x040:  mov    0x8(%ebp),%eax
08a5bacf +0x043:  add    $0x3c,%eax
08a5bad2 +0x046:  mov    %eax,(%esp)
08a5bad5 +0x049:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a5bada +0x04e:  mov    0x8(%ebp),%eax
08a5badd +0x051:  add    $0x44,%eax
08a5bae0 +0x054:  mov    %eax,(%esp)
08a5bae3 +0x057:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
08a5bae8 +0x05c:  mov    0x8(%ebp),%eax
08a5baeb +0x05f:  add    $0x50,%eax
08a5baee +0x062:  mov    %eax,(%esp)
08a5baf1 +0x065:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a5baf6 +0x06a:  mov    0x8(%ebp),%eax
08a5baf9 +0x06d:  add    $0x60,%eax
08a5bafc +0x070:  mov    %eax,(%esp)
08a5baff +0x073:  call   08a5c02c <_GLOBAL__I_g_PvpMissionScriptBaseDirectory+0x2de>  ; global constructors keyed to g_PvpMissionScriptBaseDirectory+0x2de
08a5bb04 +0x078:  mov    0x8(%ebp),%eax
08a5bb07 +0x07b:  mov    %eax,(%esp)
08a5bb0a +0x07e:  call   08a5bbb2 <_ZN13MissionScript5clearEv>  ; MissionScript::clear()
08a5bb0f +0x083:  jmp    08a5bbaa <+0x11e>
08a5bb14 +0x088:  mov    %edx,%ebx
08a5bb16 +0x08a:  mov    %eax,%esi
08a5bb18 +0x08c:  mov    0x8(%ebp),%eax
08a5bb1b +0x08f:  add    $0x60,%eax
08a5bb1e +0x092:  mov    %eax,(%esp)
08a5bb21 +0x095:  call   085e6e2c <_GLOBAL__I__ZN31MissionClearCondition_ParameterC2E15PVP_BATTLE_MODE+0x5b4>  ; global constructors keyed to MissionClearCondition_Parameter::MissionClearCondition_Parameter(PVP_BATTLE_MODE)+0x5b4
08a5bb26 +0x09a:  mov    %esi,%eax
08a5bb28 +0x09c:  mov    %ebx,%edx
08a5bb2a +0x09e:  jmp    08a5bb2c <+0xa0>
08a5bb2c +0x0a0:  mov    %edx,%ebx
08a5bb2e +0x0a2:  mov    %eax,%esi
08a5bb30 +0x0a4:  mov    0x8(%ebp),%eax
08a5bb33 +0x0a7:  add    $0x50,%eax
08a5bb36 +0x0aa:  mov    %eax,(%esp)
08a5bb39 +0x0ad:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a5bb3e +0x0b2:  mov    %esi,%eax
08a5bb40 +0x0b4:  mov    %ebx,%edx
08a5bb42 +0x0b6:  jmp    08a5bb44 <+0xb8>
08a5bb44 +0x0b8:  mov    %edx,%ebx
08a5bb46 +0x0ba:  mov    %eax,%esi
08a5bb48 +0x0bc:  mov    0x8(%ebp),%eax
08a5bb4b +0x0bf:  add    $0x44,%eax
08a5bb4e +0x0c2:  mov    %eax,(%esp)
08a5bb51 +0x0c5:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08a5bb56 +0x0ca:  mov    %esi,%eax
08a5bb58 +0x0cc:  mov    %ebx,%edx
08a5bb5a +0x0ce:  jmp    08a5bb5c <+0xd0>
08a5bb5c +0x0d0:  mov    %edx,%ebx
08a5bb5e +0x0d2:  mov    %eax,%esi
08a5bb60 +0x0d4:  mov    0x8(%ebp),%eax
08a5bb63 +0x0d7:  add    $0x3c,%eax
08a5bb66 +0x0da:  mov    %eax,(%esp)
08a5bb69 +0x0dd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a5bb6e +0x0e2:  mov    %esi,%eax
08a5bb70 +0x0e4:  mov    %ebx,%edx
08a5bb72 +0x0e6:  jmp    08a5bb74 <+0xe8>
08a5bb74 +0x0e8:  mov    %edx,%ebx
08a5bb76 +0x0ea:  mov    %eax,%esi
08a5bb78 +0x0ec:  mov    0x8(%ebp),%eax
08a5bb7b +0x0ef:  add    $0x38,%eax
08a5bb7e +0x0f2:  mov    %eax,(%esp)
08a5bb81 +0x0f5:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a5bb86 +0x0fa:  mov    %esi,%eax
08a5bb88 +0x0fc:  mov    %ebx,%edx
08a5bb8a +0x0fe:  jmp    08a5bb8c <+0x100>
08a5bb8c +0x100:  mov    %edx,%ebx
08a5bb8e +0x102:  mov    %eax,%esi
08a5bb90 +0x104:  mov    0x8(%ebp),%eax
08a5bb93 +0x107:  add    $0x28,%eax
08a5bb96 +0x10a:  mov    %eax,(%esp)
08a5bb99 +0x10d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a5bb9e +0x112:  mov    %esi,%eax
08a5bba0 +0x114:  mov    %ebx,%edx
08a5bba2 +0x116:  mov    %eax,(%esp)
08a5bba5 +0x119:  call   08ae3750 <_Unwind_Resume>
08a5bbaa +0x11e:  add    $0x10,%esp
08a5bbad +0x121:  pop    %ebx
08a5bbae +0x122:  pop    %esi
08a5bbaf +0x123:  pop    %ebp
08a5bbb0 +0x124:  ret
08a5bbb1 +0x125:  nop
```

## 反编译 C

```c
// MissionScript::MissionScript @ 0x8a5ba8c

/* MissionScript::MissionScript() */

void __thiscall MissionScript::MissionScript(MissionScript *this)

{
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x10));
  std::pair<int,int>::pair((pair<int,int> *)(this + 0x18));
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x28));
                    /* try { // try from 08a5bac7 to 08a5bacb has its CatchHandler @ 08a5bb8c */
  std::string::string((string *)(this + 0x38));
                    /* try { // try from 08a5bad5 to 08a5bad9 has its CatchHandler @ 08a5bb74 */
  std::string::string((string *)(this + 0x3c));
                    /* try { // try from 08a5bae3 to 08a5bae7 has its CatchHandler @ 08a5bb5c */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x44));
                    /* try { // try from 08a5baf1 to 08a5baf5 has its CatchHandler @ 08a5bb44 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x50));
                    /* try { // try from 08a5baff to 08a5bb03 has its CatchHandler @ 08a5bb2c */
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::map((map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
         *)(this + 0x60));
                    /* try { // try from 08a5bb0a to 08a5bb0e has its CatchHandler @ 08a5bb14 */
  clear(this);
  return;
}
```
