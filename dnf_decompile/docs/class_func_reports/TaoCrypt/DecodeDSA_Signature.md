# DecodeDSA_Signature

`_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj`

`TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08755120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08755120  _ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj
#           TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int)
# range [0x08755120, 0x087552da]
08755120 +0x000:  push   %ebp
08755121 +0x001:  xor    %eax,%eax
08755123 +0x003:  mov    %esp,%ebp
08755125 +0x005:  sub    $0x58,%esp
08755128 +0x008:  mov    0x10(%ebp),%edx
0875512b +0x00b:  mov    %ebx,-0xc(%ebp)
0875512e +0x00e:  call   08722df8 <__i686.get_pc_thunk.bx>
08755133 +0x013:  add    $0xc17a65,%ebx
08755139 +0x019:  mov    %esi,-0x8(%ebp)
0875513c +0x01c:  test   %edx,%edx
0875513e +0x01e:  mov    %edi,-0x4(%ebp)
08755141 +0x021:  mov    %edx,-0x2c(%ebp)
08755144 +0x024:  je     08755156 <+0x36>
08755146 +0x026:  mov    %edx,(%esp)
08755149 +0x029:  movb   $0x0,0x4(%esp)
0875514e +0x02e:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
08755153 +0x033:  mov    -0x2c(%ebp),%edx
08755156 +0x036:  mov    %edx,0x8(%esp)
0875515a +0x03a:  mov    0xc(%ebp),%edx
0875515d +0x03d:  mov    %eax,-0x28(%ebp)
08755160 +0x040:  mov    %eax,(%esp)
08755163 +0x043:  mov    %edx,0x4(%esp)
08755167 +0x047:  call   0807d8a0 <_init+0x198>
0875516c +0x04c:  mov    -0x28(%ebp),%esi
0875516f +0x04f:  movl   $0x0,-0x1c(%ebp)
08755176 +0x056:  movl   $0x1,-0x20(%ebp)
0875517d +0x05d:  cmpb   $0x30,(%esi)
08755180 +0x060:  je     087551c0 <+0xa0>
08755182 +0x062:  movl   $0x3fc,-0x1c(%ebp)
08755189 +0x069:  xor    %edi,%edi
0875518b +0x06b:  mov    -0x2c(%ebp),%eax
0875518e +0x06e:  mov    %esi,(%esp)
08755191 +0x071:  movl   $0x0,0x4(%esp)
08755199 +0x079:  mov    %eax,0x8(%esp)
0875519d +0x07d:  call   0807dcc0 <_init+0x5b8>
087551a2 +0x082:  mov    %esi,(%esp)
087551a5 +0x085:  movb   $0x0,0x4(%esp)
087551aa +0x08a:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087551af +0x08f:  mov    %edi,%eax
087551b1 +0x091:  mov    -0xc(%ebp),%ebx
087551b4 +0x094:  mov    -0x8(%ebp),%esi
087551b7 +0x097:  mov    -0x4(%ebp),%edi
087551ba +0x09a:  mov    %ebp,%esp
087551bc +0x09c:  pop    %ebp
087551bd +0x09d:  ret
087551be +0x09e:  xchg   %ax,%ax
087551c0 +0x0a0:  lea    -0x2c(%ebp),%edi
087551c3 +0x0a3:  mov    %edi,(%esp)
087551c6 +0x0a6:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
087551cb +0x0ab:  mov    -0x20(%ebp),%eax
087551ce +0x0ae:  mov    -0x28(%ebp),%esi
087551d1 +0x0b1:  lea    0x1(%eax),%edx
087551d4 +0x0b4:  mov    %edx,-0x20(%ebp)
087551d7 +0x0b7:  cmpb   $0x2,(%esi,%eax,1)
087551db +0x0bb:  je     087551e8 <+0xc8>
087551dd +0x0bd:  movl   $0x3f2,-0x1c(%ebp)
087551e4 +0x0c4:  xor    %edi,%edi
087551e6 +0x0c6:  jmp    0875518b <+0x6b>
087551e8 +0x0c8:  mov    %edi,(%esp)
087551eb +0x0cb:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
087551f0 +0x0d0:  cmp    $0x14,%eax
087551f3 +0x0d3:  mov    %eax,%edx
087551f5 +0x0d5:  je     087552be <+0x19e>
087551fb +0x0db:  cmp    $0x15,%eax
087551fe +0x0de:  je     0875521a <+0xfa>
08755200 +0x0e0:  cmp    $0x13,%eax
08755203 +0x0e3:  je     087552aa <+0x18a>
08755209 +0x0e9:  movl   $0x40b,-0x1c(%ebp)
08755210 +0x0f0:  xor    %edi,%edi
08755212 +0x0f2:  mov    -0x28(%ebp),%esi
08755215 +0x0f5:  jmp    0875518b <+0x6b>
0875521a +0x0fa:  mov    -0x20(%ebp),%eax
0875521d +0x0fd:  mov    $0x14,%dl
0875521f +0x0ff:  add    $0x1,%eax
08755222 +0x102:  mov    %eax,-0x20(%ebp)
08755225 +0x105:  add    -0x28(%ebp),%eax
08755228 +0x108:  mov    %edx,0x8(%esp)
0875522c +0x10c:  mov    %edx,-0x3c(%ebp)
0875522f +0x10f:  mov    %eax,0x4(%esp)
08755233 +0x113:  mov    0x8(%ebp),%eax
08755236 +0x116:  mov    %eax,(%esp)
08755239 +0x119:  call   0807d8a0 <_init+0x198>
0875523e +0x11e:  mov    -0x20(%ebp),%eax
08755241 +0x121:  mov    -0x3c(%ebp),%edx
08755244 +0x124:  mov    -0x28(%ebp),%esi
08755247 +0x127:  add    %edx,%eax
08755249 +0x129:  lea    0x1(%eax),%ecx
0875524c +0x12c:  mov    %ecx,-0x20(%ebp)
0875524f +0x12f:  cmpb   $0x2,(%esi,%eax,1)
08755253 +0x133:  jne    087551dd <+0xbd>
08755255 +0x135:  mov    %edx,-0x3c(%ebp)
08755258 +0x138:  mov    %edi,(%esp)
0875525b +0x13b:  call   08753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>  ; TaoCrypt::GetLength(TaoCrypt::Source&)
08755260 +0x140:  mov    -0x3c(%ebp),%edx
08755263 +0x143:  cmp    $0x14,%eax
08755266 +0x146:  mov    %eax,%esi
08755268 +0x148:  je     087552d5 <+0x1b5>
0875526a +0x14a:  cmp    $0x15,%eax
0875526d +0x14d:  je     087552c6 <+0x1a6>
0875526f +0x14f:  cmp    $0x13,%eax
08755272 +0x152:  jne    08755209 <+0xe9>
08755274 +0x154:  mov    0x8(%ebp),%eax
08755277 +0x157:  movb   $0x0,(%eax,%edx,1)
0875527b +0x15b:  add    $0x1,%eax
0875527e +0x15e:  mov    %eax,0x8(%ebp)
08755281 +0x161:  mov    -0x20(%ebp),%eax
08755284 +0x164:  add    0x8(%ebp),%edx
08755287 +0x167:  mov    $0x28,%edi
0875528c +0x16c:  add    -0x28(%ebp),%eax
0875528f +0x16f:  mov    %esi,0x8(%esp)
08755293 +0x173:  mov    %edx,(%esp)
08755296 +0x176:  mov    %eax,0x4(%esp)
0875529a +0x17a:  call   0807d8a0 <_init+0x198>
0875529f +0x17f:  add    %esi,-0x20(%ebp)
087552a2 +0x182:  mov    -0x28(%ebp),%esi
087552a5 +0x185:  jmp    0875518b <+0x6b>
087552aa +0x18a:  mov    0x8(%ebp),%eax
087552ad +0x18d:  movb   $0x0,(%eax)
087552b0 +0x190:  add    $0x1,%eax
087552b3 +0x193:  mov    %eax,0x8(%ebp)
087552b6 +0x196:  mov    -0x20(%ebp),%eax
087552b9 +0x199:  jmp    08755225 <+0x105>
087552be +0x19e:  mov    -0x20(%ebp),%eax
087552c1 +0x1a1:  jmp    08755225 <+0x105>
087552c6 +0x1a6:  mov    -0x20(%ebp),%eax
087552c9 +0x1a9:  mov    $0x14,%si
087552cd +0x1ad:  add    $0x1,%eax
087552d0 +0x1b0:  mov    %eax,-0x20(%ebp)
087552d3 +0x1b3:  jmp    08755284 <+0x164>
087552d5 +0x1b5:  mov    -0x20(%ebp),%eax
087552d8 +0x1b8:  jmp    08755284 <+0x164>
087552da +0x1ba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::DecodeDSA_Signature @ 0x8755120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::DecodeDSA_Signature(unsigned char*, unsigned char const*, unsigned int) */

undefined4 TaoCrypt::DecodeDSA_Signature(uchar *param_1,uchar *param_2,uint param_3)

{
  char *pcVar1;
  size_t __n;
  int iVar2;
  size_t __n_00;
  undefined4 uVar3;
  uint in_stack_ffffffa8;
  uint uVar4;
  uint local_30;
  char *local_2c;
  int local_24;
  undefined4 local_20;
  
  local_2c = (char *)0x0;
  local_30 = param_3;
  if (param_3 != 0) {
    local_2c = operator_new__(param_3,in_stack_ffffffa8 & 0xffffff00);
  }
  memcpy(local_2c,param_2,local_30);
  local_20 = 0;
  local_24 = 1;
  if (*local_2c != '0') {
    local_20 = 0x3fc;
    uVar3 = 0;
    goto LAB_0875518b;
  }
  GetLength((Source *)&local_30);
  iVar2 = local_24 + 1;
  pcVar1 = local_2c + local_24;
  local_24 = iVar2;
  if (*pcVar1 == '\x02') {
    __n = GetLength((Source *)&local_30);
    if (__n != 0x14) {
      if (__n == 0x15) {
        __n = 0x14;
        local_24 = local_24 + 1;
        goto LAB_08755225;
      }
      if (__n == 0x13) {
        *param_1 = '\0';
        param_1 = param_1 + 1;
        goto LAB_08755225;
      }
LAB_08755209:
      local_20 = 0x40b;
      uVar3 = 0;
      goto LAB_0875518b;
    }
LAB_08755225:
    memcpy(param_1,local_2c + local_24,__n);
    iVar2 = local_24 + __n;
    local_24 = iVar2 + 1;
    if (local_2c[iVar2] == '\x02') {
      __n_00 = GetLength((Source *)&local_30);
      if (__n_00 != 0x14) {
        if (__n_00 == 0x15) {
          __n_00 = 0x14;
          local_24 = local_24 + 1;
        }
        else {
          if (__n_00 != 0x13) goto LAB_08755209;
          param_1[__n] = '\0';
          param_1 = param_1 + 1;
        }
      }
      uVar3 = 0x28;
      memcpy(param_1 + __n,local_2c + local_24,__n_00);
      local_24 = local_24 + __n_00;
      goto LAB_0875518b;
    }
  }
  local_20 = 0x3f2;
  uVar3 = 0;
LAB_0875518b:
  pcVar1 = local_2c;
  uVar4 = 0;
  memset(local_2c,0,local_30);
  operator_delete__(pcVar1,uVar4 & 0xffffff00);
  return uVar3;
}
```
