# execute

`_ZN11game_master13CBindCubeTest7executeEv`

`game_master::CBindCubeTest::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CBindCubeTest` | `0x084acc1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084acc1e  _ZN11game_master13CBindCubeTest7executeEv
#           game_master::CBindCubeTest::execute()
# range [0x084acc1e, 0x084ace89]
084acc1e +0x000:  push   %ebp
084acc1f +0x001:  mov    %esp,%ebp
084acc21 +0x003:  push   %edi
084acc22 +0x004:  push   %esi
084acc23 +0x005:  push   %ebx
084acc24 +0x006:  sub    $&_ZL14gUnicodeBuffer+0xcf40,%esp
084acc2a +0x00c:  mov    0x8(%ebp),%eax
084acc2d +0x00f:  movzbl 0x8(%eax),%eax
084acc31 +0x013:  test   %al,%al
084acc33 +0x015:  js     084ace7a <+0x25c>
084acc39 +0x01b:  mov    0x8(%ebp),%eax
084acc3c +0x01e:  movzbl 0x8(%eax),%eax
084acc40 +0x022:  cmp    $0xa,%al
084acc42 +0x024:  jg     084ace7d <+0x25f>
084acc48 +0x02a:  lea    -0x13b(%ebp),%edx
084acc4e +0x030:  mov    $0xff,%ebx
084acc53 +0x035:  mov    $0x0,%eax
084acc58 +0x03a:  mov    %edx,%ecx
084acc5a +0x03c:  and    $0x1,%ecx
084acc5d +0x03f:  test   %ecx,%ecx
084acc5f +0x041:  je     084acc69 <+0x4b>
084acc61 +0x043:  mov    %al,(%edx)
084acc63 +0x045:  add    $0x1,%edx
084acc66 +0x048:  sub    $0x1,%ebx
084acc69 +0x04b:  mov    %edx,%ecx
084acc6b +0x04d:  and    $0x2,%ecx
084acc6e +0x050:  test   %ecx,%ecx
084acc70 +0x052:  je     084acc7b <+0x5d>
084acc72 +0x054:  mov    %ax,(%edx)
084acc75 +0x057:  add    $0x2,%edx
084acc78 +0x05a:  sub    $0x2,%ebx
084acc7b +0x05d:  mov    %ebx,%ecx
084acc7d +0x05f:  shr    $0x2,%ecx
084acc80 +0x062:  mov    %edx,%edi
084acc82 +0x064:  rep stos %eax,%es:(%edi)
084acc84 +0x066:  mov    %edi,%edx
084acc86 +0x068:  mov    %ebx,%ecx
084acc88 +0x06a:  and    $0x2,%ecx
084acc8b +0x06d:  test   %ecx,%ecx
084acc8d +0x06f:  je     084acc95 <+0x77>
084acc8f +0x071:  mov    %ax,(%edx)
084acc92 +0x074:  add    $0x2,%edx
084acc95 +0x077:  mov    %ebx,%ecx
084acc97 +0x079:  and    $0x1,%ecx
084acc9a +0x07c:  test   %ecx,%ecx
084acc9c +0x07e:  je     084acca3 <+0x85>
084acc9e +0x080:  mov    %al,(%edx)
084acca0 +0x082:  add    $0x1,%edx
084acca3 +0x085:  lea    -&_ZL14gUnicodeBuffer+0xcf27(%ebp),%eax
084acca9 +0x08b:  mov    $&_ZL14gUnicodeBuffer+0xcdec,%edx
084accae +0x090:  mov    %edx,0x8(%esp)
084accb2 +0x094:  movl   $0x0,0x4(%esp)
084accba +0x09c:  mov    %eax,(%esp)
084accbd +0x09f:  call   0807dcc0 <_init+0x5b8>
084accc2 +0x0a4:  lea    -0x3c(%ebp),%eax
084accc5 +0x0a7:  mov    %eax,(%esp)
084accc8 +0x0aa:  call   080c6c64 <_GLOBAL__I_g_ServerString_+0x1cf>  ; global constructors keyed to g_ServerString_+0x1cf
084acccd +0x0af:  movl   $0x0,-0x24(%ebp)
084accd4 +0x0b6:  jmp    084ace41 <+0x223>
084accd9 +0x0bb:  movl   $0x0,-0x20(%ebp)
084acce0 +0x0c2:  jmp    084ace2e <+0x210>
084acce5 +0x0c7:  movl   $0x0,-0x1c(%ebp)
084accec +0x0ce:  jmp    084ace1b <+0x1fd>
084accf1 +0x0d3:  movl   $0xff,0x8(%esp)
084accf9 +0x0db:  movl   $0x0,0x4(%esp)
084acd01 +0x0e3:  lea    -0x13b(%ebp),%eax
084acd07 +0x0e9:  mov    %eax,(%esp)
084acd0a +0x0ec:  call   0807dcc0 <_init+0x5b8>
084acd0f +0x0f1:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x8(%esp)
084acd17 +0x0f9:  movl   $0x0,0x4(%esp)
084acd1f +0x101:  lea    -&_ZL14gUnicodeBuffer+0xcf27(%ebp),%eax
084acd25 +0x107:  mov    %eax,(%esp)
084acd28 +0x10a:  call   0807dcc0 <_init+0x5b8>
084acd2d +0x10f:  mov    -0x1c(%ebp),%ecx
084acd30 +0x112:  mov    0x8(%ebp),%eax
084acd33 +0x115:  movzbl 0x8(%eax),%eax
084acd37 +0x119:  movsbl %al,%edx
084acd3a +0x11c:  mov    &_ZN10GlobalData17s_pCompoundAvatarE,%eax
084acd3f +0x121:  lea    -0x3c(%ebp),%ebx
084acd42 +0x124:  mov    %ebx,0x14(%esp)
084acd46 +0x128:  mov    -0x24(%ebp),%ebx
084acd49 +0x12b:  mov    %ebx,0x10(%esp)
084acd4d +0x12f:  mov    -0x20(%ebp),%ebx
084acd50 +0x132:  mov    %ebx,0xc(%esp)
084acd54 +0x136:  mov    %ecx,0x8(%esp)
084acd58 +0x13a:  mov    %edx,0x4(%esp)
084acd5c +0x13e:  mov    %eax,(%esp)
084acd5f +0x141:  call   08333fda <_ZN8WongWork15CCompoundAvatar8ProcTestE17ENUM_CHARACTERJOB18ENUM_EQUIPMENTTYPEiiRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; WongWork::CCompoundAvatar::ProcTest(ENUM_CHARACTERJOB, ENUM_EQUIPMENTTYPE, int, int, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084acd64 +0x146:  mov    0x8(%ebp),%eax
084acd67 +0x149:  mov    %eax,(%esp)
084acd6a +0x14c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084acd6f +0x151:  lea    -0x3c(%ebp),%edx
084acd72 +0x154:  mov    %edx,0x8(%esp)
084acd76 +0x158:  lea    -&_ZL14gUnicodeBuffer+0xcf27(%ebp),%edx
084acd7c +0x15e:  mov    %edx,0x4(%esp)
084acd80 +0x162:  mov    %eax,(%esp)
084acd83 +0x165:  call   084af504 <_ZN11game_master12CBoosterTest16makeFileContentsEP5CUserPcRSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; game_master::CBoosterTest::makeFileContents(CUser*, char*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >&)
084acd88 +0x16a:  mov    -0x1c(%ebp),%eax
084acd8b +0x16d:  mov    &EQUIP_NAMES(,%eax,4),%ebx
084acd92 +0x174:  mov    -0x20(%ebp),%eax
084acd95 +0x177:  mov    &RECIPE_NAMES(,%eax,4),%ecx
084acd9c +0x17e:  mov    -0x24(%ebp),%eax
084acd9f +0x181:  mov    &BIND_NAMES(,%eax,4),%edx
084acda6 +0x188:  mov    0x8(%ebp),%eax
084acda9 +0x18b:  movzbl 0x8(%eax),%eax
084acdad +0x18f:  movsbl %al,%eax
084acdb0 +0x192:  mov    &CHARACTER_JOB_NAMES(,%eax,4),%eax
084acdb7 +0x199:  mov    %ebx,0x14(%esp)
084acdbb +0x19d:  mov    %ecx,0x10(%esp)
084acdbf +0x1a1:  mov    %edx,0xc(%esp)
084acdc3 +0x1a5:  mov    %eax,0x8(%esp)
084acdc7 +0x1a9:  movl   $"bind_%s_%s_%s_%s.txt",0x4(%esp)
084acdcf +0x1b1:  lea    -0x13b(%ebp),%eax
084acdd5 +0x1b7:  mov    %eax,(%esp)
084acdd8 +0x1ba:  call   0807e440 <_init+0xd38>
084acddd +0x1bf:  mov    0x8(%ebp),%eax
084acde0 +0x1c2:  mov    %eax,(%esp)
084acde3 +0x1c5:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084acde8 +0x1ca:  lea    -&_ZL14gUnicodeBuffer+0xcf27(%ebp),%edx
084acdee +0x1d0:  mov    %edx,0xc(%esp)
084acdf2 +0x1d4:  lea    -0x13b(%ebp),%edx
084acdf8 +0x1da:  mov    %edx,0x8(%esp)
084acdfc +0x1de:  movl   $0x0,0x4(%esp)
084ace04 +0x1e6:  mov    %eax,(%esp)
084ace07 +0x1e9:  call   084aebf2 <_ZN11game_master12CBoosterTest11printClientEP5CUserbPKcS4_>  ; game_master::CBoosterTest::printClient(CUser*, bool, char const*, char const*)
084ace0c +0x1ee:  lea    -0x3c(%ebp),%eax
084ace0f +0x1f1:  mov    %eax,(%esp)
084ace12 +0x1f4:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
084ace17 +0x1f9:  addl   $0x1,-0x1c(%ebp)
084ace1b +0x1fd:  cmpl   $0x7,-0x1c(%ebp)
084ace1f +0x201:  setle  %al
084ace22 +0x204:  test   %al,%al
084ace24 +0x206:  jne    084accf1 <+0xd3>
084ace2a +0x20c:  addl   $0x1,-0x20(%ebp)
084ace2e +0x210:  cmpl   $0x2,-0x20(%ebp)
084ace32 +0x214:  setle  %al
084ace35 +0x217:  test   %al,%al
084ace37 +0x219:  jne    084acce5 <+0xc7>
084ace3d +0x21f:  addl   $0x1,-0x24(%ebp)
084ace41 +0x223:  cmpl   $0x1,-0x24(%ebp)
084ace45 +0x227:  setle  %al
084ace48 +0x22a:  test   %al,%al
084ace4a +0x22c:  jne    084accd9 <+0xbb>
084ace50 +0x232:  jmp    084ace6d <+0x24f>
084ace52 +0x234:  mov    %edx,%ebx
084ace54 +0x236:  mov    %eax,%esi
084ace56 +0x238:  lea    -0x3c(%ebp),%eax
084ace59 +0x23b:  mov    %eax,(%esp)
084ace5c +0x23e:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084ace61 +0x243:  mov    %esi,%eax
084ace63 +0x245:  mov    %ebx,%edx
084ace65 +0x247:  mov    %eax,(%esp)
084ace68 +0x24a:  call   08ae3750 <_Unwind_Resume>
084ace6d +0x24f:  lea    -0x3c(%ebp),%eax
084ace70 +0x252:  mov    %eax,(%esp)
084ace73 +0x255:  call   080c6ac6 <_GLOBAL__I_g_ServerString_+0x31>  ; global constructors keyed to g_ServerString_+0x31
084ace78 +0x25a:  jmp    084ace7e <+0x260>
084ace7a +0x25c:  nop
084ace7b +0x25d:  jmp    084ace7e <+0x260>
084ace7d +0x25f:  nop
084ace7e +0x260:  add    $&_ZL14gUnicodeBuffer+0xcf40,%esp
084ace84 +0x266:  pop    %ebx
084ace85 +0x267:  pop    %esi
084ace86 +0x268:  pop    %edi
084ace87 +0x269:  pop    %ebp
084ace88 +0x26a:  ret
084ace89 +0x26b:  nop
```

## 反编译 C

```c
// game_master::CBindCubeTest::execute @ 0x84acc1e

/* game_master::CBindCubeTest::execute() */

void __thiscall game_master::CBindCubeTest::execute(CBindCubeTest *this)

{
  CUser *pCVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  bool bVar5;
  char acStack_17457 [95000];
  char local_13f;
  char local_13e [254];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_40 [24];
  int local_28;
  int local_24;
  int local_20;
  
  if ((-1 < (char)this[8]) && ((char)this[8] < '\v')) {
    pcVar3 = &local_13f;
    uVar4 = 0xff;
    bVar5 = ((uint)pcVar3 & 1) != 0;
    if (bVar5) {
      local_13f = '\0';
      pcVar3 = local_13e;
      uVar4 = 0xfe;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar4 = uVar4 - 2;
    }
    for (uVar2 = uVar4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + 4;
    }
    if ((uVar4 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar5) {
      *pcVar3 = '\0';
    }
    memset(acStack_17457,0,95000);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map(local_40);
    for (local_28 = 0; local_28 < 2; local_28 = local_28 + 1) {
      for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
        for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
          memset(&local_13f,0,0xff);
          memset(acStack_17457,0,95000);
                    /* try { // try from 084acd5f to 084ace16 has its CatchHandler @ 084ace52 */
          WongWork::CCompoundAvatar::ProcTest
                    (GlobalData::s_pCompoundAvatar,(int)(char)this[8],local_20,local_24,local_28,
                     local_40);
          pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
          CBoosterTest::makeFileContents(pCVar1,acStack_17457,(map *)local_40);
          sprintf(&local_13f,"bind_%s_%s_%s_%s.txt",
                  *(undefined4 *)(CHARACTER_JOB_NAMES + (char)this[8] * 4),(&BIND_NAMES)[local_28],
                  *(undefined4 *)(RECIPE_NAMES + local_24 * 4),
                  *(undefined4 *)(EQUIP_NAMES + local_20 * 4));
          pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
          CBoosterTest::printClient(pCVar1,false,&local_13f,acStack_17457);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear(local_40)
          ;
        }
      }
    }
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map(local_40);
  }
  return;
}
```
