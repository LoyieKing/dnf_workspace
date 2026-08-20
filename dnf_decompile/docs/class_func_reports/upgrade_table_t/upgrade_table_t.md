# upgrade_table_t

`_ZN15upgrade_table_tC1Ev`

`upgrade_table_t::upgrade_table_t()`

| 类 | 地址 |
|---|---|
| `upgrade_table_t` | `0x089000ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089000ca  _ZN15upgrade_table_tC1Ev
#           upgrade_table_t::upgrade_table_t()
# range [0x089000ca, 0x089003af]
089000ca +0x000:  push   %ebp
089000cb +0x001:  mov    %esp,%ebp
089000cd +0x003:  push   %esi
089000ce +0x004:  push   %ebx
089000cf +0x005:  sub    $0x40,%esp
089000d2 +0x008:  mov    0x8(%ebp),%eax
089000d5 +0x00b:  mov    %eax,(%esp)
089000d8 +0x00e:  call   0891deca <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4ba9>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4ba9
089000dd +0x013:  mov    0x8(%ebp),%eax
089000e0 +0x016:  add    $0x434,%eax
089000e5 +0x01b:  mov    %eax,(%esp)
089000e8 +0x01e:  call   0891a8e0 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x15bf>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x15bf
089000ed +0x023:  mov    0x8(%ebp),%eax
089000f0 +0x026:  add    $0x49c,%eax
089000f5 +0x02b:  mov    %eax,(%esp)
089000f8 +0x02e:  call   0891dede <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4bbd>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4bbd
089000fd +0x033:  lea    -0x27(%ebp),%eax
08900100 +0x036:  mov    %eax,(%esp)
08900103 +0x039:  call   0891def2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4bd1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4bd1
08900108 +0x03e:  mov    0x8(%ebp),%eax
0890010b +0x041:  lea    0x4c4(%eax),%edx
08900111 +0x047:  lea    -0x27(%ebp),%eax
08900114 +0x04a:  mov    %eax,0x10(%esp)
08900118 +0x04e:  lea    -0x26(%ebp),%eax
0890011b +0x051:  mov    %eax,0xc(%esp)
0890011f +0x055:  lea    -0x25(%ebp),%eax
08900122 +0x058:  mov    %eax,0x8(%esp)
08900126 +0x05c:  movl   $0xa,0x4(%esp)
0890012e +0x064:  mov    %edx,(%esp)
08900131 +0x067:  call   0891df1a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4bf9>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4bf9
08900136 +0x06c:  jmp    08900150 <+0x86>
08900138 +0x06e:  mov    %edx,%ebx
0890013a +0x070:  mov    %eax,%esi
0890013c +0x072:  lea    -0x27(%ebp),%eax
0890013f +0x075:  mov    %eax,(%esp)
08900142 +0x078:  call   0891df06 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4be5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4be5
08900147 +0x07d:  mov    %esi,%eax
08900149 +0x07f:  mov    %ebx,%edx
0890014b +0x081:  jmp    08900365 <+0x29b>
08900150 +0x086:  lea    -0x27(%ebp),%eax
08900153 +0x089:  mov    %eax,(%esp)
08900156 +0x08c:  call   0891df06 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4be5>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4be5
0890015b +0x091:  movl   $0x0,-0x24(%ebp)
08900162 +0x098:  jmp    08900177 <+0xad>
08900164 +0x09a:  mov    -0x24(%ebp),%edx
08900167 +0x09d:  mov    0x8(%ebp),%eax
0890016a +0x0a0:  mov    $0x3f800000,%ecx
0890016f +0x0a5:  mov    %ecx,0xc(%eax,%edx,4)
08900173 +0x0a9:  addl   $0x1,-0x24(%ebp)
08900177 +0x0ad:  cmpl   $0x3,-0x24(%ebp)
0890017b +0x0b1:  setle  %al
0890017e +0x0b4:  test   %al,%al
08900180 +0x0b6:  jne    08900164 <+0x9a>
08900182 +0x0b8:  movl   $0x0,-0x20(%ebp)
08900189 +0x0bf:  jmp    089001a1 <+0xd7>
0890018b +0x0c1:  mov    -0x20(%ebp),%edx
0890018e +0x0c4:  mov    0x8(%ebp),%eax
08900191 +0x0c7:  lea    0x4(%edx),%ecx
08900194 +0x0ca:  mov    $0x3f800000,%edx
08900199 +0x0cf:  mov    %edx,0xc(%eax,%ecx,4)
0890019d +0x0d3:  addl   $0x1,-0x20(%ebp)
089001a1 +0x0d7:  cmpl   $0x15,-0x20(%ebp)
089001a5 +0x0db:  setle  %al
089001a8 +0x0de:  test   %al,%al
089001aa +0x0e0:  jne    0890018b <+0xc1>
089001ac +0x0e2:  movl   $0x0,-0x1c(%ebp)
089001b3 +0x0e9:  jmp    089001dd <+0x113>
089001b5 +0x0eb:  mov    -0x1c(%ebp),%edx
089001b8 +0x0ee:  mov    0x8(%ebp),%eax
089001bb +0x0f1:  lea    0x1c(%edx),%ecx
089001be +0x0f4:  mov    $0x3f800000,%edx
089001c3 +0x0f9:  mov    %edx,0x4(%eax,%ecx,4)
089001c7 +0x0fd:  mov    -0x1c(%ebp),%edx
089001ca +0x100:  mov    0x8(%ebp),%eax
089001cd +0x103:  lea    0x20(%edx),%ecx
089001d0 +0x106:  mov    $0x3f800000,%edx
089001d5 +0x10b:  mov    %edx,0xc(%eax,%ecx,4)
089001d9 +0x10f:  addl   $0x1,-0x1c(%ebp)
089001dd +0x113:  cmpl   $0x5,-0x1c(%ebp)
089001e1 +0x117:  setle  %al
089001e4 +0x11a:  test   %al,%al
089001e6 +0x11c:  jne    089001b5 <+0xeb>
089001e8 +0x11e:  movl   $0x0,-0x18(%ebp)
089001ef +0x125:  jmp    08900206 <+0x13c>
089001f1 +0x127:  mov    -0x18(%ebp),%edx
089001f4 +0x12a:  mov    0x8(%ebp),%eax
089001f7 +0x12d:  add    $0x28,%edx
089001fa +0x130:  movl   $0x1,0x4(%eax,%edx,4)
08900202 +0x138:  addl   $0x1,-0x18(%ebp)
08900206 +0x13c:  cmpl   $0x63,-0x18(%ebp)
0890020a +0x140:  setle  %al
0890020d +0x143:  test   %al,%al
0890020f +0x145:  jne    089001f1 <+0x127>
08900211 +0x147:  mov    0x8(%ebp),%eax
08900214 +0x14a:  movl   $0x0,0x234(%eax)
0890021e +0x154:  movl   $0x0,-0x14(%ebp)
08900225 +0x15b:  jmp    08900240 <+0x176>
08900227 +0x15d:  mov    -0x14(%ebp),%edx
0890022a +0x160:  mov    0x8(%ebp),%eax
0890022d +0x163:  lea    0x9c(%edx),%ecx
08900233 +0x169:  mov    $0x3f800000,%edx
08900238 +0x16e:  mov    %edx,0x4(%eax,%ecx,4)
0890023c +0x172:  addl   $0x1,-0x14(%ebp)
08900240 +0x176:  cmpl   $0x63,-0x14(%ebp)
08900244 +0x17a:  setle  %al
08900247 +0x17d:  test   %al,%al
08900249 +0x17f:  jne    08900227 <+0x15d>
0890024b +0x181:  movl   $0x0,-0x10(%ebp)
08900252 +0x188:  jmp    08900280 <+0x1b6>
08900254 +0x18a:  mov    -0x10(%ebp),%edx
08900257 +0x18d:  mov    0x8(%ebp),%eax
0890025a +0x190:  add    $0x100,%edx
08900260 +0x196:  movl   $0xffffffff,0x4(%eax,%edx,4)
08900268 +0x19e:  mov    -0x10(%ebp),%edx
0890026b +0x1a1:  mov    0x8(%ebp),%eax
0890026e +0x1a4:  add    $0x104,%edx
08900274 +0x1aa:  movl   $0xffffffff,0xc(%eax,%edx,4)
0890027c +0x1b2:  addl   $0x1,-0x10(%ebp)
08900280 +0x1b6:  cmpl   $0x5,-0x10(%ebp)
08900284 +0x1ba:  setle  %al
08900287 +0x1bd:  test   %al,%al
08900289 +0x1bf:  jne    08900254 <+0x18a>
0890028b +0x1c1:  mov    0x8(%ebp),%eax
0890028e +0x1c4:  movl   $0xffffffff,0x238(%eax)
08900298 +0x1ce:  mov    0x8(%ebp),%eax
0890029b +0x1d1:  movl   $0x0,0x23c(%eax)
089002a5 +0x1db:  movl   $0x0,-0xc(%ebp)
089002ac +0x1e2:  jmp    089002da <+0x210>
089002ae +0x1e4:  mov    -0xc(%ebp),%edx
089002b1 +0x1e7:  mov    0x8(%ebp),%eax
089002b4 +0x1ea:  lea    0x90(%edx),%ecx
089002ba +0x1f0:  mov    $0x0,%edx
089002bf +0x1f5:  mov    %edx,(%eax,%ecx,4)
089002c2 +0x1f8:  mov    -0xc(%ebp),%edx
089002c5 +0x1fb:  mov    0x8(%ebp),%eax
089002c8 +0x1fe:  add    $0x94,%edx
089002ce +0x204:  movl   $0x0,0xc(%eax,%edx,4)
089002d6 +0x20c:  addl   $0x1,-0xc(%ebp)
089002da +0x210:  cmpl   $0x5,-0xc(%ebp)
089002de +0x214:  setle  %al
089002e1 +0x217:  test   %al,%al
089002e3 +0x219:  jne    089002ae <+0x1e4>
089002e5 +0x21b:  mov    0x8(%ebp),%eax
089002e8 +0x21e:  movl   $0x0,0x258(%eax)
089002f2 +0x228:  mov    0x8(%ebp),%eax
089002f5 +0x22b:  add    $0x49c,%eax
089002fa +0x230:  mov    %eax,(%esp)
089002fd +0x233:  call   0891df4a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x4c29>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x4c29
08900302 +0x238:  mov    0x8(%ebp),%eax
08900305 +0x23b:  add    $0x4c4,%eax
0890030a +0x240:  mov    %eax,(%esp)
0890030d +0x243:  call   0854bbc8 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0xa50>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0xa50
08900312 +0x248:  mov    0x8(%ebp),%eax
08900315 +0x24b:  movl   $0x0,0x4b4(%eax)
0890031f +0x255:  mov    0x8(%ebp),%eax
08900322 +0x258:  movl   $0x0,0x4b8(%eax)
0890032c +0x262:  mov    0x8(%ebp),%eax
0890032f +0x265:  movl   $0x0,0x4bc(%eax)
08900339 +0x26f:  mov    0x8(%ebp),%eax
0890033c +0x272:  movl   $0x0,0x4c0(%eax)
08900346 +0x27c:  add    $0x40,%esp
08900349 +0x27f:  pop    %ebx
0890034a +0x280:  pop    %esi
0890034b +0x281:  pop    %ebp
0890034c +0x282:  ret
0890034d +0x283:  mov    %edx,%ebx
0890034f +0x285:  mov    %eax,%esi
08900351 +0x287:  mov    0x8(%ebp),%eax
08900354 +0x28a:  add    $0x4c4,%eax
08900359 +0x28f:  mov    %eax,(%esp)
0890035c +0x292:  call   0854b3e2 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x26a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x26a
08900361 +0x297:  mov    %esi,%eax
08900363 +0x299:  mov    %ebx,%edx
08900365 +0x29b:  mov    %edx,%ebx
08900367 +0x29d:  mov    %eax,%esi
08900369 +0x29f:  mov    0x8(%ebp),%eax
0890036c +0x2a2:  add    $0x49c,%eax
08900371 +0x2a7:  mov    %eax,(%esp)
08900374 +0x2aa:  call   0854b3ba <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x242>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x242
08900379 +0x2af:  mov    %esi,%eax
0890037b +0x2b1:  mov    %ebx,%edx
0890037d +0x2b3:  jmp    0890037f <+0x2b5>
0890037f +0x2b5:  mov    %edx,%ebx
08900381 +0x2b7:  mov    %eax,%esi
08900383 +0x2b9:  mov    0x8(%ebp),%eax
08900386 +0x2bc:  add    $0x434,%eax
0890038b +0x2c1:  mov    %eax,(%esp)
0890038e +0x2c4:  call   0854b3a4 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x22c>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x22c
08900393 +0x2c9:  mov    %esi,%eax
08900395 +0x2cb:  mov    %ebx,%edx
08900397 +0x2cd:  jmp    08900399 <+0x2cf>
08900399 +0x2cf:  mov    %edx,%ebx
0890039b +0x2d1:  mov    %eax,%esi
0890039d +0x2d3:  mov    0x8(%ebp),%eax
089003a0 +0x2d6:  mov    %eax,(%esp)
089003a3 +0x2d9:  call   0854b624 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x4ac>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x4ac
089003a8 +0x2de:  mov    %esi,%eax
089003aa +0x2e0:  mov    %ebx,%edx
089003ac +0x2e2:  mov    %eax,(%esp)
089003af +0x2e5:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// upgrade_table_t::upgrade_table_t @ 0x89000ca

/* upgrade_table_t::upgrade_table_t() */

void __thiscall upgrade_table_t::upgrade_table_t(upgrade_table_t *this)

{
  allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>> local_2b;
  allocator local_2a;
  equal_to local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  std::vector<upgrade_info_t,std::allocator<upgrade_info_t>>::vector
            ((vector<upgrade_info_t,std::allocator<upgrade_info_t>> *)this);
                    /* try { // try from 089000e8 to 089000ec has its CatchHandler @ 08900399 */
  ST3rdChronicleDestructionResult::ST3rdChronicleDestructionResult
            ((ST3rdChronicleDestructionResult *)(this + 0x434));
                    /* try { // try from 089000f8 to 089000fc has its CatchHandler @ 0890037f */
  std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::map
            ((map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>> *)
             (this + 0x49c));
  std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>::allocator();
                    /* try { // try from 08900131 to 08900135 has its CatchHandler @ 08900138 */
  std::
  unordered_map<int,upgrade_table_t::MachineFrameInfo,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>>
  ::unordered_map((uint)(this + 0x4c4),(hash *)0xa,&local_29,&local_2a);
  std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>::~allocator(&local_2b);
  for (local_28 = 0; local_28 < 4; local_28 = local_28 + 1) {
    *(undefined4 *)(this + local_28 * 4 + 0xc) = 0x3f800000;
  }
  for (local_24 = 0; local_24 < 0x16; local_24 = local_24 + 1) {
    *(undefined4 *)(this + (local_24 + 4) * 4 + 0xc) = 0x3f800000;
  }
  for (local_20 = 0; local_20 < 6; local_20 = local_20 + 1) {
    *(undefined4 *)(this + (local_20 + 0x1c) * 4 + 4) = 0x3f800000;
    *(undefined4 *)(this + (local_20 + 0x20) * 4 + 0xc) = 0x3f800000;
  }
  for (local_1c = 0; local_1c < 100; local_1c = local_1c + 1) {
    *(undefined4 *)(this + (local_1c + 0x28) * 4 + 4) = 1;
  }
  *(undefined4 *)(this + 0x234) = 0;
  for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
    *(undefined4 *)(this + (local_18 + 0x9c) * 4 + 4) = 0x3f800000;
  }
  for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x100) * 4 + 4) = 0xffffffff;
    *(undefined4 *)(this + (local_14 + 0x104) * 4 + 0xc) = 0xffffffff;
  }
  *(undefined4 *)(this + 0x238) = 0xffffffff;
  *(undefined4 *)(this + 0x23c) = 0;
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x90) * 4) = 0;
    *(undefined4 *)(this + (local_10 + 0x94) * 4 + 0xc) = 0;
  }
  *(undefined4 *)(this + 600) = 0;
                    /* try { // try from 089002fd to 08900311 has its CatchHandler @ 0890034d */
  std::map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>>::clear
            ((map<int,float,std::less<int>,std::allocator<std::pair<int_const,float>>> *)
             (this + 0x49c));
  std::
  _Hashtable<int,std::pair<int_const,upgrade_table_t::MachineFrameInfo>,std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::_Select1st<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,false,false,true>
  ::clear((_Hashtable<int,std::pair<int_const,upgrade_table_t::MachineFrameInfo>,std::allocator<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::_Select1st<std::pair<int_const,upgrade_table_t::MachineFrameInfo>>,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,false,false,true>
           *)(this + 0x4c4));
  *(undefined4 *)(this + 0x4b4) = 0;
  *(undefined4 *)(this + 0x4b8) = 0;
  *(undefined4 *)(this + 0x4bc) = 0;
  *(undefined4 *)(this + 0x4c0) = 0;
  return;
}
```
