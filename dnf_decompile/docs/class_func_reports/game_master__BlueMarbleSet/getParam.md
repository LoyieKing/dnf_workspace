# getParam

`_ZN11game_master13BlueMarbleSet8getParamESs`

`game_master::BlueMarbleSet::getParam(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)`

| 类 | 地址 |
|---|---|
| `game_master::BlueMarbleSet` | `0x084b235c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b235c  _ZN11game_master13BlueMarbleSet8getParamESs
#           game_master::BlueMarbleSet::getParam(std::basic_string<char, std::char_traits<char>, std::allocator<char> >)
# range [0x084b235c, 0x084b25a3]
084b235c +0x000:  push   %ebp
084b235d +0x001:  mov    %esp,%ebp
084b235f +0x003:  push   %edi
084b2360 +0x004:  push   %esi
084b2361 +0x005:  push   %ebx
084b2362 +0x006:  sub    $0x7c,%esp
084b2365 +0x009:  movl   $0x0,-0x1c(%ebp)
084b236c +0x010:  lea    -0x64(%ebp),%ebx
084b236f +0x013:  mov    %ebx,%edi
084b2371 +0x015:  mov    $0xf,%esi
084b2376 +0x01a:  jmp    084b2386 <+0x2a>
084b2378 +0x01c:  mov    %edi,(%esp)
084b237b +0x01f:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084b2380 +0x024:  add    $0x4,%edi
084b2383 +0x027:  sub    $0x1,%esi
084b2386 +0x02a:  cmp    $0xffffffff,%esi
084b2389 +0x02d:  setne  %al
084b238c +0x030:  test   %al,%al
084b238e +0x032:  jne    084b2378 <+0x1c>
084b2390 +0x034:  jmp    084b23c6 <+0x6a>
084b2392 +0x036:  mov    %edx,%edi
084b2394 +0x038:  mov    %eax,-0x6c(%ebp)
084b2397 +0x03b:  test   %ebx,%ebx
084b2399 +0x03d:  je     084b23b9 <+0x5d>
084b239b +0x03f:  mov    $0xf,%eax
084b23a0 +0x044:  sub    %esi,%eax
084b23a2 +0x046:  shl    $0x2,%eax
084b23a5 +0x049:  lea    (%ebx,%eax,1),%esi
084b23a8 +0x04c:  cmp    %ebx,%esi
084b23aa +0x04e:  je     084b23b9 <+0x5d>
084b23ac +0x050:  sub    $0x4,%esi
084b23af +0x053:  mov    %esi,(%esp)
084b23b2 +0x056:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b23b7 +0x05b:  jmp    084b23a8 <+0x4c>
084b23b9 +0x05d:  mov    -0x6c(%ebp),%eax
084b23bc +0x060:  mov    %edi,%edx
084b23be +0x062:  mov    %eax,(%esp)
084b23c1 +0x065:  call   08ae3750 <_Unwind_Resume>
084b23c6 +0x06a:  jmp    084b24a1 <+0x145>
084b23cb +0x06f:  mov    -0x1c(%ebp),%edx
084b23ce +0x072:  lea    -0x24(%ebp),%eax
084b23d1 +0x075:  mov    %edx,0xc(%esp)
084b23d5 +0x079:  movl   $0x0,0x8(%esp)
084b23dd +0x081:  mov    0xc(%ebp),%edx
084b23e0 +0x084:  mov    %edx,0x4(%esp)
084b23e4 +0x088:  mov    %eax,(%esp)
084b23e7 +0x08b:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084b23ec +0x090:  sub    $0x4,%esp
084b23ef +0x093:  mov    0x8(%ebp),%eax
084b23f2 +0x096:  mov    0xc(%eax),%edx
084b23f5 +0x099:  lea    -0x64(%ebp),%eax
084b23f8 +0x09c:  shl    $0x2,%edx
084b23fb +0x09f:  lea    (%eax,%edx,1),%edx
084b23fe +0x0a2:  lea    -0x24(%ebp),%eax
084b2401 +0x0a5:  mov    %eax,0x4(%esp)
084b2405 +0x0a9:  mov    %edx,(%esp)
084b2408 +0x0ac:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084b240d +0x0b1:  jmp    084b2427 <+0xcb>
084b240f +0x0b3:  mov    %edx,%ebx
084b2411 +0x0b5:  mov    %eax,%esi
084b2413 +0x0b7:  lea    -0x24(%ebp),%eax
084b2416 +0x0ba:  mov    %eax,(%esp)
084b2419 +0x0bd:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b241e +0x0c2:  mov    %esi,%eax
084b2420 +0x0c4:  mov    %ebx,%edx
084b2422 +0x0c6:  jmp    084b255a <+0x1fe>
084b2427 +0x0cb:  lea    -0x24(%ebp),%eax
084b242a +0x0ce:  mov    %eax,(%esp)
084b242d +0x0d1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b2432 +0x0d6:  mov    -0x1c(%ebp),%eax
084b2435 +0x0d9:  add    $0x1,%eax
084b2438 +0x0dc:  mov    %eax,%edx
084b243a +0x0de:  lea    -0x20(%ebp),%eax
084b243d +0x0e1:  movl   $0xffffffff,0xc(%esp)
084b2445 +0x0e9:  mov    %edx,0x8(%esp)
084b2449 +0x0ed:  mov    0xc(%ebp),%edx
084b244c +0x0f0:  mov    %edx,0x4(%esp)
084b2450 +0x0f4:  mov    %eax,(%esp)
084b2453 +0x0f7:  call   08707880 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1490>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1490
084b2458 +0x0fc:  sub    $0x4,%esp
084b245b +0x0ff:  lea    -0x20(%ebp),%eax
084b245e +0x102:  mov    %eax,0x4(%esp)
084b2462 +0x106:  mov    0xc(%ebp),%eax
084b2465 +0x109:  mov    %eax,(%esp)
084b2468 +0x10c:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084b246d +0x111:  jmp    084b2487 <+0x12b>
084b246f +0x113:  mov    %edx,%ebx
084b2471 +0x115:  mov    %eax,%esi
084b2473 +0x117:  lea    -0x20(%ebp),%eax
084b2476 +0x11a:  mov    %eax,(%esp)
084b2479 +0x11d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b247e +0x122:  mov    %esi,%eax
084b2480 +0x124:  mov    %ebx,%edx
084b2482 +0x126:  jmp    084b255a <+0x1fe>
084b2487 +0x12b:  lea    -0x20(%ebp),%eax
084b248a +0x12e:  mov    %eax,(%esp)
084b248d +0x131:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b2492 +0x136:  mov    0x8(%ebp),%eax
084b2495 +0x139:  mov    0xc(%eax),%eax
084b2498 +0x13c:  lea    0x1(%eax),%edx
084b249b +0x13f:  mov    0x8(%ebp),%eax
084b249e +0x142:  mov    %edx,0xc(%eax)
084b24a1 +0x145:  movl   $0x0,0x8(%esp)
084b24a9 +0x14d:  movl   $0x20,0x4(%esp)
084b24b1 +0x155:  mov    0xc(%ebp),%eax
084b24b4 +0x158:  mov    %eax,(%esp)
084b24b7 +0x15b:  call   08707000 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0xc10>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0xc10
084b24bc +0x160:  mov    %eax,-0x1c(%ebp)
084b24bf +0x163:  cmpl   $0xffffffff,-0x1c(%ebp)
084b24c3 +0x167:  setne  %al
084b24c6 +0x16a:  test   %al,%al
084b24c8 +0x16c:  jne    084b23cb <+0x6f>
084b24ce +0x172:  mov    0x8(%ebp),%eax
084b24d1 +0x175:  mov    0xc(%eax),%edx
084b24d4 +0x178:  lea    -0x64(%ebp),%eax
084b24d7 +0x17b:  shl    $0x2,%edx
084b24da +0x17e:  lea    (%eax,%edx,1),%edx
084b24dd +0x181:  mov    0xc(%ebp),%eax
084b24e0 +0x184:  mov    %eax,0x4(%esp)
084b24e4 +0x188:  mov    %edx,(%esp)
084b24e7 +0x18b:  call   08707d00 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1910>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1910
084b24ec +0x190:  movl   $"move",0x4(%esp)
084b24f4 +0x198:  lea    -0x64(%ebp),%eax
084b24f7 +0x19b:  mov    %eax,(%esp)
084b24fa +0x19e:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
084b24ff +0x1a3:  test   %eax,%eax
084b2501 +0x1a5:  sete   %al
084b2504 +0x1a8:  test   %al,%al
084b2506 +0x1aa:  je     084b2511 <+0x1b5>
084b2508 +0x1ac:  mov    0x8(%ebp),%eax
084b250b +0x1af:  movb   $0x1,0x9(%eax)
084b250f +0x1b3:  jmp    084b2534 <+0x1d8>
084b2511 +0x1b5:  movl   $"enter",0x4(%esp)
084b2519 +0x1bd:  lea    -0x64(%ebp),%eax
084b251c +0x1c0:  mov    %eax,(%esp)
084b251f +0x1c3:  call   08706a30 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x640>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x640
084b2524 +0x1c8:  test   %eax,%eax
084b2526 +0x1ca:  sete   %al
084b2529 +0x1cd:  test   %al,%al
084b252b +0x1cf:  je     084b2534 <+0x1d8>
084b252d +0x1d1:  mov    0x8(%ebp),%eax
084b2530 +0x1d4:  movb   $0x1,0xa(%eax)
084b2534 +0x1d8:  lea    -0x64(%ebp),%eax
084b2537 +0x1db:  add    $0x4,%eax
084b253a +0x1de:  mov    %eax,(%esp)
084b253d +0x1e1:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084b2542 +0x1e6:  mov    %eax,(%esp)
084b2545 +0x1e9:  call   0807e6f0 <_init+0xfe8>
084b254a +0x1ee:  mov    %eax,%edx
084b254c +0x1f0:  mov    0x8(%ebp),%eax
084b254f +0x1f3:  mov    %dl,0x8(%eax)
084b2552 +0x1f6:  lea    -0x64(%ebp),%eax
084b2555 +0x1f9:  lea    0x40(%eax),%ebx
084b2558 +0x1fc:  jmp    084b2584 <+0x228>
084b255a +0x1fe:  mov    %edx,%esi
084b255c +0x200:  mov    %eax,%edi
084b255e +0x202:  lea    -0x64(%ebp),%eax
084b2561 +0x205:  lea    0x40(%eax),%ebx
084b2564 +0x208:  lea    -0x64(%ebp),%eax
084b2567 +0x20b:  cmp    %eax,%ebx
084b2569 +0x20d:  je     084b2578 <+0x21c>
084b256b +0x20f:  sub    $0x4,%ebx
084b256e +0x212:  mov    %ebx,(%esp)
084b2571 +0x215:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b2576 +0x21a:  jmp    084b2564 <+0x208>
084b2578 +0x21c:  mov    %edi,%eax
084b257a +0x21e:  mov    %esi,%edx
084b257c +0x220:  mov    %eax,(%esp)
084b257f +0x223:  call   08ae3750 <_Unwind_Resume>
084b2584 +0x228:  lea    -0x64(%ebp),%eax
084b2587 +0x22b:  cmp    %eax,%ebx
084b2589 +0x22d:  je     084b2598 <+0x23c>
084b258b +0x22f:  sub    $0x4,%ebx
084b258e +0x232:  mov    %ebx,(%esp)
084b2591 +0x235:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084b2596 +0x23a:  jmp    084b2584 <+0x228>
084b2598 +0x23c:  lea    -0xc(%ebp),%esp
084b259b +0x23f:  add    $0x0,%esp
084b259e +0x242:  pop    %ebx
084b259f +0x243:  pop    %esi
084b25a0 +0x244:  pop    %edi
084b25a1 +0x245:  pop    %ebp
084b25a2 +0x246:  ret
084b25a3 +0x247:  nop
```

## 反编译 C

```c
// game_master::BlueMarbleSet::getParam @ 0x84b235c

/* game_master::BlueMarbleSet::getParam(std::string) */

void __thiscall game_master::BlueMarbleSet::getParam(BlueMarbleSet *this,string param_1)

{
  char *__nptr;
  string *psVar1;
  int iVar2;
  string local_68 [4];
  string asStack_64 [60];
  string local_28 [4];
  string local_24 [4];
  int local_20;
  
  local_20 = 0;
  psVar1 = local_68;
  for (iVar2 = 0xf; iVar2 != -1; iVar2 = iVar2 + -1) {
                    /* try { // try from 084b237b to 084b237f has its CatchHandler @ 084b2392 */
    std::string::string(psVar1);
    psVar1 = psVar1 + 4;
  }
  while (local_20 = std::string::find((string *)param_1._M_dataplus._M_p,' ',0), local_20 != -1) {
                    /* try { // try from 084b23e7 to 084b23eb has its CatchHandler @ 084b255a */
    std::string::substr((uint)local_28,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084b2408 to 084b240c has its CatchHandler @ 084b240f */
    std::string::operator=(local_68 + *(int *)(this + 0xc) * 4,local_28);
                    /* try { // try from 084b242d to 084b2457 has its CatchHandler @ 084b255a */
    std::string::~string(local_28);
    std::string::substr((uint)local_24,(uint)param_1._M_dataplus._M_p);
                    /* try { // try from 084b2468 to 084b246c has its CatchHandler @ 084b246f */
    std::string::operator=((string *)param_1._M_dataplus._M_p,local_24);
                    /* try { // try from 084b248d to 084b2541 has its CatchHandler @ 084b255a */
    std::string::~string(local_24);
    *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  }
  std::string::operator=(local_68 + *(int *)(this + 0xc) * 4,(string *)param_1._M_dataplus._M_p);
  iVar2 = std::string::compare(local_68,"move");
  if (iVar2 == 0) {
    this[9] = (BlueMarbleSet)0x1;
  }
  else {
    iVar2 = std::string::compare(local_68,"enter");
    if (iVar2 == 0) {
      this[10] = (BlueMarbleSet)0x1;
    }
  }
  __nptr = (char *)std::string::c_str(asStack_64);
  iVar2 = atoi(__nptr);
  this[8] = SUB41(iVar2,0);
  psVar1 = local_28;
  while (psVar1 != local_68) {
    psVar1 = psVar1 + -4;
    std::string::~string(psVar1);
  }
  return;
}
```
