# _subPunctuationMark

`_ZN12CDataManager19_subPunctuationMarkEPKcPc`

`CDataManager::_subPunctuationMark(char const*, char*)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08362c22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08362c22  _ZN12CDataManager19_subPunctuationMarkEPKcPc
#           CDataManager::_subPunctuationMark(char const*, char*)
# range [0x08362c22, 0x08362e0d]
08362c22 +0x000:  push   %ebp
08362c23 +0x001:  mov    %esp,%ebp
08362c25 +0x003:  sub    $0x48,%esp
08362c28 +0x006:  movl   $0x0,-0x14(%ebp)
08362c2f +0x00d:  movl   $0x0,-0x10(%ebp)
08362c36 +0x014:  jmp    08362de7 <+0x1c5>
08362c3b +0x019:  mov    0xc(%ebp),%eax
08362c3e +0x01c:  add    -0x10(%ebp),%eax
08362c41 +0x01f:  mov    %eax,-0xc(%ebp)
08362c44 +0x022:  mov    -0xc(%ebp),%eax
08362c47 +0x025:  movzbl (%eax),%eax
08362c4a +0x028:  movzbl %al,%eax
08362c4d +0x02b:  mov    %eax,0x4(%esp)
08362c51 +0x02f:  mov    0x8(%ebp),%eax
08362c54 +0x032:  mov    %eax,(%esp)
08362c57 +0x035:  call   08362c0e <_ZN12CDataManager19_isOneByteCharacterEh>  ; CDataManager::_isOneByteCharacter(unsigned char)
08362c5c +0x03a:  test   %al,%al
08362c5e +0x03c:  je     08362d09 <+0xe7>
08362c64 +0x042:  mov    0x8(%ebp),%eax
08362c67 +0x045:  lea    0x86ac(%eax),%edx
08362c6d +0x04b:  lea    -0x34(%ebp),%eax
08362c70 +0x04e:  mov    %edx,0x4(%esp)
08362c74 +0x052:  mov    %eax,(%esp)
08362c77 +0x055:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
08362c7c +0x05a:  sub    $0x4,%esp
08362c7f +0x05d:  mov    0x8(%ebp),%eax
08362c82 +0x060:  lea    0x86ac(%eax),%edx
08362c88 +0x066:  lea    -0x2c(%ebp),%eax
08362c8b +0x069:  mov    %edx,0x4(%esp)
08362c8f +0x06d:  mov    %eax,(%esp)
08362c92 +0x070:  call   0807eff2 <_GLOBAL__I__Z13base64_encodePKhjRSs+0xc2>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0xc2
08362c97 +0x075:  sub    $0x4,%esp
08362c9a +0x078:  mov    0x8(%ebp),%eax
08362c9d +0x07b:  lea    0x86ac(%eax),%edx
08362ca3 +0x081:  lea    -0x28(%ebp),%eax
08362ca6 +0x084:  mov    %edx,0x4(%esp)
08362caa +0x088:  mov    %eax,(%esp)
08362cad +0x08b:  call   0807f40e <_GLOBAL__I__Z13base64_encodePKhjRSs+0x4de>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x4de
08362cb2 +0x090:  sub    $0x4,%esp
08362cb5 +0x093:  lea    -0x30(%ebp),%eax
08362cb8 +0x096:  mov    -0xc(%ebp),%edx
08362cbb +0x099:  mov    %edx,0xc(%esp)
08362cbf +0x09d:  mov    -0x2c(%ebp),%edx
08362cc2 +0x0a0:  mov    %edx,0x8(%esp)
08362cc6 +0x0a4:  mov    -0x28(%ebp),%edx
08362cc9 +0x0a7:  mov    %edx,0x4(%esp)
08362ccd +0x0ab:  mov    %eax,(%esp)
08362cd0 +0x0ae:  call   08394bcc <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2466c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2466c
08362cd5 +0x0b3:  sub    $0x4,%esp
08362cd8 +0x0b6:  lea    -0x34(%ebp),%eax
08362cdb +0x0b9:  mov    %eax,0x4(%esp)
08362cdf +0x0bd:  lea    -0x30(%ebp),%eax
08362ce2 +0x0c0:  mov    %eax,(%esp)
08362ce5 +0x0c3:  call   08394c20 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x246c0>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x246c0
08362cea +0x0c8:  test   %al,%al
08362cec +0x0ca:  je     08362de3 <+0x1c1>
08362cf2 +0x0d0:  mov    -0x14(%ebp),%eax
08362cf5 +0x0d3:  add    0x10(%ebp),%eax
08362cf8 +0x0d6:  mov    -0xc(%ebp),%edx
08362cfb +0x0d9:  movzbl (%edx),%edx
08362cfe +0x0dc:  mov    %dl,(%eax)
08362d00 +0x0de:  addl   $0x1,-0x14(%ebp)
08362d04 +0x0e2:  jmp    08362de3 <+0x1c1>
08362d09 +0x0e7:  movw   $0x0,-0x36(%ebp)
08362d0f +0x0ed:  mov    -0xc(%ebp),%eax
08362d12 +0x0f0:  add    $0x1,%eax
08362d15 +0x0f3:  movzbl (%eax),%eax
08362d18 +0x0f6:  mov    %al,-0x36(%ebp)
08362d1b +0x0f9:  mov    -0xc(%ebp),%eax
08362d1e +0x0fc:  movzbl (%eax),%eax
08362d21 +0x0ff:  mov    %al,-0x35(%ebp)
08362d24 +0x102:  lea    -0x36(%ebp),%eax
08362d27 +0x105:  movzwl (%eax),%eax
08362d2a +0x108:  mov    %ax,-0x38(%ebp)
08362d2e +0x10c:  mov    0x8(%ebp),%eax
08362d31 +0x10f:  lea    0x86b8(%eax),%edx
08362d37 +0x115:  lea    -0x24(%ebp),%eax
08362d3a +0x118:  mov    %edx,0x4(%esp)
08362d3e +0x11c:  mov    %eax,(%esp)
08362d41 +0x11f:  call   08394c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24710
08362d46 +0x124:  sub    $0x4,%esp
08362d49 +0x127:  mov    0x8(%ebp),%eax
08362d4c +0x12a:  lea    0x86b8(%eax),%edx
08362d52 +0x130:  lea    -0x1c(%ebp),%eax
08362d55 +0x133:  mov    %edx,0x4(%esp)
08362d59 +0x137:  mov    %eax,(%esp)
08362d5c +0x13a:  call   08394c70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24710>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24710
08362d61 +0x13f:  sub    $0x4,%esp
08362d64 +0x142:  mov    0x8(%ebp),%eax
08362d67 +0x145:  lea    0x86b8(%eax),%edx
08362d6d +0x14b:  lea    -0x18(%ebp),%eax
08362d70 +0x14e:  mov    %edx,0x4(%esp)
08362d74 +0x152:  mov    %eax,(%esp)
08362d77 +0x155:  call   08394c4c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x246ec>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x246ec
08362d7c +0x15a:  sub    $0x4,%esp
08362d7f +0x15d:  lea    -0x20(%ebp),%eax
08362d82 +0x160:  lea    -0x38(%ebp),%edx
08362d85 +0x163:  mov    %edx,0xc(%esp)
08362d89 +0x167:  mov    -0x1c(%ebp),%edx
08362d8c +0x16a:  mov    %edx,0x8(%esp)
08362d90 +0x16e:  mov    -0x18(%ebp),%edx
08362d93 +0x171:  mov    %edx,0x4(%esp)
08362d97 +0x175:  mov    %eax,(%esp)
08362d9a +0x178:  call   08394c96 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x24736>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x24736
08362d9f +0x17d:  sub    $0x4,%esp
08362da2 +0x180:  lea    -0x24(%ebp),%eax
08362da5 +0x183:  mov    %eax,0x4(%esp)
08362da9 +0x187:  lea    -0x20(%ebp),%eax
08362dac +0x18a:  mov    %eax,(%esp)
08362daf +0x18d:  call   08394cea <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2478a>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2478a
08362db4 +0x192:  test   %al,%al
08362db6 +0x194:  je     08362ddf <+0x1bd>
08362db8 +0x196:  mov    -0x14(%ebp),%eax
08362dbb +0x199:  add    0x10(%ebp),%eax
08362dbe +0x19c:  mov    -0xc(%ebp),%edx
08362dc1 +0x19f:  movzbl (%edx),%edx
08362dc4 +0x1a2:  mov    %dl,(%eax)
08362dc6 +0x1a4:  addl   $0x1,-0x14(%ebp)
08362dca +0x1a8:  mov    -0x14(%ebp),%eax
08362dcd +0x1ab:  add    0x10(%ebp),%eax
08362dd0 +0x1ae:  mov    -0xc(%ebp),%edx
08362dd3 +0x1b1:  add    $0x1,%edx
08362dd6 +0x1b4:  movzbl (%edx),%edx
08362dd9 +0x1b7:  mov    %dl,(%eax)
08362ddb +0x1b9:  addl   $0x1,-0x14(%ebp)
08362ddf +0x1bd:  addl   $0x1,-0x10(%ebp)
08362de3 +0x1c1:  addl   $0x1,-0x10(%ebp)
08362de7 +0x1c5:  mov    0xc(%ebp),%eax
08362dea +0x1c8:  mov    %eax,(%esp)
08362ded +0x1cb:  call   0807e3b0 <_init+0xca8>
08362df2 +0x1d0:  cmp    -0x10(%ebp),%eax
08362df5 +0x1d3:  seta   %al
08362df8 +0x1d6:  test   %al,%al
08362dfa +0x1d8:  jne    08362c3b <+0x19>
08362e00 +0x1de:  mov    -0x14(%ebp),%eax
08362e03 +0x1e1:  add    0x10(%ebp),%eax
08362e06 +0x1e4:  movb   $0x0,(%eax)
08362e09 +0x1e7:  mov    0x10(%ebp),%eax
08362e0c +0x1ea:  leave
08362e0d +0x1eb:  ret
```

## 反编译 C

```c
// CDataManager::_subPunctuationMark @ 0x8362c22

/* CDataManager::_subPunctuationMark(char const*, char*) */

char * __thiscall CDataManager::_subPunctuationMark(CDataManager *this,char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  int *piVar4;
  int local_54 [2];
  int local_4c [4];
  undefined2 local_3c;
  undefined2 local_3a;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  byte *local_10;
  
  piVar4 = local_4c;
  local_18 = 0;
  local_14 = 0;
  while( true ) {
    *piVar4 = (int)param_1;
    piVar4[-1] = 0x8362df2;
    sVar3 = strlen((char *)*piVar4);
    if (sVar3 <= local_14) break;
    local_10 = (byte *)(param_1 + local_14);
    piVar4[1] = (uint)*local_10;
    *piVar4 = (int)this;
    piVar4[-1] = 0x8362c5c;
    cVar1 = _isOneByteCharacter((uchar)*piVar4);
    if (cVar1 == '\0') {
      local_3a = CONCAT11(*local_10,local_10[1]);
      local_3c = local_3a;
      piVar4[1] = (int)(this + 0x86b8);
      *piVar4 = (int)local_28;
      piVar4[-1] = 0x8362d46;
      std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
      piVar4[1] = (int)(this + 0x86b8);
      *piVar4 = (int)&local_20;
      piVar4[-1] = 0x8362d61;
      std::vector<unsigned_short,std::allocator<unsigned_short>>::end();
      piVar4[1] = (int)(this + 0x86b8);
      *piVar4 = (int)&local_1c;
      piVar4[-1] = 0x8362d7c;
      std::vector<unsigned_short,std::allocator<unsigned_short>>::begin();
      piVar4[3] = (int)&local_3c;
      piVar4[2] = local_20;
      piVar4[1] = local_1c;
      *piVar4 = (int)local_24;
      piVar4[-1] = 0x8362d9f;
      std::
      find<__gnu_cxx::__normal_iterator<unsigned_short*,std::vector<unsigned_short,std::allocator<unsigned_short>>>,unsigned_short>
                ();
      *piVar4 = (int)local_28;
      piVar4[-1] = (int)local_24;
      piVar4[-2] = 0x8362db4;
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)piVar4[-1],(__normal_iterator *)*piVar4);
      if (bVar2) {
        param_2[local_18] = *local_10;
        param_2[local_18 + 1] = local_10[1];
        local_18 = local_18 + 2;
      }
      local_14 = local_14 + 1;
    }
    else {
      piVar4[1] = (int)(this + 0x86ac);
      *piVar4 = (int)local_38;
      piVar4[-1] = 0x8362c7c;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      piVar4[1] = (int)(this + 0x86ac);
      *piVar4 = (int)&local_30;
      piVar4[-1] = 0x8362c97;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::end();
      piVar4[1] = (int)(this + 0x86ac);
      *piVar4 = (int)&local_2c;
      piVar4[-1] = 0x8362cb2;
      std::vector<unsigned_char,std::allocator<unsigned_char>>::begin();
      piVar4[3] = (int)local_10;
      piVar4[2] = local_30;
      piVar4[1] = local_2c;
      *piVar4 = (int)local_34;
      piVar4[-1] = 0x8362cd5;
      std::
      find<__gnu_cxx::__normal_iterator<unsigned_char*,std::vector<unsigned_char,std::allocator<unsigned_char>>>,unsigned_char>
                ();
      *piVar4 = (int)local_38;
      piVar4[-1] = (int)local_34;
      piVar4[-2] = 0x8362cea;
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)piVar4[-1],(__normal_iterator *)*piVar4);
      if (bVar2) {
        param_2[local_18] = *local_10;
        local_18 = local_18 + 1;
      }
    }
    piVar4 = piVar4 + -1;
    local_14 = local_14 + 1;
  }
  param_2[local_18] = '\0';
  return param_2;
}
```
