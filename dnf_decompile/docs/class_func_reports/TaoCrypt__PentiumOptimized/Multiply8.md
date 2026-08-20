# Multiply8

`_ZN8TaoCrypt16PentiumOptimized9Multiply8EPjPKjS3_`

`TaoCrypt::PentiumOptimized::Multiply8(unsigned int*, unsigned int const*, unsigned int const*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::PentiumOptimized` | `0x0875b7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875b7b0  _ZN8TaoCrypt16PentiumOptimized9Multiply8EPjPKjS3_
#           TaoCrypt::PentiumOptimized::Multiply8(unsigned int*, unsigned int const*, unsigned int const*)
# range [0x0875b7b0, 0x0875bb99]
0875b7b0 +0x000:  push   %ebp
0875b7b1 +0x001:  mov    %esp,%ebp
0875b7b3 +0x003:  sub    $0x8,%esp
0875b7b6 +0x006:  mov    %esi,(%esp)
0875b7b9 +0x009:  mov    0x10(%ebp),%ecx
0875b7bc +0x00c:  mov    %edi,0x4(%esp)
0875b7c0 +0x010:  mov    0xc(%ebp),%esi
0875b7c3 +0x013:  push   %ebx
0875b7c4 +0x014:  push   %ebp
0875b7c5 +0x015:  push   0x8(%ebp)
0875b7c8 +0x018:  xor    %ebp,%ebp
0875b7ca +0x01a:  xor    %edi,%edi
0875b7cc +0x01c:  xor    %ebx,%ebx
0875b7ce +0x01e:  mov    (%ecx),%eax
0875b7d0 +0x020:  mull   (%esi)
0875b7d2 +0x022:  add    %eax,%ebp
0875b7d4 +0x024:  adc    %edx,%edi
0875b7d6 +0x026:  adc    %bh,%bl
0875b7d8 +0x028:  mov    %edi,%edx
0875b7da +0x02a:  mov    (%esp),%edi
0875b7dd +0x02d:  mov    %ebp,(%edi)
0875b7df +0x02f:  mov    %edx,%ebp
0875b7e1 +0x031:  mov    %ebx,%edi
0875b7e3 +0x033:  xor    %ebx,%ebx
0875b7e5 +0x035:  mov    (%ecx),%eax
0875b7e7 +0x037:  mull   0x4(%esi)
0875b7ea +0x03a:  add    %eax,%ebp
0875b7ec +0x03c:  adc    %edx,%edi
0875b7ee +0x03e:  adc    %bh,%bl
0875b7f0 +0x040:  mov    0x4(%ecx),%eax
0875b7f3 +0x043:  mull   (%esi)
0875b7f5 +0x045:  add    %eax,%ebp
0875b7f7 +0x047:  adc    %edx,%edi
0875b7f9 +0x049:  adc    %bh,%bl
0875b7fb +0x04b:  mov    %edi,%edx
0875b7fd +0x04d:  mov    (%esp),%edi
0875b800 +0x050:  mov    %ebp,0x4(%edi)
0875b803 +0x053:  mov    %edx,%ebp
0875b805 +0x055:  mov    %ebx,%edi
0875b807 +0x057:  xor    %ebx,%ebx
0875b809 +0x059:  mov    (%ecx),%eax
0875b80b +0x05b:  mull   0x8(%esi)
0875b80e +0x05e:  add    %eax,%ebp
0875b810 +0x060:  adc    %edx,%edi
0875b812 +0x062:  adc    %bh,%bl
0875b814 +0x064:  mov    0x4(%ecx),%eax
0875b817 +0x067:  mull   0x4(%esi)
0875b81a +0x06a:  add    %eax,%ebp
0875b81c +0x06c:  adc    %edx,%edi
0875b81e +0x06e:  adc    %bh,%bl
0875b820 +0x070:  mov    0x8(%ecx),%eax
0875b823 +0x073:  mull   (%esi)
0875b825 +0x075:  add    %eax,%ebp
0875b827 +0x077:  adc    %edx,%edi
0875b829 +0x079:  adc    %bh,%bl
0875b82b +0x07b:  mov    %edi,%edx
0875b82d +0x07d:  mov    (%esp),%edi
0875b830 +0x080:  mov    %ebp,0x8(%edi)
0875b833 +0x083:  mov    %edx,%ebp
0875b835 +0x085:  mov    %ebx,%edi
0875b837 +0x087:  xor    %ebx,%ebx
0875b839 +0x089:  mov    (%ecx),%eax
0875b83b +0x08b:  mull   0xc(%esi)
0875b83e +0x08e:  add    %eax,%ebp
0875b840 +0x090:  adc    %edx,%edi
0875b842 +0x092:  adc    %bh,%bl
0875b844 +0x094:  mov    0x4(%ecx),%eax
0875b847 +0x097:  mull   0x8(%esi)
0875b84a +0x09a:  add    %eax,%ebp
0875b84c +0x09c:  adc    %edx,%edi
0875b84e +0x09e:  adc    %bh,%bl
0875b850 +0x0a0:  mov    0x8(%ecx),%eax
0875b853 +0x0a3:  mull   0x4(%esi)
0875b856 +0x0a6:  add    %eax,%ebp
0875b858 +0x0a8:  adc    %edx,%edi
0875b85a +0x0aa:  adc    %bh,%bl
0875b85c +0x0ac:  mov    0xc(%ecx),%eax
0875b85f +0x0af:  mull   (%esi)
0875b861 +0x0b1:  add    %eax,%ebp
0875b863 +0x0b3:  adc    %edx,%edi
0875b865 +0x0b5:  adc    %bh,%bl
0875b867 +0x0b7:  mov    %edi,%edx
0875b869 +0x0b9:  mov    (%esp),%edi
0875b86c +0x0bc:  mov    %ebp,0xc(%edi)
0875b86f +0x0bf:  mov    %edx,%ebp
0875b871 +0x0c1:  mov    %ebx,%edi
0875b873 +0x0c3:  xor    %ebx,%ebx
0875b875 +0x0c5:  mov    (%ecx),%eax
0875b877 +0x0c7:  mull   0x10(%esi)
0875b87a +0x0ca:  add    %eax,%ebp
0875b87c +0x0cc:  adc    %edx,%edi
0875b87e +0x0ce:  adc    %bh,%bl
0875b880 +0x0d0:  mov    0x4(%ecx),%eax
0875b883 +0x0d3:  mull   0xc(%esi)
0875b886 +0x0d6:  add    %eax,%ebp
0875b888 +0x0d8:  adc    %edx,%edi
0875b88a +0x0da:  adc    %bh,%bl
0875b88c +0x0dc:  mov    0x8(%ecx),%eax
0875b88f +0x0df:  mull   0x8(%esi)
0875b892 +0x0e2:  add    %eax,%ebp
0875b894 +0x0e4:  adc    %edx,%edi
0875b896 +0x0e6:  adc    %bh,%bl
0875b898 +0x0e8:  mov    0xc(%ecx),%eax
0875b89b +0x0eb:  mull   0x4(%esi)
0875b89e +0x0ee:  add    %eax,%ebp
0875b8a0 +0x0f0:  adc    %edx,%edi
0875b8a2 +0x0f2:  adc    %bh,%bl
0875b8a4 +0x0f4:  mov    0x10(%ecx),%eax
0875b8a7 +0x0f7:  mull   (%esi)
0875b8a9 +0x0f9:  add    %eax,%ebp
0875b8ab +0x0fb:  adc    %edx,%edi
0875b8ad +0x0fd:  adc    %bh,%bl
0875b8af +0x0ff:  mov    %edi,%edx
0875b8b1 +0x101:  mov    (%esp),%edi
0875b8b4 +0x104:  mov    %ebp,0x10(%edi)
0875b8b7 +0x107:  mov    %edx,%ebp
0875b8b9 +0x109:  mov    %ebx,%edi
0875b8bb +0x10b:  xor    %ebx,%ebx
0875b8bd +0x10d:  mov    (%ecx),%eax
0875b8bf +0x10f:  mull   0x14(%esi)
0875b8c2 +0x112:  add    %eax,%ebp
0875b8c4 +0x114:  adc    %edx,%edi
0875b8c6 +0x116:  adc    %bh,%bl
0875b8c8 +0x118:  mov    0x4(%ecx),%eax
0875b8cb +0x11b:  mull   0x10(%esi)
0875b8ce +0x11e:  add    %eax,%ebp
0875b8d0 +0x120:  adc    %edx,%edi
0875b8d2 +0x122:  adc    %bh,%bl
0875b8d4 +0x124:  mov    0x8(%ecx),%eax
0875b8d7 +0x127:  mull   0xc(%esi)
0875b8da +0x12a:  add    %eax,%ebp
0875b8dc +0x12c:  adc    %edx,%edi
0875b8de +0x12e:  adc    %bh,%bl
0875b8e0 +0x130:  mov    0xc(%ecx),%eax
0875b8e3 +0x133:  mull   0x8(%esi)
0875b8e6 +0x136:  add    %eax,%ebp
0875b8e8 +0x138:  adc    %edx,%edi
0875b8ea +0x13a:  adc    %bh,%bl
0875b8ec +0x13c:  mov    0x10(%ecx),%eax
0875b8ef +0x13f:  mull   0x4(%esi)
0875b8f2 +0x142:  add    %eax,%ebp
0875b8f4 +0x144:  adc    %edx,%edi
0875b8f6 +0x146:  adc    %bh,%bl
0875b8f8 +0x148:  mov    0x14(%ecx),%eax
0875b8fb +0x14b:  mull   (%esi)
0875b8fd +0x14d:  add    %eax,%ebp
0875b8ff +0x14f:  adc    %edx,%edi
0875b901 +0x151:  adc    %bh,%bl
0875b903 +0x153:  mov    %edi,%edx
0875b905 +0x155:  mov    (%esp),%edi
0875b908 +0x158:  mov    %ebp,0x14(%edi)
0875b90b +0x15b:  mov    %edx,%ebp
0875b90d +0x15d:  mov    %ebx,%edi
0875b90f +0x15f:  xor    %ebx,%ebx
0875b911 +0x161:  mov    (%ecx),%eax
0875b913 +0x163:  mull   0x18(%esi)
0875b916 +0x166:  add    %eax,%ebp
0875b918 +0x168:  adc    %edx,%edi
0875b91a +0x16a:  adc    %bh,%bl
0875b91c +0x16c:  mov    0x4(%ecx),%eax
0875b91f +0x16f:  mull   0x14(%esi)
0875b922 +0x172:  add    %eax,%ebp
0875b924 +0x174:  adc    %edx,%edi
0875b926 +0x176:  adc    %bh,%bl
0875b928 +0x178:  mov    0x8(%ecx),%eax
0875b92b +0x17b:  mull   0x10(%esi)
0875b92e +0x17e:  add    %eax,%ebp
0875b930 +0x180:  adc    %edx,%edi
0875b932 +0x182:  adc    %bh,%bl
0875b934 +0x184:  mov    0xc(%ecx),%eax
0875b937 +0x187:  mull   0xc(%esi)
0875b93a +0x18a:  add    %eax,%ebp
0875b93c +0x18c:  adc    %edx,%edi
0875b93e +0x18e:  adc    %bh,%bl
0875b940 +0x190:  mov    0x10(%ecx),%eax
0875b943 +0x193:  mull   0x8(%esi)
0875b946 +0x196:  add    %eax,%ebp
0875b948 +0x198:  adc    %edx,%edi
0875b94a +0x19a:  adc    %bh,%bl
0875b94c +0x19c:  mov    0x14(%ecx),%eax
0875b94f +0x19f:  mull   0x4(%esi)
0875b952 +0x1a2:  add    %eax,%ebp
0875b954 +0x1a4:  adc    %edx,%edi
0875b956 +0x1a6:  adc    %bh,%bl
0875b958 +0x1a8:  mov    0x18(%ecx),%eax
0875b95b +0x1ab:  mull   (%esi)
0875b95d +0x1ad:  add    %eax,%ebp
0875b95f +0x1af:  adc    %edx,%edi
0875b961 +0x1b1:  adc    %bh,%bl
0875b963 +0x1b3:  mov    %edi,%edx
0875b965 +0x1b5:  mov    (%esp),%edi
0875b968 +0x1b8:  mov    %ebp,0x18(%edi)
0875b96b +0x1bb:  mov    %edx,%ebp
0875b96d +0x1bd:  mov    %ebx,%edi
0875b96f +0x1bf:  xor    %ebx,%ebx
0875b971 +0x1c1:  mov    (%ecx),%eax
0875b973 +0x1c3:  mull   0x1c(%esi)
0875b976 +0x1c6:  add    %eax,%ebp
0875b978 +0x1c8:  adc    %edx,%edi
0875b97a +0x1ca:  adc    %bh,%bl
0875b97c +0x1cc:  mov    0x4(%ecx),%eax
0875b97f +0x1cf:  mull   0x18(%esi)
0875b982 +0x1d2:  add    %eax,%ebp
0875b984 +0x1d4:  adc    %edx,%edi
0875b986 +0x1d6:  adc    %bh,%bl
0875b988 +0x1d8:  mov    0x8(%ecx),%eax
0875b98b +0x1db:  mull   0x14(%esi)
0875b98e +0x1de:  add    %eax,%ebp
0875b990 +0x1e0:  adc    %edx,%edi
0875b992 +0x1e2:  adc    %bh,%bl
0875b994 +0x1e4:  mov    0xc(%ecx),%eax
0875b997 +0x1e7:  mull   0x10(%esi)
0875b99a +0x1ea:  add    %eax,%ebp
0875b99c +0x1ec:  adc    %edx,%edi
0875b99e +0x1ee:  adc    %bh,%bl
0875b9a0 +0x1f0:  mov    0x10(%ecx),%eax
0875b9a3 +0x1f3:  mull   0xc(%esi)
0875b9a6 +0x1f6:  add    %eax,%ebp
0875b9a8 +0x1f8:  adc    %edx,%edi
0875b9aa +0x1fa:  adc    %bh,%bl
0875b9ac +0x1fc:  mov    0x14(%ecx),%eax
0875b9af +0x1ff:  mull   0x8(%esi)
0875b9b2 +0x202:  add    %eax,%ebp
0875b9b4 +0x204:  adc    %edx,%edi
0875b9b6 +0x206:  adc    %bh,%bl
0875b9b8 +0x208:  mov    0x18(%ecx),%eax
0875b9bb +0x20b:  mull   0x4(%esi)
0875b9be +0x20e:  add    %eax,%ebp
0875b9c0 +0x210:  adc    %edx,%edi
0875b9c2 +0x212:  adc    %bh,%bl
0875b9c4 +0x214:  mov    0x1c(%ecx),%eax
0875b9c7 +0x217:  mull   (%esi)
0875b9c9 +0x219:  add    %eax,%ebp
0875b9cb +0x21b:  adc    %edx,%edi
0875b9cd +0x21d:  adc    %bh,%bl
0875b9cf +0x21f:  mov    %edi,%edx
0875b9d1 +0x221:  mov    (%esp),%edi
0875b9d4 +0x224:  mov    %ebp,0x1c(%edi)
0875b9d7 +0x227:  mov    %edx,%ebp
0875b9d9 +0x229:  mov    %ebx,%edi
0875b9db +0x22b:  xor    %ebx,%ebx
0875b9dd +0x22d:  mov    0x4(%ecx),%eax
0875b9e0 +0x230:  mull   0x1c(%esi)
0875b9e3 +0x233:  add    %eax,%ebp
0875b9e5 +0x235:  adc    %edx,%edi
0875b9e7 +0x237:  adc    %bh,%bl
0875b9e9 +0x239:  mov    0x8(%ecx),%eax
0875b9ec +0x23c:  mull   0x18(%esi)
0875b9ef +0x23f:  add    %eax,%ebp
0875b9f1 +0x241:  adc    %edx,%edi
0875b9f3 +0x243:  adc    %bh,%bl
0875b9f5 +0x245:  mov    0xc(%ecx),%eax
0875b9f8 +0x248:  mull   0x14(%esi)
0875b9fb +0x24b:  add    %eax,%ebp
0875b9fd +0x24d:  adc    %edx,%edi
0875b9ff +0x24f:  adc    %bh,%bl
0875ba01 +0x251:  mov    0x10(%ecx),%eax
0875ba04 +0x254:  mull   0x10(%esi)
0875ba07 +0x257:  add    %eax,%ebp
0875ba09 +0x259:  adc    %edx,%edi
0875ba0b +0x25b:  adc    %bh,%bl
0875ba0d +0x25d:  mov    0x14(%ecx),%eax
0875ba10 +0x260:  mull   0xc(%esi)
0875ba13 +0x263:  add    %eax,%ebp
0875ba15 +0x265:  adc    %edx,%edi
0875ba17 +0x267:  adc    %bh,%bl
0875ba19 +0x269:  mov    0x18(%ecx),%eax
0875ba1c +0x26c:  mull   0x8(%esi)
0875ba1f +0x26f:  add    %eax,%ebp
0875ba21 +0x271:  adc    %edx,%edi
0875ba23 +0x273:  adc    %bh,%bl
0875ba25 +0x275:  mov    0x1c(%ecx),%eax
0875ba28 +0x278:  mull   0x4(%esi)
0875ba2b +0x27b:  add    %eax,%ebp
0875ba2d +0x27d:  adc    %edx,%edi
0875ba2f +0x27f:  adc    %bh,%bl
0875ba31 +0x281:  mov    %edi,%edx
0875ba33 +0x283:  mov    (%esp),%edi
0875ba36 +0x286:  mov    %ebp,0x20(%edi)
0875ba39 +0x289:  mov    %edx,%ebp
0875ba3b +0x28b:  mov    %ebx,%edi
0875ba3d +0x28d:  xor    %ebx,%ebx
0875ba3f +0x28f:  mov    0x8(%ecx),%eax
0875ba42 +0x292:  mull   0x1c(%esi)
0875ba45 +0x295:  add    %eax,%ebp
0875ba47 +0x297:  adc    %edx,%edi
0875ba49 +0x299:  adc    %bh,%bl
0875ba4b +0x29b:  mov    0xc(%ecx),%eax
0875ba4e +0x29e:  mull   0x18(%esi)
0875ba51 +0x2a1:  add    %eax,%ebp
0875ba53 +0x2a3:  adc    %edx,%edi
0875ba55 +0x2a5:  adc    %bh,%bl
0875ba57 +0x2a7:  mov    0x10(%ecx),%eax
0875ba5a +0x2aa:  mull   0x14(%esi)
0875ba5d +0x2ad:  add    %eax,%ebp
0875ba5f +0x2af:  adc    %edx,%edi
0875ba61 +0x2b1:  adc    %bh,%bl
0875ba63 +0x2b3:  mov    0x14(%ecx),%eax
0875ba66 +0x2b6:  mull   0x10(%esi)
0875ba69 +0x2b9:  add    %eax,%ebp
0875ba6b +0x2bb:  adc    %edx,%edi
0875ba6d +0x2bd:  adc    %bh,%bl
0875ba6f +0x2bf:  mov    0x18(%ecx),%eax
0875ba72 +0x2c2:  mull   0xc(%esi)
0875ba75 +0x2c5:  add    %eax,%ebp
0875ba77 +0x2c7:  adc    %edx,%edi
0875ba79 +0x2c9:  adc    %bh,%bl
0875ba7b +0x2cb:  mov    0x1c(%ecx),%eax
0875ba7e +0x2ce:  mull   0x8(%esi)
0875ba81 +0x2d1:  add    %eax,%ebp
0875ba83 +0x2d3:  adc    %edx,%edi
0875ba85 +0x2d5:  adc    %bh,%bl
0875ba87 +0x2d7:  mov    %edi,%edx
0875ba89 +0x2d9:  mov    (%esp),%edi
0875ba8c +0x2dc:  mov    %ebp,0x24(%edi)
0875ba8f +0x2df:  mov    %edx,%ebp
0875ba91 +0x2e1:  mov    %ebx,%edi
0875ba93 +0x2e3:  xor    %ebx,%ebx
0875ba95 +0x2e5:  mov    0xc(%ecx),%eax
0875ba98 +0x2e8:  mull   0x1c(%esi)
0875ba9b +0x2eb:  add    %eax,%ebp
0875ba9d +0x2ed:  adc    %edx,%edi
0875ba9f +0x2ef:  adc    %bh,%bl
0875baa1 +0x2f1:  mov    0x10(%ecx),%eax
0875baa4 +0x2f4:  mull   0x18(%esi)
0875baa7 +0x2f7:  add    %eax,%ebp
0875baa9 +0x2f9:  adc    %edx,%edi
0875baab +0x2fb:  adc    %bh,%bl
0875baad +0x2fd:  mov    0x14(%ecx),%eax
0875bab0 +0x300:  mull   0x14(%esi)
0875bab3 +0x303:  add    %eax,%ebp
0875bab5 +0x305:  adc    %edx,%edi
0875bab7 +0x307:  adc    %bh,%bl
0875bab9 +0x309:  mov    0x18(%ecx),%eax
0875babc +0x30c:  mull   0x10(%esi)
0875babf +0x30f:  add    %eax,%ebp
0875bac1 +0x311:  adc    %edx,%edi
0875bac3 +0x313:  adc    %bh,%bl
0875bac5 +0x315:  mov    0x1c(%ecx),%eax
0875bac8 +0x318:  mull   0xc(%esi)
0875bacb +0x31b:  add    %eax,%ebp
0875bacd +0x31d:  adc    %edx,%edi
0875bacf +0x31f:  adc    %bh,%bl
0875bad1 +0x321:  mov    %edi,%edx
0875bad3 +0x323:  mov    (%esp),%edi
0875bad6 +0x326:  mov    %ebp,0x28(%edi)
0875bad9 +0x329:  mov    %edx,%ebp
0875badb +0x32b:  mov    %ebx,%edi
0875badd +0x32d:  xor    %ebx,%ebx
0875badf +0x32f:  mov    0x10(%ecx),%eax
0875bae2 +0x332:  mull   0x1c(%esi)
0875bae5 +0x335:  add    %eax,%ebp
0875bae7 +0x337:  adc    %edx,%edi
0875bae9 +0x339:  adc    %bh,%bl
0875baeb +0x33b:  mov    0x14(%ecx),%eax
0875baee +0x33e:  mull   0x18(%esi)
0875baf1 +0x341:  add    %eax,%ebp
0875baf3 +0x343:  adc    %edx,%edi
0875baf5 +0x345:  adc    %bh,%bl
0875baf7 +0x347:  mov    0x18(%ecx),%eax
0875bafa +0x34a:  mull   0x14(%esi)
0875bafd +0x34d:  add    %eax,%ebp
0875baff +0x34f:  adc    %edx,%edi
0875bb01 +0x351:  adc    %bh,%bl
0875bb03 +0x353:  mov    0x1c(%ecx),%eax
0875bb06 +0x356:  mull   0x10(%esi)
0875bb09 +0x359:  add    %eax,%ebp
0875bb0b +0x35b:  adc    %edx,%edi
0875bb0d +0x35d:  adc    %bh,%bl
0875bb0f +0x35f:  mov    %edi,%edx
0875bb11 +0x361:  mov    (%esp),%edi
0875bb14 +0x364:  mov    %ebp,0x2c(%edi)
0875bb17 +0x367:  mov    %edx,%ebp
0875bb19 +0x369:  mov    %ebx,%edi
0875bb1b +0x36b:  xor    %ebx,%ebx
0875bb1d +0x36d:  mov    0x14(%ecx),%eax
0875bb20 +0x370:  mull   0x1c(%esi)
0875bb23 +0x373:  add    %eax,%ebp
0875bb25 +0x375:  adc    %edx,%edi
0875bb27 +0x377:  adc    %bh,%bl
0875bb29 +0x379:  mov    0x18(%ecx),%eax
0875bb2c +0x37c:  mull   0x18(%esi)
0875bb2f +0x37f:  add    %eax,%ebp
0875bb31 +0x381:  adc    %edx,%edi
0875bb33 +0x383:  adc    %bh,%bl
0875bb35 +0x385:  mov    0x1c(%ecx),%eax
0875bb38 +0x388:  mull   0x14(%esi)
0875bb3b +0x38b:  add    %eax,%ebp
0875bb3d +0x38d:  adc    %edx,%edi
0875bb3f +0x38f:  adc    %bh,%bl
0875bb41 +0x391:  mov    %edi,%edx
0875bb43 +0x393:  mov    (%esp),%edi
0875bb46 +0x396:  mov    %ebp,0x30(%edi)
0875bb49 +0x399:  mov    %edx,%ebp
0875bb4b +0x39b:  mov    %ebx,%edi
0875bb4d +0x39d:  xor    %ebx,%ebx
0875bb4f +0x39f:  mov    0x18(%ecx),%eax
0875bb52 +0x3a2:  mull   0x1c(%esi)
0875bb55 +0x3a5:  add    %eax,%ebp
0875bb57 +0x3a7:  adc    %edx,%edi
0875bb59 +0x3a9:  adc    %bh,%bl
0875bb5b +0x3ab:  mov    0x1c(%ecx),%eax
0875bb5e +0x3ae:  mull   0x18(%esi)
0875bb61 +0x3b1:  add    %eax,%ebp
0875bb63 +0x3b3:  adc    %edx,%edi
0875bb65 +0x3b5:  adc    %bh,%bl
0875bb67 +0x3b7:  mov    %edi,%edx
0875bb69 +0x3b9:  mov    (%esp),%edi
0875bb6c +0x3bc:  mov    %ebp,0x34(%edi)
0875bb6f +0x3bf:  mov    %edx,%ebp
0875bb71 +0x3c1:  mov    %ebx,%edi
0875bb73 +0x3c3:  xor    %ebx,%ebx
0875bb75 +0x3c5:  mov    0x1c(%ecx),%eax
0875bb78 +0x3c8:  mull   0x1c(%esi)
0875bb7b +0x3cb:  add    %eax,%ebp
0875bb7d +0x3cd:  adc    %edi,%edx
0875bb7f +0x3cf:  mov    (%esp),%edi
0875bb82 +0x3d2:  mov    %ebp,0x38(%edi)
0875bb85 +0x3d5:  mov    %edx,0x3c(%edi)
0875bb88 +0x3d8:  add    $0x4,%esp
0875bb8b +0x3db:  pop    %ebp
0875bb8c +0x3dc:  pop    %ebx
0875bb8d +0x3dd:  mov    (%esp),%esi
0875bb90 +0x3e0:  mov    0x4(%esp),%edi
0875bb94 +0x3e4:  mov    %ebp,%esp
0875bb96 +0x3e6:  pop    %ebp
0875bb97 +0x3e7:  ret
0875bb98 +0x3e8:  nop
0875bb99 +0x3e9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::PentiumOptimized::Multiply8 @ 0x875b7b0

/* TaoCrypt::PentiumOptimized::Multiply8(unsigned int*, unsigned int const*, unsigned int const*) */

void TaoCrypt::PentiumOptimized::Multiply8(uint *param_1,uint *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  
  uVar6 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2 >> 0x20);
  *param_1 = (uint)((ulonglong)*param_3 * (ulonglong)*param_2);
  lVar1 = (ulonglong)*param_3 * (ulonglong)param_2[1];
  lVar2 = lVar1 + (ulonglong)uVar6;
  uVar11 = (uint)lVar2;
  uVar13 = (uint)((ulonglong)lVar2 >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[1] * (ulonglong)*param_2);
  uVar4 = (uint)CARRY4(uVar11,uVar3);
  uVar5 = uVar13 + uVar7;
  uVar14 = uVar5 + uVar4;
  uVar10 = (uint)(byte)(CARRY4((uint)((ulonglong)lVar1 >> 0x20),(uint)CARRY4(uVar6,(uint)lVar1)) +
                       (CARRY4(uVar13,uVar7) || CARRY4(uVar5,uVar4)));
  param_1[1] = uVar11 + uVar3;
  uVar8 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[2]);
  uVar3 = uVar14 + uVar4;
  uVar4 = (uint)CARRY4(uVar14,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[1]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2 >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[2] * (ulonglong)*param_2);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar16 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                        (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                       (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[2] = uVar12 + uVar13;
  uVar9 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[3]);
  uVar3 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[2]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[1]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2 >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[3] * (ulonglong)*param_2);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar19 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[3] = uVar17 + uVar14;
  uVar12 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[4]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar11 = uVar19 + uVar12;
  uVar21 = uVar11 + uVar4;
  uVar15 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[3]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar13 = uVar21 + uVar15;
  uVar22 = uVar13 + uVar5;
  uVar16 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[2]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar8 = uVar22 + uVar16;
  uVar23 = uVar8 + uVar3;
  uVar17 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[1]);
  uVar20 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar14 = uVar23 + uVar17;
  uVar24 = uVar14 + uVar6;
  uVar18 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2 >> 0x20);
  uVar10 = (uint)((ulonglong)param_3[4] * (ulonglong)*param_2);
  uVar7 = (uint)CARRY4(uVar20,uVar10);
  uVar9 = uVar24 + uVar18;
  uVar25 = uVar9 + uVar7;
  uVar22 = (uint)(byte)((CARRY4(uVar19,uVar12) || CARRY4(uVar11,uVar4)) +
                        (CARRY4(uVar21,uVar15) || CARRY4(uVar13,uVar5)) +
                        (CARRY4(uVar22,uVar16) || CARRY4(uVar8,uVar3)) +
                        (CARRY4(uVar23,uVar17) || CARRY4(uVar14,uVar6)) +
                       (CARRY4(uVar24,uVar18) || CARRY4(uVar9,uVar7)));
  param_1[4] = uVar20 + uVar10;
  uVar16 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[5]);
  uVar3 = uVar25 + uVar4;
  uVar4 = (uint)CARRY4(uVar25,uVar4);
  uVar13 = uVar22 + uVar16;
  uVar24 = uVar13 + uVar4;
  uVar17 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[4]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar8 = uVar24 + uVar17;
  uVar25 = uVar8 + uVar5;
  uVar18 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[3]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar14 = uVar25 + uVar18;
  uVar26 = uVar14 + uVar3;
  uVar19 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[2]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar9 = uVar26 + uVar19;
  uVar27 = uVar9 + uVar6;
  uVar20 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[1]);
  uVar23 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar10 = uVar27 + uVar20;
  uVar28 = uVar10 + uVar7;
  uVar21 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2 >> 0x20);
  uVar15 = (uint)((ulonglong)param_3[5] * (ulonglong)*param_2);
  uVar11 = (uint)CARRY4(uVar23,uVar15);
  uVar12 = uVar28 + uVar21;
  uVar29 = uVar12 + uVar11;
  uVar25 = (uint)(byte)((CARRY4(uVar22,uVar16) || CARRY4(uVar13,uVar4)) +
                        (CARRY4(uVar24,uVar17) || CARRY4(uVar8,uVar5)) +
                        (CARRY4(uVar25,uVar18) || CARRY4(uVar14,uVar3)) +
                        (CARRY4(uVar26,uVar19) || CARRY4(uVar9,uVar6)) +
                        (CARRY4(uVar27,uVar20) || CARRY4(uVar10,uVar7)) +
                       (CARRY4(uVar28,uVar21) || CARRY4(uVar12,uVar11)));
  param_1[5] = uVar23 + uVar15;
  uVar18 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[6] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[6]);
  uVar3 = uVar29 + uVar4;
  uVar4 = (uint)CARRY4(uVar29,uVar4);
  uVar8 = uVar25 + uVar18;
  uVar27 = uVar8 + uVar4;
  uVar19 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[5] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[5]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar14 = uVar27 + uVar19;
  uVar28 = uVar14 + uVar5;
  uVar20 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[4] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[4]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar9 = uVar28 + uVar20;
  uVar29 = uVar9 + uVar3;
  uVar21 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[3] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[3]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar10 = uVar29 + uVar21;
  uVar30 = uVar10 + uVar6;
  uVar22 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[2] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[2]);
  uVar13 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar12 = uVar30 + uVar22;
  uVar31 = uVar12 + uVar7;
  uVar23 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[1] >> 0x20);
  uVar11 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[1]);
  uVar26 = uVar13 + uVar11;
  uVar11 = (uint)CARRY4(uVar13,uVar11);
  uVar15 = uVar31 + uVar23;
  uVar32 = uVar15 + uVar11;
  uVar24 = (uint)((ulonglong)param_3[6] * (ulonglong)*param_2 >> 0x20);
  uVar17 = (uint)((ulonglong)param_3[6] * (ulonglong)*param_2);
  uVar13 = (uint)CARRY4(uVar26,uVar17);
  uVar16 = uVar32 + uVar24;
  uVar33 = uVar16 + uVar13;
  uVar28 = (uint)(byte)((CARRY4(uVar25,uVar18) || CARRY4(uVar8,uVar4)) +
                        (CARRY4(uVar27,uVar19) || CARRY4(uVar14,uVar5)) +
                        (CARRY4(uVar28,uVar20) || CARRY4(uVar9,uVar3)) +
                        (CARRY4(uVar29,uVar21) || CARRY4(uVar10,uVar6)) +
                        (CARRY4(uVar30,uVar22) || CARRY4(uVar12,uVar7)) +
                        (CARRY4(uVar31,uVar23) || CARRY4(uVar15,uVar11)) +
                       (CARRY4(uVar32,uVar24) || CARRY4(uVar16,uVar13)));
  param_1[6] = uVar26 + uVar17;
  uVar20 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)*param_3 * (ulonglong)param_2[7]);
  uVar3 = uVar33 + uVar4;
  uVar4 = (uint)CARRY4(uVar33,uVar4);
  uVar14 = uVar28 + uVar20;
  uVar30 = uVar14 + uVar4;
  uVar21 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar9 = uVar30 + uVar21;
  uVar31 = uVar9 + uVar5;
  uVar22 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar10 = uVar31 + uVar22;
  uVar32 = uVar10 + uVar3;
  uVar23 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[4]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar12 = uVar32 + uVar23;
  uVar33 = uVar12 + uVar6;
  uVar24 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[3] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[3]);
  uVar13 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar15 = uVar33 + uVar24;
  uVar34 = uVar15 + uVar7;
  uVar25 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[2] >> 0x20);
  uVar11 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[2]);
  uVar8 = uVar13 + uVar11;
  uVar11 = (uint)CARRY4(uVar13,uVar11);
  uVar16 = uVar34 + uVar25;
  uVar35 = uVar16 + uVar11;
  uVar26 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[1] >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[1]);
  uVar29 = uVar8 + uVar13;
  uVar13 = (uint)CARRY4(uVar8,uVar13);
  uVar17 = uVar35 + uVar26;
  uVar36 = uVar17 + uVar13;
  uVar27 = (uint)((ulonglong)param_3[7] * (ulonglong)*param_2 >> 0x20);
  uVar19 = (uint)((ulonglong)param_3[7] * (ulonglong)*param_2);
  uVar8 = (uint)CARRY4(uVar29,uVar19);
  uVar18 = uVar36 + uVar27;
  uVar37 = uVar18 + uVar8;
  uVar25 = (uint)(byte)((CARRY4(uVar28,uVar20) || CARRY4(uVar14,uVar4)) +
                        (CARRY4(uVar30,uVar21) || CARRY4(uVar9,uVar5)) +
                        (CARRY4(uVar31,uVar22) || CARRY4(uVar10,uVar3)) +
                        (CARRY4(uVar32,uVar23) || CARRY4(uVar12,uVar6)) +
                        (CARRY4(uVar33,uVar24) || CARRY4(uVar15,uVar7)) +
                        (CARRY4(uVar34,uVar25) || CARRY4(uVar16,uVar11)) +
                        (CARRY4(uVar35,uVar26) || CARRY4(uVar17,uVar13)) +
                       (CARRY4(uVar36,uVar27) || CARRY4(uVar18,uVar8)));
  param_1[7] = uVar29 + uVar19;
  uVar18 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[1] * (ulonglong)param_2[7]);
  uVar3 = uVar37 + uVar4;
  uVar4 = (uint)CARRY4(uVar37,uVar4);
  uVar8 = uVar25 + uVar18;
  uVar27 = uVar8 + uVar4;
  uVar19 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar14 = uVar27 + uVar19;
  uVar28 = uVar14 + uVar5;
  uVar20 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar9 = uVar28 + uVar20;
  uVar29 = uVar9 + uVar3;
  uVar21 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[4]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar10 = uVar29 + uVar21;
  uVar30 = uVar10 + uVar6;
  uVar22 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[3] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[3]);
  uVar13 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar12 = uVar30 + uVar22;
  uVar31 = uVar12 + uVar7;
  uVar23 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[2] >> 0x20);
  uVar11 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[2]);
  uVar26 = uVar13 + uVar11;
  uVar11 = (uint)CARRY4(uVar13,uVar11);
  uVar15 = uVar31 + uVar23;
  uVar32 = uVar15 + uVar11;
  uVar24 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[1] >> 0x20);
  uVar17 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[1]);
  uVar13 = (uint)CARRY4(uVar26,uVar17);
  uVar16 = uVar32 + uVar24;
  uVar33 = uVar16 + uVar13;
  uVar22 = (uint)(byte)((CARRY4(uVar25,uVar18) || CARRY4(uVar8,uVar4)) +
                        (CARRY4(uVar27,uVar19) || CARRY4(uVar14,uVar5)) +
                        (CARRY4(uVar28,uVar20) || CARRY4(uVar9,uVar3)) +
                        (CARRY4(uVar29,uVar21) || CARRY4(uVar10,uVar6)) +
                        (CARRY4(uVar30,uVar22) || CARRY4(uVar12,uVar7)) +
                        (CARRY4(uVar31,uVar23) || CARRY4(uVar15,uVar11)) +
                       (CARRY4(uVar32,uVar24) || CARRY4(uVar16,uVar13)));
  param_1[8] = uVar26 + uVar17;
  uVar16 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[2] * (ulonglong)param_2[7]);
  uVar3 = uVar33 + uVar4;
  uVar4 = (uint)CARRY4(uVar33,uVar4);
  uVar13 = uVar22 + uVar16;
  uVar24 = uVar13 + uVar4;
  uVar17 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar8 = uVar24 + uVar17;
  uVar25 = uVar8 + uVar5;
  uVar18 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar14 = uVar25 + uVar18;
  uVar26 = uVar14 + uVar3;
  uVar19 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[4]);
  uVar11 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar9 = uVar26 + uVar19;
  uVar27 = uVar9 + uVar6;
  uVar20 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[3] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[3]);
  uVar23 = uVar11 + uVar7;
  uVar7 = (uint)CARRY4(uVar11,uVar7);
  uVar10 = uVar27 + uVar20;
  uVar28 = uVar10 + uVar7;
  uVar21 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[2] >> 0x20);
  uVar15 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[2]);
  uVar11 = (uint)CARRY4(uVar23,uVar15);
  uVar12 = uVar28 + uVar21;
  uVar29 = uVar12 + uVar11;
  uVar19 = (uint)(byte)((CARRY4(uVar22,uVar16) || CARRY4(uVar13,uVar4)) +
                        (CARRY4(uVar24,uVar17) || CARRY4(uVar8,uVar5)) +
                        (CARRY4(uVar25,uVar18) || CARRY4(uVar14,uVar3)) +
                        (CARRY4(uVar26,uVar19) || CARRY4(uVar9,uVar6)) +
                        (CARRY4(uVar27,uVar20) || CARRY4(uVar10,uVar7)) +
                       (CARRY4(uVar28,uVar21) || CARRY4(uVar12,uVar11)));
  param_1[9] = uVar23 + uVar15;
  uVar12 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[3] * (ulonglong)param_2[7]);
  uVar3 = uVar29 + uVar4;
  uVar4 = (uint)CARRY4(uVar29,uVar4);
  uVar11 = uVar19 + uVar12;
  uVar21 = uVar11 + uVar4;
  uVar15 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar13 = uVar21 + uVar15;
  uVar22 = uVar13 + uVar5;
  uVar16 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[5]);
  uVar7 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar8 = uVar22 + uVar16;
  uVar23 = uVar8 + uVar3;
  uVar17 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[4] >> 0x20);
  uVar6 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[4]);
  uVar20 = uVar7 + uVar6;
  uVar6 = (uint)CARRY4(uVar7,uVar6);
  uVar14 = uVar23 + uVar17;
  uVar24 = uVar14 + uVar6;
  uVar18 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[3] >> 0x20);
  uVar10 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[3]);
  uVar7 = (uint)CARRY4(uVar20,uVar10);
  uVar9 = uVar24 + uVar18;
  uVar25 = uVar9 + uVar7;
  uVar16 = (uint)(byte)((CARRY4(uVar19,uVar12) || CARRY4(uVar11,uVar4)) +
                        (CARRY4(uVar21,uVar15) || CARRY4(uVar13,uVar5)) +
                        (CARRY4(uVar22,uVar16) || CARRY4(uVar8,uVar3)) +
                        (CARRY4(uVar23,uVar17) || CARRY4(uVar14,uVar6)) +
                       (CARRY4(uVar24,uVar18) || CARRY4(uVar9,uVar7)));
  param_1[10] = uVar20 + uVar10;
  uVar9 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[4] * (ulonglong)param_2[7]);
  uVar3 = uVar25 + uVar4;
  uVar4 = (uint)CARRY4(uVar25,uVar4);
  uVar7 = uVar16 + uVar9;
  uVar18 = uVar7 + uVar4;
  uVar10 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[6]);
  uVar6 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar11 = uVar18 + uVar10;
  uVar19 = uVar11 + uVar5;
  uVar12 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[5] >> 0x20);
  uVar3 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[5]);
  uVar17 = uVar6 + uVar3;
  uVar3 = (uint)CARRY4(uVar6,uVar3);
  uVar13 = uVar19 + uVar12;
  uVar20 = uVar13 + uVar3;
  uVar15 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[4] >> 0x20);
  uVar14 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[4]);
  uVar6 = (uint)CARRY4(uVar17,uVar14);
  uVar8 = uVar20 + uVar15;
  uVar21 = uVar8 + uVar6;
  uVar10 = (uint)(byte)((CARRY4(uVar16,uVar9) || CARRY4(uVar7,uVar4)) +
                        (CARRY4(uVar18,uVar10) || CARRY4(uVar11,uVar5)) +
                        (CARRY4(uVar19,uVar12) || CARRY4(uVar13,uVar3)) +
                       (CARRY4(uVar20,uVar15) || CARRY4(uVar8,uVar6)));
  param_1[0xb] = uVar17 + uVar14;
  uVar8 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[5] * (ulonglong)param_2[7]);
  uVar3 = uVar21 + uVar4;
  uVar4 = (uint)CARRY4(uVar21,uVar4);
  uVar6 = uVar10 + uVar8;
  uVar15 = uVar6 + uVar4;
  uVar14 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[6] >> 0x20);
  uVar5 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[6]);
  uVar12 = uVar3 + uVar5;
  uVar5 = (uint)CARRY4(uVar3,uVar5);
  uVar7 = uVar15 + uVar14;
  uVar16 = uVar7 + uVar5;
  uVar9 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[5] >> 0x20);
  uVar13 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[5]);
  uVar3 = (uint)CARRY4(uVar12,uVar13);
  uVar11 = uVar16 + uVar9;
  uVar17 = uVar11 + uVar3;
  uVar8 = (uint)(byte)((CARRY4(uVar10,uVar8) || CARRY4(uVar6,uVar4)) +
                       (CARRY4(uVar15,uVar14) || CARRY4(uVar7,uVar5)) +
                      (CARRY4(uVar16,uVar9) || CARRY4(uVar11,uVar3)));
  param_1[0xc] = uVar12 + uVar13;
  uVar11 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[7] >> 0x20);
  uVar4 = (uint)((ulonglong)param_3[6] * (ulonglong)param_2[7]);
  uVar14 = uVar17 + uVar4;
  uVar4 = (uint)CARRY4(uVar17,uVar4);
  uVar3 = uVar8 + uVar11;
  uVar9 = uVar3 + uVar4;
  uVar13 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[6] >> 0x20);
  uVar7 = (uint)((ulonglong)param_3[7] * (ulonglong)param_2[6]);
  uVar5 = (uint)CARRY4(uVar14,uVar7);
  uVar6 = uVar9 + uVar13;
  param_1[0xd] = uVar14 + uVar7;
  *(ulonglong *)(param_1 + 0xe) =
       (ulonglong)param_3[7] * (ulonglong)param_2[7] +
       (ulonglong)
       CONCAT14((CARRY4(uVar8,uVar11) || CARRY4(uVar3,uVar4)) +
                (CARRY4(uVar9,uVar13) || CARRY4(uVar6,uVar5)),uVar6 + uVar5);
  return;
}
```
