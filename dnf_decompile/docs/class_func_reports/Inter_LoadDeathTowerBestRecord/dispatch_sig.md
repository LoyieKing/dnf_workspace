# dispatch_sig

`_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci`

`Inter_LoadDeathTowerBestRecord::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadDeathTowerBestRecord` | `0x084d316a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d316a  _ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci
#           Inter_LoadDeathTowerBestRecord::dispatch_sig(CUser*, char*, int)
# range [0x084d316a, 0x084d328f]
084d316a +0x000:  push   %ebp
084d316b +0x001:  mov    %esp,%ebp
084d316d +0x003:  push   %edi
084d316e +0x004:  push   %esi
084d316f +0x005:  push   %ebx
084d3170 +0x006:  sub    $0x4c,%esp
084d3173 +0x009:  mov    0x10(%ebp),%eax
084d3176 +0x00c:  mov    %eax,-0x24(%ebp)
084d3179 +0x00f:  movl   $0x0,-0x20(%ebp)
084d3180 +0x016:  jmp    084d326f <+0x105>
084d3185 +0x01b:  movl   $0x0,-0x1c(%ebp)
084d318c +0x022:  jmp    084d325c <+0xf2>
084d3191 +0x027:  mov    -0x20(%ebp),%edx
084d3194 +0x02a:  mov    -0x1c(%ebp),%ecx
084d3197 +0x02d:  mov    -0x24(%ebp),%eax
084d319a +0x030:  imul   $0x6c,%ecx,%ecx
084d319d +0x033:  imul   $0x1b0,%edx,%edx
084d31a3 +0x039:  lea    (%ecx,%edx,1),%edx
084d31a6 +0x03c:  add    %edx,%eax
084d31a8 +0x03e:  add    $0x6c,%eax
084d31ab +0x041:  mov    (%eax),%eax
084d31ad +0x043:  test   %eax,%eax
084d31af +0x045:  je     084d3257 <+0xed>
084d31b5 +0x04b:  mov    -0x20(%ebp),%edx
084d31b8 +0x04e:  mov    -0x1c(%ebp),%ecx
084d31bb +0x051:  mov    -0x24(%ebp),%eax
084d31be +0x054:  imul   $0x6c,%ecx,%ecx
084d31c1 +0x057:  imul   $0x1b0,%edx,%edx
084d31c7 +0x05d:  lea    (%ecx,%edx,1),%edx
084d31ca +0x060:  add    %edx,%eax
084d31cc +0x062:  add    $0x70,%eax
084d31cf +0x065:  mov    (%eax),%eax
084d31d1 +0x067:  mov    %eax,-0x30(%ebp)
084d31d4 +0x06a:  mov    -0x20(%ebp),%edx
084d31d7 +0x06d:  mov    -0x1c(%ebp),%ecx
084d31da +0x070:  mov    -0x24(%ebp),%eax
084d31dd +0x073:  imul   $0x6c,%ecx,%ecx
084d31e0 +0x076:  imul   $0x1b0,%edx,%edx
084d31e6 +0x07c:  lea    (%ecx,%edx,1),%edx
084d31e9 +0x07f:  add    %edx,%eax
084d31eb +0x081:  add    $0x6c,%eax
084d31ee +0x084:  mov    (%eax),%edi
084d31f0 +0x086:  mov    -0x20(%ebp),%eax
084d31f3 +0x089:  mov    -0x1c(%ebp),%edx
084d31f6 +0x08c:  imul   $0x6c,%edx,%edx
084d31f9 +0x08f:  imul   $0x1b0,%eax,%eax
084d31ff +0x095:  lea    (%edx,%eax,1),%eax
084d3202 +0x098:  add    -0x24(%ebp),%eax
084d3205 +0x09b:  add    $0x10,%eax
084d3208 +0x09e:  mov    %eax,-0x2c(%ebp)
084d320b +0x0a1:  mov    -0x24(%ebp),%eax
084d320e +0x0a4:  mov    0x4(%eax),%esi
084d3211 +0x0a7:  mov    -0x20(%ebp),%edx
084d3214 +0x0aa:  mov    -0x24(%ebp),%eax
084d3217 +0x0ad:  imul   $0x1b0,%edx,%edx
084d321d +0x0b3:  movzwl 0xc(%edx,%eax,1),%eax
084d3222 +0x0b8:  movzwl %ax,%ebx
084d3225 +0x0bb:  mov    -0x1c(%ebp),%eax
084d3228 +0x0be:  add    $0x1,%eax
084d322b +0x0c1:  mov    %eax,(%esp)
084d322e +0x0c4:  call   082a774c <_GLOBAL__I__ZN4CLog5this_E+0x3b73>  ; global constructors keyed to CLog::this_+0x3b73
084d3233 +0x0c9:  mov    -0x30(%ebp),%edx
084d3236 +0x0cc:  mov    %edx,0x14(%esp)
084d323a +0x0d0:  mov    %edi,0x10(%esp)
084d323e +0x0d4:  mov    -0x2c(%ebp),%edx
084d3241 +0x0d7:  mov    %edx,0xc(%esp)
084d3245 +0x0db:  mov    %esi,0x8(%esp)
084d3249 +0x0df:  mov    %ebx,0x4(%esp)
084d324d +0x0e3:  mov    %eax,(%esp)
084d3250 +0x0e6:  call   08468914 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj>  ; WongWork::CDeathTowerRanking::registBestRecord(unsigned int, unsigned int, stDeathTowerRecordMemberInfo_t const*, unsigned int, unsigned int)
084d3255 +0x0eb:  jmp    084d3258 <+0xee>
084d3257 +0x0ed:  nop
084d3258 +0x0ee:  addl   $0x1,-0x1c(%ebp)
084d325c +0x0f2:  cmpl   $0x3,-0x1c(%ebp)
084d3260 +0x0f6:  setle  %al
084d3263 +0x0f9:  test   %al,%al
084d3265 +0x0fb:  jne    084d3191 <+0x27>
084d326b +0x101:  addl   $0x1,-0x20(%ebp)
084d326f +0x105:  mov    -0x24(%ebp),%eax
084d3272 +0x108:  mov    (%eax),%eax
084d3274 +0x10a:  cmp    -0x20(%ebp),%eax
084d3277 +0x10d:  seta   %al
084d327a +0x110:  test   %al,%al
084d327c +0x112:  jne    084d3185 <+0x1b>
084d3282 +0x118:  mov    $0x0,%eax
084d3287 +0x11d:  add    $0x4c,%esp
084d328a +0x120:  pop    %ebx
084d328b +0x121:  pop    %esi
084d328c +0x122:  pop    %edi
084d328d +0x123:  pop    %ebp
084d328e +0x124:  ret
084d328f +0x125:  nop
```

## 反编译 C

```c
// Inter_LoadDeathTowerBestRecord::dispatch_sig @ 0x84d316a

/* Inter_LoadDeathTowerBestRecord::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDeathTowerBestRecord::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  CDeathTowerRanking *this;
  undefined4 local_24;
  undefined4 local_20;
  
  for (local_24 = 0; local_24 < *(uint *)param_3; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if (*(int *)(param_3 + local_20 * 0x6c + local_24 * 0x1b0 + 0x6c) != 0) {
        uVar2 = *(uint *)(param_3 + local_20 * 0x6c + local_24 * 0x1b0 + 0x70);
        uVar3 = *(uint *)(param_3 + local_20 * 0x6c + local_24 * 0x1b0 + 0x6c);
        uVar4 = *(uint *)(param_3 + 4);
        uVar1 = *(ushort *)(local_24 * 0x1b0 + 0xc + param_3);
        this = (CDeathTowerRanking *)WongWork::CDeathTowerRanking::getRankTable(local_20 + 1);
        WongWork::CDeathTowerRanking::registBestRecord
                  (this,(uint)uVar1,uVar4,
                   (stDeathTowerRecordMemberInfo_t *)
                   (local_20 * 0x6c + local_24 * 0x1b0 + param_3 + 0x10),uVar3,uVar2);
      }
    }
  }
  return 0;
}
```
