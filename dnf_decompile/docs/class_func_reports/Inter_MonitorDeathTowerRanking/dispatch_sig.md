# dispatch_sig

`_ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci`

`Inter_MonitorDeathTowerRanking::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorDeathTowerRanking` | `0x084d3290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d3290  _ZN30Inter_MonitorDeathTowerRanking12dispatch_sigEP5CUserPci
#           Inter_MonitorDeathTowerRanking::dispatch_sig(CUser*, char*, int)
# range [0x084d3290, 0x084d3349]
084d3290 +0x00:  push   %ebp
084d3291 +0x01:  mov    %esp,%ebp
084d3293 +0x03:  push   %edi
084d3294 +0x04:  push   %esi
084d3295 +0x05:  push   %ebx
084d3296 +0x06:  sub    $0x2c,%esp
084d3299 +0x09:  mov    0x10(%ebp),%eax
084d329c +0x0c:  mov    %eax,-0x24(%ebp)
084d329f +0x0f:  movl   $0x0,-0x20(%ebp)
084d32a6 +0x16:  jmp    084d332b <+0x9b>
084d32ab +0x1b:  movl   $0x0,-0x1c(%ebp)
084d32b2 +0x22:  jmp    084d331a <+0x8a>
084d32b4 +0x24:  mov    -0x20(%ebp),%ecx
084d32b7 +0x27:  mov    -0x1c(%ebp),%edx
084d32ba +0x2a:  mov    -0x24(%ebp),%eax
084d32bd +0x2d:  shl    $0x2,%ecx
084d32c0 +0x30:  lea    (%ecx,%edx,1),%edx
084d32c3 +0x33:  add    $0x4,%edx
084d32c6 +0x36:  mov    0x2(%eax,%edx,4),%eax
084d32ca +0x3a:  test   %eax,%eax
084d32cc +0x3c:  je     084d3316 <+0x86>
084d32ce +0x3e:  mov    -0x20(%ebp),%ecx
084d32d1 +0x41:  mov    -0x1c(%ebp),%edx
084d32d4 +0x44:  mov    -0x24(%ebp),%eax
084d32d7 +0x47:  shl    $0x2,%ecx
084d32da +0x4a:  lea    (%ecx,%edx,1),%edx
084d32dd +0x4d:  add    $0x4,%edx
084d32e0 +0x50:  mov    0x2(%eax,%edx,4),%edi
084d32e4 +0x54:  mov    0xc(%ebp),%eax
084d32e7 +0x57:  mov    %eax,(%esp)
084d32ea +0x5a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d32ef +0x5f:  mov    %eax,%ebx
084d32f1 +0x61:  mov    -0x20(%ebp),%esi
084d32f4 +0x64:  mov    -0x1c(%ebp),%eax
084d32f7 +0x67:  add    $0x1,%eax
084d32fa +0x6a:  mov    %eax,(%esp)
084d32fd +0x6d:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
084d3302 +0x72:  mov    %edi,0xc(%esp)
084d3306 +0x76:  mov    %ebx,0x8(%esp)
084d330a +0x7a:  mov    %esi,0x4(%esp)
084d330e +0x7e:  mov    %eax,(%esp)
084d3311 +0x81:  call   084683da <_ZN8WongWork18CDeathTowerRanking13registRankingEjjj>  ; WongWork::CDeathTowerRanking::registRanking(unsigned int, unsigned int, unsigned int)
084d3316 +0x86:  addl   $0x1,-0x1c(%ebp)
084d331a +0x8a:  mov    -0x1c(%ebp),%eax
084d331d +0x8d:  cmp    $0x3,%eax
084d3320 +0x90:  setbe  %al
084d3323 +0x93:  test   %al,%al
084d3325 +0x95:  jne    084d32b4 <+0x24>
084d3327 +0x97:  addl   $0x1,-0x20(%ebp)
084d332b +0x9b:  mov    -0x20(%ebp),%eax
084d332e +0x9e:  cmp    $0x4,%eax
084d3331 +0xa1:  setbe  %al
084d3334 +0xa4:  test   %al,%al
084d3336 +0xa6:  jne    084d32ab <+0x1b>
084d333c +0xac:  mov    $0x0,%eax
084d3341 +0xb1:  add    $0x2c,%esp
084d3344 +0xb4:  pop    %ebx
084d3345 +0xb5:  pop    %esi
084d3346 +0xb6:  pop    %edi
084d3347 +0xb7:  pop    %ebp
084d3348 +0xb8:  ret
084d3349 +0xb9:  nop
```

## 反编译 C

```c
// Inter_MonitorDeathTowerRanking::dispatch_sig @ 0x84d3290

/* Inter_MonitorDeathTowerRanking::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorDeathTowerRanking::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  CDeathTowerRanking *this;
  undefined4 local_24;
  undefined4 local_20;
  
  for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if (*(int *)(param_3 + 2 + (local_24 * 4 + local_20 + 4) * 4) != 0) {
        uVar1 = *(uint *)(param_3 + 2 + (local_24 * 4 + local_20 + 4) * 4);
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        this = (CDeathTowerRanking *)WongWork::CDeathTowerRanking::getRankTable(local_20 + 1);
        WongWork::CDeathTowerRanking::registRanking(this,local_24,uVar2,uVar1);
      }
    }
  }
  return 0;
}
```
