# BlueMarbleScriptManager

`_ZN23BlueMarbleScriptManagerC1Ev`

`BlueMarbleScriptManager::BlueMarbleScriptManager()`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d614a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d614a  _ZN23BlueMarbleScriptManagerC1Ev
#           BlueMarbleScriptManager::BlueMarbleScriptManager()
# range [0x088d614a, 0x088d622b]
088d614a +0x00:  push   %ebp
088d614b +0x01:  mov    %esp,%ebp
088d614d +0x03:  push   %esi
088d614e +0x04:  push   %ebx
088d614f +0x05:  sub    $0x10,%esp
088d6152 +0x08:  mov    0x8(%ebp),%eax
088d6155 +0x0b:  mov    %eax,(%esp)
088d6158 +0x0e:  call   088bacf8 <_ZN16STScriptFileListC1Ev>  ; STScriptFileList::STScriptFileList()
088d615d +0x13:  mov    0x8(%ebp),%eax
088d6160 +0x16:  add    $0x18,%eax
088d6163 +0x19:  mov    %eax,(%esp)
088d6166 +0x1c:  call   088bacf8 <_ZN16STScriptFileListC1Ev>  ; STScriptFileList::STScriptFileList()
088d616b +0x21:  mov    0x8(%ebp),%eax
088d616e +0x24:  add    $0x30,%eax
088d6171 +0x27:  mov    %eax,(%esp)
088d6174 +0x2a:  call   088d5690 <_ZN20BlueMarbleInfoScriptC1Ev>  ; BlueMarbleInfoScript::BlueMarbleInfoScript()
088d6179 +0x2f:  mov    0x8(%ebp),%eax
088d617c +0x32:  add    $0xbc,%eax
088d6181 +0x37:  mov    %eax,(%esp)
088d6184 +0x3a:  call   088d6c4c <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4ce>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4ce
088d6189 +0x3f:  mov    0x8(%ebp),%eax
088d618c +0x42:  add    $0xd4,%eax
088d6191 +0x47:  mov    %eax,(%esp)
088d6194 +0x4a:  call   088d6c60 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4e2>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4e2
088d6199 +0x4f:  mov    0x8(%ebp),%eax
088d619c +0x52:  mov    %eax,(%esp)
088d619f +0x55:  call   088d622c <_ZN23BlueMarbleScriptManager5clearEv>  ; BlueMarbleScriptManager::clear()
088d61a4 +0x5a:  jmp    088d6225 <+0xdb>
088d61a6 +0x5c:  mov    %edx,%ebx
088d61a8 +0x5e:  mov    %eax,%esi
088d61aa +0x60:  mov    0x8(%ebp),%eax
088d61ad +0x63:  add    $0xd4,%eax
088d61b2 +0x68:  mov    %eax,(%esp)
088d61b5 +0x6b:  call   0837e340 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdde0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdde0
088d61ba +0x70:  mov    %esi,%eax
088d61bc +0x72:  mov    %ebx,%edx
088d61be +0x74:  jmp    088d61c0 <+0x76>
088d61c0 +0x76:  mov    %edx,%ebx
088d61c2 +0x78:  mov    %eax,%esi
088d61c4 +0x7a:  mov    0x8(%ebp),%eax
088d61c7 +0x7d:  add    $0xbc,%eax
088d61cc +0x82:  mov    %eax,(%esp)
088d61cf +0x85:  call   0837e32c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xddcc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xddcc
088d61d4 +0x8a:  mov    %esi,%eax
088d61d6 +0x8c:  mov    %ebx,%edx
088d61d8 +0x8e:  jmp    088d61da <+0x90>
088d61da +0x90:  mov    %edx,%ebx
088d61dc +0x92:  mov    %eax,%esi
088d61de +0x94:  mov    0x8(%ebp),%eax
088d61e1 +0x97:  add    $0x30,%eax
088d61e4 +0x9a:  mov    %eax,(%esp)
088d61e7 +0x9d:  call   0837e218 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xdcb8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xdcb8
088d61ec +0xa2:  mov    %esi,%eax
088d61ee +0xa4:  mov    %ebx,%edx
088d61f0 +0xa6:  jmp    088d61f2 <+0xa8>
088d61f2 +0xa8:  mov    %edx,%ebx
088d61f4 +0xaa:  mov    %eax,%esi
088d61f6 +0xac:  mov    0x8(%ebp),%eax
088d61f9 +0xaf:  add    $0x18,%eax
088d61fc +0xb2:  mov    %eax,(%esp)
088d61ff +0xb5:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
088d6204 +0xba:  mov    %esi,%eax
088d6206 +0xbc:  mov    %ebx,%edx
088d6208 +0xbe:  jmp    088d620a <+0xc0>
088d620a +0xc0:  mov    %edx,%ebx
088d620c +0xc2:  mov    %eax,%esi
088d620e +0xc4:  mov    0x8(%ebp),%eax
088d6211 +0xc7:  mov    %eax,(%esp)
088d6214 +0xca:  call   080f1352 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3d4>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3d4
088d6219 +0xcf:  mov    %esi,%eax
088d621b +0xd1:  mov    %ebx,%edx
088d621d +0xd3:  mov    %eax,(%esp)
088d6220 +0xd6:  call   08ae3750 <_Unwind_Resume>
088d6225 +0xdb:  add    $0x10,%esp
088d6228 +0xde:  pop    %ebx
088d6229 +0xdf:  pop    %esi
088d622a +0xe0:  pop    %ebp
088d622b +0xe1:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::BlueMarbleScriptManager @ 0x88d614a

/* BlueMarbleScriptManager::BlueMarbleScriptManager() */

void __thiscall BlueMarbleScriptManager::BlueMarbleScriptManager(BlueMarbleScriptManager *this)

{
  STScriptFileList::STScriptFileList((STScriptFileList *)this);
                    /* try { // try from 088d6166 to 088d616a has its CatchHandler @ 088d620a */
  STScriptFileList::STScriptFileList((STScriptFileList *)(this + 0x18));
                    /* try { // try from 088d6174 to 088d6178 has its CatchHandler @ 088d61f2 */
  BlueMarbleInfoScript::BlueMarbleInfoScript((BlueMarbleInfoScript *)(this + 0x30));
                    /* try { // try from 088d6184 to 088d6188 has its CatchHandler @ 088d61da */
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::map((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
         *)(this + 0xbc));
                    /* try { // try from 088d6194 to 088d6198 has its CatchHandler @ 088d61c0 */
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::map((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
         *)(this + 0xd4));
                    /* try { // try from 088d619f to 088d61a3 has its CatchHandler @ 088d61a6 */
  clear(this);
  return;
}
```
