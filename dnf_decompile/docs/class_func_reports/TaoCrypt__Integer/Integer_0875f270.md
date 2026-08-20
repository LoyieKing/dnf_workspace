# Integer

`_ZN8TaoCrypt7IntegerC1ERKS0_`

`TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f270  _ZN8TaoCrypt7IntegerC1ERKS0_
#           TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
# range [0x0875f270, 0x0875f37e]
0875f270 +0x000:  push   %ebp
0875f271 +0x001:  mov    %esp,%ebp
0875f273 +0x003:  push   %edi
0875f274 +0x004:  push   %esi
0875f275 +0x005:  push   %ebx
0875f276 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f27b +0x00b:  add    $0xc0d91d,%ebx
0875f281 +0x011:  sub    $0x3c,%esp
0875f284 +0x014:  mov    0xc(%ebp),%edi
0875f287 +0x017:  mov    0x8(%ebp),%esi
0875f28a +0x01a:  mov    %edi,(%esp)
0875f28d +0x01d:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875f292 +0x022:  cmp    $0x8,%eax
0875f295 +0x025:  jbe    0875f348 <+0xd8>
0875f29b +0x02b:  cmp    $0x10,%eax
0875f29e +0x02e:  mov    $0x40,%edx
0875f2a3 +0x033:  mov    $0x10,%ecx
0875f2a8 +0x038:  jbe    0875f2c2 <+0x52>
0875f2aa +0x03a:  cmp    $0x20,%eax
0875f2ad +0x03d:  mov    $0x80,%dl
0875f2af +0x03f:  mov    $0x20,%cl
0875f2b1 +0x041:  jbe    0875f2c2 <+0x52>
0875f2b3 +0x043:  cmp    $0x40,%eax
0875f2b6 +0x046:  mov    $0x100,%dx
0875f2ba +0x04a:  mov    $0x40,%cl
0875f2bc +0x04c:  ja     0875f360 <+0xf0>
0875f2c2 +0x052:  mov    %ecx,(%esi)
0875f2c4 +0x054:  movb   $0x0,0x4(%esp)
0875f2c9 +0x059:  mov    %edx,(%esp)
0875f2cc +0x05c:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875f2d1 +0x061:  mov    (%esi),%edx
0875f2d3 +0x063:  mov    %eax,0x4(%esi)
0875f2d6 +0x066:  mov    %eax,0x4(%esp)
0875f2da +0x06a:  lea    0x8(%esi),%eax
0875f2dd +0x06d:  movl   $0x0,0x10(%esp)
0875f2e5 +0x075:  mov    %edx,0xc(%esp)
0875f2e9 +0x079:  mov    %edx,0x8(%esp)
0875f2ed +0x07d:  mov    %edx,-0x1c(%ebp)
0875f2f0 +0x080:  mov    %eax,(%esp)
0875f2f3 +0x083:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875f2f8 +0x088:  mov    -0x1c(%ebp),%edx
0875f2fb +0x08b:  mov    %edx,(%esi)
0875f2fd +0x08d:  shl    $0x2,%edx
0875f300 +0x090:  mov    %eax,0x4(%esi)
0875f303 +0x093:  mov    %edx,0x8(%esp)
0875f307 +0x097:  movl   $0x0,0x4(%esp)
0875f30f +0x09f:  mov    %eax,(%esp)
0875f312 +0x0a2:  call   0807dcc0 <_init+0x5b8>
0875f317 +0x0a7:  mov    (%esi),%ecx
0875f319 +0x0a9:  mov    0xc(%edi),%eax
0875f31c +0x0ac:  mov    0x4(%edi),%edi
0875f31f +0x0af:  test   %ecx,%ecx
0875f321 +0x0b1:  mov    %eax,0xc(%esi)
0875f324 +0x0b4:  mov    0x4(%esi),%esi
0875f327 +0x0b7:  je     0875f33d <+0xcd>
0875f329 +0x0b9:  xor    %eax,%eax
0875f32b +0x0bb:  nop
0875f32c +0x0bc:  lea    0x0(%esi,%eiz,1),%esi
0875f330 +0x0c0:  mov    (%edi,%eax,4),%edx
0875f333 +0x0c3:  mov    %edx,(%esi,%eax,4)
0875f336 +0x0c6:  add    $0x1,%eax
0875f339 +0x0c9:  cmp    %eax,%ecx
0875f33b +0x0cb:  ja     0875f330 <+0xc0>
0875f33d +0x0cd:  add    $0x3c,%esp
0875f340 +0x0d0:  pop    %ebx
0875f341 +0x0d1:  pop    %esi
0875f342 +0x0d2:  pop    %edi
0875f343 +0x0d3:  pop    %ebp
0875f344 +0x0d4:  ret
0875f345 +0x0d5:  lea    0x0(%esi),%esi
0875f348 +0x0d8:  mov    -0x6678b8(%ebx,%eax,4),%edx
0875f34f +0x0df:  test   %edx,%edx
0875f351 +0x0e1:  mov    %edx,(%esi)
0875f353 +0x0e3:  jne    0875f376 <+0x106>
0875f355 +0x0e5:  xor    %eax,%eax
0875f357 +0x0e7:  jmp    0875f2d1 <+0x61>
0875f35c +0x0ec:  lea    0x0(%esi,%eiz,1),%esi
0875f360 +0x0f0:  sub    $0x1,%eax
0875f363 +0x0f3:  mov    %eax,(%esp)
0875f366 +0x0f6:  call   08767540 <_ZN8TaoCrypt12BitPrecisionEj>  ; TaoCrypt::BitPrecision(unsigned int)
0875f36b +0x0fb:  mov    $0x1,%edx
0875f370 +0x100:  mov    %eax,%ecx
0875f372 +0x102:  shl    %cl,%edx
0875f374 +0x104:  jmp    0875f34f <+0xdf>
0875f376 +0x106:  shl    $0x2,%edx
0875f379 +0x109:  jmp    0875f2c4 <+0x54>
0875f37e +0x10e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x875f270

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::Integer const&) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,Integer *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  void *__s;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_stack_ffffffb8;
  
  uVar3 = WordCount(param_1);
  if (uVar3 < 9) {
    iVar7 = (&RoundupSizeTable)[uVar3];
LAB_0875f34f:
    *(int *)this = iVar7;
    if (iVar7 == 0) {
      puVar4 = (uint *)0x0;
      goto LAB_0875f2d1;
    }
    iVar7 = iVar7 << 2;
  }
  else {
    iVar7 = 0x40;
    uVar6 = 0x10;
    if (0x10 < uVar3) {
      iVar7 = 0x80;
      uVar6 = 0x20;
      if (0x20 < uVar3) {
        iVar7 = 0x100;
        uVar6 = 0x40;
        if (0x40 < uVar3) {
          bVar2 = BitPrecision(uVar3 - 1);
          iVar7 = 1 << (bVar2 & 0x1f);
          goto LAB_0875f34f;
        }
      }
    }
    *(undefined4 *)this = uVar6;
  }
  puVar4 = operator_new__(iVar7,in_stack_ffffffb8 & 0xffffff00);
LAB_0875f2d1:
  uVar3 = *(uint *)this;
  *(uint **)(this + 4) = puVar4;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar4,uVar3,uVar3,false
                          );
  *(uint *)this = uVar3;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar3 << 2);
  uVar3 = *(uint *)this;
  iVar7 = *(int *)(param_1 + 4);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  iVar1 = *(int *)(this + 4);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      *(undefined4 *)(iVar1 + uVar5 * 4) = *(undefined4 *)(iVar7 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}
```
