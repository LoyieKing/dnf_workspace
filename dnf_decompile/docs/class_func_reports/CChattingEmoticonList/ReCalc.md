# ReCalc

`_ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser`

`CChattingEmoticonList::ReCalc(CChattingEmoticonConfig&, CUser const&)`

| 类 | 地址 |
|---|---|
| `CChattingEmoticonList` | `0x080e5880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e5880  _ZN21CChattingEmoticonList6ReCalcER23CChattingEmoticonConfigRK5CUser
#           CChattingEmoticonList::ReCalc(CChattingEmoticonConfig&, CUser const&)
# range [0x080e5880, 0x080e5c29]
080e5880 +0x000:  push   %ebp
080e5881 +0x001:  mov    %esp,%ebp
080e5883 +0x003:  push   %esi
080e5884 +0x004:  push   %ebx
080e5885 +0x005:  sub    $0x70,%esp
080e5888 +0x008:  lea    -0x48(%ebp),%eax
080e588b +0x00b:  mov    %eax,(%esp)
080e588e +0x00e:  call   080e6650 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x786>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x786
080e5893 +0x013:  lea    -0x60(%ebp),%eax
080e5896 +0x016:  mov    %eax,(%esp)
080e5899 +0x019:  call   080da3dc <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x579>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x579
080e589e +0x01e:  movl   $0x0,-0x20(%ebp)
080e58a5 +0x025:  jmp    080e594b <+0xcb>
080e58aa +0x02a:  mov    -0x20(%ebp),%eax
080e58ad +0x02d:  mov    0xc(%ebp),%edx
080e58b0 +0x030:  imul   $0x16,%eax,%eax
080e58b3 +0x033:  lea    (%edx,%eax,1),%eax
080e58b6 +0x036:  add    $0x10,%eax
080e58b9 +0x039:  movzwl 0x4(%eax),%eax
080e58bd +0x03d:  cwtl
080e58be +0x03e:  mov    %eax,0x4(%esp)
080e58c2 +0x042:  mov    0x8(%ebp),%eax
080e58c5 +0x045:  mov    %eax,(%esp)
080e58c8 +0x048:  call   080e581c <_ZN21CChattingEmoticonList13find_emoticonEi>  ; CChattingEmoticonList::find_emoticon(int)
080e58cd +0x04d:  mov    %eax,-0x1c(%ebp)
080e58d0 +0x050:  cmpl   $0x0,-0x1c(%ebp)
080e58d4 +0x054:  je     080e5943 <+0xc3>
080e58d6 +0x056:  mov    -0x1c(%ebp),%eax
080e58d9 +0x059:  mov    (%eax),%eax
080e58db +0x05b:  add    $0x14,%eax
080e58de +0x05e:  mov    (%eax),%edx
080e58e0 +0x060:  mov    0x10(%ebp),%eax
080e58e3 +0x063:  mov    %eax,0x4(%esp)
080e58e7 +0x067:  mov    -0x1c(%ebp),%eax
080e58ea +0x06a:  mov    %eax,(%esp)
080e58ed +0x06d:  call   *%edx
080e58ef +0x06f:  xor    $0x1,%eax
080e58f2 +0x072:  test   %al,%al
080e58f4 +0x074:  jne    080e5946 <+0xc6>
080e58f6 +0x076:  mov    -0x20(%ebp),%eax
080e58f9 +0x079:  imul   $0x16,%eax,%eax
080e58fc +0x07c:  add    0xc(%ebp),%eax
080e58ff +0x07f:  mov    %eax,0x4(%esp)
080e5903 +0x083:  lea    -0x48(%ebp),%eax
080e5906 +0x086:  mov    %eax,(%esp)
080e5909 +0x089:  call   080e66c2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x7f8>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x7f8
080e590e +0x08e:  mov    -0x20(%ebp),%eax
080e5911 +0x091:  mov    0xc(%ebp),%edx
080e5914 +0x094:  imul   $0x16,%eax,%eax
080e5917 +0x097:  lea    (%edx,%eax,1),%eax
080e591a +0x09a:  add    $0x10,%eax
080e591d +0x09d:  movzwl 0x4(%eax),%eax
080e5921 +0x0a1:  cwtl
080e5922 +0x0a2:  mov    %eax,-0x34(%ebp)
080e5925 +0x0a5:  lea    -0x3c(%ebp),%eax
080e5928 +0x0a8:  lea    -0x34(%ebp),%edx
080e592b +0x0ab:  mov    %edx,0x8(%esp)
080e592f +0x0af:  lea    -0x60(%ebp),%edx
080e5932 +0x0b2:  mov    %edx,0x4(%esp)
080e5936 +0x0b6:  mov    %eax,(%esp)
080e5939 +0x0b9:  call   080da5c6 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x763>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x763
080e593e +0x0be:  sub    $0x4,%esp
080e5941 +0x0c1:  jmp    080e5947 <+0xc7>
080e5943 +0x0c3:  nop
080e5944 +0x0c4:  jmp    080e5947 <+0xc7>
080e5946 +0x0c6:  nop
080e5947 +0x0c7:  addl   $0x1,-0x20(%ebp)
080e594b +0x0cb:  mov    -0x20(%ebp),%eax
080e594e +0x0ce:  cmp    $0x17,%eax
080e5951 +0x0d1:  setbe  %al
080e5954 +0x0d4:  test   %al,%al
080e5956 +0x0d6:  jne    080e58aa <+0x2a>
080e595c +0x0dc:  mov    0xc(%ebp),%eax
080e595f +0x0df:  mov    %eax,(%esp)
080e5962 +0x0e2:  call   080e5f12 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x48>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x48
080e5967 +0x0e7:  movl   $0x0,-0x18(%ebp)
080e596e +0x0ee:  jmp    080e5a43 <+0x1c3>
080e5973 +0x0f3:  mov    -0x18(%ebp),%eax
080e5976 +0x0f6:  mov    %eax,0x4(%esp)
080e597a +0x0fa:  lea    -0x48(%ebp),%eax
080e597d +0x0fd:  mov    %eax,(%esp)
080e5980 +0x100:  call   080e6756 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x88c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x88c
080e5985 +0x105:  movzwl 0x14(%eax),%eax
080e5989 +0x109:  cwtl
080e598a +0x10a:  mov    %eax,0x4(%esp)
080e598e +0x10e:  mov    0x8(%ebp),%eax
080e5991 +0x111:  mov    %eax,(%esp)
080e5994 +0x114:  call   080e581c <_ZN21CChattingEmoticonList13find_emoticonEi>  ; CChattingEmoticonList::find_emoticon(int)
080e5999 +0x119:  mov    %eax,-0x14(%ebp)
080e599c +0x11c:  cmpl   $0x0,-0x14(%ebp)
080e59a0 +0x120:  je     080e5a3e <+0x1be>
080e59a6 +0x126:  mov    -0x14(%ebp),%eax
080e59a9 +0x129:  mov    (%eax),%eax
080e59ab +0x12b:  add    $0xc,%eax
080e59ae +0x12e:  mov    (%eax),%edx
080e59b0 +0x130:  mov    -0x14(%ebp),%eax
080e59b3 +0x133:  mov    %eax,(%esp)
080e59b6 +0x136:  call   *%edx
080e59b8 +0x138:  mov    %eax,-0x10(%ebp)
080e59bb +0x13b:  jmp    080e5a20 <+0x1a0>
080e59bd +0x13d:  mov    -0x10(%ebp),%eax
080e59c0 +0x140:  mov    0xc(%ebp),%edx
080e59c3 +0x143:  imul   $0x16,%eax,%eax
080e59c6 +0x146:  lea    (%edx,%eax,1),%eax
080e59c9 +0x149:  add    $0x10,%eax
080e59cc +0x14c:  movzwl 0x4(%eax),%eax
080e59d0 +0x150:  test   %ax,%ax
080e59d3 +0x153:  jne    080e5a1c <+0x19c>
080e59d5 +0x155:  mov    -0x10(%ebp),%ebx
080e59d8 +0x158:  mov    -0x18(%ebp),%eax
080e59db +0x15b:  mov    %eax,0x4(%esp)
080e59df +0x15f:  lea    -0x48(%ebp),%eax
080e59e2 +0x162:  mov    %eax,(%esp)
080e59e5 +0x165:  call   080e6756 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x88c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x88c
080e59ea +0x16a:  mov    0xc(%ebp),%edx
080e59ed +0x16d:  imul   $0x16,%ebx,%ecx
080e59f0 +0x170:  mov    (%eax),%ebx
080e59f2 +0x172:  mov    %ebx,(%ecx,%edx,1)
080e59f5 +0x175:  mov    0x4(%eax),%ebx
080e59f8 +0x178:  mov    %ebx,0x4(%ecx,%edx,1)
080e59fc +0x17c:  mov    0x8(%eax),%ebx
080e59ff +0x17f:  mov    %ebx,0x8(%ecx,%edx,1)
080e5a03 +0x183:  mov    0xc(%eax),%ebx
080e5a06 +0x186:  mov    %ebx,0xc(%ecx,%edx,1)
080e5a0a +0x18a:  mov    0x10(%eax),%ebx
080e5a0d +0x18d:  mov    %ebx,0x10(%ecx,%edx,1)
080e5a11 +0x191:  movzwl 0x14(%eax),%eax
080e5a15 +0x195:  mov    %ax,0x14(%ecx,%edx,1)
080e5a1a +0x19a:  jmp    080e5a3f <+0x1bf>
080e5a1c +0x19c:  addl   $0x1,-0x10(%ebp)
080e5a20 +0x1a0:  mov    -0x14(%ebp),%eax
080e5a23 +0x1a3:  mov    (%eax),%eax
080e5a25 +0x1a5:  add    $0x10,%eax
080e5a28 +0x1a8:  mov    (%eax),%edx
080e5a2a +0x1aa:  mov    -0x14(%ebp),%eax
080e5a2d +0x1ad:  mov    %eax,(%esp)
080e5a30 +0x1b0:  call   *%edx
080e5a32 +0x1b2:  cmp    -0x10(%ebp),%eax
080e5a35 +0x1b5:  setge  %al
080e5a38 +0x1b8:  test   %al,%al
080e5a3a +0x1ba:  jne    080e59bd <+0x13d>
080e5a3c +0x1bc:  jmp    080e5a3f <+0x1bf>
080e5a3e +0x1be:  nop
080e5a3f +0x1bf:  addl   $0x1,-0x18(%ebp)
080e5a43 +0x1c3:  lea    -0x48(%ebp),%eax
080e5a46 +0x1c6:  mov    %eax,(%esp)
080e5a49 +0x1c9:  call   080e6736 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x86c>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x86c
080e5a4e +0x1ce:  cmp    -0x18(%ebp),%eax
080e5a51 +0x1d1:  seta   %al
080e5a54 +0x1d4:  test   %al,%al
080e5a56 +0x1d6:  jne    080e5973 <+0xf3>
080e5a5c +0x1dc:  mov    0x8(%ebp),%edx
080e5a5f +0x1df:  lea    -0x64(%ebp),%eax
080e5a62 +0x1e2:  mov    %edx,0x4(%esp)
080e5a66 +0x1e6:  mov    %eax,(%esp)
080e5a69 +0x1e9:  call   080e676a <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x8a0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x8a0
080e5a6e +0x1ee:  sub    $0x4,%esp
080e5a71 +0x1f1:  jmp    080e5ba1 <+0x321>
080e5a76 +0x1f6:  lea    -0x2c(%ebp),%eax
080e5a79 +0x1f9:  lea    -0x60(%ebp),%edx
080e5a7c +0x1fc:  mov    %edx,0x4(%esp)
080e5a80 +0x200:  mov    %eax,(%esp)
080e5a83 +0x203:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
080e5a88 +0x208:  sub    $0x4,%esp
080e5a8b +0x20b:  lea    -0x64(%ebp),%eax
080e5a8e +0x20e:  mov    %eax,(%esp)
080e5a91 +0x211:  call   080e6642 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x778>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x778
080e5a96 +0x216:  mov    0x4(%eax),%eax
080e5a99 +0x219:  mov    %eax,(%esp)
080e5a9c +0x21c:  call   080e5f68 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x9e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x9e
080e5aa1 +0x221:  mov    %eax,-0x24(%ebp)
080e5aa4 +0x224:  lea    -0x28(%ebp),%eax
080e5aa7 +0x227:  lea    -0x24(%ebp),%edx
080e5aaa +0x22a:  mov    %edx,0x8(%esp)
080e5aae +0x22e:  lea    -0x60(%ebp),%edx
080e5ab1 +0x231:  mov    %edx,0x4(%esp)
080e5ab5 +0x235:  mov    %eax,(%esp)
080e5ab8 +0x238:  call   080da574 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x711>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x711
080e5abd +0x23d:  sub    $0x4,%esp
080e5ac0 +0x240:  lea    -0x2c(%ebp),%eax
080e5ac3 +0x243:  mov    %eax,0x4(%esp)
080e5ac7 +0x247:  lea    -0x28(%ebp),%eax
080e5aca +0x24a:  mov    %eax,(%esp)
080e5acd +0x24d:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
080e5ad2 +0x252:  test   %al,%al
080e5ad4 +0x254:  jne    080e5b92 <+0x312>
080e5ada +0x25a:  lea    -0x64(%ebp),%eax
080e5add +0x25d:  mov    %eax,(%esp)
080e5ae0 +0x260:  call   080e6642 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x778>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x778
080e5ae5 +0x265:  mov    0x4(%eax),%eax
080e5ae8 +0x268:  mov    (%eax),%edx
080e5aea +0x26a:  add    $0x14,%edx
080e5aed +0x26d:  mov    (%edx),%ecx
080e5aef +0x26f:  mov    0x10(%ebp),%edx
080e5af2 +0x272:  mov    %edx,0x4(%esp)
080e5af6 +0x276:  mov    %eax,(%esp)
080e5af9 +0x279:  call   *%ecx
080e5afb +0x27b:  xor    $0x1,%eax
080e5afe +0x27e:  test   %al,%al
080e5b00 +0x280:  jne    080e5b95 <+0x315>
080e5b06 +0x286:  lea    -0x64(%ebp),%eax
080e5b09 +0x289:  mov    %eax,(%esp)
080e5b0c +0x28c:  call   080e6642 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x778>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x778
080e5b11 +0x291:  mov    0x4(%eax),%eax
080e5b14 +0x294:  mov    (%eax),%edx
080e5b16 +0x296:  add    $0xc,%edx
080e5b19 +0x299:  mov    (%edx),%edx
080e5b1b +0x29b:  mov    %eax,(%esp)
080e5b1e +0x29e:  call   *%edx
080e5b20 +0x2a0:  mov    %eax,-0xc(%ebp)
080e5b23 +0x2a3:  jmp    080e5b6c <+0x2ec>
080e5b25 +0x2a5:  mov    -0xc(%ebp),%eax
080e5b28 +0x2a8:  mov    0xc(%ebp),%edx
080e5b2b +0x2ab:  imul   $0x16,%eax,%eax
080e5b2e +0x2ae:  lea    (%edx,%eax,1),%eax
080e5b31 +0x2b1:  add    $0x10,%eax
080e5b34 +0x2b4:  movzwl 0x4(%eax),%eax
080e5b38 +0x2b8:  test   %ax,%ax
080e5b3b +0x2bb:  jne    080e5b68 <+0x2e8>
080e5b3d +0x2bd:  mov    -0xc(%ebp),%ebx
080e5b40 +0x2c0:  lea    -0x64(%ebp),%eax
080e5b43 +0x2c3:  mov    %eax,(%esp)
080e5b46 +0x2c6:  call   080e6642 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x778>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x778
080e5b4b +0x2cb:  mov    0x4(%eax),%eax
080e5b4e +0x2ce:  mov    %eax,(%esp)
080e5b51 +0x2d1:  call   080e5f68 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x9e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x9e
080e5b56 +0x2d6:  mov    0xc(%ebp),%ecx
080e5b59 +0x2d9:  imul   $0x16,%ebx,%edx
080e5b5c +0x2dc:  lea    (%ecx,%edx,1),%edx
080e5b5f +0x2df:  add    $0x10,%edx
080e5b62 +0x2e2:  mov    %ax,0x4(%edx)
080e5b66 +0x2e6:  jmp    080e5b96 <+0x316>
080e5b68 +0x2e8:  addl   $0x1,-0xc(%ebp)
080e5b6c +0x2ec:  lea    -0x64(%ebp),%eax
080e5b6f +0x2ef:  mov    %eax,(%esp)
080e5b72 +0x2f2:  call   080e6642 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x778>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x778
080e5b77 +0x2f7:  mov    0x4(%eax),%eax
080e5b7a +0x2fa:  mov    (%eax),%edx
080e5b7c +0x2fc:  add    $0x10,%edx
080e5b7f +0x2ff:  mov    (%edx),%edx
080e5b81 +0x301:  mov    %eax,(%esp)
080e5b84 +0x304:  call   *%edx
080e5b86 +0x306:  cmp    -0xc(%ebp),%eax
080e5b89 +0x309:  setge  %al
080e5b8c +0x30c:  test   %al,%al
080e5b8e +0x30e:  jne    080e5b25 <+0x2a5>
080e5b90 +0x310:  jmp    080e5b96 <+0x316>
080e5b92 +0x312:  nop
080e5b93 +0x313:  jmp    080e5b96 <+0x316>
080e5b95 +0x315:  nop
080e5b96 +0x316:  lea    -0x64(%ebp),%eax
080e5b99 +0x319:  mov    %eax,(%esp)
080e5b9c +0x31c:  call   080e6790 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x8c6>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x8c6
080e5ba1 +0x321:  mov    0x8(%ebp),%edx
080e5ba4 +0x324:  lea    -0x30(%ebp),%eax
080e5ba7 +0x327:  mov    %edx,0x4(%esp)
080e5bab +0x32b:  mov    %eax,(%esp)
080e5bae +0x32e:  call   080e61f2 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x328>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x328
080e5bb3 +0x333:  sub    $0x4,%esp
080e5bb6 +0x336:  lea    -0x30(%ebp),%eax
080e5bb9 +0x339:  mov    %eax,0x4(%esp)
080e5bbd +0x33d:  lea    -0x64(%ebp),%eax
080e5bc0 +0x340:  mov    %eax,(%esp)
080e5bc3 +0x343:  call   080e6218 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x34e>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x34e
080e5bc8 +0x348:  test   %al,%al
080e5bca +0x34a:  jne    080e5a76 <+0x1f6>
080e5bd0 +0x350:  mov    $0x1,%ebx
080e5bd5 +0x355:  lea    -0x60(%ebp),%eax
080e5bd8 +0x358:  mov    %eax,(%esp)
080e5bdb +0x35b:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
080e5be0 +0x360:  jmp    080e5c12 <+0x392>
080e5be2 +0x362:  mov    %edx,%ebx
080e5be4 +0x364:  mov    %eax,%esi
080e5be6 +0x366:  lea    -0x60(%ebp),%eax
080e5be9 +0x369:  mov    %eax,(%esp)
080e5bec +0x36c:  call   080d9f34 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0xd1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0xd1
080e5bf1 +0x371:  mov    %esi,%eax
080e5bf3 +0x373:  mov    %ebx,%edx
080e5bf5 +0x375:  jmp    080e5bf7 <+0x377>
080e5bf7 +0x377:  mov    %edx,%ebx
080e5bf9 +0x379:  mov    %eax,%esi
080e5bfb +0x37b:  lea    -0x48(%ebp),%eax
080e5bfe +0x37e:  mov    %eax,(%esp)
080e5c01 +0x381:  call   080e6664 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x79a>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x79a
080e5c06 +0x386:  mov    %esi,%eax
080e5c08 +0x388:  mov    %ebx,%edx
080e5c0a +0x38a:  mov    %eax,(%esp)
080e5c0d +0x38d:  call   08ae3750 <_Unwind_Resume>
080e5c12 +0x392:  lea    -0x48(%ebp),%eax
080e5c15 +0x395:  mov    %eax,(%esp)
080e5c18 +0x398:  call   080e6664 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x79a>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x79a
080e5c1d +0x39d:  mov    %ebx,%eax
080e5c1f +0x39f:  lea    -0x8(%ebp),%esp
080e5c22 +0x3a2:  add    $0x0,%esp
080e5c25 +0x3a5:  pop    %ebx
080e5c26 +0x3a6:  pop    %esi
080e5c27 +0x3a7:  pop    %ebp
080e5c28 +0x3a8:  ret
080e5c29 +0x3a9:  nop
```

## 反编译 C

```c
// CChattingEmoticonList::ReCalc @ 0x80e5880

/* CChattingEmoticonList::ReCalc(CChattingEmoticonConfig&, CUser const&) */

undefined4 __thiscall
CChattingEmoticonList::ReCalc
          (CChattingEmoticonList *this,CChattingEmoticonConfig *param_1,CUser *param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_68 [4];
  set<int,std::less<int>,std::allocator<int>> local_64 [24];
  vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>> local_4c [12];
  int local_40 [2];
  int local_38;
  map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
  local_34 [4];
  set<int,std::less<int>,std::allocator<int>> local_30 [4];
  _Rb_tree_const_iterator<int> local_2c [4];
  undefined4 local_28;
  uint local_24;
  int *local_20;
  uint local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
  std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::vector
            (local_4c);
                    /* try { // try from 080e5899 to 080e589d has its CatchHandler @ 080e5bf7 */
  std::set<int,std::less<int>,std::allocator<int>>::set(local_64);
  for (local_24 = 0; local_24 < 0x18; local_24 = local_24 + 1) {
                    /* try { // try from 080e58c8 to 080e5bb2 has its CatchHandler @ 080e5be2 */
    local_20 = (int *)find_emoticon((int)this);
    if ((local_20 != (int *)0x0) &&
       (cVar1 = (**(code **)(*local_20 + 0x14))(local_20,param_2), cVar1 == '\x01')) {
      std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::push_back
                (local_4c,(CChattingEmoticonConfigRow *)(param_1 + local_24 * 0x16));
      local_38 = (int)*(short *)(param_1 + local_24 * 0x16 + 0x14);
      std::set<int,std::less<int>,std::allocator<int>>::insert(local_40);
    }
  }
  CChattingEmoticonConfig::clear(param_1);
  local_1c = 0;
  do {
    uVar4 = std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::size
                      (local_4c);
    if (uVar4 <= local_1c) {
      std::
      map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
      ::begin(local_68);
      do {
        std::
        map<int,ChattingEmoticonBase*,std::less<int>,std::allocator<std::pair<int_const,ChattingEmoticonBase*>>>
        ::end(local_34);
        cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_68
                           ,(_Rb_tree_iterator *)local_34);
        if (cVar1 == '\0') {
                    /* try { // try from 080e5bdb to 080e5bdf has its CatchHandler @ 080e5bf7 */
          std::set<int,std::less<int>,std::allocator<int>>::~set(local_64);
          std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::
          ~vector(local_4c);
          return 1;
        }
        std::set<int,std::less<int>,std::allocator<int>>::end(local_30);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_68
                          );
        local_28 = ChattingEmoticonBase::GetIndex(*(ChattingEmoticonBase **)(iVar5 + 4));
        puVar3 = &local_28;
        std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_2c);
        cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                          (local_2c,(_Rb_tree_const_iterator *)local_30);
        if (cVar1 == '\0') {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                             local_68);
          cVar1 = (**(code **)(**(int **)(iVar5 + 4) + 0x14))(*(int **)(iVar5 + 4),param_2,puVar3);
          if (cVar1 == '\x01') {
            iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                               local_68);
            local_10 = (**(code **)(**(int **)(iVar5 + 4) + 0xc))(*(int **)(iVar5 + 4));
            while( true ) {
              iVar5 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                                 local_68);
              iVar6 = (**(code **)(**(int **)(iVar5 + 4) + 0x10))(*(int **)(iVar5 + 4));
              iVar5 = local_10;
              if (iVar6 < local_10) break;
              if (*(short *)(param_1 + local_10 * 0x16 + 0x14) == 0) {
                iVar6 = std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::
                        operator->((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)
                                   local_68);
                uVar2 = ChattingEmoticonBase::GetIndex(*(ChattingEmoticonBase **)(iVar6 + 4));
                *(undefined2 *)(param_1 + iVar5 * 0x16 + 0x14) = uVar2;
                break;
              }
              local_10 = local_10 + 1;
            }
          }
        }
        std::_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>>::operator++
                  ((_Rb_tree_iterator<std::pair<int_const,ChattingEmoticonBase*>> *)local_68);
      } while( true );
    }
    iVar5 = std::vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::
            operator[](local_4c,local_1c);
    iVar5 = (int)*(short *)(iVar5 + 0x14);
    local_18 = (int *)find_emoticon((int)this);
    if (local_18 != (int *)0x0) {
      local_14 = (**(code **)(*local_18 + 0xc))(local_18,iVar5);
      while (iVar6 = (**(code **)(*local_18 + 0x10))(local_18), iVar5 = local_14, local_14 <= iVar6)
      {
        if (*(short *)(param_1 + local_14 * 0x16 + 0x14) == 0) {
          puVar3 = (undefined4 *)
                   std::
                   vector<CChattingEmoticonConfigRow,std::allocator<CChattingEmoticonConfigRow>>::
                   operator[](local_4c,local_1c);
          iVar5 = iVar5 * 0x16;
          *(undefined4 *)(param_1 + iVar5) = *puVar3;
          *(undefined4 *)(param_1 + iVar5 + 4) = puVar3[1];
          *(undefined4 *)(param_1 + iVar5 + 8) = puVar3[2];
          *(undefined4 *)(param_1 + iVar5 + 0xc) = puVar3[3];
          *(undefined4 *)(param_1 + iVar5 + 0x10) = puVar3[4];
          *(undefined2 *)(param_1 + iVar5 + 0x14) = *(undefined2 *)(puVar3 + 5);
          break;
        }
        local_14 = local_14 + 1;
      }
    }
    local_1c = local_1c + 1;
  } while( true );
}
```
