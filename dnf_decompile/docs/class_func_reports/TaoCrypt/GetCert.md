# GetCert

`_ZN8TaoCrypt7GetCertERNS_6SourceE`

`TaoCrypt::GetCert(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08754040` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754040  _ZN8TaoCrypt7GetCertERNS_6SourceE
#           TaoCrypt::GetCert(TaoCrypt::Source&)
# range [0x08754040, 0x0875419b]
08754040 +0x000:  push   %ebp
08754041 +0x001:  mov    %esp,%ebp
08754043 +0x003:  sub    $0x88,%esp
08754049 +0x009:  mov    %edi,-0x4(%ebp)
0875404c +0x00c:  mov    0x8(%ebp),%edi
0875404f +0x00f:  lea    -0x62(%ebp),%eax
08754052 +0x012:  mov    %ebx,-0xc(%ebp)
08754055 +0x015:  call   08722df8 <__i686.get_pc_thunk.bx>
0875405a +0x01a:  add    $0xc18b3e,%ebx
08754060 +0x020:  mov    %esi,-0x8(%ebp)
08754063 +0x023:  movl   $0x2d2d2d2d,-0x62(%ebp)
0875406a +0x02a:  movl   $0x4745422d,-0x5e(%ebp)
08754071 +0x031:  movl   $0x43204e49,-0x5a(%ebp)
08754078 +0x038:  movl   $0x49545245,-0x56(%ebp)
0875407f +0x03f:  movl   $0x41434946,-0x52(%ebp)
08754086 +0x046:  movl   $0x2d2d4554,-0x4e(%ebp)
0875408d +0x04d:  movl   $0x2d2d2d,-0x4a(%ebp)
08754094 +0x054:  movl   $0x2d2d2d2d,-0x46(%ebp)
0875409b +0x05b:  movl   $0x444e452d,-0x42(%ebp)
087540a2 +0x062:  movl   $0x52454320,-0x3e(%ebp)
087540a9 +0x069:  movl   $0x49464954,-0x3a(%ebp)
087540b0 +0x070:  movl   $0x45544143,-0x36(%ebp)
087540b7 +0x077:  movl   $0x2d2d2d2d,-0x32(%ebp)
087540be +0x07e:  movw   $0x2d,-0x2e(%ebp)
087540c4 +0x084:  mov    0x4(%edi),%esi
087540c7 +0x087:  mov    %eax,0x4(%esp)
087540cb +0x08b:  mov    %esi,(%esp)
087540ce +0x08e:  call   0807dac0 <_init+0x3b8>
087540d3 +0x093:  lea    -0x46(%ebp),%edx
087540d6 +0x096:  mov    %edx,0x4(%esp)
087540da +0x09a:  mov    %esi,(%esp)
087540dd +0x09d:  mov    %edx,-0x70(%ebp)
087540e0 +0x0a0:  mov    %eax,-0x6c(%ebp)
087540e3 +0x0a3:  call   0807dac0 <_init+0x3b8>
087540e8 +0x0a8:  mov    -0x70(%ebp),%edx
087540eb +0x0ab:  test   %eax,%eax
087540ed +0x0ad:  mov    %eax,%esi
087540ef +0x0af:  jne    08754108 <+0xc8>
087540f1 +0x0b1:  mov    $0xffffffff,%eax
087540f6 +0x0b6:  mov    -0xc(%ebp),%ebx
087540f9 +0x0b9:  mov    -0x8(%ebp),%esi
087540fc +0x0bc:  mov    -0x4(%ebp),%edi
087540ff +0x0bf:  mov    %ebp,%esp
08754101 +0x0c1:  pop    %ebp
08754102 +0x0c2:  ret
08754103 +0x0c3:  nop
08754104 +0x0c4:  lea    0x0(%esi,%eiz,1),%esi
08754108 +0x0c8:  mov    -0x6c(%ebp),%eax
0875410b +0x0cb:  test   %eax,%eax
0875410d +0x0cd:  je     087540f1 <+0xb1>
0875410f +0x0cf:  cmp    %esi,-0x6c(%ebp)
08754112 +0x0d2:  jae    087540f1 <+0xb1>
08754114 +0x0d4:  mov    %edx,(%esp)
08754117 +0x0d7:  call   0807e3b0 <_init+0xca8>
0875411c +0x0dc:  add    %eax,%esi
0875411e +0x0de:  xor    %eax,%eax
08754120 +0x0e0:  cmpb   $0xd,(%esi)
08754123 +0x0e3:  sete   %al
08754126 +0x0e6:  sub    -0x6c(%ebp),%esi
08754129 +0x0e9:  lea    0x1(%esi,%eax,1),%edx
0875412d +0x0ed:  xor    %eax,%eax
0875412f +0x0ef:  test   %edx,%edx
08754131 +0x0f1:  mov    %edx,-0x2c(%ebp)
08754134 +0x0f4:  je     08754146 <+0x106>
08754136 +0x0f6:  mov    %edx,(%esp)
08754139 +0x0f9:  movb   $0x0,0x4(%esp)
0875413e +0x0fe:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08754143 +0x103:  mov    -0x2c(%ebp),%edx
08754146 +0x106:  mov    %edx,0x8(%esp)
0875414a +0x10a:  mov    -0x6c(%ebp),%edx
0875414d +0x10d:  mov    %eax,-0x28(%ebp)
08754150 +0x110:  mov    %eax,(%esp)
08754153 +0x113:  mov    %edx,0x4(%esp)
08754157 +0x117:  call   0807d8a0 <_init+0x198>
0875415c +0x11c:  mov    -0x2c(%ebp),%eax
0875415f +0x11f:  mov    -0x28(%ebp),%ecx
08754162 +0x122:  mov    (%edi),%edx
08754164 +0x124:  movl   $0x0,-0x1c(%ebp)
0875416b +0x12b:  mov    %eax,(%edi)
0875416d +0x12d:  mov    0x4(%edi),%eax
08754170 +0x130:  mov    %ecx,0x4(%edi)
08754173 +0x133:  mov    0xc(%edi),%ecx
08754176 +0x136:  movl   $0x0,0xc(%edi)
0875417d +0x13d:  mov    %edx,-0x2c(%ebp)
08754180 +0x140:  mov    %eax,-0x28(%ebp)
08754183 +0x143:  mov    %eax,0x4(%esp)
08754187 +0x147:  lea    -0x24(%ebp),%eax
0875418a +0x14a:  mov    %eax,(%esp)
0875418d +0x14d:  mov    %ecx,-0x20(%ebp)
08754190 +0x150:  mov    %edx,0x8(%esp)
08754194 +0x154:  call   08746590 <yaDH_free+0x1e0>
08754199 +0x159:  xor    %eax,%eax
0875419b +0x15b:  jmp    087540f6 <+0xb6>
```

## 反编译 C

```c
// TaoCrypt::GetCert @ 0x8754040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::GetCert(TaoCrypt::Source&) */

undefined4 TaoCrypt::GetCert(Source *param_1)

{
  char *__needle;
  uint uVar1;
  void *pvVar2;
  char *__src;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  char *pcVar6;
  char local_66 [54];
  char *local_30;
  void *local_2c;
  AllocatorWithCleanup<unsigned_char> local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  
  builtin_strncpy(local_66,"-----BEGIN CERTIFICATE-----",0x1c);
  builtin_strncpy(local_66 + 0x1c,"-----END CERTIFICATE-----",0x1a);
  pcVar3 = *(char **)(param_1 + 4);
  __src = strstr(pcVar3,local_66);
  __needle = local_66 + 0x1c;
  pcVar6 = __needle;
  pcVar3 = strstr(pcVar3,__needle);
  if (((pcVar3 == (char *)0x0) || (__src == (char *)0x0)) || (pcVar3 <= __src)) {
    uVar4 = 0xffffffff;
  }
  else {
    sVar5 = strlen(__needle);
    local_30 = pcVar3 + sVar5 + (uint)(pcVar3[sVar5] == '\r') + (1 - (int)__src);
    local_2c = (void *)0x0;
    if (local_30 != (char *)0x0) {
      local_2c = operator_new__(local_30,(uint)pcVar6 & 0xffffff00);
    }
    memcpy(local_2c,__src,(size_t)local_30);
    uVar1 = *(uint *)param_1;
    local_20 = 0;
    *(char **)param_1 = local_30;
    pvVar2 = *(void **)(param_1 + 4);
    *(void **)(param_1 + 4) = local_2c;
    local_24 = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = 0;
    local_30 = (char *)uVar1;
    local_2c = pvVar2;
    AllocatorWithCleanup<unsigned_char>::deallocate(local_28,pvVar2,uVar1);
    uVar4 = 0;
  }
  return uVar4;
}
```
