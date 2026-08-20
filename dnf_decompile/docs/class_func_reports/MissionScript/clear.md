# clear

`_ZN13MissionScript5clearEv`

`MissionScript::clear()`

| 类 | 地址 |
|---|---|
| `MissionScript` | `0x08a5bbb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5bbb2  _ZN13MissionScript5clearEv
#           MissionScript::clear()
# range [0x08a5bbb2, 0x08a5bca1]
08a5bbb2 +0x00:  push   %ebp
08a5bbb3 +0x01:  mov    %esp,%ebp
08a5bbb5 +0x03:  sub    $0x28,%esp
08a5bbb8 +0x06:  movl   $0x0,-0x10(%ebp)
08a5bbbf +0x0d:  movl   $0x0,-0xc(%ebp)
08a5bbc6 +0x14:  lea    -0x10(%ebp),%eax
08a5bbc9 +0x17:  mov    %eax,0x8(%esp)
08a5bbcd +0x1b:  lea    -0xc(%ebp),%eax
08a5bbd0 +0x1e:  mov    %eax,0x4(%esp)
08a5bbd4 +0x22:  lea    -0x18(%ebp),%eax
08a5bbd7 +0x25:  mov    %eax,(%esp)
08a5bbda +0x28:  call   081627d4 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa42>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa42
08a5bbdf +0x2d:  mov    0x8(%ebp),%eax
08a5bbe2 +0x30:  lea    0x10(%eax),%edx
08a5bbe5 +0x33:  lea    -0x18(%ebp),%eax
08a5bbe8 +0x36:  mov    %eax,0x4(%esp)
08a5bbec +0x3a:  mov    %edx,(%esp)
08a5bbef +0x3d:  call   080ddf1c <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xa65>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xa65
08a5bbf4 +0x42:  mov    0x8(%ebp),%eax
08a5bbf7 +0x45:  movl   $0x4,0x20(%eax)
08a5bbfe +0x4c:  mov    0x8(%ebp),%eax
08a5bc01 +0x4f:  movl   $0xb,0x24(%eax)
08a5bc08 +0x56:  mov    0x8(%ebp),%eax
08a5bc0b +0x59:  add    $0x28,%eax
08a5bc0e +0x5c:  mov    %eax,(%esp)
08a5bc11 +0x5f:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
08a5bc16 +0x64:  mov    0x8(%ebp),%eax
08a5bc19 +0x67:  movl   $0x10,0x34(%eax)
08a5bc20 +0x6e:  mov    0x8(%ebp),%eax
08a5bc23 +0x71:  movl   $0xffffffff,(%eax)
08a5bc29 +0x77:  mov    0x8(%ebp),%eax
08a5bc2c +0x7a:  movl   $0xffffffff,0x4(%eax)
08a5bc33 +0x81:  mov    0x8(%ebp),%eax
08a5bc36 +0x84:  add    $0x38,%eax
08a5bc39 +0x87:  mov    %eax,(%esp)
08a5bc3c +0x8a:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08a5bc41 +0x8f:  mov    0x8(%ebp),%eax
08a5bc44 +0x92:  add    $0x3c,%eax
08a5bc47 +0x95:  mov    %eax,(%esp)
08a5bc4a +0x98:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08a5bc4f +0x9d:  mov    0x8(%ebp),%eax
08a5bc52 +0xa0:  add    $0x44,%eax
08a5bc55 +0xa3:  mov    %eax,(%esp)
08a5bc58 +0xa6:  call   0817a342 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x3c0>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x3c0
08a5bc5d +0xab:  mov    0x8(%ebp),%eax
08a5bc60 +0xae:  mov    $0x0,%edx
08a5bc65 +0xb3:  mov    %edx,0x40(%eax)
08a5bc68 +0xb6:  mov    0x8(%ebp),%eax
08a5bc6b +0xb9:  movb   $0x0,0x5c(%eax)
08a5bc6f +0xbd:  mov    0x8(%ebp),%eax
08a5bc72 +0xc0:  movb   $0x0,0x5d(%eax)
08a5bc76 +0xc4:  mov    0x8(%ebp),%eax
08a5bc79 +0xc7:  movb   $0x0,0x5e(%eax)
08a5bc7d +0xcb:  mov    0x8(%ebp),%eax
08a5bc80 +0xce:  add    $0x60,%eax
08a5bc83 +0xd1:  mov    %eax,(%esp)
08a5bc86 +0xd4:  call   08a5c040 <_GLOBAL__I_g_PvpMissionScriptBaseDirectory+0x2f2>  ; global constructors keyed to g_PvpMissionScriptBaseDirectory+0x2f2
08a5bc8b +0xd9:  mov    0x8(%ebp),%eax
08a5bc8e +0xdc:  movl   $0x0,0x8(%eax)
08a5bc95 +0xe3:  mov    0x8(%ebp),%eax
08a5bc98 +0xe6:  movl   $0x0,0xc(%eax)
08a5bc9f +0xed:  leave
08a5bca0 +0xee:  ret
08a5bca1 +0xef:  nop
```

## 反编译 C

```c
// MissionScript::clear @ 0x8a5bbb2

/* MissionScript::clear() */

void __thiscall MissionScript::clear(MissionScript *this)

{
  pair<int,int> local_1c [8];
  int local_14 [4];
  
  local_14[0] = 0;
  local_14[1] = 0;
  std::pair<int,int>::pair<int,int>(local_1c,local_14 + 1,local_14);
  std::pair<int,int>::operator=((pair<int,int> *)(this + 0x10),local_1c);
  *(undefined4 *)(this + 0x20) = 4;
  *(undefined4 *)(this + 0x24) = 0xb;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x28));
  *(undefined4 *)(this + 0x34) = 0x10;
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  std::string::clear((string *)(this + 0x38));
  std::string::clear((string *)(this + 0x3c));
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::clear
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x44));
  *(undefined4 *)(this + 0x40) = 0;
  this[0x5c] = (MissionScript)0x0;
  this[0x5d] = (MissionScript)0x0;
  this[0x5e] = (MissionScript)0x0;
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::clear((map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
           *)(this + 0x60));
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}
```
