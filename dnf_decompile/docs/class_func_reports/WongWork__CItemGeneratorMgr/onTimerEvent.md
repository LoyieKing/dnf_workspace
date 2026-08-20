# onTimerEvent

`_ZN8WongWork17CItemGeneratorMgr12onTimerEventEi`

`WongWork::CItemGeneratorMgr::onTimerEvent(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemGeneratorMgr` | `0x08534322` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08534322  _ZN8WongWork17CItemGeneratorMgr12onTimerEventEi
#           WongWork::CItemGeneratorMgr::onTimerEvent(int)
# range [0x08534322, 0x08534455]
08534322 +0x000:  push   %ebp
08534323 +0x001:  mov    %esp,%ebp
08534325 +0x003:  push   %edi
08534326 +0x004:  push   %esi
08534327 +0x005:  push   %ebx
08534328 +0x006:  sub    $0x3c,%esp
0853432b +0x009:  cmpl   $0x6b,0xc(%ebp)
0853432f +0x00d:  jne    0853444d <+0x12b>
08534335 +0x013:  mov    0x8(%ebp),%eax
08534338 +0x016:  add    $0x60,%eax
0853433b +0x019:  mov    %eax,-0x24(%ebp)
0853433e +0x01c:  mov    0x8(%ebp),%eax
08534341 +0x01f:  add    $0x48,%eax
08534344 +0x022:  mov    %eax,%edi
08534346 +0x024:  mov    0x8(%ebp),%eax
08534349 +0x027:  add    $0x30,%eax
0853434c +0x02a:  mov    %eax,%esi
0853434e +0x02c:  mov    0x8(%ebp),%eax
08534351 +0x02f:  add    $0x18,%eax
08534354 +0x032:  mov    %eax,%ebx
08534356 +0x034:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0853435b +0x039:  mov    0x1b0(%eax),%eax
08534361 +0x03f:  mov    -0x24(%ebp),%edx
08534364 +0x042:  mov    %edx,0x14(%esp)
08534368 +0x046:  mov    %edi,0x10(%esp)
0853436c +0x04a:  mov    %esi,0xc(%esp)
08534370 +0x04e:  mov    %ebx,0x8(%esp)
08534374 +0x052:  movl   $0x0,0x4(%esp)
0853437c +0x05a:  mov    %eax,(%esp)
0853437f +0x05d:  call   0842894c <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_>  ; DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*)
08534384 +0x062:  mov    0x8(%ebp),%eax
08534387 +0x065:  add    $0xd8,%eax
0853438c +0x06a:  mov    %eax,-0x20(%ebp)
0853438f +0x06d:  mov    0x8(%ebp),%eax
08534392 +0x070:  add    $0xc0,%eax
08534397 +0x075:  mov    %eax,%edi
08534399 +0x077:  mov    0x8(%ebp),%eax
0853439c +0x07a:  add    $0xa8,%eax
085343a1 +0x07f:  mov    %eax,%esi
085343a3 +0x081:  mov    0x8(%ebp),%eax
085343a6 +0x084:  add    $0x90,%eax
085343ab +0x089:  mov    %eax,%ebx
085343ad +0x08b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085343b2 +0x090:  mov    0x1b0(%eax),%eax
085343b8 +0x096:  mov    -0x20(%ebp),%edx
085343bb +0x099:  mov    %edx,0x14(%esp)
085343bf +0x09d:  mov    %edi,0x10(%esp)
085343c3 +0x0a1:  mov    %esi,0xc(%esp)
085343c7 +0x0a5:  mov    %ebx,0x8(%esp)
085343cb +0x0a9:  movl   $0x1,0x4(%esp)
085343d3 +0x0b1:  mov    %eax,(%esp)
085343d6 +0x0b4:  call   0842894c <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_>  ; DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*)
085343db +0x0b9:  mov    0x8(%ebp),%eax
085343de +0x0bc:  add    $0x150,%eax
085343e3 +0x0c1:  mov    %eax,-0x1c(%ebp)
085343e6 +0x0c4:  mov    0x8(%ebp),%eax
085343e9 +0x0c7:  add    $0x138,%eax
085343ee +0x0cc:  mov    %eax,%edi
085343f0 +0x0ce:  mov    0x8(%ebp),%eax
085343f3 +0x0d1:  add    $0x120,%eax
085343f8 +0x0d6:  mov    %eax,%esi
085343fa +0x0d8:  mov    0x8(%ebp),%eax
085343fd +0x0db:  add    $0x108,%eax
08534402 +0x0e0:  mov    %eax,%ebx
08534404 +0x0e2:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08534409 +0x0e7:  mov    0x1b0(%eax),%eax
0853440f +0x0ed:  mov    -0x1c(%ebp),%edx
08534412 +0x0f0:  mov    %edx,0x14(%esp)
08534416 +0x0f4:  mov    %edi,0x10(%esp)
0853441a +0x0f8:  mov    %esi,0xc(%esp)
0853441e +0x0fc:  mov    %ebx,0x8(%esp)
08534422 +0x100:  movl   $0x2,0x4(%esp)
0853442a +0x108:  mov    %eax,(%esp)
0853442d +0x10b:  call   0842894c <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_>  ; DB_UpdateItemDropStatistics::makeRequest(int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*)
08534432 +0x110:  mov    0x8(%ebp),%eax
08534435 +0x113:  movl   $0x3c0,0x8(%esp)
0853443d +0x11b:  movl   $0x0,0x4(%esp)
08534445 +0x123:  mov    %eax,(%esp)
08534448 +0x126:  call   0807dcc0 <_init+0x5b8>
0853444d +0x12b:  add    $0x3c,%esp
08534450 +0x12e:  pop    %ebx
08534451 +0x12f:  pop    %esi
08534452 +0x130:  pop    %edi
08534453 +0x131:  pop    %ebp
08534454 +0x132:  ret
08534455 +0x133:  nop
```

## 反编译 C

```c
// WongWork::CItemGeneratorMgr::onTimerEvent @ 0x8534322

/* WongWork::CItemGeneratorMgr::onTimerEvent(int) */

void __thiscall WongWork::CItemGeneratorMgr::onTimerEvent(CItemGeneratorMgr *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x6b) {
    iVar1 = G_CEnvironment();
    DB_UpdateItemDropStatistics::makeRequest
              (*(int *)(iVar1 + 0x1b0),0,(uint *)(this + 0x18),(uint *)(this + 0x30),
               (uint *)(this + 0x48),(uint *)(this + 0x60));
    iVar1 = G_CEnvironment();
    DB_UpdateItemDropStatistics::makeRequest
              (*(int *)(iVar1 + 0x1b0),1,(uint *)(this + 0x90),(uint *)(this + 0xa8),
               (uint *)(this + 0xc0),(uint *)(this + 0xd8));
    iVar1 = G_CEnvironment();
    DB_UpdateItemDropStatistics::makeRequest
              (*(int *)(iVar1 + 0x1b0),2,(uint *)(this + 0x108),(uint *)(this + 0x120),
               (uint *)(this + 0x138),(uint *)(this + 0x150));
    memset(this,0,0x3c0);
  }
  return;
}
```
