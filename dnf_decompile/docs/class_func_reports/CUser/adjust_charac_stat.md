# adjust_charac_stat

`_ZN5CUser18adjust_charac_statEv`

`CUser::adjust_charac_stat()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08664766` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08664766  _ZN5CUser18adjust_charac_statEv
#           CUser::adjust_charac_stat()
# range [0x08664766, 0x08664ae7]
08664766 +0x000:  push   %ebp
08664767 +0x001:  mov    %esp,%ebp
08664769 +0x003:  push   %edi
0866476a +0x004:  push   %esi
0866476b +0x005:  push   %ebx
0866476c +0x006:  sub    $0x11c,%esp
08664772 +0x00c:  lea    -0x92(%ebp),%eax
08664778 +0x012:  mov    %eax,(%esp)
0866477b +0x015:  call   08348254 <_ZN15_Additioal_infoC1Ev>  ; _Additioal_info::_Additioal_info()
08664780 +0x01a:  lea    -0x92(%ebp),%eax
08664786 +0x020:  mov    %eax,(%esp)
08664789 +0x023:  call   08348268 <_ZN15_Additioal_info5clearEv>  ; _Additioal_info::clear()
0866478e +0x028:  lea    -0x92(%ebp),%eax
08664794 +0x02e:  mov    %eax,0x4(%esp)
08664798 +0x032:  mov    0x8(%ebp),%eax
0866479b +0x035:  mov    %eax,(%esp)
0866479e +0x038:  call   08664ae8 <_ZN5CUser13calc_lev_statER15_Additioal_info>  ; CUser::calc_lev_stat(_Additioal_info&)
086647a3 +0x03d:  mov    0x8(%ebp),%eax
086647a6 +0x040:  mov    %eax,(%esp)
086647a9 +0x043:  call   086960aa <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x28ff>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x28ff
086647ae +0x048:  mov    %eax,-0x20(%ebp)
086647b1 +0x04b:  mov    -0x20(%ebp),%eax
086647b4 +0x04e:  movzwl 0x16(%eax),%eax
086647b8 +0x052:  cwtl
086647b9 +0x053:  mov    %eax,-0xe8(%ebp)
086647bf +0x059:  mov    -0x20(%ebp),%eax
086647c2 +0x05c:  movzwl 0x14(%eax),%eax
086647c6 +0x060:  cwtl
086647c7 +0x061:  mov    %eax,-0xe4(%ebp)
086647cd +0x067:  mov    -0x20(%ebp),%eax
086647d0 +0x06a:  movzwl 0x12(%eax),%eax
086647d4 +0x06e:  cwtl
086647d5 +0x06f:  mov    %eax,-0xe0(%ebp)
086647db +0x075:  mov    -0x20(%ebp),%eax
086647de +0x078:  movzwl 0x10(%eax),%eax
086647e2 +0x07c:  cwtl
086647e3 +0x07d:  mov    %eax,-0xdc(%ebp)
086647e9 +0x083:  mov    -0x20(%ebp),%eax
086647ec +0x086:  mov    0x42(%eax),%eax
086647ef +0x089:  mov    %eax,-0xd8(%ebp)
086647f5 +0x08f:  mov    -0x20(%ebp),%eax
086647f8 +0x092:  movzwl 0xe(%eax),%eax
086647fc +0x096:  movzwl %ax,%eax
086647ff +0x099:  mov    %eax,-0xd4(%ebp)
08664805 +0x09f:  mov    -0x20(%ebp),%eax
08664808 +0x0a2:  movzwl 0xc(%eax),%eax
0866480c +0x0a6:  movzwl %ax,%eax
0866480f +0x0a9:  mov    %eax,-0xd0(%ebp)
08664815 +0x0af:  mov    -0x20(%ebp),%eax
08664818 +0x0b2:  movzwl 0xa(%eax),%eax
0866481c +0x0b6:  movzwl %ax,%eax
0866481f +0x0b9:  mov    %eax,-0xcc(%ebp)
08664825 +0x0bf:  mov    -0x20(%ebp),%eax
08664828 +0x0c2:  movzwl 0x8(%eax),%eax
0866482c +0x0c6:  movzwl %ax,%eax
0866482f +0x0c9:  mov    %eax,-0xc8(%ebp)
08664835 +0x0cf:  mov    -0x20(%ebp),%eax
08664838 +0x0d2:  mov    0x4(%eax),%eax
0866483b +0x0d5:  mov    %eax,-0xc4(%ebp)
08664841 +0x0db:  mov    -0x20(%ebp),%eax
08664844 +0x0de:  mov    (%eax),%edi
08664846 +0x0e0:  mov    0x8(%ebp),%eax
08664849 +0x0e3:  mov    %eax,(%esp)
0866484c +0x0e6:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08664851 +0x0eb:  mov    %eax,%esi
08664853 +0x0ed:  mov    0x8(%ebp),%eax
08664856 +0x0f0:  mov    %eax,(%esp)
08664859 +0x0f3:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0866485e +0x0f8:  mov    %eax,%ebx
08664860 +0x0fa:  movl   $0x0,0xc(%esp)
08664868 +0x102:  movl   $0x44d1,0x8(%esp)
08664870 +0x10a:  movl   $&_ZZN5CUser18adjust_charac_statEvE19__PRETTY_FUNCTION__,0x4(%esp)
08664878 +0x112:  lea    -0x40(%ebp),%eax
0866487b +0x115:  mov    %eax,(%esp)
0866487e +0x118:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08664883 +0x11d:  mov    -0xe8(%ebp),%eax
08664889 +0x123:  mov    %eax,0x38(%esp)
0866488d +0x127:  mov    -0xe4(%ebp),%eax
08664893 +0x12d:  mov    %eax,0x34(%esp)
08664897 +0x131:  mov    -0xe0(%ebp),%eax
0866489d +0x137:  mov    %eax,0x30(%esp)
086648a1 +0x13b:  mov    -0xdc(%ebp),%eax
086648a7 +0x141:  mov    %eax,0x2c(%esp)
086648ab +0x145:  mov    -0xd8(%ebp),%eax
086648b1 +0x14b:  mov    %eax,0x28(%esp)
086648b5 +0x14f:  mov    -0xd4(%ebp),%eax
086648bb +0x155:  mov    %eax,0x24(%esp)
086648bf +0x159:  mov    -0xd0(%ebp),%eax
086648c5 +0x15f:  mov    %eax,0x20(%esp)
086648c9 +0x163:  mov    -0xcc(%ebp),%eax
086648cf +0x169:  mov    %eax,0x1c(%esp)
086648d3 +0x16d:  mov    -0xc8(%ebp),%eax
086648d9 +0x173:  mov    %eax,0x18(%esp)
086648dd +0x177:  mov    -0xc4(%ebp),%eax
086648e3 +0x17d:  mov    %eax,0x14(%esp)
086648e7 +0x181:  mov    %edi,0x10(%esp)
086648eb +0x185:  mov    %esi,0xc(%esp)
086648ef +0x189:  mov    %ebx,0x8(%esp)
086648f3 +0x18d:  movl   $"before adjust stat(%s(%d) : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",0x4(%esp)
086648fb +0x195:  lea    -0x40(%ebp),%eax
086648fe +0x198:  mov    %eax,(%esp)
08664901 +0x19b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08664906 +0x1a0:  mov    0x8(%ebp),%eax
08664909 +0x1a3:  mov    %eax,(%esp)
0866490c +0x1a6:  call   086960d8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x292d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x292d
08664911 +0x1ab:  mov    %eax,-0x1c(%ebp)
08664914 +0x1ae:  mov    -0x1c(%ebp),%eax
08664917 +0x1b1:  lea    -0x92(%ebp),%edx
0866491d +0x1b7:  mov    $0x52,%ebx
08664922 +0x1bc:  mov    %eax,%ecx
08664924 +0x1be:  and    $0x1,%ecx
08664927 +0x1c1:  test   %ecx,%ecx
08664929 +0x1c3:  je     08664939 <+0x1d3>
0866492b +0x1c5:  movzbl (%edx),%ecx
0866492e +0x1c8:  mov    %cl,(%eax)
08664930 +0x1ca:  add    $0x1,%eax
08664933 +0x1cd:  add    $0x1,%edx
08664936 +0x1d0:  sub    $0x1,%ebx
08664939 +0x1d3:  mov    %eax,%ecx
0866493b +0x1d5:  and    $0x2,%ecx
0866493e +0x1d8:  test   %ecx,%ecx
08664940 +0x1da:  je     08664951 <+0x1eb>
08664942 +0x1dc:  movzwl (%edx),%ecx
08664945 +0x1df:  mov    %cx,(%eax)
08664948 +0x1e2:  add    $0x2,%eax
0866494b +0x1e5:  add    $0x2,%edx
0866494e +0x1e8:  sub    $0x2,%ebx
08664951 +0x1eb:  mov    %ebx,%ecx
08664953 +0x1ed:  shr    $0x2,%ecx
08664956 +0x1f0:  mov    %eax,%edi
08664958 +0x1f2:  mov    %edx,%esi
0866495a +0x1f4:  rep movsl %ds:(%esi),%es:(%edi)
0866495c +0x1f6:  mov    %esi,%edx
0866495e +0x1f8:  mov    %edi,%eax
08664960 +0x1fa:  mov    $0x0,%ecx
08664965 +0x1ff:  mov    %ebx,%esi
08664967 +0x201:  and    $0x2,%esi
0866496a +0x204:  test   %esi,%esi
0866496c +0x206:  je     08664979 <+0x213>
0866496e +0x208:  movzwl (%edx,%ecx,1),%esi
08664972 +0x20c:  mov    %si,(%eax,%ecx,1)
08664976 +0x210:  add    $0x2,%ecx
08664979 +0x213:  and    $0x1,%ebx
0866497c +0x216:  test   %ebx,%ebx
0866497e +0x218:  je     08664987 <+0x221>
08664980 +0x21a:  movzbl (%edx,%ecx,1),%edx
08664984 +0x21e:  mov    %dl,(%eax,%ecx,1)
08664987 +0x221:  mov    -0x1c(%ebp),%eax
0866498a +0x224:  movzwl 0x16(%eax),%eax
0866498e +0x228:  cwtl
0866498f +0x229:  mov    %eax,-0xc0(%ebp)
08664995 +0x22f:  mov    -0x1c(%ebp),%eax
08664998 +0x232:  movzwl 0x14(%eax),%eax
0866499c +0x236:  cwtl
0866499d +0x237:  mov    %eax,-0xbc(%ebp)
086649a3 +0x23d:  mov    -0x1c(%ebp),%eax
086649a6 +0x240:  movzwl 0x12(%eax),%eax
086649aa +0x244:  cwtl
086649ab +0x245:  mov    %eax,-0xb8(%ebp)
086649b1 +0x24b:  mov    -0x1c(%ebp),%eax
086649b4 +0x24e:  movzwl 0x10(%eax),%eax
086649b8 +0x252:  cwtl
086649b9 +0x253:  mov    %eax,-0xb4(%ebp)
086649bf +0x259:  mov    -0x1c(%ebp),%eax
086649c2 +0x25c:  mov    0x42(%eax),%eax
086649c5 +0x25f:  mov    %eax,-0xb0(%ebp)
086649cb +0x265:  mov    -0x1c(%ebp),%eax
086649ce +0x268:  movzwl 0xe(%eax),%eax
086649d2 +0x26c:  movzwl %ax,%eax
086649d5 +0x26f:  mov    %eax,-0xac(%ebp)
086649db +0x275:  mov    -0x1c(%ebp),%eax
086649de +0x278:  movzwl 0xc(%eax),%eax
086649e2 +0x27c:  movzwl %ax,%eax
086649e5 +0x27f:  mov    %eax,-0xa8(%ebp)
086649eb +0x285:  mov    -0x1c(%ebp),%eax
086649ee +0x288:  movzwl 0xa(%eax),%eax
086649f2 +0x28c:  movzwl %ax,%eax
086649f5 +0x28f:  mov    %eax,-0xa4(%ebp)
086649fb +0x295:  mov    -0x1c(%ebp),%eax
086649fe +0x298:  movzwl 0x8(%eax),%eax
08664a02 +0x29c:  movzwl %ax,%eax
08664a05 +0x29f:  mov    %eax,-0xa0(%ebp)
08664a0b +0x2a5:  mov    -0x1c(%ebp),%eax
08664a0e +0x2a8:  mov    0x4(%eax),%eax
08664a11 +0x2ab:  mov    %eax,-0x9c(%ebp)
08664a17 +0x2b1:  mov    -0x1c(%ebp),%eax
08664a1a +0x2b4:  mov    (%eax),%edi
08664a1c +0x2b6:  mov    0x8(%ebp),%eax
08664a1f +0x2b9:  mov    %eax,(%esp)
08664a22 +0x2bc:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08664a27 +0x2c1:  mov    %eax,%esi
08664a29 +0x2c3:  mov    0x8(%ebp),%eax
08664a2c +0x2c6:  mov    %eax,(%esp)
08664a2f +0x2c9:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08664a34 +0x2ce:  mov    %eax,%ebx
08664a36 +0x2d0:  movl   $0x0,0xc(%esp)
08664a3e +0x2d8:  movl   $0x44d7,0x8(%esp)
08664a46 +0x2e0:  movl   $&_ZZN5CUser18adjust_charac_statEvE19__PRETTY_FUNCTION__,0x4(%esp)
08664a4e +0x2e8:  lea    -0x30(%ebp),%eax
08664a51 +0x2eb:  mov    %eax,(%esp)
08664a54 +0x2ee:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08664a59 +0x2f3:  mov    -0xc0(%ebp),%eax
08664a5f +0x2f9:  mov    %eax,0x38(%esp)
08664a63 +0x2fd:  mov    -0xbc(%ebp),%eax
08664a69 +0x303:  mov    %eax,0x34(%esp)
08664a6d +0x307:  mov    -0xb8(%ebp),%eax
08664a73 +0x30d:  mov    %eax,0x30(%esp)
08664a77 +0x311:  mov    -0xb4(%ebp),%eax
08664a7d +0x317:  mov    %eax,0x2c(%esp)
08664a81 +0x31b:  mov    -0xb0(%ebp),%eax
08664a87 +0x321:  mov    %eax,0x28(%esp)
08664a8b +0x325:  mov    -0xac(%ebp),%eax
08664a91 +0x32b:  mov    %eax,0x24(%esp)
08664a95 +0x32f:  mov    -0xa8(%ebp),%eax
08664a9b +0x335:  mov    %eax,0x20(%esp)
08664a9f +0x339:  mov    -0xa4(%ebp),%eax
08664aa5 +0x33f:  mov    %eax,0x1c(%esp)
08664aa9 +0x343:  mov    -0xa0(%ebp),%eax
08664aaf +0x349:  mov    %eax,0x18(%esp)
08664ab3 +0x34d:  mov    -0x9c(%ebp),%eax
08664ab9 +0x353:  mov    %eax,0x14(%esp)
08664abd +0x357:  mov    %edi,0x10(%esp)
08664ac1 +0x35b:  mov    %esi,0xc(%esp)
08664ac5 +0x35f:  mov    %ebx,0x8(%esp)
08664ac9 +0x363:  movl   $"after adjust stat(%s(%d) : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",0x4(%esp)
08664ad1 +0x36b:  lea    -0x30(%ebp),%eax
08664ad4 +0x36e:  mov    %eax,(%esp)
08664ad7 +0x371:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08664adc +0x376:  add    $0x11c,%esp
08664ae2 +0x37c:  pop    %ebx
08664ae3 +0x37d:  pop    %esi
08664ae4 +0x37e:  pop    %edi
08664ae5 +0x37f:  pop    %ebp
08664ae6 +0x380:  ret
08664ae7 +0x381:  nop
```

## 反编译 C

```c
// CUser::adjust_charac_stat @ 0x8664766

/* CUser::adjust_charac_stat() */

void __thiscall CUser::adjust_charac_stat(CUser *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  _Additioal_info *p_Var14;
  uint uVar15;
  int iVar16;
  _Additioal_info *p_Var17;
  uint uVar18;
  bool bVar19;
  byte bVar20;
  _Additioal_info local_96;
  _Additioal_info local_95 [81];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  undefined4 *local_24;
  _Additioal_info *local_20;
  
  bVar20 = 0;
  _Additioal_info::_Additioal_info(&local_96);
  _Additioal_info::clear(&local_96);
  calc_lev_stat(this,&local_96);
  local_24 = (undefined4 *)CUserCharacInfo::getCurCharacAddInfoRefR((CUserCharacInfo *)this);
  sVar1 = *(short *)((int)local_24 + 0x16);
  sVar2 = *(short *)(local_24 + 5);
  sVar3 = *(short *)((int)local_24 + 0x12);
  sVar4 = *(short *)(local_24 + 4);
  uVar9 = *(undefined4 *)((int)local_24 + 0x42);
  uVar5 = *(ushort *)((int)local_24 + 0xe);
  uVar6 = *(ushort *)(local_24 + 3);
  uVar7 = *(ushort *)((int)local_24 + 10);
  uVar8 = *(ushort *)(local_24 + 2);
  uVar10 = local_24[1];
  uVar11 = *local_24;
  uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  uVar13 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  cMyTrace::cMyTrace(local_44,"void CUser::adjust_charac_stat()",0x44d1,0);
  cMyTrace::operator()
            (local_44,"before adjust stat(%s(%d) : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",
             uVar13,uVar12,uVar11,uVar10,(uint)uVar8,(uint)uVar7,(uint)uVar6,(uint)uVar5,uVar9,
             (int)sVar4,(int)sVar3,(int)sVar2,(int)sVar1);
  local_20 = (_Additioal_info *)CUserCharacInfo::getCurCharacAddInfoRefW((CUserCharacInfo *)this);
  p_Var17 = &local_96;
  uVar18 = 0x52;
  bVar19 = ((uint)local_20 & 1) != 0;
  p_Var14 = local_20;
  if (bVar19) {
    *local_20 = local_96;
    p_Var14 = local_20 + 1;
    p_Var17 = local_95;
    uVar18 = 0x51;
  }
  if (((uint)p_Var14 & 2) != 0) {
    *(undefined2 *)p_Var14 = *(undefined2 *)p_Var17;
    p_Var14 = p_Var14 + 2;
    p_Var17 = p_Var17 + 2;
    uVar18 = uVar18 - 2;
  }
  for (uVar15 = uVar18 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
    *(undefined4 *)p_Var14 = *(undefined4 *)p_Var17;
    p_Var17 = p_Var17 + ((uint)bVar20 * -2 + 1) * 4;
    p_Var14 = p_Var14 + (uint)bVar20 * -8 + 4;
  }
  iVar16 = 0;
  if ((uVar18 & 2) != 0) {
    *(undefined2 *)p_Var14 = *(undefined2 *)p_Var17;
    iVar16 = 2;
  }
  if (bVar19) {
    p_Var14[iVar16] = p_Var17[iVar16];
  }
  sVar1 = *(short *)(local_20 + 0x16);
  sVar2 = *(short *)(local_20 + 0x14);
  sVar3 = *(short *)(local_20 + 0x12);
  sVar4 = *(short *)(local_20 + 0x10);
  uVar9 = *(undefined4 *)(local_20 + 0x42);
  uVar5 = *(ushort *)(local_20 + 0xe);
  uVar6 = *(ushort *)(local_20 + 0xc);
  uVar7 = *(ushort *)(local_20 + 10);
  uVar8 = *(ushort *)(local_20 + 8);
  uVar10 = *(undefined4 *)(local_20 + 4);
  uVar11 = *(undefined4 *)local_20;
  uVar12 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  uVar13 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
  cMyTrace::cMyTrace(local_34,"void CUser::adjust_charac_stat()",0x44d7,0);
  cMyTrace::operator()
            (local_34,"after adjust stat(%s(%d) : %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d)",
             uVar13,uVar12,uVar11,uVar10,(uint)uVar8,(uint)uVar7,(uint)uVar6,(uint)uVar5,uVar9,
             (int)sVar4,(int)sVar3,(int)sVar2,(int)sVar1);
  return;
}
```
