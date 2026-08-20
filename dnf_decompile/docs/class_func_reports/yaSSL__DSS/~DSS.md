# ~DSS

`_ZN5yaSSL3DSSD1Ev`

`yaSSL::DSS::~DSS()`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS` | `0x0879ba40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879ba40  _ZN5yaSSL3DSSD1Ev
#           yaSSL::DSS::~DSS()
# range [0x0879ba40, 0x0879bc2a]
0879ba40 +0x000:  push   %ebp
0879ba41 +0x001:  mov    %esp,%ebp
0879ba43 +0x003:  push   %edi
0879ba44 +0x004:  push   %esi
0879ba45 +0x005:  push   %ebx
0879ba46 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ba4b +0x00b:  add    $0xbd114d,%ebx
0879ba51 +0x011:  sub    $0x2c,%esp
0879ba54 +0x014:  mov    0x8(%ebp),%edx
0879ba57 +0x017:  mov    0x4(%edx),%esi
0879ba5a +0x01a:  mov    -0x2e8(%ebx),%eax
0879ba60 +0x020:  add    $0x8,%eax
0879ba63 +0x023:  test   %esi,%esi
0879ba65 +0x025:  mov    %eax,(%edx)
0879ba67 +0x027:  je     0879bc01 <+0x1c1>
0879ba6d +0x02d:  mov    0x80(%esi),%eax
0879ba73 +0x033:  mov    0x84(%esi),%edi
0879ba79 +0x039:  movl   $0x0,0x4(%esp)
0879ba81 +0x041:  shl    $0x2,%eax
0879ba84 +0x044:  mov    %edi,(%esp)
0879ba87 +0x047:  mov    %eax,0x8(%esp)
0879ba8b +0x04b:  call   0807dcc0 <_init+0x5b8>
0879ba90 +0x050:  mov    %edi,(%esp)
0879ba93 +0x053:  lea    0x40(%esi),%edi
0879ba96 +0x056:  movb   $0x0,0x4(%esp)
0879ba9b +0x05b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879baa0 +0x060:  mov    0x30(%edi),%eax
0879baa3 +0x063:  mov    0x34(%edi),%edx
0879baa6 +0x066:  movl   $0x0,0x4(%esp)
0879baae +0x06e:  shl    $0x2,%eax
0879bab1 +0x071:  mov    %edx,(%esp)
0879bab4 +0x074:  mov    %edx,-0x1c(%ebp)
0879bab7 +0x077:  mov    %eax,0x8(%esp)
0879babb +0x07b:  call   0807dcc0 <_init+0x5b8>
0879bac0 +0x080:  mov    -0x1c(%ebp),%edx
0879bac3 +0x083:  movb   $0x0,0x4(%esp)
0879bac8 +0x088:  mov    %edx,(%esp)
0879bacb +0x08b:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bad0 +0x090:  mov    0x20(%edi),%eax
0879bad3 +0x093:  mov    0x24(%edi),%edx
0879bad6 +0x096:  movl   $0x0,0x4(%esp)
0879bade +0x09e:  shl    $0x2,%eax
0879bae1 +0x0a1:  mov    %edx,(%esp)
0879bae4 +0x0a4:  mov    %edx,-0x1c(%ebp)
0879bae7 +0x0a7:  mov    %eax,0x8(%esp)
0879baeb +0x0ab:  call   0807dcc0 <_init+0x5b8>
0879baf0 +0x0b0:  mov    -0x1c(%ebp),%edx
0879baf3 +0x0b3:  movb   $0x0,0x4(%esp)
0879baf8 +0x0b8:  mov    %edx,(%esp)
0879bafb +0x0bb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bb00 +0x0c0:  mov    0x10(%edi),%eax
0879bb03 +0x0c3:  mov    0x14(%edi),%edx
0879bb06 +0x0c6:  movl   $0x0,0x4(%esp)
0879bb0e +0x0ce:  shl    $0x2,%eax
0879bb11 +0x0d1:  mov    %edx,(%esp)
0879bb14 +0x0d4:  mov    %edx,-0x1c(%ebp)
0879bb17 +0x0d7:  mov    %eax,0x8(%esp)
0879bb1b +0x0db:  call   0807dcc0 <_init+0x5b8>
0879bb20 +0x0e0:  mov    -0x1c(%ebp),%edx
0879bb23 +0x0e3:  movb   $0x0,0x4(%esp)
0879bb28 +0x0e8:  mov    %edx,(%esp)
0879bb2b +0x0eb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bb30 +0x0f0:  mov    0x40(%esi),%eax
0879bb33 +0x0f3:  mov    0x4(%edi),%edi
0879bb36 +0x0f6:  movl   $0x0,0x4(%esp)
0879bb3e +0x0fe:  shl    $0x2,%eax
0879bb41 +0x101:  mov    %edi,(%esp)
0879bb44 +0x104:  mov    %eax,0x8(%esp)
0879bb48 +0x108:  call   0807dcc0 <_init+0x5b8>
0879bb4d +0x10d:  mov    %edi,(%esp)
0879bb50 +0x110:  movb   $0x0,0x4(%esp)
0879bb55 +0x115:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bb5a +0x11a:  mov    0x30(%esi),%eax
0879bb5d +0x11d:  mov    0x34(%esi),%edi
0879bb60 +0x120:  movl   $0x0,0x4(%esp)
0879bb68 +0x128:  shl    $0x2,%eax
0879bb6b +0x12b:  mov    %edi,(%esp)
0879bb6e +0x12e:  mov    %eax,0x8(%esp)
0879bb72 +0x132:  call   0807dcc0 <_init+0x5b8>
0879bb77 +0x137:  mov    %edi,(%esp)
0879bb7a +0x13a:  movb   $0x0,0x4(%esp)
0879bb7f +0x13f:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bb84 +0x144:  mov    0x20(%esi),%eax
0879bb87 +0x147:  mov    0x24(%esi),%edi
0879bb8a +0x14a:  movl   $0x0,0x4(%esp)
0879bb92 +0x152:  shl    $0x2,%eax
0879bb95 +0x155:  mov    %edi,(%esp)
0879bb98 +0x158:  mov    %eax,0x8(%esp)
0879bb9c +0x15c:  call   0807dcc0 <_init+0x5b8>
0879bba1 +0x161:  mov    %edi,(%esp)
0879bba4 +0x164:  movb   $0x0,0x4(%esp)
0879bba9 +0x169:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bbae +0x16e:  mov    0x10(%esi),%eax
0879bbb1 +0x171:  mov    0x14(%esi),%edi
0879bbb4 +0x174:  movl   $0x0,0x4(%esp)
0879bbbc +0x17c:  shl    $0x2,%eax
0879bbbf +0x17f:  mov    %edi,(%esp)
0879bbc2 +0x182:  mov    %eax,0x8(%esp)
0879bbc6 +0x186:  call   0807dcc0 <_init+0x5b8>
0879bbcb +0x18b:  mov    %edi,(%esp)
0879bbce +0x18e:  movb   $0x0,0x4(%esp)
0879bbd3 +0x193:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bbd8 +0x198:  mov    (%esi),%eax
0879bbda +0x19a:  mov    0x4(%esi),%edi
0879bbdd +0x19d:  movl   $0x0,0x4(%esp)
0879bbe5 +0x1a5:  shl    $0x2,%eax
0879bbe8 +0x1a8:  mov    %eax,0x8(%esp)
0879bbec +0x1ac:  mov    %edi,(%esp)
0879bbef +0x1af:  call   0807dcc0 <_init+0x5b8>
0879bbf4 +0x1b4:  movb   $0x0,0x4(%esp)
0879bbf9 +0x1b9:  mov    %edi,(%esp)
0879bbfc +0x1bc:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879bc01 +0x1c1:  mov    %esi,(%esp)
0879bc04 +0x1c4:  movb   $0x0,0x4(%esp)
0879bc09 +0x1c9:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879bc0e +0x1ce:  mov    -0x2dc(%ebx),%eax
0879bc14 +0x1d4:  mov    0x8(%ebp),%edx
0879bc17 +0x1d7:  add    $0x8,%eax
0879bc1a +0x1da:  mov    %eax,(%edx)
0879bc1c +0x1dc:  add    $0x2c,%esp
0879bc1f +0x1df:  pop    %ebx
0879bc20 +0x1e0:  pop    %esi
0879bc21 +0x1e1:  pop    %edi
0879bc22 +0x1e2:  pop    %ebp
0879bc23 +0x1e3:  ret
0879bc24 +0x1e4:  lea    0x0(%esi),%esi
0879bc2a +0x1ea:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DSS::~DSS @ 0x879ba40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::~DSS() */

void __thiscall yaSSL::DSS::~DSS(DSS *this)

{
  int *piVar1;
  void *pvVar2;
  uint in_stack_ffffffc8;
  uint uVar3;
  
  piVar1 = *(int **)(this + 4);
  *(undefined **)this = PTR_vtable_0936c8b0 + 8;
  if (piVar1 != (int *)0x0) {
    pvVar2 = (void *)piVar1[0x21];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x20] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x1d];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x1c] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x19];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x18] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x15];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x14] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0x11];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0x10] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[0xd];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[0xc] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[9];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[8] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[5];
    uVar3 = 0;
    memset(pvVar2,0,piVar1[4] << 2);
    operator_delete__(pvVar2,uVar3 & 0xffffff00);
    pvVar2 = (void *)piVar1[1];
    uVar3 = 0;
    memset(pvVar2,0,*piVar1 << 2);
    in_stack_ffffffc8 = uVar3 & 0xffffff00;
    operator_delete__(pvVar2,in_stack_ffffffc8);
  }
  operator_delete(piVar1,in_stack_ffffffc8 & 0xffffff00);
  *(undefined **)this = PTR_vtable_0936c8bc + 8;
  return;
}
```
