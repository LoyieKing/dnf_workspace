# ArrangeMatchSequence

`_ZN15CRelayBattleMgr20ArrangeMatchSequenceEv`

`CRelayBattleMgr::ArrangeMatchSequence()`

| 类 | 地址 |
|---|---|
| `CRelayBattleMgr` | `0x085de8ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085de8ee  _ZN15CRelayBattleMgr20ArrangeMatchSequenceEv
#           CRelayBattleMgr::ArrangeMatchSequence()
# range [0x085de8ee, 0x085dea13]
085de8ee +0x000:  push   %ebp
085de8ef +0x001:  mov    %esp,%ebp
085de8f1 +0x003:  push   %esi
085de8f2 +0x004:  push   %ebx
085de8f3 +0x005:  sub    $0x30,%esp
085de8f6 +0x008:  movl   $0x1,-0x10(%ebp)
085de8fd +0x00f:  jmp    085de9fe <+0x110>
085de902 +0x014:  movl   $0x0,-0x1c(%ebp)
085de909 +0x01b:  lea    -0x15(%ebp),%eax
085de90c +0x01e:  mov    %eax,(%esp)
085de90f +0x021:  call   0808e716 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x586>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x586
085de914 +0x026:  movl   $0x0,-0x14(%ebp)
085de91b +0x02d:  lea    -0x15(%ebp),%eax
085de91e +0x030:  mov    %eax,0xc(%esp)
085de922 +0x034:  lea    -0x14(%ebp),%eax
085de925 +0x037:  mov    %eax,0x8(%esp)
085de929 +0x03b:  movl   $0x4,0x4(%esp)
085de931 +0x043:  lea    -0x28(%ebp),%eax
085de934 +0x046:  mov    %eax,(%esp)
085de937 +0x049:  call   085e017c <_GLOBAL__I__Z15IsDeathMatchMapiRb+0xa03>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0xa03
085de93c +0x04e:  jmp    085de959 <+0x6b>
085de93e +0x050:  mov    %edx,%ebx
085de940 +0x052:  mov    %eax,%esi
085de942 +0x054:  lea    -0x15(%ebp),%eax
085de945 +0x057:  mov    %eax,(%esp)
085de948 +0x05a:  call   08083fd2 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x215>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x215
085de94d +0x05f:  mov    %esi,%eax
085de94f +0x061:  mov    %ebx,%edx
085de951 +0x063:  mov    %eax,(%esp)
085de954 +0x066:  call   08ae3750 <_Unwind_Resume>
085de959 +0x06b:  lea    -0x15(%ebp),%eax
085de95c +0x06e:  mov    %eax,(%esp)
085de95f +0x071:  call   08083fd2 <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x215>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x215
085de964 +0x076:  mov    -0x10(%ebp),%eax
085de967 +0x079:  mov    %eax,0x4(%esp)
085de96b +0x07d:  mov    0x8(%ebp),%eax
085de96e +0x080:  mov    %eax,(%esp)
085de971 +0x083:  call   085de474 <_ZN15CRelayBattleMgr22GetChangeSequenceCountEi>  ; CRelayBattleMgr::GetChangeSequenceCount(int)
085de976 +0x088:  mov    %eax,-0xc(%ebp)
085de979 +0x08b:  mov    -0xc(%ebp),%eax
085de97c +0x08e:  mov    %eax,0x8(%esp)
085de980 +0x092:  lea    -0x28(%ebp),%eax
085de983 +0x095:  mov    %eax,0x4(%esp)
085de987 +0x099:  mov    0x8(%ebp),%eax
085de98a +0x09c:  mov    %eax,(%esp)
085de98d +0x09f:  call   085de5e4 <_ZN15CRelayBattleMgr26CreateRandomSequenceVectorERSt6vectorIiSaIiEEi>  ; CRelayBattleMgr::CreateRandomSequenceVector(std::vector<int, std::allocator<int> >&, int)
085de992 +0x0a4:  lea    -0x1c(%ebp),%eax
085de995 +0x0a7:  mov    %eax,0xc(%esp)
085de999 +0x0ab:  mov    -0x10(%ebp),%eax
085de99c +0x0ae:  mov    %eax,0x8(%esp)
085de9a0 +0x0b2:  lea    -0x28(%ebp),%eax
085de9a3 +0x0b5:  mov    %eax,0x4(%esp)
085de9a7 +0x0b9:  mov    0x8(%ebp),%eax
085de9aa +0x0bc:  mov    %eax,(%esp)
085de9ad +0x0bf:  call   085de790 <_ZN15CRelayBattleMgr21ArrangeChangeSequenceERSt6vectorIiSaIiEEiRi>  ; CRelayBattleMgr::ArrangeChangeSequence(std::vector<int, std::allocator<int> >&, int, int&)
085de9b2 +0x0c4:  lea    -0x1c(%ebp),%eax
085de9b5 +0x0c7:  mov    %eax,0xc(%esp)
085de9b9 +0x0cb:  mov    -0x10(%ebp),%eax
085de9bc +0x0ce:  mov    %eax,0x8(%esp)
085de9c0 +0x0d2:  lea    -0x28(%ebp),%eax
085de9c3 +0x0d5:  mov    %eax,0x4(%esp)
085de9c7 +0x0d9:  mov    0x8(%ebp),%eax
085de9ca +0x0dc:  mov    %eax,(%esp)
085de9cd +0x0df:  call   085de83e <_ZN15CRelayBattleMgr23ArrangeNoChangeSequenceERSt6vectorIiSaIiEEiRi>  ; CRelayBattleMgr::ArrangeNoChangeSequence(std::vector<int, std::allocator<int> >&, int, int&)
085de9d2 +0x0e4:  lea    -0x28(%ebp),%eax
085de9d5 +0x0e7:  mov    %eax,(%esp)
085de9d8 +0x0ea:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085de9dd +0x0ef:  addl   $0x1,-0x10(%ebp)
085de9e1 +0x0f3:  jmp    085de9fe <+0x110>
085de9e3 +0x0f5:  mov    %edx,%ebx
085de9e5 +0x0f7:  mov    %eax,%esi
085de9e7 +0x0f9:  lea    -0x28(%ebp),%eax
085de9ea +0x0fc:  mov    %eax,(%esp)
085de9ed +0x0ff:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
085de9f2 +0x104:  mov    %esi,%eax
085de9f4 +0x106:  mov    %ebx,%edx
085de9f6 +0x108:  mov    %eax,(%esp)
085de9f9 +0x10b:  call   08ae3750 <_Unwind_Resume>
085de9fe +0x110:  cmpl   $0x2,-0x10(%ebp)
085dea02 +0x114:  setle  %al
085dea05 +0x117:  test   %al,%al
085dea07 +0x119:  jne    085de902 <+0x14>
085dea0d +0x11f:  add    $0x30,%esp
085dea10 +0x122:  pop    %ebx
085dea11 +0x123:  pop    %esi
085dea12 +0x124:  pop    %ebp
085dea13 +0x125:  ret
```

## 反编译 C

```c
// CRelayBattleMgr::ArrangeMatchSequence @ 0x85de8ee

/* CRelayBattleMgr::ArrangeMatchSequence() */

void __thiscall CRelayBattleMgr::ArrangeMatchSequence(CRelayBattleMgr *this)

{
  vector<int,std::allocator<int>> local_2c [12];
  int local_20;
  allocator<int> local_19;
  int local_18;
  int local_14;
  int local_10;
  
  for (local_14 = 1; local_14 < 3; local_14 = local_14 + 1) {
    local_20 = 0;
    std::allocator<int>::allocator();
    local_18 = 0;
                    /* try { // try from 085de937 to 085de93b has its CatchHandler @ 085de93e */
    std::vector<int,std::allocator<int>>::vector(local_2c,4,&local_18,(allocator *)&local_19);
    std::allocator<int>::~allocator(&local_19);
    local_10 = GetChangeSequenceCount(this,local_14);
                    /* try { // try from 085de98d to 085de991 has its CatchHandler @ 085de9e3 */
    CreateRandomSequenceVector(this,(vector *)local_2c,local_10);
    ArrangeChangeSequence(this,(vector *)local_2c,local_14,&local_20);
    ArrangeNoChangeSequence(this,(vector *)local_2c,local_14,&local_20);
    std::vector<int,std::allocator<int>>::~vector(local_2c);
  }
  return;
}
```
