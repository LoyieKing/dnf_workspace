# dispatch_sig

`_ZN24Inter_NoticePowerWarRank12dispatch_sigEP5CUserPci`

`Inter_NoticePowerWarRank::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticePowerWarRank` | `0x084d4f46` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d4f46  _ZN24Inter_NoticePowerWarRank12dispatch_sigEP5CUserPci
#           Inter_NoticePowerWarRank::dispatch_sig(CUser*, char*, int)
# range [0x084d4f46, 0x084d4fcd]
084d4f46 +0x00:  push   %ebp
084d4f47 +0x01:  mov    %esp,%ebp
084d4f49 +0x03:  push   %edi
084d4f4a +0x04:  push   %esi
084d4f4b +0x05:  push   %ebx
084d4f4c +0x06:  sub    $0x4c,%esp
084d4f4f +0x09:  mov    0x10(%ebp),%eax
084d4f52 +0x0c:  mov    %eax,-0x1c(%ebp)
084d4f55 +0x0f:  mov    -0x1c(%ebp),%eax
084d4f58 +0x12:  mov    0x12(%eax),%edi
084d4f5b +0x15:  mov    -0x1c(%ebp),%eax
084d4f5e +0x18:  mov    0xe(%eax),%esi
084d4f61 +0x1b:  mov    -0x1c(%ebp),%eax
084d4f64 +0x1e:  mov    0xa(%eax),%ebx
084d4f67 +0x21:  movl   $0x0,0xc(%esp)
084d4f6f +0x29:  movl   $0x368e,0x8(%esp)
084d4f77 +0x31:  movl   $&_ZZN24Inter_NoticePowerWarRank12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d4f7f +0x39:  lea    -0x2c(%ebp),%eax
084d4f82 +0x3c:  mov    %eax,(%esp)
084d4f85 +0x3f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d4f8a +0x44:  mov    %edi,0x10(%esp)
084d4f8e +0x48:  mov    %esi,0xc(%esp)
084d4f92 +0x4c:  mov    %ebx,0x8(%esp)
084d4f96 +0x50:  movl   $"RECV Packet_Notice_Power_War_Rank ranker 1:%d, 2:%d, 3:%d",0x4(%esp)
084d4f9e +0x58:  lea    -0x2c(%ebp),%eax
084d4fa1 +0x5b:  mov    %eax,(%esp)
084d4fa4 +0x5e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d4fa9 +0x63:  mov    -0x1c(%ebp),%eax
084d4fac +0x66:  lea    0xa(%eax),%edx
084d4faf +0x69:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084d4fb4 +0x6e:  mov    %edx,0x4(%esp)
084d4fb8 +0x72:  mov    %eax,(%esp)
084d4fbb +0x75:  call   0847ebec <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj>  ; CPowerManager::SetPowerWarUserRankingInfo(unsigned int*)
084d4fc0 +0x7a:  mov    $0x0,%eax
084d4fc5 +0x7f:  add    $0x4c,%esp
084d4fc8 +0x82:  pop    %ebx
084d4fc9 +0x83:  pop    %esi
084d4fca +0x84:  pop    %edi
084d4fcb +0x85:  pop    %ebp
084d4fcc +0x86:  ret
084d4fcd +0x87:  nop
```

## 反编译 C

```c
// Inter_NoticePowerWarRank::dispatch_sig @ 0x84d4f46

/* Inter_NoticePowerWarRank::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarRank::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  uVar1 = *(undefined4 *)(param_3 + 0x12);
  uVar2 = *(undefined4 *)(param_3 + 0xe);
  uVar3 = *(undefined4 *)(param_3 + 10);
  cMyTrace::cMyTrace(local_30,
                     "virtual int Inter_NoticePowerWarRank::dispatch_sig(CUser*, char*, int)",0x368e
                     ,0);
  cMyTrace::operator()
            (local_30,"RECV Packet_Notice_Power_War_Rank ranker 1:%d, 2:%d, 3:%d",uVar3,uVar2,uVar1)
  ;
  CPowerManager::SetPowerWarUserRankingInfo(GlobalData::s_power_manager,(uint *)(local_20 + 10));
  return 0;
}
```
