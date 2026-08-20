# reqBingoQuizMark

`_ZN10BingoEvent16reqBingoQuizMarkER5CUseri`

`BingoEvent::reqBingoQuizMark(CUser&, int)`

| 类 | 地址 |
|---|---|
| `BingoEvent` | `0x080ca262` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ca262  _ZN10BingoEvent16reqBingoQuizMarkER5CUseri
#           BingoEvent::reqBingoQuizMark(CUser&, int)
# range [0x080ca262, 0x080ca3d3]
080ca262 +0x000:  push   %ebp
080ca263 +0x001:  mov    %esp,%ebp
080ca265 +0x003:  push   %ebx
080ca266 +0x004:  sub    $0x34,%esp
080ca269 +0x007:  mov    0x8(%ebp),%eax
080ca26c +0x00a:  add    $0xc,%eax
080ca26f +0x00d:  mov    %eax,(%esp)
080ca272 +0x010:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080ca277 +0x015:  mov    %eax,(%esp)
080ca27a +0x018:  call   080cae12 <_ZN6CBingo12getQuizValueEv>  ; CBingo::getQuizValue()
080ca27f +0x01d:  cmp    0x10(%ebp),%eax
080ca282 +0x020:  setne  %al
080ca285 +0x023:  test   %al,%al
080ca287 +0x025:  je     080ca293 <+0x31>
080ca289 +0x027:  mov    $0x17,%eax
080ca28e +0x02c:  jmp    080ca3ce <+0x16c>
080ca293 +0x031:  mov    0x8(%ebp),%eax
080ca296 +0x034:  add    $0xc,%eax
080ca299 +0x037:  mov    %eax,(%esp)
080ca29c +0x03a:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080ca2a1 +0x03f:  mov    %eax,(%esp)
080ca2a4 +0x042:  call   080cae1e <_ZN6CBingo12getQuizIndexEv>  ; CBingo::getQuizIndex()
080ca2a9 +0x047:  mov    %eax,-0x1c(%ebp)
080ca2ac +0x04a:  cmpl   $0x0,-0x1c(%ebp)
080ca2b0 +0x04e:  jns    080ca2c2 <+0x60>
080ca2b2 +0x050:  cmpl   $0x31,-0x1c(%ebp)
080ca2b6 +0x054:  jle    080ca2c2 <+0x60>
080ca2b8 +0x056:  mov    $0x13,%eax
080ca2bd +0x05b:  jmp    080ca3ce <+0x16c>
080ca2c2 +0x060:  mov    0xc(%ebp),%eax
080ca2c5 +0x063:  mov    %eax,(%esp)
080ca2c8 +0x066:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca2cd +0x06b:  mov    (%eax),%eax
080ca2cf +0x06d:  mov    -0x1c(%ebp),%edx
080ca2d2 +0x070:  mov    %edx,0x4(%esp)
080ca2d6 +0x074:  mov    %eax,(%esp)
080ca2d9 +0x077:  call   0889232e <_Z13isSetBit_Uintji>  ; isSetBit_Uint(unsigned int, int)
080ca2de +0x07c:  test   %al,%al
080ca2e0 +0x07e:  je     080ca2ec <+0x8a>
080ca2e2 +0x080:  mov    $0x12,%eax
080ca2e7 +0x085:  jmp    080ca3ce <+0x16c>
080ca2ec +0x08a:  mov    0xc(%ebp),%eax
080ca2ef +0x08d:  mov    %eax,(%esp)
080ca2f2 +0x090:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca2f7 +0x095:  mov    (%eax),%eax
080ca2f9 +0x097:  mov    %eax,-0x18(%ebp)
080ca2fc +0x09a:  mov    0xc(%ebp),%eax
080ca2ff +0x09d:  mov    %eax,(%esp)
080ca302 +0x0a0:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca307 +0x0a5:  mov    %eax,%ebx
080ca309 +0x0a7:  mov    0x8(%ebp),%eax
080ca30c +0x0aa:  add    $0xc,%eax
080ca30f +0x0ad:  mov    %eax,(%esp)
080ca312 +0x0b0:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
080ca317 +0x0b5:  movl   $0x0,0x8(%esp)
080ca31f +0x0bd:  mov    %ebx,0x4(%esp)
080ca323 +0x0c1:  mov    %eax,(%esp)
080ca326 +0x0c4:  call   080cad4c <_ZN6CBingo11calNewValueERji>  ; CBingo::calNewValue(unsigned int&, int)
080ca32b +0x0c9:  mov    %eax,-0x14(%ebp)
080ca32e +0x0cc:  mov    0xc(%ebp),%eax
080ca331 +0x0cf:  mov    %eax,(%esp)
080ca334 +0x0d2:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca339 +0x0d7:  mov    (%eax),%eax
080ca33b +0x0d9:  cmp    -0x18(%ebp),%eax
080ca33e +0x0dc:  setne  %al
080ca341 +0x0df:  test   %al,%al
080ca343 +0x0e1:  je     080ca3c9 <+0x167>
080ca349 +0x0e7:  mov    0xc(%ebp),%eax
080ca34c +0x0ea:  mov    %eax,(%esp)
080ca34f +0x0ed:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca354 +0x0f2:  movb   $0x1,0x6(%eax)
080ca358 +0x0f6:  mov    0xc(%ebp),%eax
080ca35b +0x0f9:  mov    %eax,(%esp)
080ca35e +0x0fc:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca363 +0x101:  movzbl 0x4(%eax),%eax
080ca367 +0x105:  movsbl %al,%eax
080ca36a +0x108:  mov    -0x14(%ebp),%edx
080ca36d +0x10b:  mov    %edx,%ecx
080ca36f +0x10d:  sub    %eax,%ecx
080ca371 +0x10f:  mov    %ecx,%eax
080ca373 +0x111:  mov    %eax,-0x10(%ebp)
080ca376 +0x114:  cmpl   $0x0,-0x10(%ebp)
080ca37a +0x118:  jle    080ca3c9 <+0x167>
080ca37c +0x11a:  mov    -0x10(%ebp),%eax
080ca37f +0x11d:  cmp    $0x3,%eax
080ca382 +0x120:  jle    080ca389 <+0x127>
080ca384 +0x122:  mov    $0x3,%eax
080ca389 +0x127:  mov    %eax,-0x10(%ebp)
080ca38c +0x12a:  mov    0xc(%ebp),%eax
080ca38f +0x12d:  mov    %eax,(%esp)
080ca392 +0x130:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
080ca397 +0x135:  mov    -0x14(%ebp),%edx
080ca39a +0x138:  mov    %dl,0x4(%eax)
080ca39d +0x13b:  movl   $0x0,-0xc(%ebp)
080ca3a4 +0x142:  jmp    080ca3bc <+0x15a>
080ca3a6 +0x144:  mov    0xc(%ebp),%eax
080ca3a9 +0x147:  mov    %eax,0x4(%esp)
080ca3ad +0x14b:  mov    0x8(%ebp),%eax
080ca3b0 +0x14e:  mov    %eax,(%esp)
080ca3b3 +0x151:  call   080ca3d4 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser>  ; BingoEvent::sendOneMatchLineReward(CUser&)
080ca3b8 +0x156:  addl   $0x1,-0xc(%ebp)
080ca3bc +0x15a:  mov    -0xc(%ebp),%eax
080ca3bf +0x15d:  cmp    -0x10(%ebp),%eax
080ca3c2 +0x160:  setl   %al
080ca3c5 +0x163:  test   %al,%al
080ca3c7 +0x165:  jne    080ca3a6 <+0x144>
080ca3c9 +0x167:  mov    $0x0,%eax
080ca3ce +0x16c:  add    $0x34,%esp
080ca3d1 +0x16f:  pop    %ebx
080ca3d2 +0x170:  pop    %ebp
080ca3d3 +0x171:  ret
```

## 反编译 C

```c
// BingoEvent::reqBingoQuizMark @ 0x80ca262

/* BingoEvent::reqBingoQuizMark(CUser&, int) */

undefined4 __thiscall BingoEvent::reqBingoQuizMark(BingoEvent *this,CUser *param_1,int param_2)

{
  char cVar1;
  CBingo *pCVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_10;
  
  pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
  iVar3 = CBingo::getQuizValue(pCVar2);
  if (iVar3 == param_2) {
    pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc));
    iVar3 = CBingo::getQuizIndex(pCVar2);
    if ((iVar3 < 0) && (0x31 < iVar3)) {
      uVar4 = 0x13;
    }
    else {
      puVar5 = (uint *)CUser::getBingoData(param_1);
      cVar1 = isSetBit_Uint(*puVar5,iVar3);
      if (cVar1 == '\0') {
        piVar6 = (int *)CUser::getBingoData(param_1);
        iVar3 = *piVar6;
        puVar5 = (uint *)CUser::getBingoData(param_1);
        pCVar2 = (CBingo *)boost::shared_ptr<CBingo>::operator->((shared_ptr<CBingo> *)(this + 0xc))
        ;
        iVar7 = CBingo::calNewValue(pCVar2,puVar5,0);
        piVar6 = (int *)CUser::getBingoData(param_1);
        if (*piVar6 != iVar3) {
          iVar3 = CUser::getBingoData(param_1);
          *(undefined1 *)(iVar3 + 6) = 1;
          iVar3 = CUser::getBingoData(param_1);
          iVar3 = iVar7 - *(char *)(iVar3 + 4);
          if (0 < iVar3) {
            if (3 < iVar3) {
              iVar3 = 3;
            }
            iVar8 = CUser::getBingoData(param_1);
            *(char *)(iVar8 + 4) = (char)iVar7;
            for (local_10 = 0; local_10 < iVar3; local_10 = local_10 + 1) {
              sendOneMatchLineReward(this,param_1);
            }
          }
        }
        uVar4 = 0;
      }
      else {
        uVar4 = 0x12;
      }
    }
  }
  else {
    uVar4 = 0x17;
  }
  return uVar4;
}
```
