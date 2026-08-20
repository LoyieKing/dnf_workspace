# debugLog

`_ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv`

`advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const`

| 类 | 地址 |
|---|---|
| `advancealtar::ProcStage::ProcSummonObjectMs` | `0x0812d804` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812d804  _ZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEv
#           advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const
# range [0x0812d804, 0x0812daeb]
0812d804 +0x000:  push   %ebp
0812d805 +0x001:  mov    %esp,%ebp
0812d807 +0x003:  push   %edi
0812d808 +0x004:  push   %esi
0812d809 +0x005:  push   %ebx
0812d80a +0x006:  sub    $0x9c,%esp
0812d810 +0x00c:  mov    0x8(%ebp),%eax
0812d813 +0x00f:  lea    0x4(%eax),%edx
0812d816 +0x012:  lea    -0x54(%ebp),%eax
0812d819 +0x015:  mov    %edx,0x4(%esp)
0812d81d +0x019:  mov    %eax,(%esp)
0812d820 +0x01c:  call   081352aa <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xeb1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xeb1
0812d825 +0x021:  sub    $0x4,%esp
0812d828 +0x024:  movl   $0x0,-0x20(%ebp)
0812d82f +0x02b:  jmp    0812d951 <+0x14d>
0812d834 +0x030:  lea    -0x54(%ebp),%eax
0812d837 +0x033:  mov    %eax,(%esp)
0812d83a +0x036:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d83f +0x03b:  mov    (%eax),%eax
0812d841 +0x03d:  test   %eax,%eax
0812d843 +0x03f:  sete   %al
0812d846 +0x042:  test   %al,%al
0812d848 +0x044:  jne    0812d92f <+0x12b>
0812d84e +0x04a:  lea    -0x54(%ebp),%eax
0812d851 +0x04d:  mov    %eax,(%esp)
0812d854 +0x050:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d859 +0x055:  mov    (%eax),%eax
0812d85b +0x057:  mov    0x20(%eax),%eax
0812d85e +0x05a:  mov    %eax,-0x78(%ebp)
0812d861 +0x05d:  lea    -0x54(%ebp),%eax
0812d864 +0x060:  mov    %eax,(%esp)
0812d867 +0x063:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d86c +0x068:  mov    (%eax),%eax
0812d86e +0x06a:  mov    0x1c(%eax),%eax
0812d871 +0x06d:  mov    %eax,-0x74(%ebp)
0812d874 +0x070:  lea    -0x54(%ebp),%eax
0812d877 +0x073:  mov    %eax,(%esp)
0812d87a +0x076:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d87f +0x07b:  mov    (%eax),%eax
0812d881 +0x07d:  movzbl 0xc(%eax),%eax
0812d885 +0x081:  movzbl %al,%eax
0812d888 +0x084:  mov    %eax,-0x70(%ebp)
0812d88b +0x087:  lea    -0x54(%ebp),%eax
0812d88e +0x08a:  mov    %eax,(%esp)
0812d891 +0x08d:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d896 +0x092:  mov    (%eax),%eax
0812d898 +0x094:  movzwl 0x4(%eax),%eax
0812d89c +0x098:  cwtl
0812d89d +0x099:  mov    %eax,-0x6c(%ebp)
0812d8a0 +0x09c:  lea    -0x54(%ebp),%eax
0812d8a3 +0x09f:  mov    %eax,(%esp)
0812d8a6 +0x0a2:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d8ab +0x0a7:  mov    (%eax),%eax
0812d8ad +0x0a9:  mov    0x14(%eax),%edi
0812d8b0 +0x0ac:  lea    -0x54(%ebp),%eax
0812d8b3 +0x0af:  mov    %eax,(%esp)
0812d8b6 +0x0b2:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d8bb +0x0b7:  mov    (%eax),%eax
0812d8bd +0x0b9:  mov    0x8(%eax),%esi
0812d8c0 +0x0bc:  lea    -0x54(%ebp),%eax
0812d8c3 +0x0bf:  mov    %eax,(%esp)
0812d8c6 +0x0c2:  call   08135118 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xd1f>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xd1f
0812d8cb +0x0c7:  mov    (%eax),%eax
0812d8cd +0x0c9:  mov    (%eax),%ebx
0812d8cf +0x0cb:  movl   $0x0,0xc(%esp)
0812d8d7 +0x0d3:  movl   $0x140,0x8(%esp)
0812d8df +0x0db:  movl   $&_ZZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEvE19__PRETTY_FUNCTION__,0x4(%esp)
0812d8e7 +0x0e3:  lea    -0x4c(%ebp),%eax
0812d8ea +0x0e6:  mov    %eax,(%esp)
0812d8ed +0x0e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0812d8f2 +0x0ee:  mov    -0x78(%ebp),%eax
0812d8f5 +0x0f1:  mov    %eax,0x20(%esp)
0812d8f9 +0x0f5:  mov    -0x74(%ebp),%eax
0812d8fc +0x0f8:  mov    %eax,0x1c(%esp)
0812d900 +0x0fc:  mov    -0x70(%ebp),%eax
0812d903 +0x0ff:  mov    %eax,0x18(%esp)
0812d907 +0x103:  mov    -0x6c(%ebp),%eax
0812d90a +0x106:  mov    %eax,0x14(%esp)
0812d90e +0x10a:  mov    %edi,0x10(%esp)
0812d912 +0x10e:  mov    %esi,0xc(%esp)
0812d916 +0x112:  mov    %ebx,0x8(%esp)
0812d91a +0x116:  movl   $"\tVecotr Ms = %06d ActionDefineId=%d ObjectId=%d spawndId=%d isDead=%d ObjectType=%d ObjectIndex=%d\n",0x4(%esp)
0812d922 +0x11e:  lea    -0x4c(%ebp),%eax
0812d925 +0x121:  mov    %eax,(%esp)
0812d928 +0x124:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812d92d +0x129:  jmp    0812d930 <+0x12c>
0812d92f +0x12b:  nop
0812d930 +0x12c:  lea    -0x3c(%ebp),%eax
0812d933 +0x12f:  movl   $0x0,0x8(%esp)
0812d93b +0x137:  lea    -0x54(%ebp),%edx
0812d93e +0x13a:  mov    %edx,0x4(%esp)
0812d942 +0x13e:  mov    %eax,(%esp)
0812d945 +0x141:  call   081350e4 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xceb>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xceb
0812d94a +0x146:  sub    $0x4,%esp
0812d94d +0x149:  addl   $0x1,-0x20(%ebp)
0812d951 +0x14d:  mov    0x8(%ebp),%eax
0812d954 +0x150:  lea    0x4(%eax),%edx
0812d957 +0x153:  lea    -0x50(%ebp),%eax
0812d95a +0x156:  mov    %edx,0x4(%esp)
0812d95e +0x15a:  mov    %eax,(%esp)
0812d961 +0x15d:  call   081352d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xedd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xedd
0812d966 +0x162:  sub    $0x4,%esp
0812d969 +0x165:  lea    -0x50(%ebp),%eax
0812d96c +0x168:  mov    %eax,0x4(%esp)
0812d970 +0x16c:  lea    -0x54(%ebp),%eax
0812d973 +0x16f:  mov    %eax,(%esp)
0812d976 +0x172:  call   08135302 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xf09>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xf09
0812d97b +0x177:  test   %al,%al
0812d97d +0x179:  jne    0812d834 <+0x30>
0812d983 +0x17f:  mov    0x8(%ebp),%eax
0812d986 +0x182:  lea    0x10(%eax),%edx
0812d989 +0x185:  lea    -0x58(%ebp),%eax
0812d98c +0x188:  mov    %edx,0x4(%esp)
0812d990 +0x18c:  mov    %eax,(%esp)
0812d993 +0x18f:  call   0813532e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xf35>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xf35
0812d998 +0x194:  sub    $0x4,%esp
0812d99b +0x197:  movl   $0x0,-0x1c(%ebp)
0812d9a2 +0x19e:  jmp    0812daae <+0x2aa>
0812d9a7 +0x1a3:  lea    -0x58(%ebp),%eax
0812d9aa +0x1a6:  mov    %eax,(%esp)
0812d9ad +0x1a9:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812d9b2 +0x1ae:  mov    0x4(%eax),%eax
0812d9b5 +0x1b1:  mov    0x20(%eax),%eax
0812d9b8 +0x1b4:  mov    %eax,-0x68(%ebp)
0812d9bb +0x1b7:  lea    -0x58(%ebp),%eax
0812d9be +0x1ba:  mov    %eax,(%esp)
0812d9c1 +0x1bd:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812d9c6 +0x1c2:  mov    0x4(%eax),%eax
0812d9c9 +0x1c5:  mov    0x1c(%eax),%eax
0812d9cc +0x1c8:  mov    %eax,-0x64(%ebp)
0812d9cf +0x1cb:  lea    -0x58(%ebp),%eax
0812d9d2 +0x1ce:  mov    %eax,(%esp)
0812d9d5 +0x1d1:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812d9da +0x1d6:  mov    0x4(%eax),%eax
0812d9dd +0x1d9:  movzbl 0xc(%eax),%eax
0812d9e1 +0x1dd:  movzbl %al,%eax
0812d9e4 +0x1e0:  mov    %eax,-0x60(%ebp)
0812d9e7 +0x1e3:  lea    -0x58(%ebp),%eax
0812d9ea +0x1e6:  mov    %eax,(%esp)
0812d9ed +0x1e9:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812d9f2 +0x1ee:  mov    0x4(%eax),%eax
0812d9f5 +0x1f1:  movzwl 0x4(%eax),%eax
0812d9f9 +0x1f5:  cwtl
0812d9fa +0x1f6:  mov    %eax,-0x5c(%ebp)
0812d9fd +0x1f9:  lea    -0x58(%ebp),%eax
0812da00 +0x1fc:  mov    %eax,(%esp)
0812da03 +0x1ff:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812da08 +0x204:  mov    0x4(%eax),%eax
0812da0b +0x207:  mov    0x14(%eax),%edi
0812da0e +0x20a:  lea    -0x58(%ebp),%eax
0812da11 +0x20d:  mov    %eax,(%esp)
0812da14 +0x210:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812da19 +0x215:  mov    0x4(%eax),%eax
0812da1c +0x218:  mov    0x8(%eax),%esi
0812da1f +0x21b:  lea    -0x58(%ebp),%eax
0812da22 +0x21e:  mov    %eax,(%esp)
0812da25 +0x221:  call   081353cc <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xfd3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xfd3
0812da2a +0x226:  mov    0x4(%eax),%eax
0812da2d +0x229:  mov    (%eax),%ebx
0812da2f +0x22b:  movl   $0x0,0xc(%esp)
0812da37 +0x233:  movl   $0x14d,0x8(%esp)
0812da3f +0x23b:  movl   $&_ZZNK12advancealtar9ProcStage18ProcSummonObjectMs8debugLogEvE19__PRETTY_FUNCTION__,0x4(%esp)
0812da47 +0x243:  lea    -0x34(%ebp),%eax
0812da4a +0x246:  mov    %eax,(%esp)
0812da4d +0x249:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0812da52 +0x24e:  mov    -0x68(%ebp),%eax
0812da55 +0x251:  mov    %eax,0x20(%esp)
0812da59 +0x255:  mov    -0x64(%ebp),%eax
0812da5c +0x258:  mov    %eax,0x1c(%esp)
0812da60 +0x25c:  mov    -0x60(%ebp),%eax
0812da63 +0x25f:  mov    %eax,0x18(%esp)
0812da67 +0x263:  mov    -0x5c(%ebp),%eax
0812da6a +0x266:  mov    %eax,0x14(%esp)
0812da6e +0x26a:  mov    %edi,0x10(%esp)
0812da72 +0x26e:  mov    %esi,0xc(%esp)
0812da76 +0x272:  mov    %ebx,0x8(%esp)
0812da7a +0x276:  movl   $"\tMap Ms = %06d ActionDefineId=%d ObjectId=%d spawndId=%d isDead=%d ObjectType=%d ObjectIndex=%d\n",0x4(%esp)
0812da82 +0x27e:  lea    -0x34(%ebp),%eax
0812da85 +0x281:  mov    %eax,(%esp)
0812da88 +0x284:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0812da8d +0x289:  lea    -0x24(%ebp),%eax
0812da90 +0x28c:  movl   $0x0,0x8(%esp)
0812da98 +0x294:  lea    -0x58(%ebp),%edx
0812da9b +0x297:  mov    %edx,0x4(%esp)
0812da9f +0x29b:  mov    %eax,(%esp)
0812daa2 +0x29e:  call   0813538e <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xf95>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xf95
0812daa7 +0x2a3:  sub    $0x4,%esp
0812daaa +0x2a6:  addl   $0x1,-0x1c(%ebp)
0812daae +0x2aa:  mov    0x8(%ebp),%eax
0812dab1 +0x2ad:  lea    0x10(%eax),%edx
0812dab4 +0x2b0:  lea    -0x38(%ebp),%eax
0812dab7 +0x2b3:  mov    %edx,0x4(%esp)
0812dabb +0x2b7:  mov    %eax,(%esp)
0812dabe +0x2ba:  call   08135354 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xf5b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xf5b
0812dac3 +0x2bf:  sub    $0x4,%esp
0812dac6 +0x2c2:  lea    -0x38(%ebp),%eax
0812dac9 +0x2c5:  mov    %eax,0x4(%esp)
0812dacd +0x2c9:  lea    -0x58(%ebp),%eax
0812dad0 +0x2cc:  mov    %eax,(%esp)
0812dad3 +0x2cf:  call   0813537a <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0xf81>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0xf81
0812dad8 +0x2d4:  test   %al,%al
0812dada +0x2d6:  jne    0812d9a7 <+0x1a3>
0812dae0 +0x2dc:  lea    -0xc(%ebp),%esp
0812dae3 +0x2df:  add    $0x0,%esp
0812dae6 +0x2e2:  pop    %ebx
0812dae7 +0x2e3:  pop    %esi
0812dae8 +0x2e4:  pop    %edi
0812dae9 +0x2e5:  pop    %ebp
0812daea +0x2e6:  ret
0812daeb +0x2e7:  nop
```

## 反编译 C

```c
// advancealtar::ProcStage::ProcSummonObjectMs::debugLog @ 0x812d804

/* advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const */

void advancealtar::ProcStage::ProcSummonObjectMs::debugLog(void)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  local_5c [4];
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_58 [4];
  __normal_iterator local_54 [4];
  cMyTrace local_50 [16];
  __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
  local_40 [4];
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  local_3c [4];
  cMyTrace local_38 [16];
  _Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>> local_28 [4];
  int local_24;
  int local_20;
  
  std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::begin
            ();
  local_24 = 0;
  while( true ) {
    std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>::end
              ();
    bVar8 = __gnu_cxx::operator!=(local_58,local_54);
    if (!bVar8) break;
    piVar10 = (int *)__gnu_cxx::
                     __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                     ::operator*(local_58);
    if (*piVar10 != 0) {
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar3 = *(undefined4 *)(*piVar10 + 0x20);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar4 = *(undefined4 *)(*piVar10 + 0x1c);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      bVar1 = *(byte *)(*piVar10 + 0xc);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      sVar2 = *(short *)(*piVar10 + 4);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar5 = *(undefined4 *)(*piVar10 + 0x14);
      piVar10 = (int *)__gnu_cxx::
                       __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                       ::operator*(local_58);
      uVar6 = *(undefined4 *)(*piVar10 + 8);
      puVar11 = (undefined4 *)
                __gnu_cxx::
                __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
                ::operator*(local_58);
      uVar7 = *(undefined4 *)*puVar11;
      cMyTrace::cMyTrace(local_50,
                         "void advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const",0x140,
                         0);
      cMyTrace::operator()
                (local_50,
                 "\tVecotr Ms = %06d ActionDefineId=%d ObjectId=%d spawndId=%d isDead=%d ObjectType=%d ObjectIndex=%d\n"
                 ,uVar7,uVar6,uVar5,(int)sVar2,(uint)bVar1,uVar4,uVar3);
    }
    __gnu_cxx::
    __normal_iterator<advancealtar::_SummonObjectMs*const*,std::vector<advancealtar::_SummonObjectMs*,std::allocator<advancealtar::_SummonObjectMs*>>>
    ::operator++(local_40,(int)local_58);
    local_24 = local_24 + 1;
  }
  std::
  map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
  ::begin(local_5c);
  local_20 = 0;
  while( true ) {
    std::
    map<short,advancealtar::_SummonObjectMs*,std::less<short>,std::allocator<std::pair<short_const,advancealtar::_SummonObjectMs*>>>
    ::end(local_3c);
    cVar9 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
            operator!=((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                        *)local_5c,(_Rb_tree_const_iterator *)local_3c);
    if (cVar9 == '\0') break;
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar3 = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x20);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar4 = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x1c);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    bVar1 = *(byte *)(*(int *)(iVar12 + 4) + 0xc);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    sVar2 = *(short *)(*(int *)(iVar12 + 4) + 4);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar5 = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x14);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar6 = *(undefined4 *)(*(int *)(iVar12 + 4) + 8);
    iVar12 = std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::
             operator->((_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>
                         *)local_5c);
    uVar7 = **(undefined4 **)(iVar12 + 4);
    cMyTrace::cMyTrace(local_38,"void advancealtar::ProcStage::ProcSummonObjectMs::debugLog() const"
                       ,0x14d,0);
    cMyTrace::operator()
              (local_38,
               "\tMap Ms = %06d ActionDefineId=%d ObjectId=%d spawndId=%d isDead=%d ObjectType=%d ObjectIndex=%d\n"
               ,uVar7,uVar6,uVar5,(int)sVar2,(uint)bVar1,uVar4,uVar3);
    std::_Rb_tree_const_iterator<std::pair<short_const,advancealtar::_SummonObjectMs*>>::operator++
              (local_28,(int)local_5c);
    local_20 = local_20 + 1;
  }
  return;
}
```
