# InitMessageFactory

`_ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE`

`yaSSL::InitMessageFactory(yaSSL::Factory<yaSSL::Message, int, yaSSL::Message* (*)()>&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x0874c5a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874c5a0  _ZN5yaSSL18InitMessageFactoryERNS_7FactoryINS_7MessageEiPFPS1_vEEE
#           yaSSL::InitMessageFactory(yaSSL::Factory<yaSSL::Message, int, yaSSL::Message* (*)()>&)
# range [0x0874c5a0, 0x0874c91f]
0874c5a0 +0x000:  push   %ebp
0874c5a1 +0x001:  mov    %esp,%ebp
0874c5a3 +0x003:  push   %edi
0874c5a4 +0x004:  push   %esi
0874c5a5 +0x005:  push   %ebx
0874c5a6 +0x006:  sub    $0x2c,%esp
0874c5a9 +0x009:  mov    0x8(%ebp),%esi
0874c5ac +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874c5b1 +0x011:  add    $0xc205e7,%ebx
0874c5b7 +0x017:  mov    0x8(%esi),%edx
0874c5ba +0x01a:  mov    %edx,%eax
0874c5bc +0x01c:  sub    (%esi),%eax
0874c5be +0x01e:  sar    $0x3,%eax
0874c5c1 +0x021:  cmp    $0x3,%eax
0874c5c4 +0x024:  jbe    0874c658 <+0xb8>
0874c5ca +0x02a:  mov    0x4(%esi),%eax
0874c5cd +0x02d:  cmp    %edx,%eax
0874c5cf +0x02f:  je     0874c6cc <+0x12c>
0874c5d5 +0x035:  mov    -0x494(%ebx),%edx
0874c5db +0x03b:  movl   $0x15,(%eax)
0874c5e1 +0x041:  mov    %edx,0x4(%eax)
0874c5e4 +0x044:  mov    0x4(%esi),%eax
0874c5e7 +0x047:  add    $0x8,%eax
0874c5ea +0x04a:  cmp    %eax,0x8(%esi)
0874c5ed +0x04d:  mov    %eax,0x4(%esi)
0874c5f0 +0x050:  je     0874c760 <+0x1c0>
0874c5f6 +0x056:  mov    -0x270(%ebx),%edx
0874c5fc +0x05c:  movl   $0x14,(%eax)
0874c602 +0x062:  mov    %edx,0x4(%eax)
0874c605 +0x065:  mov    0x4(%esi),%eax
0874c608 +0x068:  add    $0x8,%eax
0874c60b +0x06b:  cmp    %eax,0x8(%esi)
0874c60e +0x06e:  mov    %eax,0x4(%esi)
0874c611 +0x071:  je     0874c7f8 <+0x258>
0874c617 +0x077:  mov    -0x12c(%ebx),%edx
0874c61d +0x07d:  movl   $0x16,(%eax)
0874c623 +0x083:  mov    %edx,0x4(%eax)
0874c626 +0x086:  mov    0x4(%esi),%eax
0874c629 +0x089:  add    $0x8,%eax
0874c62c +0x08c:  cmp    %eax,0x8(%esi)
0874c62f +0x08f:  mov    %eax,0x4(%esi)
0874c632 +0x092:  je     0874c890 <+0x2f0>
0874c638 +0x098:  mov    -0x364(%ebx),%edx
0874c63e +0x09e:  addl   $0x8,0x4(%esi)
0874c642 +0x0a2:  movl   $0x17,(%eax)
0874c648 +0x0a8:  mov    %edx,0x4(%eax)
0874c64b +0x0ab:  add    $0x2c,%esp
0874c64e +0x0ae:  pop    %ebx
0874c64f +0x0af:  pop    %esi
0874c650 +0x0b0:  pop    %edi
0874c651 +0x0b1:  pop    %ebp
0874c652 +0x0b2:  ret
0874c653 +0x0b3:  nop
0874c654 +0x0b4:  lea    0x0(%esi,%eiz,1),%esi
0874c658 +0x0b8:  movb   $0x0,0x4(%esp)
0874c65d +0x0bd:  movl   $0x20,(%esp)
0874c664 +0x0c4:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c669 +0x0c9:  mov    0x4(%esi),%edi
0874c66c +0x0cc:  mov    (%esi),%ecx
0874c66e +0x0ce:  cmp    %ecx,%edi
0874c670 +0x0d0:  mov    %eax,%edx
0874c672 +0x0d2:  je     0874c6a6 <+0x106>
0874c674 +0x0d4:  lea    0x8(%ecx),%edx
0874c677 +0x0d7:  sub    %edx,%edi
0874c679 +0x0d9:  xor    %edx,%edx
0874c67b +0x0db:  shr    $0x3,%edi
0874c67e +0x0de:  add    $0x1,%edi
0874c681 +0x0e1:  mov    %edi,-0x1c(%ebp)
0874c684 +0x0e4:  mov    %esi,-0x20(%ebp)
0874c687 +0x0e7:  nop
0874c688 +0x0e8:  mov    (%ecx,%edx,8),%esi
0874c68b +0x0eb:  mov    0x4(%ecx,%edx,8),%edi
0874c68f +0x0ef:  mov    %esi,(%eax,%edx,8)
0874c692 +0x0f2:  mov    %edi,0x4(%eax,%edx,8)
0874c696 +0x0f6:  add    $0x1,%edx
0874c699 +0x0f9:  cmp    -0x1c(%ebp),%edx
0874c69c +0x0fc:  jne    0874c688 <+0xe8>
0874c69e +0x0fe:  mov    -0x20(%ebp),%esi
0874c6a1 +0x101:  lea    (%eax,%edx,8),%edx
0874c6a4 +0x104:  mov    (%esi),%edi
0874c6a6 +0x106:  mov    %eax,(%esi)
0874c6a8 +0x108:  add    $0x20,%eax
0874c6ab +0x10b:  mov    %edx,0x4(%esi)
0874c6ae +0x10e:  mov    %eax,0x8(%esi)
0874c6b1 +0x111:  movb   $0x0,0x4(%esp)
0874c6b6 +0x116:  mov    %edi,(%esp)
0874c6b9 +0x119:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c6be +0x11e:  mov    0x8(%esi),%edx
0874c6c1 +0x121:  mov    0x4(%esi),%eax
0874c6c4 +0x124:  cmp    %edx,%eax
0874c6c6 +0x126:  jne    0874c5d5 <+0x35>
0874c6cc +0x12c:  sub    (%esi),%edx
0874c6ce +0x12e:  sar    $0x3,%edx
0874c6d1 +0x131:  lea    0x1(%edx,%edx,1),%eax
0874c6d5 +0x135:  shl    $0x3,%eax
0874c6d8 +0x138:  mov    %eax,-0x20(%ebp)
0874c6db +0x13b:  movb   $0x0,0x4(%esp)
0874c6e0 +0x140:  mov    %eax,(%esp)
0874c6e3 +0x143:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c6e8 +0x148:  mov    0x4(%esi),%edi
0874c6eb +0x14b:  mov    (%esi),%ecx
0874c6ed +0x14d:  cmp    %ecx,%edi
0874c6ef +0x14f:  mov    %eax,%edx
0874c6f1 +0x151:  je     0874c724 <+0x184>
0874c6f3 +0x153:  lea    0x8(%ecx),%edx
0874c6f6 +0x156:  sub    %edx,%edi
0874c6f8 +0x158:  xor    %edx,%edx
0874c6fa +0x15a:  shr    $0x3,%edi
0874c6fd +0x15d:  add    $0x1,%edi
0874c700 +0x160:  mov    %edi,-0x1c(%ebp)
0874c703 +0x163:  mov    %esi,-0x24(%ebp)
0874c706 +0x166:  xchg   %ax,%ax
0874c708 +0x168:  mov    (%ecx,%edx,8),%esi
0874c70b +0x16b:  mov    0x4(%ecx,%edx,8),%edi
0874c70f +0x16f:  mov    %esi,(%eax,%edx,8)
0874c712 +0x172:  mov    %edi,0x4(%eax,%edx,8)
0874c716 +0x176:  add    $0x1,%edx
0874c719 +0x179:  cmp    -0x1c(%ebp),%edx
0874c71c +0x17c:  jne    0874c708 <+0x168>
0874c71e +0x17e:  mov    -0x24(%ebp),%esi
0874c721 +0x181:  lea    (%eax,%edx,8),%edx
0874c724 +0x184:  mov    -0x494(%ebx),%ecx
0874c72a +0x18a:  movl   $0x15,(%edx)
0874c730 +0x190:  mov    %ecx,0x4(%edx)
0874c733 +0x193:  mov    (%esi),%ecx
0874c735 +0x195:  add    $0x8,%edx
0874c738 +0x198:  mov    %eax,(%esi)
0874c73a +0x19a:  add    -0x20(%ebp),%eax
0874c73d +0x19d:  mov    %edx,0x4(%esi)
0874c740 +0x1a0:  mov    %eax,0x8(%esi)
0874c743 +0x1a3:  movb   $0x0,0x4(%esp)
0874c748 +0x1a8:  mov    %ecx,(%esp)
0874c74b +0x1ab:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c750 +0x1b0:  mov    0x4(%esi),%eax
0874c753 +0x1b3:  cmp    %eax,0x8(%esi)
0874c756 +0x1b6:  jne    0874c5f6 <+0x56>
0874c75c +0x1bc:  lea    0x0(%esi,%eiz,1),%esi
0874c760 +0x1c0:  sub    (%esi),%eax
0874c762 +0x1c2:  sar    $0x3,%eax
0874c765 +0x1c5:  lea    0x1(%eax,%eax,1),%eax
0874c769 +0x1c9:  shl    $0x3,%eax
0874c76c +0x1cc:  mov    %eax,-0x20(%ebp)
0874c76f +0x1cf:  movb   $0x0,0x4(%esp)
0874c774 +0x1d4:  mov    %eax,(%esp)
0874c777 +0x1d7:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c77c +0x1dc:  mov    0x4(%esi),%edi
0874c77f +0x1df:  mov    (%esi),%ecx
0874c781 +0x1e1:  cmp    %ecx,%edi
0874c783 +0x1e3:  mov    %eax,%edx
0874c785 +0x1e5:  je     0874c7bc <+0x21c>
0874c787 +0x1e7:  lea    0x8(%ecx),%edx
0874c78a +0x1ea:  sub    %edx,%edi
0874c78c +0x1ec:  xor    %edx,%edx
0874c78e +0x1ee:  shr    $0x3,%edi
0874c791 +0x1f1:  add    $0x1,%edi
0874c794 +0x1f4:  mov    %edi,-0x1c(%ebp)
0874c797 +0x1f7:  mov    %esi,-0x24(%ebp)
0874c79a +0x1fa:  lea    0x0(%esi),%esi
0874c7a0 +0x200:  mov    (%ecx,%edx,8),%esi
0874c7a3 +0x203:  mov    0x4(%ecx,%edx,8),%edi
0874c7a7 +0x207:  mov    %esi,(%eax,%edx,8)
0874c7aa +0x20a:  mov    %edi,0x4(%eax,%edx,8)
0874c7ae +0x20e:  add    $0x1,%edx
0874c7b1 +0x211:  cmp    -0x1c(%ebp),%edx
0874c7b4 +0x214:  jne    0874c7a0 <+0x200>
0874c7b6 +0x216:  mov    -0x24(%ebp),%esi
0874c7b9 +0x219:  lea    (%eax,%edx,8),%edx
0874c7bc +0x21c:  mov    -0x270(%ebx),%ecx
0874c7c2 +0x222:  movl   $0x14,(%edx)
0874c7c8 +0x228:  mov    %ecx,0x4(%edx)
0874c7cb +0x22b:  mov    (%esi),%ecx
0874c7cd +0x22d:  add    $0x8,%edx
0874c7d0 +0x230:  mov    %eax,(%esi)
0874c7d2 +0x232:  add    -0x20(%ebp),%eax
0874c7d5 +0x235:  mov    %edx,0x4(%esi)
0874c7d8 +0x238:  mov    %eax,0x8(%esi)
0874c7db +0x23b:  movb   $0x0,0x4(%esp)
0874c7e0 +0x240:  mov    %ecx,(%esp)
0874c7e3 +0x243:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c7e8 +0x248:  mov    0x4(%esi),%eax
0874c7eb +0x24b:  cmp    %eax,0x8(%esi)
0874c7ee +0x24e:  jne    0874c617 <+0x77>
0874c7f4 +0x254:  lea    0x0(%esi,%eiz,1),%esi
0874c7f8 +0x258:  sub    (%esi),%eax
0874c7fa +0x25a:  sar    $0x3,%eax
0874c7fd +0x25d:  lea    0x1(%eax,%eax,1),%eax
0874c801 +0x261:  shl    $0x3,%eax
0874c804 +0x264:  mov    %eax,-0x20(%ebp)
0874c807 +0x267:  movb   $0x0,0x4(%esp)
0874c80c +0x26c:  mov    %eax,(%esp)
0874c80f +0x26f:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c814 +0x274:  mov    0x4(%esi),%edi
0874c817 +0x277:  mov    (%esi),%ecx
0874c819 +0x279:  cmp    %ecx,%edi
0874c81b +0x27b:  mov    %eax,%edx
0874c81d +0x27d:  je     0874c854 <+0x2b4>
0874c81f +0x27f:  lea    0x8(%ecx),%edx
0874c822 +0x282:  sub    %edx,%edi
0874c824 +0x284:  xor    %edx,%edx
0874c826 +0x286:  shr    $0x3,%edi
0874c829 +0x289:  add    $0x1,%edi
0874c82c +0x28c:  mov    %edi,-0x1c(%ebp)
0874c82f +0x28f:  mov    %esi,-0x24(%ebp)
0874c832 +0x292:  lea    0x0(%esi),%esi
0874c838 +0x298:  mov    (%ecx,%edx,8),%esi
0874c83b +0x29b:  mov    0x4(%ecx,%edx,8),%edi
0874c83f +0x29f:  mov    %esi,(%eax,%edx,8)
0874c842 +0x2a2:  mov    %edi,0x4(%eax,%edx,8)
0874c846 +0x2a6:  add    $0x1,%edx
0874c849 +0x2a9:  cmp    -0x1c(%ebp),%edx
0874c84c +0x2ac:  jne    0874c838 <+0x298>
0874c84e +0x2ae:  mov    -0x24(%ebp),%esi
0874c851 +0x2b1:  lea    (%eax,%edx,8),%edx
0874c854 +0x2b4:  mov    -0x12c(%ebx),%ecx
0874c85a +0x2ba:  movl   $0x16,(%edx)
0874c860 +0x2c0:  mov    %ecx,0x4(%edx)
0874c863 +0x2c3:  mov    (%esi),%ecx
0874c865 +0x2c5:  add    $0x8,%edx
0874c868 +0x2c8:  mov    %eax,(%esi)
0874c86a +0x2ca:  add    -0x20(%ebp),%eax
0874c86d +0x2cd:  mov    %edx,0x4(%esi)
0874c870 +0x2d0:  mov    %eax,0x8(%esi)
0874c873 +0x2d3:  movb   $0x0,0x4(%esp)
0874c878 +0x2d8:  mov    %ecx,(%esp)
0874c87b +0x2db:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c880 +0x2e0:  mov    0x4(%esi),%eax
0874c883 +0x2e3:  cmp    %eax,0x8(%esi)
0874c886 +0x2e6:  jne    0874c638 <+0x98>
0874c88c +0x2ec:  lea    0x0(%esi,%eiz,1),%esi
0874c890 +0x2f0:  sub    (%esi),%eax
0874c892 +0x2f2:  sar    $0x3,%eax
0874c895 +0x2f5:  lea    0x1(%eax,%eax,1),%eax
0874c899 +0x2f9:  shl    $0x3,%eax
0874c89c +0x2fc:  mov    %eax,-0x20(%ebp)
0874c89f +0x2ff:  movb   $0x0,0x4(%esp)
0874c8a4 +0x304:  mov    %eax,(%esp)
0874c8a7 +0x307:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0874c8ac +0x30c:  mov    0x4(%esi),%edi
0874c8af +0x30f:  mov    (%esi),%ecx
0874c8b1 +0x311:  cmp    %ecx,%edi
0874c8b3 +0x313:  mov    %eax,%edx
0874c8b5 +0x315:  je     0874c8ec <+0x34c>
0874c8b7 +0x317:  lea    0x8(%ecx),%edx
0874c8ba +0x31a:  sub    %edx,%edi
0874c8bc +0x31c:  xor    %edx,%edx
0874c8be +0x31e:  shr    $0x3,%edi
0874c8c1 +0x321:  add    $0x1,%edi
0874c8c4 +0x324:  mov    %edi,-0x1c(%ebp)
0874c8c7 +0x327:  mov    %esi,-0x24(%ebp)
0874c8ca +0x32a:  lea    0x0(%esi),%esi
0874c8d0 +0x330:  mov    (%ecx,%edx,8),%esi
0874c8d3 +0x333:  mov    0x4(%ecx,%edx,8),%edi
0874c8d7 +0x337:  mov    %esi,(%eax,%edx,8)
0874c8da +0x33a:  mov    %edi,0x4(%eax,%edx,8)
0874c8de +0x33e:  add    $0x1,%edx
0874c8e1 +0x341:  cmp    -0x1c(%ebp),%edx
0874c8e4 +0x344:  jne    0874c8d0 <+0x330>
0874c8e6 +0x346:  mov    -0x24(%ebp),%esi
0874c8e9 +0x349:  lea    (%eax,%edx,8),%edx
0874c8ec +0x34c:  mov    -0x364(%ebx),%ecx
0874c8f2 +0x352:  movl   $0x17,(%edx)
0874c8f8 +0x358:  mov    %ecx,0x4(%edx)
0874c8fb +0x35b:  mov    (%esi),%ecx
0874c8fd +0x35d:  add    $0x8,%edx
0874c900 +0x360:  mov    %eax,(%esi)
0874c902 +0x362:  add    -0x20(%ebp),%eax
0874c905 +0x365:  mov    %edx,0x4(%esi)
0874c908 +0x368:  mov    %eax,0x8(%esi)
0874c90b +0x36b:  movb   $0x0,0x4(%esp)
0874c910 +0x370:  mov    %ecx,(%esp)
0874c913 +0x373:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874c918 +0x378:  add    $0x2c,%esp
0874c91b +0x37b:  pop    %ebx
0874c91c +0x37c:  pop    %esi
0874c91d +0x37d:  pop    %edi
0874c91e +0x37e:  pop    %ebp
0874c91f +0x37f:  ret
```

## 反编译 C

```c
// yaSSL::InitMessageFactory @ 0x874c5a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::InitMessageFactory(yaSSL::Factory<yaSSL::Message, int, yaSSL::Message* (*)()>&) */

void yaSSL::InitMessageFactory(Factory *param_1)

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
  if ((uint)((int)puVar4 - *(int *)param_1 >> 3) < 4) {
    pvVar5 = operator_new__(0x20,0);
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
    *(int *)(param_1 + 8) = (int)pvVar5 + 0x20;
    operator_delete__(iVar10,0);
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 != puVar4) goto LAB_0874c5d5;
LAB_0874c6cc:
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
    puVar3 = PTR_CreateAlert_0936c704;
    *puVar4 = 0x15;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) != puVar4) goto LAB_0874c5f6;
LAB_0874c760:
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
    puVar3 = PTR_CreateCipherSpec_0936c928;
    *puVar4 = 0x14;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    puVar4 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c7f8;
  }
  else {
    puVar6 = *(undefined4 **)(param_1 + 4);
    if (puVar6 == puVar4) goto LAB_0874c6cc;
LAB_0874c5d5:
    puVar3 = PTR_CreateAlert_0936c704;
    *puVar6 = 0x15;
    puVar6[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c760;
LAB_0874c5f6:
    puVar3 = PTR_CreateCipherSpec_0936c928;
    *puVar4 = 0x14;
    puVar4[1] = puVar3;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
    *(undefined4 **)(param_1 + 4) = puVar4;
    if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c7f8:
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
      puVar3 = PTR_CreateHandShake_0936ca6c;
      *puVar4 = 0x16;
      puVar4[1] = puVar3;
      uVar2 = *(undefined4 *)param_1;
      *(undefined4 **)param_1 = puVar6;
      *(undefined4 **)(param_1 + 4) = puVar4 + 2;
      *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
      operator_delete__(uVar2,0);
      puVar4 = *(undefined4 **)(param_1 + 4);
      if (*(undefined4 **)(param_1 + 8) == puVar4) goto LAB_0874c890;
      goto LAB_0874c638;
    }
  }
  puVar3 = PTR_CreateHandShake_0936ca6c;
  *puVar4 = 0x16;
  puVar4[1] = puVar3;
  puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
  *(undefined4 **)(param_1 + 4) = puVar4;
  if (*(undefined4 **)(param_1 + 8) == puVar4) {
LAB_0874c890:
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
    puVar3 = PTR_CreateData_0936c834;
    *puVar4 = 0x17;
    puVar4[1] = puVar3;
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 **)param_1 = puVar6;
    *(undefined4 **)(param_1 + 4) = puVar4 + 2;
    *(undefined4 **)(param_1 + 8) = puVar6 + iVar10 * 2;
    operator_delete__(uVar2,0);
    return;
  }
LAB_0874c638:
  puVar3 = PTR_CreateData_0936c834;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 8;
  *puVar4 = 0x17;
  puVar4[1] = puVar3;
  return;
}
```
