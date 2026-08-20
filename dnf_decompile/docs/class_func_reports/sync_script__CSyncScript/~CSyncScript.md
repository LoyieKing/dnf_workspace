# ~CSyncScript

`_ZN11sync_script11CSyncScriptD1Ev`

`sync_script::CSyncScript::~CSyncScript()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861cd7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861cd7a  _ZN11sync_script11CSyncScriptD1Ev
#           sync_script::CSyncScript::~CSyncScript()
# range [0x0861cd7a, 0x0861cf09]
0861cd7a +0x000:  push   %ebp
0861cd7b +0x001:  mov    %esp,%ebp
0861cd7d +0x003:  push   %esi
0861cd7e +0x004:  push   %ebx
0861cd7f +0x005:  sub    $0x10,%esp
0861cd82 +0x008:  mov    0x8(%ebp),%eax
0861cd85 +0x00b:  add    $0x4,%eax
0861cd88 +0x00e:  mov    %eax,(%esp)
0861cd8b +0x011:  call   080e4cf6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x1c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x1c
0861cd90 +0x016:  mov    0x8(%ebp),%eax
0861cd93 +0x019:  add    $0x10,%eax
0861cd96 +0x01c:  mov    %eax,(%esp)
0861cd99 +0x01f:  call   080e4cf6 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x1c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x1c
0861cd9e +0x024:  mov    0x8(%ebp),%eax
0861cda1 +0x027:  add    $0x1c,%eax
0861cda4 +0x02a:  mov    %eax,(%esp)
0861cda7 +0x02d:  call   086281a8 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1806>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1806
0861cdac +0x032:  mov    0x8(%ebp),%eax
0861cdaf +0x035:  add    $0x34,%eax
0861cdb2 +0x038:  mov    %eax,(%esp)
0861cdb5 +0x03b:  call   086281bc <_GLOBAL__I__Z22GetSocketTypeCharactert+0x181a>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x181a
0861cdba +0x040:  mov    0x8(%ebp),%eax
0861cdbd +0x043:  add    $0x4c,%eax
0861cdc0 +0x046:  mov    %eax,(%esp)
0861cdc3 +0x049:  call   086281d0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x182e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x182e
0861cdc8 +0x04e:  mov    0x8(%ebp),%eax
0861cdcb +0x051:  add    $0x64,%eax
0861cdce +0x054:  mov    %eax,(%esp)
0861cdd1 +0x057:  call   086281e4 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1842>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1842
0861cdd6 +0x05c:  mov    0x8(%ebp),%eax
0861cdd9 +0x05f:  add    $0x7c,%eax
0861cddc +0x062:  mov    %eax,(%esp)
0861cddf +0x065:  call   086281e4 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1842>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1842
0861cde4 +0x06a:  jmp    0861cdfe <+0x84>
0861cde6 +0x06c:  mov    %edx,%ebx
0861cde8 +0x06e:  mov    %eax,%esi
0861cdea +0x070:  mov    0x8(%ebp),%eax
0861cded +0x073:  add    $0x7c,%eax
0861cdf0 +0x076:  mov    %eax,(%esp)
0861cdf3 +0x079:  call   08627baa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1208>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1208
0861cdf8 +0x07e:  mov    %esi,%eax
0861cdfa +0x080:  mov    %ebx,%edx
0861cdfc +0x082:  jmp    0861ce0e <+0x94>
0861cdfe +0x084:  mov    0x8(%ebp),%eax
0861ce01 +0x087:  add    $0x7c,%eax
0861ce04 +0x08a:  mov    %eax,(%esp)
0861ce07 +0x08d:  call   08627baa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1208>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1208
0861ce0c +0x092:  jmp    0861ce26 <+0xac>
0861ce0e +0x094:  mov    %edx,%ebx
0861ce10 +0x096:  mov    %eax,%esi
0861ce12 +0x098:  mov    0x8(%ebp),%eax
0861ce15 +0x09b:  add    $0x64,%eax
0861ce18 +0x09e:  mov    %eax,(%esp)
0861ce1b +0x0a1:  call   08627baa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1208>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1208
0861ce20 +0x0a6:  mov    %esi,%eax
0861ce22 +0x0a8:  mov    %ebx,%edx
0861ce24 +0x0aa:  jmp    0861ce36 <+0xbc>
0861ce26 +0x0ac:  mov    0x8(%ebp),%eax
0861ce29 +0x0af:  add    $0x64,%eax
0861ce2c +0x0b2:  mov    %eax,(%esp)
0861ce2f +0x0b5:  call   08627baa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1208>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1208
0861ce34 +0x0ba:  jmp    0861ce4e <+0xd4>
0861ce36 +0x0bc:  mov    %edx,%ebx
0861ce38 +0x0be:  mov    %eax,%esi
0861ce3a +0x0c0:  mov    0x8(%ebp),%eax
0861ce3d +0x0c3:  add    $0x4c,%eax
0861ce40 +0x0c6:  mov    %eax,(%esp)
0861ce43 +0x0c9:  call   08627b96 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11f4>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11f4
0861ce48 +0x0ce:  mov    %esi,%eax
0861ce4a +0x0d0:  mov    %ebx,%edx
0861ce4c +0x0d2:  jmp    0861ce5e <+0xe4>
0861ce4e +0x0d4:  mov    0x8(%ebp),%eax
0861ce51 +0x0d7:  add    $0x4c,%eax
0861ce54 +0x0da:  mov    %eax,(%esp)
0861ce57 +0x0dd:  call   08627b96 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11f4>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11f4
0861ce5c +0x0e2:  jmp    0861ce76 <+0xfc>
0861ce5e +0x0e4:  mov    %edx,%ebx
0861ce60 +0x0e6:  mov    %eax,%esi
0861ce62 +0x0e8:  mov    0x8(%ebp),%eax
0861ce65 +0x0eb:  add    $0x34,%eax
0861ce68 +0x0ee:  mov    %eax,(%esp)
0861ce6b +0x0f1:  call   08627b82 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11e0>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11e0
0861ce70 +0x0f6:  mov    %esi,%eax
0861ce72 +0x0f8:  mov    %ebx,%edx
0861ce74 +0x0fa:  jmp    0861ce86 <+0x10c>
0861ce76 +0x0fc:  mov    0x8(%ebp),%eax
0861ce79 +0x0ff:  add    $0x34,%eax
0861ce7c +0x102:  mov    %eax,(%esp)
0861ce7f +0x105:  call   08627b82 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11e0>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11e0
0861ce84 +0x10a:  jmp    0861ce9e <+0x124>
0861ce86 +0x10c:  mov    %edx,%ebx
0861ce88 +0x10e:  mov    %eax,%esi
0861ce8a +0x110:  mov    0x8(%ebp),%eax
0861ce8d +0x113:  add    $0x1c,%eax
0861ce90 +0x116:  mov    %eax,(%esp)
0861ce93 +0x119:  call   08627b6e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11cc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11cc
0861ce98 +0x11e:  mov    %esi,%eax
0861ce9a +0x120:  mov    %ebx,%edx
0861ce9c +0x122:  jmp    0861ceae <+0x134>
0861ce9e +0x124:  mov    0x8(%ebp),%eax
0861cea1 +0x127:  add    $0x1c,%eax
0861cea4 +0x12a:  mov    %eax,(%esp)
0861cea7 +0x12d:  call   08627b6e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11cc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11cc
0861ceac +0x132:  jmp    0861cec6 <+0x14c>
0861ceae +0x134:  mov    %edx,%ebx
0861ceb0 +0x136:  mov    %eax,%esi
0861ceb2 +0x138:  mov    0x8(%ebp),%eax
0861ceb5 +0x13b:  add    $0x10,%eax
0861ceb8 +0x13e:  mov    %eax,(%esp)
0861cebb +0x141:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0861cec0 +0x146:  mov    %esi,%eax
0861cec2 +0x148:  mov    %ebx,%edx
0861cec4 +0x14a:  jmp    0861ced6 <+0x15c>
0861cec6 +0x14c:  mov    0x8(%ebp),%eax
0861cec9 +0x14f:  add    $0x10,%eax
0861cecc +0x152:  mov    %eax,(%esp)
0861cecf +0x155:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0861ced4 +0x15a:  jmp    0861cef4 <+0x17a>
0861ced6 +0x15c:  mov    %edx,%ebx
0861ced8 +0x15e:  mov    %eax,%esi
0861ceda +0x160:  mov    0x8(%ebp),%eax
0861cedd +0x163:  add    $0x4,%eax
0861cee0 +0x166:  mov    %eax,(%esp)
0861cee3 +0x169:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0861cee8 +0x16e:  mov    %esi,%eax
0861ceea +0x170:  mov    %ebx,%edx
0861ceec +0x172:  mov    %eax,(%esp)
0861ceef +0x175:  call   08ae3750 <_Unwind_Resume>
0861cef4 +0x17a:  mov    0x8(%ebp),%eax
0861cef7 +0x17d:  add    $0x4,%eax
0861cefa +0x180:  mov    %eax,(%esp)
0861cefd +0x183:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0861cf02 +0x188:  add    $0x10,%esp
0861cf05 +0x18b:  pop    %ebx
0861cf06 +0x18c:  pop    %esi
0861cf07 +0x18d:  pop    %ebp
0861cf08 +0x18e:  ret
0861cf09 +0x18f:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::~CSyncScript @ 0x861cd7a

/* sync_script::CSyncScript::~CSyncScript() */

void __thiscall sync_script::CSyncScript::~CSyncScript(CSyncScript *this)

{
                    /* try { // try from 0861cd8b to 0861cde3 has its CatchHandler @ 0861cde6 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::clear
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  std::
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::clear((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
           *)(this + 0x1c));
  std::
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::clear((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
           *)(this + 0x34));
  std::
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::clear((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
           *)(this + 0x4c));
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::clear((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
           *)(this + 100));
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::clear((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
           *)(this + 0x7c));
                    /* try { // try from 0861ce07 to 0861ce0b has its CatchHandler @ 0861ce0e */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::~map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          *)(this + 0x7c));
                    /* try { // try from 0861ce2f to 0861ce33 has its CatchHandler @ 0861ce36 */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::~map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
          *)(this + 100));
                    /* try { // try from 0861ce57 to 0861ce5b has its CatchHandler @ 0861ce5e */
  std::
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::~map((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
          *)(this + 0x4c));
                    /* try { // try from 0861ce7f to 0861ce83 has its CatchHandler @ 0861ce86 */
  std::
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::~map((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
          *)(this + 0x34));
                    /* try { // try from 0861cea7 to 0861ceab has its CatchHandler @ 0861ceae */
  std::
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::~map((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
          *)(this + 0x1c));
                    /* try { // try from 0861cecf to 0861ced3 has its CatchHandler @ 0861ced6 */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
  std::vector<unsigned_char,std::allocator<unsigned_char>>::~vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
  return;
}
```
