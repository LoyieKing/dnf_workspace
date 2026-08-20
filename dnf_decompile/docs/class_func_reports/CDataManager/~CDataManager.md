# ~CDataManager

`_ZN12CDataManagerD1Ev`

`CDataManager::~CDataManager()`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08356b68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08356b68  _ZN12CDataManagerD1Ev
#           CDataManager::~CDataManager()
# range [0x08356b68, 0x08357a65]
08356b68 +0x000:  push   %ebp
08356b69 +0x001:  mov    %esp,%ebp
08356b6b +0x003:  push   %edi
08356b6c +0x004:  push   %esi
08356b6d +0x005:  push   %ebx
08356b6e +0x006:  sub    $0x1c,%esp
08356b71 +0x009:  mov    0x8(%ebp),%eax
08356b74 +0x00c:  mov    %eax,(%esp)
08356b77 +0x00f:  call   08357a66 <_ZN12CDataManager7destroyEv>  ; CDataManager::destroy()
08356b7c +0x014:  jmp    08356b98 <+0x30>
08356b7e +0x016:  mov    %edx,%ebx
08356b80 +0x018:  mov    %eax,%esi
08356b82 +0x01a:  mov    0x8(%ebp),%eax
08356b85 +0x01d:  add    $0xb658,%eax
08356b8a +0x022:  mov    %eax,(%esp)
08356b8d +0x025:  call   08ac1dce <_ZN23DeleteInvalidItemScriptD1Ev>  ; DeleteInvalidItemScript::~DeleteInvalidItemScript()
08356b92 +0x02a:  mov    %esi,%eax
08356b94 +0x02c:  mov    %ebx,%edx
08356b96 +0x02e:  jmp    08356baa <+0x42>
08356b98 +0x030:  mov    0x8(%ebp),%eax
08356b9b +0x033:  add    $0xb658,%eax
08356ba0 +0x038:  mov    %eax,(%esp)
08356ba3 +0x03b:  call   08ac1dce <_ZN23DeleteInvalidItemScriptD1Ev>  ; DeleteInvalidItemScript::~DeleteInvalidItemScript()
08356ba8 +0x040:  jmp    08356bc4 <+0x5c>
08356baa +0x042:  mov    %edx,%ebx
08356bac +0x044:  mov    %eax,%esi
08356bae +0x046:  mov    0x8(%ebp),%eax
08356bb1 +0x049:  add    $0xb628,%eax
08356bb6 +0x04e:  mov    %eax,(%esp)
08356bb9 +0x051:  call   0837dfb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xda52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xda52
08356bbe +0x056:  mov    %esi,%eax
08356bc0 +0x058:  mov    %ebx,%edx
08356bc2 +0x05a:  jmp    08356bd6 <+0x6e>
08356bc4 +0x05c:  mov    0x8(%ebp),%eax
08356bc7 +0x05f:  add    $0xb628,%eax
08356bcc +0x064:  mov    %eax,(%esp)
08356bcf +0x067:  call   0837dfb2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xda52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xda52
08356bd4 +0x06c:  jmp    08356bf0 <+0x88>
08356bd6 +0x06e:  mov    %edx,%ebx
08356bd8 +0x070:  mov    %eax,%esi
08356bda +0x072:  mov    0x8(%ebp),%eax
08356bdd +0x075:  add    $0xb5e0,%eax
08356be2 +0x07a:  mov    %eax,(%esp)
08356be5 +0x07d:  call   0837df44 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd9e4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd9e4
08356bea +0x082:  mov    %esi,%eax
08356bec +0x084:  mov    %ebx,%edx
08356bee +0x086:  jmp    08356c02 <+0x9a>
08356bf0 +0x088:  mov    0x8(%ebp),%eax
08356bf3 +0x08b:  add    $0xb5e0,%eax
08356bf8 +0x090:  mov    %eax,(%esp)
08356bfb +0x093:  call   0837df44 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd9e4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd9e4
08356c00 +0x098:  jmp    08356c1c <+0xb4>
08356c02 +0x09a:  mov    %edx,%ebx
08356c04 +0x09c:  mov    %eax,%esi
08356c06 +0x09e:  mov    0x8(%ebp),%eax
08356c09 +0x0a1:  add    $0xb5bc,%eax
08356c0e +0x0a6:  mov    %eax,(%esp)
08356c11 +0x0a9:  call   0837de92 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd932>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd932
08356c16 +0x0ae:  mov    %esi,%eax
08356c18 +0x0b0:  mov    %ebx,%edx
08356c1a +0x0b2:  jmp    08356c2e <+0xc6>
08356c1c +0x0b4:  mov    0x8(%ebp),%eax
08356c1f +0x0b7:  add    $0xb5bc,%eax
08356c24 +0x0bc:  mov    %eax,(%esp)
08356c27 +0x0bf:  call   0837de92 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd932>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd932
08356c2c +0x0c4:  jmp    08356c48 <+0xe0>
08356c2e +0x0c6:  mov    %edx,%ebx
08356c30 +0x0c8:  mov    %eax,%esi
08356c32 +0x0ca:  mov    0x8(%ebp),%eax
08356c35 +0x0cd:  add    $0xb568,%eax
08356c3a +0x0d2:  mov    %eax,(%esp)
08356c3d +0x0d5:  call   0837ddfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd89c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd89c
08356c42 +0x0da:  mov    %esi,%eax
08356c44 +0x0dc:  mov    %ebx,%edx
08356c46 +0x0de:  jmp    08356c5a <+0xf2>
08356c48 +0x0e0:  mov    0x8(%ebp),%eax
08356c4b +0x0e3:  add    $0xb568,%eax
08356c50 +0x0e8:  mov    %eax,(%esp)
08356c53 +0x0eb:  call   0837ddfc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd89c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd89c
08356c58 +0x0f0:  jmp    08356c74 <+0x10c>
08356c5a +0x0f2:  mov    %edx,%ebx
08356c5c +0x0f4:  mov    %eax,%esi
08356c5e +0x0f6:  mov    0x8(%ebp),%eax
08356c61 +0x0f9:  add    $0xb548,%eax
08356c66 +0x0fe:  mov    %eax,(%esp)
08356c69 +0x101:  call   0837dde6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd886>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd886
08356c6e +0x106:  mov    %esi,%eax
08356c70 +0x108:  mov    %ebx,%edx
08356c72 +0x10a:  jmp    08356c86 <+0x11e>
08356c74 +0x10c:  mov    0x8(%ebp),%eax
08356c77 +0x10f:  add    $0xb548,%eax
08356c7c +0x114:  mov    %eax,(%esp)
08356c7f +0x117:  call   0837dde6 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd886>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd886
08356c84 +0x11c:  jmp    08356ca0 <+0x138>
08356c86 +0x11e:  mov    %edx,%ebx
08356c88 +0x120:  mov    %eax,%esi
08356c8a +0x122:  mov    0x8(%ebp),%eax
08356c8d +0x125:  add    $0xb544,%eax
08356c92 +0x12a:  mov    %eax,(%esp)
08356c95 +0x12d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356c9a +0x132:  mov    %esi,%eax
08356c9c +0x134:  mov    %ebx,%edx
08356c9e +0x136:  jmp    08356cb2 <+0x14a>
08356ca0 +0x138:  mov    0x8(%ebp),%eax
08356ca3 +0x13b:  add    $0xb544,%eax
08356ca8 +0x140:  mov    %eax,(%esp)
08356cab +0x143:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356cb0 +0x148:  jmp    08356ccc <+0x164>
08356cb2 +0x14a:  mov    %edx,%ebx
08356cb4 +0x14c:  mov    %eax,%esi
08356cb6 +0x14e:  mov    0x8(%ebp),%eax
08356cb9 +0x151:  add    $0xb520,%eax
08356cbe +0x156:  mov    %eax,(%esp)
08356cc1 +0x159:  call   0837dda0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd840>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd840
08356cc6 +0x15e:  mov    %esi,%eax
08356cc8 +0x160:  mov    %ebx,%edx
08356cca +0x162:  jmp    08356cde <+0x176>
08356ccc +0x164:  mov    0x8(%ebp),%eax
08356ccf +0x167:  add    $0xb520,%eax
08356cd4 +0x16c:  mov    %eax,(%esp)
08356cd7 +0x16f:  call   0837dda0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd840>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd840
08356cdc +0x174:  jmp    08356cf8 <+0x190>
08356cde +0x176:  mov    %edx,%ebx
08356ce0 +0x178:  mov    %eax,%esi
08356ce2 +0x17a:  mov    0x8(%ebp),%eax
08356ce5 +0x17d:  add    $0xb508,%eax
08356cea +0x182:  mov    %eax,(%esp)
08356ced +0x185:  call   0837dd8c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd82c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd82c
08356cf2 +0x18a:  mov    %esi,%eax
08356cf4 +0x18c:  mov    %ebx,%edx
08356cf6 +0x18e:  jmp    08356d0a <+0x1a2>
08356cf8 +0x190:  mov    0x8(%ebp),%eax
08356cfb +0x193:  add    $0xb508,%eax
08356d00 +0x198:  mov    %eax,(%esp)
08356d03 +0x19b:  call   0837dd8c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd82c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd82c
08356d08 +0x1a0:  jmp    08356d24 <+0x1bc>
08356d0a +0x1a2:  mov    %edx,%ebx
08356d0c +0x1a4:  mov    %eax,%esi
08356d0e +0x1a6:  mov    0x8(%ebp),%eax
08356d11 +0x1a9:  add    $0xb4ec,%eax
08356d16 +0x1ae:  mov    %eax,(%esp)
08356d19 +0x1b1:  call   0837dd78 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd818>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd818
08356d1e +0x1b6:  mov    %esi,%eax
08356d20 +0x1b8:  mov    %ebx,%edx
08356d22 +0x1ba:  jmp    08356d36 <+0x1ce>
08356d24 +0x1bc:  mov    0x8(%ebp),%eax
08356d27 +0x1bf:  add    $0xb4ec,%eax
08356d2c +0x1c4:  mov    %eax,(%esp)
08356d2f +0x1c7:  call   0837dd78 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd818>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd818
08356d34 +0x1cc:  jmp    08356d50 <+0x1e8>
08356d36 +0x1ce:  mov    %edx,%ebx
08356d38 +0x1d0:  mov    %eax,%esi
08356d3a +0x1d2:  mov    0x8(%ebp),%eax
08356d3d +0x1d5:  add    $0xb4d4,%eax
08356d42 +0x1da:  mov    %eax,(%esp)
08356d45 +0x1dd:  call   0837dd3c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd7dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd7dc
08356d4a +0x1e2:  mov    %esi,%eax
08356d4c +0x1e4:  mov    %ebx,%edx
08356d4e +0x1e6:  jmp    08356d62 <+0x1fa>
08356d50 +0x1e8:  mov    0x8(%ebp),%eax
08356d53 +0x1eb:  add    $0xb4d4,%eax
08356d58 +0x1f0:  mov    %eax,(%esp)
08356d5b +0x1f3:  call   0837dd3c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd7dc>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd7dc
08356d60 +0x1f8:  jmp    08356d7c <+0x214>
08356d62 +0x1fa:  mov    %edx,%ebx
08356d64 +0x1fc:  mov    %eax,%esi
08356d66 +0x1fe:  mov    0x8(%ebp),%eax
08356d69 +0x201:  add    $0xb4c8,%eax
08356d6e +0x206:  mov    %eax,(%esp)
08356d71 +0x209:  call   08371746 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb712>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb712
08356d76 +0x20e:  mov    %esi,%eax
08356d78 +0x210:  mov    %ebx,%edx
08356d7a +0x212:  jmp    08356d8e <+0x226>
08356d7c +0x214:  mov    0x8(%ebp),%eax
08356d7f +0x217:  add    $0xb4c8,%eax
08356d84 +0x21c:  mov    %eax,(%esp)
08356d87 +0x21f:  call   08371746 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb712>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb712
08356d8c +0x224:  jmp    08356da8 <+0x240>
08356d8e +0x226:  mov    %edx,%ebx
08356d90 +0x228:  mov    %eax,%esi
08356d92 +0x22a:  mov    0x8(%ebp),%eax
08356d95 +0x22d:  add    $0xb4ac,%eax
08356d9a +0x232:  mov    %eax,(%esp)
08356d9d +0x235:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
08356da2 +0x23a:  mov    %esi,%eax
08356da4 +0x23c:  mov    %ebx,%edx
08356da6 +0x23e:  jmp    08356dba <+0x252>
08356da8 +0x240:  mov    0x8(%ebp),%eax
08356dab +0x243:  add    $0xb4ac,%eax
08356db0 +0x248:  mov    %eax,(%esp)
08356db3 +0x24b:  call   081ab6ca <_GLOBAL__I__ZN4ARAD16AradWhiteAccountC2Ev+0x1c>  ; global constructors keyed to ARAD::AradWhiteAccount::AradWhiteAccount()+0x1c
08356db8 +0x250:  jmp    08356dd4 <+0x26c>
08356dba +0x252:  mov    %edx,%ebx
08356dbc +0x254:  mov    %eax,%esi
08356dbe +0x256:  mov    0x8(%ebp),%eax
08356dc1 +0x259:  add    $0xb488,%eax
08356dc6 +0x25e:  mov    %eax,(%esp)
08356dc9 +0x261:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08356dce +0x266:  mov    %esi,%eax
08356dd0 +0x268:  mov    %ebx,%edx
08356dd2 +0x26a:  jmp    08356de6 <+0x27e>
08356dd4 +0x26c:  mov    0x8(%ebp),%eax
08356dd7 +0x26f:  add    $0xb488,%eax
08356ddc +0x274:  mov    %eax,(%esp)
08356ddf +0x277:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
08356de4 +0x27c:  jmp    08356e00 <+0x298>
08356de6 +0x27e:  mov    %edx,%ebx
08356de8 +0x280:  mov    %eax,%esi
08356dea +0x282:  mov    0x8(%ebp),%eax
08356ded +0x285:  add    $0xb458,%eax
08356df2 +0x28a:  mov    %eax,(%esp)
08356df5 +0x28d:  call   0837dce2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd782>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd782
08356dfa +0x292:  mov    %esi,%eax
08356dfc +0x294:  mov    %ebx,%edx
08356dfe +0x296:  jmp    08356e12 <+0x2aa>
08356e00 +0x298:  mov    0x8(%ebp),%eax
08356e03 +0x29b:  add    $0xb458,%eax
08356e08 +0x2a0:  mov    %eax,(%esp)
08356e0b +0x2a3:  call   0837dce2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd782>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd782
08356e10 +0x2a8:  jmp    08356e2c <+0x2c4>
08356e12 +0x2aa:  mov    %edx,%ebx
08356e14 +0x2ac:  mov    %eax,%esi
08356e16 +0x2ae:  mov    0x8(%ebp),%eax
08356e19 +0x2b1:  add    $0xb424,%eax
08356e1e +0x2b6:  mov    %eax,(%esp)
08356e21 +0x2b9:  call   08392754 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x221f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x221f4
08356e26 +0x2be:  mov    %esi,%eax
08356e28 +0x2c0:  mov    %ebx,%edx
08356e2a +0x2c2:  jmp    08356e3e <+0x2d6>
08356e2c +0x2c4:  mov    0x8(%ebp),%eax
08356e2f +0x2c7:  add    $0xb424,%eax
08356e34 +0x2cc:  mov    %eax,(%esp)
08356e37 +0x2cf:  call   08392754 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x221f4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x221f4
08356e3c +0x2d4:  jmp    08356e58 <+0x2f0>
08356e3e +0x2d6:  mov    %edx,%ebx
08356e40 +0x2d8:  mov    %eax,%esi
08356e42 +0x2da:  mov    0x8(%ebp),%eax
08356e45 +0x2dd:  add    $0xb3f4,%eax
08356e4a +0x2e2:  mov    %eax,(%esp)
08356e4d +0x2e5:  call   0837dc9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd73c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd73c
08356e52 +0x2ea:  mov    %esi,%eax
08356e54 +0x2ec:  mov    %ebx,%edx
08356e56 +0x2ee:  jmp    08356e6a <+0x302>
08356e58 +0x2f0:  mov    0x8(%ebp),%eax
08356e5b +0x2f3:  add    $0xb3f4,%eax
08356e60 +0x2f8:  mov    %eax,(%esp)
08356e63 +0x2fb:  call   0837dc9c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd73c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd73c
08356e68 +0x300:  jmp    08356e84 <+0x31c>
08356e6a +0x302:  mov    %edx,%ebx
08356e6c +0x304:  mov    %eax,%esi
08356e6e +0x306:  mov    0x8(%ebp),%eax
08356e71 +0x309:  add    $0xa940,%eax
08356e76 +0x30e:  mov    %eax,(%esp)
08356e79 +0x311:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08356e7e +0x316:  mov    %esi,%eax
08356e80 +0x318:  mov    %ebx,%edx
08356e82 +0x31a:  jmp    08356e96 <+0x32e>
08356e84 +0x31c:  mov    0x8(%ebp),%eax
08356e87 +0x31f:  add    $0xa940,%eax
08356e8c +0x324:  mov    %eax,(%esp)
08356e8f +0x327:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08356e94 +0x32c:  jmp    08356eb0 <+0x348>
08356e96 +0x32e:  mov    %edx,%ebx
08356e98 +0x330:  mov    %eax,%esi
08356e9a +0x332:  mov    0x8(%ebp),%eax
08356e9d +0x335:  add    $0xa928,%eax
08356ea2 +0x33a:  mov    %eax,(%esp)
08356ea5 +0x33d:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08356eaa +0x342:  mov    %esi,%eax
08356eac +0x344:  mov    %ebx,%edx
08356eae +0x346:  jmp    08356ec2 <+0x35a>
08356eb0 +0x348:  mov    0x8(%ebp),%eax
08356eb3 +0x34b:  add    $0xa928,%eax
08356eb8 +0x350:  mov    %eax,(%esp)
08356ebb +0x353:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
08356ec0 +0x358:  jmp    08356edc <+0x374>
08356ec2 +0x35a:  mov    %edx,%ebx
08356ec4 +0x35c:  mov    %eax,%esi
08356ec6 +0x35e:  mov    0x8(%ebp),%eax
08356ec9 +0x361:  add    $0xa8dc,%eax
08356ece +0x366:  mov    %eax,(%esp)
08356ed1 +0x369:  call   0837db42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd5e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd5e2
08356ed6 +0x36e:  mov    %esi,%eax
08356ed8 +0x370:  mov    %ebx,%edx
08356eda +0x372:  jmp    08356eee <+0x386>
08356edc +0x374:  mov    0x8(%ebp),%eax
08356edf +0x377:  add    $0xa8dc,%eax
08356ee4 +0x37c:  mov    %eax,(%esp)
08356ee7 +0x37f:  call   0837db42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd5e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd5e2
08356eec +0x384:  jmp    08356f08 <+0x3a0>
08356eee +0x386:  mov    %edx,%ebx
08356ef0 +0x388:  mov    %eax,%esi
08356ef2 +0x38a:  mov    0x8(%ebp),%eax
08356ef5 +0x38d:  add    $0xa8cc,%eax
08356efa +0x392:  mov    %eax,(%esp)
08356efd +0x395:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f02 +0x39a:  mov    %esi,%eax
08356f04 +0x39c:  mov    %ebx,%edx
08356f06 +0x39e:  jmp    08356f1a <+0x3b2>
08356f08 +0x3a0:  mov    0x8(%ebp),%eax
08356f0b +0x3a3:  add    $0xa8cc,%eax
08356f10 +0x3a8:  mov    %eax,(%esp)
08356f13 +0x3ab:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f18 +0x3b0:  jmp    08356f34 <+0x3cc>
08356f1a +0x3b2:  mov    %edx,%ebx
08356f1c +0x3b4:  mov    %eax,%esi
08356f1e +0x3b6:  mov    0x8(%ebp),%eax
08356f21 +0x3b9:  add    $0xa8c8,%eax
08356f26 +0x3be:  mov    %eax,(%esp)
08356f29 +0x3c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f2e +0x3c6:  mov    %esi,%eax
08356f30 +0x3c8:  mov    %ebx,%edx
08356f32 +0x3ca:  jmp    08356f46 <+0x3de>
08356f34 +0x3cc:  mov    0x8(%ebp),%eax
08356f37 +0x3cf:  add    $0xa8c8,%eax
08356f3c +0x3d4:  mov    %eax,(%esp)
08356f3f +0x3d7:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f44 +0x3dc:  jmp    08356f60 <+0x3f8>
08356f46 +0x3de:  mov    %edx,%ebx
08356f48 +0x3e0:  mov    %eax,%esi
08356f4a +0x3e2:  mov    0x8(%ebp),%eax
08356f4d +0x3e5:  add    $0xa8c4,%eax
08356f52 +0x3ea:  mov    %eax,(%esp)
08356f55 +0x3ed:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f5a +0x3f2:  mov    %esi,%eax
08356f5c +0x3f4:  mov    %ebx,%edx
08356f5e +0x3f6:  jmp    08356f72 <+0x40a>
08356f60 +0x3f8:  mov    0x8(%ebp),%eax
08356f63 +0x3fb:  add    $0xa8c4,%eax
08356f68 +0x400:  mov    %eax,(%esp)
08356f6b +0x403:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f70 +0x408:  jmp    08356f8c <+0x424>
08356f72 +0x40a:  mov    %edx,%ebx
08356f74 +0x40c:  mov    %eax,%esi
08356f76 +0x40e:  mov    0x8(%ebp),%eax
08356f79 +0x411:  add    $0xa8c0,%eax
08356f7e +0x416:  mov    %eax,(%esp)
08356f81 +0x419:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f86 +0x41e:  mov    %esi,%eax
08356f88 +0x420:  mov    %ebx,%edx
08356f8a +0x422:  jmp    08356f9e <+0x436>
08356f8c +0x424:  mov    0x8(%ebp),%eax
08356f8f +0x427:  add    $0xa8c0,%eax
08356f94 +0x42c:  mov    %eax,(%esp)
08356f97 +0x42f:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08356f9c +0x434:  jmp    08356fb8 <+0x450>
08356f9e +0x436:  mov    %edx,%ebx
08356fa0 +0x438:  mov    %eax,%esi
08356fa2 +0x43a:  mov    0x8(%ebp),%eax
08356fa5 +0x43d:  add    $0xa884,%eax
08356faa +0x442:  mov    %eax,(%esp)
08356fad +0x445:  call   0837daac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd54c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd54c
08356fb2 +0x44a:  mov    %esi,%eax
08356fb4 +0x44c:  mov    %ebx,%edx
08356fb6 +0x44e:  jmp    08356fca <+0x462>
08356fb8 +0x450:  mov    0x8(%ebp),%eax
08356fbb +0x453:  add    $0xa884,%eax
08356fc0 +0x458:  mov    %eax,(%esp)
08356fc3 +0x45b:  call   0837daac <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd54c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd54c
08356fc8 +0x460:  jmp    08356fe4 <+0x47c>
08356fca +0x462:  mov    %edx,%ebx
08356fcc +0x464:  mov    %eax,%esi
08356fce +0x466:  mov    0x8(%ebp),%eax
08356fd1 +0x469:  add    $0xa86c,%eax
08356fd6 +0x46e:  mov    %eax,(%esp)
08356fd9 +0x471:  call   0837da98 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd538>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd538
08356fde +0x476:  mov    %esi,%eax
08356fe0 +0x478:  mov    %ebx,%edx
08356fe2 +0x47a:  jmp    08356ff6 <+0x48e>
08356fe4 +0x47c:  mov    0x8(%ebp),%eax
08356fe7 +0x47f:  add    $0xa86c,%eax
08356fec +0x484:  mov    %eax,(%esp)
08356fef +0x487:  call   0837da98 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd538>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd538
08356ff4 +0x48c:  jmp    08357010 <+0x4a8>
08356ff6 +0x48e:  mov    %edx,%ebx
08356ff8 +0x490:  mov    %eax,%esi
08356ffa +0x492:  mov    0x8(%ebp),%eax
08356ffd +0x495:  add    $0xa800,%eax
08357002 +0x49a:  mov    %eax,(%esp)
08357005 +0x49d:  call   0837da02 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd4a2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd4a2
0835700a +0x4a2:  mov    %esi,%eax
0835700c +0x4a4:  mov    %ebx,%edx
0835700e +0x4a6:  jmp    08357022 <+0x4ba>
08357010 +0x4a8:  mov    0x8(%ebp),%eax
08357013 +0x4ab:  add    $0xa800,%eax
08357018 +0x4b0:  mov    %eax,(%esp)
0835701b +0x4b3:  call   0837da02 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd4a2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd4a2
08357020 +0x4b8:  jmp    0835703c <+0x4d4>
08357022 +0x4ba:  mov    %edx,%ebx
08357024 +0x4bc:  mov    %eax,%esi
08357026 +0x4be:  mov    0x8(%ebp),%eax
08357029 +0x4c1:  add    $0xa7e0,%eax
0835702e +0x4c6:  mov    %eax,(%esp)
08357031 +0x4c9:  call   0837d9ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd48c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd48c
08357036 +0x4ce:  mov    %esi,%eax
08357038 +0x4d0:  mov    %ebx,%edx
0835703a +0x4d2:  jmp    0835704e <+0x4e6>
0835703c +0x4d4:  mov    0x8(%ebp),%eax
0835703f +0x4d7:  add    $0xa7e0,%eax
08357044 +0x4dc:  mov    %eax,(%esp)
08357047 +0x4df:  call   0837d9ec <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd48c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd48c
0835704c +0x4e4:  jmp    08357068 <+0x500>
0835704e +0x4e6:  mov    %edx,%ebx
08357050 +0x4e8:  mov    %eax,%esi
08357052 +0x4ea:  mov    0x8(%ebp),%eax
08357055 +0x4ed:  add    $0xa788,%eax
0835705a +0x4f2:  mov    %eax,(%esp)
0835705d +0x4f5:  call   0837d906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd3a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd3a6
08357062 +0x4fa:  mov    %esi,%eax
08357064 +0x4fc:  mov    %ebx,%edx
08357066 +0x4fe:  jmp    0835707a <+0x512>
08357068 +0x500:  mov    0x8(%ebp),%eax
0835706b +0x503:  add    $0xa788,%eax
08357070 +0x508:  mov    %eax,(%esp)
08357073 +0x50b:  call   0837d906 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd3a6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd3a6
08357078 +0x510:  jmp    08357094 <+0x52c>
0835707a +0x512:  mov    %edx,%ebx
0835707c +0x514:  mov    %eax,%esi
0835707e +0x516:  mov    0x8(%ebp),%eax
08357081 +0x519:  add    $0xa700,%eax
08357086 +0x51e:  mov    %eax,(%esp)
08357089 +0x521:  call   0837d756 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd1f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd1f6
0835708e +0x526:  mov    %esi,%eax
08357090 +0x528:  mov    %ebx,%edx
08357092 +0x52a:  jmp    083570a6 <+0x53e>
08357094 +0x52c:  mov    0x8(%ebp),%eax
08357097 +0x52f:  add    $0xa700,%eax
0835709c +0x534:  mov    %eax,(%esp)
0835709f +0x537:  call   0837d756 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd1f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd1f6
083570a4 +0x53c:  jmp    083570c0 <+0x558>
083570a6 +0x53e:  mov    %edx,%ebx
083570a8 +0x540:  mov    %eax,%esi
083570aa +0x542:  mov    0x8(%ebp),%eax
083570ad +0x545:  add    $0xa628,%eax
083570b2 +0x54a:  mov    %eax,(%esp)
083570b5 +0x54d:  call   0837d634 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd0d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd0d4
083570ba +0x552:  mov    %esi,%eax
083570bc +0x554:  mov    %ebx,%edx
083570be +0x556:  jmp    083570d2 <+0x56a>
083570c0 +0x558:  mov    0x8(%ebp),%eax
083570c3 +0x55b:  add    $0xa628,%eax
083570c8 +0x560:  mov    %eax,(%esp)
083570cb +0x563:  call   0837d634 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xd0d4>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xd0d4
083570d0 +0x568:  jmp    083570ec <+0x584>
083570d2 +0x56a:  mov    %edx,%ebx
083570d4 +0x56c:  mov    %eax,%esi
083570d6 +0x56e:  mov    0x8(%ebp),%eax
083570d9 +0x571:  add    $0xa50c,%eax
083570de +0x576:  mov    %eax,(%esp)
083570e1 +0x579:  call   0837d542 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcfe2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcfe2
083570e6 +0x57e:  mov    %esi,%eax
083570e8 +0x580:  mov    %ebx,%edx
083570ea +0x582:  jmp    083570fe <+0x596>
083570ec +0x584:  mov    0x8(%ebp),%eax
083570ef +0x587:  add    $0xa50c,%eax
083570f4 +0x58c:  mov    %eax,(%esp)
083570f7 +0x58f:  call   0837d542 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcfe2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcfe2
083570fc +0x594:  jmp    0835713b <+0x5d3>
083570fe +0x596:  mov    %edx,%esi
08357100 +0x598:  mov    %eax,%edi
08357102 +0x59a:  mov    0x8(%ebp),%eax
08357105 +0x59d:  add    $0xa1c4,%eax
0835710a +0x5a2:  test   %eax,%eax
0835710c +0x5a4:  je     08357135 <+0x5cd>
0835710e +0x5a6:  mov    0x8(%ebp),%eax
08357111 +0x5a9:  add    $0xa1c4,%eax
08357116 +0x5ae:  lea    0x348(%eax),%ebx
0835711c +0x5b4:  mov    0x8(%ebp),%eax
0835711f +0x5b7:  add    $0xa1c4,%eax
08357124 +0x5bc:  cmp    %eax,%ebx
08357126 +0x5be:  je     08357135 <+0x5cd>
08357128 +0x5c0:  sub    $0xc,%ebx
0835712b +0x5c3:  mov    %ebx,(%esp)
0835712e +0x5c6:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08357133 +0x5cb:  jmp    0835711c <+0x5b4>
08357135 +0x5cd:  mov    %edi,%eax
08357137 +0x5cf:  mov    %esi,%edx
08357139 +0x5d1:  jmp    0835716e <+0x606>
0835713b +0x5d3:  mov    0x8(%ebp),%eax
0835713e +0x5d6:  add    $0xa1c4,%eax
08357143 +0x5db:  test   %eax,%eax
08357145 +0x5dd:  je     08357188 <+0x620>
08357147 +0x5df:  mov    0x8(%ebp),%eax
0835714a +0x5e2:  add    $0xa1c4,%eax
0835714f +0x5e7:  lea    0x348(%eax),%ebx
08357155 +0x5ed:  mov    0x8(%ebp),%eax
08357158 +0x5f0:  add    $0xa1c4,%eax
0835715d +0x5f5:  cmp    %eax,%ebx
0835715f +0x5f7:  je     08357188 <+0x620>
08357161 +0x5f9:  sub    $0xc,%ebx
08357164 +0x5fc:  mov    %ebx,(%esp)
08357167 +0x5ff:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0835716c +0x604:  jmp    08357155 <+0x5ed>
0835716e +0x606:  mov    %edx,%ebx
08357170 +0x608:  mov    %eax,%esi
08357172 +0x60a:  mov    0x8(%ebp),%eax
08357175 +0x60d:  add    $0x8d34,%eax
0835717a +0x612:  mov    %eax,(%esp)
0835717d +0x615:  call   0837d488 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcf28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcf28
08357182 +0x61a:  mov    %esi,%eax
08357184 +0x61c:  mov    %ebx,%edx
08357186 +0x61e:  jmp    0835719a <+0x632>
08357188 +0x620:  mov    0x8(%ebp),%eax
0835718b +0x623:  add    $0x8d34,%eax
08357190 +0x628:  mov    %eax,(%esp)
08357193 +0x62b:  call   0837d488 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcf28>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcf28
08357198 +0x630:  jmp    083571b4 <+0x64c>
0835719a +0x632:  mov    %edx,%ebx
0835719c +0x634:  mov    %eax,%esi
0835719e +0x636:  mov    0x8(%ebp),%eax
083571a1 +0x639:  add    $0x8cc8,%eax
083571a6 +0x63e:  mov    %eax,(%esp)
083571a9 +0x641:  call   0837d3ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce6a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce6a
083571ae +0x646:  mov    %esi,%eax
083571b0 +0x648:  mov    %ebx,%edx
083571b2 +0x64a:  jmp    083571c6 <+0x65e>
083571b4 +0x64c:  mov    0x8(%ebp),%eax
083571b7 +0x64f:  add    $0x8cc8,%eax
083571bc +0x654:  mov    %eax,(%esp)
083571bf +0x657:  call   0837d3ca <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce6a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce6a
083571c4 +0x65c:  jmp    083571e0 <+0x678>
083571c6 +0x65e:  mov    %edx,%ebx
083571c8 +0x660:  mov    %eax,%esi
083571ca +0x662:  mov    0x8(%ebp),%eax
083571cd +0x665:  add    $0x8cb8,%eax
083571d2 +0x66a:  mov    %eax,(%esp)
083571d5 +0x66d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083571da +0x672:  mov    %esi,%eax
083571dc +0x674:  mov    %ebx,%edx
083571de +0x676:  jmp    083571f2 <+0x68a>
083571e0 +0x678:  mov    0x8(%ebp),%eax
083571e3 +0x67b:  add    $0x8cb8,%eax
083571e8 +0x680:  mov    %eax,(%esp)
083571eb +0x683:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
083571f0 +0x688:  jmp    0835720c <+0x6a4>
083571f2 +0x68a:  mov    %edx,%ebx
083571f4 +0x68c:  mov    %eax,%esi
083571f6 +0x68e:  mov    0x8(%ebp),%eax
083571f9 +0x691:  add    $0x87b4,%eax
083571fe +0x696:  mov    %eax,(%esp)
08357201 +0x699:  call   0837d3b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce52
08357206 +0x69e:  mov    %esi,%eax
08357208 +0x6a0:  mov    %ebx,%edx
0835720a +0x6a2:  jmp    0835721e <+0x6b6>
0835720c +0x6a4:  mov    0x8(%ebp),%eax
0835720f +0x6a7:  add    $0x87b4,%eax
08357214 +0x6ac:  mov    %eax,(%esp)
08357217 +0x6af:  call   0837d3b2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce52>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce52
0835721c +0x6b4:  jmp    08357238 <+0x6d0>
0835721e +0x6b6:  mov    %edx,%ebx
08357220 +0x6b8:  mov    %eax,%esi
08357222 +0x6ba:  mov    0x8(%ebp),%eax
08357225 +0x6bd:  add    $0x8798,%eax
0835722a +0x6c2:  mov    %eax,(%esp)
0835722d +0x6c5:  call   08374894 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe860>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe860
08357232 +0x6ca:  mov    %esi,%eax
08357234 +0x6cc:  mov    %ebx,%edx
08357236 +0x6ce:  jmp    0835724a <+0x6e2>
08357238 +0x6d0:  mov    0x8(%ebp),%eax
0835723b +0x6d3:  add    $0x8798,%eax
08357240 +0x6d8:  mov    %eax,(%esp)
08357243 +0x6db:  call   08374894 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe860>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe860
08357248 +0x6e0:  jmp    08357264 <+0x6fc>
0835724a +0x6e2:  mov    %edx,%ebx
0835724c +0x6e4:  mov    %eax,%esi
0835724e +0x6e6:  mov    0x8(%ebp),%eax
08357251 +0x6e9:  add    $0x8780,%eax
08357256 +0x6ee:  mov    %eax,(%esp)
08357259 +0x6f1:  call   0837481e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe7ea>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe7ea
0835725e +0x6f6:  mov    %esi,%eax
08357260 +0x6f8:  mov    %ebx,%edx
08357262 +0x6fa:  jmp    08357276 <+0x70e>
08357264 +0x6fc:  mov    0x8(%ebp),%eax
08357267 +0x6ff:  add    $0x8780,%eax
0835726c +0x704:  mov    %eax,(%esp)
0835726f +0x707:  call   0837481e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xe7ea>  ; global constructors keyed to CServerEvent::m_nExpRate+0xe7ea
08357274 +0x70c:  jmp    08357290 <+0x728>
08357276 +0x70e:  mov    %edx,%ebx
08357278 +0x710:  mov    %eax,%esi
0835727a +0x712:  mov    0x8(%ebp),%eax
0835727d +0x715:  add    $0x8770,%eax
08357282 +0x71a:  mov    %eax,(%esp)
08357285 +0x71d:  call   0837d39e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce3e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce3e
0835728a +0x722:  mov    %esi,%eax
0835728c +0x724:  mov    %ebx,%edx
0835728e +0x726:  jmp    083572a2 <+0x73a>
08357290 +0x728:  mov    0x8(%ebp),%eax
08357293 +0x72b:  add    $0x8770,%eax
08357298 +0x730:  mov    %eax,(%esp)
0835729b +0x733:  call   0837d39e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xce3e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xce3e
083572a0 +0x738:  jmp    083572bc <+0x754>
083572a2 +0x73a:  mov    %edx,%ebx
083572a4 +0x73c:  mov    %eax,%esi
083572a6 +0x73e:  mov    0x8(%ebp),%eax
083572a9 +0x741:  add    $0x8740,%eax
083572ae +0x746:  mov    %eax,(%esp)
083572b1 +0x749:  call   0837d358 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcdf8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcdf8
083572b6 +0x74e:  mov    %esi,%eax
083572b8 +0x750:  mov    %ebx,%edx
083572ba +0x752:  jmp    083572ce <+0x766>
083572bc +0x754:  mov    0x8(%ebp),%eax
083572bf +0x757:  add    $0x8740,%eax
083572c4 +0x75c:  mov    %eax,(%esp)
083572c7 +0x75f:  call   0837d358 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcdf8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcdf8
083572cc +0x764:  jmp    083572e8 <+0x780>
083572ce +0x766:  mov    %edx,%ebx
083572d0 +0x768:  mov    %eax,%esi
083572d2 +0x76a:  mov    0x8(%ebp),%eax
083572d5 +0x76d:  add    $0x8710,%eax
083572da +0x772:  mov    %eax,(%esp)
083572dd +0x775:  call   0837d290 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcd30>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcd30
083572e2 +0x77a:  mov    %esi,%eax
083572e4 +0x77c:  mov    %ebx,%edx
083572e6 +0x77e:  jmp    083572fa <+0x792>
083572e8 +0x780:  mov    0x8(%ebp),%eax
083572eb +0x783:  add    $0x8710,%eax
083572f0 +0x788:  mov    %eax,(%esp)
083572f3 +0x78b:  call   0837d290 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcd30>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcd30
083572f8 +0x790:  jmp    08357314 <+0x7ac>
083572fa +0x792:  mov    %edx,%ebx
083572fc +0x794:  mov    %eax,%esi
083572fe +0x796:  mov    0x8(%ebp),%eax
08357301 +0x799:  add    $0x86f8,%eax
08357306 +0x79e:  mov    %eax,(%esp)
08357309 +0x7a1:  call   083711ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb1b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb1b6
0835730e +0x7a6:  mov    %esi,%eax
08357310 +0x7a8:  mov    %ebx,%edx
08357312 +0x7aa:  jmp    08357326 <+0x7be>
08357314 +0x7ac:  mov    0x8(%ebp),%eax
08357317 +0x7af:  add    $0x86f8,%eax
0835731c +0x7b4:  mov    %eax,(%esp)
0835731f +0x7b7:  call   083711ea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb1b6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb1b6
08357324 +0x7bc:  jmp    08357340 <+0x7d8>
08357326 +0x7be:  mov    %edx,%ebx
08357328 +0x7c0:  mov    %eax,%esi
0835732a +0x7c2:  mov    0x8(%ebp),%eax
0835732d +0x7c5:  add    $0x86c4,%eax
08357332 +0x7ca:  mov    %eax,(%esp)
08357335 +0x7cd:  call   0837d1fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcc9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcc9a
0835733a +0x7d2:  mov    %esi,%eax
0835733c +0x7d4:  mov    %ebx,%edx
0835733e +0x7d6:  jmp    08357352 <+0x7ea>
08357340 +0x7d8:  mov    0x8(%ebp),%eax
08357343 +0x7db:  add    $0x86c4,%eax
08357348 +0x7e0:  mov    %eax,(%esp)
0835734b +0x7e3:  call   0837d1fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcc9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcc9a
08357350 +0x7e8:  jmp    0835736c <+0x804>
08357352 +0x7ea:  mov    %edx,%ebx
08357354 +0x7ec:  mov    %eax,%esi
08357356 +0x7ee:  mov    0x8(%ebp),%eax
08357359 +0x7f1:  add    $0x86a0,%eax
0835735e +0x7f6:  mov    %eax,(%esp)
08357361 +0x7f9:  call   0837d0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb9a
08357366 +0x7fe:  mov    %esi,%eax
08357368 +0x800:  mov    %ebx,%edx
0835736a +0x802:  jmp    0835737e <+0x816>
0835736c +0x804:  mov    0x8(%ebp),%eax
0835736f +0x807:  add    $0x86a0,%eax
08357374 +0x80c:  mov    %eax,(%esp)
08357377 +0x80f:  call   0837d0fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb9a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb9a
0835737c +0x814:  jmp    083573bb <+0x853>
0835737e +0x816:  mov    %edx,%esi
08357380 +0x818:  mov    %eax,%edi
08357382 +0x81a:  mov    0x8(%ebp),%eax
08357385 +0x81d:  add    $0x76e8,%eax
0835738a +0x822:  test   %eax,%eax
0835738c +0x824:  je     083573b5 <+0x84d>
0835738e +0x826:  mov    0x8(%ebp),%eax
08357391 +0x829:  add    $0x76e8,%eax
08357396 +0x82e:  lea    0xfb4(%eax),%ebx
0835739c +0x834:  mov    0x8(%ebp),%eax
0835739f +0x837:  add    $0x76e8,%eax
083573a4 +0x83c:  cmp    %eax,%ebx
083573a6 +0x83e:  je     083573b5 <+0x84d>
083573a8 +0x840:  sub    $0x14,%ebx
083573ab +0x843:  mov    %ebx,(%esp)
083573ae +0x846:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
083573b3 +0x84b:  jmp    0835739c <+0x834>
083573b5 +0x84d:  mov    %edi,%eax
083573b7 +0x84f:  mov    %esi,%edx
083573b9 +0x851:  jmp    083573ee <+0x886>
083573bb +0x853:  mov    0x8(%ebp),%eax
083573be +0x856:  add    $0x76e8,%eax
083573c3 +0x85b:  test   %eax,%eax
083573c5 +0x85d:  je     0835742b <+0x8c3>
083573c7 +0x85f:  mov    0x8(%ebp),%eax
083573ca +0x862:  add    $0x76e8,%eax
083573cf +0x867:  lea    0xfb4(%eax),%ebx
083573d5 +0x86d:  mov    0x8(%ebp),%eax
083573d8 +0x870:  add    $0x76e8,%eax
083573dd +0x875:  cmp    %eax,%ebx
083573df +0x877:  je     0835742b <+0x8c3>
083573e1 +0x879:  sub    $0x14,%ebx
083573e4 +0x87c:  mov    %ebx,(%esp)
083573e7 +0x87f:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
083573ec +0x884:  jmp    083573d5 <+0x86d>
083573ee +0x886:  mov    %edx,%esi
083573f0 +0x888:  mov    %eax,%edi
083573f2 +0x88a:  mov    0x8(%ebp),%eax
083573f5 +0x88d:  add    $0x6734,%eax
083573fa +0x892:  test   %eax,%eax
083573fc +0x894:  je     08357425 <+0x8bd>
083573fe +0x896:  mov    0x8(%ebp),%eax
08357401 +0x899:  add    $0x6734,%eax
08357406 +0x89e:  lea    0xfb4(%eax),%ebx
0835740c +0x8a4:  mov    0x8(%ebp),%eax
0835740f +0x8a7:  add    $0x6734,%eax
08357414 +0x8ac:  cmp    %eax,%ebx
08357416 +0x8ae:  je     08357425 <+0x8bd>
08357418 +0x8b0:  sub    $0x14,%ebx
0835741b +0x8b3:  mov    %ebx,(%esp)
0835741e +0x8b6:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
08357423 +0x8bb:  jmp    0835740c <+0x8a4>
08357425 +0x8bd:  mov    %edi,%eax
08357427 +0x8bf:  mov    %esi,%edx
08357429 +0x8c1:  jmp    0835745e <+0x8f6>
0835742b +0x8c3:  mov    0x8(%ebp),%eax
0835742e +0x8c6:  add    $0x6734,%eax
08357433 +0x8cb:  test   %eax,%eax
08357435 +0x8cd:  je     08357478 <+0x910>
08357437 +0x8cf:  mov    0x8(%ebp),%eax
0835743a +0x8d2:  add    $0x6734,%eax
0835743f +0x8d7:  lea    0xfb4(%eax),%ebx
08357445 +0x8dd:  mov    0x8(%ebp),%eax
08357448 +0x8e0:  add    $0x6734,%eax
0835744d +0x8e5:  cmp    %eax,%ebx
0835744f +0x8e7:  je     08357478 <+0x910>
08357451 +0x8e9:  sub    $0x14,%ebx
08357454 +0x8ec:  mov    %ebx,(%esp)
08357457 +0x8ef:  call   08374ede <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeeaa>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeeaa
0835745c +0x8f4:  jmp    08357445 <+0x8dd>
0835745e +0x8f6:  mov    %edx,%ebx
08357460 +0x8f8:  mov    %eax,%esi
08357462 +0x8fa:  mov    0x8(%ebp),%eax
08357465 +0x8fd:  add    $0x6398,%eax
0835746a +0x902:  mov    %eax,(%esp)
0835746d +0x905:  call   0837d07a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb1a
08357472 +0x90a:  mov    %esi,%eax
08357474 +0x90c:  mov    %ebx,%edx
08357476 +0x90e:  jmp    0835748a <+0x922>
08357478 +0x910:  mov    0x8(%ebp),%eax
0835747b +0x913:  add    $0x6398,%eax
08357480 +0x918:  mov    %eax,(%esp)
08357483 +0x91b:  call   0837d07a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xcb1a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xcb1a
08357488 +0x920:  jmp    083574a4 <+0x93c>
0835748a +0x922:  mov    %edx,%ebx
0835748c +0x924:  mov    %eax,%esi
0835748e +0x926:  mov    0x8(%ebp),%eax
08357491 +0x929:  add    $0x6364,%eax
08357496 +0x92e:  mov    %eax,(%esp)
08357499 +0x931:  call   0889b6c6 <_ZN12advancealtar15ConfigParameterD1Ev>  ; advancealtar::ConfigParameter::~ConfigParameter()
0835749e +0x936:  mov    %esi,%eax
083574a0 +0x938:  mov    %ebx,%edx
083574a2 +0x93a:  jmp    083574b6 <+0x94e>
083574a4 +0x93c:  mov    0x8(%ebp),%eax
083574a7 +0x93f:  add    $0x6364,%eax
083574ac +0x944:  mov    %eax,(%esp)
083574af +0x947:  call   0889b6c6 <_ZN12advancealtar15ConfigParameterD1Ev>  ; advancealtar::ConfigParameter::~ConfigParameter()
083574b4 +0x94c:  jmp    083574d0 <+0x968>
083574b6 +0x94e:  mov    %edx,%ebx
083574b8 +0x950:  mov    %eax,%esi
083574ba +0x952:  mov    0x8(%ebp),%eax
083574bd +0x955:  add    $0x634c,%eax
083574c2 +0x95a:  mov    %eax,(%esp)
083574c5 +0x95d:  call   0889af88 <_ZN12advancealtar15RewardParameterD1Ev>  ; advancealtar::RewardParameter::~RewardParameter()
083574ca +0x962:  mov    %esi,%eax
083574cc +0x964:  mov    %ebx,%edx
083574ce +0x966:  jmp    083574e2 <+0x97a>
083574d0 +0x968:  mov    0x8(%ebp),%eax
083574d3 +0x96b:  add    $0x634c,%eax
083574d8 +0x970:  mov    %eax,(%esp)
083574db +0x973:  call   0889af88 <_ZN12advancealtar15RewardParameterD1Ev>  ; advancealtar::RewardParameter::~RewardParameter()
083574e0 +0x978:  jmp    083574fc <+0x994>
083574e2 +0x97a:  mov    %edx,%ebx
083574e4 +0x97c:  mov    %eax,%esi
083574e6 +0x97e:  mov    0x8(%ebp),%eax
083574e9 +0x981:  add    $0x631c,%eax
083574ee +0x986:  mov    %eax,(%esp)
083574f1 +0x989:  call   088a0fa2 <_ZN12advancealtar25AdvanceAltarShopParameterD1Ev>  ; advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter()
083574f6 +0x98e:  mov    %esi,%eax
083574f8 +0x990:  mov    %ebx,%edx
083574fa +0x992:  jmp    0835750e <+0x9a6>
083574fc +0x994:  mov    0x8(%ebp),%eax
083574ff +0x997:  add    $0x631c,%eax
08357504 +0x99c:  mov    %eax,(%esp)
08357507 +0x99f:  call   088a0fa2 <_ZN12advancealtar25AdvanceAltarShopParameterD1Ev>  ; advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter()
0835750c +0x9a4:  jmp    08357528 <+0x9c0>
0835750e +0x9a6:  mov    %edx,%ebx
08357510 +0x9a8:  mov    %eax,%esi
08357512 +0x9aa:  mov    0x8(%ebp),%eax
08357515 +0x9ad:  add    $0x62d0,%eax
0835751a +0x9b2:  mov    %eax,(%esp)
0835751d +0x9b5:  call   08899e88 <_ZN12advancealtar22StageTimeLineParameterD1Ev>  ; advancealtar::StageTimeLineParameter::~StageTimeLineParameter()
08357522 +0x9ba:  mov    %esi,%eax
08357524 +0x9bc:  mov    %ebx,%edx
08357526 +0x9be:  jmp    0835753a <+0x9d2>
08357528 +0x9c0:  mov    0x8(%ebp),%eax
0835752b +0x9c3:  add    $0x62d0,%eax
08357530 +0x9c8:  mov    %eax,(%esp)
08357533 +0x9cb:  call   08899e88 <_ZN12advancealtar22StageTimeLineParameterD1Ev>  ; advancealtar::StageTimeLineParameter::~StageTimeLineParameter()
08357538 +0x9d0:  jmp    08357554 <+0x9ec>
0835753a +0x9d2:  mov    %edx,%ebx
0835753c +0x9d4:  mov    %eax,%esi
0835753e +0x9d6:  mov    0x8(%ebp),%eax
08357541 +0x9d9:  add    $0x629c,%eax
08357546 +0x9de:  mov    %eax,(%esp)
08357549 +0x9e1:  call   0837cfde <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xca7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xca7e
0835754e +0x9e6:  mov    %esi,%eax
08357550 +0x9e8:  mov    %ebx,%edx
08357552 +0x9ea:  jmp    08357566 <+0x9fe>
08357554 +0x9ec:  mov    0x8(%ebp),%eax
08357557 +0x9ef:  add    $0x629c,%eax
0835755c +0x9f4:  mov    %eax,(%esp)
0835755f +0x9f7:  call   0837cfde <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xca7e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xca7e
08357564 +0x9fc:  jmp    08357580 <+0xa18>
08357566 +0x9fe:  mov    %edx,%ebx
08357568 +0xa00:  mov    %eax,%esi
0835756a +0xa02:  mov    0x8(%ebp),%eax
0835756d +0xa05:  add    $0x6224,%eax
08357572 +0xa0a:  mov    %eax,(%esp)
08357575 +0xa0d:  call   0837235c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc328>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc328
0835757a +0xa12:  mov    %esi,%eax
0835757c +0xa14:  mov    %ebx,%edx
0835757e +0xa16:  jmp    08357592 <+0xa2a>
08357580 +0xa18:  mov    0x8(%ebp),%eax
08357583 +0xa1b:  add    $0x6224,%eax
08357588 +0xa20:  mov    %eax,(%esp)
0835758b +0xa23:  call   0837235c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc328>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc328
08357590 +0xa28:  jmp    083575ac <+0xa44>
08357592 +0xa2a:  mov    %edx,%ebx
08357594 +0xa2c:  mov    %eax,%esi
08357596 +0xa2e:  mov    0x8(%ebp),%eax
08357599 +0xa31:  add    $0x61ac,%eax
0835759e +0xa36:  mov    %eax,(%esp)
083575a1 +0xa39:  call   0837235c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc328>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc328
083575a6 +0xa3e:  mov    %esi,%eax
083575a8 +0xa40:  mov    %ebx,%edx
083575aa +0xa42:  jmp    083575be <+0xa56>
083575ac +0xa44:  mov    0x8(%ebp),%eax
083575af +0xa47:  add    $0x61ac,%eax
083575b4 +0xa4c:  mov    %eax,(%esp)
083575b7 +0xa4f:  call   0837235c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xc328>  ; global constructors keyed to CServerEvent::m_nExpRate+0xc328
083575bc +0xa54:  jmp    083575d8 <+0xa70>
083575be +0xa56:  mov    %edx,%ebx
083575c0 +0xa58:  mov    %eax,%esi
083575c2 +0xa5a:  mov    0x8(%ebp),%eax
083575c5 +0xa5d:  add    $0x61a0,%eax
083575ca +0xa62:  mov    %eax,(%esp)
083575cd +0xa65:  call   0837cf32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9d2
083575d2 +0xa6a:  mov    %esi,%eax
083575d4 +0xa6c:  mov    %ebx,%edx
083575d6 +0xa6e:  jmp    083575ea <+0xa82>
083575d8 +0xa70:  mov    0x8(%ebp),%eax
083575db +0xa73:  add    $0x61a0,%eax
083575e0 +0xa78:  mov    %eax,(%esp)
083575e3 +0xa7b:  call   0837cf32 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9d2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9d2
083575e8 +0xa80:  jmp    08357604 <+0xa9c>
083575ea +0xa82:  mov    %edx,%ebx
083575ec +0xa84:  mov    %eax,%esi
083575ee +0xa86:  mov    0x8(%ebp),%eax
083575f1 +0xa89:  add    $0x5e30,%eax
083575f6 +0xa8e:  mov    %eax,(%esp)
083575f9 +0xa91:  call   08370ab0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xaa7c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xaa7c
083575fe +0xa96:  mov    %esi,%eax
08357600 +0xa98:  mov    %ebx,%edx
08357602 +0xa9a:  jmp    08357616 <+0xaae>
08357604 +0xa9c:  mov    0x8(%ebp),%eax
08357607 +0xa9f:  add    $0x5e30,%eax
0835760c +0xaa4:  mov    %eax,(%esp)
0835760f +0xaa7:  call   08370ab0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xaa7c>  ; global constructors keyed to CServerEvent::m_nExpRate+0xaa7c
08357614 +0xaac:  jmp    08357630 <+0xac8>
08357616 +0xaae:  mov    %edx,%ebx
08357618 +0xab0:  mov    %eax,%esi
0835761a +0xab2:  mov    0x8(%ebp),%eax
0835761d +0xab5:  add    $0x5180,%eax
08357622 +0xaba:  mov    %eax,(%esp)
08357625 +0xabd:  call   0837cf0a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9aa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9aa
0835762a +0xac2:  mov    %esi,%eax
0835762c +0xac4:  mov    %ebx,%edx
0835762e +0xac6:  jmp    08357642 <+0xada>
08357630 +0xac8:  mov    0x8(%ebp),%eax
08357633 +0xacb:  add    $0x5180,%eax
08357638 +0xad0:  mov    %eax,(%esp)
0835763b +0xad3:  call   0837cf0a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc9aa>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc9aa
08357640 +0xad8:  jmp    0835765c <+0xaf4>
08357642 +0xada:  mov    %edx,%ebx
08357644 +0xadc:  mov    %eax,%esi
08357646 +0xade:  mov    0x8(%ebp),%eax
08357649 +0xae1:  add    $0x5108,%eax
0835764e +0xae6:  mov    %eax,(%esp)
08357651 +0xae9:  call   0837ce4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8ec
08357656 +0xaee:  mov    %esi,%eax
08357658 +0xaf0:  mov    %ebx,%edx
0835765a +0xaf2:  jmp    0835766e <+0xb06>
0835765c +0xaf4:  mov    0x8(%ebp),%eax
0835765f +0xaf7:  add    $0x5108,%eax
08357664 +0xafc:  mov    %eax,(%esp)
08357667 +0xaff:  call   0837ce4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8ec
0835766c +0xb04:  jmp    08357688 <+0xb20>
0835766e +0xb06:  mov    %edx,%ebx
08357670 +0xb08:  mov    %eax,%esi
08357672 +0xb0a:  mov    0x8(%ebp),%eax
08357675 +0xb0d:  add    $0x50ac,%eax
0835767a +0xb12:  mov    %eax,(%esp)
0835767d +0xb15:  call   08371530 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb4fc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb4fc
08357682 +0xb1a:  mov    %esi,%eax
08357684 +0xb1c:  mov    %ebx,%edx
08357686 +0xb1e:  jmp    0835769a <+0xb32>
08357688 +0xb20:  mov    0x8(%ebp),%eax
0835768b +0xb23:  add    $0x50ac,%eax
08357690 +0xb28:  mov    %eax,(%esp)
08357693 +0xb2b:  call   08371530 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb4fc>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb4fc
08357698 +0xb30:  jmp    083576b4 <+0xb4c>
0835769a +0xb32:  mov    %edx,%ebx
0835769c +0xb34:  mov    %eax,%esi
0835769e +0xb36:  mov    0x8(%ebp),%eax
083576a1 +0xb39:  add    $0x5094,%eax
083576a6 +0xb3e:  mov    %eax,(%esp)
083576a9 +0xb41:  call   0837ce38 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8d8
083576ae +0xb46:  mov    %esi,%eax
083576b0 +0xb48:  mov    %ebx,%edx
083576b2 +0xb4a:  jmp    083576c6 <+0xb5e>
083576b4 +0xb4c:  mov    0x8(%ebp),%eax
083576b7 +0xb4f:  add    $0x5094,%eax
083576bc +0xb54:  mov    %eax,(%esp)
083576bf +0xb57:  call   0837ce38 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc8d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc8d8
083576c4 +0xb5c:  jmp    083576e0 <+0xb78>
083576c6 +0xb5e:  mov    %edx,%ebx
083576c8 +0xb60:  mov    %eax,%esi
083576ca +0xb62:  mov    0x8(%ebp),%eax
083576cd +0xb65:  add    $0x5040,%eax
083576d2 +0xb6a:  mov    %eax,(%esp)
083576d5 +0xb6d:  call   085f8506 <_ZN15RegenerationROID1Ev>  ; RegenerationROI::~RegenerationROI()
083576da +0xb72:  mov    %esi,%eax
083576dc +0xb74:  mov    %ebx,%edx
083576de +0xb76:  jmp    083576f2 <+0xb8a>
083576e0 +0xb78:  mov    0x8(%ebp),%eax
083576e3 +0xb7b:  add    $0x5040,%eax
083576e8 +0xb80:  mov    %eax,(%esp)
083576eb +0xb83:  call   085f8506 <_ZN15RegenerationROID1Ev>  ; RegenerationROI::~RegenerationROI()
083576f0 +0xb88:  jmp    0835770c <+0xba4>
083576f2 +0xb8a:  mov    %edx,%ebx
083576f4 +0xb8c:  mov    %eax,%esi
083576f6 +0xb8e:  mov    0x8(%ebp),%eax
083576f9 +0xb91:  add    $0x4e10,%eax
083576fe +0xb96:  mov    %eax,(%esp)
08357701 +0xb99:  call   0837c9e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc488>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc488
08357706 +0xb9e:  mov    %esi,%eax
08357708 +0xba0:  mov    %ebx,%edx
0835770a +0xba2:  jmp    0835771e <+0xbb6>
0835770c +0xba4:  mov    0x8(%ebp),%eax
0835770f +0xba7:  add    $0x4e10,%eax
08357714 +0xbac:  mov    %eax,(%esp)
08357717 +0xbaf:  call   0837c9e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc488>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc488
0835771c +0xbb4:  jmp    08357738 <+0xbd0>
0835771e +0xbb6:  mov    %edx,%ebx
08357720 +0xbb8:  mov    %eax,%esi
08357722 +0xbba:  mov    0x8(%ebp),%eax
08357725 +0xbbd:  add    $0x4df8,%eax
0835772a +0xbc2:  mov    %eax,(%esp)
0835772d +0xbc5:  call   0837c9d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc474>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc474
08357732 +0xbca:  mov    %esi,%eax
08357734 +0xbcc:  mov    %ebx,%edx
08357736 +0xbce:  jmp    0835774a <+0xbe2>
08357738 +0xbd0:  mov    0x8(%ebp),%eax
0835773b +0xbd3:  add    $0x4df8,%eax
08357740 +0xbd8:  mov    %eax,(%esp)
08357743 +0xbdb:  call   0837c9d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc474>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc474
08357748 +0xbe0:  jmp    08357764 <+0xbfc>
0835774a +0xbe2:  mov    %edx,%ebx
0835774c +0xbe4:  mov    %eax,%esi
0835774e +0xbe6:  mov    0x8(%ebp),%eax
08357751 +0xbe9:  add    $0x4de8,%eax
08357756 +0xbee:  mov    %eax,(%esp)
08357759 +0xbf1:  call   0837c9c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc460>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc460
0835775e +0xbf6:  mov    %esi,%eax
08357760 +0xbf8:  mov    %ebx,%edx
08357762 +0xbfa:  jmp    08357776 <+0xc0e>
08357764 +0xbfc:  mov    0x8(%ebp),%eax
08357767 +0xbff:  add    $0x4de8,%eax
0835776c +0xc04:  mov    %eax,(%esp)
0835776f +0xc07:  call   0837c9c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc460>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc460
08357774 +0xc0c:  jmp    08357790 <+0xc28>
08357776 +0xc0e:  mov    %edx,%ebx
08357778 +0xc10:  mov    %eax,%esi
0835777a +0xc12:  mov    0x8(%ebp),%eax
0835777d +0xc15:  add    $0x4d98,%eax
08357782 +0xc1a:  mov    %eax,(%esp)
08357785 +0xc1d:  call   0837c938 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc3d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc3d8
0835778a +0xc22:  mov    %esi,%eax
0835778c +0xc24:  mov    %ebx,%edx
0835778e +0xc26:  jmp    083577a2 <+0xc3a>
08357790 +0xc28:  mov    0x8(%ebp),%eax
08357793 +0xc2b:  add    $0x4d98,%eax
08357798 +0xc30:  mov    %eax,(%esp)
0835779b +0xc33:  call   0837c938 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc3d8>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc3d8
083577a0 +0xc38:  jmp    083577bc <+0xc54>
083577a2 +0xc3a:  mov    %edx,%ebx
083577a4 +0xc3c:  mov    %eax,%esi
083577a6 +0xc3e:  mov    0x8(%ebp),%eax
083577a9 +0xc41:  add    $0x4d5c,%eax
083577ae +0xc46:  mov    %eax,(%esp)
083577b1 +0xc49:  call   0837c884 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc324>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc324
083577b6 +0xc4e:  mov    %esi,%eax
083577b8 +0xc50:  mov    %ebx,%edx
083577ba +0xc52:  jmp    083577ce <+0xc66>
083577bc +0xc54:  mov    0x8(%ebp),%eax
083577bf +0xc57:  add    $0x4d5c,%eax
083577c4 +0xc5c:  mov    %eax,(%esp)
083577c7 +0xc5f:  call   0837c884 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc324>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc324
083577cc +0xc64:  jmp    083577e8 <+0xc80>
083577ce +0xc66:  mov    %edx,%ebx
083577d0 +0xc68:  mov    %eax,%esi
083577d2 +0xc6a:  mov    0x8(%ebp),%eax
083577d5 +0xc6d:  add    $0x4d44,%eax
083577da +0xc72:  mov    %eax,(%esp)
083577dd +0xc75:  call   08370cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xac80>  ; global constructors keyed to CServerEvent::m_nExpRate+0xac80
083577e2 +0xc7a:  mov    %esi,%eax
083577e4 +0xc7c:  mov    %ebx,%edx
083577e6 +0xc7e:  jmp    083577fa <+0xc92>
083577e8 +0xc80:  mov    0x8(%ebp),%eax
083577eb +0xc83:  add    $0x4d44,%eax
083577f0 +0xc88:  mov    %eax,(%esp)
083577f3 +0xc8b:  call   08370cb4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xac80>  ; global constructors keyed to CServerEvent::m_nExpRate+0xac80
083577f8 +0xc90:  jmp    08357814 <+0xcac>
083577fa +0xc92:  mov    %edx,%ebx
083577fc +0xc94:  mov    %eax,%esi
083577fe +0xc96:  mov    0x8(%ebp),%eax
08357801 +0xc99:  add    $0x4d28,%eax
08357806 +0xc9e:  mov    %eax,(%esp)
08357809 +0xca1:  call   0890ce34 <_ZN24CNPCRelationEventManagerD1Ev>  ; CNPCRelationEventManager::~CNPCRelationEventManager()
0835780e +0xca6:  mov    %esi,%eax
08357810 +0xca8:  mov    %ebx,%edx
08357812 +0xcaa:  jmp    08357826 <+0xcbe>
08357814 +0xcac:  mov    0x8(%ebp),%eax
08357817 +0xcaf:  add    $0x4d28,%eax
0835781c +0xcb4:  mov    %eax,(%esp)
0835781f +0xcb7:  call   0890ce34 <_ZN24CNPCRelationEventManagerD1Ev>  ; CNPCRelationEventManager::~CNPCRelationEventManager()
08357824 +0xcbc:  jmp    08357840 <+0xcd8>
08357826 +0xcbe:  mov    %edx,%ebx
08357828 +0xcc0:  mov    %eax,%esi
0835782a +0xcc2:  mov    0x8(%ebp),%eax
0835782d +0xcc5:  add    $0x4d1c,%eax
08357832 +0xcca:  mov    %eax,(%esp)
08357835 +0xccd:  call   0839206e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21b0e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21b0e
0835783a +0xcd2:  mov    %esi,%eax
0835783c +0xcd4:  mov    %ebx,%edx
0835783e +0xcd6:  jmp    08357852 <+0xcea>
08357840 +0xcd8:  mov    0x8(%ebp),%eax
08357843 +0xcdb:  add    $0x4d1c,%eax
08357848 +0xce0:  mov    %eax,(%esp)
0835784b +0xce3:  call   0839206e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21b0e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21b0e
08357850 +0xce8:  jmp    0835786c <+0xd04>
08357852 +0xcea:  mov    %edx,%ebx
08357854 +0xcec:  mov    %eax,%esi
08357856 +0xcee:  mov    0x8(%ebp),%eax
08357859 +0xcf1:  add    $0x4cf8,%eax
0835785e +0xcf6:  mov    %eax,(%esp)
08357861 +0xcf9:  call   0837c7a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc242>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc242
08357866 +0xcfe:  mov    %esi,%eax
08357868 +0xd00:  mov    %ebx,%edx
0835786a +0xd02:  jmp    0835787e <+0xd16>
0835786c +0xd04:  mov    0x8(%ebp),%eax
0835786f +0xd07:  add    $0x4cf8,%eax
08357874 +0xd0c:  mov    %eax,(%esp)
08357877 +0xd0f:  call   0837c7a2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc242>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc242
0835787c +0xd14:  jmp    08357898 <+0xd30>
0835787e +0xd16:  mov    %edx,%ebx
08357880 +0xd18:  mov    %eax,%esi
08357882 +0xd1a:  mov    0x8(%ebp),%eax
08357885 +0xd1d:  add    $0x4ca8,%eax
0835788a +0xd22:  mov    %eax,(%esp)
0835788d +0xd25:  call   0837c5fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc09a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc09a
08357892 +0xd2a:  mov    %esi,%eax
08357894 +0xd2c:  mov    %ebx,%edx
08357896 +0xd2e:  jmp    083578aa <+0xd42>
08357898 +0xd30:  mov    0x8(%ebp),%eax
0835789b +0xd33:  add    $0x4ca8,%eax
083578a0 +0xd38:  mov    %eax,(%esp)
083578a3 +0xd3b:  call   0837c5fa <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xc09a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xc09a
083578a8 +0xd40:  jmp    083578c4 <+0xd5c>
083578aa +0xd42:  mov    %edx,%ebx
083578ac +0xd44:  mov    %eax,%esi
083578ae +0xd46:  mov    0x8(%ebp),%eax
083578b1 +0xd49:  add    $0x4c50,%eax
083578b6 +0xd4e:  mov    %eax,(%esp)
083578b9 +0xd51:  call   0837c46a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbf0a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbf0a
083578be +0xd56:  mov    %esi,%eax
083578c0 +0xd58:  mov    %ebx,%edx
083578c2 +0xd5a:  jmp    083578d6 <+0xd6e>
083578c4 +0xd5c:  mov    0x8(%ebp),%eax
083578c7 +0xd5f:  add    $0x4c50,%eax
083578cc +0xd64:  mov    %eax,(%esp)
083578cf +0xd67:  call   0837c46a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbf0a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbf0a
083578d4 +0xd6c:  jmp    083578f0 <+0xd88>
083578d6 +0xd6e:  mov    %edx,%ebx
083578d8 +0xd70:  mov    %eax,%esi
083578da +0xd72:  mov    0x8(%ebp),%eax
083578dd +0xd75:  add    $0x4c04,%eax
083578e2 +0xd7a:  mov    %eax,(%esp)
083578e5 +0xd7d:  call   0837c3fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe9c
083578ea +0xd82:  mov    %esi,%eax
083578ec +0xd84:  mov    %ebx,%edx
083578ee +0xd86:  jmp    08357902 <+0xd9a>
083578f0 +0xd88:  mov    0x8(%ebp),%eax
083578f3 +0xd8b:  add    $0x4c04,%eax
083578f8 +0xd90:  mov    %eax,(%esp)
083578fb +0xd93:  call   0837c3fc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe9c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe9c
08357900 +0xd98:  jmp    0835791c <+0xdb4>
08357902 +0xd9a:  mov    %edx,%ebx
08357904 +0xd9c:  mov    %eax,%esi
08357906 +0xd9e:  mov    0x8(%ebp),%eax
08357909 +0xda1:  add    $0x4bec,%eax
0835790e +0xda6:  mov    %eax,(%esp)
08357911 +0xda9:  call   0837c3e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe88>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe88
08357916 +0xdae:  mov    %esi,%eax
08357918 +0xdb0:  mov    %ebx,%edx
0835791a +0xdb2:  jmp    0835792e <+0xdc6>
0835791c +0xdb4:  mov    0x8(%ebp),%eax
0835791f +0xdb7:  add    $0x4bec,%eax
08357924 +0xdbc:  mov    %eax,(%esp)
08357927 +0xdbf:  call   0837c3e8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe88>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe88
0835792c +0xdc4:  jmp    08357948 <+0xde0>
0835792e +0xdc6:  mov    %edx,%ebx
08357930 +0xdc8:  mov    %eax,%esi
08357932 +0xdca:  mov    0x8(%ebp),%eax
08357935 +0xdcd:  add    $0x4bd4,%eax
0835793a +0xdd2:  mov    %eax,(%esp)
0835793d +0xdd5:  call   0837c3d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe74>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe74
08357942 +0xdda:  mov    %esi,%eax
08357944 +0xddc:  mov    %ebx,%edx
08357946 +0xdde:  jmp    0835795a <+0xdf2>
08357948 +0xde0:  mov    0x8(%ebp),%eax
0835794b +0xde3:  add    $0x4bd4,%eax
08357950 +0xde8:  mov    %eax,(%esp)
08357953 +0xdeb:  call   0837c3d4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe74>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe74
08357958 +0xdf0:  jmp    08357974 <+0xe0c>
0835795a +0xdf2:  mov    %edx,%ebx
0835795c +0xdf4:  mov    %eax,%esi
0835795e +0xdf6:  mov    0x8(%ebp),%eax
08357961 +0xdf9:  add    $0x4bac,%eax
08357966 +0xdfe:  mov    %eax,(%esp)
08357969 +0xe01:  call   0837c3c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe60
0835796e +0xe06:  mov    %esi,%eax
08357970 +0xe08:  mov    %ebx,%edx
08357972 +0xe0a:  jmp    08357986 <+0xe1e>
08357974 +0xe0c:  mov    0x8(%ebp),%eax
08357977 +0xe0f:  add    $0x4bac,%eax
0835797c +0xe14:  mov    %eax,(%esp)
0835797f +0xe17:  call   0837c3c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbe60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbe60
08357984 +0xe1c:  jmp    083579a0 <+0xe38>
08357986 +0xe1e:  mov    %edx,%ebx
08357988 +0xe20:  mov    %eax,%esi
0835798a +0xe22:  mov    0x8(%ebp),%eax
0835798d +0xe25:  add    $0x4b70,%eax
08357992 +0xe2a:  mov    %eax,(%esp)
08357995 +0xe2d:  call   0837c352 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbdf2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbdf2
0835799a +0xe32:  mov    %esi,%eax
0835799c +0xe34:  mov    %ebx,%edx
0835799e +0xe36:  jmp    083579b2 <+0xe4a>
083579a0 +0xe38:  mov    0x8(%ebp),%eax
083579a3 +0xe3b:  add    $0x4b70,%eax
083579a8 +0xe40:  mov    %eax,(%esp)
083579ab +0xe43:  call   0837c352 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbdf2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbdf2
083579b0 +0xe48:  jmp    083579cc <+0xe64>
083579b2 +0xe4a:  mov    %edx,%ebx
083579b4 +0xe4c:  mov    %eax,%esi
083579b6 +0xe4e:  mov    0x8(%ebp),%eax
083579b9 +0xe51:  add    $0x4b18,%eax
083579be +0xe56:  mov    %eax,(%esp)
083579c1 +0xe59:  call   0837c306 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbda6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbda6
083579c6 +0xe5e:  mov    %esi,%eax
083579c8 +0xe60:  mov    %ebx,%edx
083579ca +0xe62:  jmp    083579de <+0xe76>
083579cc +0xe64:  mov    0x8(%ebp),%eax
083579cf +0xe67:  add    $0x4b18,%eax
083579d4 +0xe6c:  mov    %eax,(%esp)
083579d7 +0xe6f:  call   0837c306 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbda6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbda6
083579dc +0xe74:  jmp    083579f8 <+0xe90>
083579de +0xe76:  mov    %edx,%ebx
083579e0 +0xe78:  mov    %eax,%esi
083579e2 +0xe7a:  mov    0x8(%ebp),%eax
083579e5 +0xe7d:  add    $0x4af4,%eax
083579ea +0xe82:  mov    %eax,(%esp)
083579ed +0xe85:  call   0837c2c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbd60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbd60
083579f2 +0xe8a:  mov    %esi,%eax
083579f4 +0xe8c:  mov    %ebx,%edx
083579f6 +0xe8e:  jmp    08357a0a <+0xea2>
083579f8 +0xe90:  mov    0x8(%ebp),%eax
083579fb +0xe93:  add    $0x4af4,%eax
08357a00 +0xe98:  mov    %eax,(%esp)
08357a03 +0xe9b:  call   0837c2c0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xbd60>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xbd60
08357a08 +0xea0:  jmp    08357a22 <+0xeba>
08357a0a +0xea2:  mov    %edx,%ebx
08357a0c +0xea4:  mov    %eax,%esi
08357a0e +0xea6:  mov    0x8(%ebp),%eax
08357a11 +0xea9:  add    $0x68,%eax
08357a14 +0xeac:  mov    %eax,(%esp)
08357a17 +0xeaf:  call   0837bb42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xb5e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xb5e2
08357a1c +0xeb4:  mov    %esi,%eax
08357a1e +0xeb6:  mov    %ebx,%edx
08357a20 +0xeb8:  jmp    08357a32 <+0xeca>
08357a22 +0xeba:  mov    0x8(%ebp),%eax
08357a25 +0xebd:  add    $0x68,%eax
08357a28 +0xec0:  mov    %eax,(%esp)
08357a2b +0xec3:  call   0837bb42 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xb5e2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xb5e2
08357a30 +0xec8:  jmp    08357a50 <+0xee8>
08357a32 +0xeca:  mov    %edx,%ebx
08357a34 +0xecc:  mov    %eax,%esi
08357a36 +0xece:  mov    0x8(%ebp),%eax
08357a39 +0xed1:  add    $0x2c,%eax
08357a3c +0xed4:  mov    %eax,(%esp)
08357a3f +0xed7:  call   0837bb2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xb5ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xb5ce
08357a44 +0xedc:  mov    %esi,%eax
08357a46 +0xede:  mov    %ebx,%edx
08357a48 +0xee0:  mov    %eax,(%esp)
08357a4b +0xee3:  call   08ae3750 <_Unwind_Resume>
08357a50 +0xee8:  mov    0x8(%ebp),%eax
08357a53 +0xeeb:  add    $0x2c,%eax
08357a56 +0xeee:  mov    %eax,(%esp)
08357a59 +0xef1:  call   0837bb2e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0xb5ce>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0xb5ce
08357a5e +0xef6:  add    $0x1c,%esp
08357a61 +0xef9:  pop    %ebx
08357a62 +0xefa:  pop    %esi
08357a63 +0xefb:  pop    %edi
08357a64 +0xefc:  pop    %ebp
08357a65 +0xefd:  ret
```

## 反编译 C

```c
// CDataManager::~CDataManager @ 0x8356b68

/* CDataManager::~CDataManager() */

void __thiscall CDataManager::~CDataManager(CDataManager *this)

{
  vector<int,std::allocator<int>> *this_00;
  WorldDropInfo *pWVar1;
  
                    /* try { // try from 08356b77 to 08356b7b has its CatchHandler @ 08356b7e */
  destroy(this);
                    /* try { // try from 08356ba3 to 08356ba7 has its CatchHandler @ 08356baa */
  DeleteInvalidItemScript::~DeleteInvalidItemScript((DeleteInvalidItemScript *)(this + 0xb658));
                    /* try { // try from 08356bcf to 08356bd3 has its CatchHandler @ 08356bd6 */
  eventReward::~eventReward((eventReward *)(this + 0xb628));
                    /* try { // try from 08356bfb to 08356bff has its CatchHandler @ 08356c02 */
  stNewAccountLevelUpToJobScript::~stNewAccountLevelUpToJobScript
            ((stNewAccountLevelUpToJobScript *)(this + 0xb5e0));
                    /* try { // try from 08356c27 to 08356c2b has its CatchHandler @ 08356c2e */
  stBroadCastItemScript::~stBroadCastItemScript((stBroadCastItemScript *)(this + 0xb5bc));
                    /* try { // try from 08356c53 to 08356c57 has its CatchHandler @ 08356c5a */
  stBingoScript::~stBingoScript((stBingoScript *)(this + 0xb568));
                    /* try { // try from 08356c7f to 08356c83 has its CatchHandler @ 08356c86 */
  stReturnUserRewardScript::~stReturnUserRewardScript((stReturnUserRewardScript *)(this + 0xb548));
                    /* try { // try from 08356cab to 08356caf has its CatchHandler @ 08356cb2 */
  std::string::~string((string *)(this + 0xb544));
                    /* try { // try from 08356cd7 to 08356cdb has its CatchHandler @ 08356cde */
  EventEtcScript::~EventEtcScript((EventEtcScript *)(this + 0xb520));
                    /* try { // try from 08356d03 to 08356d07 has its CatchHandler @ 08356d0a */
  EventAvatarListScript::~EventAvatarListScript((EventAvatarListScript *)(this + 0xb508));
                    /* try { // try from 08356d2f to 08356d33 has its CatchHandler @ 08356d36 */
  live_server_info_t::~live_server_info_t((live_server_info_t *)(this + 0xb4ec));
                    /* try { // try from 08356d5b to 08356d5f has its CatchHandler @ 08356d62 */
  CLottery_NeedMoney::~CLottery_NeedMoney((CLottery_NeedMoney *)(this + 0xb4d4));
                    /* try { // try from 08356d87 to 08356d8b has its CatchHandler @ 08356d8e */
  ARAD::SCRIPT::AradJumping_Script::~AradJumping_Script((AradJumping_Script *)(this + 0xb4c8));
                    /* try { // try from 08356db3 to 08356db7 has its CatchHandler @ 08356dba */
  std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::~set
            ((set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> *)
             (this + 0xb4ac));
                    /* try { // try from 08356ddf to 08356de3 has its CatchHandler @ 08356de6 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0xb488));
                    /* try { // try from 08356e0b to 08356e0f has its CatchHandler @ 08356e12 */
  stItemMakingSkill::~stItemMakingSkill((stItemMakingSkill *)(this + 0xb458));
                    /* try { // try from 08356e37 to 08356e3b has its CatchHandler @ 08356e3e */
  std::vector<stVendingMachine_t,std::allocator<stVendingMachine_t>>::~vector
            ((vector<stVendingMachine_t,std::allocator<stVendingMachine_t>> *)(this + 0xb424));
                    /* try { // try from 08356e63 to 08356e67 has its CatchHandler @ 08356e6a */
  channel_script_t::~channel_script_t((channel_script_t *)(this + 0xb3f4));
                    /* try { // try from 08356e8f to 08356e93 has its CatchHandler @ 08356e96 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa940)
            );
                    /* try { // try from 08356ebb to 08356ebf has its CatchHandler @ 08356ec2 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0xa928)
            );
                    /* try { // try from 08356ee7 to 08356eeb has its CatchHandler @ 08356eee */
  stMercenarySystemInfo::~stMercenarySystemInfo((stMercenarySystemInfo *)(this + 0xa8dc));
                    /* try { // try from 08356f13 to 08356f17 has its CatchHandler @ 08356f1a */
  std::string::~string((string *)(this + 0xa8cc));
                    /* try { // try from 08356f3f to 08356f43 has its CatchHandler @ 08356f46 */
  std::string::~string((string *)(this + 0xa8c8));
                    /* try { // try from 08356f6b to 08356f6f has its CatchHandler @ 08356f72 */
  std::string::~string((string *)(this + 0xa8c4));
                    /* try { // try from 08356f97 to 08356f9b has its CatchHandler @ 08356f9e */
  std::string::~string((string *)(this + 0xa8c0));
                    /* try { // try from 08356fc3 to 08356fc7 has its CatchHandler @ 08356fca */
  IndependentDropParameterScript::~IndependentDropParameterScript
            ((IndependentDropParameterScript *)(this + 0xa884));
                    /* try { // try from 08356fef to 08356ff3 has its CatchHandler @ 08356ff6 */
  EventCharacterParameterScript::~EventCharacterParameterScript
            ((EventCharacterParameterScript *)(this + 0xa86c));
                    /* try { // try from 0835701b to 0835701f has its CatchHandler @ 08357022 */
  PvPSkillTreeParameterScript::~PvPSkillTreeParameterScript
            ((PvPSkillTreeParameterScript *)(this + 0xa800));
                    /* try { // try from 08357047 to 0835704b has its CatchHandler @ 0835704e */
  AccountCargoScript::~AccountCargoScript((AccountCargoScript *)(this + 0xa7e0));
                    /* try { // try from 08357073 to 08357077 has its CatchHandler @ 0835707a */
  stTitleBookInfo::~stTitleBookInfo((stTitleBookInfo *)(this + 0xa788));
                    /* try { // try from 0835709f to 083570a3 has its CatchHandler @ 083570a6 */
  SecretShopScript::~SecretShopScript((SecretShopScript *)(this + 0xa700));
                    /* try { // try from 083570cb to 083570cf has its CatchHandler @ 083570d2 */
  PowerParameterScript::~PowerParameterScript((PowerParameterScript *)(this + 0xa628));
                    /* try { // try from 083570f7 to 083570fb has its CatchHandler @ 083570fe */
  GuildParameterScript::~GuildParameterScript((GuildParameterScript *)(this + 0xa50c));
  if (this != (CDataManager *)0xffff5e3c) {
    this_00 = (vector<int,std::allocator<int>> *)(this + 0xa50c);
    while (this_00 != (vector<int,std::allocator<int>> *)(this + 0xa1c4)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 08357167 to 0835716b has its CatchHandler @ 0835716e */
      std::vector<int,std::allocator<int>>::~vector(this_00);
    }
  }
                    /* try { // try from 08357193 to 08357197 has its CatchHandler @ 0835719a */
  TrainingQuestScript::~TrainingQuestScript((TrainingQuestScript *)(this + 0x8d34));
                    /* try { // try from 083571bf to 083571c3 has its CatchHandler @ 083571c6 */
  QuestParameterScript::~QuestParameterScript((QuestParameterScript *)(this + 0x8cc8));
                    /* try { // try from 083571eb to 083571ef has its CatchHandler @ 083571f2 */
  std::string::~string((string *)(this + 0x8cb8));
                    /* try { // try from 08357217 to 0835721b has its CatchHandler @ 0835721e */
  WarAreaCounter::~WarAreaCounter((WarAreaCounter *)(this + 0x87b4));
                    /* try { // try from 08357243 to 08357247 has its CatchHandler @ 0835724a */
  StageMapList::~StageMapList((StageMapList *)(this + 0x8798));
                    /* try { // try from 0835726f to 08357273 has its CatchHandler @ 08357276 */
  CWorldMapList::~CWorldMapList((CWorldMapList *)(this + 0x8780));
                    /* try { // try from 0835729b to 0835729f has its CatchHandler @ 083572a2 */
  BoosterGageData::~BoosterGageData((BoosterGageData *)(this + 0x8770));
                    /* try { // try from 083572c7 to 083572cb has its CatchHandler @ 083572ce */
  AvatarVariation::AvatarColorInfo::~AvatarColorInfo((AvatarColorInfo *)(this + 0x8740));
                    /* try { // try from 083572f3 to 083572f7 has its CatchHandler @ 083572fa */
  STGrowthPowerData::~STGrowthPowerData((STGrowthPowerData *)(this + 0x8710));
                    /* try { // try from 0835731f to 08357323 has its CatchHandler @ 08357326 */
  std::
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  ::~map((map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
          *)(this + 0x86f8));
                    /* try { // try from 0835734b to 0835734f has its CatchHandler @ 08357352 */
  InvalidCharData::~InvalidCharData((InvalidCharData *)(this + 0x86c4));
                    /* try { // try from 08357377 to 0835737b has its CatchHandler @ 0835737e */
  SlangNameData::~SlangNameData((SlangNameData *)(this + 0x86a0));
  if (this != (CDataManager *)0xffff8918) {
    pWVar1 = (WorldDropInfo *)(this + 0x869c);
    while (pWVar1 != (WorldDropInfo *)(this + 0x76e8)) {
      pWVar1 = pWVar1 + -0x14;
                    /* try { // try from 083573e7 to 083573eb has its CatchHandler @ 083573ee */
      WorldDropInfo::~WorldDropInfo(pWVar1);
    }
  }
  if (this != (CDataManager *)0xffff98cc) {
    pWVar1 = (WorldDropInfo *)(this + 0x76e8);
    while (pWVar1 != (WorldDropInfo *)(this + 0x6734)) {
      pWVar1 = pWVar1 + -0x14;
                    /* try { // try from 08357457 to 0835745b has its CatchHandler @ 0835745e */
      WorldDropInfo::~WorldDropInfo(pWVar1);
    }
  }
                    /* try { // try from 08357483 to 08357487 has its CatchHandler @ 0835748a */
  stQuestShop::~stQuestShop((stQuestShop *)(this + 0x6398));
                    /* try { // try from 083574af to 083574b3 has its CatchHandler @ 083574b6 */
  advancealtar::ConfigParameter::~ConfigParameter((ConfigParameter *)(this + 0x6364));
                    /* try { // try from 083574db to 083574df has its CatchHandler @ 083574e2 */
  advancealtar::RewardParameter::~RewardParameter((RewardParameter *)(this + 0x634c));
                    /* try { // try from 08357507 to 0835750b has its CatchHandler @ 0835750e */
  advancealtar::AdvanceAltarShopParameter::~AdvanceAltarShopParameter
            ((AdvanceAltarShopParameter *)(this + 0x631c));
                    /* try { // try from 08357533 to 08357537 has its CatchHandler @ 0835753a */
  advancealtar::StageTimeLineParameter::~StageTimeLineParameter
            ((StageTimeLineParameter *)(this + 0x62d0));
                    /* try { // try from 0835755f to 08357563 has its CatchHandler @ 08357566 */
  stCharacLinkSystem_t::~stCharacLinkSystem_t((stCharacLinkSystem_t *)(this + 0x629c));
                    /* try { // try from 0835758b to 0835758f has its CatchHandler @ 08357592 */
  APSystem::CActionPointEtcParameter::~CActionPointEtcParameter
            ((CActionPointEtcParameter *)(this + 0x6224));
                    /* try { // try from 083575b7 to 083575bb has its CatchHandler @ 083575be */
  APSystem::CActionPointEtcParameter::~CActionPointEtcParameter
            ((CActionPointEtcParameter *)(this + 0x61ac));
                    /* try { // try from 083575e3 to 083575e7 has its CatchHandler @ 083575ea */
  stVillageAttacked_t::~stVillageAttacked_t((stVillageAttacked_t *)(this + 0x61a0));
                    /* try { // try from 0835760f to 08357613 has its CatchHandler @ 08357616 */
  stBloodDungeon_t::~stBloodDungeon_t((stBloodDungeon_t *)(this + 0x5e30));
                    /* try { // try from 0835763b to 0835763f has its CatchHandler @ 08357642 */
  std::
  map<unsigned_int,stDeathTower_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stDeathTower_t>>>
  ::~map((map<unsigned_int,stDeathTower_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stDeathTower_t>>>
          *)(this + 0x5180));
                    /* try { // try from 08357667 to 0835766b has its CatchHandler @ 0835766e */
  stRankSystemInfo::~stRankSystemInfo((stRankSystemInfo *)(this + 0x5108));
                    /* try { // try from 08357693 to 08357697 has its CatchHandler @ 0835769a */
  stLevelUpRewardItemScript::~stLevelUpRewardItemScript
            ((stLevelUpRewardItemScript *)(this + 0x50ac));
                    /* try { // try from 083576bf to 083576c3 has its CatchHandler @ 083576c6 */
  stSeriaBlessingScript::~stSeriaBlessingScript((stSeriaBlessingScript *)(this + 0x5094));
                    /* try { // try from 083576eb to 083576ef has its CatchHandler @ 083576f2 */
  RegenerationROI::~RegenerationROI((RegenerationROI *)(this + 0x5040));
                    /* try { // try from 08357717 to 0835771b has its CatchHandler @ 0835771e */
  RandomOptionScript::~RandomOptionScript((RandomOptionScript *)(this + 0x4e10));
                    /* try { // try from 08357743 to 08357747 has its CatchHandler @ 0835774a */
  FairPvPStatScript::~FairPvPStatScript((FairPvPStatScript *)(this + 0x4df8));
                    /* try { // try from 0835776f to 08357773 has its CatchHandler @ 08357776 */
  ConditionLevelChkDungeon::~ConditionLevelChkDungeon((ConditionLevelChkDungeon *)(this + 0x4de8));
                    /* try { // try from 0835779b to 0835779f has its CatchHandler @ 083577a2 */
  stConditionEventInfo::~stConditionEventInfo((stConditionEventInfo *)(this + 0x4d98));
                    /* try { // try from 083577c7 to 083577cb has its CatchHandler @ 083577ce */
  stEquipmentGradeSample::~stEquipmentGradeSample((stEquipmentGradeSample *)(this + 0x4d5c));
                    /* try { // try from 083577f3 to 083577f7 has its CatchHandler @ 083577fa */
  stEmotionTypeTagsInfo::~stEmotionTypeTagsInfo((stEmotionTypeTagsInfo *)(this + 0x4d44));
                    /* try { // try from 0835781f to 08357823 has its CatchHandler @ 08357826 */
  CNPCRelationEventManager::~CNPCRelationEventManager((CNPCRelationEventManager *)(this + 0x4d28));
                    /* try { // try from 0835784b to 0835784f has its CatchHandler @ 08357852 */
  std::vector<stDBLogItem,std::allocator<stDBLogItem>>::~vector
            ((vector<stDBLogItem,std::allocator<stDBLogItem>> *)(this + 0x4d1c));
                    /* try { // try from 08357877 to 0835787b has its CatchHandler @ 0835787e */
  stLimitItemUsageInfoEx::~stLimitItemUsageInfoEx((stLimitItemUsageInfoEx *)(this + 0x4cf8));
                    /* try { // try from 083578a3 to 083578a7 has its CatchHandler @ 083578aa */
  stUnlimitChallengeInfo::~stUnlimitChallengeInfo((stUnlimitChallengeInfo *)(this + 0x4ca8));
                    /* try { // try from 083578cf to 083578d3 has its CatchHandler @ 083578d6 */
  seriaRoomDecoAniEventScript::~seriaRoomDecoAniEventScript
            ((seriaRoomDecoAniEventScript *)(this + 0x4c50));
                    /* try { // try from 083578fb to 083578ff has its CatchHandler @ 08357902 */
  CharacterCreateCreatureGiftScript::~CharacterCreateCreatureGiftScript
            ((CharacterCreateCreatureGiftScript *)(this + 0x4c04));
                    /* try { // try from 08357927 to 0835792b has its CatchHandler @ 0835792e */
  useCharacterJobFatigue::~useCharacterJobFatigue((useCharacterJobFatigue *)(this + 0x4bec));
                    /* try { // try from 08357953 to 08357957 has its CatchHandler @ 0835795a */
  createChracScript::~createChracScript((createChracScript *)(this + 0x4bd4));
                    /* try { // try from 0835797f to 08357983 has its CatchHandler @ 08357986 */
  growthEquipmentScript::~growthEquipmentScript((growthEquipmentScript *)(this + 0x4bac));
                    /* try { // try from 083579ab to 083579af has its CatchHandler @ 083579b2 */
  seriaRoomDecoEventScript::~seriaRoomDecoEventScript((seriaRoomDecoEventScript *)(this + 0x4b70));
                    /* try { // try from 083579d7 to 083579db has its CatchHandler @ 083579de */
  DimensionActivationData::~DimensionActivationData((DimensionActivationData *)(this + 0x4b18));
                    /* try { // try from 08357a03 to 08357a07 has its CatchHandler @ 08357a0a */
  PcBangItemRentarData::~PcBangItemRentarData((PcBangItemRentarData *)(this + 0x4af4));
                    /* try { // try from 08357a2b to 08357a2f has its CatchHandler @ 08357a32 */
  ServerParameterScript::~ServerParameterScript((ServerParameterScript *)(this + 0x68));
  reseal_table_t::~reseal_table_t((reseal_table_t *)(this + 0x2c));
  return;
}
```
