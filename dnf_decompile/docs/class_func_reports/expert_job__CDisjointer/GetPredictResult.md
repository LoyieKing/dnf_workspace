# GetPredictResult

`_ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item`

`expert_job::CDisjointer::GetPredictResult(CUser*, CItem*, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d1f68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d1f68  _ZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_Item
#           expert_job::CDisjointer::GetPredictResult(CUser*, CItem*, Inven_Item*)
# range [0x085d1f68, 0x085d2349]
085d1f68 +0x000:  push   %ebp
085d1f69 +0x001:  mov    %esp,%ebp
085d1f6b +0x003:  push   %edi
085d1f6c +0x004:  push   %esi
085d1f6d +0x005:  push   %ebx
085d1f6e +0x006:  sub    $0x7c,%esp
085d1f71 +0x009:  mov    $&_ZGVZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,%eax
085d1f76 +0x00e:  movzbl (%eax),%eax
085d1f79 +0x011:  test   %al,%al
085d1f7b +0x013:  jne    085d1fee <+0x86>
085d1f7d +0x015:  movl   $&_ZGVZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d1f84 +0x01c:  call   08725330 <__cxa_guard_acquire>
085d1f89 +0x021:  test   %eax,%eax
085d1f8b +0x023:  setne  %al
085d1f8e +0x026:  test   %al,%al
085d1f90 +0x028:  je     085d1fee <+0x86>
085d1f92 +0x02a:  mov    $0x0,%ebx
085d1f97 +0x02f:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d1f9e +0x036:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
085d1fa3 +0x03b:  movl   $&_ZGVZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d1faa +0x042:  call   08725250 <__cxa_guard_release>
085d1faf +0x047:  mov    $&_ZNSt6vectorIiSaIiEED1Ev,%eax
085d1fb4 +0x04c:  movl   $&__dso_handle,0x8(%esp)
085d1fbc +0x054:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d1fc4 +0x05c:  mov    %eax,(%esp)
085d1fc7 +0x05f:  call   0807ddd0 <_init+0x6c8>
085d1fcc +0x064:  jmp    085d1fee <+0x86>
085d1fce +0x066:  mov    %edx,%esi
085d1fd0 +0x068:  mov    %eax,%edi
085d1fd2 +0x06a:  test   %bl,%bl
085d1fd4 +0x06c:  jne    085d1fe2 <+0x7a>
085d1fd6 +0x06e:  movl   $&_ZGVZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d1fdd +0x075:  call   087252c0 <__cxa_guard_abort>
085d1fe2 +0x07a:  mov    %edi,%eax
085d1fe4 +0x07c:  mov    %esi,%edx
085d1fe6 +0x07e:  mov    %eax,(%esp)
085d1fe9 +0x081:  call   08ae3750 <_Unwind_Resume>
085d1fee +0x086:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d1ff5 +0x08d:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
085d1ffa +0x092:  movb   $0x0,-0x1d(%ebp)
085d1ffe +0x096:  cmpl   $0x0,0x14(%ebp)
085d2002 +0x09a:  je     085d2028 <+0xc0>
085d2004 +0x09c:  mov    0x14(%ebp),%eax
085d2007 +0x09f:  add    $0x11,%eax
085d200a +0x0a2:  mov    %eax,(%esp)
085d200d +0x0a5:  call   081507bc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xf1>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xf1
085d2012 +0x0aa:  xor    $0x1,%eax
085d2015 +0x0ad:  test   %al,%al
085d2017 +0x0af:  je     085d2020 <+0xb8>
085d2019 +0x0b1:  mov    $0x1,%eax
085d201e +0x0b6:  jmp    085d2025 <+0xbd>
085d2020 +0x0b8:  mov    $0x0,%eax
085d2025 +0x0bd:  mov    %al,-0x1d(%ebp)
085d2028 +0x0c0:  mov    0xc(%ebp),%eax
085d202b +0x0c3:  mov    %eax,0x4(%esp)
085d202f +0x0c7:  mov    0x8(%ebp),%eax
085d2032 +0x0ca:  mov    %eax,(%esp)
085d2035 +0x0cd:  call   08234854 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9efe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9efe
085d203a +0x0d2:  test   %al,%al
085d203c +0x0d4:  je     085d2071 <+0x109>
085d203e +0x0d6:  mov    0x10(%ebp),%eax
085d2041 +0x0d9:  mov    %eax,(%esp)
085d2044 +0x0dc:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085d2049 +0x0e1:  cmp    $0x1,%eax
085d204c +0x0e4:  setg   %al
085d204f +0x0e7:  test   %al,%al
085d2051 +0x0e9:  je     085d2071 <+0x109>
085d2053 +0x0eb:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d2058 +0x0f0:  mov    0x34(%eax),%eax
085d205b +0x0f3:  mov    %eax,-0x54(%ebp)
085d205e +0x0f6:  lea    -0x54(%ebp),%eax
085d2061 +0x0f9:  mov    %eax,0x4(%esp)
085d2065 +0x0fd:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d206c +0x104:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085d2071 +0x109:  movzbl -0x1d(%ebp),%esi
085d2075 +0x10d:  mov    0x8(%ebp),%eax
085d2078 +0x110:  mov    %eax,(%esp)
085d207b +0x113:  call   085d1f0a <_ZN10expert_job11CDisjointer26get_disjoint_machine_gradeEv>  ; expert_job::CDisjointer::get_disjoint_machine_grade()
085d2080 +0x118:  movzbl %al,%ebx
085d2083 +0x11b:  mov    0x10(%ebp),%eax
085d2086 +0x11e:  mov    %eax,(%esp)
085d2089 +0x121:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085d208e +0x126:  movzbl %al,%eax
085d2091 +0x129:  mov    %esi,0xc(%esp)
085d2095 +0x12d:  mov    %ebx,0x8(%esp)
085d2099 +0x131:  mov    %eax,0x4(%esp)
085d209d +0x135:  lea    -0x4b(%ebp),%eax
085d20a0 +0x138:  mov    %eax,(%esp)
085d20a3 +0x13b:  call   085d3b9e <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x93>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x93
085d20a8 +0x140:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d20ad +0x145:  lea    0x1bc(%eax),%ecx
085d20b3 +0x14b:  lea    -0x50(%ebp),%eax
085d20b6 +0x14e:  lea    -0x4b(%ebp),%edx
085d20b9 +0x151:  mov    %edx,0x8(%esp)
085d20bd +0x155:  mov    %ecx,0x4(%esp)
085d20c1 +0x159:  mov    %eax,(%esp)
085d20c4 +0x15c:  call   085d3fae <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x4a3>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x4a3
085d20c9 +0x161:  sub    $0x4,%esp
085d20cc +0x164:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d20d1 +0x169:  lea    0x1bc(%eax),%edx
085d20d7 +0x16f:  lea    -0x48(%ebp),%eax
085d20da +0x172:  mov    %edx,0x4(%esp)
085d20de +0x176:  mov    %eax,(%esp)
085d20e1 +0x179:  call   085d3fda <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x4cf>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x4cf
085d20e6 +0x17e:  sub    $0x4,%esp
085d20e9 +0x181:  lea    -0x48(%ebp),%eax
085d20ec +0x184:  mov    %eax,0x4(%esp)
085d20f0 +0x188:  lea    -0x50(%ebp),%eax
085d20f3 +0x18b:  mov    %eax,(%esp)
085d20f6 +0x18e:  call   085d4000 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x4f5>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x4f5
085d20fb +0x193:  test   %al,%al
085d20fd +0x195:  je     085d233a <+0x3d2>
085d2103 +0x19b:  lea    -0x50(%ebp),%eax
085d2106 +0x19e:  mov    %eax,(%esp)
085d2109 +0x1a1:  call   085d4014 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x509>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x509
085d210e +0x1a6:  add    $0x4,%eax
085d2111 +0x1a9:  mov    %eax,-0x1c(%ebp)
085d2114 +0x1ac:  mov    -0x1c(%ebp),%eax
085d2117 +0x1af:  mov    (%eax),%eax
085d2119 +0x1b1:  mov    %eax,-0x44(%ebp)
085d211c +0x1b4:  lea    -0x44(%ebp),%eax
085d211f +0x1b7:  mov    %eax,0x4(%esp)
085d2123 +0x1bb:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d212a +0x1c2:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
085d212f +0x1c7:  lea    -0x58(%ebp),%eax
085d2132 +0x1ca:  mov    %eax,(%esp)
085d2135 +0x1cd:  call   085d4022 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x517>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x517
085d213a +0x1d2:  mov    -0x1c(%ebp),%eax
085d213d +0x1d5:  lea    0x8(%eax),%edx
085d2140 +0x1d8:  lea    -0x6c(%ebp),%eax
085d2143 +0x1db:  mov    %edx,0x4(%esp)
085d2147 +0x1df:  mov    %eax,(%esp)
085d214a +0x1e2:  call   085d4030 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x525>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x525
085d214f +0x1e7:  sub    $0x4,%esp
085d2152 +0x1ea:  mov    -0x6c(%ebp),%eax
085d2155 +0x1ed:  mov    %eax,-0x58(%ebp)
085d2158 +0x1f0:  jmp    085d2208 <+0x2a0>
085d215d +0x1f5:  lea    -0x58(%ebp),%eax
085d2160 +0x1f8:  mov    %eax,(%esp)
085d2163 +0x1fb:  call   085d40bc <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5b1>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5b1
085d2168 +0x200:  mov    %eax,%ebx
085d216a +0x202:  lea    -0x3c(%ebp),%eax
085d216d +0x205:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d2175 +0x20d:  mov    %eax,(%esp)
085d2178 +0x210:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085d217d +0x215:  sub    $0x4,%esp
085d2180 +0x218:  lea    -0x38(%ebp),%eax
085d2183 +0x21b:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d218b +0x223:  mov    %eax,(%esp)
085d218e +0x226:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085d2193 +0x22b:  sub    $0x4,%esp
085d2196 +0x22e:  lea    -0x5c(%ebp),%eax
085d2199 +0x231:  mov    %ebx,0xc(%esp)
085d219d +0x235:  mov    -0x3c(%ebp),%edx
085d21a0 +0x238:  mov    %edx,0x8(%esp)
085d21a4 +0x23c:  mov    -0x38(%ebp),%edx
085d21a7 +0x23f:  mov    %edx,0x4(%esp)
085d21ab +0x243:  mov    %eax,(%esp)
085d21ae +0x246:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
085d21b3 +0x24b:  sub    $0x4,%esp
085d21b6 +0x24e:  lea    -0x34(%ebp),%eax
085d21b9 +0x251:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d21c1 +0x259:  mov    %eax,(%esp)
085d21c4 +0x25c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085d21c9 +0x261:  sub    $0x4,%esp
085d21cc +0x264:  lea    -0x34(%ebp),%eax
085d21cf +0x267:  mov    %eax,0x4(%esp)
085d21d3 +0x26b:  lea    -0x5c(%ebp),%eax
085d21d6 +0x26e:  mov    %eax,(%esp)
085d21d9 +0x271:  call   082688da <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x26b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x26b
085d21de +0x276:  test   %al,%al
085d21e0 +0x278:  je     085d21fd <+0x295>
085d21e2 +0x27a:  lea    -0x58(%ebp),%eax
085d21e5 +0x27d:  mov    %eax,(%esp)
085d21e8 +0x280:  call   085d40bc <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5b1>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5b1
085d21ed +0x285:  mov    %eax,0x4(%esp)
085d21f1 +0x289:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d21f8 +0x290:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085d21fd +0x295:  lea    -0x58(%ebp),%eax
085d2200 +0x298:  mov    %eax,(%esp)
085d2203 +0x29b:  call   085d40a6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x59b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x59b
085d2208 +0x2a0:  mov    -0x1c(%ebp),%eax
085d220b +0x2a3:  lea    0x8(%eax),%edx
085d220e +0x2a6:  lea    -0x40(%ebp),%eax
085d2211 +0x2a9:  mov    %edx,0x4(%esp)
085d2215 +0x2ad:  mov    %eax,(%esp)
085d2218 +0x2b0:  call   085d4054 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x549>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x549
085d221d +0x2b5:  sub    $0x4,%esp
085d2220 +0x2b8:  lea    -0x40(%ebp),%eax
085d2223 +0x2bb:  mov    %eax,0x4(%esp)
085d2227 +0x2bf:  lea    -0x58(%ebp),%eax
085d222a +0x2c2:  mov    %eax,(%esp)
085d222d +0x2c5:  call   085d407a <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x56f>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x56f
085d2232 +0x2ca:  test   %al,%al
085d2234 +0x2cc:  jne    085d215d <+0x1f5>
085d223a +0x2d2:  mov    -0x1c(%ebp),%eax
085d223d +0x2d5:  lea    0x14(%eax),%edx
085d2240 +0x2d8:  lea    -0x6c(%ebp),%eax
085d2243 +0x2db:  mov    %edx,0x4(%esp)
085d2247 +0x2df:  mov    %eax,(%esp)
085d224a +0x2e2:  call   085d4030 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x525>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x525
085d224f +0x2e7:  sub    $0x4,%esp
085d2252 +0x2ea:  mov    -0x6c(%ebp),%eax
085d2255 +0x2ed:  mov    %eax,-0x58(%ebp)
085d2258 +0x2f0:  jmp    085d2308 <+0x3a0>
085d225d +0x2f5:  lea    -0x58(%ebp),%eax
085d2260 +0x2f8:  mov    %eax,(%esp)
085d2263 +0x2fb:  call   085d40bc <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5b1>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5b1
085d2268 +0x300:  mov    %eax,%ebx
085d226a +0x302:  lea    -0x2c(%ebp),%eax
085d226d +0x305:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d2275 +0x30d:  mov    %eax,(%esp)
085d2278 +0x310:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085d227d +0x315:  sub    $0x4,%esp
085d2280 +0x318:  lea    -0x28(%ebp),%eax
085d2283 +0x31b:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d228b +0x323:  mov    %eax,(%esp)
085d228e +0x326:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085d2293 +0x32b:  sub    $0x4,%esp
085d2296 +0x32e:  lea    -0x60(%ebp),%eax
085d2299 +0x331:  mov    %ebx,0xc(%esp)
085d229d +0x335:  mov    -0x2c(%ebp),%edx
085d22a0 +0x338:  mov    %edx,0x8(%esp)
085d22a4 +0x33c:  mov    -0x28(%ebp),%edx
085d22a7 +0x33f:  mov    %edx,0x4(%esp)
085d22ab +0x343:  mov    %eax,(%esp)
085d22ae +0x346:  call   080f9997 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1a3>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1a3
085d22b3 +0x34b:  sub    $0x4,%esp
085d22b6 +0x34e:  lea    -0x24(%ebp),%eax
085d22b9 +0x351:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,0x4(%esp)
085d22c1 +0x359:  mov    %eax,(%esp)
085d22c4 +0x35c:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085d22c9 +0x361:  sub    $0x4,%esp
085d22cc +0x364:  lea    -0x24(%ebp),%eax
085d22cf +0x367:  mov    %eax,0x4(%esp)
085d22d3 +0x36b:  lea    -0x60(%ebp),%eax
085d22d6 +0x36e:  mov    %eax,(%esp)
085d22d9 +0x371:  call   082688da <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x26b>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x26b
085d22de +0x376:  test   %al,%al
085d22e0 +0x378:  je     085d22fd <+0x395>
085d22e2 +0x37a:  lea    -0x58(%ebp),%eax
085d22e5 +0x37d:  mov    %eax,(%esp)
085d22e8 +0x380:  call   085d40bc <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x5b1>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x5b1
085d22ed +0x385:  mov    %eax,0x4(%esp)
085d22f1 +0x389:  movl   $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,(%esp)
085d22f8 +0x390:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
085d22fd +0x395:  lea    -0x58(%ebp),%eax
085d2300 +0x398:  mov    %eax,(%esp)
085d2303 +0x39b:  call   085d40a6 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x59b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x59b
085d2308 +0x3a0:  mov    -0x1c(%ebp),%eax
085d230b +0x3a3:  lea    0x14(%eax),%edx
085d230e +0x3a6:  lea    -0x30(%ebp),%eax
085d2311 +0x3a9:  mov    %edx,0x4(%esp)
085d2315 +0x3ad:  mov    %eax,(%esp)
085d2318 +0x3b0:  call   085d4054 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x549>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x549
085d231d +0x3b5:  sub    $0x4,%esp
085d2320 +0x3b8:  lea    -0x30(%ebp),%eax
085d2323 +0x3bb:  mov    %eax,0x4(%esp)
085d2327 +0x3bf:  lea    -0x58(%ebp),%eax
085d232a +0x3c2:  mov    %eax,(%esp)
085d232d +0x3c5:  call   085d407a <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x56f>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x56f
085d2332 +0x3ca:  test   %al,%al
085d2334 +0x3cc:  jne    085d225d <+0x2f5>
085d233a +0x3d2:  mov    $&_ZZN10expert_job11CDisjointer16GetPredictResultEP5CUserP5CItemP10Inven_ItemE6result,%eax
085d233f +0x3d7:  lea    -0xc(%ebp),%esp
085d2342 +0x3da:  add    $0x0,%esp
085d2345 +0x3dd:  pop    %ebx
085d2346 +0x3de:  pop    %esi
085d2347 +0x3df:  pop    %edi
085d2348 +0x3e0:  pop    %ebp
085d2349 +0x3e1:  ret
```

## 反编译 C

```c
// expert_job::CDisjointer::GetPredictResult @ 0x85d1f68

/* expert_job::CDisjointer::GetPredictResult(CUser*, CItem*, Inven_Item*) */

undefined1 * __thiscall
expert_job::CDisjointer::GetPredictResult
          (CDisjointer *this,CUser *param_1,CItem *param_2,Inven_Item *param_3)

{
  char cVar1;
  uchar uVar2;
  uchar uVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_94 [2];
  undefined4 local_70 [3];
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined4 local_5c;
  int local_58;
  DisjointMachineGrade local_54 [5];
  DisjointMachineGrade local_4f [3];
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  local_4c [4];
  int local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  int local_30;
  undefined4 local_2c;
  undefined1 local_28 [7];
  bool local_21;
  int *local_20;
  
  if ((GetPredictResult(CUser*,CItem*,Inven_Item*)::result == '\0') &&
     (iVar5 = __cxa_guard_acquire(), iVar5 != 0)) {
                    /* try { // try from 085d1f9e to 085d1fa2 has its CatchHandler @ 085d1fce */
    std::vector<int,std::allocator<int>>::vector
              ((vector<int,std::allocator<int>> *)
               GetPredictResult(CUser*,CItem*,Inven_Item*)::result);
    __cxa_guard_release();
    __cxa_atexit();
  }
  std::vector<int,std::allocator<int>>::clear
            ((vector<int,std::allocator<int>> *)GetPredictResult(CUser*,CItem*,Inven_Item*)::result)
  ;
  local_21 = false;
  if (param_3 != (Inven_Item *)0x0) {
    cVar1 = stAmplifyOption_t::isIdentified((stAmplifyOption_t *)(param_3 + 0x11));
    local_21 = cVar1 != '\x01';
  }
  cVar1 = isMine(this,param_1);
  if ((cVar1 != '\0') && (iVar5 = CItem::get_rarity(param_2), 1 < iVar5)) {
    iVar5 = GetScript();
    local_58 = *(int *)(iVar5 + 0x34);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)
               GetPredictResult(CUser*,CItem*,Inven_Item*)::result,&local_58);
  }
  bVar4 = local_21;
  uVar2 = get_disjoint_machine_grade(this);
  uVar3 = CItem::get_rarity(param_2);
  DisjointMachineGrade::DisjointMachineGrade(local_4f,uVar3,uVar2,bVar4);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::find(local_54);
  GetScript();
  std::
  map<DisjointMachineGrade,stDisjointResult,std::less<DisjointMachineGrade>,std::allocator<std::pair<DisjointMachineGrade_const,stDisjointResult>>>
  ::end(local_4c);
  cVar1 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::operator!=
                    ((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                     local_54,(_Rb_tree_iterator *)local_4c);
  if (cVar1 != '\0') {
    iVar5 = std::_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>>::
            operator->((_Rb_tree_iterator<std::pair<DisjointMachineGrade_const,stDisjointResult>> *)
                       local_54);
    local_20 = (int *)(iVar5 + 4);
    local_48 = *local_20;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)
               GetPredictResult(CUser*,CItem*,Inven_Item*)::result,&local_48);
    __gnu_cxx::
    __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
    ::__normal_iterator((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                         *)&local_5c);
    std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::begin();
    local_5c = local_70[0];
    piVar7 = (int *)&stack0xffffff74;
    while( true ) {
      piVar7[1] = (int)(local_20 + 2);
      *piVar7 = (int)local_44;
      piVar7[-1] = 0x85d221d;
      std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::end();
      piVar7[1] = (int)local_44;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2232;
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)*piVar7,(__normal_iterator *)piVar7[1]);
      if (!bVar4) break;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2168;
      iVar5 = __gnu_cxx::
              __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
              ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                           *)*piVar7);
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_40;
      piVar7[-1] = 0x85d217d;
      std::vector<int,std::allocator<int>>::end();
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_3c;
      piVar7[-1] = 0x85d2193;
      std::vector<int,std::allocator<int>>::begin();
      piVar7[3] = iVar5;
      piVar7[2] = local_40;
      piVar7[1] = local_3c;
      *piVar7 = (int)local_60;
      piVar7[-1] = 0x85d21b3;
      std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>();
      *piVar7 = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      piVar7[-1] = (int)local_38;
      piVar7[-2] = 0x85d21c9;
      std::vector<int,std::allocator<int>>::end();
      *piVar7 = (int)local_38;
      piVar7[-1] = (int)local_60;
      piVar7[-2] = 0x85d21de;
      bVar4 = __gnu_cxx::operator==((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
      if (bVar4) {
        piVar7[-1] = (int)&local_5c;
        piVar7[-2] = 0x85d21ed;
        uVar6 = __gnu_cxx::
                __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                             *)piVar7[-1]);
        *piVar7 = uVar6;
        piVar7[-1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
        piVar7[-2] = 0x85d21fd;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)piVar7[-1],(int *)*piVar7);
      }
      piVar7[-1] = (int)&local_5c;
      piVar7[-2] = 0x85d2208;
      __gnu_cxx::
      __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
      ::operator++((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                    *)piVar7[-1]);
      piVar7 = piVar7 + -1;
    }
    piVar7[1] = (int)(local_20 + 5);
    *piVar7 = (int)local_70;
    piVar7[-1] = 0x85d224f;
    std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::begin();
    local_5c = local_70[0];
    while( true ) {
      piVar7[1] = (int)(local_20 + 5);
      *piVar7 = (int)local_34;
      piVar7[-1] = 0x85d231d;
      std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>::end();
      piVar7[1] = (int)local_34;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2332;
      bVar4 = __gnu_cxx::operator!=((__normal_iterator *)*piVar7,(__normal_iterator *)piVar7[1]);
      if (!bVar4) break;
      *piVar7 = (int)&local_5c;
      piVar7[-1] = 0x85d2268;
      iVar5 = __gnu_cxx::
              __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
              ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                           *)*piVar7);
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_30;
      piVar7[-1] = 0x85d227d;
      std::vector<int,std::allocator<int>>::end();
      piVar7[1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      *piVar7 = (int)&local_2c;
      piVar7[-1] = 0x85d2293;
      std::vector<int,std::allocator<int>>::begin();
      piVar7[3] = iVar5;
      piVar7[2] = local_30;
      piVar7[1] = local_2c;
      *piVar7 = (int)local_64;
      piVar7[-1] = 0x85d22b3;
      std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>();
      *piVar7 = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
      piVar7[-1] = (int)local_28;
      piVar7[-2] = 0x85d22c9;
      std::vector<int,std::allocator<int>>::end();
      *piVar7 = (int)local_28;
      piVar7[-1] = (int)local_64;
      piVar7[-2] = 0x85d22de;
      bVar4 = __gnu_cxx::operator==((__normal_iterator *)piVar7[-1],(__normal_iterator *)*piVar7);
      if (bVar4) {
        piVar7[-1] = (int)&local_5c;
        piVar7[-2] = 0x85d22ed;
        uVar6 = __gnu_cxx::
                __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                ::operator*((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                             *)piVar7[-1]);
        *piVar7 = uVar6;
        piVar7[-1] = (int)GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
        piVar7[-2] = 0x85d22fd;
        std::vector<int,std::allocator<int>>::push_back
                  ((vector<int,std::allocator<int>> *)piVar7[-1],(int *)*piVar7);
      }
      piVar7[-1] = (int)&local_5c;
      piVar7[-2] = 0x85d2308;
      __gnu_cxx::
      __normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
      ::operator++((__normal_iterator<stItemSelectRate*,std::vector<stItemSelectRate,std::allocator<stItemSelectRate>>>
                    *)piVar7[-1]);
      piVar7 = piVar7 + -1;
    }
  }
  return GetPredictResult(CUser*,CItem*,Inven_Item*)::result;
}
```
