# operator=

`_ZN14STAIInfoScriptaSERKS_`

`STAIInfoScript::operator=(STAIInfoScript const&)`

| 类 | 地址 |
|---|---|
| `STAIInfoScript` | `0x08a38e34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a38e34  _ZN14STAIInfoScriptaSERKS_
#           STAIInfoScript::operator=(STAIInfoScript const&)
# range [0x08a38e34, 0x08a390da]
08a38e34 +0x000:  push   %ebp
08a38e35 +0x001:  mov    %esp,%ebp
08a38e37 +0x003:  push   %edi
08a38e38 +0x004:  push   %esi
08a38e39 +0x005:  push   %ebx
08a38e3a +0x006:  sub    $0x3c,%esp
08a38e3d +0x009:  mov    0x8(%ebp),%eax
08a38e40 +0x00c:  mov    %eax,(%esp)
08a38e43 +0x00f:  call   0836753a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0x1506>  ; global constructors keyed to CServerEvent::m_nExpRate+0x1506
08a38e48 +0x014:  mov    0xc(%ebp),%eax
08a38e4b +0x017:  mov    0x4(%eax),%edx
08a38e4e +0x01a:  mov    0x8(%ebp),%eax
08a38e51 +0x01d:  mov    %edx,0x4(%eax)
08a38e54 +0x020:  mov    0xc(%ebp),%eax
08a38e57 +0x023:  mov    0x8(%eax),%edx
08a38e5a +0x026:  mov    0x8(%ebp),%eax
08a38e5d +0x029:  mov    %edx,0x8(%eax)
08a38e60 +0x02c:  mov    0xc(%ebp),%eax
08a38e63 +0x02f:  lea    0xc(%eax),%edx
08a38e66 +0x032:  mov    0x8(%ebp),%eax
08a38e69 +0x035:  add    $0xc,%eax
08a38e6c +0x038:  mov    %edx,0x4(%esp)
08a38e70 +0x03c:  mov    %eax,(%esp)
08a38e73 +0x03f:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
08a38e78 +0x044:  movl   $0x0,-0x28(%ebp)
08a38e7f +0x04b:  jmp    08a38f45 <+0x111>
08a38e84 +0x050:  movl   $0x0,-0x24(%ebp)
08a38e8b +0x057:  jmp    08a38f19 <+0xe5>
08a38e90 +0x05c:  mov    -0x28(%ebp),%edx
08a38e93 +0x05f:  mov    %edx,%eax
08a38e95 +0x061:  add    %eax,%eax
08a38e97 +0x063:  add    %edx,%eax
08a38e99 +0x065:  shl    $0x2,%eax
08a38e9c +0x068:  add    $0x10,%eax
08a38e9f +0x06b:  add    0xc(%ebp),%eax
08a38ea2 +0x06e:  mov    -0x24(%ebp),%edx
08a38ea5 +0x071:  mov    %edx,0x4(%esp)
08a38ea9 +0x075:  mov    %eax,(%esp)
08a38eac +0x078:  call   08a40f96 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x4247>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x4247
08a38eb1 +0x07d:  mov    (%eax),%eax
08a38eb3 +0x07f:  mov    %eax,-0x20(%ebp)
08a38eb6 +0x082:  movl   $0x4,(%esp)
08a38ebd +0x089:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08a38ec2 +0x08e:  mov    %eax,%ebx
08a38ec4 +0x090:  mov    %ebx,%eax
08a38ec6 +0x092:  mov    -0x20(%ebp),%edx
08a38ec9 +0x095:  mov    %edx,0x4(%esp)
08a38ecd +0x099:  mov    %eax,(%esp)
08a38ed0 +0x09c:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08a38ed5 +0x0a1:  jmp    08a38eef <+0xbb>
08a38ed7 +0x0a3:  mov    %edx,%esi
08a38ed9 +0x0a5:  mov    %eax,%edi
08a38edb +0x0a7:  mov    %ebx,(%esp)
08a38ede +0x0aa:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a38ee3 +0x0af:  mov    %edi,%eax
08a38ee5 +0x0b1:  mov    %esi,%edx
08a38ee7 +0x0b3:  mov    %eax,(%esp)
08a38eea +0x0b6:  call   08ae3750 <_Unwind_Resume>
08a38eef +0x0bb:  mov    %ebx,%eax
08a38ef1 +0x0bd:  mov    %eax,-0x2c(%ebp)
08a38ef4 +0x0c0:  mov    -0x28(%ebp),%edx
08a38ef7 +0x0c3:  mov    %edx,%eax
08a38ef9 +0x0c5:  add    %eax,%eax
08a38efb +0x0c7:  add    %edx,%eax
08a38efd +0x0c9:  shl    $0x2,%eax
08a38f00 +0x0cc:  add    $0x10,%eax
08a38f03 +0x0cf:  add    0x8(%ebp),%eax
08a38f06 +0x0d2:  lea    -0x2c(%ebp),%edx
08a38f09 +0x0d5:  mov    %edx,0x4(%esp)
08a38f0d +0x0d9:  mov    %eax,(%esp)
08a38f10 +0x0dc:  call   08a40fa8 <_GLOBAL__I_g_weaponDurabilityDecreaseRate_+0x4259>  ; global constructors keyed to g_weaponDurabilityDecreaseRate_+0x4259
08a38f15 +0x0e1:  addl   $0x1,-0x24(%ebp)
08a38f19 +0x0e5:  mov    -0x28(%ebp),%edx
08a38f1c +0x0e8:  mov    %edx,%eax
08a38f1e +0x0ea:  add    %eax,%eax
08a38f20 +0x0ec:  add    %edx,%eax
08a38f22 +0x0ee:  shl    $0x2,%eax
08a38f25 +0x0f1:  add    $0x10,%eax
08a38f28 +0x0f4:  add    0xc(%ebp),%eax
08a38f2b +0x0f7:  mov    %eax,(%esp)
08a38f2e +0x0fa:  call   08380ff0 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x10a90>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x10a90
08a38f33 +0x0ff:  cmp    -0x24(%ebp),%eax
08a38f36 +0x102:  seta   %al
08a38f39 +0x105:  test   %al,%al
08a38f3b +0x107:  jne    08a38e90 <+0x5c>
08a38f41 +0x10d:  addl   $0x1,-0x28(%ebp)
08a38f45 +0x111:  cmpl   $0x4,-0x28(%ebp)
08a38f49 +0x115:  setle  %al
08a38f4c +0x118:  test   %al,%al
08a38f4e +0x11a:  jne    08a38e84 <+0x50>
08a38f54 +0x120:  movl   $0x0,-0x1c(%ebp)
08a38f5b +0x127:  jmp    08a38fb5 <+0x181>
08a38f5d +0x129:  mov    -0x1c(%ebp),%ecx
08a38f60 +0x12c:  mov    -0x1c(%ebp),%edx
08a38f63 +0x12f:  mov    0xc(%ebp),%eax
08a38f66 +0x132:  add    $0x10,%edx
08a38f69 +0x135:  mov    0xc(%eax,%edx,4),%edx
08a38f6d +0x139:  mov    0x8(%ebp),%eax
08a38f70 +0x13c:  add    $0x10,%ecx
08a38f73 +0x13f:  mov    %edx,0xc(%eax,%ecx,4)
08a38f77 +0x143:  mov    -0x1c(%ebp),%edx
08a38f7a +0x146:  mov    %edx,%eax
08a38f7c +0x148:  add    %eax,%eax
08a38f7e +0x14a:  add    %edx,%eax
08a38f80 +0x14c:  shl    $0x2,%eax
08a38f83 +0x14f:  add    $0xa0,%eax
08a38f88 +0x154:  add    0xc(%ebp),%eax
08a38f8b +0x157:  lea    0x4(%eax),%ecx
08a38f8e +0x15a:  mov    -0x1c(%ebp),%edx
08a38f91 +0x15d:  mov    %edx,%eax
08a38f93 +0x15f:  add    %eax,%eax
08a38f95 +0x161:  add    %edx,%eax
08a38f97 +0x163:  shl    $0x2,%eax
08a38f9a +0x166:  add    $0xa0,%eax
08a38f9f +0x16b:  add    0x8(%ebp),%eax
08a38fa2 +0x16e:  add    $0x4,%eax
08a38fa5 +0x171:  mov    %ecx,0x4(%esp)
08a38fa9 +0x175:  mov    %eax,(%esp)
08a38fac +0x178:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08a38fb1 +0x17d:  addl   $0x1,-0x1c(%ebp)
08a38fb5 +0x181:  cmpl   $0x15,-0x1c(%ebp)
08a38fb9 +0x185:  setle  %al
08a38fbc +0x188:  test   %al,%al
08a38fbe +0x18a:  jne    08a38f5d <+0x129>
08a38fc0 +0x18c:  mov    0xc(%ebp),%eax
08a38fc3 +0x18f:  mov    0x1ac(%eax),%edx
08a38fc9 +0x195:  mov    0x8(%ebp),%eax
08a38fcc +0x198:  mov    %edx,0x1ac(%eax)
08a38fd2 +0x19e:  mov    0xc(%ebp),%eax
08a38fd5 +0x1a1:  lea    0x1b0(%eax),%edx
08a38fdb +0x1a7:  mov    0x8(%ebp),%eax
08a38fde +0x1aa:  add    $0x1b0,%eax
08a38fe3 +0x1af:  mov    %edx,0x4(%esp)
08a38fe7 +0x1b3:  mov    %eax,(%esp)
08a38fea +0x1b6:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08a38fef +0x1bb:  mov    0xc(%ebp),%eax
08a38ff2 +0x1be:  lea    0x1bc(%eax),%edx
08a38ff8 +0x1c4:  mov    0x8(%ebp),%eax
08a38ffb +0x1c7:  add    $0x1bc,%eax
08a39000 +0x1cc:  mov    %edx,0x4(%esp)
08a39004 +0x1d0:  mov    %eax,(%esp)
08a39007 +0x1d3:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08a3900c +0x1d8:  mov    0xc(%ebp),%eax
08a3900f +0x1db:  lea    0x1c8(%eax),%edx
08a39015 +0x1e1:  mov    0x8(%ebp),%eax
08a39018 +0x1e4:  add    $0x1c8,%eax
08a3901d +0x1e9:  mov    %edx,0x4(%esp)
08a39021 +0x1ed:  mov    %eax,(%esp)
08a39024 +0x1f0:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08a39029 +0x1f5:  mov    0xc(%ebp),%eax
08a3902c +0x1f8:  lea    0x1d4(%eax),%edx
08a39032 +0x1fe:  mov    0x8(%ebp),%eax
08a39035 +0x201:  add    $0x1d4,%eax
08a3903a +0x206:  mov    %edx,0x4(%esp)
08a3903e +0x20a:  mov    %eax,(%esp)
08a39041 +0x20d:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08a39046 +0x212:  mov    0xc(%ebp),%eax
08a39049 +0x215:  lea    0x1e0(%eax),%edx
08a3904f +0x21b:  mov    0x8(%ebp),%eax
08a39052 +0x21e:  add    $0x1e0,%eax
08a39057 +0x223:  mov    %edx,0x4(%esp)
08a3905b +0x227:  mov    %eax,(%esp)
08a3905e +0x22a:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
08a39063 +0x22f:  mov    0xc(%ebp),%eax
08a39066 +0x232:  mov    0x1f8(%eax),%edx
08a3906c +0x238:  mov    0x8(%ebp),%eax
08a3906f +0x23b:  mov    %edx,0x1f8(%eax)
08a39075 +0x241:  mov    0xc(%ebp),%eax
08a39078 +0x244:  mov    0x1fc(%eax),%edx
08a3907e +0x24a:  mov    0x8(%ebp),%eax
08a39081 +0x24d:  mov    %edx,0x1fc(%eax)
08a39087 +0x253:  mov    0xc(%ebp),%eax
08a3908a +0x256:  mov    0x1ec(%eax),%edx
08a39090 +0x25c:  mov    0x8(%ebp),%eax
08a39093 +0x25f:  mov    %edx,0x1ec(%eax)
08a39099 +0x265:  mov    0xc(%ebp),%eax
08a3909c +0x268:  mov    0x1f0(%eax),%edx
08a390a2 +0x26e:  mov    0x8(%ebp),%eax
08a390a5 +0x271:  mov    %edx,0x1f0(%eax)
08a390ab +0x277:  mov    0xc(%ebp),%eax
08a390ae +0x27a:  mov    0x1f4(%eax),%edx
08a390b4 +0x280:  mov    0x8(%ebp),%eax
08a390b7 +0x283:  mov    %edx,0x1f4(%eax)
08a390bd +0x289:  mov    0xc(%ebp),%eax
08a390c0 +0x28c:  movzbl 0x200(%eax),%edx
08a390c7 +0x293:  mov    0x8(%ebp),%eax
08a390ca +0x296:  mov    %dl,0x200(%eax)
08a390d0 +0x29c:  mov    0x8(%ebp),%eax
08a390d3 +0x29f:  add    $0x3c,%esp
08a390d6 +0x2a2:  pop    %ebx
08a390d7 +0x2a3:  pop    %esi
08a390d8 +0x2a4:  pop    %edi
08a390d9 +0x2a5:  pop    %ebp
08a390da +0x2a6:  ret
```

## 反编译 C

```c
// STAIInfoScript::operator= @ 0x8a38e34

/* STAIInfoScript::TEMPNAMEPLACEHOLDERVALUE(STAIInfoScript const&) */

STAIInfoScript * __thiscall STAIInfoScript::operator=(STAIInfoScript *this,STAIInfoScript *param_1)

{
  undefined4 *puVar1;
  string *this_00;
  uint uVar2;
  string *local_30;
  int local_2c;
  uint local_28;
  string *local_24;
  int local_20;
  
  destroy(this);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::string::operator=((string *)(this + 0xc),(string *)(param_1 + 0xc));
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    local_28 = 0;
    while( true ) {
      uVar2 = std::vector<std::string*,std::allocator<std::string*>>::size
                        ((vector<std::string*,std::allocator<std::string*>> *)
                         (param_1 + local_2c * 0xc + 0x10));
      if (uVar2 <= local_28) break;
      puVar1 = (undefined4 *)
               std::vector<std::string*,std::allocator<std::string*>>::operator[]
                         ((vector<std::string*,std::allocator<std::string*>> *)
                          (param_1 + local_2c * 0xc + 0x10),local_28);
      local_24 = (string *)*puVar1;
      this_00 = operator_new(4);
                    /* try { // try from 08a38ed0 to 08a38ed4 has its CatchHandler @ 08a38ed7 */
      std::string::string(this_00,local_24);
      local_30 = this_00;
      std::vector<std::string*,std::allocator<std::string*>>::push_back
                ((vector<std::string*,std::allocator<std::string*>> *)(this + local_2c * 0xc + 0x10)
                 ,&local_30);
      local_28 = local_28 + 1;
    }
  }
  for (local_20 = 0; local_20 < 0x16; local_20 = local_20 + 1) {
    *(undefined4 *)(this + (local_20 + 0x10) * 4 + 0xc) =
         *(undefined4 *)(param_1 + (local_20 + 0x10) * 4 + 0xc);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + local_20 * 0xc + 0xa4),
               (vector *)(param_1 + local_20 * 0xc + 0xa4));
  }
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1b0),(vector *)(param_1 + 0x1b0));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1bc),(vector *)(param_1 + 0x1bc));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1c8),(vector *)(param_1 + 0x1c8));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1d4),(vector *)(param_1 + 0x1d4));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1e0),(vector *)(param_1 + 0x1e0));
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(this + 500) = *(undefined4 *)(param_1 + 500);
  this[0x200] = param_1[0x200];
  return this;
}
```
