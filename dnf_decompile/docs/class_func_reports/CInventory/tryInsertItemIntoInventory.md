# tryInsertItemIntoInventory

`_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item`

`CInventory::tryInsertItemIntoInventory(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501eca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501eca  _ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item
#           CInventory::tryInsertItemIntoInventory(Inven_Item) const
# range [0x08501eca, 0x08502343]
08501eca +0x000:  push   %ebp
08501ecb +0x001:  mov    %esp,%ebp
08501ecd +0x003:  sub    $0x68,%esp
08501ed0 +0x006:  mov    0xe(%ebp),%eax
08501ed3 +0x009:  test   %eax,%eax
08501ed5 +0x00b:  jne    08501ef2 <+0x28>
08501ed7 +0x00d:  mov    0x13(%ebp),%eax
08501eda +0x010:  test   %eax,%eax
08501edc +0x012:  jns    08501ee8 <+0x1e>
08501ede +0x014:  mov    $0xffffffff,%eax
08501ee3 +0x019:  jmp    08502341 <+0x477>
08501ee8 +0x01e:  mov    $0x0,%eax
08501eed +0x023:  jmp    08502341 <+0x477>
08501ef2 +0x028:  movzbl 0xd(%ebp),%eax
08501ef6 +0x02c:  cmp    $0x8,%al
08501ef8 +0x02e:  jne    08501f95 <+0xcb>
08501efe +0x034:  mov    0xc(%ebp),%eax
08501f01 +0x037:  mov    %eax,0x4(%esp)
08501f05 +0x03b:  mov    0x10(%ebp),%eax
08501f08 +0x03e:  mov    %eax,0x8(%esp)
08501f0c +0x042:  mov    0x14(%ebp),%eax
08501f0f +0x045:  mov    %eax,0xc(%esp)
08501f13 +0x049:  mov    0x18(%ebp),%eax
08501f16 +0x04c:  mov    %eax,0x10(%esp)
08501f1a +0x050:  mov    0x1c(%ebp),%eax
08501f1d +0x053:  mov    %eax,0x14(%esp)
08501f21 +0x057:  mov    0x20(%ebp),%eax
08501f24 +0x05a:  mov    %eax,0x18(%esp)
08501f28 +0x05e:  mov    0x24(%ebp),%eax
08501f2b +0x061:  mov    %eax,0x1c(%esp)
08501f2f +0x065:  mov    0x28(%ebp),%eax
08501f32 +0x068:  mov    %eax,0x20(%esp)
08501f36 +0x06c:  mov    0x2c(%ebp),%eax
08501f39 +0x06f:  mov    %eax,0x24(%esp)
08501f3d +0x073:  mov    0x30(%ebp),%eax
08501f40 +0x076:  mov    %eax,0x28(%esp)
08501f44 +0x07a:  mov    0x34(%ebp),%eax
08501f47 +0x07d:  mov    %eax,0x2c(%esp)
08501f4b +0x081:  mov    0x38(%ebp),%eax
08501f4e +0x084:  mov    %eax,0x30(%esp)
08501f52 +0x088:  mov    0x3c(%ebp),%eax
08501f55 +0x08b:  mov    %eax,0x34(%esp)
08501f59 +0x08f:  mov    0x40(%ebp),%eax
08501f5c +0x092:  mov    %eax,0x38(%esp)
08501f60 +0x096:  mov    0x44(%ebp),%eax
08501f63 +0x099:  mov    %eax,0x3c(%esp)
08501f67 +0x09d:  movzbl 0x48(%ebp),%eax
08501f6b +0x0a1:  mov    %al,0x40(%esp)
08501f6f +0x0a5:  mov    0x8(%ebp),%eax
08501f72 +0x0a8:  mov    %eax,(%esp)
08501f75 +0x0ab:  call   085035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>  ; CInventory::tryInsertAvatarIntoInventory(Inven_Item) const
08501f7a +0x0b0:  mov    %eax,-0x18(%ebp)
08501f7d +0x0b3:  cmpl   $0x0,-0x18(%ebp)
08501f81 +0x0b7:  js     08501f8b <+0xc1>
08501f83 +0x0b9:  mov    -0x18(%ebp),%eax
08501f86 +0x0bc:  jmp    08502341 <+0x477>
08501f8b +0x0c1:  mov    $0xffffffff,%eax
08501f90 +0x0c6:  jmp    08502341 <+0x477>
08501f95 +0x0cb:  movzbl 0xd(%ebp),%eax
08501f99 +0x0cf:  cmp    $0x1,%al
08501f9b +0x0d1:  je     085020db <+0x211>
08501fa1 +0x0d7:  mov    0xc(%ebp),%eax
08501fa4 +0x0da:  mov    %eax,0x4(%esp)
08501fa8 +0x0de:  mov    0x10(%ebp),%eax
08501fab +0x0e1:  mov    %eax,0x8(%esp)
08501faf +0x0e5:  mov    0x14(%ebp),%eax
08501fb2 +0x0e8:  mov    %eax,0xc(%esp)
08501fb6 +0x0ec:  mov    0x18(%ebp),%eax
08501fb9 +0x0ef:  mov    %eax,0x10(%esp)
08501fbd +0x0f3:  mov    0x1c(%ebp),%eax
08501fc0 +0x0f6:  mov    %eax,0x14(%esp)
08501fc4 +0x0fa:  mov    0x20(%ebp),%eax
08501fc7 +0x0fd:  mov    %eax,0x18(%esp)
08501fcb +0x101:  mov    0x24(%ebp),%eax
08501fce +0x104:  mov    %eax,0x1c(%esp)
08501fd2 +0x108:  mov    0x28(%ebp),%eax
08501fd5 +0x10b:  mov    %eax,0x20(%esp)
08501fd9 +0x10f:  mov    0x2c(%ebp),%eax
08501fdc +0x112:  mov    %eax,0x24(%esp)
08501fe0 +0x116:  mov    0x30(%ebp),%eax
08501fe3 +0x119:  mov    %eax,0x28(%esp)
08501fe7 +0x11d:  mov    0x34(%ebp),%eax
08501fea +0x120:  mov    %eax,0x2c(%esp)
08501fee +0x124:  mov    0x38(%ebp),%eax
08501ff1 +0x127:  mov    %eax,0x30(%esp)
08501ff5 +0x12b:  mov    0x3c(%ebp),%eax
08501ff8 +0x12e:  mov    %eax,0x34(%esp)
08501ffc +0x132:  mov    0x40(%ebp),%eax
08501fff +0x135:  mov    %eax,0x38(%esp)
08502003 +0x139:  mov    0x44(%ebp),%eax
08502006 +0x13c:  mov    %eax,0x3c(%esp)
0850200a +0x140:  movzbl 0x48(%ebp),%eax
0850200e +0x144:  mov    %al,0x40(%esp)
08502012 +0x148:  mov    0x8(%ebp),%eax
08502015 +0x14b:  mov    %eax,(%esp)
08502018 +0x14e:  call   08501bf6 <_ZNK10CInventory30tryStackInvenItemIntoQuickSlotE10Inven_Item>  ; CInventory::tryStackInvenItemIntoQuickSlot(Inven_Item) const
0850201d +0x153:  mov    %eax,-0x14(%ebp)
08502020 +0x156:  cmpl   $0x0,-0x14(%ebp)
08502024 +0x15a:  js     0850202e <+0x164>
08502026 +0x15c:  mov    -0x14(%ebp),%eax
08502029 +0x15f:  jmp    08502341 <+0x477>
0850202e +0x164:  cmpl   $0xfffffff6,-0x14(%ebp)
08502032 +0x168:  jne    0850203e <+0x174>
08502034 +0x16a:  mov    $0xffffffff,%eax
08502039 +0x16f:  jmp    08502341 <+0x477>
0850203e +0x174:  mov    0xc(%ebp),%eax
08502041 +0x177:  mov    %eax,0x4(%esp)
08502045 +0x17b:  mov    0x10(%ebp),%eax
08502048 +0x17e:  mov    %eax,0x8(%esp)
0850204c +0x182:  mov    0x14(%ebp),%eax
0850204f +0x185:  mov    %eax,0xc(%esp)
08502053 +0x189:  mov    0x18(%ebp),%eax
08502056 +0x18c:  mov    %eax,0x10(%esp)
0850205a +0x190:  mov    0x1c(%ebp),%eax
0850205d +0x193:  mov    %eax,0x14(%esp)
08502061 +0x197:  mov    0x20(%ebp),%eax
08502064 +0x19a:  mov    %eax,0x18(%esp)
08502068 +0x19e:  mov    0x24(%ebp),%eax
0850206b +0x1a1:  mov    %eax,0x1c(%esp)
0850206f +0x1a5:  mov    0x28(%ebp),%eax
08502072 +0x1a8:  mov    %eax,0x20(%esp)
08502076 +0x1ac:  mov    0x2c(%ebp),%eax
08502079 +0x1af:  mov    %eax,0x24(%esp)
0850207d +0x1b3:  mov    0x30(%ebp),%eax
08502080 +0x1b6:  mov    %eax,0x28(%esp)
08502084 +0x1ba:  mov    0x34(%ebp),%eax
08502087 +0x1bd:  mov    %eax,0x2c(%esp)
0850208b +0x1c1:  mov    0x38(%ebp),%eax
0850208e +0x1c4:  mov    %eax,0x30(%esp)
08502092 +0x1c8:  mov    0x3c(%ebp),%eax
08502095 +0x1cb:  mov    %eax,0x34(%esp)
08502099 +0x1cf:  mov    0x40(%ebp),%eax
0850209c +0x1d2:  mov    %eax,0x38(%esp)
085020a0 +0x1d6:  mov    0x44(%ebp),%eax
085020a3 +0x1d9:  mov    %eax,0x3c(%esp)
085020a7 +0x1dd:  movzbl 0x48(%ebp),%eax
085020ab +0x1e1:  mov    %al,0x40(%esp)
085020af +0x1e5:  mov    0x8(%ebp),%eax
085020b2 +0x1e8:  mov    %eax,(%esp)
085020b5 +0x1eb:  call   08501cea <_ZNK10CInventory39tryStackInvenItemIntoCorrespondingSpaceE10Inven_Item>  ; CInventory::tryStackInvenItemIntoCorrespondingSpace(Inven_Item) const
085020ba +0x1f0:  mov    %eax,-0x14(%ebp)
085020bd +0x1f3:  cmpl   $0x0,-0x14(%ebp)
085020c1 +0x1f7:  js     085020cb <+0x201>
085020c3 +0x1f9:  mov    -0x14(%ebp),%eax
085020c6 +0x1fc:  jmp    08502341 <+0x477>
085020cb +0x201:  cmpl   $0xfffffff6,-0x14(%ebp)
085020cf +0x205:  jne    085020db <+0x211>
085020d1 +0x207:  mov    $0xffffffff,%eax
085020d6 +0x20c:  jmp    08502341 <+0x477>
085020db +0x211:  movzbl 0xd(%ebp),%eax
085020df +0x215:  cmp    $0x2,%al
085020e1 +0x217:  jne    08502225 <+0x35b>
085020e7 +0x21d:  mov    0xc(%ebp),%eax
085020ea +0x220:  mov    %eax,0x4(%esp)
085020ee +0x224:  mov    0x10(%ebp),%eax
085020f1 +0x227:  mov    %eax,0x8(%esp)
085020f5 +0x22b:  mov    0x14(%ebp),%eax
085020f8 +0x22e:  mov    %eax,0xc(%esp)
085020fc +0x232:  mov    0x18(%ebp),%eax
085020ff +0x235:  mov    %eax,0x10(%esp)
08502103 +0x239:  mov    0x1c(%ebp),%eax
08502106 +0x23c:  mov    %eax,0x14(%esp)
0850210a +0x240:  mov    0x20(%ebp),%eax
0850210d +0x243:  mov    %eax,0x18(%esp)
08502111 +0x247:  mov    0x24(%ebp),%eax
08502114 +0x24a:  mov    %eax,0x1c(%esp)
08502118 +0x24e:  mov    0x28(%ebp),%eax
0850211b +0x251:  mov    %eax,0x20(%esp)
0850211f +0x255:  mov    0x2c(%ebp),%eax
08502122 +0x258:  mov    %eax,0x24(%esp)
08502126 +0x25c:  mov    0x30(%ebp),%eax
08502129 +0x25f:  mov    %eax,0x28(%esp)
0850212d +0x263:  mov    0x34(%ebp),%eax
08502130 +0x266:  mov    %eax,0x2c(%esp)
08502134 +0x26a:  mov    0x38(%ebp),%eax
08502137 +0x26d:  mov    %eax,0x30(%esp)
0850213b +0x271:  mov    0x3c(%ebp),%eax
0850213e +0x274:  mov    %eax,0x34(%esp)
08502142 +0x278:  mov    0x40(%ebp),%eax
08502145 +0x27b:  mov    %eax,0x38(%esp)
08502149 +0x27f:  mov    0x44(%ebp),%eax
0850214c +0x282:  mov    %eax,0x3c(%esp)
08502150 +0x286:  movzbl 0x48(%ebp),%eax
08502154 +0x28a:  mov    %al,0x40(%esp)
08502158 +0x28e:  mov    0x8(%ebp),%eax
0850215b +0x291:  mov    %eax,(%esp)
0850215e +0x294:  call   08501b70 <_ZNK10CInventory31tryInsertInvenItemIntoQuickSlotE10Inven_Item>  ; CInventory::tryInsertInvenItemIntoQuickSlot(Inven_Item) const
08502163 +0x299:  mov    %eax,-0x10(%ebp)
08502166 +0x29c:  cmpl   $0x0,-0x10(%ebp)
0850216a +0x2a0:  js     08502174 <+0x2aa>
0850216c +0x2a2:  mov    -0x10(%ebp),%eax
0850216f +0x2a5:  jmp    08502341 <+0x477>
08502174 +0x2aa:  cmpl   $0xfffffff6,-0x10(%ebp)
08502178 +0x2ae:  jne    08502184 <+0x2ba>
0850217a +0x2b0:  mov    $0xffffffff,%eax
0850217f +0x2b5:  jmp    08502341 <+0x477>
08502184 +0x2ba:  mov    0xc(%ebp),%eax
08502187 +0x2bd:  mov    %eax,0x4(%esp)
0850218b +0x2c1:  mov    0x10(%ebp),%eax
0850218e +0x2c4:  mov    %eax,0x8(%esp)
08502192 +0x2c8:  mov    0x14(%ebp),%eax
08502195 +0x2cb:  mov    %eax,0xc(%esp)
08502199 +0x2cf:  mov    0x18(%ebp),%eax
0850219c +0x2d2:  mov    %eax,0x10(%esp)
085021a0 +0x2d6:  mov    0x1c(%ebp),%eax
085021a3 +0x2d9:  mov    %eax,0x14(%esp)
085021a7 +0x2dd:  mov    0x20(%ebp),%eax
085021aa +0x2e0:  mov    %eax,0x18(%esp)
085021ae +0x2e4:  mov    0x24(%ebp),%eax
085021b1 +0x2e7:  mov    %eax,0x1c(%esp)
085021b5 +0x2eb:  mov    0x28(%ebp),%eax
085021b8 +0x2ee:  mov    %eax,0x20(%esp)
085021bc +0x2f2:  mov    0x2c(%ebp),%eax
085021bf +0x2f5:  mov    %eax,0x24(%esp)
085021c3 +0x2f9:  mov    0x30(%ebp),%eax
085021c6 +0x2fc:  mov    %eax,0x28(%esp)
085021ca +0x300:  mov    0x34(%ebp),%eax
085021cd +0x303:  mov    %eax,0x2c(%esp)
085021d1 +0x307:  mov    0x38(%ebp),%eax
085021d4 +0x30a:  mov    %eax,0x30(%esp)
085021d8 +0x30e:  mov    0x3c(%ebp),%eax
085021db +0x311:  mov    %eax,0x34(%esp)
085021df +0x315:  mov    0x40(%ebp),%eax
085021e2 +0x318:  mov    %eax,0x38(%esp)
085021e6 +0x31c:  mov    0x44(%ebp),%eax
085021e9 +0x31f:  mov    %eax,0x3c(%esp)
085021ed +0x323:  movzbl 0x48(%ebp),%eax
085021f1 +0x327:  mov    %al,0x40(%esp)
085021f5 +0x32b:  mov    0x8(%ebp),%eax
085021f8 +0x32e:  mov    %eax,(%esp)
085021fb +0x331:  call   08501e12 <_ZNK10CInventory40tryInsertInvenItemIntoCoresspondingSpaceE10Inven_Item>  ; CInventory::tryInsertInvenItemIntoCoresspondingSpace(Inven_Item) const
08502200 +0x336:  mov    %eax,-0x10(%ebp)
08502203 +0x339:  cmpl   $0x0,-0x10(%ebp)
08502207 +0x33d:  js     08502211 <+0x347>
08502209 +0x33f:  mov    -0x10(%ebp),%eax
0850220c +0x342:  jmp    08502341 <+0x477>
08502211 +0x347:  cmpl   $0xfffffff6,-0x10(%ebp)
08502215 +0x34b:  jne    0850233c <+0x472>
0850221b +0x351:  mov    $0xffffffff,%eax
08502220 +0x356:  jmp    08502341 <+0x477>
08502225 +0x35b:  mov    0xc(%ebp),%eax
08502228 +0x35e:  mov    %eax,0x4(%esp)
0850222c +0x362:  mov    0x10(%ebp),%eax
0850222f +0x365:  mov    %eax,0x8(%esp)
08502233 +0x369:  mov    0x14(%ebp),%eax
08502236 +0x36c:  mov    %eax,0xc(%esp)
0850223a +0x370:  mov    0x18(%ebp),%eax
0850223d +0x373:  mov    %eax,0x10(%esp)
08502241 +0x377:  mov    0x1c(%ebp),%eax
08502244 +0x37a:  mov    %eax,0x14(%esp)
08502248 +0x37e:  mov    0x20(%ebp),%eax
0850224b +0x381:  mov    %eax,0x18(%esp)
0850224f +0x385:  mov    0x24(%ebp),%eax
08502252 +0x388:  mov    %eax,0x1c(%esp)
08502256 +0x38c:  mov    0x28(%ebp),%eax
08502259 +0x38f:  mov    %eax,0x20(%esp)
0850225d +0x393:  mov    0x2c(%ebp),%eax
08502260 +0x396:  mov    %eax,0x24(%esp)
08502264 +0x39a:  mov    0x30(%ebp),%eax
08502267 +0x39d:  mov    %eax,0x28(%esp)
0850226b +0x3a1:  mov    0x34(%ebp),%eax
0850226e +0x3a4:  mov    %eax,0x2c(%esp)
08502272 +0x3a8:  mov    0x38(%ebp),%eax
08502275 +0x3ab:  mov    %eax,0x30(%esp)
08502279 +0x3af:  mov    0x3c(%ebp),%eax
0850227c +0x3b2:  mov    %eax,0x34(%esp)
08502280 +0x3b6:  mov    0x40(%ebp),%eax
08502283 +0x3b9:  mov    %eax,0x38(%esp)
08502287 +0x3bd:  mov    0x44(%ebp),%eax
0850228a +0x3c0:  mov    %eax,0x3c(%esp)
0850228e +0x3c4:  movzbl 0x48(%ebp),%eax
08502292 +0x3c8:  mov    %al,0x40(%esp)
08502296 +0x3cc:  mov    0x8(%ebp),%eax
08502299 +0x3cf:  mov    %eax,(%esp)
0850229c +0x3d2:  call   08501e12 <_ZNK10CInventory40tryInsertInvenItemIntoCoresspondingSpaceE10Inven_Item>  ; CInventory::tryInsertInvenItemIntoCoresspondingSpace(Inven_Item) const
085022a1 +0x3d7:  mov    %eax,-0xc(%ebp)
085022a4 +0x3da:  cmpl   $0x0,-0xc(%ebp)
085022a8 +0x3de:  js     085022b2 <+0x3e8>
085022aa +0x3e0:  mov    -0xc(%ebp),%eax
085022ad +0x3e3:  jmp    08502341 <+0x477>
085022b2 +0x3e8:  mov    0xc(%ebp),%eax
085022b5 +0x3eb:  mov    %eax,0x4(%esp)
085022b9 +0x3ef:  mov    0x10(%ebp),%eax
085022bc +0x3f2:  mov    %eax,0x8(%esp)
085022c0 +0x3f6:  mov    0x14(%ebp),%eax
085022c3 +0x3f9:  mov    %eax,0xc(%esp)
085022c7 +0x3fd:  mov    0x18(%ebp),%eax
085022ca +0x400:  mov    %eax,0x10(%esp)
085022ce +0x404:  mov    0x1c(%ebp),%eax
085022d1 +0x407:  mov    %eax,0x14(%esp)
085022d5 +0x40b:  mov    0x20(%ebp),%eax
085022d8 +0x40e:  mov    %eax,0x18(%esp)
085022dc +0x412:  mov    0x24(%ebp),%eax
085022df +0x415:  mov    %eax,0x1c(%esp)
085022e3 +0x419:  mov    0x28(%ebp),%eax
085022e6 +0x41c:  mov    %eax,0x20(%esp)
085022ea +0x420:  mov    0x2c(%ebp),%eax
085022ed +0x423:  mov    %eax,0x24(%esp)
085022f1 +0x427:  mov    0x30(%ebp),%eax
085022f4 +0x42a:  mov    %eax,0x28(%esp)
085022f8 +0x42e:  mov    0x34(%ebp),%eax
085022fb +0x431:  mov    %eax,0x2c(%esp)
085022ff +0x435:  mov    0x38(%ebp),%eax
08502302 +0x438:  mov    %eax,0x30(%esp)
08502306 +0x43c:  mov    0x3c(%ebp),%eax
08502309 +0x43f:  mov    %eax,0x34(%esp)
0850230d +0x443:  mov    0x40(%ebp),%eax
08502310 +0x446:  mov    %eax,0x38(%esp)
08502314 +0x44a:  mov    0x44(%ebp),%eax
08502317 +0x44d:  mov    %eax,0x3c(%esp)
0850231b +0x451:  movzbl 0x48(%ebp),%eax
0850231f +0x455:  mov    %al,0x40(%esp)
08502323 +0x459:  mov    0x8(%ebp),%eax
08502326 +0x45c:  mov    %eax,(%esp)
08502329 +0x45f:  call   08501b70 <_ZNK10CInventory31tryInsertInvenItemIntoQuickSlotE10Inven_Item>  ; CInventory::tryInsertInvenItemIntoQuickSlot(Inven_Item) const
0850232e +0x464:  mov    %eax,-0xc(%ebp)
08502331 +0x467:  cmpl   $0x0,-0xc(%ebp)
08502335 +0x46b:  js     0850233c <+0x472>
08502337 +0x46d:  mov    -0xc(%ebp),%eax
0850233a +0x470:  jmp    08502341 <+0x477>
0850233c +0x472:  mov    $0xffffffff,%eax
08502341 +0x477:  leave
08502342 +0x478:  ret
08502343 +0x479:  nop
```

## 反编译 C

> （该函数反编译 C 未生成）
