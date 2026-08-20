# STAIInfoScript

`_ZN14STAIInfoScriptC1ERKS_`

`STAIInfoScript::STAIInfoScript(STAIInfoScript const&)`

| 类 | 地址 |
|---|---|
| `STAIInfoScript` | `0x08a38bc6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a38bc6  _ZN14STAIInfoScriptC1ERKS_
#           STAIInfoScript::STAIInfoScript(STAIInfoScript const&)
# range [0x08a38bc6, 0x08a38e33]
08a38bc6 +0x000:  push   %ebp
08a38bc7 +0x001:  mov    %esp,%ebp
08a38bc9 +0x003:  push   %edi
08a38bca +0x004:  push   %esi
08a38bcb +0x005:  push   %ebx
08a38bcc +0x006:  sub    $0x2c,%esp
08a38bcf +0x009:  mov    0x8(%ebp),%eax
08a38bd2 +0x00c:  movl   $&_ZTV14STAIInfoScript+0x8,(%eax)
08a38bd8 +0x012:  mov    0x8(%ebp),%eax
08a38bdb +0x015:  add    $0xc,%eax
08a38bde +0x018:  mov    %eax,(%esp)
08a38be1 +0x01b:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08a38be6 +0x020:  mov    0x8(%ebp),%eax
08a38be9 +0x023:  lea    0x10(%eax),%esi
08a38bec +0x026:  mov    %esi,%edi
08a38bee +0x028:  mov    $0x4,%ebx
08a38bf3 +0x02d:  jmp    08a38c03 <+0x3d>
08a38bf5 +0x02f:  mov    %edi,(%esp)
08a38bf8 +0x032:  call   08380f62 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x10a02>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x10a02
08a38bfd +0x037:  add    $0xc,%edi
08a38c00 +0x03a:  sub    $0x1,%ebx
08a38c03 +0x03d:  cmp    $0xffffffff,%ebx
08a38c06 +0x040:  setne  %al
08a38c09 +0x043:  test   %al,%al
08a38c0b +0x045:  jne    08a38bf5 <+0x2f>
08a38c0d +0x047:  jmp    08a38c48 <+0x82>
08a38c0f +0x049:  mov    %edx,%edi
08a38c11 +0x04b:  mov    %eax,-0x20(%ebp)
08a38c14 +0x04e:  test   %esi,%esi
08a38c16 +0x050:  je     08a38c3e <+0x78>
08a38c18 +0x052:  mov    $0x4,%eax
08a38c1d +0x057:  sub    %ebx,%eax
08a38c1f +0x059:  mov    %eax,%edx
08a38c21 +0x05b:  mov    %edx,%eax
08a38c23 +0x05d:  add    %eax,%eax
08a38c25 +0x05f:  add    %edx,%eax
08a38c27 +0x061:  shl    $0x2,%eax
08a38c2a +0x064:  lea    (%esi,%eax,1),%ebx
08a38c2d +0x067:  cmp    %esi,%ebx
08a38c2f +0x069:  je     08a38c3e <+0x78>
08a38c31 +0x06b:  sub    $0xc,%ebx
08a38c34 +0x06e:  mov    %ebx,(%esp)
08a38c37 +0x071:  call   08380f76 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x10a16>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x10a16
08a38c3c +0x076:  jmp    08a38c2d <+0x67>
08a38c3e +0x078:  mov    -0x20(%ebp),%eax
08a38c41 +0x07b:  mov    %edi,%edx
08a38c43 +0x07d:  jmp    08a38e0e <+0x248>
08a38c48 +0x082:  mov    0x8(%ebp),%eax
08a38c4b +0x085:  lea    0xa4(%eax),%esi
08a38c51 +0x08b:  mov    %esi,%edi
08a38c53 +0x08d:  mov    $0x15,%ebx
08a38c58 +0x092:  jmp    08a38c68 <+0xa2>
08a38c5a +0x094:  mov    %edi,(%esp)
08a38c5d +0x097:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a38c62 +0x09c:  add    $0xc,%edi
08a38c65 +0x09f:  sub    $0x1,%ebx
08a38c68 +0x0a2:  cmp    $0xffffffff,%ebx
08a38c6b +0x0a5:  setne  %al
08a38c6e +0x0a8:  test   %al,%al
08a38c70 +0x0aa:  jne    08a38c5a <+0x94>
08a38c72 +0x0ac:  jmp    08a38cad <+0xe7>
08a38c74 +0x0ae:  mov    %edx,%edi
08a38c76 +0x0b0:  mov    %eax,-0x1c(%ebp)
08a38c79 +0x0b3:  test   %esi,%esi
08a38c7b +0x0b5:  je     08a38ca3 <+0xdd>
08a38c7d +0x0b7:  mov    $0x15,%eax
08a38c82 +0x0bc:  sub    %ebx,%eax
08a38c84 +0x0be:  mov    %eax,%edx
08a38c86 +0x0c0:  mov    %edx,%eax
08a38c88 +0x0c2:  add    %eax,%eax
08a38c8a +0x0c4:  add    %edx,%eax
08a38c8c +0x0c6:  shl    $0x2,%eax
08a38c8f +0x0c9:  lea    (%esi,%eax,1),%ebx
08a38c92 +0x0cc:  cmp    %esi,%ebx
08a38c94 +0x0ce:  je     08a38ca3 <+0xdd>
08a38c96 +0x0d0:  sub    $0xc,%ebx
08a38c99 +0x0d3:  mov    %ebx,(%esp)
08a38c9c +0x0d6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38ca1 +0x0db:  jmp    08a38c92 <+0xcc>
08a38ca3 +0x0dd:  mov    -0x1c(%ebp),%eax
08a38ca6 +0x0e0:  mov    %edi,%edx
08a38ca8 +0x0e2:  jmp    08a38ddc <+0x216>
08a38cad +0x0e7:  mov    0x8(%ebp),%eax
08a38cb0 +0x0ea:  add    $0x1b0,%eax
08a38cb5 +0x0ef:  mov    %eax,(%esp)
08a38cb8 +0x0f2:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a38cbd +0x0f7:  mov    0x8(%ebp),%eax
08a38cc0 +0x0fa:  add    $0x1bc,%eax
08a38cc5 +0x0ff:  mov    %eax,(%esp)
08a38cc8 +0x102:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a38ccd +0x107:  mov    0x8(%ebp),%eax
08a38cd0 +0x10a:  add    $0x1c8,%eax
08a38cd5 +0x10f:  mov    %eax,(%esp)
08a38cd8 +0x112:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a38cdd +0x117:  mov    0x8(%ebp),%eax
08a38ce0 +0x11a:  add    $0x1d4,%eax
08a38ce5 +0x11f:  mov    %eax,(%esp)
08a38ce8 +0x122:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a38ced +0x127:  mov    0x8(%ebp),%eax
08a38cf0 +0x12a:  add    $0x1e0,%eax
08a38cf5 +0x12f:  mov    %eax,(%esp)
08a38cf8 +0x132:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08a38cfd +0x137:  mov    0x8(%ebp),%eax
08a38d00 +0x13a:  mov    %eax,(%esp)
08a38d03 +0x13d:  call   083673d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x13a0>  ; global constructors keyed to CServerEvent::m_nExpRate+0x13a0
08a38d08 +0x142:  mov    0xc(%ebp),%eax
08a38d0b +0x145:  mov    %eax,0x4(%esp)
08a38d0f +0x149:  mov    0x8(%ebp),%eax
08a38d12 +0x14c:  mov    %eax,(%esp)
08a38d15 +0x14f:  call   08a38e34 <_ZN14STAIInfoScriptaSERKS_>  ; STAIInfoScript::operator=(STAIInfoScript const&)
08a38d1a +0x154:  jmp    08a38e2c <+0x266>
08a38d1f +0x159:  mov    %edx,%ebx
08a38d21 +0x15b:  mov    %eax,%esi
08a38d23 +0x15d:  mov    0x8(%ebp),%eax
08a38d26 +0x160:  add    $0x1e0,%eax
08a38d2b +0x165:  mov    %eax,(%esp)
08a38d2e +0x168:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38d33 +0x16d:  mov    %esi,%eax
08a38d35 +0x16f:  mov    %ebx,%edx
08a38d37 +0x171:  jmp    08a38d39 <+0x173>
08a38d39 +0x173:  mov    %edx,%ebx
08a38d3b +0x175:  mov    %eax,%esi
08a38d3d +0x177:  mov    0x8(%ebp),%eax
08a38d40 +0x17a:  add    $0x1d4,%eax
08a38d45 +0x17f:  mov    %eax,(%esp)
08a38d48 +0x182:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38d4d +0x187:  mov    %esi,%eax
08a38d4f +0x189:  mov    %ebx,%edx
08a38d51 +0x18b:  jmp    08a38d53 <+0x18d>
08a38d53 +0x18d:  mov    %edx,%ebx
08a38d55 +0x18f:  mov    %eax,%esi
08a38d57 +0x191:  mov    0x8(%ebp),%eax
08a38d5a +0x194:  add    $0x1c8,%eax
08a38d5f +0x199:  mov    %eax,(%esp)
08a38d62 +0x19c:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38d67 +0x1a1:  mov    %esi,%eax
08a38d69 +0x1a3:  mov    %ebx,%edx
08a38d6b +0x1a5:  jmp    08a38d6d <+0x1a7>
08a38d6d +0x1a7:  mov    %edx,%ebx
08a38d6f +0x1a9:  mov    %eax,%esi
08a38d71 +0x1ab:  mov    0x8(%ebp),%eax
08a38d74 +0x1ae:  add    $0x1bc,%eax
08a38d79 +0x1b3:  mov    %eax,(%esp)
08a38d7c +0x1b6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38d81 +0x1bb:  mov    %esi,%eax
08a38d83 +0x1bd:  mov    %ebx,%edx
08a38d85 +0x1bf:  jmp    08a38d87 <+0x1c1>
08a38d87 +0x1c1:  mov    %edx,%ebx
08a38d89 +0x1c3:  mov    %eax,%esi
08a38d8b +0x1c5:  mov    0x8(%ebp),%eax
08a38d8e +0x1c8:  add    $0x1b0,%eax
08a38d93 +0x1cd:  mov    %eax,(%esp)
08a38d96 +0x1d0:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38d9b +0x1d5:  mov    %esi,%eax
08a38d9d +0x1d7:  mov    %ebx,%edx
08a38d9f +0x1d9:  jmp    08a38da1 <+0x1db>
08a38da1 +0x1db:  mov    %edx,%esi
08a38da3 +0x1dd:  mov    %eax,%edi
08a38da5 +0x1df:  mov    0x8(%ebp),%eax
08a38da8 +0x1e2:  add    $0xa4,%eax
08a38dad +0x1e7:  test   %eax,%eax
08a38daf +0x1e9:  je     08a38dd8 <+0x212>
08a38db1 +0x1eb:  mov    0x8(%ebp),%eax
08a38db4 +0x1ee:  add    $0xa4,%eax
08a38db9 +0x1f3:  lea    0x108(%eax),%ebx
08a38dbf +0x1f9:  mov    0x8(%ebp),%eax
08a38dc2 +0x1fc:  add    $0xa4,%eax
08a38dc7 +0x201:  cmp    %eax,%ebx
08a38dc9 +0x203:  je     08a38dd8 <+0x212>
08a38dcb +0x205:  sub    $0xc,%ebx
08a38dce +0x208:  mov    %ebx,(%esp)
08a38dd1 +0x20b:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08a38dd6 +0x210:  jmp    08a38dbf <+0x1f9>
08a38dd8 +0x212:  mov    %edi,%eax
08a38dda +0x214:  mov    %esi,%edx
08a38ddc +0x216:  mov    %edx,%esi
08a38dde +0x218:  mov    %eax,%edi
08a38de0 +0x21a:  mov    0x8(%ebp),%eax
08a38de3 +0x21d:  add    $0x10,%eax
08a38de6 +0x220:  test   %eax,%eax
08a38de8 +0x222:  je     08a38e0a <+0x244>
08a38dea +0x224:  mov    0x8(%ebp),%eax
08a38ded +0x227:  add    $0x10,%eax
08a38df0 +0x22a:  lea    0x3c(%eax),%ebx
08a38df3 +0x22d:  mov    0x8(%ebp),%eax
08a38df6 +0x230:  add    $0x10,%eax
08a38df9 +0x233:  cmp    %eax,%ebx
08a38dfb +0x235:  je     08a38e0a <+0x244>
08a38dfd +0x237:  sub    $0xc,%ebx
08a38e00 +0x23a:  mov    %ebx,(%esp)
08a38e03 +0x23d:  call   08380f76 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x10a16>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x10a16
08a38e08 +0x242:  jmp    08a38df3 <+0x22d>
08a38e0a +0x244:  mov    %edi,%eax
08a38e0c +0x246:  mov    %esi,%edx
08a38e0e +0x248:  mov    %edx,%ebx
08a38e10 +0x24a:  mov    %eax,%esi
08a38e12 +0x24c:  mov    0x8(%ebp),%eax
08a38e15 +0x24f:  add    $0xc,%eax
08a38e18 +0x252:  mov    %eax,(%esp)
08a38e1b +0x255:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08a38e20 +0x25a:  mov    %esi,%eax
08a38e22 +0x25c:  mov    %ebx,%edx
08a38e24 +0x25e:  mov    %eax,(%esp)
08a38e27 +0x261:  call   08ae3750 <_Unwind_Resume>
08a38e2c +0x266:  add    $0x2c,%esp
08a38e2f +0x269:  pop    %ebx
08a38e30 +0x26a:  pop    %esi
08a38e31 +0x26b:  pop    %edi
08a38e32 +0x26c:  pop    %ebp
08a38e33 +0x26d:  ret
```

## 反编译 C

```c
// STAIInfoScript::STAIInfoScript @ 0x8a38bc6

/* STAIInfoScript::STAIInfoScript(STAIInfoScript const&) */

void __thiscall STAIInfoScript::STAIInfoScript(STAIInfoScript *this,STAIInfoScript *param_1)

{
  int iVar1;
  vector<std::string*,std::allocator<std::string*>> *this_00;
  vector<int,std::allocator<int>> *this_01;
  
  *(undefined ***)this = &PTR__STAIInfoScript_08c34a48;
  std::string::string((string *)(this + 0xc));
  this_00 = (vector<std::string*,std::allocator<std::string*>> *)(this + 0x10);
  for (iVar1 = 4; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08a38bf8 to 08a38bfc has its CatchHandler @ 08a38c0f */
    std::vector<std::string*,std::allocator<std::string*>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  this_01 = (vector<int,std::allocator<int>> *)(this + 0xa4);
  for (iVar1 = 0x15; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08a38c5d to 08a38c61 has its CatchHandler @ 08a38c74 */
    std::vector<int,std::allocator<int>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 08a38cb8 to 08a38cbc has its CatchHandler @ 08a38da1 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1b0));
                    /* try { // try from 08a38cc8 to 08a38ccc has its CatchHandler @ 08a38d87 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1bc));
                    /* try { // try from 08a38cd8 to 08a38cdc has its CatchHandler @ 08a38d6d */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1c8));
                    /* try { // try from 08a38ce8 to 08a38cec has its CatchHandler @ 08a38d53 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1d4));
                    /* try { // try from 08a38cf8 to 08a38cfc has its CatchHandler @ 08a38d39 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1e0));
                    /* try { // try from 08a38d03 to 08a38d19 has its CatchHandler @ 08a38d1f */
  clear(this);
  operator=(this,param_1);
  return;
}
```
