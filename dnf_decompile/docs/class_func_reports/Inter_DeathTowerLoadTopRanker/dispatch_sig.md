# dispatch_sig

`_ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci`

`Inter_DeathTowerLoadTopRanker::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_DeathTowerLoadTopRanker` | `0x084d3364` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d3364  _ZN29Inter_DeathTowerLoadTopRanker12dispatch_sigEP5CUserPci
#           Inter_DeathTowerLoadTopRanker::dispatch_sig(CUser*, char*, int)
# range [0x084d3364, 0x084d347d]
084d3364 +0x000:  push   %ebp
084d3365 +0x001:  mov    %esp,%ebp
084d3367 +0x003:  push   %edi
084d3368 +0x004:  push   %esi
084d3369 +0x005:  push   %ebx
084d336a +0x006:  sub    $0x4c,%esp
084d336d +0x009:  mov    0x10(%ebp),%eax
084d3370 +0x00c:  mov    %eax,-0x24(%ebp)
084d3373 +0x00f:  mov    -0x24(%ebp),%eax
084d3376 +0x012:  movzbl 0x4(%eax),%eax
084d337a +0x016:  test   %al,%al
084d337c +0x018:  jne    084d33a9 <+0x45>
084d337e +0x01a:  movl   $0x1,-0x20(%ebp)
084d3385 +0x021:  jmp    084d339e <+0x3a>
084d3387 +0x023:  mov    -0x20(%ebp),%eax
084d338a +0x026:  mov    %eax,(%esp)
084d338d +0x029:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
084d3392 +0x02e:  mov    %eax,(%esp)
084d3395 +0x031:  call   08468594 <_ZN8WongWork18CDeathTowerRanking12resetRankingEv>  ; WongWork::CDeathTowerRanking::resetRanking()
084d339a +0x036:  addl   $0x1,-0x20(%ebp)
084d339e +0x03a:  cmpl   $0x4,-0x20(%ebp)
084d33a2 +0x03e:  setbe  %al
084d33a5 +0x041:  test   %al,%al
084d33a7 +0x043:  jne    084d3387 <+0x23>
084d33a9 +0x045:  movl   $0x0,-0x1c(%ebp)
084d33b0 +0x04c:  jmp    084d345e <+0xfa>
084d33b5 +0x051:  mov    -0x1c(%ebp),%eax
084d33b8 +0x054:  mov    -0x24(%ebp),%edx
084d33bb +0x057:  imul   $0x6c,%eax,%eax
084d33be +0x05a:  lea    (%edx,%eax,1),%eax
084d33c1 +0x05d:  add    $0x1010,%eax
084d33c6 +0x062:  mov    (%eax),%eax
084d33c8 +0x064:  mov    %eax,-0x30(%ebp)
084d33cb +0x067:  mov    -0x1c(%ebp),%eax
084d33ce +0x06a:  mov    -0x24(%ebp),%edx
084d33d1 +0x06d:  imul   $0x6c,%eax,%eax
084d33d4 +0x070:  lea    (%edx,%eax,1),%eax
084d33d7 +0x073:  add    $0x100c,%eax
084d33dc +0x078:  mov    (%eax),%edi
084d33de +0x07a:  mov    -0x1c(%ebp),%eax
084d33e1 +0x07d:  imul   $0x6c,%eax,%eax
084d33e4 +0x080:  add    $0xfa0,%eax
084d33e9 +0x085:  add    -0x24(%ebp),%eax
084d33ec +0x088:  add    $0x10,%eax
084d33ef +0x08b:  mov    %eax,-0x2c(%ebp)
084d33f2 +0x08e:  mov    -0x1c(%ebp),%edx
084d33f5 +0x091:  mov    -0x24(%ebp),%eax
084d33f8 +0x094:  movzwl 0x6(%eax,%edx,2),%eax
084d33fd +0x099:  movzwl %ax,%esi
084d3400 +0x09c:  mov    -0x1c(%ebp),%eax
084d3403 +0x09f:  mov    -0x24(%ebp),%edx
084d3406 +0x0a2:  imul   $0x6c,%eax,%eax
084d3409 +0x0a5:  lea    (%edx,%eax,1),%eax
084d340c +0x0a8:  add    $0xfa0,%eax
084d3411 +0x0ad:  movzwl 0xc(%eax),%eax
084d3415 +0x0b1:  movzwl %ax,%ebx
084d3418 +0x0b4:  mov    -0x1c(%ebp),%eax
084d341b +0x0b7:  mov    -0x24(%ebp),%edx
084d341e +0x0ba:  imul   $0x6c,%eax,%eax
084d3421 +0x0bd:  lea    (%edx,%eax,1),%eax
084d3424 +0x0c0:  add    $0xfa0,%eax
084d3429 +0x0c5:  movzwl 0xe(%eax),%eax
084d342d +0x0c9:  movzwl %ax,%eax
084d3430 +0x0cc:  mov    %eax,(%esp)
084d3433 +0x0cf:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
084d3438 +0x0d4:  mov    -0x30(%ebp),%edx
084d343b +0x0d7:  mov    %edx,0x14(%esp)
084d343f +0x0db:  mov    %edi,0x10(%esp)
084d3443 +0x0df:  mov    -0x2c(%ebp),%edx
084d3446 +0x0e2:  mov    %edx,0xc(%esp)
084d344a +0x0e6:  mov    %esi,0x8(%esp)
084d344e +0x0ea:  mov    %ebx,0x4(%esp)
084d3452 +0x0ee:  mov    %eax,(%esp)
084d3455 +0x0f1:  call   08468614 <_ZN8WongWork18CDeathTowerRanking12registRankerEjjPK30stDeathTowerRecordMemberInfo_tjj>  ; WongWork::CDeathTowerRanking::registRanker(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
084d345a +0x0f6:  addl   $0x1,-0x1c(%ebp)
084d345e +0x0fa:  mov    -0x24(%ebp),%eax
084d3461 +0x0fd:  mov    (%eax),%eax
084d3463 +0x0ff:  cmp    -0x1c(%ebp),%eax
084d3466 +0x102:  seta   %al
084d3469 +0x105:  test   %al,%al
084d346b +0x107:  jne    084d33b5 <+0x51>
084d3471 +0x10d:  mov    $0x0,%eax
084d3476 +0x112:  add    $0x4c,%esp
084d3479 +0x115:  pop    %ebx
084d347a +0x116:  pop    %esi
084d347b +0x117:  pop    %edi
084d347c +0x118:  pop    %ebp
084d347d +0x119:  ret
```

## 反编译 C

```c
// Inter_DeathTowerLoadTopRanker::dispatch_sig @ 0x84d3364

/* Inter_DeathTowerLoadTopRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DeathTowerLoadTopRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  CDeathTowerRanking *pCVar5;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(char *)(param_3 + 4) == '\0') {
    for (local_24 = 1; local_24 < 5; local_24 = local_24 + 1) {
      pCVar5 = (CDeathTowerRanking *)WongWork::CDeathTowerRanking::getRankTable(local_24);
      WongWork::CDeathTowerRanking::resetRanking(pCVar5);
    }
  }
  for (local_20 = 0; local_20 < *(uint *)param_3; local_20 = local_20 + 1) {
    uVar3 = *(uint *)(param_3 + local_20 * 0x6c + 0x1010);
    uVar4 = *(uint *)(param_3 + local_20 * 0x6c + 0x100c);
    uVar1 = *(ushort *)(param_3 + 6 + local_20 * 2);
    uVar2 = *(ushort *)(param_3 + local_20 * 0x6c + 0xfac);
    pCVar5 = (CDeathTowerRanking *)
             WongWork::CDeathTowerRanking::getRankTable
                       ((uint)*(ushort *)(param_3 + local_20 * 0x6c + 0xfae));
    WongWork::CDeathTowerRanking::registRanker
              (pCVar5,(uint)uVar2,(uint)uVar1,
               (stDeathTowerRecordMemberInfo_t *)(local_20 * 0x6c + param_3 + 0xfb0),uVar4,uVar3);
  }
  return 0;
}
```
