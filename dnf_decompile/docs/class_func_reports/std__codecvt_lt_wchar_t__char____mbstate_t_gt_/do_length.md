# do_length

`_ZNKSt7codecvtIwc11__mbstate_tE9do_lengthERS0_PKcS4_j`

`std::codecvt<wchar_t, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `std::codecvt<wchar_t, char, __mbstate_t>` | `0x0871f2c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0871f2c0  _ZNKSt7codecvtIwc11__mbstate_tE9do_lengthERS0_PKcS4_j
#           std::codecvt<wchar_t, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*, unsigned int) const
# range [0x0871f2c0, 0x0871f46b]
0871f2c0 +0x000:  push   %ebp
0871f2c1 +0x001:  mov    %esp,%ebp
0871f2c3 +0x003:  push   %edi
0871f2c4 +0x004:  push   %esi
0871f2c5 +0x005:  push   %ebx
0871f2c6 +0x006:  sub    $0x5c,%esp
0871f2c9 +0x009:  mov    0xc(%ebp),%eax
0871f2cc +0x00c:  mov    0x14(%ebp),%edx
0871f2cf +0x00f:  mov    %gs:0x14,%ecx
0871f2d6 +0x016:  mov    %ecx,-0x1c(%ebp)
0871f2d9 +0x019:  xor    %ecx,%ecx
0871f2db +0x01b:  mov    %eax,-0x38(%ebp)
0871f2de +0x01e:  mov    0x10(%ebp),%eax
0871f2e1 +0x021:  mov    -0x38(%ebp),%ecx
0871f2e4 +0x024:  mov    %edx,-0x30(%ebp)
0871f2e7 +0x027:  mov    %eax,-0x2c(%ebp)
0871f2ea +0x02a:  mov    (%ecx),%eax
0871f2ec +0x02c:  mov    0x4(%ecx),%edx
0871f2ef +0x02f:  mov    %eax,-0x24(%ebp)
0871f2f2 +0x032:  mov    0x8(%ebp),%eax
0871f2f5 +0x035:  mov    %edx,-0x20(%ebp)
0871f2f8 +0x038:  mov    0x8(%eax),%eax
0871f2fb +0x03b:  mov    %eax,(%esp)
0871f2fe +0x03e:  call   0807de70 <_init+0x768>
0871f303 +0x043:  mov    0x18(%ebp),%edx
0871f306 +0x046:  mov    -0x2c(%ebp),%ebx
0871f309 +0x049:  movl   $0x0,-0x34(%ebp)
0871f310 +0x050:  mov    %eax,-0x44(%ebp)
0871f313 +0x053:  lea    0x1e(,%edx,4),%eax
0871f31a +0x05a:  and    $0xfffffff0,%eax
0871f31d +0x05d:  sub    %eax,%esp
0871f31f +0x05f:  lea    0x23(%esp),%ecx
0871f323 +0x063:  and    $0xfffffff0,%ecx
0871f326 +0x066:  mov    %ecx,-0x3c(%ebp)
0871f329 +0x069:  mov    0x18(%ebp),%eax
0871f32c +0x06c:  test   %eax,%eax
0871f32e +0x06e:  je     0871f3ad <+0xed>
0871f330 +0x070:  cmp    %ebx,-0x30(%ebp)
0871f333 +0x073:  jbe    0871f3ad <+0xed>
0871f335 +0x075:  mov    -0x30(%ebp),%edi
0871f338 +0x078:  movl   $0x0,0x4(%esp)
0871f340 +0x080:  mov    %ebx,(%esp)
0871f343 +0x083:  mov    %ebx,-0x40(%ebp)
0871f346 +0x086:  sub    %ebx,%edi
0871f348 +0x088:  mov    %edi,0x8(%esp)
0871f34c +0x08c:  call   0807dec0 <_init+0x7b8>
0871f351 +0x091:  test   %eax,%eax
0871f353 +0x093:  mov    %eax,%esi
0871f355 +0x095:  je     0871f400 <+0x140>
0871f35b +0x09b:  mov    %eax,%edi
0871f35d +0x09d:  sub    %ebx,%edi
0871f35f +0x09f:  mov    -0x38(%ebp),%eax
0871f362 +0x0a2:  lea    -0x2c(%ebp),%ecx
0871f365 +0x0a5:  mov    0x18(%ebp),%edx
0871f368 +0x0a8:  mov    %edi,0x8(%esp)
0871f36c +0x0ac:  mov    %ecx,0x4(%esp)
0871f370 +0x0b0:  mov    %eax,0x10(%esp)
0871f374 +0x0b4:  mov    -0x3c(%ebp),%eax
0871f377 +0x0b7:  mov    %edx,0xc(%esp)
0871f37b +0x0bb:  mov    %eax,(%esp)
0871f37e +0x0be:  call   0807d760 <_init+0x58>
0871f383 +0x0c3:  cmp    $0xffffffff,%eax
0871f386 +0x0c6:  je     0871f410 <+0x150>
0871f38c +0x0cc:  mov    -0x2c(%ebp),%edx
0871f38f +0x0cf:  test   %edx,%edx
0871f391 +0x0d1:  je     0871f408 <+0x148>
0871f393 +0x0d3:  mov    %edx,%edi
0871f395 +0x0d5:  mov    %edx,%esi
0871f397 +0x0d7:  sub    %ebx,%edi
0871f399 +0x0d9:  add    %edi,-0x34(%ebp)
0871f39c +0x0dc:  sub    %eax,0x18(%ebp)
0871f39f +0x0df:  cmp    %esi,-0x30(%ebp)
0871f3a2 +0x0e2:  ja     0871f3d8 <+0x118>
0871f3a4 +0x0e4:  mov    0x18(%ebp),%eax
0871f3a7 +0x0e7:  mov    %esi,%ebx
0871f3a9 +0x0e9:  test   %eax,%eax
0871f3ab +0x0eb:  jne    0871f330 <+0x70>
0871f3ad +0x0ed:  mov    -0x44(%ebp),%eax
0871f3b0 +0x0f0:  mov    %eax,(%esp)
0871f3b3 +0x0f3:  call   0807de70 <_init+0x768>
0871f3b8 +0x0f8:  mov    -0x34(%ebp),%eax
0871f3bb +0x0fb:  mov    -0x1c(%ebp),%edx
0871f3be +0x0fe:  xor    %gs:0x14,%edx
0871f3c5 +0x105:  jne    0871f46b <+0x1ab>
0871f3cb +0x10b:  lea    -0xc(%ebp),%esp
0871f3ce +0x10e:  pop    %ebx
0871f3cf +0x10f:  pop    %esi
0871f3d0 +0x110:  pop    %edi
0871f3d1 +0x111:  pop    %ebp
0871f3d2 +0x112:  ret
0871f3d3 +0x113:  nop
0871f3d4 +0x114:  lea    0x0(%esi,%eiz,1),%esi
0871f3d8 +0x118:  mov    0x18(%ebp),%edx
0871f3db +0x11b:  test   %edx,%edx
0871f3dd +0x11d:  je     0871f3a4 <+0xe4>
0871f3df +0x11f:  mov    -0x38(%ebp),%ecx
0871f3e2 +0x122:  lea    0x1(%esi),%ebx
0871f3e5 +0x125:  mov    (%ecx),%eax
0871f3e7 +0x127:  mov    0x4(%ecx),%edx
0871f3ea +0x12a:  mov    %ebx,-0x2c(%ebp)
0871f3ed +0x12d:  addl   $0x1,-0x34(%ebp)
0871f3f1 +0x131:  subl   $0x1,0x18(%ebp)
0871f3f5 +0x135:  mov    %eax,-0x24(%ebp)
0871f3f8 +0x138:  mov    %edx,-0x20(%ebp)
0871f3fb +0x13b:  jmp    0871f329 <+0x69>
0871f400 +0x140:  mov    -0x30(%ebp),%esi
0871f403 +0x143:  jmp    0871f35f <+0x9f>
0871f408 +0x148:  mov    %esi,-0x2c(%ebp)
0871f40b +0x14b:  jmp    0871f399 <+0xd9>
0871f40d +0x14d:  lea    0x0(%esi),%esi
0871f410 +0x150:  mov    %ebx,-0x2c(%ebp)
0871f413 +0x153:  lea    -0x24(%ebp),%esi
0871f416 +0x156:  mov    -0x30(%ebp),%edi
0871f419 +0x159:  jmp    0871f428 <+0x168>
0871f41b +0x15b:  nop
0871f41c +0x15c:  lea    0x0(%esi,%eiz,1),%esi
0871f420 +0x160:  mov    -0x2c(%ebp),%ebx
0871f423 +0x163:  add    %eax,%ebx
0871f425 +0x165:  mov    %ebx,-0x2c(%ebp)
0871f428 +0x168:  mov    %edi,%eax
0871f42a +0x16a:  sub    %ebx,%eax
0871f42c +0x16c:  mov    %esi,0xc(%esp)
0871f430 +0x170:  mov    %eax,0x8(%esp)
0871f434 +0x174:  mov    %ebx,0x4(%esp)
0871f438 +0x178:  movl   $0x0,(%esp)
0871f43f +0x17f:  call   0807da40 <_init+0x338>
0871f444 +0x184:  lea    0x2(%eax),%edx
0871f447 +0x187:  cmp    $0x1,%edx
0871f44a +0x18a:  ja     0871f420 <+0x160>
0871f44c +0x18c:  mov    -0x24(%ebp),%eax
0871f44f +0x18f:  mov    -0x38(%ebp),%ecx
0871f452 +0x192:  mov    -0x20(%ebp),%edx
0871f455 +0x195:  mov    %eax,(%ecx)
0871f457 +0x197:  mov    -0x2c(%ebp),%eax
0871f45a +0x19a:  mov    %edx,0x4(%ecx)
0871f45d +0x19d:  mov    -0x40(%ebp),%edx
0871f460 +0x1a0:  add    %eax,-0x34(%ebp)
0871f463 +0x1a3:  sub    %edx,-0x34(%ebp)
0871f466 +0x1a6:  jmp    0871f3ad <+0xed>
0871f46b +0x1ab:  call   0807d980 <_init+0x278>
```

## 反编译 C

```c
// std::codecvt<wchar_t, @ 0x871f2c0

/* std::codecvt<wchar_t, char, __mbstate_t>::do_length(__mbstate_t&, char const*, char const*,
   unsigned int) const */

char * __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::do_length
          (codecvt<wchar_t,char,__mbstate_t> *this,__mbstate_t *param_1,char *param_2,char *param_3,
          uint param_4)

{
  int iVar1;
  undefined1 *puVar2;
  __mbstate_t *p_Var3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int in_GS_OFFSET;
  int aiStack_70 [8];
  undefined1 auStack_50 [8];
  undefined4 local_48;
  char *local_44;
  undefined1 *local_40;
  __mbstate_t *local_3c;
  char *local_38;
  char *local_34;
  char *local_30 [2];
  int local_28;
  _union_54 local_24;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_3c = param_1;
  local_34 = param_3;
  local_30[0] = param_2;
  local_28 = param_1->__count;
  local_24 = param_1->__value;
  aiStack_70[1] = *(int *)(this + 8);
  aiStack_70[0] = 0x871f303;
  local_48 = __uselocale();
  local_38 = (char *)0x0;
  iVar1 = -(param_4 * 4 + 0x1e & 0xfffffff0);
  local_40 = auStack_50 + iVar1;
  for (; param_4 != 0; param_4 = param_4 - 1) {
    while( true ) {
      pcVar6 = local_30[0];
      pcVar7 = local_34;
      if (local_34 <= local_30[0]) goto LAB_0871f3ad;
      *(undefined4 *)((int)aiStack_70 + iVar1 + 8) = 0;
      *(char **)((int)aiStack_70 + iVar1 + 4) = pcVar6;
      local_44 = pcVar6;
      iVar8 = (int)pcVar7 - (int)pcVar6;
      *(int *)((int)aiStack_70 + iVar1 + 0xc) = iVar8;
      *(undefined4 *)((int)aiStack_70 + iVar1) = 0x871f351;
      pcVar4 = memchr(*(void **)((int)aiStack_70 + iVar1 + 4),*(int *)((int)aiStack_70 + iVar1 + 8),
                      *(size_t *)((int)aiStack_70 + iVar1 + 0xc));
      p_Var3 = local_3c;
      pcVar7 = local_34;
      if (pcVar4 != (char *)0x0) {
        iVar8 = (int)pcVar4 - (int)pcVar6;
        pcVar7 = pcVar4;
      }
      *(int *)((int)aiStack_70 + iVar1 + 0xc) = iVar8;
      *(char ***)((int)aiStack_70 + iVar1 + 8) = local_30;
      *(__mbstate_t **)((int)aiStack_70 + iVar1 + 0x14) = p_Var3;
      puVar2 = local_40;
      *(uint *)((int)aiStack_70 + iVar1 + 0x10) = param_4;
      *(undefined1 **)((int)aiStack_70 + iVar1 + 4) = puVar2;
      *(undefined4 *)((int)aiStack_70 + iVar1) = 0x871f383;
      sVar5 = mbsnrtowcs(*(wchar_t **)((int)aiStack_70 + iVar1 + 4),
                         *(char ***)((int)aiStack_70 + iVar1 + 8),
                         *(size_t *)((int)aiStack_70 + iVar1 + 0xc),
                         *(size_t *)((int)aiStack_70 + iVar1 + 0x10),
                         *(mbstate_t **)((int)aiStack_70 + iVar1 + 0x14));
      pcVar4 = local_34;
      if (sVar5 == 0xffffffff) {
        local_30[0] = pcVar6;
        while( true ) {
          local_30[0] = pcVar6;
          *(int **)((int)aiStack_70 + iVar1 + 0x10) = &local_28;
          *(int *)((int)aiStack_70 + iVar1 + 0xc) = (int)pcVar4 - (int)pcVar6;
          *(char **)((int)aiStack_70 + iVar1 + 8) = pcVar6;
          *(undefined4 *)((int)aiStack_70 + iVar1 + 4) = 0;
          *(undefined4 *)((int)aiStack_70 + iVar1) = 0x871f444;
          sVar5 = mbrtowc(*(wchar_t **)((int)aiStack_70 + iVar1 + 4),
                          *(char **)((int)aiStack_70 + iVar1 + 8),
                          *(size_t *)((int)aiStack_70 + iVar1 + 0xc),
                          *(mbstate_t **)((int)aiStack_70 + iVar1 + 0x10));
          if (sVar5 + 2 < 2) break;
          pcVar6 = local_30[0] + sVar5;
          local_30[0] = pcVar6;
        }
        local_3c->__count = local_28;
        local_3c->__value = local_24;
        local_38 = local_30[0] + ((int)local_38 - (int)local_44);
        goto LAB_0871f3ad;
      }
      if (local_30[0] == (char *)0x0) {
        local_30[0] = pcVar7;
      }
      else {
        iVar8 = (int)local_30[0] - (int)pcVar6;
      }
      local_38 = local_38 + iVar8;
      param_4 = param_4 - sVar5;
      if ((local_30[0] < local_34) && (param_4 != 0)) break;
      if (param_4 == 0) goto LAB_0871f3ad;
    }
    local_30[0] = local_30[0] + 1;
    local_38 = local_38 + 1;
    local_28 = local_3c->__count;
    local_24 = local_3c->__value;
  }
LAB_0871f3ad:
  *(undefined4 *)((int)aiStack_70 + iVar1 + 4) = local_48;
  *(undefined4 *)((int)aiStack_70 + iVar1) = 0x871f3b8;
  __uselocale();
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((int)aiStack_70 + iVar1) = do_in;
    __stack_chk_fail();
  }
  return local_38;
}
```
