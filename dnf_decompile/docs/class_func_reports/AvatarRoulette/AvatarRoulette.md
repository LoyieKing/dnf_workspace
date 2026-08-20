# AvatarRoulette

`_ZN14AvatarRouletteC1Ev`

`AvatarRoulette::AvatarRoulette()`

| 类 | 地址 |
|---|---|
| `AvatarRoulette` | `0x08911b98` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08911b98  _ZN14AvatarRouletteC1Ev
#           AvatarRoulette::AvatarRoulette()
# range [0x08911b98, 0x08911cf5]
08911b98 +0x000:  push   %ebp
08911b99 +0x001:  mov    %esp,%ebp
08911b9b +0x003:  push   %edi
08911b9c +0x004:  push   %esi
08911b9d +0x005:  push   %ebx
08911b9e +0x006:  sub    $0x2c,%esp
08911ba1 +0x009:  mov    0x8(%ebp),%eax
08911ba4 +0x00c:  lea    0x14(%eax),%esi
08911ba7 +0x00f:  mov    %esi,%edi
08911ba9 +0x011:  mov    $0xa,%ebx
08911bae +0x016:  jmp    08911bbe <+0x26>
08911bb0 +0x018:  mov    %edi,(%esp)
08911bb3 +0x01b:  call   08920d86 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x7a65>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x7a65
08911bb8 +0x020:  add    $0xc,%edi
08911bbb +0x023:  sub    $0x1,%ebx
08911bbe +0x026:  cmp    $0xffffffff,%ebx
08911bc1 +0x029:  setne  %al
08911bc4 +0x02c:  test   %al,%al
08911bc6 +0x02e:  jne    08911bb0 <+0x18>
08911bc8 +0x030:  jmp    08911c06 <+0x6e>
08911bca +0x032:  mov    %edx,%edi
08911bcc +0x034:  mov    %eax,-0x20(%ebp)
08911bcf +0x037:  test   %esi,%esi
08911bd1 +0x039:  je     08911bf9 <+0x61>
08911bd3 +0x03b:  mov    $0xa,%eax
08911bd8 +0x040:  sub    %ebx,%eax
08911bda +0x042:  mov    %eax,%edx
08911bdc +0x044:  mov    %edx,%eax
08911bde +0x046:  add    %eax,%eax
08911be0 +0x048:  add    %edx,%eax
08911be2 +0x04a:  shl    $0x2,%eax
08911be5 +0x04d:  lea    (%esi,%eax,1),%ebx
08911be8 +0x050:  cmp    %esi,%ebx
08911bea +0x052:  je     08911bf9 <+0x61>
08911bec +0x054:  sub    $0xc,%ebx
08911bef +0x057:  mov    %ebx,(%esp)
08911bf2 +0x05a:  call   08392eb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22952>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22952
08911bf7 +0x05f:  jmp    08911be8 <+0x50>
08911bf9 +0x061:  mov    -0x20(%ebp),%eax
08911bfc +0x064:  mov    %edi,%edx
08911bfe +0x066:  mov    %eax,(%esp)
08911c01 +0x069:  call   08ae3750 <_Unwind_Resume>
08911c06 +0x06e:  mov    0x8(%ebp),%eax
08911c09 +0x071:  lea    0x98(%eax),%esi
08911c0f +0x077:  mov    %esi,%edi
08911c11 +0x079:  mov    $0xa,%ebx
08911c16 +0x07e:  jmp    08911c26 <+0x8e>
08911c18 +0x080:  mov    %edi,(%esp)
08911c1b +0x083:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08911c20 +0x088:  add    $0xc,%edi
08911c23 +0x08b:  sub    $0x1,%ebx
08911c26 +0x08e:  cmp    $0xffffffff,%ebx
08911c29 +0x091:  setne  %al
08911c2c +0x094:  test   %al,%al
08911c2e +0x096:  jne    08911c18 <+0x80>
08911c30 +0x098:  jmp    08911c68 <+0xd0>
08911c32 +0x09a:  mov    %edx,%edi
08911c34 +0x09c:  mov    %eax,-0x1c(%ebp)
08911c37 +0x09f:  test   %esi,%esi
08911c39 +0x0a1:  je     08911c61 <+0xc9>
08911c3b +0x0a3:  mov    $0xa,%eax
08911c40 +0x0a8:  sub    %ebx,%eax
08911c42 +0x0aa:  mov    %eax,%edx
08911c44 +0x0ac:  mov    %edx,%eax
08911c46 +0x0ae:  add    %eax,%eax
08911c48 +0x0b0:  add    %edx,%eax
08911c4a +0x0b2:  shl    $0x2,%eax
08911c4d +0x0b5:  lea    (%esi,%eax,1),%ebx
08911c50 +0x0b8:  cmp    %esi,%ebx
08911c52 +0x0ba:  je     08911c61 <+0xc9>
08911c54 +0x0bc:  sub    $0xc,%ebx
08911c57 +0x0bf:  mov    %ebx,(%esp)
08911c5a +0x0c2:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08911c5f +0x0c7:  jmp    08911c50 <+0xb8>
08911c61 +0x0c9:  mov    -0x1c(%ebp),%eax
08911c64 +0x0cc:  mov    %edi,%edx
08911c66 +0x0ce:  jmp    08911cb0 <+0x118>
08911c68 +0x0d0:  mov    0x8(%ebp),%eax
08911c6b +0x0d3:  mov    %eax,(%esp)
08911c6e +0x0d6:  call   08911cf6 <_ZN14AvatarRoulette5clearEv>  ; AvatarRoulette::clear()
08911c73 +0x0db:  jmp    08911ced <+0x155>
08911c75 +0x0dd:  mov    %edx,%esi
08911c77 +0x0df:  mov    %eax,%edi
08911c79 +0x0e1:  mov    0x8(%ebp),%eax
08911c7c +0x0e4:  add    $0x98,%eax
08911c81 +0x0e9:  test   %eax,%eax
08911c83 +0x0eb:  je     08911cac <+0x114>
08911c85 +0x0ed:  mov    0x8(%ebp),%eax
08911c88 +0x0f0:  add    $0x98,%eax
08911c8d +0x0f5:  lea    0x84(%eax),%ebx
08911c93 +0x0fb:  mov    0x8(%ebp),%eax
08911c96 +0x0fe:  add    $0x98,%eax
08911c9b +0x103:  cmp    %eax,%ebx
08911c9d +0x105:  je     08911cac <+0x114>
08911c9f +0x107:  sub    $0xc,%ebx
08911ca2 +0x10a:  mov    %ebx,(%esp)
08911ca5 +0x10d:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08911caa +0x112:  jmp    08911c93 <+0xfb>
08911cac +0x114:  mov    %edi,%eax
08911cae +0x116:  mov    %esi,%edx
08911cb0 +0x118:  mov    %edx,%esi
08911cb2 +0x11a:  mov    %eax,%edi
08911cb4 +0x11c:  mov    0x8(%ebp),%eax
08911cb7 +0x11f:  add    $0x14,%eax
08911cba +0x122:  test   %eax,%eax
08911cbc +0x124:  je     08911ce1 <+0x149>
08911cbe +0x126:  mov    0x8(%ebp),%eax
08911cc1 +0x129:  add    $0x14,%eax
08911cc4 +0x12c:  lea    0x84(%eax),%ebx
08911cca +0x132:  mov    0x8(%ebp),%eax
08911ccd +0x135:  add    $0x14,%eax
08911cd0 +0x138:  cmp    %eax,%ebx
08911cd2 +0x13a:  je     08911ce1 <+0x149>
08911cd4 +0x13c:  sub    $0xc,%ebx
08911cd7 +0x13f:  mov    %ebx,(%esp)
08911cda +0x142:  call   08392eb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22952>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22952
08911cdf +0x147:  jmp    08911cca <+0x132>
08911ce1 +0x149:  mov    %edi,%eax
08911ce3 +0x14b:  mov    %esi,%edx
08911ce5 +0x14d:  mov    %eax,(%esp)
08911ce8 +0x150:  call   08ae3750 <_Unwind_Resume>
08911ced +0x155:  add    $0x2c,%esp
08911cf0 +0x158:  pop    %ebx
08911cf1 +0x159:  pop    %esi
08911cf2 +0x15a:  pop    %edi
08911cf3 +0x15b:  pop    %ebp
08911cf4 +0x15c:  ret
08911cf5 +0x15d:  nop
```

## 反编译 C

```c
// AvatarRoulette::AvatarRoulette @ 0x8911b98

/* AvatarRoulette::AvatarRoulette() */

void __thiscall AvatarRoulette::AvatarRoulette(AvatarRoulette *this)

{
  int iVar1;
  vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
  *this_00;
  vector<int,std::allocator<int>> *this_01;
  
  this_00 = (vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
             *)(this + 0x14);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08911bb3 to 08911bb7 has its CatchHandler @ 08911bca */
    std::
    vector<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>,std::allocator<std::vector<std::pair<unsigned_long,int>,std::allocator<std::pair<unsigned_long,int>>>>>
    ::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  this_01 = (vector<int,std::allocator<int>> *)(this + 0x98);
  for (iVar1 = 10; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08911c1b to 08911c1f has its CatchHandler @ 08911c32 */
    std::vector<int,std::allocator<int>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 08911c6e to 08911c72 has its CatchHandler @ 08911c75 */
  clear(this);
  return;
}
```
