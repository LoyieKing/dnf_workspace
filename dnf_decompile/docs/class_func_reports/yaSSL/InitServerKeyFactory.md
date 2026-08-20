# InitServerKeyFactory

`_ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE`

`yaSSL::InitServerKeyFactory(yaSSL::Factory<yaSSL::ServerKeyBase, int, yaSSL::ServerKeyBase* (*)()>&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874c020` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874c020  _ZN5yaSSL20InitServerKeyFactoryERNS_7FactoryINS_13ServerKeyBaseEiPFPS1_vEEE
#           yaSSL::InitServerKeyFactory(yaSSL::Factory<yaSSL::ServerKeyBase, int, yaSSL::ServerKeyBase* (*)()>&)
# range [0x0874c020, 0x0874c2df]
0874c020 +0x000:  push   %ebp
0874c021 +0x001:  mov    %esp,%ebp
0874c023 +0x003:  push   %edi
0874c024 +0x004:  push   %esi
0874c025 +0x005:  push   %ebx
0874c026 +0x006:  sub    $0x2c,%esp
0874c029 +0x009:  mov    0x8(%ebp),%esi
0874c02c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874c031 +0x011:  add    $0xc20b67,%ebx
0874c037 +0x017:  mov    0x8(%esi),%edx
0874c03a +0x01a:  mov    %edx,%eax
0874c03c +0x01c:  sub    (%esi),%eax
0874c03e +0x01e:  sar    $0x3,%eax
0874c041 +0x021:  cmp    $0x2,%eax
0874c044 +0x024:  jbe    0874c0b0 <+0x90>
0874c046 +0x026:  mov    0x4(%esi),%eax
0874c049 +0x029:  cmp    %edx,%eax
0874c04b +0x02b:  je     0874c124 <+0x104>
0874c051 +0x031:  mov    -0x164(%ebx),%edx
0874c057 +0x037:  movl   $0x1,(%eax)
0874c05d +0x03d:  mov    %edx,0x4(%eax)
0874c060 +0x040:  mov    0x4(%esi),%eax
0874c063 +0x043:  add    $0x8,%eax
0874c066 +0x046:  cmp    %eax,0x8(%esi)
0874c069 +0x049:  mov    %eax,0x4(%esi)
0874c06c +0x04c:  je     0874c1b8 <+0x198>
0874c072 +0x052:  mov    -0x548(%ebx),%edx
0874c078 +0x058:  movl   $0x2,(%eax)
0874c07e +0x05e:  mov    %edx,0x4(%eax)
0874c081 +0x061:  mov    0x4(%esi),%eax
0874c084 +0x064:  add    $0x8,%eax
0874c087 +0x067:  cmp    %eax,0x8(%esi)
0874c08a +0x06a:  mov    %eax,0x4(%esi)
0874c08d +0x06d:  je     0874c250 <+0x230>
0874c093 +0x073:  mov    -0x3ec(%ebx),%edx
0874c099 +0x079:  addl   $0x8,0x4(%esi)
0874c09d +0x07d:  movl   $0x3,(%eax)
0874c0a3 +0x083:  mov    %edx,0x4(%eax)
0874c0a6 +0x086:  add    $0x2c,%esp
0874c0a9 +0x089:  pop    %ebx
0874c0aa +0x08a:  pop    %esi
0874c0ab +0x08b:  pop    %edi
0874c0ac +0x08c:  pop    %ebp
0874c0ad +0x08d:  ret
0874c0ae +0x08e:  xchg   %ax,%ax
0874c0b0 +0x090:  movb   $0x0,0x4(%esp)
0874c0b5 +0x095:  movl   $0x18,(%esp)
0874c0bc +0x09c:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c0c1 +0x0a1:  mov    0x4(%esi),%edi
0874c0c4 +0x0a4:  mov    (%esi),%ecx
0874c0c6 +0x0a6:  cmp    %ecx,%edi
0874c0c8 +0x0a8:  mov    %eax,%edx
0874c0ca +0x0aa:  je     0874c0fe <+0xde>
0874c0cc +0x0ac:  lea    0x8(%ecx),%edx
0874c0cf +0x0af:  sub    %edx,%edi
0874c0d1 +0x0b1:  xor    %edx,%edx
0874c0d3 +0x0b3:  shr    $0x3,%edi
0874c0d6 +0x0b6:  add    $0x1,%edi
0874c0d9 +0x0b9:  mov    %edi,-0x1c(%ebp)
0874c0dc +0x0bc:  mov    %esi,-0x20(%ebp)
0874c0df +0x0bf:  nop
0874c0e0 +0x0c0:  mov    (%ecx,%edx,8),%esi
0874c0e3 +0x0c3:  mov    0x4(%ecx,%edx,8),%edi
0874c0e7 +0x0c7:  mov    %esi,(%eax,%edx,8)
0874c0ea +0x0ca:  mov    %edi,0x4(%eax,%edx,8)
0874c0ee +0x0ce:  add    $0x1,%edx
0874c0f1 +0x0d1:  cmp    -0x1c(%ebp),%edx
0874c0f4 +0x0d4:  jne    0874c0e0 <+0xc0>
0874c0f6 +0x0d6:  mov    -0x20(%ebp),%esi
0874c0f9 +0x0d9:  lea    (%eax,%edx,8),%edx
0874c0fc +0x0dc:  mov    (%esi),%edi
0874c0fe +0x0de:  mov    %eax,(%esi)
0874c100 +0x0e0:  add    $0x18,%eax
0874c103 +0x0e3:  mov    %edx,0x4(%esi)
0874c106 +0x0e6:  mov    %eax,0x8(%esi)
0874c109 +0x0e9:  movb   $0x0,0x4(%esp)
0874c10e +0x0ee:  mov    %edi,(%esp)
0874c111 +0x0f1:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c116 +0x0f6:  mov    0x8(%esi),%edx
0874c119 +0x0f9:  mov    0x4(%esi),%eax
0874c11c +0x0fc:  cmp    %edx,%eax
0874c11e +0x0fe:  jne    0874c051 <+0x31>
0874c124 +0x104:  sub    (%esi),%edx
0874c126 +0x106:  sar    $0x3,%edx
0874c129 +0x109:  lea    0x1(%edx,%edx,1),%eax
0874c12d +0x10d:  shl    $0x3,%eax
0874c130 +0x110:  mov    %eax,-0x20(%ebp)
0874c133 +0x113:  movb   $0x0,0x4(%esp)
0874c138 +0x118:  mov    %eax,(%esp)
0874c13b +0x11b:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c140 +0x120:  mov    0x4(%esi),%edi
0874c143 +0x123:  mov    (%esi),%ecx
0874c145 +0x125:  cmp    %ecx,%edi
0874c147 +0x127:  mov    %eax,%edx
0874c149 +0x129:  je     0874c17c <+0x15c>
0874c14b +0x12b:  lea    0x8(%ecx),%edx
0874c14e +0x12e:  sub    %edx,%edi
0874c150 +0x130:  xor    %edx,%edx
0874c152 +0x132:  shr    $0x3,%edi
0874c155 +0x135:  add    $0x1,%edi
0874c158 +0x138:  mov    %edi,-0x1c(%ebp)
0874c15b +0x13b:  mov    %esi,-0x24(%ebp)
0874c15e +0x13e:  xchg   %ax,%ax
0874c160 +0x140:  mov    (%ecx,%edx,8),%esi
0874c163 +0x143:  mov    0x4(%ecx,%edx,8),%edi
0874c167 +0x147:  mov    %esi,(%eax,%edx,8)
0874c16a +0x14a:  mov    %edi,0x4(%eax,%edx,8)
0874c16e +0x14e:  add    $0x1,%edx
0874c171 +0x151:  cmp    -0x1c(%ebp),%edx
0874c174 +0x154:  jne    0874c160 <+0x140>
0874c176 +0x156:  mov    -0x24(%ebp),%esi
0874c179 +0x159:  lea    (%eax,%edx,8),%edx
0874c17c +0x15c:  mov    -0x164(%ebx),%ecx
0874c182 +0x162:  movl   $0x1,(%edx)
0874c188 +0x168:  mov    %ecx,0x4(%edx)
0874c18b +0x16b:  mov    (%esi),%ecx
0874c18d +0x16d:  add    $0x8,%edx
0874c190 +0x170:  mov    %eax,(%esi)
0874c192 +0x172:  add    -0x20(%ebp),%eax
0874c195 +0x175:  mov    %edx,0x4(%esi)
0874c198 +0x178:  mov    %eax,0x8(%esi)
0874c19b +0x17b:  movb   $0x0,0x4(%esp)
0874c1a0 +0x180:  mov    %ecx,(%esp)
0874c1a3 +0x183:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c1a8 +0x188:  mov    0x4(%esi),%eax
0874c1ab +0x18b:  cmp    %eax,0x8(%esi)
0874c1ae +0x18e:  jne    0874c072 <+0x52>
0874c1b4 +0x194:  lea    0x0(%esi,%eiz,1),%esi
0874c1b8 +0x198:  sub    (%esi),%eax
0874c1ba +0x19a:  sar    $0x3,%eax
0874c1bd +0x19d:  lea    0x1(%eax,%eax,1),%eax
0874c1c1 +0x1a1:  shl    $0x3,%eax
0874c1c4 +0x1a4:  mov    %eax,-0x20(%ebp)
0874c1c7 +0x1a7:  movb   $0x0,0x4(%esp)
0874c1cc +0x1ac:  mov    %eax,(%esp)
0874c1cf +0x1af:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c1d4 +0x1b4:  mov    0x4(%esi),%edi
0874c1d7 +0x1b7:  mov    (%esi),%ecx
0874c1d9 +0x1b9:  cmp    %ecx,%edi
0874c1db +0x1bb:  mov    %eax,%edx
0874c1dd +0x1bd:  je     0874c214 <+0x1f4>
0874c1df +0x1bf:  lea    0x8(%ecx),%edx
0874c1e2 +0x1c2:  sub    %edx,%edi
0874c1e4 +0x1c4:  xor    %edx,%edx
0874c1e6 +0x1c6:  shr    $0x3,%edi
0874c1e9 +0x1c9:  add    $0x1,%edi
0874c1ec +0x1cc:  mov    %edi,-0x1c(%ebp)
0874c1ef +0x1cf:  mov    %esi,-0x24(%ebp)
0874c1f2 +0x1d2:  lea    0x0(%esi),%esi
0874c1f8 +0x1d8:  mov    (%ecx,%edx,8),%esi
0874c1fb +0x1db:  mov    0x4(%ecx,%edx,8),%edi
0874c1ff +0x1df:  mov    %esi,(%eax,%edx,8)
0874c202 +0x1e2:  mov    %edi,0x4(%eax,%edx,8)
0874c206 +0x1e6:  add    $0x1,%edx
0874c209 +0x1e9:  cmp    -0x1c(%ebp),%edx
0874c20c +0x1ec:  jne    0874c1f8 <+0x1d8>
0874c20e +0x1ee:  mov    -0x24(%ebp),%esi
0874c211 +0x1f1:  lea    (%eax,%edx,8),%edx
0874c214 +0x1f4:  mov    -0x548(%ebx),%ecx
0874c21a +0x1fa:  movl   $0x2,(%edx)
0874c220 +0x200:  mov    %ecx,0x4(%edx)
0874c223 +0x203:  mov    (%esi),%ecx
0874c225 +0x205:  add    $0x8,%edx
0874c228 +0x208:  mov    %eax,(%esi)
0874c22a +0x20a:  add    -0x20(%ebp),%eax
0874c22d +0x20d:  mov    %edx,0x4(%esi)
0874c230 +0x210:  mov    %eax,0x8(%esi)
0874c233 +0x213:  movb   $0x0,0x4(%esp)
0874c238 +0x218:  mov    %ecx,(%esp)
0874c23b +0x21b:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c240 +0x220:  mov    0x4(%esi),%eax
0874c243 +0x223:  cmp    %eax,0x8(%esi)
0874c246 +0x226:  jne    0874c093 <+0x73>
0874c24c +0x22c:  lea    0x0(%esi,%eiz,1),%esi
0874c250 +0x230:  sub    (%esi),%eax
0874c252 +0x232:  sar    $0x3,%eax
0874c255 +0x235:  lea    0x1(%eax,%eax,1),%eax
0874c259 +0x239:  shl    $0x3,%eax
0874c25c +0x23c:  mov    %eax,-0x20(%ebp)
0874c25f +0x23f:  movb   $0x0,0x4(%esp)
0874c264 +0x244:  mov    %eax,(%esp)
0874c267 +0x247:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c26c +0x24c:  mov    0x4(%esi),%edi
0874c26f +0x24f:  mov    (%esi),%ecx
0874c271 +0x251:  cmp    %ecx,%edi
0874c273 +0x253:  mov    %eax,%edx
0874c275 +0x255:  je     0874c2ac <+0x28c>
0874c277 +0x257:  lea    0x8(%ecx),%edx
0874c27a +0x25a:  sub    %edx,%edi
0874c27c +0x25c:  xor    %edx,%edx
0874c27e +0x25e:  shr    $0x3,%edi
0874c281 +0x261:  add    $0x1,%edi
0874c284 +0x264:  mov    %edi,-0x1c(%ebp)
0874c287 +0x267:  mov    %esi,-0x24(%ebp)
0874c28a +0x26a:  lea    0x0(%esi),%esi
0874c290 +0x270:  mov    (%ecx,%edx,8),%esi
0874c293 +0x273:  mov    0x4(%ecx,%edx,8),%edi
0874c297 +0x277:  mov    %esi,(%eax,%edx,8)
0874c29a +0x27a:  mov    %edi,0x4(%eax,%edx,8)
0874c29e +0x27e:  add    $0x1,%edx
0874c2a1 +0x281:  cmp    -0x1c(%ebp),%edx
0874c2a4 +0x284:  jne    0874c290 <+0x270>
0874c2a6 +0x286:  mov    -0x24(%ebp),%esi
0874c2a9 +0x289:  lea    (%eax,%edx,8),%edx
0874c2ac +0x28c:  mov    -0x3ec(%ebx),%ecx
0874c2b2 +0x292:  movl   $0x3,(%edx)
0874c2b8 +0x298:  mov    %ecx,0x4(%edx)
0874c2bb +0x29b:  mov    (%esi),%ecx
0874c2bd +0x29d:  add    $0x8,%edx
0874c2c0 +0x2a0:  mov    %eax,(%esi)
0874c2c2 +0x2a2:  add    -0x20(%ebp),%eax
0874c2c5 +0x2a5:  mov    %edx,0x4(%esi)
0874c2c8 +0x2a8:  mov    %eax,0x8(%esi)
0874c2cb +0x2ab:  movb   $0x0,0x4(%esp)
0874c2d0 +0x2b0:  mov    %ecx,(%esp)
0874c2d3 +0x2b3:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c2d8 +0x2b8:  add    $0x2c,%esp
0874c2db +0x2bb:  pop    %ebx
0874c2dc +0x2bc:  pop    %esi
0874c2dd +0x2bd:  pop    %edi
0874c2de +0x2be:  pop    %ebp
0874c2df +0x2bf:  ret
```

## 反编译 C

```c
// yaSSL::InitServerKeyFactory @ 0x874c020

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitServerKeyFactory(yaSSL::Factory<yaSSL::ServerKeyBase, int, yaSSL::ServerKeyBase*
   (*)()>&) */

void yaSSL::InitServerKeyFactory(Factory *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 3) {
    pvVar5 = operator_new__(0x18,0);
    iVar10 = *(int *)(param_1 + 4);
    iVar1 = *(int *)param_1;
    pvVar8 = pvVar5;
    if (iVar10 != iVar1) {
      iVar7 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar1 + 4 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8) = *(undefined4 *)(iVar1 + iVar7 * 8);
        *(undefined4 *)((int)pvVar5 + iVar7 * 8 + 4) = uVar2;
        iVar7 = iVar7 + 1;
      } while (iVar7 != ((uint)(iVar10 - (iVar1 + 8)) >> 3) + 1);
      pvVar8 = (void *)((int)pvVar5 + iVar7 * 8);
      iVar10 = *(int *)param_1;
    }
    *(void **)param_1 = pvVar5;
    *(void **)(param_1 + 4) = pvVar8;
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x18;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874c051;
LAB_0874c124:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateRSAServerKEA_0936ca34;
    *puVar4 = 1;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c1b8:
      iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
      puVar6 = operator_new__(iVar10 * 8,0);
      iVar1 = *(int *)(param_1 + 4);
      iVar7 = *(int *)param_1;
      puVar4 = puVar6;
      if (iVar1 != iVar7) {
        iVar9 = 0;
        do {
          uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
          puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
          puVar6[iVar9 * 2 + 1] = uVar2;
          iVar9 = iVar9 + 1;
        } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
        puVar4 = puVar6 + iVar9 * 2;
      }
      puVar3 = PTR_CreateDHServerKEA_0936c650;
      *puVar4 = 2;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c250;
      goto LAB_0874c093;
    }
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874c124;
LAB_0874c051:
    puVar3 = PTR_CreateRSAServerKEA_0936ca34;
    *puVar6 = 1;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c1b8;
  }
  puVar3 = PTR_CreateDHServerKEA_0936c650;
  *puVar4 = 2;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c250:
    iVar10 = ((int)puVar4 - *(int *)param_1 >> 3) * 2 + 1;
    puVar6 = operator_new__(iVar10 * 8,0);
    iVar1 = *(int *)(param_1 + 4);
    iVar7 = *(int *)param_1;
    puVar4 = puVar6;
    if (iVar1 != iVar7) {
      iVar9 = 0;
      do {
        uVar2 = *(undefined4 *)(iVar7 + 4 + iVar9 * 8);
        puVar6[iVar9 * 2] = *(undefined4 *)(iVar7 + iVar9 * 8);
        puVar6[iVar9 * 2 + 1] = uVar2;
        iVar9 = iVar9 + 1;
      } while (iVar9 != ((uint)(iVar1 - (iVar7 + 8)) >> 3) + 1);
      puVar4 = puVar6 + iVar9 * 2;
    }
    puVar3 = PTR_CreateFortezzaServerKEA_0936c7ac;
    *puVar4 = 3;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874c093:
  puVar3 = PTR_CreateFortezzaServerKEA_0936c7ac;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 3;
  puVar4[1] = puVar3;
  return;
}
```
