# MinusInterval

`_ZN11IntervalSet13MinusIntervalERK8Interval`

`IntervalSet::MinusInterval(Interval const&)`

| 类 | 地址 |
|---|---|
| `IntervalSet` | `0x08573394` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08573394  _ZN11IntervalSet13MinusIntervalERK8Interval
#           IntervalSet::MinusInterval(Interval const&)
# range [0x08573394, 0x085735db]
08573394 +0x000:  push   %ebp
08573395 +0x001:  mov    %esp,%ebp
08573397 +0x003:  sub    $0x58,%esp
0857339a +0x006:  lea    -0x14(%ebp),%eax
0857339d +0x009:  mov    %eax,(%esp)
085733a0 +0x00c:  call   085760d4 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x298>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x298
085733a5 +0x011:  lea    -0x1c(%ebp),%eax
085733a8 +0x014:  mov    %eax,(%esp)
085733ab +0x017:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
085733b0 +0x01c:  lea    -0x24(%ebp),%eax
085733b3 +0x01f:  mov    %eax,(%esp)
085733b6 +0x022:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
085733bb +0x027:  lea    -0x2c(%ebp),%eax
085733be +0x02a:  mov    %eax,(%esp)
085733c1 +0x02d:  call   08575e58 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x1c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x1c
085733c6 +0x032:  mov    0x8(%ebp),%edx
085733c9 +0x035:  lea    -0x3c(%ebp),%eax
085733cc +0x038:  mov    %edx,0x4(%esp)
085733d0 +0x03c:  mov    %eax,(%esp)
085733d3 +0x03f:  call   085760e2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2a6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2a6
085733d8 +0x044:  sub    $0x4,%esp
085733db +0x047:  mov    -0x3c(%ebp),%eax
085733de +0x04a:  mov    %eax,-0x14(%ebp)
085733e1 +0x04d:  jmp    085735ab <+0x217>
085733e6 +0x052:  lea    -0x14(%ebp),%eax
085733e9 +0x055:  mov    %eax,(%esp)
085733ec +0x058:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
085733f1 +0x05d:  mov    (%eax),%eax
085733f3 +0x05f:  mov    %eax,-0x2c(%ebp)
085733f6 +0x062:  lea    -0x14(%ebp),%eax
085733f9 +0x065:  mov    %eax,(%esp)
085733fc +0x068:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
08573401 +0x06d:  mov    0x4(%eax),%eax
08573404 +0x070:  mov    %eax,-0x28(%ebp)
08573407 +0x073:  mov    0xc(%ebp),%eax
0857340a +0x076:  mov    %eax,0x8(%esp)
0857340e +0x07a:  lea    -0x2c(%ebp),%eax
08573411 +0x07d:  mov    %eax,0x4(%esp)
08573415 +0x081:  lea    -0x1c(%ebp),%eax
08573418 +0x084:  mov    %eax,(%esp)
0857341b +0x087:  call   08573060 <_Z17IntersectIntervalP8IntervalRKS_S2_>  ; IntersectInterval(Interval*, Interval const&, Interval const&)
08573420 +0x08c:  test   %al,%al
08573422 +0x08e:  je     085735a0 <+0x20c>
08573428 +0x094:  mov    -0x1c(%ebp),%edx
0857342b +0x097:  mov    -0x2c(%ebp),%eax
0857342e +0x09a:  cmp    %eax,%edx
08573430 +0x09c:  jne    08573463 <+0xcf>
08573432 +0x09e:  mov    -0x18(%ebp),%edx
08573435 +0x0a1:  mov    -0x28(%ebp),%eax
08573438 +0x0a4:  cmp    %eax,%edx
0857343a +0x0a6:  jne    08573463 <+0xcf>
0857343c +0x0a8:  mov    0x8(%ebp),%edx
0857343f +0x0ab:  lea    -0x3c(%ebp),%eax
08573442 +0x0ae:  mov    -0x14(%ebp),%ecx
08573445 +0x0b1:  mov    %ecx,0x8(%esp)
08573449 +0x0b5:  mov    %edx,0x4(%esp)
0857344d +0x0b9:  mov    %eax,(%esp)
08573450 +0x0bc:  call   08576162 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x326>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x326
08573455 +0x0c1:  sub    $0x4,%esp
08573458 +0x0c4:  mov    -0x3c(%ebp),%eax
0857345b +0x0c7:  mov    %eax,-0x14(%ebp)
0857345e +0x0ca:  jmp    085735ab <+0x217>
08573463 +0x0cf:  mov    -0x1c(%ebp),%edx
08573466 +0x0d2:  mov    -0x2c(%ebp),%eax
08573469 +0x0d5:  cmp    %eax,%edx
0857346b +0x0d7:  jne    085734b3 <+0x11f>
0857346d +0x0d9:  mov    -0x1c(%ebp),%edx
08573470 +0x0dc:  mov    -0x18(%ebp),%eax
08573473 +0x0df:  lea    (%edx,%eax,1),%eax
08573476 +0x0e2:  mov    %eax,-0x24(%ebp)
08573479 +0x0e5:  mov    -0x2c(%ebp),%edx
0857347c +0x0e8:  mov    -0x28(%ebp),%eax
0857347f +0x0eb:  add    %eax,%edx
08573481 +0x0ed:  mov    -0x24(%ebp),%eax
08573484 +0x0f0:  mov    %edx,%ecx
08573486 +0x0f2:  sub    %eax,%ecx
08573488 +0x0f4:  mov    %ecx,%eax
0857348a +0x0f6:  mov    %eax,-0x20(%ebp)
0857348d +0x0f9:  lea    -0x14(%ebp),%eax
08573490 +0x0fc:  mov    %eax,(%esp)
08573493 +0x0ff:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
08573498 +0x104:  mov    -0x24(%ebp),%edx
0857349b +0x107:  mov    %edx,(%eax)
0857349d +0x109:  lea    -0x14(%ebp),%eax
085734a0 +0x10c:  mov    %eax,(%esp)
085734a3 +0x10f:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
085734a8 +0x114:  mov    -0x20(%ebp),%edx
085734ab +0x117:  mov    %edx,0x4(%eax)
085734ae +0x11a:  jmp    085735a0 <+0x20c>
085734b3 +0x11f:  mov    -0x1c(%ebp),%edx
085734b6 +0x122:  mov    -0x18(%ebp),%eax
085734b9 +0x125:  lea    (%edx,%eax,1),%ecx
085734bc +0x128:  mov    -0x2c(%ebp),%edx
085734bf +0x12b:  mov    -0x28(%ebp),%eax
085734c2 +0x12e:  lea    (%edx,%eax,1),%eax
085734c5 +0x131:  cmp    %eax,%ecx
085734c7 +0x133:  jne    08573504 <+0x170>
085734c9 +0x135:  mov    -0x2c(%ebp),%eax
085734cc +0x138:  mov    %eax,-0x24(%ebp)
085734cf +0x13b:  mov    -0x1c(%ebp),%edx
085734d2 +0x13e:  mov    -0x24(%ebp),%eax
085734d5 +0x141:  mov    %edx,%ecx
085734d7 +0x143:  sub    %eax,%ecx
085734d9 +0x145:  mov    %ecx,%eax
085734db +0x147:  mov    %eax,-0x20(%ebp)
085734de +0x14a:  lea    -0x14(%ebp),%eax
085734e1 +0x14d:  mov    %eax,(%esp)
085734e4 +0x150:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
085734e9 +0x155:  mov    -0x24(%ebp),%edx
085734ec +0x158:  mov    %edx,(%eax)
085734ee +0x15a:  lea    -0x14(%ebp),%eax
085734f1 +0x15d:  mov    %eax,(%esp)
085734f4 +0x160:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
085734f9 +0x165:  mov    -0x20(%ebp),%edx
085734fc +0x168:  mov    %edx,0x4(%eax)
085734ff +0x16b:  jmp    085735a0 <+0x20c>
08573504 +0x170:  mov    -0x2c(%ebp),%eax
08573507 +0x173:  mov    %eax,-0x24(%ebp)
0857350a +0x176:  mov    -0x1c(%ebp),%edx
0857350d +0x179:  mov    -0x24(%ebp),%eax
08573510 +0x17c:  mov    %edx,%ecx
08573512 +0x17e:  sub    %eax,%ecx
08573514 +0x180:  mov    %ecx,%eax
08573516 +0x182:  mov    %eax,-0x20(%ebp)
08573519 +0x185:  lea    -0x14(%ebp),%eax
0857351c +0x188:  mov    %eax,(%esp)
0857351f +0x18b:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
08573524 +0x190:  mov    -0x24(%ebp),%edx
08573527 +0x193:  mov    %edx,(%eax)
08573529 +0x195:  lea    -0x14(%ebp),%eax
0857352c +0x198:  mov    %eax,(%esp)
0857352f +0x19b:  call   08576158 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x31c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x31c
08573534 +0x1a0:  mov    -0x20(%ebp),%edx
08573537 +0x1a3:  mov    %edx,0x4(%eax)
0857353a +0x1a6:  mov    -0x1c(%ebp),%edx
0857353d +0x1a9:  mov    -0x18(%ebp),%eax
08573540 +0x1ac:  lea    (%edx,%eax,1),%eax
08573543 +0x1af:  mov    %eax,-0x24(%ebp)
08573546 +0x1b2:  mov    -0x2c(%ebp),%edx
08573549 +0x1b5:  mov    -0x28(%ebp),%eax
0857354c +0x1b8:  add    %eax,%edx
0857354e +0x1ba:  mov    -0x24(%ebp),%eax
08573551 +0x1bd:  mov    %edx,%ecx
08573553 +0x1bf:  sub    %eax,%ecx
08573555 +0x1c1:  mov    %ecx,%eax
08573557 +0x1c3:  mov    %eax,-0x20(%ebp)
0857355a +0x1c6:  lea    -0xc(%ebp),%eax
0857355d +0x1c9:  movl   $0x0,0x8(%esp)
08573565 +0x1d1:  lea    -0x14(%ebp),%edx
08573568 +0x1d4:  mov    %edx,0x4(%esp)
0857356c +0x1d8:  mov    %eax,(%esp)
0857356f +0x1db:  call   08576248 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x40c>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x40c
08573574 +0x1e0:  sub    $0x4,%esp
08573577 +0x1e3:  mov    0x8(%ebp),%edx
0857357a +0x1e6:  lea    -0x3c(%ebp),%eax
0857357d +0x1e9:  lea    -0x24(%ebp),%ecx
08573580 +0x1ec:  mov    %ecx,0xc(%esp)
08573584 +0x1f0:  mov    -0x14(%ebp),%ecx
08573587 +0x1f3:  mov    %ecx,0x8(%esp)
0857358b +0x1f7:  mov    %edx,0x4(%esp)
0857358f +0x1fb:  mov    %eax,(%esp)
08573592 +0x1fe:  call   0857627c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x440>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x440
08573597 +0x203:  sub    $0x4,%esp
0857359a +0x206:  mov    -0x3c(%ebp),%eax
0857359d +0x209:  mov    %eax,-0x14(%ebp)
085735a0 +0x20c:  lea    -0x14(%ebp),%eax
085735a3 +0x20f:  mov    %eax,(%esp)
085735a6 +0x212:  call   085763aa <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x56e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x56e
085735ab +0x217:  mov    0x8(%ebp),%edx
085735ae +0x21a:  lea    -0x10(%ebp),%eax
085735b1 +0x21d:  mov    %edx,0x4(%esp)
085735b5 +0x221:  mov    %eax,(%esp)
085735b8 +0x224:  call   08576106 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2ca>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2ca
085735bd +0x229:  sub    $0x4,%esp
085735c0 +0x22c:  lea    -0x10(%ebp),%eax
085735c3 +0x22f:  mov    %eax,0x4(%esp)
085735c7 +0x233:  lea    -0x14(%ebp),%eax
085735ca +0x236:  mov    %eax,(%esp)
085735cd +0x239:  call   0857612c <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x2f0>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x2f0
085735d2 +0x23e:  test   %al,%al
085735d4 +0x240:  jne    085733e6 <+0x52>
085735da +0x246:  leave
085735db +0x247:  ret
```

## 反编译 C

```c
// IntervalSet::MinusInterval @ 0x8573394

/* IntervalSet::MinusInterval(Interval const&) */

void __thiscall IntervalSet::MinusInterval(IntervalSet *this,Interval *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  __normal_iterator local_14 [4];
  __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> local_10 [12];
  
  __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
  __normal_iterator((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> *)
                    &local_18);
  Interval::Interval((Interval *)&local_20);
  Interval::Interval((Interval *)&local_28);
  Interval::Interval((Interval *)&local_30);
  std::vector<Interval,std::allocator<Interval>>::begin();
  local_18 = local_40[0];
LAB_085735ab:
  do {
    std::vector<Interval,std::allocator<Interval>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,local_14);
    if (!bVar2) {
      return;
    }
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                    operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                               *)&local_18);
    local_30 = *piVar3;
    iVar4 = __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
            operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> *
                      )&local_18);
    local_2c = *(int *)(iVar4 + 4);
    cVar1 = IntersectInterval((Interval *)&local_20,(Interval *)&local_30,param_1);
    if (cVar1 != '\0') {
      if ((local_20 == local_30) && (local_1c == local_2c)) {
        std::vector<Interval,std::allocator<Interval>>::erase(local_40,this,local_18);
        local_18 = local_40[0];
        goto LAB_085735ab;
      }
      if (local_20 == local_30) {
        local_28 = local_20 + local_1c;
        local_24 = (local_30 + local_2c) - local_28;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                        ::operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                                     *)&local_18);
        *piVar3 = local_28;
        iVar4 = __gnu_cxx::
                __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                           *)&local_18);
        *(int *)(iVar4 + 4) = local_24;
      }
      else if (local_20 + local_1c == local_30 + local_2c) {
        local_28 = local_30;
        local_24 = local_20 - local_30;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                        ::operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                                     *)&local_18);
        *piVar3 = local_28;
        iVar4 = __gnu_cxx::
                __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                           *)&local_18);
        *(int *)(iVar4 + 4) = local_24;
      }
      else {
        local_28 = local_30;
        local_24 = local_20 - local_30;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                        ::operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                                     *)&local_18);
        *piVar3 = local_28;
        iVar4 = __gnu_cxx::
                __normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
                operator*((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>
                           *)&local_18);
        *(int *)(iVar4 + 4) = local_24;
        local_28 = local_20 + local_1c;
        local_24 = (local_30 + local_2c) - local_28;
        __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
        operator++(local_10,(int)&local_18);
        std::vector<Interval,std::allocator<Interval>>::insert(local_40,this,local_18,&local_28);
        local_18 = local_40[0];
      }
    }
    __gnu_cxx::__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>>::
    operator++((__normal_iterator<Interval*,std::vector<Interval,std::allocator<Interval>>> *)
               &local_18);
  } while( true );
}
```
