# InsertEndChild

`_ZN9TiXmlNode14InsertEndChildERKS_`

`TiXmlNode::InsertEndChild(TiXmlNode const&)`

| 类 | 地址 |
|---|---|
| `TiXmlNode` | `0x087e5730` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e5730  _ZN9TiXmlNode14InsertEndChildERKS_
#           TiXmlNode::InsertEndChild(TiXmlNode const&)
# range [0x087e5730, 0x087e5eef]
087e5730 +0x000:  push   %ebp
087e5731 +0x001:  mov    %esp,%ebp
087e5733 +0x003:  push   %esi
087e5734 +0x004:  push   %ebx
087e5735 +0x005:  sub    $0x20,%esp
087e5738 +0x008:  mov    0xc(%ebp),%eax
087e573b +0x00b:  mov    0x8(%ebp),%esi
087e573e +0x00e:  mov    0x14(%eax),%ebx
087e5741 +0x011:  test   %ebx,%ebx
087e5743 +0x013:  jne    087e5778 <+0x48>
087e5745 +0x015:  test   %esi,%esi
087e5747 +0x017:  je     087e576f <+0x3f>
087e5749 +0x019:  mov    %esi,%ebx
087e574b +0x01b:  jmp    087e5757 <+0x27>
087e574d +0x01d:  lea    0x0(%esi),%esi
087e5750 +0x020:  mov    0x10(%ebx),%ebx
087e5753 +0x023:  test   %ebx,%ebx
087e5755 +0x025:  je     087e576f <+0x3f>
087e5757 +0x027:  mov    (%ebx),%eax
087e5759 +0x029:  mov    %ebx,(%esp)
087e575c +0x02c:  call   *0x10(%eax)
087e575f +0x02f:  test   %eax,%eax
087e5761 +0x031:  je     087e5750 <+0x20>
087e5763 +0x033:  mov    (%ebx),%eax
087e5765 +0x035:  mov    %ebx,(%esp)
087e5768 +0x038:  call   *0x10(%eax)
087e576b +0x03b:  test   %eax,%eax
087e576d +0x03d:  jne    087e579f <+0x6f>
087e576f +0x03f:  add    $0x20,%esp
087e5772 +0x042:  xor    %eax,%eax
087e5774 +0x044:  pop    %ebx
087e5775 +0x045:  pop    %esi
087e5776 +0x046:  pop    %ebp
087e5777 +0x047:  ret
087e5778 +0x048:  mov    (%eax),%edx
087e577a +0x04a:  mov    %eax,(%esp)
087e577d +0x04d:  call   *0x40(%edx)
087e5780 +0x050:  test   %eax,%eax
087e5782 +0x052:  je     087e576f <+0x3f>
087e5784 +0x054:  mov    %esi,0x8(%ebp)
087e5787 +0x057:  mov    %eax,0xc(%ebp)
087e578a +0x05a:  add    $0x20,%esp
087e578d +0x05d:  pop    %ebx
087e578e +0x05e:  pop    %esi
087e578f +0x05f:  pop    %ebp
087e5790 +0x060:  jmp    087e2150 <_ZN9TiXmlNode12LinkEndChildEPS_>  ; TiXmlNode::LinkEndChild(TiXmlNode*)
087e5795 +0x065:  lea    0x0(%esi),%esi
087e5798 +0x068:  mov    0x10(%esi),%esi
087e579b +0x06b:  test   %esi,%esi
087e579d +0x06d:  je     087e57e4 <+0xb4>
087e579f +0x06f:  mov    (%esi),%eax
087e57a1 +0x071:  mov    %esi,(%esp)
087e57a4 +0x074:  call   *0x10(%eax)
087e57a7 +0x077:  test   %eax,%eax
087e57a9 +0x079:  je     087e5798 <+0x68>
087e57ab +0x07b:  mov    (%esi),%eax
087e57ad +0x07d:  mov    %esi,(%esp)
087e57b0 +0x080:  call   *0x10(%eax)
087e57b3 +0x083:  mov    %eax,(%esp)
087e57b6 +0x086:  movl   $0x0,0x10(%esp)
087e57be +0x08e:  movl   $0x0,0xc(%esp)
087e57c6 +0x096:  movl   $0x0,0x8(%esp)
087e57ce +0x09e:  movl   $0xf,0x4(%esp)
087e57d6 +0x0a6:  call   087e6d30 <_ZN13TiXmlDocument8SetErrorEiPKcP16TiXmlParsingData13TiXmlEncoding>  ; TiXmlDocument::SetError(int, char const*, TiXmlParsingData*, TiXmlEncoding)
087e57db +0x0ab:  add    $0x20,%esp
087e57de +0x0ae:  xor    %eax,%eax
087e57e0 +0x0b0:  pop    %ebx
087e57e1 +0x0b1:  pop    %esi
087e57e2 +0x0b2:  pop    %ebp
087e57e3 +0x0b3:  ret
087e57e4 +0x0b4:  xor    %eax,%eax
087e57e6 +0x0b6:  jmp    087e57b3 <+0x83>
087e57e8 +0x0b8:  nop
087e57e9 +0x0b9:  nop
087e57ea +0x0ba:  nop
087e57eb +0x0bb:  nop
087e57ec +0x0bc:  nop
087e57ed +0x0bd:  nop
087e57ee +0x0be:  nop
087e57ef +0x0bf:  nop
087e57f0 +0x0c0:  push   %ebp
087e57f1 +0x0c1:  mov    %esp,%ebp
087e57f3 +0x0c3:  mov    0x8(%ebp),%eax
087e57f6 +0x0c6:  movl   $&_ZTV12TiXmlVisitor+0x8,(%eax)
087e57fc +0x0cc:  pop    %ebp
087e57fd +0x0cd:  ret
087e57fe +0x0ce:  nop
087e57ff +0x0cf:  nop
087e5800 +0x0d0:  push   %ebp
087e5801 +0x0d1:  mov    $0x1,%eax
087e5806 +0x0d6:  mov    %esp,%ebp
087e5808 +0x0d8:  pop    %ebp
087e5809 +0x0d9:  ret
087e580a +0x0da:  nop
087e580b +0x0db:  nop
087e580c +0x0dc:  nop
087e580d +0x0dd:  nop
087e580e +0x0de:  nop
087e580f +0x0df:  nop
087e5810 +0x0e0:  push   %ebp
087e5811 +0x0e1:  mov    $0x1,%eax
087e5816 +0x0e6:  mov    %esp,%ebp
087e5818 +0x0e8:  pop    %ebp
087e5819 +0x0e9:  ret
087e581a +0x0ea:  nop
087e581b +0x0eb:  nop
087e581c +0x0ec:  nop
087e581d +0x0ed:  nop
087e581e +0x0ee:  nop
087e581f +0x0ef:  nop
087e5820 +0x0f0:  push   %ebp
087e5821 +0x0f1:  mov    $0x1,%eax
087e5826 +0x0f6:  mov    %esp,%ebp
087e5828 +0x0f8:  pop    %ebp
087e5829 +0x0f9:  ret
087e582a +0x0fa:  nop
087e582b +0x0fb:  nop
087e582c +0x0fc:  nop
087e582d +0x0fd:  nop
087e582e +0x0fe:  nop
087e582f +0x0ff:  nop
087e5830 +0x100:  push   %ebp
087e5831 +0x101:  mov    $0x1,%eax
087e5836 +0x106:  mov    %esp,%ebp
087e5838 +0x108:  pop    %ebp
087e5839 +0x109:  ret
087e583a +0x10a:  nop
087e583b +0x10b:  nop
087e583c +0x10c:  nop
087e583d +0x10d:  nop
087e583e +0x10e:  nop
087e583f +0x10f:  nop
087e5840 +0x110:  push   %ebp
087e5841 +0x111:  mov    $0x1,%eax
087e5846 +0x116:  mov    %esp,%ebp
087e5848 +0x118:  pop    %ebp
087e5849 +0x119:  ret
087e584a +0x11a:  nop
087e584b +0x11b:  nop
087e584c +0x11c:  nop
087e584d +0x11d:  nop
087e584e +0x11e:  nop
087e584f +0x11f:  nop
087e5850 +0x120:  push   %ebp
087e5851 +0x121:  mov    $0x1,%eax
087e5856 +0x126:  mov    %esp,%ebp
087e5858 +0x128:  pop    %ebp
087e5859 +0x129:  ret
087e585a +0x12a:  nop
087e585b +0x12b:  nop
087e585c +0x12c:  nop
087e585d +0x12d:  nop
087e585e +0x12e:  nop
087e585f +0x12f:  nop
087e5860 +0x130:  push   %ebp
087e5861 +0x131:  mov    $0x1,%eax
087e5866 +0x136:  mov    %esp,%ebp
087e5868 +0x138:  pop    %ebp
087e5869 +0x139:  ret
087e586a +0x13a:  nop
087e586b +0x13b:  nop
087e586c +0x13c:  nop
087e586d +0x13d:  nop
087e586e +0x13e:  nop
087e586f +0x13f:  nop
087e5870 +0x140:  push   %ebp
087e5871 +0x141:  mov    $0x1,%eax
087e5876 +0x146:  mov    %esp,%ebp
087e5878 +0x148:  pop    %ebp
087e5879 +0x149:  ret
087e587a +0x14a:  nop
087e587b +0x14b:  nop
087e587c +0x14c:  nop
087e587d +0x14d:  nop
087e587e +0x14e:  nop
087e587f +0x14f:  nop
087e5880 +0x150:  push   %ebp
087e5881 +0x151:  mov    %esp,%ebp
087e5883 +0x153:  mov    0x8(%ebp),%eax
087e5886 +0x156:  movl   $&_ZTV9TiXmlBase+0x8,(%eax)
087e588c +0x15c:  pop    %ebp
087e588d +0x15d:  ret
087e588e +0x15e:  nop
087e588f +0x15f:  nop
087e5890 +0x160:  push   %ebp
087e5891 +0x161:  xor    %eax,%eax
087e5893 +0x163:  mov    %esp,%ebp
087e5895 +0x165:  pop    %ebp
087e5896 +0x166:  ret
087e5897 +0x167:  nop
087e5898 +0x168:  nop
087e5899 +0x169:  nop
087e589a +0x16a:  nop
087e589b +0x16b:  nop
087e589c +0x16c:  nop
087e589d +0x16d:  nop
087e589e +0x16e:  nop
087e589f +0x16f:  nop
087e58a0 +0x170:  push   %ebp
087e58a1 +0x171:  xor    %eax,%eax
087e58a3 +0x173:  mov    %esp,%ebp
087e58a5 +0x175:  pop    %ebp
087e58a6 +0x176:  ret
087e58a7 +0x177:  nop
087e58a8 +0x178:  nop
087e58a9 +0x179:  nop
087e58aa +0x17a:  nop
087e58ab +0x17b:  nop
087e58ac +0x17c:  nop
087e58ad +0x17d:  nop
087e58ae +0x17e:  nop
087e58af +0x17f:  nop
087e58b0 +0x180:  push   %ebp
087e58b1 +0x181:  xor    %eax,%eax
087e58b3 +0x183:  mov    %esp,%ebp
087e58b5 +0x185:  pop    %ebp
087e58b6 +0x186:  ret
087e58b7 +0x187:  nop
087e58b8 +0x188:  nop
087e58b9 +0x189:  nop
087e58ba +0x18a:  nop
087e58bb +0x18b:  nop
087e58bc +0x18c:  nop
087e58bd +0x18d:  nop
087e58be +0x18e:  nop
087e58bf +0x18f:  nop
087e58c0 +0x190:  push   %ebp
087e58c1 +0x191:  xor    %eax,%eax
087e58c3 +0x193:  mov    %esp,%ebp
087e58c5 +0x195:  pop    %ebp
087e58c6 +0x196:  ret
087e58c7 +0x197:  nop
087e58c8 +0x198:  nop
087e58c9 +0x199:  nop
087e58ca +0x19a:  nop
087e58cb +0x19b:  nop
087e58cc +0x19c:  nop
087e58cd +0x19d:  nop
087e58ce +0x19e:  nop
087e58cf +0x19f:  nop
087e58d0 +0x1a0:  push   %ebp
087e58d1 +0x1a1:  xor    %eax,%eax
087e58d3 +0x1a3:  mov    %esp,%ebp
087e58d5 +0x1a5:  pop    %ebp
087e58d6 +0x1a6:  ret
087e58d7 +0x1a7:  nop
087e58d8 +0x1a8:  nop
087e58d9 +0x1a9:  nop
087e58da +0x1aa:  nop
087e58db +0x1ab:  nop
087e58dc +0x1ac:  nop
087e58dd +0x1ad:  nop
087e58de +0x1ae:  nop
087e58df +0x1af:  nop
087e58e0 +0x1b0:  push   %ebp
087e58e1 +0x1b1:  xor    %eax,%eax
087e58e3 +0x1b3:  mov    %esp,%ebp
087e58e5 +0x1b5:  pop    %ebp
087e58e6 +0x1b6:  ret
087e58e7 +0x1b7:  nop
087e58e8 +0x1b8:  nop
087e58e9 +0x1b9:  nop
087e58ea +0x1ba:  nop
087e58eb +0x1bb:  nop
087e58ec +0x1bc:  nop
087e58ed +0x1bd:  nop
087e58ee +0x1be:  nop
087e58ef +0x1bf:  nop
087e58f0 +0x1c0:  push   %ebp
087e58f1 +0x1c1:  xor    %eax,%eax
087e58f3 +0x1c3:  mov    %esp,%ebp
087e58f5 +0x1c5:  pop    %ebp
087e58f6 +0x1c6:  ret
087e58f7 +0x1c7:  nop
087e58f8 +0x1c8:  nop
087e58f9 +0x1c9:  nop
087e58fa +0x1ca:  nop
087e58fb +0x1cb:  nop
087e58fc +0x1cc:  nop
087e58fd +0x1cd:  nop
087e58fe +0x1ce:  nop
087e58ff +0x1cf:  nop
087e5900 +0x1d0:  push   %ebp
087e5901 +0x1d1:  xor    %eax,%eax
087e5903 +0x1d3:  mov    %esp,%ebp
087e5905 +0x1d5:  pop    %ebp
087e5906 +0x1d6:  ret
087e5907 +0x1d7:  nop
087e5908 +0x1d8:  nop
087e5909 +0x1d9:  nop
087e590a +0x1da:  nop
087e590b +0x1db:  nop
087e590c +0x1dc:  nop
087e590d +0x1dd:  nop
087e590e +0x1de:  nop
087e590f +0x1df:  nop
087e5910 +0x1e0:  push   %ebp
087e5911 +0x1e1:  xor    %eax,%eax
087e5913 +0x1e3:  mov    %esp,%ebp
087e5915 +0x1e5:  pop    %ebp
087e5916 +0x1e6:  ret
087e5917 +0x1e7:  nop
087e5918 +0x1e8:  nop
087e5919 +0x1e9:  nop
087e591a +0x1ea:  nop
087e591b +0x1eb:  nop
087e591c +0x1ec:  nop
087e591d +0x1ed:  nop
087e591e +0x1ee:  nop
087e591f +0x1ef:  nop
087e5920 +0x1f0:  push   %ebp
087e5921 +0x1f1:  xor    %eax,%eax
087e5923 +0x1f3:  mov    %esp,%ebp
087e5925 +0x1f5:  pop    %ebp
087e5926 +0x1f6:  ret
087e5927 +0x1f7:  nop
087e5928 +0x1f8:  nop
087e5929 +0x1f9:  nop
087e592a +0x1fa:  nop
087e592b +0x1fb:  nop
087e592c +0x1fc:  nop
087e592d +0x1fd:  nop
087e592e +0x1fe:  nop
087e592f +0x1ff:  nop
087e5930 +0x200:  push   %ebp
087e5931 +0x201:  xor    %eax,%eax
087e5933 +0x203:  mov    %esp,%ebp
087e5935 +0x205:  pop    %ebp
087e5936 +0x206:  ret
087e5937 +0x207:  nop
087e5938 +0x208:  nop
087e5939 +0x209:  nop
087e593a +0x20a:  nop
087e593b +0x20b:  nop
087e593c +0x20c:  nop
087e593d +0x20d:  nop
087e593e +0x20e:  nop
087e593f +0x20f:  nop
087e5940 +0x210:  push   %ebp
087e5941 +0x211:  xor    %eax,%eax
087e5943 +0x213:  mov    %esp,%ebp
087e5945 +0x215:  pop    %ebp
087e5946 +0x216:  ret
087e5947 +0x217:  nop
087e5948 +0x218:  nop
087e5949 +0x219:  nop
087e594a +0x21a:  nop
087e594b +0x21b:  nop
087e594c +0x21c:  nop
087e594d +0x21d:  nop
087e594e +0x21e:  nop
087e594f +0x21f:  nop
087e5950 +0x220:  push   %ebp
087e5951 +0x221:  mov    %esp,%ebp
087e5953 +0x223:  mov    0x8(%ebp),%eax
087e5956 +0x226:  pop    %ebp
087e5957 +0x227:  ret
087e5958 +0x228:  nop
087e5959 +0x229:  nop
087e595a +0x22a:  nop
087e595b +0x22b:  nop
087e595c +0x22c:  nop
087e595d +0x22d:  nop
087e595e +0x22e:  nop
087e595f +0x22f:  nop
087e5960 +0x230:  push   %ebp
087e5961 +0x231:  mov    %esp,%ebp
087e5963 +0x233:  mov    0x8(%ebp),%eax
087e5966 +0x236:  pop    %ebp
087e5967 +0x237:  ret
087e5968 +0x238:  nop
087e5969 +0x239:  nop
087e596a +0x23a:  nop
087e596b +0x23b:  nop
087e596c +0x23c:  nop
087e596d +0x23d:  nop
087e596e +0x23e:  nop
087e596f +0x23f:  nop
087e5970 +0x240:  push   %ebp
087e5971 +0x241:  mov    %esp,%ebp
087e5973 +0x243:  mov    0x8(%ebp),%eax
087e5976 +0x246:  pop    %ebp
087e5977 +0x247:  ret
087e5978 +0x248:  nop
087e5979 +0x249:  nop
087e597a +0x24a:  nop
087e597b +0x24b:  nop
087e597c +0x24c:  nop
087e597d +0x24d:  nop
087e597e +0x24e:  nop
087e597f +0x24f:  nop
087e5980 +0x250:  push   %ebp
087e5981 +0x251:  mov    %esp,%ebp
087e5983 +0x253:  mov    0x8(%ebp),%eax
087e5986 +0x256:  pop    %ebp
087e5987 +0x257:  ret
087e5988 +0x258:  nop
087e5989 +0x259:  nop
087e598a +0x25a:  nop
087e598b +0x25b:  nop
087e598c +0x25c:  nop
087e598d +0x25d:  nop
087e598e +0x25e:  nop
087e598f +0x25f:  nop
087e5990 +0x260:  push   %ebp
087e5991 +0x261:  mov    %esp,%ebp
087e5993 +0x263:  mov    0x8(%ebp),%eax
087e5996 +0x266:  pop    %ebp
087e5997 +0x267:  ret
087e5998 +0x268:  nop
087e5999 +0x269:  nop
087e599a +0x26a:  nop
087e599b +0x26b:  nop
087e599c +0x26c:  nop
087e599d +0x26d:  nop
087e599e +0x26e:  nop
087e599f +0x26f:  nop
087e59a0 +0x270:  push   %ebp
087e59a1 +0x271:  mov    %esp,%ebp
087e59a3 +0x273:  mov    0x8(%ebp),%eax
087e59a6 +0x276:  pop    %ebp
087e59a7 +0x277:  ret
087e59a8 +0x278:  nop
087e59a9 +0x279:  nop
087e59aa +0x27a:  nop
087e59ab +0x27b:  nop
087e59ac +0x27c:  nop
087e59ad +0x27d:  nop
087e59ae +0x27e:  nop
087e59af +0x27f:  nop
087e59b0 +0x280:  push   %ebp
087e59b1 +0x281:  mov    %esp,%ebp
087e59b3 +0x283:  sub    $0x18,%esp
087e59b6 +0x286:  mov    0x8(%ebp),%eax
087e59b9 +0x289:  mov    0x10(%ebp),%ecx
087e59bc +0x28c:  mov    (%eax),%edx
087e59be +0x28e:  mov    %ecx,0x8(%esp)
087e59c2 +0x292:  mov    0xc(%ebp),%ecx
087e59c5 +0x295:  movl   $0x0,0xc(%esp)
087e59cd +0x29d:  mov    %eax,(%esp)
087e59d0 +0x2a0:  mov    %ecx,0x4(%esp)
087e59d4 +0x2a4:  call   *0x4c(%edx)
087e59d7 +0x2a7:  leave
087e59d8 +0x2a8:  ret
087e59d9 +0x2a9:  nop
087e59da +0x2aa:  nop
087e59db +0x2ab:  nop
087e59dc +0x2ac:  nop
087e59dd +0x2ad:  nop
087e59de +0x2ae:  nop
087e59df +0x2af:  nop
087e59e0 +0x2b0:  push   %ebp
087e59e1 +0x2b1:  mov    %esp,%ebp
087e59e3 +0x2b3:  mov    0x8(%ebp),%eax
087e59e6 +0x2b6:  pop    %ebp
087e59e7 +0x2b7:  ret
087e59e8 +0x2b8:  nop
087e59e9 +0x2b9:  nop
087e59ea +0x2ba:  nop
087e59eb +0x2bb:  nop
087e59ec +0x2bc:  nop
087e59ed +0x2bd:  nop
087e59ee +0x2be:  nop
087e59ef +0x2bf:  nop
087e59f0 +0x2c0:  push   %ebp
087e59f1 +0x2c1:  mov    %esp,%ebp
087e59f3 +0x2c3:  mov    0x8(%ebp),%eax
087e59f6 +0x2c6:  pop    %ebp
087e59f7 +0x2c7:  ret
087e59f8 +0x2c8:  nop
087e59f9 +0x2c9:  nop
087e59fa +0x2ca:  nop
087e59fb +0x2cb:  nop
087e59fc +0x2cc:  nop
087e59fd +0x2cd:  nop
087e59fe +0x2ce:  nop
087e59ff +0x2cf:  nop
087e5a00 +0x2d0:  push   %ebp
087e5a01 +0x2d1:  mov    %esp,%ebp
087e5a03 +0x2d3:  mov    0x8(%ebp),%eax
087e5a06 +0x2d6:  pop    %ebp
087e5a07 +0x2d7:  ret
087e5a08 +0x2d8:  nop
087e5a09 +0x2d9:  nop
087e5a0a +0x2da:  nop
087e5a0b +0x2db:  nop
087e5a0c +0x2dc:  nop
087e5a0d +0x2dd:  nop
087e5a0e +0x2de:  nop
087e5a0f +0x2df:  nop
087e5a10 +0x2e0:  push   %ebp
087e5a11 +0x2e1:  mov    %esp,%ebp
087e5a13 +0x2e3:  mov    0x8(%ebp),%eax
087e5a16 +0x2e6:  pop    %ebp
087e5a17 +0x2e7:  ret
087e5a18 +0x2e8:  nop
087e5a19 +0x2e9:  nop
087e5a1a +0x2ea:  nop
087e5a1b +0x2eb:  nop
087e5a1c +0x2ec:  nop
087e5a1d +0x2ed:  nop
087e5a1e +0x2ee:  nop
087e5a1f +0x2ef:  nop
087e5a20 +0x2f0:  push   %ebp
087e5a21 +0x2f1:  mov    %esp,%ebp
087e5a23 +0x2f3:  sub    $0x8,%esp
087e5a26 +0x2f6:  mov    0x8(%ebp),%eax
087e5a29 +0x2f9:  movl   $&_ZTV12TiXmlVisitor+0x8,(%eax)
087e5a2f +0x2ff:  leave
087e5a30 +0x300:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e5a35 +0x305:  nop
087e5a36 +0x306:  nop
087e5a37 +0x307:  nop
087e5a38 +0x308:  nop
087e5a39 +0x309:  nop
087e5a3a +0x30a:  nop
087e5a3b +0x30b:  nop
087e5a3c +0x30c:  nop
087e5a3d +0x30d:  nop
087e5a3e +0x30e:  nop
087e5a3f +0x30f:  nop
087e5a40 +0x310:  push   %ebp
087e5a41 +0x311:  mov    %esp,%ebp
087e5a43 +0x313:  sub    $0x8,%esp
087e5a46 +0x316:  mov    0x8(%ebp),%eax
087e5a49 +0x319:  movl   $&_ZTV9TiXmlBase+0x8,(%eax)
087e5a4f +0x31f:  leave
087e5a50 +0x320:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e5a55 +0x325:  nop
087e5a56 +0x326:  nop
087e5a57 +0x327:  nop
087e5a58 +0x328:  nop
087e5a59 +0x329:  nop
087e5a5a +0x32a:  nop
087e5a5b +0x32b:  nop
087e5a5c +0x32c:  nop
087e5a5d +0x32d:  nop
087e5a5e +0x32e:  nop
087e5a5f +0x32f:  nop
087e5a60 +0x330:  push   %ebp
087e5a61 +0x331:  mov    %esp,%ebp
087e5a63 +0x333:  sub    $0x28,%esp
087e5a66 +0x336:  mov    %ebx,-0x8(%ebp)
087e5a69 +0x339:  mov    0x8(%ebp),%ebx
087e5a6c +0x33c:  mov    %esi,-0x4(%ebp)
087e5a6f +0x33f:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%esi
087e5a74 +0x344:  mov    0x14(%ebx),%eax
087e5a77 +0x347:  movl   $&_ZTV12TiXmlPrinter+0x8,(%ebx)
087e5a7d +0x34d:  sub    $0xc,%eax
087e5a80 +0x350:  cmp    %esi,%eax
087e5a82 +0x352:  jne    087e5aa8 <+0x378>
087e5a84 +0x354:  mov    0x10(%ebx),%eax
087e5a87 +0x357:  sub    $0xc,%eax
087e5a8a +0x35a:  cmp    %eax,%esi
087e5a8c +0x35c:  jne    087e5af4 <+0x3c4>
087e5a8e +0x35e:  mov    0xc(%ebx),%eax
087e5a91 +0x361:  sub    $0xc,%eax
087e5a94 +0x364:  cmp    %eax,%esi
087e5a96 +0x366:  jne    087e5ace <+0x39e>
087e5a98 +0x368:  movl   $&_ZTV12TiXmlVisitor+0x8,(%ebx)
087e5a9e +0x36e:  mov    -0x8(%ebp),%ebx
087e5aa1 +0x371:  mov    -0x4(%ebp),%esi
087e5aa4 +0x374:  mov    %ebp,%esp
087e5aa6 +0x376:  pop    %ebp
087e5aa7 +0x377:  ret
087e5aa8 +0x378:  mov    $&data#bb92cc41(.plt),%edx
087e5aad +0x37d:  test   %edx,%edx
087e5aaf +0x37f:  je     087e5b1d <+0x3ed>
087e5ab1 +0x381:  or     $0xffffffff,%edx
087e5ab4 +0x384:  lock xadd %edx,0x8(%eax)
087e5ab9 +0x389:  test   %edx,%edx
087e5abb +0x38b:  jg     087e5a84 <+0x354>
087e5abd +0x38d:  lea    -0x9(%ebp),%edx
087e5ac0 +0x390:  mov    %edx,0x4(%esp)
087e5ac4 +0x394:  mov    %eax,(%esp)
087e5ac7 +0x397:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5acc +0x39c:  jmp    087e5a84 <+0x354>
087e5ace +0x39e:  mov    $&data#bb92cc41(.plt),%edx
087e5ad3 +0x3a3:  test   %edx,%edx
087e5ad5 +0x3a5:  je     087e5b28 <+0x3f8>
087e5ad7 +0x3a7:  or     $0xffffffff,%edx
087e5ada +0x3aa:  lock xadd %edx,0x8(%eax)
087e5adf +0x3af:  test   %edx,%edx
087e5ae1 +0x3b1:  jg     087e5a98 <+0x368>
087e5ae3 +0x3b3:  lea    -0xb(%ebp),%edx
087e5ae6 +0x3b6:  mov    %edx,0x4(%esp)
087e5aea +0x3ba:  mov    %eax,(%esp)
087e5aed +0x3bd:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5af2 +0x3c2:  jmp    087e5a98 <+0x368>
087e5af4 +0x3c4:  mov    $&data#bb92cc41(.plt),%edx
087e5af9 +0x3c9:  test   %edx,%edx
087e5afb +0x3cb:  je     087e5b33 <+0x403>
087e5afd +0x3cd:  or     $0xffffffff,%edx
087e5b00 +0x3d0:  lock xadd %edx,0x8(%eax)
087e5b05 +0x3d5:  test   %edx,%edx
087e5b07 +0x3d7:  jg     087e5a8e <+0x35e>
087e5b09 +0x3d9:  lea    -0xa(%ebp),%edx
087e5b0c +0x3dc:  mov    %edx,0x4(%esp)
087e5b10 +0x3e0:  mov    %eax,(%esp)
087e5b13 +0x3e3:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5b18 +0x3e8:  jmp    087e5a8e <+0x35e>
087e5b1d +0x3ed:  mov    0x8(%eax),%edx
087e5b20 +0x3f0:  lea    -0x1(%edx),%ecx
087e5b23 +0x3f3:  mov    %ecx,0x8(%eax)
087e5b26 +0x3f6:  jmp    087e5ab9 <+0x389>
087e5b28 +0x3f8:  mov    0x8(%eax),%edx
087e5b2b +0x3fb:  lea    -0x1(%edx),%ecx
087e5b2e +0x3fe:  mov    %ecx,0x8(%eax)
087e5b31 +0x401:  jmp    087e5adf <+0x3af>
087e5b33 +0x403:  mov    0x8(%eax),%edx
087e5b36 +0x406:  lea    -0x1(%edx),%ecx
087e5b39 +0x409:  mov    %ecx,0x8(%eax)
087e5b3c +0x40c:  jmp    087e5b05 <+0x3d5>
087e5b3e +0x40e:  nop
087e5b3f +0x40f:  nop
087e5b40 +0x410:  push   %ebp
087e5b41 +0x411:  mov    %esp,%ebp
087e5b43 +0x413:  sub    $0x8,%esp
087e5b46 +0x416:  mov    0x8(%ebp),%eax
087e5b49 +0x419:  movl   $&_ZTV12TiXmlComment+0x8,(%eax)
087e5b4f +0x41f:  leave
087e5b50 +0x420:  jmp    087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5b55 +0x425:  nop
087e5b56 +0x426:  nop
087e5b57 +0x427:  nop
087e5b58 +0x428:  nop
087e5b59 +0x429:  nop
087e5b5a +0x42a:  nop
087e5b5b +0x42b:  nop
087e5b5c +0x42c:  nop
087e5b5d +0x42d:  nop
087e5b5e +0x42e:  nop
087e5b5f +0x42f:  nop
087e5b60 +0x430:  push   %ebp
087e5b61 +0x431:  mov    %esp,%ebp
087e5b63 +0x433:  sub    $0x8,%esp
087e5b66 +0x436:  mov    0x8(%ebp),%eax
087e5b69 +0x439:  movl   $&_ZTV9TiXmlText+0x8,(%eax)
087e5b6f +0x43f:  leave
087e5b70 +0x440:  jmp    087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5b75 +0x445:  nop
087e5b76 +0x446:  nop
087e5b77 +0x447:  nop
087e5b78 +0x448:  nop
087e5b79 +0x449:  nop
087e5b7a +0x44a:  nop
087e5b7b +0x44b:  nop
087e5b7c +0x44c:  nop
087e5b7d +0x44d:  nop
087e5b7e +0x44e:  nop
087e5b7f +0x44f:  nop
087e5b80 +0x450:  push   %ebp
087e5b81 +0x451:  mov    %esp,%ebp
087e5b83 +0x453:  sub    $0x8,%esp
087e5b86 +0x456:  mov    0x8(%ebp),%eax
087e5b89 +0x459:  movl   $&_ZTV12TiXmlUnknown+0x8,(%eax)
087e5b8f +0x45f:  leave
087e5b90 +0x460:  jmp    087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5b95 +0x465:  nop
087e5b96 +0x466:  nop
087e5b97 +0x467:  nop
087e5b98 +0x468:  nop
087e5b99 +0x469:  nop
087e5b9a +0x46a:  nop
087e5b9b +0x46b:  nop
087e5b9c +0x46c:  nop
087e5b9d +0x46d:  nop
087e5b9e +0x46e:  nop
087e5b9f +0x46f:  nop
087e5ba0 +0x470:  push   %ebp
087e5ba1 +0x471:  mov    %esp,%ebp
087e5ba3 +0x473:  push   %ebx
087e5ba4 +0x474:  sub    $0x14,%esp
087e5ba7 +0x477:  mov    0x8(%ebp),%ebx
087e5baa +0x47a:  movl   $&_ZTV12TiXmlUnknown+0x8,(%ebx)
087e5bb0 +0x480:  mov    %ebx,(%esp)
087e5bb3 +0x483:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5bb8 +0x488:  mov    %ebx,0x8(%ebp)
087e5bbb +0x48b:  add    $0x14,%esp
087e5bbe +0x48e:  pop    %ebx
087e5bbf +0x48f:  pop    %ebp
087e5bc0 +0x490:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e5bc5 +0x495:  nop
087e5bc6 +0x496:  nop
087e5bc7 +0x497:  nop
087e5bc8 +0x498:  nop
087e5bc9 +0x499:  nop
087e5bca +0x49a:  nop
087e5bcb +0x49b:  nop
087e5bcc +0x49c:  nop
087e5bcd +0x49d:  nop
087e5bce +0x49e:  nop
087e5bcf +0x49f:  nop
087e5bd0 +0x4a0:  push   %ebp
087e5bd1 +0x4a1:  mov    %esp,%ebp
087e5bd3 +0x4a3:  push   %ebx
087e5bd4 +0x4a4:  sub    $0x14,%esp
087e5bd7 +0x4a7:  mov    0x8(%ebp),%ebx
087e5bda +0x4aa:  movl   $&_ZTV12TiXmlComment+0x8,(%ebx)
087e5be0 +0x4b0:  mov    %ebx,(%esp)
087e5be3 +0x4b3:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5be8 +0x4b8:  mov    %ebx,0x8(%ebp)
087e5beb +0x4bb:  add    $0x14,%esp
087e5bee +0x4be:  pop    %ebx
087e5bef +0x4bf:  pop    %ebp
087e5bf0 +0x4c0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e5bf5 +0x4c5:  nop
087e5bf6 +0x4c6:  nop
087e5bf7 +0x4c7:  nop
087e5bf8 +0x4c8:  nop
087e5bf9 +0x4c9:  nop
087e5bfa +0x4ca:  nop
087e5bfb +0x4cb:  nop
087e5bfc +0x4cc:  nop
087e5bfd +0x4cd:  nop
087e5bfe +0x4ce:  nop
087e5bff +0x4cf:  nop
087e5c00 +0x4d0:  push   %ebp
087e5c01 +0x4d1:  mov    %esp,%ebp
087e5c03 +0x4d3:  push   %ebx
087e5c04 +0x4d4:  sub    $0x14,%esp
087e5c07 +0x4d7:  mov    0x8(%ebp),%ebx
087e5c0a +0x4da:  movl   $&_ZTV9TiXmlText+0x8,(%ebx)
087e5c10 +0x4e0:  mov    %ebx,(%esp)
087e5c13 +0x4e3:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5c18 +0x4e8:  mov    %ebx,0x8(%ebp)
087e5c1b +0x4eb:  add    $0x14,%esp
087e5c1e +0x4ee:  pop    %ebx
087e5c1f +0x4ef:  pop    %ebp
087e5c20 +0x4f0:  jmp    087244f0 <_ZdlPv>  ; operator delete(void*)
087e5c25 +0x4f5:  nop
087e5c26 +0x4f6:  nop
087e5c27 +0x4f7:  nop
087e5c28 +0x4f8:  nop
087e5c29 +0x4f9:  nop
087e5c2a +0x4fa:  nop
087e5c2b +0x4fb:  nop
087e5c2c +0x4fc:  nop
087e5c2d +0x4fd:  nop
087e5c2e +0x4fe:  nop
087e5c2f +0x4ff:  nop
087e5c30 +0x500:  push   %ebp
087e5c31 +0x501:  mov    %esp,%ebp
087e5c33 +0x503:  sub    $0x28,%esp
087e5c36 +0x506:  mov    %ebx,-0x8(%ebp)
087e5c39 +0x509:  mov    0x8(%ebp),%ebx
087e5c3c +0x50c:  mov    %esi,-0x4(%ebp)
087e5c3f +0x50f:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%esi
087e5c44 +0x514:  mov    0x34(%ebx),%eax
087e5c47 +0x517:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%ebx)
087e5c4d +0x51d:  sub    $0xc,%eax
087e5c50 +0x520:  cmp    %esi,%eax
087e5c52 +0x522:  jne    087e5c7a <+0x54a>
087e5c54 +0x524:  mov    0x30(%ebx),%eax
087e5c57 +0x527:  sub    $0xc,%eax
087e5c5a +0x52a:  cmp    %eax,%esi
087e5c5c +0x52c:  jne    087e5cc6 <+0x596>
087e5c5e +0x52e:  mov    0x2c(%ebx),%eax
087e5c61 +0x531:  sub    $0xc,%eax
087e5c64 +0x534:  cmp    %eax,%esi
087e5c66 +0x536:  jne    087e5ca0 <+0x570>
087e5c68 +0x538:  mov    %ebx,(%esp)
087e5c6b +0x53b:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5c70 +0x540:  mov    -0x8(%ebp),%ebx
087e5c73 +0x543:  mov    -0x4(%ebp),%esi
087e5c76 +0x546:  mov    %ebp,%esp
087e5c78 +0x548:  pop    %ebp
087e5c79 +0x549:  ret
087e5c7a +0x54a:  mov    $&data#bb92cc41(.plt),%edx
087e5c7f +0x54f:  test   %edx,%edx
087e5c81 +0x551:  je     087e5cef <+0x5bf>
087e5c83 +0x553:  or     $0xffffffff,%edx
087e5c86 +0x556:  lock xadd %edx,0x8(%eax)
087e5c8b +0x55b:  test   %edx,%edx
087e5c8d +0x55d:  jg     087e5c54 <+0x524>
087e5c8f +0x55f:  lea    -0x9(%ebp),%edx
087e5c92 +0x562:  mov    %edx,0x4(%esp)
087e5c96 +0x566:  mov    %eax,(%esp)
087e5c99 +0x569:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5c9e +0x56e:  jmp    087e5c54 <+0x524>
087e5ca0 +0x570:  mov    $&data#bb92cc41(.plt),%edx
087e5ca5 +0x575:  test   %edx,%edx
087e5ca7 +0x577:  je     087e5cfa <+0x5ca>
087e5ca9 +0x579:  or     $0xffffffff,%edx
087e5cac +0x57c:  lock xadd %edx,0x8(%eax)
087e5cb1 +0x581:  test   %edx,%edx
087e5cb3 +0x583:  jg     087e5c68 <+0x538>
087e5cb5 +0x585:  lea    -0xb(%ebp),%edx
087e5cb8 +0x588:  mov    %edx,0x4(%esp)
087e5cbc +0x58c:  mov    %eax,(%esp)
087e5cbf +0x58f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5cc4 +0x594:  jmp    087e5c68 <+0x538>
087e5cc6 +0x596:  mov    $&data#bb92cc41(.plt),%edx
087e5ccb +0x59b:  test   %edx,%edx
087e5ccd +0x59d:  je     087e5d05 <+0x5d5>
087e5ccf +0x59f:  or     $0xffffffff,%edx
087e5cd2 +0x5a2:  lock xadd %edx,0x8(%eax)
087e5cd7 +0x5a7:  test   %edx,%edx
087e5cd9 +0x5a9:  jg     087e5c5e <+0x52e>
087e5cdb +0x5ab:  lea    -0xa(%ebp),%edx
087e5cde +0x5ae:  mov    %edx,0x4(%esp)
087e5ce2 +0x5b2:  mov    %eax,(%esp)
087e5ce5 +0x5b5:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5cea +0x5ba:  jmp    087e5c5e <+0x52e>
087e5cef +0x5bf:  mov    0x8(%eax),%edx
087e5cf2 +0x5c2:  lea    -0x1(%edx),%ecx
087e5cf5 +0x5c5:  mov    %ecx,0x8(%eax)
087e5cf8 +0x5c8:  jmp    087e5c8b <+0x55b>
087e5cfa +0x5ca:  mov    0x8(%eax),%edx
087e5cfd +0x5cd:  lea    -0x1(%edx),%ecx
087e5d00 +0x5d0:  mov    %ecx,0x8(%eax)
087e5d03 +0x5d3:  jmp    087e5cb1 <+0x581>
087e5d05 +0x5d5:  mov    0x8(%eax),%edx
087e5d08 +0x5d8:  lea    -0x1(%edx),%ecx
087e5d0b +0x5db:  mov    %ecx,0x8(%eax)
087e5d0e +0x5de:  jmp    087e5cd7 <+0x5a7>
087e5d10 +0x5e0:  push   %ebp
087e5d11 +0x5e1:  mov    %esp,%ebp
087e5d13 +0x5e3:  sub    $0x28,%esp
087e5d16 +0x5e6:  mov    %ebx,-0x8(%ebp)
087e5d19 +0x5e9:  mov    0x8(%ebp),%ebx
087e5d1c +0x5ec:  mov    %esi,-0x4(%ebp)
087e5d1f +0x5ef:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%esi
087e5d24 +0x5f4:  mov    0x34(%ebx),%eax
087e5d27 +0x5f7:  movl   $&_ZTV16TiXmlDeclaration+0x8,(%ebx)
087e5d2d +0x5fd:  sub    $0xc,%eax
087e5d30 +0x600:  cmp    %esi,%eax
087e5d32 +0x602:  jne    087e5d62 <+0x632>
087e5d34 +0x604:  mov    0x30(%ebx),%eax
087e5d37 +0x607:  sub    $0xc,%eax
087e5d3a +0x60a:  cmp    %eax,%esi
087e5d3c +0x60c:  jne    087e5dae <+0x67e>
087e5d3e +0x60e:  mov    0x2c(%ebx),%eax
087e5d41 +0x611:  sub    $0xc,%eax
087e5d44 +0x614:  cmp    %eax,%esi
087e5d46 +0x616:  jne    087e5d88 <+0x658>
087e5d48 +0x618:  mov    %ebx,(%esp)
087e5d4b +0x61b:  call   087e2b70 <_ZN9TiXmlNodeD1Ev>  ; TiXmlNode::~TiXmlNode()
087e5d50 +0x620:  mov    %ebx,(%esp)
087e5d53 +0x623:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e5d58 +0x628:  mov    -0x8(%ebp),%ebx
087e5d5b +0x62b:  mov    -0x4(%ebp),%esi
087e5d5e +0x62e:  mov    %ebp,%esp
087e5d60 +0x630:  pop    %ebp
087e5d61 +0x631:  ret
087e5d62 +0x632:  mov    $&data#bb92cc41(.plt),%edx
087e5d67 +0x637:  test   %edx,%edx
087e5d69 +0x639:  je     087e5ddb <+0x6ab>
087e5d6b +0x63b:  or     $0xffffffff,%edx
087e5d6e +0x63e:  lock xadd %edx,0x8(%eax)
087e5d73 +0x643:  test   %edx,%edx
087e5d75 +0x645:  jg     087e5d34 <+0x604>
087e5d77 +0x647:  lea    -0x9(%ebp),%edx
087e5d7a +0x64a:  mov    %edx,0x4(%esp)
087e5d7e +0x64e:  mov    %eax,(%esp)
087e5d81 +0x651:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5d86 +0x656:  jmp    087e5d34 <+0x604>
087e5d88 +0x658:  mov    $&data#bb92cc41(.plt),%edx
087e5d8d +0x65d:  test   %edx,%edx
087e5d8f +0x65f:  je     087e5de6 <+0x6b6>
087e5d91 +0x661:  or     $0xffffffff,%edx
087e5d94 +0x664:  lock xadd %edx,0x8(%eax)
087e5d99 +0x669:  test   %edx,%edx
087e5d9b +0x66b:  jg     087e5d48 <+0x618>
087e5d9d +0x66d:  lea    -0xb(%ebp),%edx
087e5da0 +0x670:  mov    %edx,0x4(%esp)
087e5da4 +0x674:  mov    %eax,(%esp)
087e5da7 +0x677:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5dac +0x67c:  jmp    087e5d48 <+0x618>
087e5dae +0x67e:  mov    $&data#bb92cc41(.plt),%edx
087e5db3 +0x683:  test   %edx,%edx
087e5db5 +0x685:  je     087e5df1 <+0x6c1>
087e5db7 +0x687:  or     $0xffffffff,%edx
087e5dba +0x68a:  lock xadd %edx,0x8(%eax)
087e5dbf +0x68f:  test   %edx,%edx
087e5dc1 +0x691:  jg     087e5d3e <+0x60e>
087e5dc7 +0x697:  lea    -0xa(%ebp),%edx
087e5dca +0x69a:  mov    %edx,0x4(%esp)
087e5dce +0x69e:  mov    %eax,(%esp)
087e5dd1 +0x6a1:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5dd6 +0x6a6:  jmp    087e5d3e <+0x60e>
087e5ddb +0x6ab:  mov    0x8(%eax),%edx
087e5dde +0x6ae:  lea    -0x1(%edx),%ecx
087e5de1 +0x6b1:  mov    %ecx,0x8(%eax)
087e5de4 +0x6b4:  jmp    087e5d73 <+0x643>
087e5de6 +0x6b6:  mov    0x8(%eax),%edx
087e5de9 +0x6b9:  lea    -0x1(%edx),%ecx
087e5dec +0x6bc:  mov    %ecx,0x8(%eax)
087e5def +0x6bf:  jmp    087e5d99 <+0x669>
087e5df1 +0x6c1:  mov    0x8(%eax),%edx
087e5df4 +0x6c4:  lea    -0x1(%edx),%ecx
087e5df7 +0x6c7:  mov    %ecx,0x8(%eax)
087e5dfa +0x6ca:  jmp    087e5dbf <+0x68f>
087e5dfc +0x6cc:  nop
087e5dfd +0x6cd:  nop
087e5dfe +0x6ce:  nop
087e5dff +0x6cf:  nop
087e5e00 +0x6d0:  push   %ebp
087e5e01 +0x6d1:  mov    %esp,%ebp
087e5e03 +0x6d3:  sub    $0x28,%esp
087e5e06 +0x6d6:  mov    %ebx,-0x8(%ebp)
087e5e09 +0x6d9:  mov    0x8(%ebp),%ebx
087e5e0c +0x6dc:  mov    %esi,-0x4(%ebp)
087e5e0f +0x6df:  mov    $&_ZNSs4_Rep20_S_empty_rep_storageE,%esi
087e5e14 +0x6e4:  mov    0x14(%ebx),%eax
087e5e17 +0x6e7:  movl   $&_ZTV12TiXmlPrinter+0x8,(%ebx)
087e5e1d +0x6ed:  sub    $0xc,%eax
087e5e20 +0x6f0:  cmp    %esi,%eax
087e5e22 +0x6f2:  jne    087e5e50 <+0x720>
087e5e24 +0x6f4:  mov    0x10(%ebx),%eax
087e5e27 +0x6f7:  sub    $0xc,%eax
087e5e2a +0x6fa:  cmp    %eax,%esi
087e5e2c +0x6fc:  jne    087e5e9c <+0x76c>
087e5e2e +0x6fe:  mov    0xc(%ebx),%eax
087e5e31 +0x701:  sub    $0xc,%eax
087e5e34 +0x704:  cmp    %eax,%esi
087e5e36 +0x706:  jne    087e5e76 <+0x746>
087e5e38 +0x708:  movl   $&_ZTV12TiXmlVisitor+0x8,(%ebx)
087e5e3e +0x70e:  mov    %ebx,(%esp)
087e5e41 +0x711:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
087e5e46 +0x716:  mov    -0x8(%ebp),%ebx
087e5e49 +0x719:  mov    -0x4(%ebp),%esi
087e5e4c +0x71c:  mov    %ebp,%esp
087e5e4e +0x71e:  pop    %ebp
087e5e4f +0x71f:  ret
087e5e50 +0x720:  mov    $&data#bb92cc41(.plt),%edx
087e5e55 +0x725:  test   %edx,%edx
087e5e57 +0x727:  je     087e5ec9 <+0x799>
087e5e59 +0x729:  or     $0xffffffff,%edx
087e5e5c +0x72c:  lock xadd %edx,0x8(%eax)
087e5e61 +0x731:  test   %edx,%edx
087e5e63 +0x733:  jg     087e5e24 <+0x6f4>
087e5e65 +0x735:  lea    -0x9(%ebp),%edx
087e5e68 +0x738:  mov    %edx,0x4(%esp)
087e5e6c +0x73c:  mov    %eax,(%esp)
087e5e6f +0x73f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5e74 +0x744:  jmp    087e5e24 <+0x6f4>
087e5e76 +0x746:  mov    $&data#bb92cc41(.plt),%edx
087e5e7b +0x74b:  test   %edx,%edx
087e5e7d +0x74d:  je     087e5ed4 <+0x7a4>
087e5e7f +0x74f:  or     $0xffffffff,%edx
087e5e82 +0x752:  lock xadd %edx,0x8(%eax)
087e5e87 +0x757:  test   %edx,%edx
087e5e89 +0x759:  jg     087e5e38 <+0x708>
087e5e8b +0x75b:  lea    -0xb(%ebp),%edx
087e5e8e +0x75e:  mov    %edx,0x4(%esp)
087e5e92 +0x762:  mov    %eax,(%esp)
087e5e95 +0x765:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5e9a +0x76a:  jmp    087e5e38 <+0x708>
087e5e9c +0x76c:  mov    $&data#bb92cc41(.plt),%edx
087e5ea1 +0x771:  test   %edx,%edx
087e5ea3 +0x773:  je     087e5edf <+0x7af>
087e5ea5 +0x775:  or     $0xffffffff,%edx
087e5ea8 +0x778:  lock xadd %edx,0x8(%eax)
087e5ead +0x77d:  test   %edx,%edx
087e5eaf +0x77f:  jg     087e5e2e <+0x6fe>
087e5eb5 +0x785:  lea    -0xa(%ebp),%edx
087e5eb8 +0x788:  mov    %edx,0x4(%esp)
087e5ebc +0x78c:  mov    %eax,(%esp)
087e5ebf +0x78f:  call   08706920 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x530>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x530
087e5ec4 +0x794:  jmp    087e5e2e <+0x6fe>
087e5ec9 +0x799:  mov    0x8(%eax),%edx
087e5ecc +0x79c:  lea    -0x1(%edx),%ecx
087e5ecf +0x79f:  mov    %ecx,0x8(%eax)
087e5ed2 +0x7a2:  jmp    087e5e61 <+0x731>
087e5ed4 +0x7a4:  mov    0x8(%eax),%edx
087e5ed7 +0x7a7:  lea    -0x1(%edx),%ecx
087e5eda +0x7aa:  mov    %ecx,0x8(%eax)
087e5edd +0x7ad:  jmp    087e5e87 <+0x757>
087e5edf +0x7af:  mov    0x8(%eax),%edx
087e5ee2 +0x7b2:  lea    -0x1(%edx),%ecx
087e5ee5 +0x7b5:  mov    %ecx,0x8(%eax)
087e5ee8 +0x7b8:  jmp    087e5ead <+0x77d>
087e5eea +0x7ba:  nop
087e5eeb +0x7bb:  nop
087e5eec +0x7bc:  nop
087e5eed +0x7bd:  nop
087e5eee +0x7be:  nop
087e5eef +0x7bf:  nop
```

## 反编译 C

```c
// TiXmlNode::InsertEndChild @ 0x87e5730

/* TiXmlNode::InsertEndChild(TiXmlNode const&) */

undefined4 __thiscall TiXmlNode::InsertEndChild(TiXmlNode *this,TiXmlNode *param_1)

{
  int iVar1;
  TiXmlNode *pTVar2;
  undefined4 uVar3;
  TiXmlDocument *pTVar4;
  
  pTVar2 = this;
  if (*(int *)(param_1 + 0x14) == 0) {
    for (; pTVar2 != (TiXmlNode *)0x0; pTVar2 = *(TiXmlNode **)(pTVar2 + 0x10)) {
      iVar1 = (**(code **)(*(int *)pTVar2 + 0x10))(pTVar2);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*(int *)pTVar2 + 0x10))(pTVar2);
        if (iVar1 == 0) {
          return 0;
        }
        goto LAB_087e579f;
      }
    }
  }
  else {
    pTVar2 = (TiXmlNode *)(**(code **)(*(int *)param_1 + 0x40))(param_1);
    if (pTVar2 != (TiXmlNode *)0x0) {
      uVar3 = LinkEndChild(this,pTVar2);
      return uVar3;
    }
  }
  return 0;
  while (this = *(TiXmlNode **)(this + 0x10), this != (TiXmlNode *)0x0) {
LAB_087e579f:
    iVar1 = (**(code **)(*(int *)this + 0x10))(this);
    if (iVar1 != 0) {
      pTVar4 = (TiXmlDocument *)(**(code **)(*(int *)this + 0x10))(this);
      goto LAB_087e57b3;
    }
  }
  pTVar4 = (TiXmlDocument *)0x0;
LAB_087e57b3:
  TiXmlDocument::SetError(pTVar4,0xf,0,0,0);
  return 0;
}
```
