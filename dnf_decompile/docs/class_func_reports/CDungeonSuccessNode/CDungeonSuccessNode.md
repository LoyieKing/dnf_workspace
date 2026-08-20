# CDungeonSuccessNode

`_ZN19CDungeonSuccessNodeC1Ev`

`CDungeonSuccessNode::CDungeonSuccessNode()`

| 类 | 地址 |
|---|---|
| `CDungeonSuccessNode` | `0x08484dda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08484dda  _ZN19CDungeonSuccessNodeC1Ev
#           CDungeonSuccessNode::CDungeonSuccessNode()
# range [0x08484dda, 0x084851dd]
08484dda +0x000:  push   %ebp
08484ddb +0x001:  mov    %esp,%ebp
08484ddd +0x003:  push   %esi
08484dde +0x004:  push   %ebx
08484ddf +0x005:  sub    $0x230,%esp
08484de5 +0x00b:  mov    0x8(%ebp),%eax
08484de8 +0x00e:  mov    %eax,(%esp)
08484deb +0x011:  call   0848734c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd86>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd86
08484df0 +0x016:  mov    0x8(%ebp),%eax
08484df3 +0x019:  add    $0x18,%eax
08484df6 +0x01c:  mov    %eax,(%esp)
08484df9 +0x01f:  call   08487360 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xd9a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xd9a
08484dfe +0x024:  movl   $0x0,-0x214(%ebp)
08484e08 +0x02e:  movl   $0x0,-0x10(%ebp)
08484e0f +0x035:  movl   $0x0,-0xc(%ebp)
08484e16 +0x03c:  movl   $0x2,-0x214(%ebp)
08484e20 +0x046:  jmp    08484f6a <+0x190>
08484e25 +0x04b:  mov    0x8(%ebp),%edx
08484e28 +0x04e:  lea    -0x210(%ebp),%eax
08484e2e +0x054:  mov    %edx,0x4(%esp)
08484e32 +0x058:  mov    %eax,(%esp)
08484e35 +0x05b:  call   084873a0 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xdda>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xdda
08484e3a +0x060:  sub    $0x4,%esp
08484e3d +0x063:  mov    0x8(%ebp),%edx
08484e40 +0x066:  lea    -0x20c(%ebp),%eax
08484e46 +0x06c:  lea    -0x214(%ebp),%ecx
08484e4c +0x072:  mov    %ecx,0x8(%esp)
08484e50 +0x076:  mov    %edx,0x4(%esp)
08484e54 +0x07a:  mov    %eax,(%esp)
08484e57 +0x07d:  call   08487374 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xdae>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xdae
08484e5c +0x082:  sub    $0x4,%esp
08484e5f +0x085:  lea    -0x210(%ebp),%eax
08484e65 +0x08b:  mov    %eax,0x4(%esp)
08484e69 +0x08f:  lea    -0x20c(%ebp),%eax
08484e6f +0x095:  mov    %eax,(%esp)
08484e72 +0x098:  call   084873c6 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xe00>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xe00
08484e77 +0x09d:  lea    -0x178(%ebp),%eax
08484e7d +0x0a3:  mov    %eax,(%esp)
08484e80 +0x0a6:  call   084869f4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x42e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x42e
08484e85 +0x0ab:  lea    -0x1bc(%ebp),%eax
08484e8b +0x0b1:  lea    -0x178(%ebp),%edx
08484e91 +0x0b7:  mov    %edx,0x8(%esp)
08484e95 +0x0bb:  lea    -0x214(%ebp),%edx
08484e9b +0x0c1:  mov    %edx,0x4(%esp)
08484e9f +0x0c5:  mov    %eax,(%esp)
08484ea2 +0x0c8:  call   084873da <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xe14>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xe14
08484ea7 +0x0cd:  sub    $0x4,%esp
08484eaa +0x0d0:  lea    -0x1bc(%ebp),%eax
08484eb0 +0x0d6:  mov    %eax,0x4(%esp)
08484eb4 +0x0da:  lea    -0x200(%ebp),%eax
08484eba +0x0e0:  mov    %eax,(%esp)
08484ebd +0x0e3:  call   0848741e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xe58>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xe58
08484ec2 +0x0e8:  mov    0x8(%ebp),%edx
08484ec5 +0x0eb:  lea    -0x208(%ebp),%eax
08484ecb +0x0f1:  lea    -0x200(%ebp),%ecx
08484ed1 +0x0f7:  mov    %ecx,0x8(%esp)
08484ed5 +0x0fb:  mov    %edx,0x4(%esp)
08484ed9 +0x0ff:  mov    %eax,(%esp)
08484edc +0x102:  call   084874a8 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xee2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xee2
08484ee1 +0x107:  sub    $0x4,%esp
08484ee4 +0x10a:  lea    -0x200(%ebp),%eax
08484eea +0x110:  mov    %eax,(%esp)
08484eed +0x113:  call   08486c44 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x67e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x67e
08484ef2 +0x118:  lea    -0x1bc(%ebp),%eax
08484ef8 +0x11e:  mov    %eax,(%esp)
08484efb +0x121:  call   08486c2e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x668>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x668
08484f00 +0x126:  lea    -0x178(%ebp),%eax
08484f06 +0x12c:  mov    %eax,(%esp)
08484f09 +0x12f:  call   08486a1e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x458>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x458
08484f0e +0x134:  mov    -0x214(%ebp),%eax
08484f14 +0x13a:  add    $0x1,%eax
08484f17 +0x13d:  mov    %eax,-0x214(%ebp)
08484f1d +0x143:  jmp    08484f6a <+0x190>
08484f1f +0x145:  mov    %edx,%ebx
08484f21 +0x147:  mov    %eax,%esi
08484f23 +0x149:  lea    -0x200(%ebp),%eax
08484f29 +0x14f:  mov    %eax,(%esp)
08484f2c +0x152:  call   08486c44 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x67e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x67e
08484f31 +0x157:  mov    %esi,%eax
08484f33 +0x159:  mov    %ebx,%edx
08484f35 +0x15b:  jmp    08484f37 <+0x15d>
08484f37 +0x15d:  mov    %edx,%ebx
08484f39 +0x15f:  mov    %eax,%esi
08484f3b +0x161:  lea    -0x1bc(%ebp),%eax
08484f41 +0x167:  mov    %eax,(%esp)
08484f44 +0x16a:  call   08486c2e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x668>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x668
08484f49 +0x16f:  mov    %esi,%eax
08484f4b +0x171:  mov    %ebx,%edx
08484f4d +0x173:  jmp    08484f4f <+0x175>
08484f4f +0x175:  mov    %edx,%ebx
08484f51 +0x177:  mov    %eax,%esi
08484f53 +0x179:  lea    -0x178(%ebp),%eax
08484f59 +0x17f:  mov    %eax,(%esp)
08484f5c +0x182:  call   08486a1e <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x458>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x458
08484f61 +0x187:  mov    %esi,%eax
08484f63 +0x189:  mov    %ebx,%edx
08484f65 +0x18b:  jmp    084851a1 <+0x3c7>
08484f6a +0x190:  mov    -0x214(%ebp),%eax
08484f70 +0x196:  cmp    $0x4,%eax
08484f73 +0x199:  setle  %al
08484f76 +0x19c:  test   %al,%al
08484f78 +0x19e:  jne    08484e25 <+0x4b>
08484f7e +0x1a4:  lea    -0x21c(%ebp),%eax
08484f84 +0x1aa:  mov    %eax,(%esp)
08484f87 +0x1ad:  call   0848662a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x64>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x64
08484f8c +0x1b2:  lea    -0x21d(%ebp),%eax
08484f92 +0x1b8:  mov    %eax,(%esp)
08484f95 +0x1bb:  call   08486bce <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x608>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x608
08484f9a +0x1c0:  movl   $0x0,-0x214(%ebp)
08484fa4 +0x1ca:  jmp    0848518b <+0x3b1>
08484fa9 +0x1cf:  mov    -0x214(%ebp),%eax
08484faf +0x1d5:  mov    %eax,-0x21c(%ebp)
08484fb5 +0x1db:  movl   $0x0,-0xc(%ebp)
08484fbc +0x1e2:  jmp    0848516d <+0x393>
08484fc1 +0x1e7:  movb   $0x0,-0x21d(%ebp)
08484fc8 +0x1ee:  mov    -0xc(%ebp),%eax
08484fcb +0x1f1:  shl    $0x4,%eax
08484fce +0x1f4:  sar    $0x4,%al
08484fd1 +0x1f7:  mov    %eax,%edx
08484fd3 +0x1f9:  and    $0xf,%edx
08484fd6 +0x1fc:  movzbl -0x21d(%ebp),%eax
08484fdd +0x203:  and    $0xfffffff0,%eax
08484fe0 +0x206:  or     %edx,%eax
08484fe2 +0x208:  mov    %al,-0x21d(%ebp)
08484fe8 +0x20e:  movl   $0x0,-0x10(%ebp)
08484fef +0x215:  jmp    0848515a <+0x380>
08484ff4 +0x21a:  mov    -0x10(%ebp),%eax
08484ff7 +0x21d:  shl    $0x5,%eax
08484ffa +0x220:  sar    $0x5,%al
08484ffd +0x223:  and    $0x7,%eax
08485000 +0x226:  mov    %eax,%edx
08485002 +0x228:  shl    $0x4,%edx
08485005 +0x22b:  movzbl -0x21d(%ebp),%eax
0848500c +0x232:  and    $0xffffff8f,%eax
0848500f +0x235:  or     %edx,%eax
08485011 +0x237:  mov    %al,-0x21d(%ebp)
08485017 +0x23d:  movzbl -0x21d(%ebp),%eax
0848501e +0x244:  mov    %al,-0x218(%ebp)
08485024 +0x24a:  mov    0x8(%ebp),%eax
08485027 +0x24d:  lea    0x18(%eax),%edx
0848502a +0x250:  lea    -0x138(%ebp),%eax
08485030 +0x256:  mov    %edx,0x4(%esp)
08485034 +0x25a:  mov    %eax,(%esp)
08485037 +0x25d:  call   08487500 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf3a>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf3a
0848503c +0x262:  sub    $0x4,%esp
0848503f +0x265:  mov    0x8(%ebp),%eax
08485042 +0x268:  lea    0x18(%eax),%ecx
08485045 +0x26b:  lea    -0x134(%ebp),%eax
0848504b +0x271:  lea    -0x21c(%ebp),%edx
08485051 +0x277:  mov    %edx,0x8(%esp)
08485055 +0x27b:  mov    %ecx,0x4(%esp)
08485059 +0x27f:  mov    %eax,(%esp)
0848505c +0x282:  call   084874d4 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf0e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf0e
08485061 +0x287:  sub    $0x4,%esp
08485064 +0x28a:  lea    -0x138(%ebp),%eax
0848506a +0x290:  mov    %eax,0x4(%esp)
0848506e +0x294:  lea    -0x134(%ebp),%eax
08485074 +0x29a:  mov    %eax,(%esp)
08485077 +0x29d:  call   08487526 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf60>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf60
0848507c +0x2a2:  lea    -0x68(%ebp),%eax
0848507f +0x2a5:  mov    %eax,(%esp)
08485082 +0x2a8:  call   08484c30 <_ZN15CSuccessJobNodeC1Ev>  ; CSuccessJobNode::CSuccessJobNode()
08485087 +0x2ad:  lea    -0xc8(%ebp),%eax
0848508d +0x2b3:  lea    -0x68(%ebp),%edx
08485090 +0x2b6:  mov    %edx,0x8(%esp)
08485094 +0x2ba:  lea    -0x21c(%ebp),%edx
0848509a +0x2c0:  mov    %edx,0x4(%esp)
0848509e +0x2c4:  mov    %eax,(%esp)
084850a1 +0x2c7:  call   0848753a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0xf74>  ; global constructors keyed to GetInstanceDungeonDataManager()+0xf74
084850a6 +0x2cc:  sub    $0x4,%esp
084850a9 +0x2cf:  lea    -0xc8(%ebp),%eax
084850af +0x2d5:  mov    %eax,0x4(%esp)
084850b3 +0x2d9:  lea    -0x128(%ebp),%eax
084850b9 +0x2df:  mov    %eax,(%esp)
084850bc +0x2e2:  call   084875fe <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x1038>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x1038
084850c1 +0x2e7:  mov    0x8(%ebp),%eax
084850c4 +0x2ea:  lea    0x18(%eax),%ecx
084850c7 +0x2ed:  lea    -0x130(%ebp),%eax
084850cd +0x2f3:  lea    -0x128(%ebp),%edx
084850d3 +0x2f9:  mov    %edx,0x8(%esp)
084850d7 +0x2fd:  mov    %ecx,0x4(%esp)
084850db +0x301:  mov    %eax,(%esp)
084850de +0x304:  call   08487644 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x107e>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x107e
084850e3 +0x309:  sub    $0x4,%esp
084850e6 +0x30c:  lea    -0x128(%ebp),%eax
084850ec +0x312:  mov    %eax,(%esp)
084850ef +0x315:  call   08486c92 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6cc>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6cc
084850f4 +0x31a:  jmp    08485126 <+0x34c>
084850f6 +0x31c:  mov    %edx,%ebx
084850f8 +0x31e:  mov    %eax,%esi
084850fa +0x320:  lea    -0x128(%ebp),%eax
08485100 +0x326:  mov    %eax,(%esp)
08485103 +0x329:  call   08486c92 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6cc>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6cc
08485108 +0x32e:  mov    %esi,%eax
0848510a +0x330:  mov    %ebx,%edx
0848510c +0x332:  jmp    0848510e <+0x334>
0848510e +0x334:  mov    %edx,%ebx
08485110 +0x336:  mov    %eax,%esi
08485112 +0x338:  lea    -0xc8(%ebp),%eax
08485118 +0x33e:  mov    %eax,(%esp)
0848511b +0x341:  call   08486c7c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6b6>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6b6
08485120 +0x346:  mov    %esi,%eax
08485122 +0x348:  mov    %ebx,%edx
08485124 +0x34a:  jmp    08485136 <+0x35c>
08485126 +0x34c:  lea    -0xc8(%ebp),%eax
0848512c +0x352:  mov    %eax,(%esp)
0848512f +0x355:  call   08486c7c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x6b6>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x6b6
08485134 +0x35a:  jmp    0848514b <+0x371>
08485136 +0x35c:  mov    %edx,%ebx
08485138 +0x35e:  mov    %eax,%esi
0848513a +0x360:  lea    -0x68(%ebp),%eax
0848513d +0x363:  mov    %eax,(%esp)
08485140 +0x366:  call   08486c5a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x694>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x694
08485145 +0x36b:  mov    %esi,%eax
08485147 +0x36d:  mov    %ebx,%edx
08485149 +0x36f:  jmp    084851a1 <+0x3c7>
0848514b +0x371:  lea    -0x68(%ebp),%eax
0848514e +0x374:  mov    %eax,(%esp)
08485151 +0x377:  call   08486c5a <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x694>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x694
08485156 +0x37c:  addl   $0x1,-0x10(%ebp)
0848515a +0x380:  cmpl   $0x2,-0x10(%ebp)
0848515e +0x384:  setle  %al
08485161 +0x387:  test   %al,%al
08485163 +0x389:  jne    08484ff4 <+0x21a>
08485169 +0x38f:  addl   $0x1,-0xc(%ebp)
0848516d +0x393:  cmpl   $0x5,-0xc(%ebp)
08485171 +0x397:  setle  %al
08485174 +0x39a:  test   %al,%al
08485176 +0x39c:  jne    08484fc1 <+0x1e7>
0848517c +0x3a2:  mov    -0x214(%ebp),%eax
08485182 +0x3a8:  add    $0x1,%eax
08485185 +0x3ab:  mov    %eax,-0x214(%ebp)
0848518b +0x3b1:  mov    -0x214(%ebp),%eax
08485191 +0x3b7:  cmp    $0xa,%eax
08485194 +0x3ba:  setle  %al
08485197 +0x3bd:  test   %al,%al
08485199 +0x3bf:  jne    08484fa9 <+0x1cf>
0848519f +0x3c5:  jmp    084851d4 <+0x3fa>
084851a1 +0x3c7:  mov    %edx,%ebx
084851a3 +0x3c9:  mov    %eax,%esi
084851a5 +0x3cb:  mov    0x8(%ebp),%eax
084851a8 +0x3ce:  add    $0x18,%eax
084851ab +0x3d1:  mov    %eax,(%esp)
084851ae +0x3d4:  call   08486a8c <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x4c6>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x4c6
084851b3 +0x3d9:  mov    %esi,%eax
084851b5 +0x3db:  mov    %ebx,%edx
084851b7 +0x3dd:  jmp    084851b9 <+0x3df>
084851b9 +0x3df:  mov    %edx,%ebx
084851bb +0x3e1:  mov    %eax,%esi
084851bd +0x3e3:  mov    0x8(%ebp),%eax
084851c0 +0x3e6:  mov    %eax,(%esp)
084851c3 +0x3e9:  call   08486a78 <_GLOBAL__I__Z29GetInstanceDungeonDataManagerv+0x4b2>  ; global constructors keyed to GetInstanceDungeonDataManager()+0x4b2
084851c8 +0x3ee:  mov    %esi,%eax
084851ca +0x3f0:  mov    %ebx,%edx
084851cc +0x3f2:  mov    %eax,(%esp)
084851cf +0x3f5:  call   08ae3750 <_Unwind_Resume>
084851d4 +0x3fa:  lea    -0x8(%ebp),%esp
084851d7 +0x3fd:  add    $0x0,%esp
084851da +0x400:  pop    %ebx
084851db +0x401:  pop    %esi
084851dc +0x402:  pop    %ebp
084851dd +0x403:  ret
```

## 反编译 C

```c
// CDungeonSuccessNode::CDungeonSuccessNode @ 0x8484dda

/* CDungeonSuccessNode::CDungeonSuccessNode() */

void __thiscall CDungeonSuccessNode::CDungeonSuccessNode(CDungeonSuccessNode *this)

{
  STGrowthType local_221;
  int local_220;
  STGrowthType local_21c;
  int local_218;
  map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> local_214 [4];
  _Rb_tree_iterator<std::pair<int_const,Party>> local_210 [4];
  pair local_20c [8];
  pair<int_const,Party> local_204 [68];
  pair<int,Party> local_1c0 [68];
  Party local_17c [64];
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  local_13c [4];
  JobKey local_138 [4];
  pair local_134 [8];
  pair<JobKey_const,CSuccessJobNode> local_12c [96];
  JobKey local_cc [96];
  CSuccessJobNode local_6c [88];
  int local_14;
  int local_10;
  
  std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::map
            ((map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>> *)this);
                    /* try { // try from 08484df9 to 08484dfd has its CatchHandler @ 084851b9 */
  std::
  map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
  ::map((map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
         *)(this + 0x18));
  local_14 = 0;
  local_10 = 0;
  for (local_218 = 2; local_218 < 5; local_218 = local_218 + 1) {
                    /* try { // try from 08484e35 to 08484e5b has its CatchHandler @ 084851a1 */
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::end(local_214);
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::find
              ((int *)local_210);
    std::_Rb_tree_iterator<std::pair<int_const,Party>>::operator!=
              (local_210,(_Rb_tree_iterator *)local_214);
    Party::Party(local_17c);
                    /* try { // try from 08484ea2 to 08484ea6 has its CatchHandler @ 08484f4f */
    std::make_pair<int&,Party>((int *)local_1c0,(Party *)&local_218);
                    /* try { // try from 08484ebd to 08484ec1 has its CatchHandler @ 08484f37 */
    std::pair<int_const,Party>::pair<int,Party>(local_204,local_1c0);
                    /* try { // try from 08484edc to 08484ee0 has its CatchHandler @ 08484f1f */
    std::map<int,Party,std::less<int>,std::allocator<std::pair<int_const,Party>>>::insert(local_20c)
    ;
    std::pair<int_const,Party>::~pair(local_204);
    std::pair<int,Party>::~pair(local_1c0);
    Party::~Party(local_17c);
  }
  JobKey::JobKey((JobKey *)&local_220);
  STGrowthType::STGrowthType(&local_221);
  for (local_218 = 0; local_218 < 0xb; local_218 = local_218 + 1) {
    local_220 = local_218;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      local_221 = (STGrowthType)((char)(local_10 << 4) >> 4 & 0xf);
      for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
        local_221 = (STGrowthType)((byte)local_221 & 0x8f | ((char)(local_14 << 5) >> 5 & 7U) << 4);
        local_21c = local_221;
                    /* try { // try from 08485037 to 08485086 has its CatchHandler @ 084851a1 */
        std::
        map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
        ::end(local_13c);
        std::
        map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
        ::find(local_138);
        std::_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>>::operator!=
                  ((_Rb_tree_iterator<std::pair<JobKey_const,CSuccessJobNode>> *)local_138,
                   (_Rb_tree_iterator *)local_13c);
        CSuccessJobNode::CSuccessJobNode(local_6c);
                    /* try { // try from 084850a1 to 084850a5 has its CatchHandler @ 08485136 */
        std::make_pair<JobKey&,CSuccessJobNode>(local_cc,(CSuccessJobNode *)&local_220);
                    /* try { // try from 084850bc to 084850c0 has its CatchHandler @ 0848510e */
        std::pair<JobKey_const,CSuccessJobNode>::pair<JobKey,CSuccessJobNode>(local_12c,local_cc);
                    /* try { // try from 084850de to 084850e2 has its CatchHandler @ 084850f6 */
        std::
        map<JobKey,CSuccessJobNode,std::less<JobKey>,std::allocator<std::pair<JobKey_const,CSuccessJobNode>>>
        ::insert(local_134);
                    /* try { // try from 084850ef to 084850f3 has its CatchHandler @ 0848510e */
        std::pair<JobKey_const,CSuccessJobNode>::~pair(local_12c);
                    /* try { // try from 0848512f to 08485133 has its CatchHandler @ 08485136 */
        std::pair<JobKey,CSuccessJobNode>::~pair((pair<JobKey,CSuccessJobNode> *)local_cc);
                    /* try { // try from 08485151 to 08485155 has its CatchHandler @ 084851a1 */
        CSuccessJobNode::~CSuccessJobNode(local_6c);
      }
    }
  }
  return;
}
```
