# IsPCRoomIP

`_ZN8DB_Login10IsPCRoomIPEPc`

`DB_Login::IsPCRoomIP(char*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08412c52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08412c52  _ZN8DB_Login10IsPCRoomIPEPc
#           DB_Login::IsPCRoomIP(char*)
# range [0x08412c52, 0x08412eb7]
08412c52 +0x000:  push   %ebp
08412c53 +0x001:  mov    %esp,%ebp
08412c55 +0x003:  push   %esi
08412c56 +0x004:  push   %ebx
08412c57 +0x005:  sub    $0x40,%esp
08412c5a +0x008:  mov    0x8(%ebp),%eax
08412c5d +0x00b:  mov    %eax,(%esp)
08412c60 +0x00e:  call   08411bae <_ZN8DB_Login16_GetDNFAccountDBEv>  ; DB_Login::_GetDNFAccountDB()
08412c65 +0x013:  mov    %eax,-0x10(%ebp)
08412c68 +0x016:  cmpl   $0x0,0xc(%ebp)
08412c6c +0x01a:  je     08412c78 <+0x26>
08412c6e +0x01c:  mov    0xc(%ebp),%eax
08412c71 +0x01f:  movzbl (%eax),%eax
08412c74 +0x022:  test   %al,%al
08412c76 +0x024:  jne    08412c82 <+0x30>
08412c78 +0x026:  mov    $0x0,%ebx
08412c7d +0x02b:  jmp    08412eaf <+0x25d>
08412c82 +0x030:  lea    -0x12(%ebp),%eax
08412c85 +0x033:  mov    %eax,(%esp)
08412c88 +0x036:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08412c8d +0x03b:  lea    -0x12(%ebp),%eax
08412c90 +0x03e:  mov    %eax,0x8(%esp)
08412c94 +0x042:  mov    0xc(%ebp),%eax
08412c97 +0x045:  mov    %eax,0x4(%esp)
08412c9b +0x049:  lea    -0x18(%ebp),%eax
08412c9e +0x04c:  mov    %eax,(%esp)
08412ca1 +0x04f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08412ca6 +0x054:  jmp    08412cc3 <+0x71>
08412ca8 +0x056:  mov    %edx,%ebx
08412caa +0x058:  mov    %eax,%esi
08412cac +0x05a:  lea    -0x12(%ebp),%eax
08412caf +0x05d:  mov    %eax,(%esp)
08412cb2 +0x060:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08412cb7 +0x065:  mov    %esi,%eax
08412cb9 +0x067:  mov    %ebx,%edx
08412cbb +0x069:  mov    %eax,(%esp)
08412cbe +0x06c:  call   08ae3750 <_Unwind_Resume>
08412cc3 +0x071:  lea    -0x12(%ebp),%eax
08412cc6 +0x074:  mov    %eax,(%esp)
08412cc9 +0x077:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08412cce +0x07c:  lea    -0x11(%ebp),%eax
08412cd1 +0x07f:  mov    %eax,(%esp)
08412cd4 +0x082:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
08412cd9 +0x087:  lea    -0x11(%ebp),%eax
08412cdc +0x08a:  mov    %eax,0x8(%esp)
08412ce0 +0x08e:  mov    0xc(%ebp),%eax
08412ce3 +0x091:  mov    %eax,0x4(%esp)
08412ce7 +0x095:  lea    -0x1c(%ebp),%eax
08412cea +0x098:  mov    %eax,(%esp)
08412ced +0x09b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
08412cf2 +0x0a0:  jmp    08412d0c <+0xba>
08412cf4 +0x0a2:  mov    %edx,%ebx
08412cf6 +0x0a4:  mov    %eax,%esi
08412cf8 +0x0a6:  lea    -0x11(%ebp),%eax
08412cfb +0x0a9:  mov    %eax,(%esp)
08412cfe +0x0ac:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08412d03 +0x0b1:  mov    %esi,%eax
08412d05 +0x0b3:  mov    %ebx,%edx
08412d07 +0x0b5:  jmp    08412e89 <+0x237>
08412d0c +0x0ba:  lea    -0x11(%ebp),%eax
08412d0f +0x0bd:  mov    %eax,(%esp)
08412d12 +0x0c0:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
08412d17 +0x0c5:  movl   $0xffffffff,0x8(%esp)
08412d1f +0x0cd:  movl   $".",0x4(%esp)
08412d27 +0x0d5:  lea    -0x18(%ebp),%eax
08412d2a +0x0d8:  mov    %eax,(%esp)
08412d2d +0x0db:  call   08706ec0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xad0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xad0
08412d32 +0x0e0:  movl   $0xffffffff,0x8(%esp)
08412d3a +0x0e8:  mov    %eax,0x4(%esp)
08412d3e +0x0ec:  lea    -0x18(%ebp),%eax
08412d41 +0x0ef:  mov    %eax,(%esp)
08412d44 +0x0f2:  call   08708af0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2700>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2700
08412d49 +0x0f7:  movl   $0xffffffff,0x8(%esp)
08412d51 +0x0ff:  movl   $".",0x4(%esp)
08412d59 +0x107:  lea    -0x1c(%ebp),%eax
08412d5c +0x10a:  mov    %eax,(%esp)
08412d5f +0x10d:  call   08706ec0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xad0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xad0
08412d64 +0x112:  add    $0x1,%eax
08412d67 +0x115:  mov    %eax,0x8(%esp)
08412d6b +0x119:  movl   $0x0,0x4(%esp)
08412d73 +0x121:  lea    -0x1c(%ebp),%eax
08412d76 +0x124:  mov    %eax,(%esp)
08412d79 +0x127:  call   08708af0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2700>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2700
08412d7e +0x12c:  mov    %eax,(%esp)
08412d81 +0x12f:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08412d86 +0x134:  mov    %eax,(%esp)
08412d89 +0x137:  call   0807e6f0 <_init+0xfe8>
08412d8e +0x13c:  mov    %eax,-0xc(%ebp)
08412d91 +0x13f:  lea    -0x18(%ebp),%eax
08412d94 +0x142:  mov    %eax,(%esp)
08412d97 +0x145:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08412d9c +0x14a:  mov    -0xc(%ebp),%edx
08412d9f +0x14d:  mov    %edx,0x10(%esp)
08412da3 +0x151:  mov    -0xc(%ebp),%edx
08412da6 +0x154:  mov    %edx,0xc(%esp)
08412daa +0x158:  mov    %eax,0x8(%esp)
08412dae +0x15c:  movl   $"seLect count(*) from dnf_pcroom where ip='%s' and start_ip <= %d and end_ip >= %d",0x4(%esp)
08412db6 +0x164:  mov    -0x10(%ebp),%eax
08412db9 +0x167:  mov    %eax,(%esp)
08412dbc +0x16a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412dc1 +0x16f:  movl   $0x1,0x4(%esp)
08412dc9 +0x177:  mov    -0x10(%ebp),%eax
08412dcc +0x17a:  mov    %eax,(%esp)
08412dcf +0x17d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412dd4 +0x182:  xor    $0x1,%eax
08412dd7 +0x185:  test   %al,%al
08412dd9 +0x187:  jne    08412dea <+0x198>
08412ddb +0x189:  mov    -0x10(%ebp),%eax
08412dde +0x18c:  mov    %eax,(%esp)
08412de1 +0x18f:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08412de6 +0x194:  test   %eax,%eax
08412de8 +0x196:  jne    08412df1 <+0x19f>
08412dea +0x198:  mov    $0x1,%eax
08412def +0x19d:  jmp    08412df6 <+0x1a4>
08412df1 +0x19f:  mov    $0x0,%eax
08412df6 +0x1a4:  test   %al,%al
08412df8 +0x1a6:  je     08412e01 <+0x1af>
08412dfa +0x1a8:  mov    $0x0,%ebx
08412dff +0x1ad:  jmp    08412e7c <+0x22a>
08412e01 +0x1af:  mov    -0x10(%ebp),%eax
08412e04 +0x1b2:  mov    %eax,(%esp)
08412e07 +0x1b5:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08412e0c +0x1ba:  xor    $0x1,%eax
08412e0f +0x1bd:  test   %al,%al
08412e11 +0x1bf:  je     08412e1a <+0x1c8>
08412e13 +0x1c1:  mov    $0x0,%ebx
08412e18 +0x1c6:  jmp    08412e7c <+0x22a>
08412e1a +0x1c8:  movl   $0x0,-0x20(%ebp)
08412e21 +0x1cf:  lea    -0x20(%ebp),%eax
08412e24 +0x1d2:  mov    %eax,0x8(%esp)
08412e28 +0x1d6:  movl   $0x0,0x4(%esp)
08412e30 +0x1de:  mov    -0x10(%ebp),%eax
08412e33 +0x1e1:  mov    %eax,(%esp)
08412e36 +0x1e4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412e3b +0x1e9:  xor    $0x1,%eax
08412e3e +0x1ec:  test   %al,%al
08412e40 +0x1ee:  jne    08412e49 <+0x1f7>
08412e42 +0x1f0:  mov    -0x20(%ebp),%eax
08412e45 +0x1f3:  test   %eax,%eax
08412e47 +0x1f5:  jne    08412e50 <+0x1fe>
08412e49 +0x1f7:  mov    $0x1,%eax
08412e4e +0x1fc:  jmp    08412e55 <+0x203>
08412e50 +0x1fe:  mov    $0x0,%eax
08412e55 +0x203:  test   %al,%al
08412e57 +0x205:  je     08412e60 <+0x20e>
08412e59 +0x207:  mov    $0x0,%ebx
08412e5e +0x20c:  jmp    08412e7c <+0x22a>
08412e60 +0x20e:  mov    $0x1,%ebx
08412e65 +0x213:  jmp    08412e7c <+0x22a>
08412e67 +0x215:  mov    %edx,%ebx
08412e69 +0x217:  mov    %eax,%esi
08412e6b +0x219:  lea    -0x1c(%ebp),%eax
08412e6e +0x21c:  mov    %eax,(%esp)
08412e71 +0x21f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08412e76 +0x224:  mov    %esi,%eax
08412e78 +0x226:  mov    %ebx,%edx
08412e7a +0x228:  jmp    08412e89 <+0x237>
08412e7c +0x22a:  lea    -0x1c(%ebp),%eax
08412e7f +0x22d:  mov    %eax,(%esp)
08412e82 +0x230:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08412e87 +0x235:  jmp    08412ea4 <+0x252>
08412e89 +0x237:  mov    %edx,%ebx
08412e8b +0x239:  mov    %eax,%esi
08412e8d +0x23b:  lea    -0x18(%ebp),%eax
08412e90 +0x23e:  mov    %eax,(%esp)
08412e93 +0x241:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08412e98 +0x246:  mov    %esi,%eax
08412e9a +0x248:  mov    %ebx,%edx
08412e9c +0x24a:  mov    %eax,(%esp)
08412e9f +0x24d:  call   08ae3750 <_Unwind_Resume>
08412ea4 +0x252:  lea    -0x18(%ebp),%eax
08412ea7 +0x255:  mov    %eax,(%esp)
08412eaa +0x258:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08412eaf +0x25d:  mov    %ebx,%eax
08412eb1 +0x25f:  add    $0x40,%esp
08412eb4 +0x262:  pop    %ebx
08412eb5 +0x263:  pop    %esi
08412eb6 +0x264:  pop    %ebp
08412eb7 +0x265:  ret
```

## 反编译 C

```c
// DB_Login::IsPCRoomIP @ 0x8412c52

/* DB_Login::IsPCRoomIP(char*) */

undefined4 __thiscall DB_Login::IsPCRoomIP(DB_Login *this,char *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  string *this_00;
  char *__nptr;
  undefined4 uVar5;
  int local_24;
  string local_20 [4];
  string local_1c [6];
  allocator<char> local_16;
  allocator<char> local_15;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)_GetDNFAccountDB();
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    std::allocator<char>::allocator();
                    /* try { // try from 08412ca1 to 08412ca5 has its CatchHandler @ 08412ca8 */
    std::string::string(local_1c,param_1,(allocator *)&local_16);
    std::allocator<char>::~allocator(&local_16);
    std::allocator<char>::allocator();
                    /* try { // try from 08412ced to 08412cf1 has its CatchHandler @ 08412cf4 */
    std::string::string(local_20,param_1,(allocator *)&local_15);
    std::allocator<char>::~allocator(&local_15);
                    /* try { // try from 08412d2d to 08412e0b has its CatchHandler @ 08412e67 */
    uVar3 = std::string::find_last_of(local_1c,".",0xffffffff);
    std::string::erase(local_1c,uVar3,0xffffffff);
    iVar4 = std::string::find_last_of(local_20,".",0xffffffff);
    this_00 = (string *)std::string::erase(local_20,0,iVar4 + 1);
    __nptr = (char *)std::string::c_str(this_00);
    local_10 = atoi(__nptr);
    uVar5 = std::string::c_str(local_1c);
    MySQL::set_query(local_14,
                     "seLect count(*) from dnf_pcroom where ip=\'%s\' and start_ip <= %d and end_ip >= %d"
                     ,uVar5,local_10,local_10);
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_14), iVar4 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      cVar2 = MySQL::fetch(local_14);
      if (cVar2 == '\x01') {
        local_24 = 0;
        cVar2 = MySQL::get_int(local_14,0,&local_24);
        if ((cVar2 == '\x01') && (local_24 != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
    }
                    /* try { // try from 08412e82 to 08412e86 has its CatchHandler @ 08412e89 */
    std::string::~string(local_20);
    std::string::~string(local_1c);
    return uVar5;
  }
  return 0;
}
```
