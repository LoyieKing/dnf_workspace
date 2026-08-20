# CSecretShop

`_ZN10secretshop11CSecretShopC1Ev`

`secretshop::CSecretShop::CSecretShop()`

| 类 | 地址 |
|---|---|
| `secretshop::CSecretShop` | `0x085fa930` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fa930  _ZN10secretshop11CSecretShopC1Ev
#           secretshop::CSecretShop::CSecretShop()
# range [0x085fa930, 0x085faabf]
085fa930 +0x000:  push   %ebp
085fa931 +0x001:  mov    %esp,%ebp
085fa933 +0x003:  push   %edi
085fa934 +0x004:  push   %esi
085fa935 +0x005:  push   %ebx
085fa936 +0x006:  sub    $0x6c,%esp
085fa939 +0x009:  mov    0x8(%ebp),%eax
085fa93c +0x00c:  mov    %eax,(%esp)
085fa93f +0x00f:  call   085fc0de <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x270>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x270
085fa944 +0x014:  mov    0x8(%ebp),%eax
085fa947 +0x017:  add    $0x1c,%eax
085fa94a +0x01a:  mov    %eax,(%esp)
085fa94d +0x01d:  call   085fbeb8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x4a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x4a
085fa952 +0x022:  movl   $0x8,(%esp)
085fa959 +0x029:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085fa95e +0x02e:  mov    %eax,%ebx
085fa960 +0x030:  mov    0x8(%ebp),%eax
085fa963 +0x033:  lea    0x1c(%eax),%edx
085fa966 +0x036:  mov    %ebx,%eax
085fa968 +0x038:  mov    %edx,0x4(%esp)
085fa96c +0x03c:  mov    %eax,(%esp)
085fa96f +0x03f:  call   085fbfd8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x16a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x16a
085fa974 +0x044:  mov    %ebx,%eax
085fa976 +0x046:  mov    %eax,-0x44(%ebp)
085fa979 +0x049:  movl   $0x0,-0x40(%ebp)
085fa980 +0x050:  lea    -0x44(%ebp),%eax
085fa983 +0x053:  mov    %eax,0x8(%esp)
085fa987 +0x057:  lea    -0x40(%ebp),%eax
085fa98a +0x05a:  mov    %eax,0x4(%esp)
085fa98e +0x05e:  lea    -0x4c(%ebp),%eax
085fa991 +0x061:  mov    %eax,(%esp)
085fa994 +0x064:  call   085fc158 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x2ea>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x2ea
085fa999 +0x069:  lea    -0x4c(%ebp),%eax
085fa99c +0x06c:  mov    %eax,0x4(%esp)
085fa9a0 +0x070:  lea    -0x54(%ebp),%eax
085fa9a3 +0x073:  mov    %eax,(%esp)
085fa9a6 +0x076:  call   085fc188 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x31a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x31a
085fa9ab +0x07b:  mov    0x8(%ebp),%edx
085fa9ae +0x07e:  lea    -0x5c(%ebp),%eax
085fa9b1 +0x081:  lea    -0x54(%ebp),%ecx
085fa9b4 +0x084:  mov    %ecx,0x8(%esp)
085fa9b8 +0x088:  mov    %edx,0x4(%esp)
085fa9bc +0x08c:  mov    %eax,(%esp)
085fa9bf +0x08f:  call   085fc1b8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x34a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x34a
085fa9c4 +0x094:  sub    $0x4,%esp
085fa9c7 +0x097:  movl   $0x8,(%esp)
085fa9ce +0x09e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085fa9d3 +0x0a3:  mov    %eax,%ebx
085fa9d5 +0x0a5:  mov    0x8(%ebp),%eax
085fa9d8 +0x0a8:  lea    0x1c(%eax),%edx
085fa9db +0x0ab:  mov    %ebx,%eax
085fa9dd +0x0ad:  mov    %edx,0x4(%esp)
085fa9e1 +0x0b1:  mov    %eax,(%esp)
085fa9e4 +0x0b4:  call   085fbffc <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x18e>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x18e
085fa9e9 +0x0b9:  mov    %ebx,%eax
085fa9eb +0x0bb:  mov    %eax,-0x24(%ebp)
085fa9ee +0x0be:  movl   $0x1,-0x20(%ebp)
085fa9f5 +0x0c5:  lea    -0x24(%ebp),%eax
085fa9f8 +0x0c8:  mov    %eax,0x8(%esp)
085fa9fc +0x0cc:  lea    -0x20(%ebp),%eax
085fa9ff +0x0cf:  mov    %eax,0x4(%esp)
085faa03 +0x0d3:  lea    -0x2c(%ebp),%eax
085faa06 +0x0d6:  mov    %eax,(%esp)
085faa09 +0x0d9:  call   085fc1e4 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x376>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x376
085faa0e +0x0de:  lea    -0x2c(%ebp),%eax
085faa11 +0x0e1:  mov    %eax,0x4(%esp)
085faa15 +0x0e5:  lea    -0x34(%ebp),%eax
085faa18 +0x0e8:  mov    %eax,(%esp)
085faa1b +0x0eb:  call   085fc188 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x31a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x31a
085faa20 +0x0f0:  mov    0x8(%ebp),%edx
085faa23 +0x0f3:  lea    -0x3c(%ebp),%eax
085faa26 +0x0f6:  lea    -0x34(%ebp),%ecx
085faa29 +0x0f9:  mov    %ecx,0x8(%esp)
085faa2d +0x0fd:  mov    %edx,0x4(%esp)
085faa31 +0x101:  mov    %eax,(%esp)
085faa34 +0x104:  call   085fc1b8 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x34a>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x34a
085faa39 +0x109:  sub    $0x4,%esp
085faa3c +0x10c:  movl   $0x0,(%esp)
085faa43 +0x113:  call   0807d750 <_init+0x48>
085faa48 +0x118:  mov    %eax,-0x1c(%ebp)
085faa4b +0x11b:  lea    -0x1c(%ebp),%esi
085faa4e +0x11e:  movl   $0x9c8,(%esp)
085faa55 +0x125:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085faa5a +0x12a:  mov    %eax,%ebx
085faa5c +0x12c:  mov    %ebx,%eax
085faa5e +0x12e:  mov    %esi,0x4(%esp)
085faa62 +0x132:  mov    %eax,(%esp)
085faa65 +0x135:  call   080cba2a <_GLOBAL__I__ZN10BingoEventC2Ev+0x877>  ; global constructors keyed to BingoEvent::BingoEvent()+0x877
085faa6a +0x13a:  jmp    085faa7e <+0x14e>
085faa6c +0x13c:  mov    %edx,%esi
085faa6e +0x13e:  mov    %eax,%edi
085faa70 +0x140:  mov    %ebx,(%esp)
085faa73 +0x143:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085faa78 +0x148:  mov    %edi,%eax
085faa7a +0x14a:  mov    %esi,%edx
085faa7c +0x14c:  jmp    085faa91 <+0x161>
085faa7e +0x14e:  mov    %ebx,%edx
085faa80 +0x150:  mov    0x8(%ebp),%eax
085faa83 +0x153:  mov    %edx,0x18(%eax)
085faa86 +0x156:  lea    -0xc(%ebp),%esp
085faa89 +0x159:  add    $0x0,%esp
085faa8c +0x15c:  pop    %ebx
085faa8d +0x15d:  pop    %esi
085faa8e +0x15e:  pop    %edi
085faa8f +0x15f:  pop    %ebp
085faa90 +0x160:  ret
085faa91 +0x161:  mov    %edx,%ebx
085faa93 +0x163:  mov    %eax,%esi
085faa95 +0x165:  mov    0x8(%ebp),%eax
085faa98 +0x168:  add    $0x1c,%eax
085faa9b +0x16b:  mov    %eax,(%esp)
085faa9e +0x16e:  call   085fbf2c <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0xbe>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0xbe
085faaa3 +0x173:  mov    %esi,%eax
085faaa5 +0x175:  mov    %ebx,%edx
085faaa7 +0x177:  jmp    085faaa9 <+0x179>
085faaa9 +0x179:  mov    %edx,%ebx
085faaab +0x17b:  mov    %eax,%esi
085faaad +0x17d:  mov    0x8(%ebp),%eax
085faab0 +0x180:  mov    %eax,(%esp)
085faab3 +0x183:  call   085fc020 <_GLOBAL__I__ZN10secretshop11CSecretShopC2Ev+0x1b2>  ; global constructors keyed to secretshop::CSecretShop::CSecretShop()+0x1b2
085faab8 +0x188:  mov    %esi,%eax
085faaba +0x18a:  mov    %ebx,%edx
085faabc +0x18c:  mov    %eax,(%esp)
085faabf +0x18f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// secretshop::CSecretShop::CSecretShop @ 0x85fa930

/* secretshop::CSecretShop::CSecretShop() */

void __thiscall secretshop::CSecretShop::CSecretShop(CSecretShop *this)

{
  CBuyItembyGold *this_00;
  CBuyItembyRecipe *this_01;
  CMTRand *this_02;
  pair local_60 [8];
  pair<eBuyRule_const,secretshop::IBuyRule*> local_58 [8];
  pair<eBuyRule,secretshop::IBuyRule*> local_50 [8];
  CBuyItembyGold *local_48;
  undefined4 local_44;
  pair local_40 [8];
  pair<eBuyRule_const,secretshop::IBuyRule*> local_38 [8];
  pair<eBuyRule,secretshop::IBuyRule*> local_30 [8];
  CBuyItembyRecipe *local_28;
  undefined4 local_24;
  ulong local_20 [4];
  
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::map((map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
         *)this);
                    /* try { // try from 085fa94d to 085fa951 has its CatchHandler @ 085faaa9 */
  CSecretShopStatistic::CSecretShopStatistic((CSecretShopStatistic *)(this + 0x1c));
                    /* try { // try from 085fa959 to 085faa59 has its CatchHandler @ 085faa91 */
  this_00 = operator_new(8);
  CBuyItembyGold::CBuyItembyGold(this_00,(CSecretShopStatistic *)(this + 0x1c));
  local_44 = 0;
  local_48 = this_00;
  std::pair<eBuyRule,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::CBuyItembyGold*>
            (local_50,(eBuyRule *)&local_44,&local_48);
  std::pair<eBuyRule_const,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::IBuyRule*>
            (local_58,local_50);
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::insert(local_60);
  this_01 = operator_new(8);
  CBuyItembyRecipe::CBuyItembyRecipe(this_01,(CSecretShopStatistic *)(this + 0x1c));
  local_24 = 1;
  local_28 = this_01;
  std::pair<eBuyRule,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::CBuyItembyRecipe*>
            (local_30,(eBuyRule *)&local_24,&local_28);
  std::pair<eBuyRule_const,secretshop::IBuyRule*>::pair<eBuyRule,secretshop::IBuyRule*>
            (local_38,local_30);
  std::
  map<eBuyRule,secretshop::IBuyRule*,std::less<eBuyRule>,std::allocator<std::pair<eBuyRule_const,secretshop::IBuyRule*>>>
  ::insert(local_40);
  local_20[0] = time((time_t *)0x0);
  this_02 = operator_new(0x9c8);
                    /* try { // try from 085faa65 to 085faa69 has its CatchHandler @ 085faa6c */
  CMTRand::CMTRand(this_02,local_20);
  *(CMTRand **)(this + 0x18) = this_02;
  return;
}
```
