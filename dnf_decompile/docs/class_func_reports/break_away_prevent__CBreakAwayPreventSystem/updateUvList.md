# updateUvList

`_ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA`

`break_away_prevent::CBreakAwayPreventSystem::updateUvList(SIG_LOGIN_DATA const*)`

| 类 | 地址 |
|---|---|
| `break_away_prevent::CBreakAwayPreventSystem` | `0x0831cb56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831cb56  _ZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATA
#           break_away_prevent::CBreakAwayPreventSystem::updateUvList(SIG_LOGIN_DATA const*)
# range [0x0831cb56, 0x0831ce5d]
0831cb56 +0x000:  push   %ebp
0831cb57 +0x001:  mov    %esp,%ebp
0831cb59 +0x003:  push   %esi
0831cb5a +0x004:  push   %ebx
0831cb5b +0x005:  sub    $0x40,%esp
0831cb5e +0x008:  mov    0xc(%ebp),%eax
0831cb61 +0x00b:  mov    0x3f50(%eax),%eax
0831cb67 +0x011:  mov    %eax,0x4(%esp)
0831cb6b +0x015:  mov    0x8(%ebp),%eax
0831cb6e +0x018:  mov    %eax,(%esp)
0831cb71 +0x01b:  call   0831c794 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj>  ; break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int)
0831cb76 +0x020:  mov    %eax,-0x14(%ebp)
0831cb79 +0x023:  cmpl   $0x0,-0x14(%ebp)
0831cb7d +0x027:  jns    0831cb86 <+0x30>
0831cb7f +0x029:  movl   $0x0,-0x14(%ebp)
0831cb86 +0x030:  mov    0xc(%ebp),%eax
0831cb89 +0x033:  mov    0x3958(%eax),%eax
0831cb8f +0x039:  mov    %eax,0x4(%esp)
0831cb93 +0x03d:  mov    0x8(%ebp),%eax
0831cb96 +0x040:  mov    %eax,(%esp)
0831cb99 +0x043:  call   0831c794 <_ZN18break_away_prevent23CBreakAwayPreventSystem17getDiffConnectDayEj>  ; break_away_prevent::CBreakAwayPreventSystem::getDiffConnectDay(unsigned int)
0831cb9e +0x048:  mov    %eax,-0x10(%ebp)
0831cba1 +0x04b:  cmpl   $0x0,-0x14(%ebp)
0831cba5 +0x04f:  jne    0831cc1a <+0xc4>
0831cba7 +0x051:  mov    0xc(%ebp),%eax
0831cbaa +0x054:  mov    0x3f50(%eax),%eax
0831cbb0 +0x05a:  test   %eax,%eax
0831cbb2 +0x05c:  jne    0831cbcb <+0x75>
0831cbb4 +0x05e:  cmpl   $0x0,-0x10(%ebp)
0831cbb8 +0x062:  jne    0831cbc3 <+0x6d>
0831cbba +0x064:  movl   $0x1,-0x14(%ebp)
0831cbc1 +0x06b:  jmp    0831cc1a <+0xc4>
0831cbc3 +0x06d:  mov    -0x10(%ebp),%eax
0831cbc6 +0x070:  mov    %eax,-0x14(%ebp)
0831cbc9 +0x073:  jmp    0831cc1a <+0xc4>
0831cbcb +0x075:  mov    0x8(%ebp),%eax
0831cbce +0x078:  add    $0x30b,%eax
0831cbd3 +0x07d:  movl   $0x1f,0x8(%esp)
0831cbdb +0x085:  movl   $0x0,0x4(%esp)
0831cbe3 +0x08d:  mov    %eax,(%esp)
0831cbe6 +0x090:  call   0807dcc0 <_init+0x5b8>
0831cbeb +0x095:  mov    0xc(%ebp),%eax
0831cbee +0x098:  lea    0x3f1c(%eax),%edx
0831cbf4 +0x09e:  mov    0x8(%ebp),%eax
0831cbf7 +0x0a1:  add    $0x30b,%eax
0831cbfc +0x0a6:  movl   $0x1f,0x8(%esp)
0831cc04 +0x0ae:  mov    %edx,0x4(%esp)
0831cc08 +0x0b2:  mov    %eax,(%esp)
0831cc0b +0x0b5:  call   0807d8a0 <_init+0x198>
0831cc10 +0x0ba:  mov    $0x1,%ebx
0831cc15 +0x0bf:  jmp    0831ce55 <+0x2ff>
0831cc1a +0x0c4:  cmpl   $0x1d,-0x14(%ebp)
0831cc1e +0x0c8:  jle    0831cc59 <+0x103>
0831cc20 +0x0ca:  mov    0x8(%ebp),%eax
0831cc23 +0x0cd:  add    $0x30b,%eax
0831cc28 +0x0d2:  movl   $0x1f,0x8(%esp)
0831cc30 +0x0da:  movl   $0x30,0x4(%esp)
0831cc38 +0x0e2:  mov    %eax,(%esp)
0831cc3b +0x0e5:  call   0807dcc0 <_init+0x5b8>
0831cc40 +0x0ea:  mov    0x8(%ebp),%eax
0831cc43 +0x0ed:  movb   $0x31,0x328(%eax)
0831cc4a +0x0f4:  mov    0x8(%ebp),%eax
0831cc4d +0x0f7:  movb   $0x0,0x329(%eax)
0831cc54 +0x0fe:  jmp    0831ce32 <+0x2dc>
0831cc59 +0x103:  mov    -0x14(%ebp),%esi
0831cc5c +0x106:  lea    -0x15(%ebp),%eax
0831cc5f +0x109:  mov    %eax,(%esp)
0831cc62 +0x10c:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
0831cc67 +0x111:  mov    0xc(%ebp),%eax
0831cc6a +0x114:  lea    0x3f1c(%eax),%edx
0831cc70 +0x11a:  lea    -0x15(%ebp),%eax
0831cc73 +0x11d:  mov    %eax,0x8(%esp)
0831cc77 +0x121:  mov    %edx,0x4(%esp)
0831cc7b +0x125:  lea    -0x1c(%ebp),%eax
0831cc7e +0x128:  mov    %eax,(%esp)
0831cc81 +0x12b:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
0831cc86 +0x130:  movl   $0x1e,0xc(%esp)
0831cc8e +0x138:  mov    %esi,0x8(%esp)
0831cc92 +0x13c:  lea    -0x1c(%ebp),%eax
0831cc95 +0x13f:  mov    %eax,0x4(%esp)
0831cc99 +0x143:  lea    -0x20(%ebp),%eax
0831cc9c +0x146:  mov    %eax,(%esp)
0831cc9f +0x149:  call   08707810 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1420>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1420
0831cca4 +0x14e:  jmp    0831ccbb <+0x165>
0831cca6 +0x150:  mov    %edx,%ebx
0831cca8 +0x152:  mov    %eax,%esi
0831ccaa +0x154:  lea    -0x1c(%ebp),%eax
0831ccad +0x157:  mov    %eax,(%esp)
0831ccb0 +0x15a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0831ccb5 +0x15f:  mov    %esi,%eax
0831ccb7 +0x161:  mov    %ebx,%edx
0831ccb9 +0x163:  jmp    0831ccdd <+0x187>
0831ccbb +0x165:  lea    -0x1c(%ebp),%eax
0831ccbe +0x168:  mov    %eax,(%esp)
0831ccc1 +0x16b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0831ccc6 +0x170:  jmp    0831ccf8 <+0x1a2>
0831ccc8 +0x172:  mov    %edx,%ebx
0831ccca +0x174:  mov    %eax,%esi
0831cccc +0x176:  lea    -0x20(%ebp),%eax
0831cccf +0x179:  mov    %eax,(%esp)
0831ccd2 +0x17c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0831ccd7 +0x181:  mov    %esi,%eax
0831ccd9 +0x183:  mov    %ebx,%edx
0831ccdb +0x185:  jmp    0831ccdd <+0x187>
0831ccdd +0x187:  mov    %edx,%ebx
0831ccdf +0x189:  mov    %eax,%esi
0831cce1 +0x18b:  lea    -0x15(%ebp),%eax
0831cce4 +0x18e:  mov    %eax,(%esp)
0831cce7 +0x191:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0831ccec +0x196:  mov    %esi,%eax
0831ccee +0x198:  mov    %ebx,%edx
0831ccf0 +0x19a:  mov    %eax,(%esp)
0831ccf3 +0x19d:  call   08ae3750 <_Unwind_Resume>
0831ccf8 +0x1a2:  lea    -0x15(%ebp),%eax
0831ccfb +0x1a5:  mov    %eax,(%esp)
0831ccfe +0x1a8:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
0831cd03 +0x1ad:  movl   $0x0,-0xc(%ebp)
0831cd0a +0x1b4:  jmp    0831cd23 <+0x1cd>
0831cd0c +0x1b6:  movl   $0x30,0x4(%esp)
0831cd14 +0x1be:  lea    -0x20(%ebp),%eax
0831cd17 +0x1c1:  mov    %eax,(%esp)
0831cd1a +0x1c4:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
0831cd1f +0x1c9:  addl   $0x1,-0xc(%ebp)
0831cd23 +0x1cd:  mov    -0x14(%ebp),%eax
0831cd26 +0x1d0:  sub    $0x1,%eax
0831cd29 +0x1d3:  cmp    -0xc(%ebp),%eax
0831cd2c +0x1d6:  setg   %al
0831cd2f +0x1d9:  test   %al,%al
0831cd31 +0x1db:  jne    0831cd0c <+0x1b6>
0831cd33 +0x1dd:  movl   $0x31,0x4(%esp)
0831cd3b +0x1e5:  lea    -0x20(%ebp),%eax
0831cd3e +0x1e8:  mov    %eax,(%esp)
0831cd41 +0x1eb:  call   08707dc0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x19d0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x19d0
0831cd46 +0x1f0:  lea    -0x20(%ebp),%eax
0831cd49 +0x1f3:  mov    %eax,(%esp)
0831cd4c +0x1f6:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0831cd51 +0x1fb:  cmp    $0x1e,%eax
0831cd54 +0x1fe:  setne  %al
0831cd57 +0x201:  test   %al,%al
0831cd59 +0x203:  je     0831cdb0 <+0x25a>
0831cd5b +0x205:  mov    0xc(%ebp),%eax
0831cd5e +0x208:  mov    0xc0(%eax),%eax
0831cd64 +0x20e:  movl   $0x0,0x4(%esp)
0831cd6c +0x216:  mov    %eax,(%esp)
0831cd6f +0x219:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0831cd74 +0x21e:  mov    %eax,0x14(%esp)
0831cd78 +0x222:  movl   $"BREAK_AWAY : UV_INFO SIZE ERROR!! M_ID(%s)",0x10(%esp)
0831cd80 +0x22a:  movl   $0x11c,0xc(%esp)
0831cd88 +0x232:  movl   $&_ZZN18break_away_prevent23CBreakAwayPreventSystem12updateUvListEPK14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0831cd90 +0x23a:  movl   $"BreakAwayPreventSystem.cpp",0x4(%esp)
0831cd98 +0x242:  movl   $0x1,(%esp)
0831cd9f +0x249:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0831cda4 +0x24e:  mov    $0x0,%ebx
0831cda9 +0x253:  mov    $0x0,%esi
0831cdae +0x258:  jmp    0831ce23 <+0x2cd>
0831cdb0 +0x25a:  mov    0x8(%ebp),%eax
0831cdb3 +0x25d:  add    $0x30b,%eax
0831cdb8 +0x262:  movl   $0x1f,0x8(%esp)
0831cdc0 +0x26a:  movl   $0x0,0x4(%esp)
0831cdc8 +0x272:  mov    %eax,(%esp)
0831cdcb +0x275:  call   0807dcc0 <_init+0x5b8>
0831cdd0 +0x27a:  lea    -0x20(%ebp),%eax
0831cdd3 +0x27d:  mov    %eax,(%esp)
0831cdd6 +0x280:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0831cddb +0x285:  mov    %eax,%esi
0831cddd +0x287:  lea    -0x20(%ebp),%eax
0831cde0 +0x28a:  mov    %eax,(%esp)
0831cde3 +0x28d:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0831cde8 +0x292:  mov    0x8(%ebp),%edx
0831cdeb +0x295:  add    $0x30b,%edx
0831cdf1 +0x29b:  mov    %esi,0x8(%esp)
0831cdf5 +0x29f:  mov    %eax,0x4(%esp)
0831cdf9 +0x2a3:  mov    %edx,(%esp)
0831cdfc +0x2a6:  call   0807d8d0 <_init+0x1c8>
0831ce01 +0x2ab:  mov    $0x1,%esi
0831ce06 +0x2b0:  jmp    0831ce23 <+0x2cd>
0831ce08 +0x2b2:  mov    %edx,%ebx
0831ce0a +0x2b4:  mov    %eax,%esi
0831ce0c +0x2b6:  lea    -0x20(%ebp),%eax
0831ce0f +0x2b9:  mov    %eax,(%esp)
0831ce12 +0x2bc:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0831ce17 +0x2c1:  mov    %esi,%eax
0831ce19 +0x2c3:  mov    %ebx,%edx
0831ce1b +0x2c5:  mov    %eax,(%esp)
0831ce1e +0x2c8:  call   08ae3750 <_Unwind_Resume>
0831ce23 +0x2cd:  lea    -0x20(%ebp),%eax
0831ce26 +0x2d0:  mov    %eax,(%esp)
0831ce29 +0x2d3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0831ce2e +0x2d8:  test   %esi,%esi
0831ce30 +0x2da:  je     0831ce55 <+0x2ff>
0831ce32 +0x2dc:  mov    0x8(%ebp),%eax
0831ce35 +0x2df:  lea    0x30b(%eax),%edx
0831ce3b +0x2e5:  mov    0xc(%ebp),%eax
0831ce3e +0x2e8:  mov    0xc0(%eax),%eax
0831ce44 +0x2ee:  mov    %edx,0x4(%esp)
0831ce48 +0x2f2:  mov    %eax,(%esp)
0831ce4b +0x2f5:  call   0843873a <_ZN24DB_UpdateBreakAwayUvList11makeRequestEjPc>  ; DB_UpdateBreakAwayUvList::makeRequest(unsigned int, char*)
0831ce50 +0x2fa:  mov    $0x1,%ebx
0831ce55 +0x2ff:  mov    %ebx,%eax
0831ce57 +0x301:  add    $0x40,%esp
0831ce5a +0x304:  pop    %ebx
0831ce5b +0x305:  pop    %esi
0831ce5c +0x306:  pop    %ebp
0831ce5d +0x307:  ret
```

## 反编译 C

```c
// break_away_prevent::CBreakAwayPreventSystem::updateUvList @ 0x831cb56

/* break_away_prevent::CBreakAwayPreventSystem::updateUvList(SIG_LOGIN_DATA const*) */

undefined4 __thiscall
break_away_prevent::CBreakAwayPreventSystem::updateUvList
          (CBreakAwayPreventSystem *this,SIG_LOGIN_DATA *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  size_t __n;
  char *__src;
  undefined4 unaff_EBX;
  string local_24 [4];
  string local_20 [7];
  allocator<char> local_19;
  uint local_18;
  uint local_14;
  int local_10;
  
  local_18 = getDiffConnectDay(this,*(uint *)(param_1 + 0x3f50));
  if ((int)local_18 < 0) {
    local_18 = 0;
  }
  local_14 = getDiffConnectDay(this,*(uint *)(param_1 + 0x3958));
  if (local_18 == 0) {
    if (*(int *)(param_1 + 0x3f50) != 0) {
      memset(this + 0x30b,0,0x1f);
      memcpy(this + 0x30b,param_1 + 0x3f1c,0x1f);
      return 1;
    }
    local_18 = local_14;
    if (local_14 == 0) {
      local_18 = 1;
    }
  }
  uVar1 = local_18;
  if ((int)local_18 < 0x1e) {
    std::allocator<char>::allocator();
                    /* try { // try from 0831cc81 to 0831cc85 has its CatchHandler @ 0831ccdd */
    std::string::string(local_20,(char *)(param_1 + 0x3f1c),(allocator *)&local_19);
                    /* try { // try from 0831cc9f to 0831cca3 has its CatchHandler @ 0831cca6 */
    std::string::string(local_24,local_20,uVar1,0x1e);
                    /* try { // try from 0831ccc1 to 0831ccc5 has its CatchHandler @ 0831ccc8 */
    std::string::~string(local_20);
    std::allocator<char>::~allocator(&local_19);
    for (local_10 = 0; local_10 < (int)(local_18 - 1); local_10 = local_10 + 1) {
                    /* try { // try from 0831cd1a to 0831cde7 has its CatchHandler @ 0831ce08 */
      std::string::push_back(local_24,'0');
    }
    std::string::push_back(local_24,'1');
    iVar2 = std::string::size(local_24);
    if (iVar2 == 0x1e) {
      memset(this + 0x30b,0,0x1f);
      __n = std::string::size(local_24);
      __src = (char *)std::string::c_str(local_24);
      strncpy((char *)(this + 0x30b),__src,__n);
    }
    else {
      uVar3 = NumberToString(*(uint *)(param_1 + 0xc0),0);
      LogManager::logFormat
                (1,"BreakAwayPreventSystem.cpp",
                 "bool break_away_prevent::CBreakAwayPreventSystem::updateUvList(const SIG_LOGIN_DATA*)"
                 ,0x11c,"BREAK_AWAY : UV_INFO SIZE ERROR!! M_ID(%s)",uVar3);
      unaff_EBX = 0;
    }
    std::string::~string(local_24);
    if (iVar2 != 0x1e) {
      return unaff_EBX;
    }
  }
  else {
    memset(this + 0x30b,0x30,0x1f);
    this[0x328] = (CBreakAwayPreventSystem)0x31;
    this[0x329] = (CBreakAwayPreventSystem)0x0;
  }
  DB_UpdateBreakAwayUvList::makeRequest(*(uint *)(param_1 + 0xc0),(char *)(this + 0x30b));
  return 1;
}
```
