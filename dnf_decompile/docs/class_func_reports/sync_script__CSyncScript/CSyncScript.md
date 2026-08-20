# CSyncScript

`_ZN11sync_script11CSyncScriptC1Ev`

`sync_script::CSyncScript::CSyncScript()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x0861cc6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0861cc6c  _ZN11sync_script11CSyncScriptC1Ev
#           sync_script::CSyncScript::CSyncScript()
# range [0x0861cc6c, 0x0861cd79]
0861cc6c +0x000:  push   %ebp
0861cc6d +0x001:  mov    %esp,%ebp
0861cc6f +0x003:  push   %esi
0861cc70 +0x004:  push   %ebx
0861cc71 +0x005:  sub    $0x10,%esp
0861cc74 +0x008:  mov    0x8(%ebp),%eax
0861cc77 +0x00b:  add    $0x4,%eax
0861cc7a +0x00e:  mov    %eax,(%esp)
0861cc7d +0x011:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
0861cc82 +0x016:  mov    0x8(%ebp),%eax
0861cc85 +0x019:  add    $0x10,%eax
0861cc88 +0x01c:  mov    %eax,(%esp)
0861cc8b +0x01f:  call   080e4d12 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x38>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x38
0861cc90 +0x024:  mov    0x8(%ebp),%eax
0861cc93 +0x027:  add    $0x1c,%eax
0861cc96 +0x02a:  mov    %eax,(%esp)
0861cc99 +0x02d:  call   08627fc0 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x161e>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x161e
0861cc9e +0x032:  mov    0x8(%ebp),%eax
0861cca1 +0x035:  add    $0x34,%eax
0861cca4 +0x038:  mov    %eax,(%esp)
0861cca7 +0x03b:  call   0862803a <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1698>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1698
0861ccac +0x040:  mov    0x8(%ebp),%eax
0861ccaf +0x043:  add    $0x4c,%eax
0861ccb2 +0x046:  mov    %eax,(%esp)
0861ccb5 +0x049:  call   086280b4 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1712>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1712
0861ccba +0x04e:  mov    0x8(%ebp),%eax
0861ccbd +0x051:  add    $0x64,%eax
0861ccc0 +0x054:  mov    %eax,(%esp)
0861ccc3 +0x057:  call   0862812e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x178c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x178c
0861ccc8 +0x05c:  mov    0x8(%ebp),%eax
0861cccb +0x05f:  add    $0x7c,%eax
0861ccce +0x062:  mov    %eax,(%esp)
0861ccd1 +0x065:  call   0862812e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x178c>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x178c
0861ccd6 +0x06a:  mov    0x8(%ebp),%eax
0861ccd9 +0x06d:  movb   $0x0,(%eax)
0861ccdc +0x070:  add    $0x10,%esp
0861ccdf +0x073:  pop    %ebx
0861cce0 +0x074:  pop    %esi
0861cce1 +0x075:  pop    %ebp
0861cce2 +0x076:  ret
0861cce3 +0x077:  mov    %edx,%ebx
0861cce5 +0x079:  mov    %eax,%esi
0861cce7 +0x07b:  mov    0x8(%ebp),%eax
0861ccea +0x07e:  add    $0x64,%eax
0861cced +0x081:  mov    %eax,(%esp)
0861ccf0 +0x084:  call   08627baa <_GLOBAL__I__Z22GetSocketTypeCharactert+0x1208>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x1208
0861ccf5 +0x089:  mov    %esi,%eax
0861ccf7 +0x08b:  mov    %ebx,%edx
0861ccf9 +0x08d:  jmp    0861ccfb <+0x8f>
0861ccfb +0x08f:  mov    %edx,%ebx
0861ccfd +0x091:  mov    %eax,%esi
0861ccff +0x093:  mov    0x8(%ebp),%eax
0861cd02 +0x096:  add    $0x4c,%eax
0861cd05 +0x099:  mov    %eax,(%esp)
0861cd08 +0x09c:  call   08627b96 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11f4>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11f4
0861cd0d +0x0a1:  mov    %esi,%eax
0861cd0f +0x0a3:  mov    %ebx,%edx
0861cd11 +0x0a5:  jmp    0861cd13 <+0xa7>
0861cd13 +0x0a7:  mov    %edx,%ebx
0861cd15 +0x0a9:  mov    %eax,%esi
0861cd17 +0x0ab:  mov    0x8(%ebp),%eax
0861cd1a +0x0ae:  add    $0x34,%eax
0861cd1d +0x0b1:  mov    %eax,(%esp)
0861cd20 +0x0b4:  call   08627b82 <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11e0>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11e0
0861cd25 +0x0b9:  mov    %esi,%eax
0861cd27 +0x0bb:  mov    %ebx,%edx
0861cd29 +0x0bd:  jmp    0861cd2b <+0xbf>
0861cd2b +0x0bf:  mov    %edx,%ebx
0861cd2d +0x0c1:  mov    %eax,%esi
0861cd2f +0x0c3:  mov    0x8(%ebp),%eax
0861cd32 +0x0c6:  add    $0x1c,%eax
0861cd35 +0x0c9:  mov    %eax,(%esp)
0861cd38 +0x0cc:  call   08627b6e <_GLOBAL__I__Z22GetSocketTypeCharactert+0x11cc>  ; global constructors keyed to GetSocketTypeCharacter(unsigned short)+0x11cc
0861cd3d +0x0d1:  mov    %esi,%eax
0861cd3f +0x0d3:  mov    %ebx,%edx
0861cd41 +0x0d5:  jmp    0861cd43 <+0xd7>
0861cd43 +0x0d7:  mov    %edx,%ebx
0861cd45 +0x0d9:  mov    %eax,%esi
0861cd47 +0x0db:  mov    0x8(%ebp),%eax
0861cd4a +0x0de:  add    $0x10,%eax
0861cd4d +0x0e1:  mov    %eax,(%esp)
0861cd50 +0x0e4:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0861cd55 +0x0e9:  mov    %esi,%eax
0861cd57 +0x0eb:  mov    %ebx,%edx
0861cd59 +0x0ed:  jmp    0861cd5b <+0xef>
0861cd5b +0x0ef:  mov    %edx,%ebx
0861cd5d +0x0f1:  mov    %eax,%esi
0861cd5f +0x0f3:  mov    0x8(%ebp),%eax
0861cd62 +0x0f6:  add    $0x4,%eax
0861cd65 +0x0f9:  mov    %eax,(%esp)
0861cd68 +0x0fc:  call   080e4d26 <_GLOBAL__I__ZN19CCharacInformNoticeC2Ev+0x4c>  ; global constructors keyed to CCharacInformNotice::CCharacInformNotice()+0x4c
0861cd6d +0x101:  mov    %esi,%eax
0861cd6f +0x103:  mov    %ebx,%edx
0861cd71 +0x105:  mov    %eax,(%esp)
0861cd74 +0x108:  call   08ae3750 <_Unwind_Resume>
0861cd79 +0x10d:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::CSyncScript @ 0x861cc6c

/* sync_script::CSyncScript::CSyncScript() */

void __thiscall sync_script::CSyncScript::CSyncScript(CSyncScript *this)

{
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 4));
                    /* try { // try from 0861cc8b to 0861cc8f has its CatchHandler @ 0861cd5b */
  std::vector<unsigned_char,std::allocator<unsigned_char>>::vector
            ((vector<unsigned_char,std::allocator<unsigned_char>> *)(this + 0x10));
                    /* try { // try from 0861cc99 to 0861cc9d has its CatchHandler @ 0861cd43 */
  std::
  map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::map((map<std::string,sync_script::CSyncScript::SITEMTYPE,std::less<std::string>,std::allocator<std::pair<std::string_const,sync_script::CSyncScript::SITEMTYPE>>>
         *)(this + 0x1c));
                    /* try { // try from 0861cca7 to 0861ccab has its CatchHandler @ 0861cd2b */
  std::
  map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::map((map<sync_script::CSyncScript::SWEAPONTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SWEAPONTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SWEAPONTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
         *)(this + 0x34));
                    /* try { // try from 0861ccb5 to 0861ccb9 has its CatchHandler @ 0861cd13 */
  std::
  map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
  ::map((map<sync_script::CSyncScript::SARMORTYPE,sync_script::CSyncScript::SITEMTYPE,std::less<sync_script::CSyncScript::SARMORTYPE>,std::allocator<std::pair<sync_script::CSyncScript::SARMORTYPE_const,sync_script::CSyncScript::SITEMTYPE>>>
         *)(this + 0x4c));
                    /* try { // try from 0861ccc3 to 0861ccc7 has its CatchHandler @ 0861ccfb */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
         *)(this + 100));
                    /* try { // try from 0861ccd1 to 0861ccd5 has its CatchHandler @ 0861cce3 */
  std::
  map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
  ::map((map<unsigned_char,std::string,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,std::string>>>
         *)(this + 0x7c));
  *this = (CSyncScript)0x0;
  return;
}
```
