# do_out

`_ZNKSt7codecvtIwc11__mbstate_tE6do_outERS0_PKwS4_RS4_PcS6_RS6_`

`std::codecvt<wchar_t, char, __mbstate_t>::do_out(__mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x0871f6d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f6d0  _ZNKSt7codecvtIwc11__mbstate_tE6do_outERS0_PKwS4_RS4_PcS6_RS6_
#           std::codecvt<wchar_t, char, __mbstate_t>::do_out(__mbstate_t&, wchar_t const*, wchar_t const*, wchar_t const*&, char*, char*, char*&) const
# range [0x0871f6d0, 0x0871f8df]
0871f6d0 +0x000:  push   %ebp
0871f6d1 +0x001:  mov    %esp,%ebp
0871f6d3 +0x003:  push   %edi
0871f6d4 +0x004:  push   %esi
0871f6d5 +0x005:  push   %ebx
0871f6d6 +0x006:  sub    $0x7c,%esp
0871f6d9 +0x009:  mov    0xc(%ebp),%eax
0871f6dc +0x00c:  mov    0x14(%ebp),%edx
0871f6df +0x00f:  mov    0x1c(%ebp),%ecx
0871f6e2 +0x012:  mov    0x10(%ebp),%ebx
0871f6e5 +0x015:  mov    %eax,-0x44(%ebp)
0871f6e8 +0x018:  mov    0x20(%ebp),%eax
0871f6eb +0x01b:  mov    %edx,-0x40(%ebp)
0871f6ee +0x01e:  mov    0x18(%ebp),%esi
0871f6f1 +0x021:  mov    %gs:0x14,%edx
0871f6f8 +0x028:  mov    %edx,-0x1c(%ebp)
0871f6fb +0x02b:  xor    %edx,%edx
0871f6fd +0x02d:  mov    -0x44(%ebp),%edx
0871f700 +0x030:  mov    0x24(%ebp),%edi
0871f703 +0x033:  mov    %eax,-0x48(%ebp)
0871f706 +0x036:  mov    (%edx),%eax
0871f708 +0x038:  mov    0x4(%edx),%edx
0871f70b +0x03b:  mov    %ecx,-0x5c(%ebp)
0871f70e +0x03e:  mov    %eax,-0x24(%ebp)
0871f711 +0x041:  mov    0x8(%ebp),%eax
0871f714 +0x044:  mov    %edx,-0x20(%ebp)
0871f717 +0x047:  mov    0x8(%eax),%eax
0871f71a +0x04a:  mov    %eax,(%esp)
0871f71d +0x04d:  call   0807de70 <_init+0x768>
0871f722 +0x052:  mov    -0x5c(%ebp),%ecx
0871f725 +0x055:  xor    %edx,%edx
0871f727 +0x057:  mov    %ebx,(%esi)
0871f729 +0x059:  mov    %ecx,(%edi)
0871f72b +0x05b:  mov    %eax,-0x4c(%ebp)
0871f72e +0x05e:  xchg   %ax,%ax
0871f730 +0x060:  cmp    %ebx,-0x40(%ebp)
0871f733 +0x063:  ja     0871f760 <+0x90>
0871f735 +0x065:  mov    -0x4c(%ebp),%ebx
0871f738 +0x068:  mov    %edx,-0x5c(%ebp)
0871f73b +0x06b:  mov    %ebx,(%esp)
0871f73e +0x06e:  call   0807de70 <_init+0x768>
0871f743 +0x073:  mov    -0x5c(%ebp),%edx
0871f746 +0x076:  mov    %edx,%eax
0871f748 +0x078:  mov    -0x1c(%ebp),%edx
0871f74b +0x07b:  xor    %gs:0x14,%edx
0871f752 +0x082:  jne    0871f8d0 <+0x200>
0871f758 +0x088:  add    $0x7c,%esp
0871f75b +0x08b:  pop    %ebx
0871f75c +0x08c:  pop    %esi
0871f75d +0x08d:  pop    %edi
0871f75e +0x08e:  pop    %ebp
0871f75f +0x08f:  ret
0871f760 +0x090:  mov    (%edi),%eax
0871f762 +0x092:  test   %edx,%edx
0871f764 +0x094:  mov    %eax,-0x3c(%ebp)
0871f767 +0x097:  jne    0871f735 <+0x65>
0871f769 +0x099:  mov    -0x48(%ebp),%ecx
0871f76c +0x09c:  cmp    %ecx,%eax
0871f76e +0x09e:  jae    0871f735 <+0x65>
0871f770 +0x0a0:  mov    -0x40(%ebp),%edx
0871f773 +0x0a3:  movl   $0x0,0x4(%esp)
0871f77b +0x0ab:  mov    %ebx,(%esp)
0871f77e +0x0ae:  sub    %ebx,%edx
0871f780 +0x0b0:  sar    $0x2,%edx
0871f783 +0x0b3:  mov    %edx,0x8(%esp)
0871f787 +0x0b7:  mov    %edx,-0x5c(%ebp)
0871f78a +0x0ba:  call   0807e4b0 <_init+0xda8>
0871f78f +0x0bf:  mov    -0x5c(%ebp),%edx
0871f792 +0x0c2:  test   %eax,%eax
0871f794 +0x0c4:  mov    %eax,%ecx
0871f796 +0x0c6:  je     0871f8c8 <+0x1f8>
0871f79c +0x0cc:  mov    %ecx,%edx
0871f79e +0x0ce:  sub    %ebx,%edx
0871f7a0 +0x0d0:  sar    $0x2,%edx
0871f7a3 +0x0d3:  mov    -0x44(%ebp),%eax
0871f7a6 +0x0d6:  mov    %edx,0x8(%esp)
0871f7aa +0x0da:  mov    -0x3c(%ebp),%edx
0871f7ad +0x0dd:  mov    %ecx,-0x5c(%ebp)
0871f7b0 +0x0e0:  mov    %esi,0x4(%esp)
0871f7b4 +0x0e4:  mov    %eax,0x10(%esp)
0871f7b8 +0x0e8:  mov    -0x48(%ebp),%eax
0871f7bb +0x0eb:  sub    -0x3c(%ebp),%eax
0871f7be +0x0ee:  mov    %edx,(%esp)
0871f7c1 +0x0f1:  mov    %eax,0xc(%esp)
0871f7c5 +0x0f5:  call   0807d9a0 <_init+0x298>
0871f7ca +0x0fa:  mov    -0x5c(%ebp),%ecx
0871f7cd +0x0fd:  cmp    $0xffffffff,%eax
0871f7d0 +0x100:  je     0871f838 <+0x168>
0871f7d2 +0x102:  mov    (%esi),%ebx
0871f7d4 +0x104:  test   %ebx,%ebx
0871f7d6 +0x106:  je     0871f7e8 <+0x118>
0871f7d8 +0x108:  cmp    %ebx,%ecx
0871f7da +0x10a:  jbe    0871f7e8 <+0x118>
0871f7dc +0x10c:  add    %eax,(%edi)
0871f7de +0x10e:  mov    $0x1,%edx
0871f7e3 +0x113:  jmp    0871f730 <+0x60>
0871f7e8 +0x118:  add    %eax,(%edi)
0871f7ea +0x11a:  xor    %edx,%edx
0871f7ec +0x11c:  cmp    -0x40(%ebp),%ecx
0871f7ef +0x11f:  mov    %ecx,%ebx
0871f7f1 +0x121:  mov    %ecx,(%esi)
0871f7f3 +0x123:  jae    0871f730 <+0x60>
0871f7f9 +0x129:  mov    -0x44(%ebp),%ebx
0871f7fc +0x12c:  mov    (%ebx),%eax
0871f7fe +0x12e:  mov    0x4(%ebx),%edx
0871f801 +0x131:  mov    %eax,-0x24(%ebp)
0871f804 +0x134:  lea    -0x24(%ebp),%eax
0871f807 +0x137:  mov    %edx,-0x20(%ebp)
0871f80a +0x13a:  lea    -0x34(%ebp),%edx
0871f80d +0x13d:  mov    %eax,0x8(%esp)
0871f811 +0x141:  mov    (%ecx),%eax
0871f813 +0x143:  mov    %edx,(%esp)
0871f816 +0x146:  mov    %eax,0x4(%esp)
0871f81a +0x14a:  call   0807d960 <_init+0x258>
0871f81f +0x14f:  mov    -0x48(%ebp),%edx
0871f822 +0x152:  mov    %eax,%ebx
0871f824 +0x154:  mov    (%edi),%eax
0871f826 +0x156:  sub    %eax,%edx
0871f828 +0x158:  cmp    %edx,%ebx
0871f82a +0x15a:  jbe    0871f890 <+0x1c0>
0871f82c +0x15c:  mov    (%esi),%ebx
0871f82e +0x15e:  mov    $0x1,%edx
0871f833 +0x163:  jmp    0871f730 <+0x60>
0871f838 +0x168:  cmp    (%esi),%ebx
0871f83a +0x16a:  jae    0871f86f <+0x19f>
0871f83c +0x16c:  mov    (%edi),%edx
0871f83e +0x16e:  mov    %edi,-0x3c(%ebp)
0871f841 +0x171:  mov    %esi,%edi
0871f843 +0x173:  mov    %edx,%esi
0871f845 +0x175:  lea    0x0(%esi),%esi
0871f848 +0x178:  lea    -0x24(%ebp),%ecx
0871f84b +0x17b:  mov    %ecx,0x8(%esp)
0871f84f +0x17f:  mov    (%ebx),%eax
0871f851 +0x181:  add    $0x4,%ebx
0871f854 +0x184:  mov    %esi,(%esp)
0871f857 +0x187:  mov    %eax,0x4(%esp)
0871f85b +0x18b:  call   0807d960 <_init+0x258>
0871f860 +0x190:  add    %eax,%esi
0871f862 +0x192:  mov    -0x3c(%ebp),%eax
0871f865 +0x195:  cmp    %ebx,(%edi)
0871f867 +0x197:  mov    %esi,(%eax)
0871f869 +0x199:  ja     0871f848 <+0x178>
0871f86b +0x19b:  mov    %edi,%esi
0871f86d +0x19d:  mov    %eax,%edi
0871f86f +0x19f:  mov    -0x20(%ebp),%edx
0871f872 +0x1a2:  mov    -0x24(%ebp),%eax
0871f875 +0x1a5:  mov    -0x44(%ebp),%ecx
0871f878 +0x1a8:  mov    %edx,0x4(%ecx)
0871f87b +0x1ab:  mov    $0x2,%edx
0871f880 +0x1b0:  mov    %eax,(%ecx)
0871f882 +0x1b2:  mov    (%esi),%ebx
0871f884 +0x1b4:  jmp    0871f730 <+0x60>
0871f889 +0x1b9:  lea    0x0(%esi,%eiz,1),%esi
0871f890 +0x1c0:  lea    -0x34(%ebp),%ecx
0871f893 +0x1c3:  mov    %ebx,0x8(%esp)
0871f897 +0x1c7:  mov    %ecx,0x4(%esp)
0871f89b +0x1cb:  mov    %eax,(%esp)
0871f89e +0x1ce:  call   0807d8a0 <_init+0x198>
0871f8a3 +0x1d3:  mov    -0x20(%ebp),%edx
0871f8a6 +0x1d6:  mov    -0x24(%ebp),%eax
0871f8a9 +0x1d9:  mov    -0x44(%ebp),%ecx
0871f8ac +0x1dc:  mov    %edx,0x4(%ecx)
0871f8af +0x1df:  xor    %edx,%edx
0871f8b1 +0x1e1:  mov    %eax,(%ecx)
0871f8b3 +0x1e3:  add    %ebx,(%edi)
0871f8b5 +0x1e5:  mov    (%esi),%ebx
0871f8b7 +0x1e7:  add    $0x4,%ebx
0871f8ba +0x1ea:  mov    %ebx,(%esi)
0871f8bc +0x1ec:  jmp    0871f730 <+0x60>
0871f8c1 +0x1f1:  lea    0x0(%esi,%eiz,1),%esi
0871f8c8 +0x1f8:  mov    -0x40(%ebp),%ecx
0871f8cb +0x1fb:  jmp    0871f7a3 <+0xd3>
0871f8d0 +0x200:  call   0807d980 <_init+0x278>
0871f8d5 +0x205:  nop
0871f8d6 +0x206:  nop
0871f8d7 +0x207:  nop
0871f8d8 +0x208:  nop
0871f8d9 +0x209:  nop
0871f8da +0x20a:  nop
0871f8db +0x20b:  nop
0871f8dc +0x20c:  nop
0871f8dd +0x20d:  nop
0871f8de +0x20e:  nop
0871f8df +0x20f:  nop
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x871f6d0

/* std::codecvt<wchar_t, char, __mbstate_t>::do_out(__mbstate_t&, wchar_t const*, wchar_t const*,
   wchar_t const*&, char*, char*, char*&) const */

int __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_out
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,wchar_t *param_2,
          wchar_t *param_3,wchar_t **param_4,char *param_5,char *param_6,char **param_7)

{
  wchar_t __wc;
  undefined4 uVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  int iVar4;
  size_t sVar5;
  char *pcVar6;
  int in_GS_OFFSET;
  char local_38 [16];
  mbstate_t local_28;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_28.__count = param_1->__count;
  local_28.__value = param_1->__value;
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  iVar4 = 0;
  *param_4 = param_2;
  *param_7 = param_5;
  while (((param_2 < param_3 && (pcVar6 = *param_7, iVar4 == 0)) && (pcVar6 < param_6))) {
    sVar5 = (int)param_3 - (int)param_2 >> 2;
    pwVar2 = wmemchr(param_2,L'\0',sVar5);
    pwVar3 = param_3;
    if (pwVar2 != (wchar_t *)0x0) {
      sVar5 = (int)pwVar2 - (int)param_2 >> 2;
      pwVar3 = pwVar2;
    }
    sVar5 = wcsnrtombs(pcVar6,param_4,sVar5,(int)param_6 - (int)pcVar6,param_1);
    if (sVar5 == 0xffffffff) {
      if (param_2 < *param_4) {
        pcVar6 = *param_7;
        do {
          __wc = *param_2;
          param_2 = param_2 + 1;
          sVar5 = wcrtomb(pcVar6,__wc,&local_28);
          pcVar6 = pcVar6 + sVar5;
          pwVar3 = *param_4;
          *param_7 = pcVar6;
        } while (param_2 < pwVar3);
      }
      param_1->__value = local_28.__value;
      iVar4 = 2;
      param_1->__count = local_28.__count;
      param_2 = *param_4;
    }
    else {
      param_2 = *param_4;
      if ((param_2 == (wchar_t *)0x0) || (pwVar3 <= param_2)) {
        *param_7 = *param_7 + sVar5;
        iVar4 = 0;
        *param_4 = pwVar3;
        param_2 = pwVar3;
        if (pwVar3 < param_3) {
          local_28.__count = param_1->__count;
          local_28.__value = param_1->__value;
          sVar5 = wcrtomb(local_38,*pwVar3,&local_28);
          if ((uint)((int)param_6 - (int)*param_7) < sVar5) {
            param_2 = *param_4;
            iVar4 = 1;
          }
          else {
            memcpy(*param_7,local_38,sVar5);
            param_1->__value = local_28.__value;
            iVar4 = 0;
            param_1->__count = local_28.__count;
            *param_7 = *param_7 + sVar5;
            param_2 = *param_4 + 1;
            *param_4 = param_2;
          }
        }
      }
      else {
        *param_7 = *param_7 + sVar5;
        iVar4 = 1;
      }
    }
  }
  __uselocale(uVar1);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}
```
