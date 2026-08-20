# do_in

`_ZNKSt7codecvtIwc11__mbstate_tE5do_inERS0_PKcS4_RS4_PwS6_RS6_`

`std::codecvt<wchar_t, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x0871f470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f470  _ZNKSt7codecvtIwc11__mbstate_tE5do_inERS0_PKcS4_RS4_PwS6_RS6_
#           std::codecvt<wchar_t, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char const*&, wchar_t*, wchar_t*, wchar_t*&) const
# range [0x0871f470, 0x0871f64f]
0871f470 +0x000:  push   %ebp
0871f471 +0x001:  mov    %esp,%ebp
0871f473 +0x003:  push   %edi
0871f474 +0x004:  push   %esi
0871f475 +0x005:  push   %ebx
0871f476 +0x006:  sub    $0x7c,%esp
0871f479 +0x009:  mov    0xc(%ebp),%eax
0871f47c +0x00c:  mov    0x18(%ebp),%edx
0871f47f +0x00f:  mov    0x1c(%ebp),%ecx
0871f482 +0x012:  mov    0x10(%ebp),%ebx
0871f485 +0x015:  mov    %eax,-0x38(%ebp)
0871f488 +0x018:  mov    0x20(%ebp),%eax
0871f48b +0x01b:  mov    %edx,-0x2c(%ebp)
0871f48e +0x01e:  mov    0x24(%ebp),%esi
0871f491 +0x021:  mov    %gs:0x14,%edx
0871f498 +0x028:  mov    %edx,-0x1c(%ebp)
0871f49b +0x02b:  xor    %edx,%edx
0871f49d +0x02d:  mov    -0x38(%ebp),%edx
0871f4a0 +0x030:  mov    0x14(%ebp),%edi
0871f4a3 +0x033:  mov    %eax,-0x34(%ebp)
0871f4a6 +0x036:  mov    (%edx),%eax
0871f4a8 +0x038:  mov    0x4(%edx),%edx
0871f4ab +0x03b:  mov    %ecx,-0x4c(%ebp)
0871f4ae +0x03e:  mov    %eax,-0x24(%ebp)
0871f4b1 +0x041:  mov    0x8(%ebp),%eax
0871f4b4 +0x044:  mov    %edx,-0x20(%ebp)
0871f4b7 +0x047:  mov    0x8(%eax),%eax
0871f4ba +0x04a:  mov    %eax,(%esp)
0871f4bd +0x04d:  call   0807de70 <_init+0x768>
0871f4c2 +0x052:  mov    -0x4c(%ebp),%ecx
0871f4c5 +0x055:  mov    %ecx,(%esi)
0871f4c7 +0x057:  xor    %ecx,%ecx
0871f4c9 +0x059:  mov    %eax,-0x3c(%ebp)
0871f4cc +0x05c:  mov    -0x2c(%ebp),%eax
0871f4cf +0x05f:  mov    %ebx,(%eax)
0871f4d1 +0x061:  lea    0x0(%esi,%eiz,1),%esi
0871f4d8 +0x068:  cmp    %ebx,%edi
0871f4da +0x06a:  ja     0871f508 <+0x98>
0871f4dc +0x06c:  mov    -0x3c(%ebp),%eax
0871f4df +0x06f:  mov    %ecx,-0x4c(%ebp)
0871f4e2 +0x072:  mov    %eax,(%esp)
0871f4e5 +0x075:  call   0807de70 <_init+0x768>
0871f4ea +0x07a:  mov    -0x4c(%ebp),%ecx
0871f4ed +0x07d:  mov    -0x1c(%ebp),%edx
0871f4f0 +0x080:  xor    %gs:0x14,%edx
0871f4f7 +0x087:  mov    %ecx,%eax
0871f4f9 +0x089:  jne    0871f63f <+0x1cf>
0871f4ff +0x08f:  add    $0x7c,%esp
0871f502 +0x092:  pop    %ebx
0871f503 +0x093:  pop    %esi
0871f504 +0x094:  pop    %edi
0871f505 +0x095:  pop    %ebp
0871f506 +0x096:  ret
0871f507 +0x097:  nop
0871f508 +0x098:  test   %ecx,%ecx
0871f50a +0x09a:  mov    (%esi),%edx
0871f50c +0x09c:  jne    0871f4dc <+0x6c>
0871f50e +0x09e:  cmp    -0x34(%ebp),%edx
0871f511 +0x0a1:  jae    0871f4dc <+0x6c>
0871f513 +0x0a3:  mov    %edi,%ecx
0871f515 +0x0a5:  sub    %ebx,%ecx
0871f517 +0x0a7:  mov    %ecx,0x8(%esp)
0871f51b +0x0ab:  movl   $0x0,0x4(%esp)
0871f523 +0x0b3:  mov    %ebx,(%esp)
0871f526 +0x0b6:  mov    %ecx,-0x30(%ebp)
0871f529 +0x0b9:  mov    %edx,-0x4c(%ebp)
0871f52c +0x0bc:  call   0807dec0 <_init+0x7b8>
0871f531 +0x0c1:  mov    -0x4c(%ebp),%edx
0871f534 +0x0c4:  test   %eax,%eax
0871f536 +0x0c6:  mov    %eax,%ecx
0871f538 +0x0c8:  je     0871f638 <+0x1c8>
0871f53e +0x0ce:  mov    %ecx,%eax
0871f540 +0x0d0:  sub    %ebx,%eax
0871f542 +0x0d2:  mov    %eax,-0x30(%ebp)
0871f545 +0x0d5:  mov    -0x38(%ebp),%eax
0871f548 +0x0d8:  mov    %ecx,-0x4c(%ebp)
0871f54b +0x0db:  mov    %edx,(%esp)
0871f54e +0x0de:  mov    %eax,0x10(%esp)
0871f552 +0x0e2:  mov    -0x34(%ebp),%eax
0871f555 +0x0e5:  sub    %edx,%eax
0871f557 +0x0e7:  sar    $0x2,%eax
0871f55a +0x0ea:  mov    %eax,0xc(%esp)
0871f55e +0x0ee:  mov    -0x30(%ebp),%eax
0871f561 +0x0f1:  mov    %eax,0x8(%esp)
0871f565 +0x0f5:  mov    -0x2c(%ebp),%eax
0871f568 +0x0f8:  mov    %eax,0x4(%esp)
0871f56c +0x0fc:  call   0807d760 <_init+0x58>
0871f571 +0x101:  mov    -0x4c(%ebp),%ecx
0871f574 +0x104:  cmp    $0xffffffff,%eax
0871f577 +0x107:  je     0871f5e0 <+0x170>
0871f579 +0x109:  mov    -0x2c(%ebp),%edx
0871f57c +0x10c:  mov    (%edx),%ebx
0871f57e +0x10e:  test   %ebx,%ebx
0871f580 +0x110:  je     0871f598 <+0x128>
0871f582 +0x112:  cmp    %ebx,%ecx
0871f584 +0x114:  jbe    0871f598 <+0x128>
0871f586 +0x116:  shl    $0x2,%eax
0871f589 +0x119:  mov    $0x1,%ecx
0871f58e +0x11e:  add    %eax,(%esi)
0871f590 +0x120:  jmp    0871f4d8 <+0x68>
0871f595 +0x125:  lea    0x0(%esi),%esi
0871f598 +0x128:  mov    -0x2c(%ebp),%edx
0871f59b +0x12b:  shl    $0x2,%eax
0871f59e +0x12e:  mov    %ecx,%ebx
0871f5a0 +0x130:  add    (%esi),%eax
0871f5a2 +0x132:  cmp    %edi,%ecx
0871f5a4 +0x134:  mov    %ecx,(%edx)
0871f5a6 +0x136:  mov    %eax,(%esi)
0871f5a8 +0x138:  jae    0871f5d9 <+0x169>
0871f5aa +0x13a:  cmp    %eax,-0x34(%ebp)
0871f5ad +0x13d:  mov    $0x1,%ecx
0871f5b2 +0x142:  jbe    0871f4d8 <+0x68>
0871f5b8 +0x148:  mov    -0x38(%ebp),%ecx
0871f5bb +0x14b:  add    $0x1,%ebx
0871f5be +0x14e:  mov    (%ecx),%edx
0871f5c0 +0x150:  mov    0x4(%ecx),%ecx
0871f5c3 +0x153:  mov    %edx,-0x24(%ebp)
0871f5c6 +0x156:  mov    -0x2c(%ebp),%edx
0871f5c9 +0x159:  mov    %ecx,-0x20(%ebp)
0871f5cc +0x15c:  movl   $0x0,(%eax)
0871f5d2 +0x162:  add    $0x4,%eax
0871f5d5 +0x165:  mov    %eax,(%esi)
0871f5d7 +0x167:  mov    %ebx,(%edx)
0871f5d9 +0x169:  xor    %ecx,%ecx
0871f5db +0x16b:  jmp    0871f4d8 <+0x68>
0871f5e0 +0x170:  mov    (%esi),%edx
0871f5e2 +0x172:  jmp    0871f5f1 <+0x181>
0871f5e4 +0x174:  lea    0x0(%esi,%eiz,1),%esi
0871f5e8 +0x178:  mov    (%esi),%edx
0871f5ea +0x17a:  add    %eax,%ebx
0871f5ec +0x17c:  add    $0x4,%edx
0871f5ef +0x17f:  mov    %edx,(%esi)
0871f5f1 +0x181:  mov    %edi,%eax
0871f5f3 +0x183:  sub    %ebx,%eax
0871f5f5 +0x185:  lea    -0x24(%ebp),%ecx
0871f5f8 +0x188:  mov    %edx,(%esp)
0871f5fb +0x18b:  mov    %ecx,0xc(%esp)
0871f5ff +0x18f:  mov    %eax,0x8(%esp)
0871f603 +0x193:  mov    %ebx,0x4(%esp)
0871f607 +0x197:  call   0807da40 <_init+0x338>
0871f60c +0x19c:  lea    0x2(%eax),%edx
0871f60f +0x19f:  cmp    $0x1,%edx
0871f612 +0x1a2:  ja     0871f5e8 <+0x178>
0871f614 +0x1a4:  mov    -0x2c(%ebp),%eax
0871f617 +0x1a7:  mov    -0x38(%ebp),%ecx
0871f61a +0x1aa:  mov    %ebx,(%eax)
0871f61c +0x1ac:  mov    -0x24(%ebp),%eax
0871f61f +0x1af:  mov    -0x20(%ebp),%edx
0871f622 +0x1b2:  mov    %eax,(%ecx)
0871f624 +0x1b4:  mov    %edx,0x4(%ecx)
0871f627 +0x1b7:  mov    -0x2c(%ebp),%eax
0871f62a +0x1ba:  mov    $0x2,%ecx
0871f62f +0x1bf:  mov    (%eax),%ebx
0871f631 +0x1c1:  jmp    0871f4d8 <+0x68>
0871f636 +0x1c6:  xchg   %ax,%ax
0871f638 +0x1c8:  mov    %edi,%ecx
0871f63a +0x1ca:  jmp    0871f545 <+0xd5>
0871f63f +0x1cf:  call   0807d980 <_init+0x278>
0871f644 +0x1d4:  nop
0871f645 +0x1d5:  nop
0871f646 +0x1d6:  nop
0871f647 +0x1d7:  nop
0871f648 +0x1d8:  nop
0871f649 +0x1d9:  nop
0871f64a +0x1da:  nop
0871f64b +0x1db:  nop
0871f64c +0x1dc:  nop
0871f64d +0x1dd:  nop
0871f64e +0x1de:  nop
0871f64f +0x1df:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x871f470

/* std::codecvt<wchar_t, char, __mbstate_t>::do_in(__mbstate_t&, char const*, char const*, char
   const*&, wchar_t*, wchar_t*, wchar_t*&) const */

int __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_in
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          char **param_4,wchar_t *param_5,wchar_t *param_6,wchar_t **param_7)

{
  undefined4 uVar1;
  char *pcVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *pwVar5;
  char *pcVar6;
  int in_GS_OFFSET;
  size_t local_34;
  mbstate_t local_28;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_28.__count = param_1->__count;
  local_28.__value = param_1->__value;
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  *param_7 = param_5;
  iVar4 = 0;
  *param_4 = param_2;
LAB_0871f4d8:
  while( true ) {
    while( true ) {
      if (((param_3 <= param_2) || (pwVar5 = *param_7, iVar4 != 0)) || (param_6 <= pwVar5)) {
        __uselocale(uVar1);
        if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return iVar4;
      }
      local_34 = (int)param_3 - (int)param_2;
      pcVar2 = memchr(param_2,0,local_34);
      pcVar6 = param_3;
      if (pcVar2 != (char *)0x0) {
        local_34 = (int)pcVar2 - (int)param_2;
        pcVar6 = pcVar2;
      }
      sVar3 = mbsnrtowcs(pwVar5,param_4,local_34,(int)param_6 - (int)pwVar5 >> 2,param_1);
      if (sVar3 != 0xffffffff) break;
      pwVar5 = *param_7;
      while (sVar3 = mbrtowc(pwVar5,param_2,(int)param_3 - (int)param_2,&local_28), 1 < sVar3 + 2) {
        param_2 = param_2 + sVar3;
        pwVar5 = *param_7 + 1;
        *param_7 = pwVar5;
      }
      *param_4 = param_2;
      param_1->__count = local_28.__count;
      param_1->__value = local_28.__value;
      iVar4 = 2;
      param_2 = *param_4;
    }
    param_2 = *param_4;
    if ((param_2 == (char *)0x0) || (pcVar6 <= param_2)) break;
    iVar4 = 1;
    *param_7 = *param_7 + sVar3;
  }
  pwVar5 = *param_7 + sVar3;
  *param_4 = pcVar6;
  *param_7 = pwVar5;
  if (pcVar6 < param_3) goto code_r0x0871f5aa;
  goto LAB_0871f5d9;
code_r0x0871f5aa:
  iVar4 = 1;
  param_2 = pcVar6;
  if (pwVar5 < param_6) {
    pcVar6 = pcVar6 + 1;
    local_28.__count = param_1->__count;
    local_28.__value = param_1->__value;
    *pwVar5 = L'\0';
    *param_7 = pwVar5 + 1;
    *param_4 = pcVar6;
LAB_0871f5d9:
    iVar4 = 0;
    param_2 = pcVar6;
  }
  goto LAB_0871f4d8;
}
```
