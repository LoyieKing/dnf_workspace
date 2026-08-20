# CEventScriptMng

`_ZN13EventClassify15CEventScriptMngC1Ev`

`EventClassify::CEventScriptMng::CEventScriptMng()`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b136` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b136  _ZN13EventClassify15CEventScriptMngC1Ev
#           EventClassify::CEventScriptMng::CEventScriptMng()
# range [0x0810b136, 0x0810b217]
0810b136 +0x00:  push   %ebp
0810b137 +0x01:  mov    %esp,%ebp
0810b139 +0x03:  push   %esi
0810b13a +0x04:  push   %ebx
0810b13b +0x05:  sub    $0x10,%esp
0810b13e +0x08:  mov    0x8(%ebp),%eax
0810b141 +0x0b:  mov    %eax,(%esp)
0810b144 +0x0e:  call   08110f10 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x422>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x422
0810b149 +0x13:  mov    0x8(%ebp),%eax
0810b14c +0x16:  add    $0x18,%eax
0810b14f +0x19:  mov    %eax,(%esp)
0810b152 +0x1c:  call   08110f4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x45e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x45e
0810b157 +0x21:  mov    0x8(%ebp),%eax
0810b15a +0x24:  add    $0x30,%eax
0810b15d +0x27:  mov    %eax,(%esp)
0810b160 +0x2a:  call   08111464 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x976>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x976
0810b165 +0x2f:  mov    0x8(%ebp),%eax
0810b168 +0x32:  movl   $0x0,0x48(%eax)
0810b16f +0x39:  mov    0x8(%ebp),%eax
0810b172 +0x3c:  movb   $0x0,0x4c(%eax)
0810b176 +0x40:  mov    0x8(%ebp),%eax
0810b179 +0x43:  add    $0x50,%eax
0810b17c +0x46:  mov    %eax,(%esp)
0810b17f +0x49:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0810b184 +0x4e:  mov    0x8(%ebp),%eax
0810b187 +0x51:  add    $0x30,%eax
0810b18a +0x54:  mov    %eax,(%esp)
0810b18d +0x57:  call   081114de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x9f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x9f0
0810b192 +0x5c:  mov    0x8(%ebp),%eax
0810b195 +0x5f:  mov    %eax,(%esp)
0810b198 +0x62:  call   081114f2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa04>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa04
0810b19d +0x67:  mov    0x8(%ebp),%eax
0810b1a0 +0x6a:  add    $0x18,%eax
0810b1a3 +0x6d:  mov    %eax,(%esp)
0810b1a6 +0x70:  call   08111506 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xa18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xa18
0810b1ab +0x75:  jmp    0810b210 <+0xda>
0810b1ad +0x77:  mov    %edx,%ebx
0810b1af +0x79:  mov    %eax,%esi
0810b1b1 +0x7b:  mov    0x8(%ebp),%eax
0810b1b4 +0x7e:  add    $0x50,%eax
0810b1b7 +0x81:  mov    %eax,(%esp)
0810b1ba +0x84:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0810b1bf +0x89:  mov    %esi,%eax
0810b1c1 +0x8b:  mov    %ebx,%edx
0810b1c3 +0x8d:  jmp    0810b1c5 <+0x8f>
0810b1c5 +0x8f:  mov    %edx,%ebx
0810b1c7 +0x91:  mov    %eax,%esi
0810b1c9 +0x93:  mov    0x8(%ebp),%eax
0810b1cc +0x96:  add    $0x30,%eax
0810b1cf +0x99:  mov    %eax,(%esp)
0810b1d2 +0x9c:  call   08110f74 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x486>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x486
0810b1d7 +0xa1:  mov    %esi,%eax
0810b1d9 +0xa3:  mov    %ebx,%edx
0810b1db +0xa5:  jmp    0810b1dd <+0xa7>
0810b1dd +0xa7:  mov    %edx,%ebx
0810b1df +0xa9:  mov    %eax,%esi
0810b1e1 +0xab:  mov    0x8(%ebp),%eax
0810b1e4 +0xae:  add    $0x18,%eax
0810b1e7 +0xb1:  mov    %eax,(%esp)
0810b1ea +0xb4:  call   08110f60 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x472>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x472
0810b1ef +0xb9:  mov    %esi,%eax
0810b1f1 +0xbb:  mov    %ebx,%edx
0810b1f3 +0xbd:  jmp    0810b1f5 <+0xbf>
0810b1f5 +0xbf:  mov    %edx,%ebx
0810b1f7 +0xc1:  mov    %eax,%esi
0810b1f9 +0xc3:  mov    0x8(%ebp),%eax
0810b1fc +0xc6:  mov    %eax,(%esp)
0810b1ff +0xc9:  call   08110f24 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x436>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x436
0810b204 +0xce:  mov    %esi,%eax
0810b206 +0xd0:  mov    %ebx,%edx
0810b208 +0xd2:  mov    %eax,(%esp)
0810b20b +0xd5:  call   08ae3750 <_Unwind_Resume>
0810b210 +0xda:  add    $0x10,%esp
0810b213 +0xdd:  pop    %ebx
0810b214 +0xde:  pop    %esi
0810b215 +0xdf:  pop    %ebp
0810b216 +0xe0:  ret
0810b217 +0xe1:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::CEventScriptMng @ 0x810b136

/* EventClassify::CEventScriptMng::CEventScriptMng() */

void __thiscall EventClassify::CEventScriptMng::CEventScriptMng(CEventScriptMng *this)

{
  InGameEventInfoList::InGameEventInfoList((InGameEventInfoList *)this);
                    /* try { // try from 0810b152 to 0810b156 has its CatchHandler @ 0810b1f5 */
  InGameEventScriptLoader::InGameEventScriptLoader((InGameEventScriptLoader *)(this + 0x18));
                    /* try { // try from 0810b160 to 0810b164 has its CatchHandler @ 0810b1dd */
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::map((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
         *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (CEventScriptMng)0x0;
                    /* try { // try from 0810b17f to 0810b183 has its CatchHandler @ 0810b1c5 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x50));
                    /* try { // try from 0810b18d to 0810b1aa has its CatchHandler @ 0810b1ad */
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::clear((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
           *)(this + 0x30));
  std::map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
  ::clear((map<int,InGameEventInfo,std::less<int>,std::allocator<std::pair<int_const,InGameEventInfo>>>
           *)this);
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::clear((map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
           *)(this + 0x18));
  return;
}
```
