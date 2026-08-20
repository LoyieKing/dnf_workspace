# Arad_ServerStateManager

`_GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev`

`global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to ARAD::Arad_ServerStateManager` | `0x081a9d05` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a9d05  _GLOBAL__I__ZN4ARAD23Arad_ServerStateManagerC2Ev
#           global constructors keyed to ARAD::Arad_ServerStateManager::Arad_ServerStateManager()
# range [0x081a9d05, 0x081ab343]
081a9d05 +0x0000:  push   %ebp
081a9d06 +0x0001:  mov    %esp,%ebp
081a9d08 +0x0003:  sub    $0x18,%esp
081a9d0b +0x0006:  movl   $0xffff,0x4(%esp)
081a9d13 +0x000e:  movl   $0x1,(%esp)
081a9d1a +0x0015:  call   081a9cc5 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081a9d1f +0x001a:  leave
081a9d20 +0x001b:  ret
081a9d21 +0x001c:  nop
081a9d22 +0x001d:  push   %ebp
081a9d23 +0x001e:  mov    %esp,%ebp
081a9d25 +0x0020:  push   %ebx
081a9d26 +0x0021:  sub    $0x4,%esp
081a9d29 +0x0024:  mov    0xc(%ebp),%eax
081a9d2c +0x0027:  mov    %al,-0x8(%ebp)
081a9d2f +0x002a:  mov    0x8(%ebp),%eax
081a9d32 +0x002d:  movzbl -0x8(%ebp),%edx
081a9d36 +0x0031:  mov    %dl,(%eax)
081a9d38 +0x0033:  mov    0x8(%ebp),%eax
081a9d3b +0x0036:  mov    0x1(%eax),%edx
081a9d3e +0x0039:  mov    0x8(%ebp),%ecx
081a9d41 +0x003c:  mov    %edx,%eax
081a9d43 +0x003e:  shl    $0x2,%eax
081a9d46 +0x0041:  add    %edx,%eax
081a9d48 +0x0043:  shl    $0x2,%eax
081a9d4b +0x0046:  mov    0x10(%ebp),%edx
081a9d4e +0x0049:  mov    %edx,0x5(%eax,%ecx,1)
081a9d52 +0x004d:  mov    0x8(%ebp),%eax
081a9d55 +0x0050:  mov    0x1(%eax),%edx
081a9d58 +0x0053:  mov    0x8(%ebp),%ecx
081a9d5b +0x0056:  mov    %edx,%eax
081a9d5d +0x0058:  shl    $0x2,%eax
081a9d60 +0x005b:  add    %edx,%eax
081a9d62 +0x005d:  shl    $0x2,%eax
081a9d65 +0x0060:  mov    0x14(%ebp),%edx
081a9d68 +0x0063:  mov    %edx,0x9(%eax,%ecx,1)
081a9d6c +0x0067:  mov    0x8(%ebp),%eax
081a9d6f +0x006a:  mov    0x1(%eax),%ecx
081a9d72 +0x006d:  mov    0x8(%ebp),%edx
081a9d75 +0x0070:  mov    %ecx,%eax
081a9d77 +0x0072:  shl    $0x2,%eax
081a9d7a +0x0075:  add    %ecx,%eax
081a9d7c +0x0077:  shl    $0x2,%eax
081a9d7f +0x007a:  mov    0x18(%ebp),%ecx
081a9d82 +0x007d:  mov    (%ecx),%ebx
081a9d84 +0x007f:  mov    %ebx,0xd(%eax,%edx,1)
081a9d88 +0x0083:  mov    0x4(%ecx),%ebx
081a9d8b +0x0086:  mov    %ebx,0x11(%eax,%edx,1)
081a9d8f +0x008a:  mov    0x8(%ecx),%ecx
081a9d92 +0x008d:  mov    %ecx,0x15(%eax,%edx,1)
081a9d96 +0x0091:  mov    0x8(%ebp),%eax
081a9d99 +0x0094:  mov    0x1(%eax),%eax
081a9d9c +0x0097:  lea    0x1(%eax),%edx
081a9d9f +0x009a:  mov    0x8(%ebp),%eax
081a9da2 +0x009d:  mov    %edx,0x1(%eax)
081a9da5 +0x00a0:  add    $0x4,%esp
081a9da8 +0x00a3:  pop    %ebx
081a9da9 +0x00a4:  pop    %ebp
081a9daa +0x00a5:  ret
081a9dab +0x00a6:  nop
081a9dac +0x00a7:  push   %ebp
081a9dad +0x00a8:  mov    %esp,%ebp
081a9daf +0x00aa:  mov    0x8(%ebp),%eax
081a9db2 +0x00ad:  mov    0xc(%ebp),%edx
081a9db5 +0x00b0:  mov    %edx,(%eax)
081a9db7 +0x00b2:  pop    %ebp
081a9db8 +0x00b3:  ret
081a9db9 +0x00b4:  nop
081a9dba +0x00b5:  push   %ebp
081a9dbb +0x00b6:  mov    %esp,%ebp
081a9dbd +0x00b8:  pop    %ebp
081a9dbe +0x00b9:  ret
081a9dbf +0x00ba:  nop
081a9dc0 +0x00bb:  push   %ebp
081a9dc1 +0x00bc:  mov    %esp,%ebp
081a9dc3 +0x00be:  sub    $0x18,%esp
081a9dc6 +0x00c1:  mov    0xc(%ebp),%eax
081a9dc9 +0x00c4:  lea    0x4(%eax),%ecx
081a9dcc +0x00c7:  mov    0xc(%ebp),%eax
081a9dcf +0x00ca:  mov    (%eax),%eax
081a9dd1 +0x00cc:  mov    %eax,%edx
081a9dd3 +0x00ce:  mov    0x8(%ebp),%eax
081a9dd6 +0x00d1:  mov    (%eax),%eax
081a9dd8 +0x00d3:  mov    %ecx,0xc(%esp)
081a9ddc +0x00d7:  mov    %edx,0x8(%esp)
081a9de0 +0x00db:  movl   $0x1,0x4(%esp)
081a9de8 +0x00e3:  mov    %eax,(%esp)
081a9deb +0x00e6:  call   081978dd <_ZN4ARAD23notifyOpenMessageDialogEP5CUseriiRK22AradServerStateMessage>  ; ARAD::notifyOpenMessageDialog(CUser*, int, int, AradServerStateMessage const&)
081a9df0 +0x00eb:  leave
081a9df1 +0x00ec:  ret
081a9df2 +0x00ed:  push   %ebp
081a9df3 +0x00ee:  mov    %esp,%ebp
081a9df5 +0x00f0:  sub    $0x18,%esp
081a9df8 +0x00f3:  mov    0x8(%ebp),%eax
081a9dfb +0x00f6:  mov    %eax,(%esp)
081a9dfe +0x00f9:  call   081a9e2e <+0x129>
081a9e03 +0x00fe:  leave
081a9e04 +0x00ff:  ret
081a9e05 +0x0100:  nop
081a9e06 +0x0101:  push   %ebp
081a9e07 +0x0102:  mov    %esp,%ebp
081a9e09 +0x0104:  sub    $0x18,%esp
081a9e0c +0x0107:  mov    0x8(%ebp),%eax
081a9e0f +0x010a:  mov    %eax,(%esp)
081a9e12 +0x010d:  call   081aa100 <+0x3fb>
081a9e17 +0x0112:  leave
081a9e18 +0x0113:  ret
081a9e19 +0x0114:  nop
081a9e1a +0x0115:  push   %ebp
081a9e1b +0x0116:  mov    %esp,%ebp
081a9e1d +0x0118:  sub    $0x18,%esp
081a9e20 +0x011b:  mov    0x8(%ebp),%eax
081a9e23 +0x011e:  mov    %eax,(%esp)
081a9e26 +0x0121:  call   081aa114 <+0x40f>
081a9e2b +0x0126:  leave
081a9e2c +0x0127:  ret
081a9e2d +0x0128:  nop
081a9e2e +0x0129:  push   %ebp
081a9e2f +0x012a:  mov    %esp,%ebp
081a9e31 +0x012c:  push   %esi
081a9e32 +0x012d:  push   %ebx
081a9e33 +0x012e:  sub    $0x10,%esp
081a9e36 +0x0131:  mov    0x8(%ebp),%eax
081a9e39 +0x0134:  mov    %eax,(%esp)
081a9e3c +0x0137:  call   081aa17e <+0x479>
081a9e41 +0x013c:  mov    %eax,0x4(%esp)
081a9e45 +0x0140:  mov    0x8(%ebp),%eax
081a9e48 +0x0143:  mov    %eax,(%esp)
081a9e4b +0x0146:  call   081aa128 <+0x423>
081a9e50 +0x014b:  jmp    081a9e6d <+0x168>
081a9e52 +0x014d:  mov    %edx,%ebx
081a9e54 +0x014f:  mov    %eax,%esi
081a9e56 +0x0151:  mov    0x8(%ebp),%eax
081a9e59 +0x0154:  mov    %eax,(%esp)
081a9e5c +0x0157:  call   081a9e1a <+0x115>
081a9e61 +0x015c:  mov    %esi,%eax
081a9e63 +0x015e:  mov    %ebx,%edx
081a9e65 +0x0160:  mov    %eax,(%esp)
081a9e68 +0x0163:  call   08ae3750 <_Unwind_Resume>
081a9e6d +0x0168:  mov    0x8(%ebp),%eax
081a9e70 +0x016b:  mov    %eax,(%esp)
081a9e73 +0x016e:  call   081a9e1a <+0x115>
081a9e78 +0x0173:  add    $0x10,%esp
081a9e7b +0x0176:  pop    %ebx
081a9e7c +0x0177:  pop    %esi
081a9e7d +0x0178:  pop    %ebp
081a9e7e +0x0179:  ret
081a9e7f +0x017a:  nop
081a9e80 +0x017b:  push   %ebp
081a9e81 +0x017c:  mov    %esp,%ebp
081a9e83 +0x017e:  sub    $0x18,%esp
081a9e86 +0x0181:  mov    0x8(%ebp),%eax
081a9e89 +0x0184:  mov    0xc(%ebp),%edx
081a9e8c +0x0187:  mov    %edx,0x4(%esp)
081a9e90 +0x018b:  mov    %eax,(%esp)
081a9e93 +0x018e:  call   081aa18a <+0x485>
081a9e98 +0x0193:  leave
081a9e99 +0x0194:  ret
081a9e9a +0x0195:  push   %ebp
081a9e9b +0x0196:  mov    %esp,%ebp
081a9e9d +0x0198:  push   %ebx
081a9e9e +0x0199:  sub    $0x14,%esp
081a9ea1 +0x019c:  mov    0x8(%ebp),%ebx
081a9ea4 +0x019f:  mov    0xc(%ebp),%eax
081a9ea7 +0x01a2:  mov    %eax,0x4(%esp)
081a9eab +0x01a6:  mov    %ebx,(%esp)
081a9eae +0x01a9:  call   081aa1ea <+0x4e5>
081a9eb3 +0x01ae:  sub    $0x4,%esp
081a9eb6 +0x01b1:  mov    %ebx,%eax
081a9eb8 +0x01b3:  mov    -0x4(%ebp),%ebx
081a9ebb +0x01b6:  leave
081a9ebc +0x01b7:  ret    $0x4
081a9ebf +0x01ba:  nop
081a9ec0 +0x01bb:  push   %ebp
081a9ec1 +0x01bc:  mov    %esp,%ebp
081a9ec3 +0x01be:  push   %ebx
081a9ec4 +0x01bf:  sub    $0x14,%esp
081a9ec7 +0x01c2:  mov    0x8(%ebp),%ebx
081a9eca +0x01c5:  mov    0xc(%ebp),%eax
081a9ecd +0x01c8:  mov    %eax,0x4(%esp)
081a9ed1 +0x01cc:  mov    %ebx,(%esp)
081a9ed4 +0x01cf:  call   081aa210 <+0x50b>
081a9ed9 +0x01d4:  sub    $0x4,%esp
081a9edc +0x01d7:  mov    %ebx,%eax
081a9ede +0x01d9:  mov    -0x4(%ebp),%ebx
081a9ee1 +0x01dc:  leave
081a9ee2 +0x01dd:  ret    $0x4
081a9ee5 +0x01e0:  push   %ebp
081a9ee6 +0x01e1:  mov    %esp,%ebp
081a9ee8 +0x01e3:  push   %ebx
081a9ee9 +0x01e4:  sub    $0x14,%esp
081a9eec +0x01e7:  mov    0x8(%ebp),%ebx
081a9eef +0x01ea:  jmp    081a9f16 <+0x211>
081a9ef1 +0x01ec:  lea    0xc(%ebp),%eax
081a9ef4 +0x01ef:  mov    %eax,(%esp)
081a9ef7 +0x01f2:  call   081aa236 <+0x531>
081a9efc +0x01f7:  mov    %eax,0x4(%esp)
081a9f00 +0x01fb:  mov    0x14(%ebp),%eax
081a9f03 +0x01fe:  mov    %eax,(%esp)
081a9f06 +0x0201:  call   081a9dc0 <+0xbb>
081a9f0b +0x0206:  lea    0xc(%ebp),%eax
081a9f0e +0x0209:  mov    %eax,(%esp)
081a9f11 +0x020c:  call   081a9fbc <+0x2b7>
081a9f16 +0x0211:  lea    0x10(%ebp),%eax
081a9f19 +0x0214:  mov    %eax,0x4(%esp)
081a9f1d +0x0218:  lea    0xc(%ebp),%eax
081a9f20 +0x021b:  mov    %eax,(%esp)
081a9f23 +0x021e:  call   081a9f42 <+0x23d>
081a9f28 +0x0223:  test   %al,%al
081a9f2a +0x0225:  jne    081a9ef1 <+0x1ec>
081a9f2c +0x0227:  mov    %ebx,%eax
081a9f2e +0x0229:  mov    0x14(%ebp),%edx
081a9f31 +0x022c:  mov    (%edx),%edx
081a9f33 +0x022e:  mov    %edx,(%eax)
081a9f35 +0x0230:  mov    %ebx,%eax
081a9f37 +0x0232:  mov    %ebx,%eax
081a9f39 +0x0234:  add    $0x14,%esp
081a9f3c +0x0237:  pop    %ebx
081a9f3d +0x0238:  pop    %ebp
081a9f3e +0x0239:  ret    $0x4
081a9f41 +0x023c:  nop
081a9f42 +0x023d:  push   %ebp
081a9f43 +0x023e:  mov    %esp,%ebp
081a9f45 +0x0240:  mov    0x8(%ebp),%eax
081a9f48 +0x0243:  mov    (%eax),%edx
081a9f4a +0x0245:  mov    0xc(%ebp),%eax
081a9f4d +0x0248:  mov    (%eax),%eax
081a9f4f +0x024a:  cmp    %eax,%edx
081a9f51 +0x024c:  setne  %al
081a9f54 +0x024f:  pop    %ebp
081a9f55 +0x0250:  ret
081a9f56 +0x0251:  push   %ebp
081a9f57 +0x0252:  mov    %esp,%ebp
081a9f59 +0x0254:  mov    0x8(%ebp),%eax
081a9f5c +0x0257:  mov    (%eax),%eax
081a9f5e +0x0259:  add    $0x10,%eax
081a9f61 +0x025c:  pop    %ebp
081a9f62 +0x025d:  ret
081a9f63 +0x025e:  nop
081a9f64 +0x025f:  push   %ebp
081a9f65 +0x0260:  mov    %esp,%ebp
081a9f67 +0x0262:  push   %ebx
081a9f68 +0x0263:  sub    $0x14,%esp
081a9f6b +0x0266:  mov    0x8(%ebp),%ebx
081a9f6e +0x0269:  mov    0xc(%ebp),%eax
081a9f71 +0x026c:  movl   $0x4,0x8(%esp)
081a9f79 +0x0274:  mov    %eax,0x4(%esp)
081a9f7d +0x0278:  mov    %ebx,(%esp)
081a9f80 +0x027b:  call   0807d880 <_init+0x178>
081a9f85 +0x0280:  mov    0xc(%ebp),%eax
081a9f88 +0x0283:  mov    (%eax),%eax
081a9f8a +0x0285:  mov    %eax,(%esp)
081a9f8d +0x0288:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081a9f92 +0x028d:  mov    0xc(%ebp),%edx
081a9f95 +0x0290:  mov    %eax,(%edx)
081a9f97 +0x0292:  mov    %ebx,%eax
081a9f99 +0x0294:  add    $0x14,%esp
081a9f9c +0x0297:  pop    %ebx
081a9f9d +0x0298:  pop    %ebp
081a9f9e +0x0299:  ret    $0x4
081a9fa1 +0x029c:  nop
081a9fa2 +0x029d:  push   %ebp
081a9fa3 +0x029e:  mov    %esp,%ebp
081a9fa5 +0x02a0:  sub    $0x18,%esp
081a9fa8 +0x02a3:  mov    0x8(%ebp),%eax
081a9fab +0x02a6:  mov    0xc(%ebp),%edx
081a9fae +0x02a9:  mov    %edx,0x4(%esp)
081a9fb2 +0x02ad:  mov    %eax,(%esp)
081a9fb5 +0x02b0:  call   081aa244 <+0x53f>
081a9fba +0x02b5:  leave
081a9fbb +0x02b6:  ret
081a9fbc +0x02b7:  push   %ebp
081a9fbd +0x02b8:  mov    %esp,%ebp
081a9fbf +0x02ba:  sub    $0x18,%esp
081a9fc2 +0x02bd:  mov    0x8(%ebp),%eax
081a9fc5 +0x02c0:  mov    (%eax),%eax
081a9fc7 +0x02c2:  mov    %eax,(%esp)
081a9fca +0x02c5:  call   086df800 <_ZSt18_Rb_tree_incrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base*)
081a9fcf +0x02ca:  mov    0x8(%ebp),%edx
081a9fd2 +0x02cd:  mov    %eax,(%edx)
081a9fd4 +0x02cf:  mov    0x8(%ebp),%eax
081a9fd7 +0x02d2:  leave
081a9fd8 +0x02d3:  ret
081a9fd9 +0x02d4:  nop
081a9fda +0x02d5:  push   %ebp
081a9fdb +0x02d6:  mov    %esp,%ebp
081a9fdd +0x02d8:  push   %ebx
081a9fde +0x02d9:  sub    $0x54,%esp
081a9fe1 +0x02dc:  lea    -0x30(%ebp),%eax
081a9fe4 +0x02df:  mov    0xc(%ebp),%edx
081a9fe7 +0x02e2:  mov    %edx,0x8(%esp)
081a9feb +0x02e6:  mov    0x8(%ebp),%edx
081a9fee +0x02e9:  mov    %edx,0x4(%esp)
081a9ff2 +0x02ed:  mov    %eax,(%esp)
081a9ff5 +0x02f0:  call   081aa286 <+0x581>
081a9ffa +0x02f5:  sub    $0x4,%esp
081a9ffd +0x02f8:  lea    -0x2c(%ebp),%eax
081aa000 +0x02fb:  mov    0x8(%ebp),%edx
081aa003 +0x02fe:  mov    %edx,0x4(%esp)
081aa007 +0x0302:  mov    %eax,(%esp)
081aa00a +0x0305:  call   081a9ec0 <+0x1bb>
081aa00f +0x030a:  sub    $0x4,%esp
081aa012 +0x030d:  lea    -0x2c(%ebp),%eax
081aa015 +0x0310:  mov    %eax,0x4(%esp)
081aa019 +0x0314:  lea    -0x30(%ebp),%eax
081aa01c +0x0317:  mov    %eax,(%esp)
081aa01f +0x031a:  call   081aa2ee <+0x5e9>
081aa024 +0x031f:  test   %al,%al
081aa026 +0x0321:  jne    081aa064 <+0x35f>
081aa028 +0x0323:  lea    -0x30(%ebp),%eax
081aa02b +0x0326:  mov    %eax,(%esp)
081aa02e +0x0329:  call   081aa236 <+0x531>
081aa033 +0x032e:  mov    %eax,%ebx
081aa035 +0x0330:  lea    -0x25(%ebp),%eax
081aa038 +0x0333:  mov    0x8(%ebp),%edx
081aa03b +0x0336:  mov    %edx,0x4(%esp)
081aa03f +0x033a:  mov    %eax,(%esp)
081aa042 +0x033d:  call   081aa2b2 <+0x5ad>
081aa047 +0x0342:  sub    $0x4,%esp
081aa04a +0x0345:  mov    %ebx,0x8(%esp)
081aa04e +0x0349:  mov    0xc(%ebp),%eax
081aa051 +0x034c:  mov    %eax,0x4(%esp)
081aa055 +0x0350:  lea    -0x25(%ebp),%eax
081aa058 +0x0353:  mov    %eax,(%esp)
081aa05b +0x0356:  call   081aa2d8 <+0x5d3>
081aa060 +0x035b:  test   %al,%al
081aa062 +0x035d:  je     081aa06b <+0x366>
081aa064 +0x035f:  mov    $0x1,%eax
081aa069 +0x0364:  jmp    081aa070 <+0x36b>
081aa06b +0x0366:  mov    $0x0,%eax
081aa070 +0x036b:  test   %al,%al
081aa072 +0x036d:  je     081aa0c1 <+0x3bc>
081aa074 +0x036f:  lea    -0x14(%ebp),%eax
081aa077 +0x0372:  mov    %eax,(%esp)
081aa07a +0x0375:  call   08186652 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x1c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x1c
081aa07f +0x037a:  lea    -0x14(%ebp),%eax
081aa082 +0x037d:  mov    %eax,0x8(%esp)
081aa086 +0x0381:  mov    0xc(%ebp),%eax
081aa089 +0x0384:  mov    %eax,0x4(%esp)
081aa08d +0x0388:  lea    -0x24(%ebp),%eax
081aa090 +0x038b:  mov    %eax,(%esp)
081aa093 +0x038e:  call   081aa302 <+0x5fd>
081aa098 +0x0393:  lea    -0x3c(%ebp),%eax
081aa09b +0x0396:  lea    -0x24(%ebp),%edx
081aa09e +0x0399:  mov    %edx,0xc(%esp)
081aa0a2 +0x039d:  mov    -0x30(%ebp),%edx
081aa0a5 +0x03a0:  mov    %edx,0x8(%esp)
081aa0a9 +0x03a4:  mov    0x8(%ebp),%edx
081aa0ac +0x03a7:  mov    %edx,0x4(%esp)
081aa0b0 +0x03ab:  mov    %eax,(%esp)
081aa0b3 +0x03ae:  call   081aa33c <+0x637>
081aa0b8 +0x03b3:  sub    $0x4,%esp
081aa0bb +0x03b6:  mov    -0x3c(%ebp),%eax
081aa0be +0x03b9:  mov    %eax,-0x30(%ebp)
081aa0c1 +0x03bc:  lea    -0x30(%ebp),%eax
081aa0c4 +0x03bf:  mov    %eax,(%esp)
081aa0c7 +0x03c2:  call   081aa236 <+0x531>
081aa0cc +0x03c7:  add    $0x4,%eax
081aa0cf +0x03ca:  mov    -0x4(%ebp),%ebx
081aa0d2 +0x03cd:  leave
081aa0d3 +0x03ce:  ret
081aa0d4 +0x03cf:  push   %ebp
081aa0d5 +0x03d0:  mov    %esp,%ebp
081aa0d7 +0x03d2:  push   %ebx
081aa0d8 +0x03d3:  sub    $0x14,%esp
081aa0db +0x03d6:  mov    0x8(%ebp),%ebx
081aa0de +0x03d9:  mov    0xc(%ebp),%eax
081aa0e1 +0x03dc:  mov    0x10(%ebp),%edx
081aa0e4 +0x03df:  mov    %edx,0x8(%esp)
081aa0e8 +0x03e3:  mov    %eax,0x4(%esp)
081aa0ec +0x03e7:  mov    %ebx,(%esp)
081aa0ef +0x03ea:  call   081aa382 <+0x67d>
081aa0f4 +0x03ef:  sub    $0x4,%esp
081aa0f7 +0x03f2:  mov    %ebx,%eax
081aa0f9 +0x03f4:  mov    -0x4(%ebp),%ebx
081aa0fc +0x03f7:  leave
081aa0fd +0x03f8:  ret    $0x4
081aa100 +0x03fb:  push   %ebp
081aa101 +0x03fc:  mov    %esp,%ebp
081aa103 +0x03fe:  sub    $0x18,%esp
081aa106 +0x0401:  mov    0x8(%ebp),%eax
081aa109 +0x0404:  mov    %eax,(%esp)
081aa10c +0x0407:  call   081aa440 <+0x73b>
081aa111 +0x040c:  leave
081aa112 +0x040d:  ret
081aa113 +0x040e:  nop
081aa114 +0x040f:  push   %ebp
081aa115 +0x0410:  mov    %esp,%ebp
081aa117 +0x0412:  sub    $0x18,%esp
081aa11a +0x0415:  mov    0x8(%ebp),%eax
081aa11d +0x0418:  mov    %eax,(%esp)
081aa120 +0x041b:  call   081aa490 <+0x78b>
081aa125 +0x0420:  leave
081aa126 +0x0421:  ret
081aa127 +0x0422:  nop
081aa128 +0x0423:  push   %ebp
081aa129 +0x0424:  mov    %esp,%ebp
081aa12b +0x0426:  sub    $0x28,%esp
081aa12e +0x0429:  jmp    081aa170 <+0x46b>
081aa130 +0x042b:  mov    0xc(%ebp),%eax
081aa133 +0x042e:  mov    %eax,(%esp)
081aa136 +0x0431:  call   081aa495 <+0x790>
081aa13b +0x0436:  mov    %eax,0x4(%esp)
081aa13f +0x043a:  mov    0x8(%ebp),%eax
081aa142 +0x043d:  mov    %eax,(%esp)
081aa145 +0x0440:  call   081aa128 <+0x423>
081aa14a +0x0445:  mov    0xc(%ebp),%eax
081aa14d +0x0448:  mov    %eax,(%esp)
081aa150 +0x044b:  call   081aa4a0 <+0x79b>
081aa155 +0x0450:  mov    %eax,-0xc(%ebp)
081aa158 +0x0453:  mov    0xc(%ebp),%eax
081aa15b +0x0456:  mov    %eax,0x4(%esp)
081aa15f +0x045a:  mov    0x8(%ebp),%eax
081aa162 +0x045d:  mov    %eax,(%esp)
081aa165 +0x0460:  call   081aa4ac <+0x7a7>
081aa16a +0x0465:  mov    -0xc(%ebp),%eax
081aa16d +0x0468:  mov    %eax,0xc(%ebp)
081aa170 +0x046b:  cmpl   $0x0,0xc(%ebp)
081aa174 +0x046f:  setne  %al
081aa177 +0x0472:  test   %al,%al
081aa179 +0x0474:  jne    081aa130 <+0x42b>
081aa17b +0x0476:  leave
081aa17c +0x0477:  ret
081aa17d +0x0478:  nop
081aa17e +0x0479:  push   %ebp
081aa17f +0x047a:  mov    %esp,%ebp
081aa181 +0x047c:  mov    0x8(%ebp),%eax
081aa184 +0x047f:  mov    0x8(%eax),%eax
081aa187 +0x0482:  pop    %ebp
081aa188 +0x0483:  ret
081aa189 +0x0484:  nop
081aa18a +0x0485:  push   %ebp
081aa18b +0x0486:  mov    %esp,%ebp
081aa18d +0x0488:  sub    $0x28,%esp
081aa190 +0x048b:  lea    -0x14(%ebp),%eax
081aa193 +0x048e:  mov    0xc(%ebp),%edx
081aa196 +0x0491:  mov    %edx,0x8(%esp)
081aa19a +0x0495:  mov    0x8(%ebp),%edx
081aa19d +0x0498:  mov    %edx,0x4(%esp)
081aa1a1 +0x049c:  mov    %eax,(%esp)
081aa1a4 +0x049f:  call   081aa4e0 <+0x7db>
081aa1a9 +0x04a4:  sub    $0x4,%esp
081aa1ac +0x04a7:  mov    0x8(%ebp),%eax
081aa1af +0x04aa:  mov    %eax,(%esp)
081aa1b2 +0x04ad:  call   081aa66e <+0x969>
081aa1b7 +0x04b2:  mov    %eax,-0xc(%ebp)
081aa1ba +0x04b5:  mov    -0x10(%ebp),%eax
081aa1bd +0x04b8:  mov    %eax,0x8(%esp)
081aa1c1 +0x04bc:  mov    -0x14(%ebp),%eax
081aa1c4 +0x04bf:  mov    %eax,0x4(%esp)
081aa1c8 +0x04c3:  mov    0x8(%ebp),%eax
081aa1cb +0x04c6:  mov    %eax,(%esp)
081aa1ce +0x04c9:  call   081aa67a <+0x975>
081aa1d3 +0x04ce:  mov    0x8(%ebp),%eax
081aa1d6 +0x04d1:  mov    %eax,(%esp)
081aa1d9 +0x04d4:  call   081aa66e <+0x969>
081aa1de +0x04d9:  mov    -0xc(%ebp),%edx
081aa1e1 +0x04dc:  mov    %edx,%ecx
081aa1e3 +0x04de:  sub    %eax,%ecx
081aa1e5 +0x04e0:  mov    %ecx,%eax
081aa1e7 +0x04e2:  leave
081aa1e8 +0x04e3:  ret
081aa1e9 +0x04e4:  nop
081aa1ea +0x04e5:  push   %ebp
081aa1eb +0x04e6:  mov    %esp,%ebp
081aa1ed +0x04e8:  push   %ebx
081aa1ee +0x04e9:  sub    $0x14,%esp
081aa1f1 +0x04ec:  mov    0x8(%ebp),%ebx
081aa1f4 +0x04ef:  mov    0xc(%ebp),%eax
081aa1f7 +0x04f2:  mov    0xc(%eax),%eax
081aa1fa +0x04f5:  mov    %eax,0x4(%esp)
081aa1fe +0x04f9:  mov    %ebx,(%esp)
081aa201 +0x04fc:  call   081aa73a <+0xa35>
081aa206 +0x0501:  mov    %ebx,%eax
081aa208 +0x0503:  add    $0x14,%esp
081aa20b +0x0506:  pop    %ebx
081aa20c +0x0507:  pop    %ebp
081aa20d +0x0508:  ret    $0x4
081aa210 +0x050b:  push   %ebp
081aa211 +0x050c:  mov    %esp,%ebp
081aa213 +0x050e:  push   %ebx
081aa214 +0x050f:  sub    $0x14,%esp
081aa217 +0x0512:  mov    0x8(%ebp),%ebx
081aa21a +0x0515:  mov    0xc(%ebp),%eax
081aa21d +0x0518:  add    $0x4,%eax
081aa220 +0x051b:  mov    %eax,0x4(%esp)
081aa224 +0x051f:  mov    %ebx,(%esp)
081aa227 +0x0522:  call   081aa73a <+0xa35>
081aa22c +0x0527:  mov    %ebx,%eax
081aa22e +0x0529:  add    $0x14,%esp
081aa231 +0x052c:  pop    %ebx
081aa232 +0x052d:  pop    %ebp
081aa233 +0x052e:  ret    $0x4
081aa236 +0x0531:  push   %ebp
081aa237 +0x0532:  mov    %esp,%ebp
081aa239 +0x0534:  mov    0x8(%ebp),%eax
081aa23c +0x0537:  mov    (%eax),%eax
081aa23e +0x0539:  add    $0x10,%eax
081aa241 +0x053c:  pop    %ebp
081aa242 +0x053d:  ret
081aa243 +0x053e:  nop
081aa244 +0x053f:  push   %ebp
081aa245 +0x0540:  mov    %esp,%ebp
081aa247 +0x0542:  sub    $0x28,%esp
081aa24a +0x0545:  mov    0x8(%ebp),%eax
081aa24d +0x0548:  lea    0x4(%eax),%edx
081aa250 +0x054b:  mov    0xc(%ebp),%eax
081aa253 +0x054e:  mov    %edx,0x4(%esp)
081aa257 +0x0552:  mov    %eax,(%esp)
081aa25a +0x0555:  call   086dfc70 <_ZSt28_Rb_tree_rebalance_for_erasePSt18_Rb_tree_node_baseRS_>  ; std::_Rb_tree_rebalance_for_erase(std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081aa25f +0x055a:  mov    %eax,-0xc(%ebp)
081aa262 +0x055d:  mov    -0xc(%ebp),%eax
081aa265 +0x0560:  mov    %eax,0x4(%esp)
081aa269 +0x0564:  mov    0x8(%ebp),%eax
081aa26c +0x0567:  mov    %eax,(%esp)
081aa26f +0x056a:  call   081aa4ac <+0x7a7>
081aa274 +0x056f:  mov    0x8(%ebp),%eax
081aa277 +0x0572:  mov    0x14(%eax),%eax
081aa27a +0x0575:  lea    -0x1(%eax),%edx
081aa27d +0x0578:  mov    0x8(%ebp),%eax
081aa280 +0x057b:  mov    %edx,0x14(%eax)
081aa283 +0x057e:  leave
081aa284 +0x057f:  ret
081aa285 +0x0580:  nop
081aa286 +0x0581:  push   %ebp
081aa287 +0x0582:  mov    %esp,%ebp
081aa289 +0x0584:  push   %ebx
081aa28a +0x0585:  sub    $0x14,%esp
081aa28d +0x0588:  mov    0x8(%ebp),%ebx
081aa290 +0x058b:  mov    0xc(%ebp),%eax
081aa293 +0x058e:  mov    0x10(%ebp),%edx
081aa296 +0x0591:  mov    %edx,0x8(%esp)
081aa29a +0x0595:  mov    %eax,0x4(%esp)
081aa29e +0x0599:  mov    %ebx,(%esp)
081aa2a1 +0x059c:  call   081aa748 <+0xa43>
081aa2a6 +0x05a1:  sub    $0x4,%esp
081aa2a9 +0x05a4:  mov    %ebx,%eax
081aa2ab +0x05a6:  mov    -0x4(%ebp),%ebx
081aa2ae +0x05a9:  leave
081aa2af +0x05aa:  ret    $0x4
081aa2b2 +0x05ad:  push   %ebp
081aa2b3 +0x05ae:  mov    %esp,%ebp
081aa2b5 +0x05b0:  push   %ebx
081aa2b6 +0x05b1:  sub    $0x14,%esp
081aa2b9 +0x05b4:  mov    0x8(%ebp),%ebx
081aa2bc +0x05b7:  mov    0xc(%ebp),%eax
081aa2bf +0x05ba:  mov    %eax,0x4(%esp)
081aa2c3 +0x05be:  mov    %ebx,(%esp)
081aa2c6 +0x05c1:  call   081aa79a <+0xa95>
081aa2cb +0x05c6:  sub    $0x4,%esp
081aa2ce +0x05c9:  mov    %ebx,%eax
081aa2d0 +0x05cb:  mov    -0x4(%ebp),%ebx
081aa2d3 +0x05ce:  leave
081aa2d4 +0x05cf:  ret    $0x4
081aa2d7 +0x05d2:  nop
081aa2d8 +0x05d3:  push   %ebp
081aa2d9 +0x05d4:  mov    %esp,%ebp
081aa2db +0x05d6:  mov    0xc(%ebp),%eax
081aa2de +0x05d9:  mov    (%eax),%eax
081aa2e0 +0x05db:  mov    %eax,%edx
081aa2e2 +0x05dd:  mov    0x10(%ebp),%eax
081aa2e5 +0x05e0:  mov    (%eax),%eax
081aa2e7 +0x05e2:  cmp    %eax,%edx
081aa2e9 +0x05e4:  setl   %al
081aa2ec +0x05e7:  pop    %ebp
081aa2ed +0x05e8:  ret
081aa2ee +0x05e9:  push   %ebp
081aa2ef +0x05ea:  mov    %esp,%ebp
081aa2f1 +0x05ec:  mov    0x8(%ebp),%eax
081aa2f4 +0x05ef:  mov    (%eax),%edx
081aa2f6 +0x05f1:  mov    0xc(%ebp),%eax
081aa2f9 +0x05f4:  mov    (%eax),%eax
081aa2fb +0x05f6:  cmp    %eax,%edx
081aa2fd +0x05f8:  sete   %al
081aa300 +0x05fb:  pop    %ebp
081aa301 +0x05fc:  ret
081aa302 +0x05fd:  push   %ebp
081aa303 +0x05fe:  mov    %esp,%ebp
081aa305 +0x0600:  sub    $0x18,%esp
081aa308 +0x0603:  mov    0xc(%ebp),%eax
081aa30b +0x0606:  mov    %eax,(%esp)
081aa30e +0x0609:  call   081aa7a4 <+0xa9f>
081aa313 +0x060e:  mov    (%eax),%edx
081aa315 +0x0610:  mov    0x8(%ebp),%eax
081aa318 +0x0613:  mov    %edx,(%eax)
081aa31a +0x0615:  mov    0x10(%ebp),%eax
081aa31d +0x0618:  mov    %eax,(%esp)
081aa320 +0x061b:  call   081aa7ac <+0xaa7>
081aa325 +0x0620:  mov    0x8(%ebp),%edx
081aa328 +0x0623:  mov    (%eax),%ecx
081aa32a +0x0625:  mov    %ecx,0x4(%edx)
081aa32d +0x0628:  mov    0x4(%eax),%ecx
081aa330 +0x062b:  mov    %ecx,0x8(%edx)
081aa333 +0x062e:  mov    0x8(%eax),%eax
081aa336 +0x0631:  mov    %eax,0xc(%edx)
081aa339 +0x0634:  leave
081aa33a +0x0635:  ret
081aa33b +0x0636:  nop
081aa33c +0x0637:  push   %ebp
081aa33d +0x0638:  mov    %esp,%ebp
081aa33f +0x063a:  push   %ebx
081aa340 +0x063b:  sub    $0x24,%esp
081aa343 +0x063e:  mov    0x8(%ebp),%ebx
081aa346 +0x0641:  lea    0x10(%ebp),%eax
081aa349 +0x0644:  mov    %eax,0x4(%esp)
081aa34d +0x0648:  lea    -0xc(%ebp),%eax
081aa350 +0x064b:  mov    %eax,(%esp)
081aa353 +0x064e:  call   081aa7b4 <+0xaaf>
081aa358 +0x0653:  mov    0xc(%ebp),%eax
081aa35b +0x0656:  mov    0x14(%ebp),%edx
081aa35e +0x0659:  mov    %edx,0xc(%esp)
081aa362 +0x065d:  mov    -0xc(%ebp),%edx
081aa365 +0x0660:  mov    %edx,0x8(%esp)
081aa369 +0x0664:  mov    %eax,0x4(%esp)
081aa36d +0x0668:  mov    %ebx,(%esp)
081aa370 +0x066b:  call   081aa7c4 <+0xabf>
081aa375 +0x0670:  sub    $0x4,%esp
081aa378 +0x0673:  mov    %ebx,%eax
081aa37a +0x0675:  mov    -0x4(%ebp),%ebx
081aa37d +0x0678:  leave
081aa37e +0x0679:  ret    $0x4
081aa381 +0x067c:  nop
081aa382 +0x067d:  push   %ebp
081aa383 +0x067e:  mov    %esp,%ebp
081aa385 +0x0680:  push   %esi
081aa386 +0x0681:  push   %ebx
081aa387 +0x0682:  sub    $0x30,%esp
081aa38a +0x0685:  mov    0x8(%ebp),%ebx
081aa38d +0x0688:  mov    0xc(%ebp),%eax
081aa390 +0x068b:  mov    %eax,(%esp)
081aa393 +0x068e:  call   081aab8a <+0xe85>
081aa398 +0x0693:  mov    %eax,%esi
081aa39a +0x0695:  mov    0xc(%ebp),%eax
081aa39d +0x0698:  mov    %eax,(%esp)
081aa3a0 +0x069b:  call   081aa17e <+0x479>
081aa3a5 +0x06a0:  lea    -0x10(%ebp),%edx
081aa3a8 +0x06a3:  mov    0x10(%ebp),%ecx
081aa3ab +0x06a6:  mov    %ecx,0x10(%esp)
081aa3af +0x06aa:  mov    %esi,0xc(%esp)
081aa3b3 +0x06ae:  mov    %eax,0x8(%esp)
081aa3b7 +0x06b2:  mov    0xc(%ebp),%eax
081aa3ba +0x06b5:  mov    %eax,0x4(%esp)
081aa3be +0x06b9:  mov    %edx,(%esp)
081aa3c1 +0x06bc:  call   081aab96 <+0xe91>
081aa3c6 +0x06c1:  sub    $0x4,%esp
081aa3c9 +0x06c4:  lea    -0xc(%ebp),%eax
081aa3cc +0x06c7:  mov    0xc(%ebp),%edx
081aa3cf +0x06ca:  mov    %edx,0x4(%esp)
081aa3d3 +0x06ce:  mov    %eax,(%esp)
081aa3d6 +0x06d1:  call   081aa210 <+0x50b>
081aa3db +0x06d6:  sub    $0x4,%esp
081aa3de +0x06d9:  lea    -0xc(%ebp),%eax
081aa3e1 +0x06dc:  mov    %eax,0x4(%esp)
081aa3e5 +0x06e0:  lea    -0x10(%ebp),%eax
081aa3e8 +0x06e3:  mov    %eax,(%esp)
081aa3eb +0x06e6:  call   081aa2ee <+0x5e9>
081aa3f0 +0x06eb:  test   %al,%al
081aa3f2 +0x06ed:  jne    081aa419 <+0x714>
081aa3f4 +0x06ef:  mov    -0x10(%ebp),%eax
081aa3f7 +0x06f2:  mov    %eax,(%esp)
081aa3fa +0x06f5:  call   081aac12 <+0xf0d>
081aa3ff +0x06fa:  mov    0xc(%ebp),%edx
081aa402 +0x06fd:  mov    %eax,0x8(%esp)
081aa406 +0x0701:  mov    0x10(%ebp),%eax
081aa409 +0x0704:  mov    %eax,0x4(%esp)
081aa40d +0x0708:  mov    %edx,(%esp)
081aa410 +0x070b:  call   081aa2d8 <+0x5d3>
081aa415 +0x0710:  test   %al,%al
081aa417 +0x0712:  je     081aa42d <+0x728>
081aa419 +0x0714:  mov    0xc(%ebp),%eax
081aa41c +0x0717:  mov    %eax,0x4(%esp)
081aa420 +0x071b:  mov    %ebx,(%esp)
081aa423 +0x071e:  call   081aa210 <+0x50b>
081aa428 +0x0723:  sub    $0x4,%esp
081aa42b +0x0726:  jmp    081aa432 <+0x72d>
081aa42d +0x0728:  mov    -0x10(%ebp),%eax
081aa430 +0x072b:  mov    %eax,(%ebx)
081aa432 +0x072d:  mov    %ebx,%eax
081aa434 +0x072f:  lea    -0x8(%ebp),%esp
081aa437 +0x0732:  add    $0x0,%esp
081aa43a +0x0735:  pop    %ebx
081aa43b +0x0736:  pop    %esi
081aa43c +0x0737:  pop    %ebp
081aa43d +0x0738:  ret    $0x4
081aa440 +0x073b:  push   %ebp
081aa441 +0x073c:  mov    %esp,%ebp
081aa443 +0x073e:  sub    $0x18,%esp
081aa446 +0x0741:  mov    0x8(%ebp),%eax
081aa449 +0x0744:  mov    %eax,(%esp)
081aa44c +0x0747:  call   081aac34 <+0xf2f>
081aa451 +0x074c:  mov    0x8(%ebp),%eax
081aa454 +0x074f:  movl   $0x0,0x4(%eax)
081aa45b +0x0756:  mov    0x8(%ebp),%eax
081aa45e +0x0759:  movl   $0x0,0x8(%eax)
081aa465 +0x0760:  mov    0x8(%ebp),%eax
081aa468 +0x0763:  movl   $0x0,0xc(%eax)
081aa46f +0x076a:  mov    0x8(%ebp),%eax
081aa472 +0x076d:  movl   $0x0,0x10(%eax)
081aa479 +0x0774:  mov    0x8(%ebp),%eax
081aa47c +0x0777:  movl   $0x0,0x14(%eax)
081aa483 +0x077e:  mov    0x8(%ebp),%eax
081aa486 +0x0781:  mov    %eax,(%esp)
081aa489 +0x0784:  call   081aac48 <+0xf43>
081aa48e +0x0789:  leave
081aa48f +0x078a:  ret
081aa490 +0x078b:  push   %ebp
081aa491 +0x078c:  mov    %esp,%ebp
081aa493 +0x078e:  pop    %ebp
081aa494 +0x078f:  ret
081aa495 +0x0790:  push   %ebp
081aa496 +0x0791:  mov    %esp,%ebp
081aa498 +0x0793:  mov    0x8(%ebp),%eax
081aa49b +0x0796:  mov    0xc(%eax),%eax
081aa49e +0x0799:  pop    %ebp
081aa49f +0x079a:  ret
081aa4a0 +0x079b:  push   %ebp
081aa4a1 +0x079c:  mov    %esp,%ebp
081aa4a3 +0x079e:  mov    0x8(%ebp),%eax
081aa4a6 +0x07a1:  mov    0x8(%eax),%eax
081aa4a9 +0x07a4:  pop    %ebp
081aa4aa +0x07a5:  ret
081aa4ab +0x07a6:  nop
081aa4ac +0x07a7:  push   %ebp
081aa4ad +0x07a8:  mov    %esp,%ebp
081aa4af +0x07aa:  sub    $0x18,%esp
081aa4b2 +0x07ad:  mov    0x8(%ebp),%eax
081aa4b5 +0x07b0:  mov    %eax,(%esp)
081aa4b8 +0x07b3:  call   081aac7a <+0xf75>
081aa4bd +0x07b8:  mov    0xc(%ebp),%edx
081aa4c0 +0x07bb:  mov    %edx,0x4(%esp)
081aa4c4 +0x07bf:  mov    %eax,(%esp)
081aa4c7 +0x07c2:  call   081aac88 <+0xf83>
081aa4cc +0x07c7:  mov    0xc(%ebp),%eax
081aa4cf +0x07ca:  mov    %eax,0x4(%esp)
081aa4d3 +0x07ce:  mov    0x8(%ebp),%eax
081aa4d6 +0x07d1:  mov    %eax,(%esp)
081aa4d9 +0x07d4:  call   081aac9c <+0xf97>
081aa4de +0x07d9:  leave
081aa4df +0x07da:  ret
081aa4e0 +0x07db:  push   %ebp
081aa4e1 +0x07dc:  mov    %esp,%ebp
081aa4e3 +0x07de:  push   %ebx
081aa4e4 +0x07df:  sub    $0x44,%esp
081aa4e7 +0x07e2:  mov    0x8(%ebp),%ebx
081aa4ea +0x07e5:  mov    0xc(%ebp),%eax
081aa4ed +0x07e8:  mov    %eax,(%esp)
081aa4f0 +0x07eb:  call   081aa17e <+0x479>
081aa4f5 +0x07f0:  mov    %eax,-0x18(%ebp)
081aa4f8 +0x07f3:  mov    0xc(%ebp),%eax
081aa4fb +0x07f6:  mov    %eax,(%esp)
081aa4fe +0x07f9:  call   081aab8a <+0xe85>
081aa503 +0x07fe:  mov    %eax,-0x14(%ebp)
081aa506 +0x0801:  jmp    081aa61b <+0x916>
081aa50b +0x0806:  mov    -0x18(%ebp),%eax
081aa50e +0x0809:  mov    %eax,(%esp)
081aa511 +0x080c:  call   081aacbe <+0xfb9>
081aa516 +0x0811:  mov    0xc(%ebp),%edx
081aa519 +0x0814:  mov    0x10(%ebp),%ecx
081aa51c +0x0817:  mov    %ecx,0x8(%esp)
081aa520 +0x081b:  mov    %eax,0x4(%esp)
081aa524 +0x081f:  mov    %edx,(%esp)
081aa527 +0x0822:  call   081aa2d8 <+0x5d3>
081aa52c +0x0827:  test   %al,%al
081aa52e +0x0829:  je     081aa543 <+0x83e>
081aa530 +0x082b:  mov    -0x18(%ebp),%eax
081aa533 +0x082e:  mov    %eax,(%esp)
081aa536 +0x0831:  call   081aa495 <+0x790>
081aa53b +0x0836:  mov    %eax,-0x18(%ebp)
081aa53e +0x0839:  jmp    081aa61b <+0x916>
081aa543 +0x083e:  mov    -0x18(%ebp),%eax
081aa546 +0x0841:  mov    %eax,(%esp)
081aa549 +0x0844:  call   081aacbe <+0xfb9>
081aa54e +0x0849:  mov    0xc(%ebp),%edx
081aa551 +0x084c:  mov    %eax,0x8(%esp)
081aa555 +0x0850:  mov    0x10(%ebp),%eax
081aa558 +0x0853:  mov    %eax,0x4(%esp)
081aa55c +0x0857:  mov    %edx,(%esp)
081aa55f +0x085a:  call   081aa2d8 <+0x5d3>
081aa564 +0x085f:  test   %al,%al
081aa566 +0x0861:  je     081aa581 <+0x87c>
081aa568 +0x0863:  mov    -0x18(%ebp),%eax
081aa56b +0x0866:  mov    %eax,-0x14(%ebp)
081aa56e +0x0869:  mov    -0x18(%ebp),%eax
081aa571 +0x086c:  mov    %eax,(%esp)
081aa574 +0x086f:  call   081aa4a0 <+0x79b>
081aa579 +0x0874:  mov    %eax,-0x18(%ebp)
081aa57c +0x0877:  jmp    081aa61b <+0x916>
081aa581 +0x087c:  mov    -0x18(%ebp),%eax
081aa584 +0x087f:  mov    %eax,-0x10(%ebp)
081aa587 +0x0882:  mov    -0x14(%ebp),%eax
081aa58a +0x0885:  mov    %eax,-0xc(%ebp)
081aa58d +0x0888:  mov    -0x18(%ebp),%eax
081aa590 +0x088b:  mov    %eax,-0x14(%ebp)
081aa593 +0x088e:  mov    -0x18(%ebp),%eax
081aa596 +0x0891:  mov    %eax,(%esp)
081aa599 +0x0894:  call   081aa4a0 <+0x79b>
081aa59e +0x0899:  mov    %eax,-0x18(%ebp)
081aa5a1 +0x089c:  mov    -0x10(%ebp),%eax
081aa5a4 +0x089f:  mov    %eax,(%esp)
081aa5a7 +0x08a2:  call   081aa495 <+0x790>
081aa5ac +0x08a7:  mov    %eax,-0x10(%ebp)
081aa5af +0x08aa:  lea    -0x28(%ebp),%eax
081aa5b2 +0x08ad:  mov    0x10(%ebp),%edx
081aa5b5 +0x08b0:  mov    %edx,0x10(%esp)
081aa5b9 +0x08b4:  mov    -0xc(%ebp),%edx
081aa5bc +0x08b7:  mov    %edx,0xc(%esp)
081aa5c0 +0x08bb:  mov    -0x10(%ebp),%edx
081aa5c3 +0x08be:  mov    %edx,0x8(%esp)
081aa5c7 +0x08c2:  mov    0xc(%ebp),%edx
081aa5ca +0x08c5:  mov    %edx,0x4(%esp)
081aa5ce +0x08c9:  mov    %eax,(%esp)
081aa5d1 +0x08cc:  call   081aace0 <+0xfdb>
081aa5d6 +0x08d1:  sub    $0x4,%esp
081aa5d9 +0x08d4:  lea    -0x24(%ebp),%eax
081aa5dc +0x08d7:  mov    0x10(%ebp),%edx
081aa5df +0x08da:  mov    %edx,0x10(%esp)
081aa5e3 +0x08de:  mov    -0x14(%ebp),%edx
081aa5e6 +0x08e1:  mov    %edx,0xc(%esp)
081aa5ea +0x08e5:  mov    -0x18(%ebp),%edx
081aa5ed +0x08e8:  mov    %edx,0x8(%esp)
081aa5f1 +0x08ec:  mov    0xc(%ebp),%edx
081aa5f4 +0x08ef:  mov    %edx,0x4(%esp)
081aa5f8 +0x08f3:  mov    %eax,(%esp)
081aa5fb +0x08f6:  call   081aab96 <+0xe91>
081aa600 +0x08fb:  sub    $0x4,%esp
081aa603 +0x08fe:  lea    -0x28(%ebp),%eax
081aa606 +0x0901:  mov    %eax,0x8(%esp)
081aa60a +0x0905:  lea    -0x24(%ebp),%eax
081aa60d +0x0908:  mov    %eax,0x4(%esp)
081aa611 +0x090c:  mov    %ebx,(%esp)
081aa614 +0x090f:  call   081aad5a <+0x1055>
081aa619 +0x0914:  jmp    081aa664 <+0x95f>
081aa61b +0x0916:  cmpl   $0x0,-0x18(%ebp)
081aa61f +0x091a:  setne  %al
081aa622 +0x091d:  test   %al,%al
081aa624 +0x091f:  jne    081aa50b <+0x806>
081aa62a +0x0925:  mov    -0x14(%ebp),%eax
081aa62d +0x0928:  mov    %eax,0x4(%esp)
081aa631 +0x092c:  lea    -0x20(%ebp),%eax
081aa634 +0x092f:  mov    %eax,(%esp)
081aa637 +0x0932:  call   081aa73a <+0xa35>
081aa63c +0x0937:  mov    -0x14(%ebp),%eax
081aa63f +0x093a:  mov    %eax,0x4(%esp)
081aa643 +0x093e:  lea    -0x1c(%ebp),%eax
081aa646 +0x0941:  mov    %eax,(%esp)
081aa649 +0x0944:  call   081aa73a <+0xa35>
081aa64e +0x0949:  lea    -0x20(%ebp),%eax
081aa651 +0x094c:  mov    %eax,0x8(%esp)
081aa655 +0x0950:  lea    -0x1c(%ebp),%eax
081aa658 +0x0953:  mov    %eax,0x4(%esp)
081aa65c +0x0957:  mov    %ebx,(%esp)
081aa65f +0x095a:  call   081aad5a <+0x1055>
081aa664 +0x095f:  mov    %ebx,%eax
081aa666 +0x0961:  mov    -0x4(%ebp),%ebx
081aa669 +0x0964:  leave
081aa66a +0x0965:  ret    $0x4
081aa66d +0x0968:  nop
081aa66e +0x0969:  push   %ebp
081aa66f +0x096a:  mov    %esp,%ebp
081aa671 +0x096c:  mov    0x8(%ebp),%eax
081aa674 +0x096f:  mov    0x14(%eax),%eax
081aa677 +0x0972:  pop    %ebp
081aa678 +0x0973:  ret
081aa679 +0x0974:  nop
081aa67a +0x0975:  push   %ebp
081aa67b +0x0976:  mov    %esp,%ebp
081aa67d +0x0978:  sub    $0x28,%esp
081aa680 +0x097b:  lea    -0x14(%ebp),%eax
081aa683 +0x097e:  mov    0x8(%ebp),%edx
081aa686 +0x0981:  mov    %edx,0x4(%esp)
081aa68a +0x0985:  mov    %eax,(%esp)
081aa68d +0x0988:  call   081aa1ea <+0x4e5>
081aa692 +0x098d:  sub    $0x4,%esp
081aa695 +0x0990:  lea    -0x14(%ebp),%eax
081aa698 +0x0993:  mov    %eax,0x4(%esp)
081aa69c +0x0997:  lea    0xc(%ebp),%eax
081aa69f +0x099a:  mov    %eax,(%esp)
081aa6a2 +0x099d:  call   081aa2ee <+0x5e9>
081aa6a7 +0x09a2:  test   %al,%al
081aa6a9 +0x09a4:  je     081aa6dd <+0x9d8>
081aa6ab +0x09a6:  lea    -0x10(%ebp),%eax
081aa6ae +0x09a9:  mov    0x8(%ebp),%edx
081aa6b1 +0x09ac:  mov    %edx,0x4(%esp)
081aa6b5 +0x09b0:  mov    %eax,(%esp)
081aa6b8 +0x09b3:  call   081aa210 <+0x50b>
081aa6bd +0x09b8:  sub    $0x4,%esp
081aa6c0 +0x09bb:  lea    -0x10(%ebp),%eax
081aa6c3 +0x09be:  mov    %eax,0x4(%esp)
081aa6c7 +0x09c2:  lea    0x10(%ebp),%eax
081aa6ca +0x09c5:  mov    %eax,(%esp)
081aa6cd +0x09c8:  call   081aa2ee <+0x5e9>
081aa6d2 +0x09cd:  test   %al,%al
081aa6d4 +0x09cf:  je     081aa6dd <+0x9d8>
081aa6d6 +0x09d1:  mov    $0x1,%eax
081aa6db +0x09d6:  jmp    081aa6e2 <+0x9dd>
081aa6dd +0x09d8:  mov    $0x0,%eax
081aa6e2 +0x09dd:  test   %al,%al
081aa6e4 +0x09df:  je     081aa722 <+0xa1d>
081aa6e6 +0x09e1:  mov    0x8(%ebp),%eax
081aa6e9 +0x09e4:  mov    %eax,(%esp)
081aa6ec +0x09e7:  call   081aad88 <+0x1083>
081aa6f1 +0x09ec:  jmp    081aa738 <+0xa33>
081aa6f3 +0x09ee:  lea    -0xc(%ebp),%eax
081aa6f6 +0x09f1:  movl   $0x0,0x8(%esp)
081aa6fe +0x09f9:  lea    0xc(%ebp),%edx
081aa701 +0x09fc:  mov    %edx,0x4(%esp)
081aa705 +0x0a00:  mov    %eax,(%esp)
081aa708 +0x0a03:  call   081a9f64 <+0x25f>
081aa70d +0x0a08:  sub    $0x4,%esp
081aa710 +0x0a0b:  mov    -0xc(%ebp),%eax
081aa713 +0x0a0e:  mov    %eax,0x4(%esp)
081aa717 +0x0a12:  mov    0x8(%ebp),%eax
081aa71a +0x0a15:  mov    %eax,(%esp)
081aa71d +0x0a18:  call   081aa244 <+0x53f>
081aa722 +0x0a1d:  lea    0x10(%ebp),%eax
081aa725 +0x0a20:  mov    %eax,0x4(%esp)
081aa729 +0x0a24:  lea    0xc(%ebp),%eax
081aa72c +0x0a27:  mov    %eax,(%esp)
081aa72f +0x0a2a:  call   081a9f42 <+0x23d>
081aa734 +0x0a2f:  test   %al,%al
081aa736 +0x0a31:  jne    081aa6f3 <+0x9ee>
081aa738 +0x0a33:  leave
081aa739 +0x0a34:  ret
081aa73a +0x0a35:  push   %ebp
081aa73b +0x0a36:  mov    %esp,%ebp
081aa73d +0x0a38:  mov    0xc(%ebp),%edx
081aa740 +0x0a3b:  mov    0x8(%ebp),%eax
081aa743 +0x0a3e:  mov    %edx,(%eax)
081aa745 +0x0a40:  pop    %ebp
081aa746 +0x0a41:  ret
081aa747 +0x0a42:  nop
081aa748 +0x0a43:  push   %ebp
081aa749 +0x0a44:  mov    %esp,%ebp
081aa74b +0x0a46:  push   %esi
081aa74c +0x0a47:  push   %ebx
081aa74d +0x0a48:  sub    $0x20,%esp
081aa750 +0x0a4b:  mov    0x8(%ebp),%esi
081aa753 +0x0a4e:  mov    0xc(%ebp),%eax
081aa756 +0x0a51:  mov    %eax,(%esp)
081aa759 +0x0a54:  call   081aab8a <+0xe85>
081aa75e +0x0a59:  mov    %eax,%ebx
081aa760 +0x0a5b:  mov    0xc(%ebp),%eax
081aa763 +0x0a5e:  mov    %eax,(%esp)
081aa766 +0x0a61:  call   081aa17e <+0x479>
081aa76b +0x0a66:  mov    0x10(%ebp),%edx
081aa76e +0x0a69:  mov    %edx,0x10(%esp)
081aa772 +0x0a6d:  mov    %ebx,0xc(%esp)
081aa776 +0x0a71:  mov    %eax,0x8(%esp)
081aa77a +0x0a75:  mov    0xc(%ebp),%eax
081aa77d +0x0a78:  mov    %eax,0x4(%esp)
081aa781 +0x0a7c:  mov    %esi,(%esp)
081aa784 +0x0a7f:  call   081aab96 <+0xe91>
081aa789 +0x0a84:  sub    $0x4,%esp
081aa78c +0x0a87:  mov    %esi,%eax
081aa78e +0x0a89:  lea    -0x8(%ebp),%esp
081aa791 +0x0a8c:  add    $0x0,%esp
081aa794 +0x0a8f:  pop    %ebx
081aa795 +0x0a90:  pop    %esi
081aa796 +0x0a91:  pop    %ebp
081aa797 +0x0a92:  ret    $0x4
081aa79a +0x0a95:  push   %ebp
081aa79b +0x0a96:  mov    %esp,%ebp
081aa79d +0x0a98:  mov    0x8(%ebp),%eax
081aa7a0 +0x0a9b:  pop    %ebp
081aa7a1 +0x0a9c:  ret    $0x4
081aa7a4 +0x0a9f:  push   %ebp
081aa7a5 +0x0aa0:  mov    %esp,%ebp
081aa7a7 +0x0aa2:  mov    0x8(%ebp),%eax
081aa7aa +0x0aa5:  pop    %ebp
081aa7ab +0x0aa6:  ret
081aa7ac +0x0aa7:  push   %ebp
081aa7ad +0x0aa8:  mov    %esp,%ebp
081aa7af +0x0aaa:  mov    0x8(%ebp),%eax
081aa7b2 +0x0aad:  pop    %ebp
081aa7b3 +0x0aae:  ret
081aa7b4 +0x0aaf:  push   %ebp
081aa7b5 +0x0ab0:  mov    %esp,%ebp
081aa7b7 +0x0ab2:  mov    0xc(%ebp),%eax
081aa7ba +0x0ab5:  mov    (%eax),%edx
081aa7bc +0x0ab7:  mov    0x8(%ebp),%eax
081aa7bf +0x0aba:  mov    %edx,(%eax)
081aa7c1 +0x0abc:  pop    %ebp
081aa7c2 +0x0abd:  ret
081aa7c3 +0x0abe:  nop
081aa7c4 +0x0abf:  push   %ebp
081aa7c5 +0x0ac0:  mov    %esp,%ebp
081aa7c7 +0x0ac2:  push   %esi
081aa7c8 +0x0ac3:  push   %ebx
081aa7c9 +0x0ac4:  sub    $0x50,%esp
081aa7cc +0x0ac7:  mov    0x8(%ebp),%ebx
081aa7cf +0x0aca:  mov    0x10(%ebp),%esi
081aa7d2 +0x0acd:  mov    0xc(%ebp),%eax
081aa7d5 +0x0ad0:  mov    %eax,(%esp)
081aa7d8 +0x0ad3:  call   081aab8a <+0xe85>
081aa7dd +0x0ad8:  cmp    %eax,%esi
081aa7df +0x0ada:  sete   %al
081aa7e2 +0x0add:  test   %al,%al
081aa7e4 +0x0adf:  je     081aa8a6 <+0xba1>
081aa7ea +0x0ae5:  mov    0xc(%ebp),%eax
081aa7ed +0x0ae8:  mov    %eax,(%esp)
081aa7f0 +0x0aeb:  call   081aa66e <+0x969>
081aa7f5 +0x0af0:  test   %eax,%eax
081aa7f7 +0x0af2:  je     081aa840 <+0xb3b>
081aa7f9 +0x0af4:  mov    0x14(%ebp),%eax
081aa7fc +0x0af7:  mov    %eax,0x4(%esp)
081aa800 +0x0afb:  lea    -0x29(%ebp),%eax
081aa803 +0x0afe:  mov    %eax,(%esp)
081aa806 +0x0b01:  call   081aae0a <+0x1105>
081aa80b +0x0b06:  mov    %eax,%esi
081aa80d +0x0b08:  mov    0xc(%ebp),%eax
081aa810 +0x0b0b:  mov    %eax,(%esp)
081aa813 +0x0b0e:  call   081aadfe <+0x10f9>
081aa818 +0x0b13:  mov    (%eax),%eax
081aa81a +0x0b15:  mov    %eax,(%esp)
081aa81d +0x0b18:  call   081aac12 <+0xf0d>
081aa822 +0x0b1d:  mov    0xc(%ebp),%edx
081aa825 +0x0b20:  mov    %esi,0x8(%esp)
081aa829 +0x0b24:  mov    %eax,0x4(%esp)
081aa82d +0x0b28:  mov    %edx,(%esp)
081aa830 +0x0b2b:  call   081aa2d8 <+0x5d3>
081aa835 +0x0b30:  test   %al,%al
081aa837 +0x0b32:  je     081aa840 <+0xb3b>
081aa839 +0x0b34:  mov    $0x1,%eax
081aa83e +0x0b39:  jmp    081aa845 <+0xb40>
081aa840 +0x0b3b:  mov    $0x0,%eax
081aa845 +0x0b40:  test   %al,%al
081aa847 +0x0b42:  je     081aa880 <+0xb7b>
081aa849 +0x0b44:  mov    0xc(%ebp),%eax
081aa84c +0x0b47:  mov    %eax,(%esp)
081aa84f +0x0b4a:  call   081aadfe <+0x10f9>
081aa854 +0x0b4f:  mov    (%eax),%eax
081aa856 +0x0b51:  mov    0x14(%ebp),%edx
081aa859 +0x0b54:  mov    %edx,0x10(%esp)
081aa85d +0x0b58:  mov    %eax,0xc(%esp)
081aa861 +0x0b5c:  movl   $0x0,0x8(%esp)
081aa869 +0x0b64:  mov    0xc(%ebp),%eax
081aa86c +0x0b67:  mov    %eax,0x4(%esp)
081aa870 +0x0b6b:  mov    %ebx,(%esp)
081aa873 +0x0b6e:  call   081aae12 <+0x110d>
081aa878 +0x0b73:  sub    $0x4,%esp
081aa87b +0x0b76:  jmp    081aab7b <+0xe76>
081aa880 +0x0b7b:  lea    -0x28(%ebp),%eax
081aa883 +0x0b7e:  mov    0x14(%ebp),%edx
081aa886 +0x0b81:  mov    %edx,0x8(%esp)
081aa88a +0x0b85:  mov    0xc(%ebp),%edx
081aa88d +0x0b88:  mov    %edx,0x4(%esp)
081aa891 +0x0b8c:  mov    %eax,(%esp)
081aa894 +0x0b8f:  call   081aaeda <+0x11d5>
081aa899 +0x0b94:  sub    $0x4,%esp
081aa89c +0x0b97:  mov    -0x28(%ebp),%eax
081aa89f +0x0b9a:  mov    %eax,(%ebx)
081aa8a1 +0x0b9c:  jmp    081aab7b <+0xe76>
081aa8a6 +0x0ba1:  mov    0x10(%ebp),%eax
081aa8a9 +0x0ba4:  mov    %eax,(%esp)
081aa8ac +0x0ba7:  call   081aac12 <+0xf0d>
081aa8b1 +0x0bac:  mov    %eax,%esi
081aa8b3 +0x0bae:  mov    0x14(%ebp),%eax
081aa8b6 +0x0bb1:  mov    %eax,0x4(%esp)
081aa8ba +0x0bb5:  lea    -0x1e(%ebp),%eax
081aa8bd +0x0bb8:  mov    %eax,(%esp)
081aa8c0 +0x0bbb:  call   081aae0a <+0x1105>
081aa8c5 +0x0bc0:  mov    0xc(%ebp),%edx
081aa8c8 +0x0bc3:  mov    %esi,0x8(%esp)
081aa8cc +0x0bc7:  mov    %eax,0x4(%esp)
081aa8d0 +0x0bcb:  mov    %edx,(%esp)
081aa8d3 +0x0bce:  call   081aa2d8 <+0x5d3>
081aa8d8 +0x0bd3:  test   %al,%al
081aa8da +0x0bd5:  je     081aaa12 <+0xd0d>
081aa8e0 +0x0bdb:  mov    0x10(%ebp),%eax
081aa8e3 +0x0bde:  mov    %eax,-0x30(%ebp)
081aa8e6 +0x0be1:  mov    0x10(%ebp),%esi
081aa8e9 +0x0be4:  mov    0xc(%ebp),%eax
081aa8ec +0x0be7:  mov    %eax,(%esp)
081aa8ef +0x0bea:  call   081ab0aa <+0x13a5>
081aa8f4 +0x0bef:  mov    (%eax),%eax
081aa8f6 +0x0bf1:  cmp    %eax,%esi
081aa8f8 +0x0bf3:  sete   %al
081aa8fb +0x0bf6:  test   %al,%al
081aa8fd +0x0bf8:  je     081aa93f <+0xc3a>
081aa8ff +0x0bfa:  mov    0xc(%ebp),%eax
081aa902 +0x0bfd:  mov    %eax,(%esp)
081aa905 +0x0c00:  call   081ab0aa <+0x13a5>
081aa90a +0x0c05:  mov    (%eax),%esi
081aa90c +0x0c07:  mov    0xc(%ebp),%eax
081aa90f +0x0c0a:  mov    %eax,(%esp)
081aa912 +0x0c0d:  call   081ab0aa <+0x13a5>
081aa917 +0x0c12:  mov    (%eax),%eax
081aa919 +0x0c14:  mov    0x14(%ebp),%edx
081aa91c +0x0c17:  mov    %edx,0x10(%esp)
081aa920 +0x0c1b:  mov    %esi,0xc(%esp)
081aa924 +0x0c1f:  mov    %eax,0x8(%esp)
081aa928 +0x0c23:  mov    0xc(%ebp),%eax
081aa92b +0x0c26:  mov    %eax,0x4(%esp)
081aa92f +0x0c2a:  mov    %ebx,(%esp)
081aa932 +0x0c2d:  call   081aae12 <+0x110d>
081aa937 +0x0c32:  sub    $0x4,%esp
081aa93a +0x0c35:  jmp    081aab7b <+0xe76>
081aa93f +0x0c3a:  mov    0x14(%ebp),%eax
081aa942 +0x0c3d:  mov    %eax,0x4(%esp)
081aa946 +0x0c41:  lea    -0x1d(%ebp),%eax
081aa949 +0x0c44:  mov    %eax,(%esp)
081aa94c +0x0c47:  call   081aae0a <+0x1105>
081aa951 +0x0c4c:  mov    %eax,%esi
081aa953 +0x0c4e:  lea    -0x30(%ebp),%eax
081aa956 +0x0c51:  mov    %eax,(%esp)
081aa959 +0x0c54:  call   081ab0b6 <+0x13b1>
081aa95e +0x0c59:  mov    (%eax),%eax
081aa960 +0x0c5b:  mov    %eax,(%esp)
081aa963 +0x0c5e:  call   081aac12 <+0xf0d>
081aa968 +0x0c63:  mov    0xc(%ebp),%edx
081aa96b +0x0c66:  mov    %esi,0x8(%esp)
081aa96f +0x0c6a:  mov    %eax,0x4(%esp)
081aa973 +0x0c6e:  mov    %edx,(%esp)
081aa976 +0x0c71:  call   081aa2d8 <+0x5d3>
081aa97b +0x0c76:  test   %al,%al
081aa97d +0x0c78:  je     081aa9ec <+0xce7>
081aa97f +0x0c7a:  mov    -0x30(%ebp),%eax
081aa982 +0x0c7d:  mov    %eax,(%esp)
081aa985 +0x0c80:  call   081ab0d3 <+0x13ce>
081aa98a +0x0c85:  test   %eax,%eax
081aa98c +0x0c87:  sete   %al
081aa98f +0x0c8a:  test   %al,%al
081aa991 +0x0c8c:  je     081aa9c0 <+0xcbb>
081aa993 +0x0c8e:  mov    -0x30(%ebp),%eax
081aa996 +0x0c91:  mov    0x14(%ebp),%edx
081aa999 +0x0c94:  mov    %edx,0x10(%esp)
081aa99d +0x0c98:  mov    %eax,0xc(%esp)
081aa9a1 +0x0c9c:  movl   $0x0,0x8(%esp)
081aa9a9 +0x0ca4:  mov    0xc(%ebp),%eax
081aa9ac +0x0ca7:  mov    %eax,0x4(%esp)
081aa9b0 +0x0cab:  mov    %ebx,(%esp)
081aa9b3 +0x0cae:  call   081aae12 <+0x110d>
081aa9b8 +0x0cb3:  sub    $0x4,%esp
081aa9bb +0x0cb6:  jmp    081aab7b <+0xe76>
081aa9c0 +0x0cbb:  mov    0x10(%ebp),%edx
081aa9c3 +0x0cbe:  mov    0x10(%ebp),%eax
081aa9c6 +0x0cc1:  mov    0x14(%ebp),%ecx
081aa9c9 +0x0cc4:  mov    %ecx,0x10(%esp)
081aa9cd +0x0cc8:  mov    %edx,0xc(%esp)
081aa9d1 +0x0ccc:  mov    %eax,0x8(%esp)
081aa9d5 +0x0cd0:  mov    0xc(%ebp),%eax
081aa9d8 +0x0cd3:  mov    %eax,0x4(%esp)
081aa9dc +0x0cd7:  mov    %ebx,(%esp)
081aa9df +0x0cda:  call   081aae12 <+0x110d>
081aa9e4 +0x0cdf:  sub    $0x4,%esp
081aa9e7 +0x0ce2:  jmp    081aab7b <+0xe76>
081aa9ec +0x0ce7:  lea    -0x1c(%ebp),%eax
081aa9ef +0x0cea:  mov    0x14(%ebp),%edx
081aa9f2 +0x0ced:  mov    %edx,0x8(%esp)
081aa9f6 +0x0cf1:  mov    0xc(%ebp),%edx
081aa9f9 +0x0cf4:  mov    %edx,0x4(%esp)
081aa9fd +0x0cf8:  mov    %eax,(%esp)
081aaa00 +0x0cfb:  call   081aaeda <+0x11d5>
081aaa05 +0x0d00:  sub    $0x4,%esp
081aaa08 +0x0d03:  mov    -0x1c(%ebp),%eax
081aaa0b +0x0d06:  mov    %eax,(%ebx)
081aaa0d +0x0d08:  jmp    081aab7b <+0xe76>
081aaa12 +0x0d0d:  mov    0x14(%ebp),%eax
081aaa15 +0x0d10:  mov    %eax,0x4(%esp)
081aaa19 +0x0d14:  lea    -0x12(%ebp),%eax
081aaa1c +0x0d17:  mov    %eax,(%esp)
081aaa1f +0x0d1a:  call   081aae0a <+0x1105>
081aaa24 +0x0d1f:  mov    %eax,%esi
081aaa26 +0x0d21:  mov    0x10(%ebp),%eax
081aaa29 +0x0d24:  mov    %eax,(%esp)
081aaa2c +0x0d27:  call   081aac12 <+0xf0d>
081aaa31 +0x0d2c:  mov    0xc(%ebp),%edx
081aaa34 +0x0d2f:  mov    %esi,0x8(%esp)
081aaa38 +0x0d33:  mov    %eax,0x4(%esp)
081aaa3c +0x0d37:  mov    %edx,(%esp)
081aaa3f +0x0d3a:  call   081aa2d8 <+0x5d3>
081aaa44 +0x0d3f:  test   %al,%al
081aaa46 +0x0d41:  je     081aab6c <+0xe67>
081aaa4c +0x0d47:  mov    0x10(%ebp),%eax
081aaa4f +0x0d4a:  mov    %eax,-0x34(%ebp)
081aaa52 +0x0d4d:  mov    0x10(%ebp),%esi
081aaa55 +0x0d50:  mov    0xc(%ebp),%eax
081aaa58 +0x0d53:  mov    %eax,(%esp)
081aaa5b +0x0d56:  call   081aadfe <+0x10f9>
081aaa60 +0x0d5b:  mov    (%eax),%eax
081aaa62 +0x0d5d:  cmp    %eax,%esi
081aaa64 +0x0d5f:  sete   %al
081aaa67 +0x0d62:  test   %al,%al
081aaa69 +0x0d64:  je     081aaaa2 <+0xd9d>
081aaa6b +0x0d66:  mov    0xc(%ebp),%eax
081aaa6e +0x0d69:  mov    %eax,(%esp)
081aaa71 +0x0d6c:  call   081aadfe <+0x10f9>
081aaa76 +0x0d71:  mov    (%eax),%eax
081aaa78 +0x0d73:  mov    0x14(%ebp),%edx
081aaa7b +0x0d76:  mov    %edx,0x10(%esp)
081aaa7f +0x0d7a:  mov    %eax,0xc(%esp)
081aaa83 +0x0d7e:  movl   $0x0,0x8(%esp)
081aaa8b +0x0d86:  mov    0xc(%ebp),%eax
081aaa8e +0x0d89:  mov    %eax,0x4(%esp)
081aaa92 +0x0d8d:  mov    %ebx,(%esp)
081aaa95 +0x0d90:  call   081aae12 <+0x110d>
081aaa9a +0x0d95:  sub    $0x4,%esp
081aaa9d +0x0d98:  jmp    081aab7b <+0xe76>
081aaaa2 +0x0d9d:  lea    -0x34(%ebp),%eax
081aaaa5 +0x0da0:  mov    %eax,(%esp)
081aaaa8 +0x0da3:  call   081ab0de <+0x13d9>
081aaaad +0x0da8:  mov    (%eax),%eax
081aaaaf +0x0daa:  mov    %eax,(%esp)
081aaab2 +0x0dad:  call   081aac12 <+0xf0d>
081aaab7 +0x0db2:  mov    %eax,%esi
081aaab9 +0x0db4:  mov    0x14(%ebp),%eax
081aaabc +0x0db7:  mov    %eax,0x4(%esp)
081aaac0 +0x0dbb:  lea    -0x11(%ebp),%eax
081aaac3 +0x0dbe:  mov    %eax,(%esp)
081aaac6 +0x0dc1:  call   081aae0a <+0x1105>
081aaacb +0x0dc6:  mov    0xc(%ebp),%edx
081aaace +0x0dc9:  mov    %esi,0x8(%esp)
081aaad2 +0x0dcd:  mov    %eax,0x4(%esp)
081aaad6 +0x0dd1:  mov    %edx,(%esp)
081aaad9 +0x0dd4:  call   081aa2d8 <+0x5d3>
081aaade +0x0dd9:  test   %al,%al
081aaae0 +0x0ddb:  je     081aab49 <+0xe44>
081aaae2 +0x0ddd:  mov    0x10(%ebp),%eax
081aaae5 +0x0de0:  mov    %eax,(%esp)
081aaae8 +0x0de3:  call   081ab0d3 <+0x13ce>
081aaaed +0x0de8:  test   %eax,%eax
081aaaef +0x0dea:  sete   %al
081aaaf2 +0x0ded:  test   %al,%al
081aaaf4 +0x0def:  je     081aab20 <+0xe1b>
081aaaf6 +0x0df1:  mov    0x10(%ebp),%eax
081aaaf9 +0x0df4:  mov    0x14(%ebp),%edx
081aaafc +0x0df7:  mov    %edx,0x10(%esp)
081aab00 +0x0dfb:  mov    %eax,0xc(%esp)
081aab04 +0x0dff:  movl   $0x0,0x8(%esp)
081aab0c +0x0e07:  mov    0xc(%ebp),%eax
081aab0f +0x0e0a:  mov    %eax,0x4(%esp)
081aab13 +0x0e0e:  mov    %ebx,(%esp)
081aab16 +0x0e11:  call   081aae12 <+0x110d>
081aab1b +0x0e16:  sub    $0x4,%esp
081aab1e +0x0e19:  jmp    081aab7b <+0xe76>
081aab20 +0x0e1b:  mov    -0x34(%ebp),%edx
081aab23 +0x0e1e:  mov    -0x34(%ebp),%eax
081aab26 +0x0e21:  mov    0x14(%ebp),%ecx
081aab29 +0x0e24:  mov    %ecx,0x10(%esp)
081aab2d +0x0e28:  mov    %edx,0xc(%esp)
081aab31 +0x0e2c:  mov    %eax,0x8(%esp)
081aab35 +0x0e30:  mov    0xc(%ebp),%eax
081aab38 +0x0e33:  mov    %eax,0x4(%esp)
081aab3c +0x0e37:  mov    %ebx,(%esp)
081aab3f +0x0e3a:  call   081aae12 <+0x110d>
081aab44 +0x0e3f:  sub    $0x4,%esp
081aab47 +0x0e42:  jmp    081aab7b <+0xe76>
081aab49 +0x0e44:  lea    -0x10(%ebp),%eax
081aab4c +0x0e47:  mov    0x14(%ebp),%edx
081aab4f +0x0e4a:  mov    %edx,0x8(%esp)
081aab53 +0x0e4e:  mov    0xc(%ebp),%edx
081aab56 +0x0e51:  mov    %edx,0x4(%esp)
081aab5a +0x0e55:  mov    %eax,(%esp)
081aab5d +0x0e58:  call   081aaeda <+0x11d5>
081aab62 +0x0e5d:  sub    $0x4,%esp
081aab65 +0x0e60:  mov    -0x10(%ebp),%eax
081aab68 +0x0e63:  mov    %eax,(%ebx)
081aab6a +0x0e65:  jmp    081aab7b <+0xe76>
081aab6c +0x0e67:  mov    0x10(%ebp),%eax
081aab6f +0x0e6a:  mov    %eax,0x4(%esp)
081aab73 +0x0e6e:  mov    %ebx,(%esp)
081aab76 +0x0e71:  call   081aa73a <+0xa35>
081aab7b +0x0e76:  mov    %ebx,%eax
081aab7d +0x0e78:  lea    -0x8(%ebp),%esp
081aab80 +0x0e7b:  add    $0x0,%esp
081aab83 +0x0e7e:  pop    %ebx
081aab84 +0x0e7f:  pop    %esi
081aab85 +0x0e80:  pop    %ebp
081aab86 +0x0e81:  ret    $0x4
081aab89 +0x0e84:  nop
081aab8a +0x0e85:  push   %ebp
081aab8b +0x0e86:  mov    %esp,%ebp
081aab8d +0x0e88:  mov    0x8(%ebp),%eax
081aab90 +0x0e8b:  add    $0x4,%eax
081aab93 +0x0e8e:  pop    %ebp
081aab94 +0x0e8f:  ret
081aab95 +0x0e90:  nop
081aab96 +0x0e91:  push   %ebp
081aab97 +0x0e92:  mov    %esp,%ebp
081aab99 +0x0e94:  push   %ebx
081aab9a +0x0e95:  sub    $0x14,%esp
081aab9d +0x0e98:  mov    0x8(%ebp),%ebx
081aaba0 +0x0e9b:  jmp    081aabee <+0xee9>
081aaba2 +0x0e9d:  mov    0x10(%ebp),%eax
081aaba5 +0x0ea0:  mov    %eax,(%esp)
081aaba8 +0x0ea3:  call   081aacbe <+0xfb9>
081aabad +0x0ea8:  mov    0xc(%ebp),%edx
081aabb0 +0x0eab:  mov    0x18(%ebp),%ecx
081aabb3 +0x0eae:  mov    %ecx,0x8(%esp)
081aabb7 +0x0eb2:  mov    %eax,0x4(%esp)
081aabbb +0x0eb6:  mov    %edx,(%esp)
081aabbe +0x0eb9:  call   081aa2d8 <+0x5d3>
081aabc3 +0x0ebe:  xor    $0x1,%eax
081aabc6 +0x0ec1:  test   %al,%al
081aabc8 +0x0ec3:  je     081aabe0 <+0xedb>
081aabca +0x0ec5:  mov    0x10(%ebp),%eax
081aabcd +0x0ec8:  mov    %eax,0x14(%ebp)
081aabd0 +0x0ecb:  mov    0x10(%ebp),%eax
081aabd3 +0x0ece:  mov    %eax,(%esp)
081aabd6 +0x0ed1:  call   081aa4a0 <+0x79b>
081aabdb +0x0ed6:  mov    %eax,0x10(%ebp)
081aabde +0x0ed9:  jmp    081aabee <+0xee9>
081aabe0 +0x0edb:  mov    0x10(%ebp),%eax
081aabe3 +0x0ede:  mov    %eax,(%esp)
081aabe6 +0x0ee1:  call   081aa495 <+0x790>
081aabeb +0x0ee6:  mov    %eax,0x10(%ebp)
081aabee +0x0ee9:  cmpl   $0x0,0x10(%ebp)
081aabf2 +0x0eed:  setne  %al
081aabf5 +0x0ef0:  test   %al,%al
081aabf7 +0x0ef2:  jne    081aaba2 <+0xe9d>
081aabf9 +0x0ef4:  mov    0x14(%ebp),%eax
081aabfc +0x0ef7:  mov    %eax,0x4(%esp)
081aac00 +0x0efb:  mov    %ebx,(%esp)
081aac03 +0x0efe:  call   081aa73a <+0xa35>
081aac08 +0x0f03:  mov    %ebx,%eax
081aac0a +0x0f05:  add    $0x14,%esp
081aac0d +0x0f08:  pop    %ebx
081aac0e +0x0f09:  pop    %ebp
081aac0f +0x0f0a:  ret    $0x4
081aac12 +0x0f0d:  push   %ebp
081aac13 +0x0f0e:  mov    %esp,%ebp
081aac15 +0x0f10:  sub    $0x28,%esp
081aac18 +0x0f13:  mov    0x8(%ebp),%eax
081aac1b +0x0f16:  mov    %eax,(%esp)
081aac1e +0x0f19:  call   081ab0fb <+0x13f6>
081aac23 +0x0f1e:  mov    %eax,0x4(%esp)
081aac27 +0x0f22:  lea    -0x9(%ebp),%eax
081aac2a +0x0f25:  mov    %eax,(%esp)
081aac2d +0x0f28:  call   081aae0a <+0x1105>
081aac32 +0x0f2d:  leave
081aac33 +0x0f2e:  ret
081aac34 +0x0f2f:  push   %ebp
081aac35 +0x0f30:  mov    %esp,%ebp
081aac37 +0x0f32:  sub    $0x18,%esp
081aac3a +0x0f35:  mov    0x8(%ebp),%eax
081aac3d +0x0f38:  mov    %eax,(%esp)
081aac40 +0x0f3b:  call   081ab106 <+0x1401>
081aac45 +0x0f40:  leave
081aac46 +0x0f41:  ret
081aac47 +0x0f42:  nop
081aac48 +0x0f43:  push   %ebp
081aac49 +0x0f44:  mov    %esp,%ebp
081aac4b +0x0f46:  mov    0x8(%ebp),%eax
081aac4e +0x0f49:  movl   $0x0,0x4(%eax)
081aac55 +0x0f50:  mov    0x8(%ebp),%eax
081aac58 +0x0f53:  movl   $0x0,0x8(%eax)
081aac5f +0x0f5a:  mov    0x8(%ebp),%eax
081aac62 +0x0f5d:  lea    0x4(%eax),%edx
081aac65 +0x0f60:  mov    0x8(%ebp),%eax
081aac68 +0x0f63:  mov    %edx,0xc(%eax)
081aac6b +0x0f66:  mov    0x8(%ebp),%eax
081aac6e +0x0f69:  lea    0x4(%eax),%edx
081aac71 +0x0f6c:  mov    0x8(%ebp),%eax
081aac74 +0x0f6f:  mov    %edx,0x10(%eax)
081aac77 +0x0f72:  pop    %ebp
081aac78 +0x0f73:  ret
081aac79 +0x0f74:  nop
081aac7a +0x0f75:  push   %ebp
081aac7b +0x0f76:  mov    %esp,%ebp
081aac7d +0x0f78:  mov    0x8(%ebp),%eax
081aac80 +0x0f7b:  pop    %ebp
081aac81 +0x0f7c:  ret
081aac82 +0x0f7d:  push   %ebp
081aac83 +0x0f7e:  mov    %esp,%ebp
081aac85 +0x0f80:  pop    %ebp
081aac86 +0x0f81:  ret
081aac87 +0x0f82:  nop
081aac88 +0x0f83:  push   %ebp
081aac89 +0x0f84:  mov    %esp,%ebp
081aac8b +0x0f86:  sub    $0x18,%esp
081aac8e +0x0f89:  mov    0xc(%ebp),%eax
081aac91 +0x0f8c:  mov    %eax,(%esp)
081aac94 +0x0f8f:  call   081aac82 <+0xf7d>
081aac99 +0x0f94:  leave
081aac9a +0x0f95:  ret
081aac9b +0x0f96:  nop
081aac9c +0x0f97:  push   %ebp
081aac9d +0x0f98:  mov    %esp,%ebp
081aac9f +0x0f9a:  sub    $0x18,%esp
081aaca2 +0x0f9d:  mov    0x8(%ebp),%eax
081aaca5 +0x0fa0:  movl   $0x1,0x8(%esp)
081aacad +0x0fa8:  mov    0xc(%ebp),%edx
081aacb0 +0x0fab:  mov    %edx,0x4(%esp)
081aacb4 +0x0faf:  mov    %eax,(%esp)
081aacb7 +0x0fb2:  call   081ab10c <+0x1407>
081aacbc +0x0fb7:  leave
081aacbd +0x0fb8:  ret
081aacbe +0x0fb9:  push   %ebp
081aacbf +0x0fba:  mov    %esp,%ebp
081aacc1 +0x0fbc:  sub    $0x28,%esp
081aacc4 +0x0fbf:  mov    0x8(%ebp),%eax
081aacc7 +0x0fc2:  mov    %eax,(%esp)
081aacca +0x0fc5:  call   081ab11f <+0x141a>
081aaccf +0x0fca:  mov    %eax,0x4(%esp)
081aacd3 +0x0fce:  lea    -0x9(%ebp),%eax
081aacd6 +0x0fd1:  mov    %eax,(%esp)
081aacd9 +0x0fd4:  call   081aae0a <+0x1105>
081aacde +0x0fd9:  leave
081aacdf +0x0fda:  ret
081aace0 +0x0fdb:  push   %ebp
081aace1 +0x0fdc:  mov    %esp,%ebp
081aace3 +0x0fde:  push   %ebx
081aace4 +0x0fdf:  sub    $0x14,%esp
081aace7 +0x0fe2:  mov    0x8(%ebp),%ebx
081aacea +0x0fe5:  jmp    081aad35 <+0x1030>
081aacec +0x0fe7:  mov    0x10(%ebp),%eax
081aacef +0x0fea:  mov    %eax,(%esp)
081aacf2 +0x0fed:  call   081aacbe <+0xfb9>
081aacf7 +0x0ff2:  mov    0xc(%ebp),%edx
081aacfa +0x0ff5:  mov    %eax,0x8(%esp)
081aacfe +0x0ff9:  mov    0x18(%ebp),%eax
081aad01 +0x0ffc:  mov    %eax,0x4(%esp)
081aad05 +0x1000:  mov    %edx,(%esp)
081aad08 +0x1003:  call   081aa2d8 <+0x5d3>
081aad0d +0x1008:  test   %al,%al
081aad0f +0x100a:  je     081aad27 <+0x1022>
081aad11 +0x100c:  mov    0x10(%ebp),%eax
081aad14 +0x100f:  mov    %eax,0x14(%ebp)
081aad17 +0x1012:  mov    0x10(%ebp),%eax
081aad1a +0x1015:  mov    %eax,(%esp)
081aad1d +0x1018:  call   081aa4a0 <+0x79b>
081aad22 +0x101d:  mov    %eax,0x10(%ebp)
081aad25 +0x1020:  jmp    081aad35 <+0x1030>
081aad27 +0x1022:  mov    0x10(%ebp),%eax
081aad2a +0x1025:  mov    %eax,(%esp)
081aad2d +0x1028:  call   081aa495 <+0x790>
081aad32 +0x102d:  mov    %eax,0x10(%ebp)
081aad35 +0x1030:  cmpl   $0x0,0x10(%ebp)
081aad39 +0x1034:  setne  %al
081aad3c +0x1037:  test   %al,%al
081aad3e +0x1039:  jne    081aacec <+0xfe7>
081aad40 +0x103b:  mov    0x14(%ebp),%eax
081aad43 +0x103e:  mov    %eax,0x4(%esp)
081aad47 +0x1042:  mov    %ebx,(%esp)
081aad4a +0x1045:  call   081aa73a <+0xa35>
081aad4f +0x104a:  mov    %ebx,%eax
081aad51 +0x104c:  add    $0x14,%esp
081aad54 +0x104f:  pop    %ebx
081aad55 +0x1050:  pop    %ebp
081aad56 +0x1051:  ret    $0x4
081aad59 +0x1054:  nop
081aad5a +0x1055:  push   %ebp
081aad5b +0x1056:  mov    %esp,%ebp
081aad5d +0x1058:  sub    $0x18,%esp
081aad60 +0x105b:  mov    0xc(%ebp),%eax
081aad63 +0x105e:  mov    %eax,(%esp)
081aad66 +0x1061:  call   081ab12a <+0x1425>
081aad6b +0x1066:  mov    0x8(%ebp),%edx
081aad6e +0x1069:  mov    (%eax),%eax
081aad70 +0x106b:  mov    %eax,(%edx)
081aad72 +0x106d:  mov    0x10(%ebp),%eax
081aad75 +0x1070:  mov    %eax,(%esp)
081aad78 +0x1073:  call   081ab12a <+0x1425>
081aad7d +0x1078:  mov    0x8(%ebp),%edx
081aad80 +0x107b:  mov    (%eax),%eax
081aad82 +0x107d:  mov    %eax,0x4(%edx)
081aad85 +0x1080:  leave
081aad86 +0x1081:  ret
081aad87 +0x1082:  nop
081aad88 +0x1083:  push   %ebp
081aad89 +0x1084:  mov    %esp,%ebp
081aad8b +0x1086:  push   %ebx
081aad8c +0x1087:  sub    $0x14,%esp
081aad8f +0x108a:  mov    0x8(%ebp),%eax
081aad92 +0x108d:  mov    %eax,(%esp)
081aad95 +0x1090:  call   081aa17e <+0x479>
081aad9a +0x1095:  mov    %eax,0x4(%esp)
081aad9e +0x1099:  mov    0x8(%ebp),%eax
081aada1 +0x109c:  mov    %eax,(%esp)
081aada4 +0x109f:  call   081aa128 <+0x423>
081aada9 +0x10a4:  mov    0x8(%ebp),%eax
081aadac +0x10a7:  mov    %eax,(%esp)
081aadaf +0x10aa:  call   081ab0aa <+0x13a5>
081aadb4 +0x10af:  mov    %eax,%ebx
081aadb6 +0x10b1:  mov    0x8(%ebp),%eax
081aadb9 +0x10b4:  mov    %eax,(%esp)
081aadbc +0x10b7:  call   081aab8a <+0xe85>
081aadc1 +0x10bc:  mov    %eax,(%ebx)
081aadc3 +0x10be:  mov    0x8(%ebp),%eax
081aadc6 +0x10c1:  mov    %eax,(%esp)
081aadc9 +0x10c4:  call   081ab132 <+0x142d>
081aadce +0x10c9:  movl   $0x0,(%eax)
081aadd4 +0x10cf:  mov    0x8(%ebp),%eax
081aadd7 +0x10d2:  mov    %eax,(%esp)
081aadda +0x10d5:  call   081aadfe <+0x10f9>
081aaddf +0x10da:  mov    %eax,%ebx
081aade1 +0x10dc:  mov    0x8(%ebp),%eax
081aade4 +0x10df:  mov    %eax,(%esp)
081aade7 +0x10e2:  call   081aab8a <+0xe85>
081aadec +0x10e7:  mov    %eax,(%ebx)
081aadee +0x10e9:  mov    0x8(%ebp),%eax
081aadf1 +0x10ec:  movl   $0x0,0x14(%eax)
081aadf8 +0x10f3:  add    $0x14,%esp
081aadfb +0x10f6:  pop    %ebx
081aadfc +0x10f7:  pop    %ebp
081aadfd +0x10f8:  ret
081aadfe +0x10f9:  push   %ebp
081aadff +0x10fa:  mov    %esp,%ebp
081aae01 +0x10fc:  mov    0x8(%ebp),%eax
081aae04 +0x10ff:  add    $0x10,%eax
081aae07 +0x1102:  pop    %ebp
081aae08 +0x1103:  ret
081aae09 +0x1104:  nop
081aae0a +0x1105:  push   %ebp
081aae0b +0x1106:  mov    %esp,%ebp
081aae0d +0x1108:  mov    0xc(%ebp),%eax
081aae10 +0x110b:  pop    %ebp
081aae11 +0x110c:  ret
081aae12 +0x110d:  push   %ebp
081aae13 +0x110e:  mov    %esp,%ebp
081aae15 +0x1110:  push   %esi
081aae16 +0x1111:  push   %ebx
081aae17 +0x1112:  sub    $0x20,%esp
081aae1a +0x1115:  mov    0x8(%ebp),%esi
081aae1d +0x1118:  cmpl   $0x0,0x10(%ebp)
081aae21 +0x111c:  jne    081aae69 <+0x1164>
081aae23 +0x111e:  mov    0xc(%ebp),%eax
081aae26 +0x1121:  mov    %eax,(%esp)
081aae29 +0x1124:  call   081aab8a <+0xe85>
081aae2e +0x1129:  cmp    0x14(%ebp),%eax
081aae31 +0x112c:  je     081aae69 <+0x1164>
081aae33 +0x112e:  mov    0x14(%ebp),%eax
081aae36 +0x1131:  mov    %eax,(%esp)
081aae39 +0x1134:  call   081aac12 <+0xf0d>
081aae3e +0x1139:  mov    %eax,%ebx
081aae40 +0x113b:  mov    0x18(%ebp),%eax
081aae43 +0x113e:  mov    %eax,0x4(%esp)
081aae47 +0x1142:  lea    -0xe(%ebp),%eax
081aae4a +0x1145:  mov    %eax,(%esp)
081aae4d +0x1148:  call   081aae0a <+0x1105>
081aae52 +0x114d:  mov    0xc(%ebp),%edx
081aae55 +0x1150:  mov    %ebx,0x8(%esp)
081aae59 +0x1154:  mov    %eax,0x4(%esp)
081aae5d +0x1158:  mov    %edx,(%esp)
081aae60 +0x115b:  call   081aa2d8 <+0x5d3>
081aae65 +0x1160:  test   %al,%al
081aae67 +0x1162:  je     081aae70 <+0x116b>
081aae69 +0x1164:  mov    $0x1,%eax
081aae6e +0x1169:  jmp    081aae75 <+0x1170>
081aae70 +0x116b:  mov    $0x0,%eax
081aae75 +0x1170:  mov    %al,-0xd(%ebp)
081aae78 +0x1173:  mov    0x18(%ebp),%eax
081aae7b +0x1176:  mov    %eax,0x4(%esp)
081aae7f +0x117a:  mov    0xc(%ebp),%eax
081aae82 +0x117d:  mov    %eax,(%esp)
081aae85 +0x1180:  call   081ab13e <+0x1439>
081aae8a +0x1185:  mov    %eax,-0xc(%ebp)
081aae8d +0x1188:  mov    0xc(%ebp),%eax
081aae90 +0x118b:  lea    0x4(%eax),%ecx
081aae93 +0x118e:  mov    -0xc(%ebp),%edx
081aae96 +0x1191:  movzbl -0xd(%ebp),%eax
081aae9a +0x1195:  mov    %ecx,0xc(%esp)
081aae9e +0x1199:  mov    0x14(%ebp),%ecx
081aaea1 +0x119c:  mov    %ecx,0x8(%esp)
081aaea5 +0x11a0:  mov    %edx,0x4(%esp)
081aaea9 +0x11a4:  mov    %eax,(%esp)
081aaeac +0x11a7:  call   086df9d0 <_ZSt29_Rb_tree_insert_and_rebalancebPSt18_Rb_tree_node_baseS0_RS_>  ; std::_Rb_tree_insert_and_rebalance(bool, std::_Rb_tree_node_base*, std::_Rb_tree_node_base*, std::_Rb_tree_node_base&)
081aaeb1 +0x11ac:  mov    0xc(%ebp),%eax
081aaeb4 +0x11af:  mov    0x14(%eax),%eax
081aaeb7 +0x11b2:  lea    0x1(%eax),%edx
081aaeba +0x11b5:  mov    0xc(%ebp),%eax
081aaebd +0x11b8:  mov    %edx,0x14(%eax)
081aaec0 +0x11bb:  mov    -0xc(%ebp),%eax
081aaec3 +0x11be:  mov    %eax,0x4(%esp)
081aaec7 +0x11c2:  mov    %esi,(%esp)
081aaeca +0x11c5:  call   081aa73a <+0xa35>
081aaecf +0x11ca:  mov    %esi,%eax
081aaed1 +0x11cc:  add    $0x20,%esp
081aaed4 +0x11cf:  pop    %ebx
081aaed5 +0x11d0:  pop    %esi
081aaed6 +0x11d1:  pop    %ebp
081aaed7 +0x11d2:  ret    $0x4
081aaeda +0x11d5:  push   %ebp
081aaedb +0x11d6:  mov    %esp,%ebp
081aaedd +0x11d8:  push   %esi
081aaede +0x11d9:  push   %ebx
081aaedf +0x11da:  sub    $0x50,%esp
081aaee2 +0x11dd:  mov    0x8(%ebp),%ebx
081aaee5 +0x11e0:  mov    0xc(%ebp),%eax
081aaee8 +0x11e3:  mov    %eax,(%esp)
081aaeeb +0x11e6:  call   081aa17e <+0x479>
081aaef0 +0x11eb:  mov    %eax,-0x14(%ebp)
081aaef3 +0x11ee:  mov    0xc(%ebp),%eax
081aaef6 +0x11f1:  mov    %eax,(%esp)
081aaef9 +0x11f4:  call   081aab8a <+0xe85>
081aaefe +0x11f9:  mov    %eax,-0x10(%ebp)
081aaf01 +0x11fc:  movb   $0x1,-0x9(%ebp)
081aaf05 +0x1200:  jmp    081aaf63 <+0x125e>
081aaf07 +0x1202:  mov    -0x14(%ebp),%eax
081aaf0a +0x1205:  mov    %eax,-0x10(%ebp)
081aaf0d +0x1208:  mov    -0x14(%ebp),%eax
081aaf10 +0x120b:  mov    %eax,(%esp)
081aaf13 +0x120e:  call   081aacbe <+0xfb9>
081aaf18 +0x1213:  mov    %eax,%esi
081aaf1a +0x1215:  mov    0x10(%ebp),%eax
081aaf1d +0x1218:  mov    %eax,0x4(%esp)
081aaf21 +0x121c:  lea    -0x2d(%ebp),%eax
081aaf24 +0x121f:  mov    %eax,(%esp)
081aaf27 +0x1222:  call   081aae0a <+0x1105>
081aaf2c +0x1227:  mov    0xc(%ebp),%edx
081aaf2f +0x122a:  mov    %esi,0x8(%esp)
081aaf33 +0x122e:  mov    %eax,0x4(%esp)
081aaf37 +0x1232:  mov    %edx,(%esp)
081aaf3a +0x1235:  call   081aa2d8 <+0x5d3>
081aaf3f +0x123a:  mov    %al,-0x9(%ebp)
081aaf42 +0x123d:  cmpb   $0x0,-0x9(%ebp)
081aaf46 +0x1241:  je     081aaf55 <+0x1250>
081aaf48 +0x1243:  mov    -0x14(%ebp),%eax
081aaf4b +0x1246:  mov    %eax,(%esp)
081aaf4e +0x1249:  call   081aa4a0 <+0x79b>
081aaf53 +0x124e:  jmp    081aaf60 <+0x125b>
081aaf55 +0x1250:  mov    -0x14(%ebp),%eax
081aaf58 +0x1253:  mov    %eax,(%esp)
081aaf5b +0x1256:  call   081aa495 <+0x790>
081aaf60 +0x125b:  mov    %eax,-0x14(%ebp)
081aaf63 +0x125e:  cmpl   $0x0,-0x14(%ebp)
081aaf67 +0x1262:  setne  %al
081aaf6a +0x1265:  test   %al,%al
081aaf6c +0x1267:  jne    081aaf07 <+0x1202>
081aaf6e +0x1269:  mov    -0x10(%ebp),%eax
081aaf71 +0x126c:  mov    %eax,0x4(%esp)
081aaf75 +0x1270:  lea    -0x34(%ebp),%eax
081aaf78 +0x1273:  mov    %eax,(%esp)
081aaf7b +0x1276:  call   081aa73a <+0xa35>
081aaf80 +0x127b:  cmpb   $0x0,-0x9(%ebp)
081aaf84 +0x127f:  je     081ab005 <+0x1300>
081aaf86 +0x1281:  lea    -0x2c(%ebp),%eax
081aaf89 +0x1284:  mov    0xc(%ebp),%edx
081aaf8c +0x1287:  mov    %edx,0x4(%esp)
081aaf90 +0x128b:  mov    %eax,(%esp)
081aaf93 +0x128e:  call   081aa1ea <+0x4e5>
081aaf98 +0x1293:  sub    $0x4,%esp
081aaf9b +0x1296:  lea    -0x2c(%ebp),%eax
081aaf9e +0x1299:  mov    %eax,0x4(%esp)
081aafa2 +0x129d:  lea    -0x34(%ebp),%eax
081aafa5 +0x12a0:  mov    %eax,(%esp)
081aafa8 +0x12a3:  call   081aa2ee <+0x5e9>
081aafad +0x12a8:  test   %al,%al
081aafaf +0x12aa:  je     081aaffa <+0x12f5>
081aafb1 +0x12ac:  movb   $0x1,-0x25(%ebp)
081aafb5 +0x12b0:  mov    -0x10(%ebp),%ecx
081aafb8 +0x12b3:  mov    -0x14(%ebp),%edx
081aafbb +0x12b6:  lea    -0x24(%ebp),%eax
081aafbe +0x12b9:  mov    0x10(%ebp),%esi
081aafc1 +0x12bc:  mov    %esi,0x10(%esp)
081aafc5 +0x12c0:  mov    %ecx,0xc(%esp)
081aafc9 +0x12c4:  mov    %edx,0x8(%esp)
081aafcd +0x12c8:  mov    0xc(%ebp),%edx
081aafd0 +0x12cb:  mov    %edx,0x4(%esp)
081aafd4 +0x12cf:  mov    %eax,(%esp)
081aafd7 +0x12d2:  call   081aae12 <+0x110d>
081aafdc +0x12d7:  sub    $0x4,%esp
081aafdf +0x12da:  lea    -0x25(%ebp),%eax
081aafe2 +0x12dd:  mov    %eax,0x8(%esp)
081aafe6 +0x12e1:  lea    -0x24(%ebp),%eax
081aafe9 +0x12e4:  mov    %eax,0x4(%esp)
081aafed +0x12e8:  mov    %ebx,(%esp)
081aaff0 +0x12eb:  call   081ab1c0 <+0x14bb>
081aaff5 +0x12f0:  jmp    081ab09b <+0x1396>
081aaffa +0x12f5:  lea    -0x34(%ebp),%eax
081aaffd +0x12f8:  mov    %eax,(%esp)
081ab000 +0x12fb:  call   081ab1ee <+0x14e9>
081ab005 +0x1300:  mov    0x10(%ebp),%eax
081ab008 +0x1303:  mov    %eax,0x4(%esp)
081ab00c +0x1307:  lea    -0x1e(%ebp),%eax
081ab00f +0x130a:  mov    %eax,(%esp)
081ab012 +0x130d:  call   081aae0a <+0x1105>
081ab017 +0x1312:  mov    %eax,%esi
081ab019 +0x1314:  mov    -0x34(%ebp),%eax
081ab01c +0x1317:  mov    %eax,(%esp)
081ab01f +0x131a:  call   081aac12 <+0xf0d>
081ab024 +0x131f:  mov    0xc(%ebp),%edx
081ab027 +0x1322:  mov    %esi,0x8(%esp)
081ab02b +0x1326:  mov    %eax,0x4(%esp)
081ab02f +0x132a:  mov    %edx,(%esp)
081ab032 +0x132d:  call   081aa2d8 <+0x5d3>
081ab037 +0x1332:  test   %al,%al
081ab039 +0x1334:  je     081ab081 <+0x137c>
081ab03b +0x1336:  movb   $0x1,-0x1d(%ebp)
081ab03f +0x133a:  mov    -0x10(%ebp),%ecx
081ab042 +0x133d:  mov    -0x14(%ebp),%edx
081ab045 +0x1340:  lea    -0x1c(%ebp),%eax
081ab048 +0x1343:  mov    0x10(%ebp),%esi
081ab04b +0x1346:  mov    %esi,0x10(%esp)
081ab04f +0x134a:  mov    %ecx,0xc(%esp)
081ab053 +0x134e:  mov    %edx,0x8(%esp)
081ab057 +0x1352:  mov    0xc(%ebp),%edx
081ab05a +0x1355:  mov    %edx,0x4(%esp)
081ab05e +0x1359:  mov    %eax,(%esp)
081ab061 +0x135c:  call   081aae12 <+0x110d>
081ab066 +0x1361:  sub    $0x4,%esp
081ab069 +0x1364:  lea    -0x1d(%ebp),%eax
081ab06c +0x1367:  mov    %eax,0x8(%esp)
081ab070 +0x136b:  lea    -0x1c(%ebp),%eax
081ab073 +0x136e:  mov    %eax,0x4(%esp)
081ab077 +0x1372:  mov    %ebx,(%esp)
081ab07a +0x1375:  call   081ab1c0 <+0x14bb>
081ab07f +0x137a:  jmp    081ab09b <+0x1396>
081ab081 +0x137c:  movb   $0x0,-0x15(%ebp)
081ab085 +0x1380:  lea    -0x15(%ebp),%eax
081ab088 +0x1383:  mov    %eax,0x8(%esp)
081ab08c +0x1387:  lea    -0x34(%ebp),%eax
081ab08f +0x138a:  mov    %eax,0x4(%esp)
081ab093 +0x138e:  mov    %ebx,(%esp)
081ab096 +0x1391:  call   081ab20c <+0x1507>
081ab09b +0x1396:  mov    %ebx,%eax
081ab09d +0x1398:  lea    -0x8(%ebp),%esp
081ab0a0 +0x139b:  add    $0x0,%esp
081ab0a3 +0x139e:  pop    %ebx
081ab0a4 +0x139f:  pop    %esi
081ab0a5 +0x13a0:  pop    %ebp
081ab0a6 +0x13a1:  ret    $0x4
081ab0a9 +0x13a4:  nop
081ab0aa +0x13a5:  push   %ebp
081ab0ab +0x13a6:  mov    %esp,%ebp
081ab0ad +0x13a8:  mov    0x8(%ebp),%eax
081ab0b0 +0x13ab:  add    $0xc,%eax
081ab0b3 +0x13ae:  pop    %ebp
081ab0b4 +0x13af:  ret
081ab0b5 +0x13b0:  nop
081ab0b6 +0x13b1:  push   %ebp
081ab0b7 +0x13b2:  mov    %esp,%ebp
081ab0b9 +0x13b4:  sub    $0x18,%esp
081ab0bc +0x13b7:  mov    0x8(%ebp),%eax
081ab0bf +0x13ba:  mov    (%eax),%eax
081ab0c1 +0x13bc:  mov    %eax,(%esp)
081ab0c4 +0x13bf:  call   086df8e0 <_ZSt18_Rb_tree_decrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base const*)
081ab0c9 +0x13c4:  mov    0x8(%ebp),%edx
081ab0cc +0x13c7:  mov    %eax,(%edx)
081ab0ce +0x13c9:  mov    0x8(%ebp),%eax
081ab0d1 +0x13cc:  leave
081ab0d2 +0x13cd:  ret
081ab0d3 +0x13ce:  push   %ebp
081ab0d4 +0x13cf:  mov    %esp,%ebp
081ab0d6 +0x13d1:  mov    0x8(%ebp),%eax
081ab0d9 +0x13d4:  mov    0xc(%eax),%eax
081ab0dc +0x13d7:  pop    %ebp
081ab0dd +0x13d8:  ret
081ab0de +0x13d9:  push   %ebp
081ab0df +0x13da:  mov    %esp,%ebp
081ab0e1 +0x13dc:  sub    $0x18,%esp
081ab0e4 +0x13df:  mov    0x8(%ebp),%eax
081ab0e7 +0x13e2:  mov    (%eax),%eax
081ab0e9 +0x13e4:  mov    %eax,(%esp)
081ab0ec +0x13e7:  call   086df850 <_ZSt18_Rb_tree_incrementPKSt18_Rb_tree_node_base>  ; std::_Rb_tree_increment(std::_Rb_tree_node_base const*)
081ab0f1 +0x13ec:  mov    0x8(%ebp),%edx
081ab0f4 +0x13ef:  mov    %eax,(%edx)
081ab0f6 +0x13f1:  mov    0x8(%ebp),%eax
081ab0f9 +0x13f4:  leave
081ab0fa +0x13f5:  ret
081ab0fb +0x13f6:  push   %ebp
081ab0fc +0x13f7:  mov    %esp,%ebp
081ab0fe +0x13f9:  mov    0x8(%ebp),%eax
081ab101 +0x13fc:  add    $0x10,%eax
081ab104 +0x13ff:  pop    %ebp
081ab105 +0x1400:  ret
081ab106 +0x1401:  push   %ebp
081ab107 +0x1402:  mov    %esp,%ebp
081ab109 +0x1404:  pop    %ebp
081ab10a +0x1405:  ret
081ab10b +0x1406:  nop
081ab10c +0x1407:  push   %ebp
081ab10d +0x1408:  mov    %esp,%ebp
081ab10f +0x140a:  sub    $0x18,%esp
081ab112 +0x140d:  mov    0xc(%ebp),%eax
081ab115 +0x1410:  mov    %eax,(%esp)
081ab118 +0x1413:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081ab11d +0x1418:  leave
081ab11e +0x1419:  ret
081ab11f +0x141a:  push   %ebp
081ab120 +0x141b:  mov    %esp,%ebp
081ab122 +0x141d:  mov    0x8(%ebp),%eax
081ab125 +0x1420:  add    $0x10,%eax
081ab128 +0x1423:  pop    %ebp
081ab129 +0x1424:  ret
081ab12a +0x1425:  push   %ebp
081ab12b +0x1426:  mov    %esp,%ebp
081ab12d +0x1428:  mov    0x8(%ebp),%eax
081ab130 +0x142b:  pop    %ebp
081ab131 +0x142c:  ret
081ab132 +0x142d:  push   %ebp
081ab133 +0x142e:  mov    %esp,%ebp
081ab135 +0x1430:  mov    0x8(%ebp),%eax
081ab138 +0x1433:  add    $0x8,%eax
081ab13b +0x1436:  pop    %ebp
081ab13c +0x1437:  ret
081ab13d +0x1438:  nop
081ab13e +0x1439:  push   %ebp
081ab13f +0x143a:  mov    %esp,%ebp
081ab141 +0x143c:  push   %esi
081ab142 +0x143d:  push   %ebx
081ab143 +0x143e:  sub    $0x20,%esp
081ab146 +0x1441:  mov    0x8(%ebp),%eax
081ab149 +0x1444:  mov    %eax,(%esp)
081ab14c +0x1447:  call   081ab23a <+0x1535>
081ab151 +0x144c:  mov    %eax,-0xc(%ebp)
081ab154 +0x144f:  mov    0xc(%ebp),%eax
081ab157 +0x1452:  mov    %eax,(%esp)
081ab15a +0x1455:  call   081ab25d <+0x1558>
081ab15f +0x145a:  mov    %eax,%ebx
081ab161 +0x145c:  mov    0x8(%ebp),%eax
081ab164 +0x145f:  mov    %eax,(%esp)
081ab167 +0x1462:  call   081aac7a <+0xf75>
081ab16c +0x1467:  mov    %ebx,0x8(%esp)
081ab170 +0x146b:  mov    -0xc(%ebp),%edx
081ab173 +0x146e:  mov    %edx,0x4(%esp)
081ab177 +0x1472:  mov    %eax,(%esp)
081ab17a +0x1475:  call   081ab266 <+0x1561>
081ab17f +0x147a:  jmp    081ab1b5 <+0x14b0>
081ab181 +0x147c:  mov    %eax,(%esp)
081ab184 +0x147f:  call   08725ce0 <__cxa_begin_catch>
081ab189 +0x1484:  mov    -0xc(%ebp),%eax
081ab18c +0x1487:  mov    %eax,0x4(%esp)
081ab190 +0x148b:  mov    0x8(%ebp),%eax
081ab193 +0x148e:  mov    %eax,(%esp)
081ab196 +0x1491:  call   081aac9c <+0xf97>
081ab19b +0x1496:  call   08724be0 <__cxa_rethrow>
081ab1a0 +0x149b:  mov    %edx,%ebx
081ab1a2 +0x149d:  mov    %eax,%esi
081ab1a4 +0x149f:  call   08725c30 <__cxa_end_catch>
081ab1a9 +0x14a4:  mov    %esi,%eax
081ab1ab +0x14a6:  mov    %ebx,%edx
081ab1ad +0x14a8:  mov    %eax,(%esp)
081ab1b0 +0x14ab:  call   08ae3750 <_Unwind_Resume>
081ab1b5 +0x14b0:  mov    -0xc(%ebp),%eax
081ab1b8 +0x14b3:  add    $0x20,%esp
081ab1bb +0x14b6:  pop    %ebx
081ab1bc +0x14b7:  pop    %esi
081ab1bd +0x14b8:  pop    %ebp
081ab1be +0x14b9:  ret
081ab1bf +0x14ba:  nop
081ab1c0 +0x14bb:  push   %ebp
081ab1c1 +0x14bc:  mov    %esp,%ebp
081ab1c3 +0x14be:  sub    $0x18,%esp
081ab1c6 +0x14c1:  mov    0xc(%ebp),%eax
081ab1c9 +0x14c4:  mov    %eax,(%esp)
081ab1cc +0x14c7:  call   081ab12a <+0x1425>
081ab1d1 +0x14cc:  mov    0x8(%ebp),%edx
081ab1d4 +0x14cf:  mov    (%eax),%eax
081ab1d6 +0x14d1:  mov    %eax,(%edx)
081ab1d8 +0x14d3:  mov    0x10(%ebp),%eax
081ab1db +0x14d6:  mov    %eax,(%esp)
081ab1de +0x14d9:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081ab1e3 +0x14de:  movzbl (%eax),%edx
081ab1e6 +0x14e1:  mov    0x8(%ebp),%eax
081ab1e9 +0x14e4:  mov    %dl,0x4(%eax)
081ab1ec +0x14e7:  leave
081ab1ed +0x14e8:  ret
081ab1ee +0x14e9:  push   %ebp
081ab1ef +0x14ea:  mov    %esp,%ebp
081ab1f1 +0x14ec:  sub    $0x18,%esp
081ab1f4 +0x14ef:  mov    0x8(%ebp),%eax
081ab1f7 +0x14f2:  mov    (%eax),%eax
081ab1f9 +0x14f4:  mov    %eax,(%esp)
081ab1fc +0x14f7:  call   086df890 <_ZSt18_Rb_tree_decrementPSt18_Rb_tree_node_base>  ; std::_Rb_tree_decrement(std::_Rb_tree_node_base*)
081ab201 +0x14fc:  mov    0x8(%ebp),%edx
081ab204 +0x14ff:  mov    %eax,(%edx)
081ab206 +0x1501:  mov    0x8(%ebp),%eax
081ab209 +0x1504:  leave
081ab20a +0x1505:  ret
081ab20b +0x1506:  nop
081ab20c +0x1507:  push   %ebp
081ab20d +0x1508:  mov    %esp,%ebp
081ab20f +0x150a:  sub    $0x18,%esp
081ab212 +0x150d:  mov    0xc(%ebp),%eax
081ab215 +0x1510:  mov    %eax,(%esp)
081ab218 +0x1513:  call   081ab2a5 <+0x15a0>
081ab21d +0x1518:  mov    0x8(%ebp),%edx
081ab220 +0x151b:  mov    (%eax),%eax
081ab222 +0x151d:  mov    %eax,(%edx)
081ab224 +0x151f:  mov    0x10(%ebp),%eax
081ab227 +0x1522:  mov    %eax,(%esp)
081ab22a +0x1525:  call   08080fa6 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0xfcc>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0xfcc
081ab22f +0x152a:  movzbl (%eax),%edx
081ab232 +0x152d:  mov    0x8(%ebp),%eax
081ab235 +0x1530:  mov    %dl,0x4(%eax)
081ab238 +0x1533:  leave
081ab239 +0x1534:  ret
081ab23a +0x1535:  push   %ebp
081ab23b +0x1536:  mov    %esp,%ebp
081ab23d +0x1538:  sub    $0x18,%esp
081ab240 +0x153b:  mov    0x8(%ebp),%eax
081ab243 +0x153e:  movl   $0x0,0x8(%esp)
081ab24b +0x1546:  movl   $0x1,0x4(%esp)
081ab253 +0x154e:  mov    %eax,(%esp)
081ab256 +0x1551:  call   081ab2ae <+0x15a9>
081ab25b +0x1556:  leave
081ab25c +0x1557:  ret
081ab25d +0x1558:  push   %ebp
081ab25e +0x1559:  mov    %esp,%ebp
081ab260 +0x155b:  mov    0x8(%ebp),%eax
081ab263 +0x155e:  pop    %ebp
081ab264 +0x155f:  ret
081ab265 +0x1560:  nop
081ab266 +0x1561:  push   %ebp
081ab267 +0x1562:  mov    %esp,%ebp
081ab269 +0x1564:  push   %ebx
081ab26a +0x1565:  sub    $0x14,%esp
081ab26d +0x1568:  mov    0x10(%ebp),%eax
081ab270 +0x156b:  mov    %eax,(%esp)
081ab273 +0x156e:  call   081ab25d <+0x1558>
081ab278 +0x1573:  mov    %eax,%ebx
081ab27a +0x1575:  mov    0xc(%ebp),%eax
081ab27d +0x1578:  mov    %eax,0x4(%esp)
081ab281 +0x157c:  movl   $0x20,(%esp)
081ab288 +0x1583:  call   0807ef4c <_GLOBAL__I__Z13base64_encodePKhjRSs+0x1c>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x1c
081ab28d +0x1588:  mov    %eax,%edx
081ab28f +0x158a:  test   %edx,%edx
081ab291 +0x158c:  je     081ab29f <+0x159a>
081ab293 +0x158e:  mov    %ebx,0x4(%esp)
081ab297 +0x1592:  mov    %eax,(%esp)
081ab29a +0x1595:  call   081ab2e6 <+0x15e1>
081ab29f +0x159a:  add    $0x14,%esp
081ab2a2 +0x159d:  pop    %ebx
081ab2a3 +0x159e:  pop    %ebp
081ab2a4 +0x159f:  ret
081ab2a5 +0x15a0:  push   %ebp
081ab2a6 +0x15a1:  mov    %esp,%ebp
081ab2a8 +0x15a3:  mov    0x8(%ebp),%eax
081ab2ab +0x15a6:  pop    %ebp
081ab2ac +0x15a7:  ret
081ab2ad +0x15a8:  nop
081ab2ae +0x15a9:  push   %ebp
081ab2af +0x15aa:  mov    %esp,%ebp
081ab2b1 +0x15ac:  sub    $0x18,%esp
081ab2b4 +0x15af:  mov    0x8(%ebp),%eax
081ab2b7 +0x15b2:  mov    %eax,(%esp)
081ab2ba +0x15b5:  call   081ab33a <+0x1635>
081ab2bf +0x15ba:  cmp    0xc(%ebp),%eax
081ab2c2 +0x15bd:  setb   %al
081ab2c5 +0x15c0:  movzbl %al,%eax
081ab2c8 +0x15c3:  test   %eax,%eax
081ab2ca +0x15c5:  setne  %al
081ab2cd +0x15c8:  test   %al,%al
081ab2cf +0x15ca:  je     081ab2d6 <+0x15d1>
081ab2d1 +0x15cc:  call   086d93f0 <_ZSt17__throw_bad_allocv>  ; std::__throw_bad_alloc()
081ab2d6 +0x15d1:  mov    0xc(%ebp),%eax
081ab2d9 +0x15d4:  shl    $0x5,%eax
081ab2dc +0x15d7:  mov    %eax,(%esp)
081ab2df +0x15da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081ab2e4 +0x15df:  leave
081ab2e5 +0x15e0:  ret
081ab2e6 +0x15e1:  push   %ebp
081ab2e7 +0x15e2:  mov    %esp,%ebp
081ab2e9 +0x15e4:  sub    $0x18,%esp
081ab2ec +0x15e7:  mov    0x8(%ebp),%eax
081ab2ef +0x15ea:  movl   $0x0,(%eax)
081ab2f5 +0x15f0:  mov    0x8(%ebp),%eax
081ab2f8 +0x15f3:  movl   $0x0,0x4(%eax)
081ab2ff +0x15fa:  mov    0x8(%ebp),%eax
081ab302 +0x15fd:  movl   $0x0,0x8(%eax)
081ab309 +0x1604:  mov    0x8(%ebp),%eax
081ab30c +0x1607:  movl   $0x0,0xc(%eax)
081ab313 +0x160e:  mov    0xc(%ebp),%eax
081ab316 +0x1611:  mov    %eax,(%esp)
081ab319 +0x1614:  call   081ab25d <+0x1558>
081ab31e +0x1619:  mov    0x8(%ebp),%edx
081ab321 +0x161c:  mov    (%eax),%ecx
081ab323 +0x161e:  mov    %ecx,0x10(%edx)
081ab326 +0x1621:  mov    0x4(%eax),%ecx
081ab329 +0x1624:  mov    %ecx,0x14(%edx)
081ab32c +0x1627:  mov    0x8(%eax),%ecx
081ab32f +0x162a:  mov    %ecx,0x18(%edx)
081ab332 +0x162d:  mov    0xc(%eax),%eax
081ab335 +0x1630:  mov    %eax,0x1c(%edx)
081ab338 +0x1633:  leave
081ab339 +0x1634:  ret
081ab33a +0x1635:  push   %ebp
081ab33b +0x1636:  mov    %esp,%ebp
081ab33d +0x1638:  mov    $0x7ffffff,%eax
081ab342 +0x163d:  pop    %ebp
081ab343 +0x163e:  ret
```

## 反编译 C

```c
// <global>::global @ 0x81a9d05

/* ARAD::Arad_ServerStateManager::Arad_ServerStateManager() */

void ARAD::Arad_ServerStateManager::_GLOBAL__I_Arad_ServerStateManager(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
