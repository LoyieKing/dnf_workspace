# CalcuateVictoryPoint

`_ZN8PvP_Room20CalcuateVictoryPointEPii`

`PvP_Room::CalcuateVictoryPoint(int*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085da210` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085da210  _ZN8PvP_Room20CalcuateVictoryPointEPii
#           PvP_Room::CalcuateVictoryPoint(int*, int)
# range [0x085da210, 0x085da589]
085da210 +0x000:  push   %ebp
085da211 +0x001:  mov    %esp,%ebp
085da213 +0x003:  push   %ebx
085da214 +0x004:  sub    $0x64,%esp
085da217 +0x007:  mov    0x8(%ebp),%eax
085da21a +0x00a:  mov    0x4(%eax),%eax
085da21d +0x00d:  cmp    $0x1,%eax
085da220 +0x010:  je     085da231 <+0x21>
085da222 +0x012:  mov    0x8(%ebp),%eax
085da225 +0x015:  mov    0x4(%eax),%eax
085da228 +0x018:  cmp    $0x4,%eax
085da22b +0x01b:  jne    085da37f <+0x16f>
085da231 +0x021:  movl   $0x0,-0x28(%ebp)
085da238 +0x028:  jmp    085da36b <+0x15b>
085da23d +0x02d:  mov    -0x28(%ebp),%edx
085da240 +0x030:  mov    0x8(%ebp),%eax
085da243 +0x033:  add    $0xc,%edx
085da246 +0x036:  mov    (%eax,%edx,4),%eax
085da249 +0x039:  test   %eax,%eax
085da24b +0x03b:  je     085da363 <+0x153>
085da251 +0x041:  mov    -0x28(%ebp),%edx
085da254 +0x044:  mov    0x8(%ebp),%eax
085da257 +0x047:  add    $0xc,%edx
085da25a +0x04a:  mov    (%eax,%edx,4),%eax
085da25d +0x04d:  test   %eax,%eax
085da25f +0x04f:  je     085da27e <+0x6e>
085da261 +0x051:  mov    -0x28(%ebp),%eax
085da264 +0x054:  mov    %eax,0x4(%esp)
085da268 +0x058:  mov    0x8(%ebp),%eax
085da26b +0x05b:  mov    %eax,(%esp)
085da26e +0x05e:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085da273 +0x063:  test   %al,%al
085da275 +0x065:  je     085da27e <+0x6e>
085da277 +0x067:  mov    $0x1,%eax
085da27c +0x06c:  jmp    085da283 <+0x73>
085da27e +0x06e:  mov    $0x0,%eax
085da283 +0x073:  test   %al,%al
085da285 +0x075:  jne    085da366 <+0x156>
085da28b +0x07b:  movl   $0x0,-0x24(%ebp)
085da292 +0x082:  jmp    085da2a8 <+0x98>
085da294 +0x084:  mov    -0x24(%ebp),%eax
085da297 +0x087:  shl    $0x2,%eax
085da29a +0x08a:  add    0xc(%ebp),%eax
085da29d +0x08d:  mov    (%eax),%eax
085da29f +0x08f:  cmp    -0x28(%ebp),%eax
085da2a2 +0x092:  je     085da2b7 <+0xa7>
085da2a4 +0x094:  addl   $0x1,-0x24(%ebp)
085da2a8 +0x098:  mov    -0x24(%ebp),%eax
085da2ab +0x09b:  cmp    0x10(%ebp),%eax
085da2ae +0x09e:  setl   %al
085da2b1 +0x0a1:  test   %al,%al
085da2b3 +0x0a3:  jne    085da294 <+0x84>
085da2b5 +0x0a5:  jmp    085da2b8 <+0xa8>
085da2b7 +0x0a7:  nop
085da2b8 +0x0a8:  mov    -0x24(%ebp),%eax
085da2bb +0x0ab:  cmp    0x10(%ebp),%eax
085da2be +0x0ae:  jne    085da309 <+0xf9>
085da2c0 +0x0b0:  movl   $0x5,0xc(%esp)
085da2c8 +0x0b8:  movl   $0xb7c,0x8(%esp)
085da2d0 +0x0c0:  movl   $&_ZZN8PvP_Room20CalcuateVictoryPointEPiiE19__PRETTY_FUNCTION__,0x4(%esp)
085da2d8 +0x0c8:  lea    -0x50(%ebp),%eax
085da2db +0x0cb:  mov    %eax,(%esp)
085da2de +0x0ce:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085da2e3 +0x0d3:  mov    0x10(%ebp),%eax
085da2e6 +0x0d6:  mov    %eax,0xc(%esp)
085da2ea +0x0da:  mov    -0x28(%ebp),%eax
085da2ed +0x0dd:  mov    %eax,0x8(%esp)
085da2f1 +0x0e1:  movl   $"1 PvP_Room::CalcuateVictoryPoint Error, No Rank User Found i<%d> RankCount<%d>",0x4(%esp)
085da2f9 +0x0e9:  lea    -0x50(%ebp),%eax
085da2fc +0x0ec:  mov    %eax,(%esp)
085da2ff +0x0ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085da304 +0x0f4:  jmp    085da583 <+0x373>
085da309 +0x0f9:  mov    -0x24(%ebp),%eax
085da30c +0x0fc:  mov    %eax,-0x30(%ebp)
085da30f +0x0ff:  mov    0x8(%ebp),%eax
085da312 +0x102:  add    $0x268,%eax
085da317 +0x107:  mov    %eax,(%esp)
085da31a +0x10a:  call   085df7a4 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2b>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2b
085da31f +0x10f:  cmp    -0x28(%ebp),%eax
085da322 +0x112:  sete   %al
085da325 +0x115:  mov    %al,-0x29(%ebp)
085da328 +0x118:  mov    -0x28(%ebp),%edx
085da32b +0x11b:  mov    0x8(%ebp),%eax
085da32e +0x11e:  add    $0xc,%edx
085da331 +0x121:  mov    (%eax,%edx,4),%ebx
085da334 +0x124:  mov    0x8(%ebp),%eax
085da337 +0x127:  mov    0xbc(%eax),%edx
085da33d +0x12d:  movzbl -0x29(%ebp),%eax
085da341 +0x131:  mov    %edx,0xc(%esp)
085da345 +0x135:  mov    %eax,0x8(%esp)
085da349 +0x139:  mov    -0x30(%ebp),%eax
085da34c +0x13c:  mov    %eax,0x4(%esp)
085da350 +0x140:  mov    0x8(%ebp),%eax
085da353 +0x143:  mov    %eax,(%esp)
085da356 +0x146:  call   085da086 <_ZN8PvP_Room33CalculateVictoryPointOfSinglePlayEibi>  ; PvP_Room::CalculateVictoryPointOfSinglePlay(int, bool, int)
085da35b +0x14b:  mov    %eax,0x796fc(%ebx)
085da361 +0x151:  jmp    085da367 <+0x157>
085da363 +0x153:  nop
085da364 +0x154:  jmp    085da367 <+0x157>
085da366 +0x156:  nop
085da367 +0x157:  addl   $0x1,-0x28(%ebp)
085da36b +0x15b:  cmpl   $0x7,-0x28(%ebp)
085da36f +0x15f:  setle  %al
085da372 +0x162:  test   %al,%al
085da374 +0x164:  jne    085da23d <+0x2d>
085da37a +0x16a:  jmp    085da583 <+0x373>
085da37f +0x16f:  movl   $0x0,-0x20(%ebp)
085da386 +0x176:  jmp    085da574 <+0x364>
085da38b +0x17b:  mov    -0x20(%ebp),%edx
085da38e +0x17e:  mov    0x8(%ebp),%eax
085da391 +0x181:  add    $0xc,%edx
085da394 +0x184:  mov    (%eax,%edx,4),%eax
085da397 +0x187:  test   %eax,%eax
085da399 +0x189:  je     085da56c <+0x35c>
085da39f +0x18f:  mov    -0x20(%ebp),%edx
085da3a2 +0x192:  mov    0x8(%ebp),%eax
085da3a5 +0x195:  add    $0xc,%edx
085da3a8 +0x198:  mov    (%eax,%edx,4),%eax
085da3ab +0x19b:  test   %eax,%eax
085da3ad +0x19d:  je     085da3cc <+0x1bc>
085da3af +0x19f:  mov    -0x20(%ebp),%eax
085da3b2 +0x1a2:  mov    %eax,0x4(%esp)
085da3b6 +0x1a6:  mov    0x8(%ebp),%eax
085da3b9 +0x1a9:  mov    %eax,(%esp)
085da3bc +0x1ac:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085da3c1 +0x1b1:  test   %al,%al
085da3c3 +0x1b3:  je     085da3cc <+0x1bc>
085da3c5 +0x1b5:  mov    $0x1,%eax
085da3ca +0x1ba:  jmp    085da3d1 <+0x1c1>
085da3cc +0x1bc:  mov    $0x0,%eax
085da3d1 +0x1c1:  test   %al,%al
085da3d3 +0x1c3:  jne    085da56f <+0x35f>
085da3d9 +0x1c9:  mov    -0x20(%ebp),%edx
085da3dc +0x1cc:  mov    0x8(%ebp),%eax
085da3df +0x1cf:  add    $0xc,%edx
085da3e2 +0x1d2:  mov    (%eax,%edx,4),%eax
085da3e5 +0x1d5:  mov    %eax,0x4(%esp)
085da3e9 +0x1d9:  mov    0x8(%ebp),%eax
085da3ec +0x1dc:  mov    %eax,(%esp)
085da3ef +0x1df:  call   085dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>  ; PvP_Room::GetTeamIndex(CUser*)
085da3f4 +0x1e4:  mov    %eax,-0x1c(%ebp)
085da3f7 +0x1e7:  movl   $0x0,-0x18(%ebp)
085da3fe +0x1ee:  jmp    085da414 <+0x204>
085da400 +0x1f0:  mov    -0x18(%ebp),%eax
085da403 +0x1f3:  shl    $0x2,%eax
085da406 +0x1f6:  add    0xc(%ebp),%eax
085da409 +0x1f9:  mov    (%eax),%eax
085da40b +0x1fb:  cmp    -0x20(%ebp),%eax
085da40e +0x1fe:  je     085da423 <+0x213>
085da410 +0x200:  addl   $0x1,-0x18(%ebp)
085da414 +0x204:  mov    -0x18(%ebp),%eax
085da417 +0x207:  cmp    0x10(%ebp),%eax
085da41a +0x20a:  setl   %al
085da41d +0x20d:  test   %al,%al
085da41f +0x20f:  jne    085da400 <+0x1f0>
085da421 +0x211:  jmp    085da424 <+0x214>
085da423 +0x213:  nop
085da424 +0x214:  mov    -0x18(%ebp),%eax
085da427 +0x217:  cmp    0x10(%ebp),%eax
085da42a +0x21a:  jne    085da475 <+0x265>
085da42c +0x21c:  movl   $0x5,0xc(%esp)
085da434 +0x224:  movl   $0xb97,0x8(%esp)
085da43c +0x22c:  movl   $&_ZZN8PvP_Room20CalcuateVictoryPointEPiiE19__PRETTY_FUNCTION__,0x4(%esp)
085da444 +0x234:  lea    -0x40(%ebp),%eax
085da447 +0x237:  mov    %eax,(%esp)
085da44a +0x23a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085da44f +0x23f:  mov    0x10(%ebp),%eax
085da452 +0x242:  mov    %eax,0xc(%esp)
085da456 +0x246:  mov    -0x20(%ebp),%eax
085da459 +0x249:  mov    %eax,0x8(%esp)
085da45d +0x24d:  movl   $"1 PvP_Room::CalcuateVictoryPoint Error, No Rank User Found i<%d> RankCount<%d>",0x4(%esp)
085da465 +0x255:  lea    -0x40(%ebp),%eax
085da468 +0x258:  mov    %eax,(%esp)
085da46b +0x25b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085da470 +0x260:  jmp    085da583 <+0x373>
085da475 +0x265:  mov    -0x18(%ebp),%eax
085da478 +0x268:  mov    %eax,-0x14(%ebp)
085da47b +0x26b:  mov    -0x14(%ebp),%eax
085da47e +0x26e:  mov    %eax,-0x30(%ebp)
085da481 +0x271:  mov    -0x14(%ebp),%eax
085da484 +0x274:  sub    $0x1,%eax
085da487 +0x277:  mov    %eax,-0x10(%ebp)
085da48a +0x27a:  jmp    085da500 <+0x2f0>
085da48c +0x27c:  mov    -0x10(%ebp),%eax
085da48f +0x27f:  shl    $0x2,%eax
085da492 +0x282:  add    0xc(%ebp),%eax
085da495 +0x285:  mov    (%eax),%eax
085da497 +0x287:  mov    %eax,-0xc(%ebp)
085da49a +0x28a:  mov    -0xc(%ebp),%edx
085da49d +0x28d:  mov    0x8(%ebp),%eax
085da4a0 +0x290:  add    $0xc,%edx
085da4a3 +0x293:  mov    (%eax,%edx,4),%eax
085da4a6 +0x296:  test   %eax,%eax
085da4a8 +0x298:  je     085da4c7 <+0x2b7>
085da4aa +0x29a:  mov    -0xc(%ebp),%eax
085da4ad +0x29d:  mov    %eax,0x4(%esp)
085da4b1 +0x2a1:  mov    0x8(%ebp),%eax
085da4b4 +0x2a4:  mov    %eax,(%esp)
085da4b7 +0x2a7:  call   085da046 <_ZN8PvP_Room13IsPvpObserverEi>  ; PvP_Room::IsPvpObserver(int)
085da4bc +0x2ac:  test   %al,%al
085da4be +0x2ae:  je     085da4c7 <+0x2b7>
085da4c0 +0x2b0:  mov    $0x1,%eax
085da4c5 +0x2b5:  jmp    085da4cc <+0x2bc>
085da4c7 +0x2b7:  mov    $0x0,%eax
085da4cc +0x2bc:  test   %al,%al
085da4ce +0x2be:  jne    085da4fb <+0x2eb>
085da4d0 +0x2c0:  mov    -0xc(%ebp),%edx
085da4d3 +0x2c3:  mov    0x8(%ebp),%eax
085da4d6 +0x2c6:  add    $0xc,%edx
085da4d9 +0x2c9:  mov    (%eax,%edx,4),%eax
085da4dc +0x2cc:  mov    %eax,0x4(%esp)
085da4e0 +0x2d0:  mov    0x8(%ebp),%eax
085da4e3 +0x2d3:  mov    %eax,(%esp)
085da4e6 +0x2d6:  call   085dc6ee <_ZN8PvP_Room12GetTeamIndexEP5CUser>  ; PvP_Room::GetTeamIndex(CUser*)
085da4eb +0x2db:  cmp    -0x1c(%ebp),%eax
085da4ee +0x2de:  setne  %al
085da4f1 +0x2e1:  test   %al,%al
085da4f3 +0x2e3:  je     085da4fc <+0x2ec>
085da4f5 +0x2e5:  subl   $0x1,-0x30(%ebp)
085da4f9 +0x2e9:  jmp    085da4fc <+0x2ec>
085da4fb +0x2eb:  nop
085da4fc +0x2ec:  subl   $0x1,-0x10(%ebp)
085da500 +0x2f0:  mov    -0x10(%ebp),%eax
085da503 +0x2f3:  not    %eax
085da505 +0x2f5:  shr    $0x1f,%eax
085da508 +0x2f8:  test   %al,%al
085da50a +0x2fa:  jne    085da48c <+0x27c>
085da50c +0x2fc:  mov    0x8(%ebp),%eax
085da50f +0x2ff:  add    $0x268,%eax
085da514 +0x304:  mov    %eax,(%esp)
085da517 +0x307:  call   085df7a4 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x2b>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x2b
085da51c +0x30c:  cmp    -0x1c(%ebp),%eax
085da51f +0x30f:  sete   %al
085da522 +0x312:  mov    %al,-0x29(%ebp)
085da525 +0x315:  mov    -0x20(%ebp),%edx
085da528 +0x318:  mov    0x8(%ebp),%eax
085da52b +0x31b:  add    $0xc,%edx
085da52e +0x31e:  mov    (%eax,%edx,4),%ebx
085da531 +0x321:  mov    0x8(%ebp),%eax
085da534 +0x324:  mov    0xbc(%eax),%eax
085da53a +0x32a:  mov    %eax,%edx
085da53c +0x32c:  shr    $0x1f,%edx
085da53f +0x32f:  lea    (%edx,%eax,1),%eax
085da542 +0x332:  sar    %eax
085da544 +0x334:  mov    %eax,%edx
085da546 +0x336:  movzbl -0x29(%ebp),%eax
085da54a +0x33a:  mov    %edx,0xc(%esp)
085da54e +0x33e:  mov    %eax,0x8(%esp)
085da552 +0x342:  mov    -0x30(%ebp),%eax
085da555 +0x345:  mov    %eax,0x4(%esp)
085da559 +0x349:  mov    0x8(%ebp),%eax
085da55c +0x34c:  mov    %eax,(%esp)
085da55f +0x34f:  call   085da1d8 <_ZN8PvP_Room31CalculateVictoryPointOfTeamPlayEibi>  ; PvP_Room::CalculateVictoryPointOfTeamPlay(int, bool, int)
085da564 +0x354:  mov    %eax,0x796fc(%ebx)
085da56a +0x35a:  jmp    085da570 <+0x360>
085da56c +0x35c:  nop
085da56d +0x35d:  jmp    085da570 <+0x360>
085da56f +0x35f:  nop
085da570 +0x360:  addl   $0x1,-0x20(%ebp)
085da574 +0x364:  cmpl   $0x7,-0x20(%ebp)
085da578 +0x368:  setle  %al
085da57b +0x36b:  test   %al,%al
085da57d +0x36d:  jne    085da38b <+0x17b>
085da583 +0x373:  add    $0x64,%esp
085da586 +0x376:  pop    %ebx
085da587 +0x377:  pop    %ebp
085da588 +0x378:  ret
085da589 +0x379:  nop
```

## 反编译 C

```c
// PvP_Room::CalcuateVictoryPoint @ 0x85da210

/* PvP_Room::CalcuateVictoryPoint(int*, int) */

void __thiscall PvP_Room::CalcuateVictoryPoint(PvP_Room *this,int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  undefined1 local_2d;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(int *)(this + 4) == 1) || (*(int *)(this + 4) == 4)) {
    for (local_2c = 0; local_2c < 8; local_2c = local_2c + 1) {
      if (*(int *)(this + (local_2c + 0xc) * 4) != 0) {
        if ((*(int *)(this + (local_2c + 0xc) * 4) == 0) ||
           (cVar2 = IsPvpObserver(this,local_2c), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          for (local_28 = 0; (local_28 < param_2 && (param_1[local_28] != local_2c));
              local_28 = local_28 + 1) {
          }
          if (local_28 == param_2) {
            cMyTrace::cMyTrace(local_54,"void PvP_Room::CalcuateVictoryPoint(int*, int)",0xb7c,5);
            cMyTrace::operator()
                      (local_54,
                       "1 PvP_Room::CalcuateVictoryPoint Error, No Rank User Found i<%d> RankCount<%d>"
                       ,local_2c,param_2);
            return;
          }
          local_34 = local_28;
          iVar3 = PvpUserTable::GetWinTeam((PvpUserTable *)(this + 0x268));
          local_2d = iVar3 == local_2c;
          iVar3 = *(int *)(this + (local_2c + 0xc) * 4);
          uVar4 = CalculateVictoryPointOfSinglePlay
                            (this,local_34,(bool)local_2d,*(int *)(this + 0xbc));
          *(undefined4 *)(iVar3 + 0x796fc) = uVar4;
        }
      }
    }
  }
  else {
    for (local_24 = 0; local_24 < 8; local_24 = local_24 + 1) {
      if (*(int *)(this + (local_24 + 0xc) * 4) != 0) {
        if ((*(int *)(this + (local_24 + 0xc) * 4) == 0) ||
           (cVar2 = IsPvpObserver(this,local_24), cVar2 == '\0')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          local_20 = GetTeamIndex(this,*(CUser **)(this + (local_24 + 0xc) * 4));
          for (local_1c = 0; (local_1c < param_2 && (param_1[local_1c] != local_24));
              local_1c = local_1c + 1) {
          }
          if (local_1c == param_2) {
            cMyTrace::cMyTrace(local_44,"void PvP_Room::CalcuateVictoryPoint(int*, int)",0xb97,5);
            cMyTrace::operator()
                      (local_44,
                       "1 PvP_Room::CalcuateVictoryPoint Error, No Rank User Found i<%d> RankCount<%d>"
                       ,local_24,param_2);
            return;
          }
          local_18 = local_1c;
          local_34 = local_1c;
          local_14 = local_1c;
          while (local_14 = local_14 + -1, -1 < local_14) {
            local_10 = param_1[local_14];
            if ((*(int *)(this + (local_10 + 0xc) * 4) == 0) ||
               (cVar2 = IsPvpObserver(this,local_10), cVar2 == '\0')) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if ((!bVar1) &&
               (iVar3 = GetTeamIndex(this,*(CUser **)(this + (local_10 + 0xc) * 4)),
               iVar3 != local_20)) {
              local_34 = local_34 + -1;
            }
          }
          iVar3 = PvpUserTable::GetWinTeam((PvpUserTable *)(this + 0x268));
          local_2d = iVar3 == local_20;
          iVar3 = *(int *)(this + (local_24 + 0xc) * 4);
          uVar4 = CalculateVictoryPointOfTeamPlay
                            (this,local_34,(bool)local_2d,*(int *)(this + 0xbc) / 2);
          *(undefined4 *)(iVar3 + 0x796fc) = uVar4;
        }
      }
    }
  }
  return;
}
```
