# dispatch_sig

`_ZN32TimerUpdateCompoundEmblemStatics12dispatch_sigEiij`

`TimerUpdateCompoundEmblemStatics::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerUpdateCompoundEmblemStatics` | `0x08639174` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639174  _ZN32TimerUpdateCompoundEmblemStatics12dispatch_sigEiij
#           TimerUpdateCompoundEmblemStatics::dispatch_sig(int, int, unsigned int)
# range [0x08639174, 0x08639399]
08639174 +0x000:  push   %ebp
08639175 +0x001:  mov    %esp,%ebp
08639177 +0x003:  push   %edi
08639178 +0x004:  push   %esi
08639179 +0x005:  push   %ebx
0863917a +0x006:  sub    $0x6c,%esp
0863917d +0x009:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
08639182 +0x00e:  mov    %eax,(%esp)
08639185 +0x011:  call   0863bcf8 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x209>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x209
0863918a +0x016:  test   %eax,%eax
0863918c +0x018:  setne  %al
0863918f +0x01b:  test   %al,%al
08639191 +0x01d:  je     0863937a <+0x206>
08639197 +0x023:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
0863919c +0x028:  movl   $0x6,0x4(%esp)
086391a4 +0x030:  mov    %eax,(%esp)
086391a7 +0x033:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086391ac +0x038:  mov    %eax,-0x48(%ebp)
086391af +0x03b:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086391b4 +0x040:  movl   $0x5,0x4(%esp)
086391bc +0x048:  mov    %eax,(%esp)
086391bf +0x04b:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086391c4 +0x050:  mov    %eax,-0x44(%ebp)
086391c7 +0x053:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086391cc +0x058:  movl   $0x4,0x4(%esp)
086391d4 +0x060:  mov    %eax,(%esp)
086391d7 +0x063:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086391dc +0x068:  mov    %eax,-0x40(%ebp)
086391df +0x06b:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086391e4 +0x070:  movl   $0x3,0x4(%esp)
086391ec +0x078:  mov    %eax,(%esp)
086391ef +0x07b:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086391f4 +0x080:  mov    %eax,-0x3c(%ebp)
086391f7 +0x083:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086391fc +0x088:  movl   $0x2,0x4(%esp)
08639204 +0x090:  mov    %eax,(%esp)
08639207 +0x093:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
0863920c +0x098:  mov    %eax,%edi
0863920e +0x09a:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
08639213 +0x09f:  movl   $0x1,0x4(%esp)
0863921b +0x0a7:  mov    %eax,(%esp)
0863921e +0x0aa:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
08639223 +0x0af:  mov    %eax,%esi
08639225 +0x0b1:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
0863922a +0x0b6:  movl   $0x0,0x4(%esp)
08639232 +0x0be:  mov    %eax,(%esp)
08639235 +0x0c1:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
0863923a +0x0c6:  mov    %eax,%ebx
0863923c +0x0c8:  movl   $0x0,0xc(%esp)
08639244 +0x0d0:  movl   $0x11aa,0x8(%esp)
0863924c +0x0d8:  movl   $&_ZZN32TimerUpdateCompoundEmblemStatics12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08639254 +0x0e0:  lea    -0x28(%ebp),%eax
08639257 +0x0e3:  mov    %eax,(%esp)
0863925a +0x0e6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863925f +0x0eb:  mov    -0x48(%ebp),%eax
08639262 +0x0ee:  mov    %eax,0x20(%esp)
08639266 +0x0f2:  mov    -0x44(%ebp),%edx
08639269 +0x0f5:  mov    %edx,0x1c(%esp)
0863926d +0x0f9:  mov    -0x40(%ebp),%eax
08639270 +0x0fc:  mov    %eax,0x18(%esp)
08639274 +0x100:  mov    -0x3c(%ebp),%edx
08639277 +0x103:  mov    %edx,0x14(%esp)
0863927b +0x107:  mov    %edi,0x10(%esp)
0863927f +0x10b:  mov    %esi,0xc(%esp)
08639283 +0x10f:  mov    %ebx,0x8(%esp)
08639287 +0x113:  movl   $"DNF Compound Emblem Statistics (grade 0 : %d)(grade 1 : %d)(grade 2 : %d)(grade 3 : %d)(grade 4 : %d)(grade 5 : %d)(grade 6 : %d)",0x4(%esp)
0863928f +0x11b:  lea    -0x28(%ebp),%eax
08639292 +0x11e:  mov    %eax,(%esp)
08639295 +0x121:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863929a +0x126:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
0863929f +0x12b:  movl   $0x6,0x4(%esp)
086392a7 +0x133:  mov    %eax,(%esp)
086392aa +0x136:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086392af +0x13b:  mov    %eax,%esi
086392b1 +0x13d:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086392b6 +0x142:  movl   $0x5,0x4(%esp)
086392be +0x14a:  mov    %eax,(%esp)
086392c1 +0x14d:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086392c6 +0x152:  mov    %eax,-0x38(%ebp)
086392c9 +0x155:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086392ce +0x15a:  movl   $0x4,0x4(%esp)
086392d6 +0x162:  mov    %eax,(%esp)
086392d9 +0x165:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086392de +0x16a:  mov    %eax,-0x34(%ebp)
086392e1 +0x16d:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086392e6 +0x172:  movl   $0x3,0x4(%esp)
086392ee +0x17a:  mov    %eax,(%esp)
086392f1 +0x17d:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
086392f6 +0x182:  mov    %eax,-0x30(%ebp)
086392f9 +0x185:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
086392fe +0x18a:  movl   $0x2,0x4(%esp)
08639306 +0x192:  mov    %eax,(%esp)
08639309 +0x195:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
0863930e +0x19a:  mov    %eax,-0x2c(%ebp)
08639311 +0x19d:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
08639316 +0x1a2:  movl   $0x1,0x4(%esp)
0863931e +0x1aa:  mov    %eax,(%esp)
08639321 +0x1ad:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
08639326 +0x1b2:  mov    %eax,%edi
08639328 +0x1b4:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
0863932d +0x1b9:  movl   $0x0,0x4(%esp)
08639335 +0x1c1:  mov    %eax,(%esp)
08639338 +0x1c4:  call   0863bcea <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1fb>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1fb
0863933d +0x1c9:  mov    %eax,%ebx
0863933f +0x1cb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08639344 +0x1d0:  mov    0x1b0(%eax),%eax
0863934a +0x1d6:  mov    %esi,0x1c(%esp)
0863934e +0x1da:  mov    -0x38(%ebp),%edx
08639351 +0x1dd:  mov    %edx,0x18(%esp)
08639355 +0x1e1:  mov    -0x34(%ebp),%edx
08639358 +0x1e4:  mov    %edx,0x14(%esp)
0863935c +0x1e8:  mov    -0x30(%ebp),%edx
0863935f +0x1eb:  mov    %edx,0x10(%esp)
08639363 +0x1ef:  mov    -0x2c(%ebp),%edx
08639366 +0x1f2:  mov    %edx,0xc(%esp)
0863936a +0x1f6:  mov    %edi,0x8(%esp)
0863936e +0x1fa:  mov    %ebx,0x4(%esp)
08639372 +0x1fe:  mov    %eax,(%esp)
08639375 +0x201:  call   08439dec <_ZN30DB_UpdateCompoundEmblemStatics11makeRequestEijjjjjjj>  ; DB_UpdateCompoundEmblemStatics::makeRequest(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int)
0863937a +0x206:  call   0863939a <_ZN32TimerUpdateCompoundEmblemStatics15registNextTimerEv>  ; TimerUpdateCompoundEmblemStatics::registNextTimer()
0863937f +0x20b:  call   0860fd6f <_Z26getCompoundEmblemStatisticv>  ; getCompoundEmblemStatistic()
08639384 +0x210:  mov    %eax,(%esp)
08639387 +0x213:  call   0863bd2e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x23f>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x23f
0863938c +0x218:  mov    $0x1,%eax
08639391 +0x21d:  add    $0x6c,%esp
08639394 +0x220:  pop    %ebx
08639395 +0x221:  pop    %esi
08639396 +0x222:  pop    %edi
08639397 +0x223:  pop    %ebp
08639398 +0x224:  ret
08639399 +0x225:  nop
```

## 反编译 C

```c
// TimerUpdateCompoundEmblemStatics::dispatch_sig @ 0x8639174

/* TimerUpdateCompoundEmblemStatics::dispatch_sig(int, int, unsigned int) */

undefined4 TimerUpdateCompoundEmblemStatics::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CCompoundEmblemStatistic *pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  cMyTrace local_2c [28];
  
  pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
  iVar2 = CCompoundEmblemStatistic::getTotalCount(pCVar1);
  if (iVar2 != 0) {
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar3 = CCompoundEmblemStatistic::getGradeCount(pCVar1,6);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar4 = CCompoundEmblemStatistic::getGradeCount(pCVar1,5);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar5 = CCompoundEmblemStatistic::getGradeCount(pCVar1,4);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar6 = CCompoundEmblemStatistic::getGradeCount(pCVar1,3);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar7 = CCompoundEmblemStatistic::getGradeCount(pCVar1,2);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar8 = CCompoundEmblemStatistic::getGradeCount(pCVar1,1);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar9 = CCompoundEmblemStatistic::getGradeCount(pCVar1,0);
    cMyTrace::cMyTrace(local_2c,
                       "virtual bool TimerUpdateCompoundEmblemStatics::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x11aa,0);
    cMyTrace::operator()
              (local_2c,
               "DNF Compound Emblem Statistics (grade 0 : %d)(grade 1 : %d)(grade 2 : %d)(grade 3 : %d)(grade 4 : %d)(grade 5 : %d)(grade 6 : %d)"
               ,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar10 = CCompoundEmblemStatistic::getGradeCount(pCVar1,6);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar11 = CCompoundEmblemStatistic::getGradeCount(pCVar1,5);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar12 = CCompoundEmblemStatistic::getGradeCount(pCVar1,4);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar13 = CCompoundEmblemStatistic::getGradeCount(pCVar1,3);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar14 = CCompoundEmblemStatistic::getGradeCount(pCVar1,2);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar15 = CCompoundEmblemStatistic::getGradeCount(pCVar1,1);
    pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
    uVar16 = CCompoundEmblemStatistic::getGradeCount(pCVar1,0);
    iVar2 = G_CEnvironment();
    DB_UpdateCompoundEmblemStatics::makeRequest
              (*(int *)(iVar2 + 0x1b0),uVar16,uVar15,uVar14,uVar13,uVar12,uVar11,uVar10);
  }
  registNextTimer();
  pCVar1 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
  CCompoundEmblemStatistic::clear(pCVar1);
  return 1;
}
```
