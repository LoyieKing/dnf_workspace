# initialize

`_ZN8WongWork17CItemGeneratorMgr10initializeEv`

`WongWork::CItemGeneratorMgr::initialize()`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGeneratorMgr` | `0x08533bc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08533bc8  _ZN8WongWork17CItemGeneratorMgr10initializeEv
#           WongWork::CItemGeneratorMgr::initialize()
# range [0x08533bc8, 0x08534277]
08533bc8 +0x000:  push   %ebp
08533bc9 +0x001:  mov    %esp,%ebp
08533bcb +0x003:  push   %edi
08533bcc +0x004:  push   %esi
08533bcd +0x005:  push   %ebx
08533bce +0x006:  sub    $0x3c,%esp
08533bd1 +0x009:  movl   $0x2593a4,(%esp)
08533bd8 +0x010:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533bdd +0x015:  mov    %eax,%ebx
08533bdf +0x017:  mov    %ebx,%eax
08533be1 +0x019:  movl   $0x3,0x4(%esp)
08533be9 +0x021:  mov    %eax,(%esp)
08533bec +0x024:  call   0853a6c8 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x954>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x954
08533bf1 +0x029:  jmp    08533c0b <+0x43>
08533bf3 +0x02b:  mov    %edx,%esi
08533bf5 +0x02d:  mov    %eax,%edi
08533bf7 +0x02f:  mov    %ebx,(%esp)
08533bfa +0x032:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533bff +0x037:  mov    %edi,%eax
08533c01 +0x039:  mov    %esi,%edx
08533c03 +0x03b:  mov    %eax,(%esp)
08533c06 +0x03e:  call   08ae3750 <_Unwind_Resume>
08533c0b +0x043:  mov    %ebx,%eax
08533c0d +0x045:  mov    %eax,%edx
08533c0f +0x047:  mov    0x8(%ebp),%eax
08533c12 +0x04a:  mov    %edx,0x3c0(%eax)
08533c18 +0x050:  movl   $0x2593a4,(%esp)
08533c1f +0x057:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533c24 +0x05c:  mov    %eax,%ebx
08533c26 +0x05e:  mov    %ebx,%eax
08533c28 +0x060:  movl   $0x3,0x4(%esp)
08533c30 +0x068:  mov    %eax,(%esp)
08533c33 +0x06b:  call   0853a7f8 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xa84>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xa84
08533c38 +0x070:  jmp    08533c52 <+0x8a>
08533c3a +0x072:  mov    %edx,%esi
08533c3c +0x074:  mov    %eax,%edi
08533c3e +0x076:  mov    %ebx,(%esp)
08533c41 +0x079:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533c46 +0x07e:  mov    %edi,%eax
08533c48 +0x080:  mov    %esi,%edx
08533c4a +0x082:  mov    %eax,(%esp)
08533c4d +0x085:  call   08ae3750 <_Unwind_Resume>
08533c52 +0x08a:  mov    %ebx,%eax
08533c54 +0x08c:  mov    %eax,%edx
08533c56 +0x08e:  mov    0x8(%ebp),%eax
08533c59 +0x091:  mov    %edx,0x3c4(%eax)
08533c5f +0x097:  movl   $&_ZL14gUnicodeBuffer+0x19658,(%esp)
08533c66 +0x09e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533c6b +0x0a3:  mov    %eax,%ebx
08533c6d +0x0a5:  mov    %ebx,%eax
08533c6f +0x0a7:  movl   $0x5,0x4(%esp)
08533c77 +0x0af:  mov    %eax,(%esp)
08533c7a +0x0b2:  call   0853a968 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xbf4>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xbf4
08533c7f +0x0b7:  jmp    08533c99 <+0xd1>
08533c81 +0x0b9:  mov    %edx,%esi
08533c83 +0x0bb:  mov    %eax,%edi
08533c85 +0x0bd:  mov    %ebx,(%esp)
08533c88 +0x0c0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533c8d +0x0c5:  mov    %edi,%eax
08533c8f +0x0c7:  mov    %esi,%edx
08533c91 +0x0c9:  mov    %eax,(%esp)
08533c94 +0x0cc:  call   08ae3750 <_Unwind_Resume>
08533c99 +0x0d1:  mov    %ebx,%eax
08533c9b +0x0d3:  mov    %eax,%edx
08533c9d +0x0d5:  mov    0x8(%ebp),%eax
08533ca0 +0x0d8:  mov    %edx,0x3c8(%eax)
08533ca6 +0x0de:  movl   $0x1f80,(%esp)
08533cad +0x0e5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533cb2 +0x0ea:  mov    %eax,%ebx
08533cb4 +0x0ec:  mov    %ebx,%eax
08533cb6 +0x0ee:  movl   $0x2,0x4(%esp)
08533cbe +0x0f6:  mov    %eax,(%esp)
08533cc1 +0x0f9:  call   0853a826 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xab2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xab2
08533cc6 +0x0fe:  jmp    08533ce0 <+0x118>
08533cc8 +0x100:  mov    %edx,%esi
08533cca +0x102:  mov    %eax,%edi
08533ccc +0x104:  mov    %ebx,(%esp)
08533ccf +0x107:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533cd4 +0x10c:  mov    %edi,%eax
08533cd6 +0x10e:  mov    %esi,%edx
08533cd8 +0x110:  mov    %eax,(%esp)
08533cdb +0x113:  call   08ae3750 <_Unwind_Resume>
08533ce0 +0x118:  mov    %ebx,%eax
08533ce2 +0x11a:  mov    %eax,%edx
08533ce4 +0x11c:  mov    0x8(%ebp),%eax
08533ce7 +0x11f:  mov    %edx,0x3cc(%eax)
08533ced +0x125:  movl   $0x18,(%esp)
08533cf4 +0x12c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533cf9 +0x131:  mov    %eax,%ebx
08533cfb +0x133:  mov    %ebx,%eax
08533cfd +0x135:  movl   $0x2,0x4(%esp)
08533d05 +0x13d:  mov    %eax,(%esp)
08533d08 +0x140:  call   0853abc2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xe4e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xe4e
08533d0d +0x145:  jmp    08533d27 <+0x15f>
08533d0f +0x147:  mov    %edx,%esi
08533d11 +0x149:  mov    %eax,%edi
08533d13 +0x14b:  mov    %ebx,(%esp)
08533d16 +0x14e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533d1b +0x153:  mov    %edi,%eax
08533d1d +0x155:  mov    %esi,%edx
08533d1f +0x157:  mov    %eax,(%esp)
08533d22 +0x15a:  call   08ae3750 <_Unwind_Resume>
08533d27 +0x15f:  mov    %ebx,%eax
08533d29 +0x161:  mov    %eax,%edx
08533d2b +0x163:  mov    0x8(%ebp),%eax
08533d2e +0x166:  mov    %edx,0x3d0(%eax)
08533d34 +0x16c:  movl   $0x1f80,(%esp)
08533d3b +0x173:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533d40 +0x178:  mov    %eax,%ebx
08533d42 +0x17a:  mov    %ebx,%eax
08533d44 +0x17c:  movl   $0x2,0x4(%esp)
08533d4c +0x184:  mov    %eax,(%esp)
08533d4f +0x187:  call   0853a826 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xab2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xab2
08533d54 +0x18c:  jmp    08533d6e <+0x1a6>
08533d56 +0x18e:  mov    %edx,%esi
08533d58 +0x190:  mov    %eax,%edi
08533d5a +0x192:  mov    %ebx,(%esp)
08533d5d +0x195:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533d62 +0x19a:  mov    %edi,%eax
08533d64 +0x19c:  mov    %esi,%edx
08533d66 +0x19e:  mov    %eax,(%esp)
08533d69 +0x1a1:  call   08ae3750 <_Unwind_Resume>
08533d6e +0x1a6:  mov    %ebx,%eax
08533d70 +0x1a8:  mov    %eax,%edx
08533d72 +0x1aa:  mov    0x8(%ebp),%eax
08533d75 +0x1ad:  mov    %edx,0x3d4(%eax)
08533d7b +0x1b3:  movl   $0x1f80,(%esp)
08533d82 +0x1ba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533d87 +0x1bf:  mov    %eax,%ebx
08533d89 +0x1c1:  mov    %ebx,%eax
08533d8b +0x1c3:  movl   $0x2,0x4(%esp)
08533d93 +0x1cb:  mov    %eax,(%esp)
08533d96 +0x1ce:  call   0853a826 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xab2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xab2
08533d9b +0x1d3:  jmp    08533db5 <+0x1ed>
08533d9d +0x1d5:  mov    %edx,%esi
08533d9f +0x1d7:  mov    %eax,%edi
08533da1 +0x1d9:  mov    %ebx,(%esp)
08533da4 +0x1dc:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533da9 +0x1e1:  mov    %edi,%eax
08533dab +0x1e3:  mov    %esi,%edx
08533dad +0x1e5:  mov    %eax,(%esp)
08533db0 +0x1e8:  call   08ae3750 <_Unwind_Resume>
08533db5 +0x1ed:  mov    %ebx,%eax
08533db7 +0x1ef:  mov    %eax,%edx
08533db9 +0x1f1:  mov    0x8(%ebp),%eax
08533dbc +0x1f4:  mov    %edx,0x3d8(%eax)
08533dc2 +0x1fa:  movl   $0x1f80,(%esp)
08533dc9 +0x201:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08533dce +0x206:  mov    %eax,%ebx
08533dd0 +0x208:  mov    %ebx,%eax
08533dd2 +0x20a:  movl   $0x2,0x4(%esp)
08533dda +0x212:  mov    %eax,(%esp)
08533ddd +0x215:  call   0853a826 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0xab2>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0xab2
08533de2 +0x21a:  jmp    08533dfc <+0x234>
08533de4 +0x21c:  mov    %edx,%esi
08533de6 +0x21e:  mov    %eax,%edi
08533de8 +0x220:  mov    %ebx,(%esp)
08533deb +0x223:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08533df0 +0x228:  mov    %edi,%eax
08533df2 +0x22a:  mov    %esi,%edx
08533df4 +0x22c:  mov    %eax,(%esp)
08533df7 +0x22f:  call   08ae3750 <_Unwind_Resume>
08533dfc +0x234:  mov    %ebx,%eax
08533dfe +0x236:  mov    %eax,%edx
08533e00 +0x238:  mov    0x8(%ebp),%eax
08533e03 +0x23b:  mov    %edx,0x3dc(%eax)
08533e09 +0x241:  mov    0x8(%ebp),%eax
08533e0c +0x244:  mov    0x3c0(%eax),%eax
08533e12 +0x24a:  movl   $0x0,0x4(%esp)
08533e1a +0x252:  mov    %eax,(%esp)
08533e1d +0x255:  call   0853a40c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x698>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x698
08533e22 +0x25a:  mov    0x8(%ebp),%eax
08533e25 +0x25d:  mov    0x3c4(%eax),%eax
08533e2b +0x263:  movl   $0x1,0x4(%esp)
08533e33 +0x26b:  mov    %eax,(%esp)
08533e36 +0x26e:  call   0853a40c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x698>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x698
08533e3b +0x273:  mov    0x8(%ebp),%eax
08533e3e +0x276:  mov    0x3c8(%eax),%eax
08533e44 +0x27c:  movl   $0x2,0x4(%esp)
08533e4c +0x284:  mov    %eax,(%esp)
08533e4f +0x287:  call   0853a40c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x698>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x698
08533e54 +0x28c:  mov    0x8(%ebp),%eax
08533e57 +0x28f:  mov    0x3cc(%eax),%eax
08533e5d +0x295:  movl   $0x3,0x4(%esp)
08533e65 +0x29d:  mov    %eax,(%esp)
08533e68 +0x2a0:  call   0853a40c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x698>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x698
08533e6d +0x2a5:  mov    0x8(%ebp),%eax
08533e70 +0x2a8:  mov    0x3d0(%eax),%eax
08533e76 +0x2ae:  movl   $0x4,0x4(%esp)
08533e7e +0x2b6:  mov    %eax,(%esp)
08533e81 +0x2b9:  call   0853a40c <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x698>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x698
08533e86 +0x2be:  movl   $0x0,-0x24(%ebp)
08533e8d +0x2c5:  mov    0x8(%ebp),%eax
08533e90 +0x2c8:  mov    0x3c0(%eax),%eax
08533e96 +0x2ce:  movl   $"Etc/ItemDropInfo_Monseter_Extra.etc",0xc(%esp)
08533e9e +0x2d6:  movl   $"Etc/ItemDropInfo_Monster_Hell.etc",0x8(%esp)
08533ea6 +0x2de:  movl   $"Etc/ItemDropInfo_Monseter.etc",0x4(%esp)
08533eae +0x2e6:  mov    %eax,(%esp)
08533eb1 +0x2e9:  call   085380fa <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_>  ; WongWork::CMonsterDrop::loadScript(char const*, char const*, char const*)
08533eb6 +0x2ee:  mov    %eax,-0x24(%ebp)
08533eb9 +0x2f1:  cmpl   $0x0,-0x24(%ebp)
08533ebd +0x2f5:  setne  %al
08533ec0 +0x2f8:  test   %al,%al
08533ec2 +0x2fa:  je     08533eef <+0x327>
08533ec4 +0x2fc:  movl   $0x4,(%esp)
08533ecb +0x303:  call   08725800 <__cxa_allocate_exception>
08533ed0 +0x308:  mov    %eax,%edx
08533ed2 +0x30a:  mov    -0x24(%ebp),%ecx
08533ed5 +0x30d:  mov    %ecx,(%edx)
08533ed7 +0x30f:  movl   $0x0,0x8(%esp)
08533edf +0x317:  movl   $&_ZTIi,0x4(%esp)
08533ee7 +0x31f:  mov    %eax,(%esp)
08533eea +0x322:  call   08724c50 <__cxa_throw>
08533eef +0x327:  mov    0x8(%ebp),%eax
08533ef2 +0x32a:  mov    0x3c4(%eax),%eax
08533ef8 +0x330:  mov    (%eax),%eax
08533efa +0x332:  add    $0x4,%eax
08533efd +0x335:  mov    (%eax),%edx
08533eff +0x337:  mov    0x8(%ebp),%eax
08533f02 +0x33a:  mov    0x3c4(%eax),%eax
08533f08 +0x340:  movl   $"Etc/ItemDropInfo_Object.etc",0x4(%esp)
08533f10 +0x348:  mov    %eax,(%esp)
08533f13 +0x34b:  call   *%edx
08533f15 +0x34d:  mov    %eax,-0x24(%ebp)
08533f18 +0x350:  cmpl   $0x0,-0x24(%ebp)
08533f1c +0x354:  setne  %al
08533f1f +0x357:  test   %al,%al
08533f21 +0x359:  je     08533f4e <+0x386>
08533f23 +0x35b:  movl   $0x4,(%esp)
08533f2a +0x362:  call   08725800 <__cxa_allocate_exception>
08533f2f +0x367:  mov    %eax,%edx
08533f31 +0x369:  mov    -0x24(%ebp),%ecx
08533f34 +0x36c:  mov    %ecx,(%edx)
08533f36 +0x36e:  movl   $0x0,0x8(%esp)
08533f3e +0x376:  movl   $&_ZTIi,0x4(%esp)
08533f46 +0x37e:  mov    %eax,(%esp)
08533f49 +0x381:  call   08724c50 <__cxa_throw>
08533f4e +0x386:  mov    0x8(%ebp),%eax
08533f51 +0x389:  mov    0x3c8(%eax),%eax
08533f57 +0x38f:  mov    (%eax),%eax
08533f59 +0x391:  add    $0x4,%eax
08533f5c +0x394:  mov    (%eax),%edx
08533f5e +0x396:  mov    0x8(%ebp),%eax
08533f61 +0x399:  mov    0x3c8(%eax),%eax
08533f67 +0x39f:  movl   $"Etc/ItemDropInfo_ClearReward.etc",0x4(%esp)
08533f6f +0x3a7:  mov    %eax,(%esp)
08533f72 +0x3aa:  call   *%edx
08533f74 +0x3ac:  mov    %eax,-0x24(%ebp)
08533f77 +0x3af:  cmpl   $0x0,-0x24(%ebp)
08533f7b +0x3b3:  setne  %al
08533f7e +0x3b6:  test   %al,%al
08533f80 +0x3b8:  je     08533fad <+0x3e5>
08533f82 +0x3ba:  movl   $0x4,(%esp)
08533f89 +0x3c1:  call   08725800 <__cxa_allocate_exception>
08533f8e +0x3c6:  mov    %eax,%edx
08533f90 +0x3c8:  mov    -0x24(%ebp),%ecx
08533f93 +0x3cb:  mov    %ecx,(%edx)
08533f95 +0x3cd:  movl   $0x0,0x8(%esp)
08533f9d +0x3d5:  movl   $&_ZTIi,0x4(%esp)
08533fa5 +0x3dd:  mov    %eax,(%esp)
08533fa8 +0x3e0:  call   08724c50 <__cxa_throw>
08533fad +0x3e5:  mov    0x8(%ebp),%eax
08533fb0 +0x3e8:  mov    0x3cc(%eax),%eax
08533fb6 +0x3ee:  movl   $"Etc/WorldDropWarArea.etc",0x8(%esp)
08533fbe +0x3f6:  movl   $"Etc/WorldDrop.etc",0x4(%esp)
08533fc6 +0x3fe:  mov    %eax,(%esp)
08533fc9 +0x401:  call   0853855c <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_>  ; WongWork::CWorldDrop::loadScript(char const*, char const*)
08533fce +0x406:  mov    %eax,-0x24(%ebp)
08533fd1 +0x409:  cmpl   $0x0,-0x24(%ebp)
08533fd5 +0x40d:  setne  %al
08533fd8 +0x410:  test   %al,%al
08533fda +0x412:  je     08534007 <+0x43f>
08533fdc +0x414:  movl   $0x4,(%esp)
08533fe3 +0x41b:  call   08725800 <__cxa_allocate_exception>
08533fe8 +0x420:  mov    %eax,%edx
08533fea +0x422:  mov    -0x24(%ebp),%ecx
08533fed +0x425:  mov    %ecx,(%edx)
08533fef +0x427:  movl   $0x0,0x8(%esp)
08533ff7 +0x42f:  movl   $&_ZTIi,0x4(%esp)
08533fff +0x437:  mov    %eax,(%esp)
08534002 +0x43a:  call   08724c50 <__cxa_throw>
08534007 +0x43f:  mov    0x8(%ebp),%eax
0853400a +0x442:  mov    0x3d0(%eax),%eax
08534010 +0x448:  mov    (%eax),%eax
08534012 +0x44a:  add    $0x4,%eax
08534015 +0x44d:  mov    (%eax),%edx
08534017 +0x44f:  mov    0x8(%ebp),%eax
0853401a +0x452:  mov    0x3d0(%eax),%eax
08534020 +0x458:  movl   $"",0x4(%esp)
08534028 +0x460:  mov    %eax,(%esp)
0853402b +0x463:  call   *%edx
0853402d +0x465:  mov    %eax,-0x24(%ebp)
08534030 +0x468:  cmpl   $0x0,-0x24(%ebp)
08534034 +0x46c:  setne  %al
08534037 +0x46f:  test   %al,%al
08534039 +0x471:  je     08534066 <+0x49e>
0853403b +0x473:  movl   $0x4,(%esp)
08534042 +0x47a:  call   08725800 <__cxa_allocate_exception>
08534047 +0x47f:  mov    %eax,%edx
08534049 +0x481:  mov    -0x24(%ebp),%ecx
0853404c +0x484:  mov    %ecx,(%edx)
0853404e +0x486:  movl   $0x0,0x8(%esp)
08534056 +0x48e:  movl   $&_ZTIi,0x4(%esp)
0853405e +0x496:  mov    %eax,(%esp)
08534061 +0x499:  call   08724c50 <__cxa_throw>
08534066 +0x49e:  mov    0x8(%ebp),%eax
08534069 +0x4a1:  mov    0x3d4(%eax),%eax
0853406f +0x4a7:  movl   $"Etc/WorldDropWarAreaPCRoom.etc",0x8(%esp)
08534077 +0x4af:  movl   $"Etc/WorldDropPCRoom.etc",0x4(%esp)
0853407f +0x4b7:  mov    %eax,(%esp)
08534082 +0x4ba:  call   0853855c <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_>  ; WongWork::CWorldDrop::loadScript(char const*, char const*)
08534087 +0x4bf:  mov    %eax,-0x24(%ebp)
0853408a +0x4c2:  cmpl   $0x0,-0x24(%ebp)
0853408e +0x4c6:  setne  %al
08534091 +0x4c9:  test   %al,%al
08534093 +0x4cb:  je     085340c0 <+0x4f8>
08534095 +0x4cd:  movl   $0x4,(%esp)
0853409c +0x4d4:  call   08725800 <__cxa_allocate_exception>
085340a1 +0x4d9:  mov    %eax,%edx
085340a3 +0x4db:  mov    -0x24(%ebp),%ecx
085340a6 +0x4de:  mov    %ecx,(%edx)
085340a8 +0x4e0:  movl   $0x0,0x8(%esp)
085340b0 +0x4e8:  movl   $&_ZTIi,0x4(%esp)
085340b8 +0x4f0:  mov    %eax,(%esp)
085340bb +0x4f3:  call   08724c50 <__cxa_throw>
085340c0 +0x4f8:  mov    0x8(%ebp),%eax
085340c3 +0x4fb:  mov    0x3d8(%eax),%eax
085340c9 +0x501:  movl   $"Etc/WorldDropWarAreaPCRoom.etc",0x8(%esp)
085340d1 +0x509:  movl   $"Etc/WorldDropPCRoom2.etc",0x4(%esp)
085340d9 +0x511:  mov    %eax,(%esp)
085340dc +0x514:  call   0853855c <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_>  ; WongWork::CWorldDrop::loadScript(char const*, char const*)
085340e1 +0x519:  mov    %eax,-0x24(%ebp)
085340e4 +0x51c:  cmpl   $0x0,-0x24(%ebp)
085340e8 +0x520:  setne  %al
085340eb +0x523:  test   %al,%al
085340ed +0x525:  je     0853411a <+0x552>
085340ef +0x527:  movl   $0x4,(%esp)
085340f6 +0x52e:  call   08725800 <__cxa_allocate_exception>
085340fb +0x533:  mov    %eax,%edx
085340fd +0x535:  mov    -0x24(%ebp),%ecx
08534100 +0x538:  mov    %ecx,(%edx)
08534102 +0x53a:  movl   $0x0,0x8(%esp)
0853410a +0x542:  movl   $&_ZTIi,0x4(%esp)
08534112 +0x54a:  mov    %eax,(%esp)
08534115 +0x54d:  call   08724c50 <__cxa_throw>
0853411a +0x552:  mov    0x8(%ebp),%eax
0853411d +0x555:  add    $0x3e0,%eax
08534122 +0x55a:  movl   $"Etc/ItemDropInfo_Common.etc",0x4(%esp)
0853412a +0x562:  mov    %eax,(%esp)
0853412d +0x565:  call   08534456 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc>  ; WongWork::CGeneratorCommonData::loadScript(char const*)
08534132 +0x56a:  mov    %eax,-0x24(%ebp)
08534135 +0x56d:  cmpl   $0x0,-0x24(%ebp)
08534139 +0x571:  setne  %al
0853413c +0x574:  test   %al,%al
0853413e +0x576:  je     085341ea <+0x622>
08534144 +0x57c:  movl   $0x4,(%esp)
0853414b +0x583:  call   08725800 <__cxa_allocate_exception>
08534150 +0x588:  mov    %eax,%edx
08534152 +0x58a:  mov    -0x24(%ebp),%ecx
08534155 +0x58d:  mov    %ecx,(%edx)
08534157 +0x58f:  movl   $0x0,0x8(%esp)
0853415f +0x597:  movl   $&_ZTIi,0x4(%esp)
08534167 +0x59f:  mov    %eax,(%esp)
0853416a +0x5a2:  call   08724c50 <__cxa_throw>
0853416f +0x5a7:  cmp    $0x1,%edx
08534172 +0x5aa:  je     0853417c <+0x5b4>
08534174 +0x5ac:  mov    %eax,(%esp)
08534177 +0x5af:  call   08ae3750 <_Unwind_Resume>
0853417c +0x5b4:  mov    %eax,(%esp)
0853417f +0x5b7:  call   08725ce0 <__cxa_begin_catch>
08534184 +0x5bc:  mov    (%eax),%eax
08534186 +0x5be:  mov    %eax,-0x20(%ebp)
08534189 +0x5c1:  movl   $0x5,0xc(%esp)
08534191 +0x5c9:  movl   $0x19a,0x8(%esp)
08534199 +0x5d1:  movl   $&_ZZN8WongWork17CItemGeneratorMgr10initializeEvE19__PRETTY_FUNCTION__,0x4(%esp)
085341a1 +0x5d9:  lea    -0x34(%ebp),%eax
085341a4 +0x5dc:  mov    %eax,(%esp)
085341a7 +0x5df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085341ac +0x5e4:  mov    -0x20(%ebp),%eax
085341af +0x5e7:  mov    %eax,0x8(%esp)
085341b3 +0x5eb:  movl   $"script load fail. line(%d)",0x4(%esp)
085341bb +0x5f3:  lea    -0x34(%ebp),%eax
085341be +0x5f6:  mov    %eax,(%esp)
085341c1 +0x5f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085341c6 +0x5fe:  mov    $0x0,%ebx
085341cb +0x603:  call   08725c30 <__cxa_end_catch>
085341d0 +0x608:  jmp    0853426e <+0x6a6>
085341d5 +0x60d:  mov    %edx,%ebx
085341d7 +0x60f:  mov    %eax,%esi
085341d9 +0x611:  call   08725c30 <__cxa_end_catch>
085341de +0x616:  mov    %esi,%eax
085341e0 +0x618:  mov    %ebx,%edx
085341e2 +0x61a:  mov    %eax,(%esp)
085341e5 +0x61d:  call   08ae3750 <_Unwind_Resume>
085341ea +0x622:  movl   $0x0,-0x1c(%ebp)
085341f1 +0x629:  jmp    0853421b <+0x653>
085341f3 +0x62b:  mov    0x8(%ebp),%eax
085341f6 +0x62e:  lea    0x3e0(%eax),%edx
085341fc +0x634:  mov    -0x1c(%ebp),%ecx
085341ff +0x637:  mov    0x8(%ebp),%eax
08534202 +0x63a:  add    $0xf0,%ecx
08534208 +0x640:  mov    (%eax,%ecx,4),%eax
0853420b +0x643:  mov    %edx,0x4(%esp)
0853420f +0x647:  mov    %eax,(%esp)
08534212 +0x64a:  call   0853a3e2 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x66e>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x66e
08534217 +0x64f:  addl   $0x1,-0x1c(%ebp)
0853421b +0x653:  cmpl   $0x7,-0x1c(%ebp)
0853421f +0x657:  setle  %al
08534222 +0x65a:  test   %al,%al
08534224 +0x65c:  jne    085341f3 <+0x62b>
08534226 +0x65e:  mov    0x8(%ebp),%eax
08534229 +0x661:  movl   $0x3c0,0x8(%esp)
08534231 +0x669:  movl   $0x0,0x4(%esp)
08534239 +0x671:  mov    %eax,(%esp)
0853423c +0x674:  call   0807dcc0 <_init+0x5b8>
08534241 +0x679:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08534248 +0x680:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0853424d +0x685:  mov    %eax,(%esp)
08534250 +0x688:  call   08637318 <_ZN33TimerUpdateItemGenerateStatistics15registNextTimerEl>  ; TimerUpdateItemGenerateStatistics::registNextTimer(long)
08534255 +0x68d:  mov    $0x3f800000,%eax
0853425a +0x692:  mov    %eax,0x4(%esp)
0853425e +0x696:  mov    0x8(%ebp),%eax
08534261 +0x699:  mov    %eax,(%esp)
08534264 +0x69c:  call   08534278 <_ZN8WongWork17CItemGeneratorMgr12setDropRatioEf>  ; WongWork::CItemGeneratorMgr::setDropRatio(float)
08534269 +0x6a1:  mov    $0x1,%ebx
0853426e +0x6a6:  mov    %ebx,%eax
08534270 +0x6a8:  add    $0x3c,%esp
08534273 +0x6ab:  pop    %ebx
08534274 +0x6ac:  pop    %esi
08534275 +0x6ad:  pop    %edi
08534276 +0x6ae:  pop    %ebp
08534277 +0x6af:  ret
```

## 反编译 C

```c
// WongWork::CItemGeneratorMgr::initialize @ 0x8533bc8

/* WongWork::CItemGeneratorMgr::initialize() */

undefined4 __thiscall WongWork::CItemGeneratorMgr::initialize(CItemGeneratorMgr *this)

{
  CMonsterDrop *this_00;
  CObjectDrop *this_01;
  CClearReward *this_02;
  CWorldDrop *pCVar1;
  CDungeonDrop *this_03;
  int iVar2;
  int *piVar3;
  long lVar4;
  int local_20;
  
  this_00 = operator_new(0x2593a4);
                    /* try { // try from 08533bec to 08533bf0 has its CatchHandler @ 08533bf3 */
  CMonsterDrop::CMonsterDrop(this_00,3);
  *(CMonsterDrop **)(this + 0x3c0) = this_00;
  this_01 = operator_new(0x2593a4);
                    /* try { // try from 08533c33 to 08533c37 has its CatchHandler @ 08533c3a */
  CObjectDrop::CObjectDrop(this_01,3);
  *(CObjectDrop **)(this + 0x3c4) = this_01;
  this_02 = operator_new(0x23b84);
                    /* try { // try from 08533c7a to 08533c7e has its CatchHandler @ 08533c81 */
  CClearReward::CClearReward(this_02,5);
  *(CClearReward **)(this + 0x3c8) = this_02;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533cc1 to 08533cc5 has its CatchHandler @ 08533cc8 */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3cc) = pCVar1;
  this_03 = operator_new(0x18);
                    /* try { // try from 08533d08 to 08533d0c has its CatchHandler @ 08533d0f */
  CDungeonDrop::CDungeonDrop(this_03,2);
  *(CDungeonDrop **)(this + 0x3d0) = this_03;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533d4f to 08533d53 has its CatchHandler @ 08533d56 */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3d4) = pCVar1;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533d96 to 08533d9a has its CatchHandler @ 08533d9d */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3d8) = pCVar1;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533ddd to 08533de1 has its CatchHandler @ 08533de4 */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3dc) = pCVar1;
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3c0),0);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3c4),1);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3c8),2);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3cc),3);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3d0),4);
                    /* try { // try from 08533eb1 to 0853416e has its CatchHandler @ 0853416f */
  iVar2 = CMonsterDrop::loadScript
                    (*(CMonsterDrop **)(this + 0x3c0),"Etc/ItemDropInfo_Monseter.etc",
                     "Etc/ItemDropInfo_Monster_Hell.etc","Etc/ItemDropInfo_Monseter_Extra.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = (**(code **)(**(int **)(this + 0x3c4) + 4))
                    (*(undefined4 *)(this + 0x3c4),"Etc/ItemDropInfo_Object.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = (**(code **)(**(int **)(this + 0x3c8) + 4))
                    (*(undefined4 *)(this + 0x3c8),"Etc/ItemDropInfo_ClearReward.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CWorldDrop::loadScript
                    (*(CWorldDrop **)(this + 0x3cc),"Etc/WorldDrop.etc","Etc/WorldDropWarArea.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = (**(code **)(**(int **)(this + 0x3d0) + 4))(*(undefined4 *)(this + 0x3d0),&DAT_08c99500);
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CWorldDrop::loadScript
                    (*(CWorldDrop **)(this + 0x3d4),"Etc/WorldDropPCRoom.etc",
                     "Etc/WorldDropWarAreaPCRoom.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CWorldDrop::loadScript
                    (*(CWorldDrop **)(this + 0x3d8),"Etc/WorldDropPCRoom2.etc",
                     "Etc/WorldDropWarAreaPCRoom.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CGeneratorCommonData::loadScript
                    ((CGeneratorCommonData *)(this + 0x3e0),"Etc/ItemDropInfo_Common.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    CItemGenerator::setCommonData
              (*(CItemGenerator **)(this + (local_20 + 0xf0) * 4),
               (CGeneratorCommonData *)(this + 0x3e0));
  }
  memset(this,0,0x3c0);
  lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  TimerUpdateItemGenerateStatistics::registNextTimer(lVar4);
  setDropRatio(this,1.0);
  return 1;
}
```
