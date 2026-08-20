# __do_upcast

`_ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE`

`__cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const`

| 类 | 地址 |
|---|---|
| `__cxxabiv1::__vmi_class_type_info` | `0x08722fd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08722fd0  _ZNK10__cxxabiv121__vmi_class_type_info11__do_upcastEPKNS_17__class_type_infoEPKvRNS1_15__upcast_resultE
#           __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const
# range [0x08722fd0, 0x087231ff]
08722fd0 +0x000:  push   %ebp
08722fd1 +0x001:  mov    %esp,%ebp
08722fd3 +0x003:  push   %edi
08722fd4 +0x004:  push   %esi
08722fd5 +0x005:  push   %ebx
08722fd6 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08722fdb +0x00b:  add    $0xc49bbd,%ebx
08722fe1 +0x011:  sub    $0x4c,%esp
08722fe4 +0x014:  mov    0x8(%ebp),%edi
08722fe7 +0x017:  mov    0x14(%ebp),%eax
08722fea +0x01a:  mov    0x10(%ebp),%edx
08722fed +0x01d:  mov    0xc(%ebp),%ecx
08722ff0 +0x020:  mov    %edi,(%esp)
08722ff3 +0x023:  mov    %eax,0xc(%esp)
08722ff7 +0x027:  mov    %edx,0x8(%esp)
08722ffb +0x02b:  mov    %ecx,0x4(%esp)
08722fff +0x02f:  call   08724a90 <_ZNK10__cxxabiv117__class_type_info11__do_upcastEPKS0_PKvRNS0_15__upcast_resultE>  ; __cxxabiv1::__class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*, __cxxabiv1::__class_type_info::__upcast_result&) const
08723004 +0x034:  test   %al,%al
08723006 +0x036:  jne    08723160 <+0x190>
0872300c +0x03c:  mov    0x14(%ebp),%eax
0872300f +0x03f:  mov    0x8(%eax),%eax
08723012 +0x042:  test   $0x10,%al
08723014 +0x044:  mov    %eax,-0x30(%ebp)
08723017 +0x047:  jne    087231d8 <+0x208>
0872301d +0x04d:  movzbl -0x30(%ebp),%eax
08723021 +0x051:  lea    -0x28(%ebp),%ecx
08723024 +0x054:  mov    0xc(%edi),%esi
08723027 +0x057:  mov    %ecx,-0x34(%ebp)
0872302a +0x05a:  and    $0x1,%eax
0872302d +0x05d:  mov    %al,-0x35(%ebp)
08723030 +0x060:  test   %esi,%esi
08723032 +0x062:  je     08723107 <+0x137>
08723038 +0x068:  sub    $0x1,%esi
0872303b +0x06b:  mov    -0x30(%ebp),%edx
0872303e +0x06e:  mov    0x14(%edi,%esi,8),%eax
08723042 +0x072:  movl   $0x0,-0x28(%ebp)
08723049 +0x079:  movl   $0x0,-0x24(%ebp)
08723050 +0x080:  mov    %edx,-0x20(%ebp)
08723053 +0x083:  mov    %eax,%edx
08723055 +0x085:  shr    %edx
08723057 +0x087:  mov    %edx,%ecx
08723059 +0x089:  and    $0x1,%ecx
0872305c +0x08c:  movl   $0x0,-0x1c(%ebp)
08723063 +0x093:  mov    %cl,-0x2a(%ebp)
08723066 +0x096:  jne    0872306e <+0x9e>
08723068 +0x098:  cmpb   $0x0,-0x35(%ebp)
0872306c +0x09c:  je     08723030 <+0x60>
0872306e +0x09e:  mov    0x10(%ebp),%ecx
08723071 +0x0a1:  mov    %eax,%edx
08723073 +0x0a3:  and    $0x1,%edx
08723076 +0x0a6:  mov    %dl,-0x29(%ebp)
08723079 +0x0a9:  xor    %edx,%edx
0872307b +0x0ab:  test   %ecx,%ecx
0872307d +0x0ad:  je     08723094 <+0xc4>
0872307f +0x0af:  sar    $0x8,%eax
08723082 +0x0b2:  cmpb   $0x0,-0x29(%ebp)
08723086 +0x0b6:  je     0872308f <+0xbf>
08723088 +0x0b8:  mov    0x10(%ebp),%ecx
0872308b +0x0bb:  add    (%ecx),%eax
0872308d +0x0bd:  mov    (%eax),%eax
0872308f +0x0bf:  mov    0x10(%ebp),%edx
08723092 +0x0c2:  add    %eax,%edx
08723094 +0x0c4:  mov    0x10(%edi,%esi,8),%eax
08723098 +0x0c8:  mov    (%eax),%ecx
0872309a +0x0ca:  mov    %edx,0x8(%esp)
0872309e +0x0ce:  mov    0xc(%ebp),%edx
087230a1 +0x0d1:  mov    %eax,(%esp)
087230a4 +0x0d4:  mov    %ecx,-0x3c(%ebp)
087230a7 +0x0d7:  mov    -0x34(%ebp),%ecx
087230aa +0x0da:  mov    %edx,0x4(%esp)
087230ae +0x0de:  mov    %ecx,0xc(%esp)
087230b2 +0x0e2:  mov    -0x3c(%ebp),%ecx
087230b5 +0x0e5:  call   *0x18(%ecx)
087230b8 +0x0e8:  test   %al,%al
087230ba +0x0ea:  je     08723030 <+0x60>
087230c0 +0x0f0:  cmpl   $0x8,-0x1c(%ebp)
087230c4 +0x0f4:  je     08723120 <+0x150>
087230c6 +0x0f6:  mov    -0x24(%ebp),%eax
087230c9 +0x0f9:  cmp    $0x3,%eax
087230cc +0x0fc:  jle    087230da <+0x10a>
087230ce +0x0fe:  cmpb   $0x0,-0x2a(%ebp)
087230d2 +0x102:  jne    087230da <+0x10a>
087230d4 +0x104:  and    $0xfffffffd,%eax
087230d7 +0x107:  mov    %eax,-0x24(%ebp)
087230da +0x10a:  mov    0x14(%ebp),%eax
087230dd +0x10d:  mov    0xc(%eax),%edx
087230e0 +0x110:  test   %edx,%edx
087230e2 +0x112:  je     08723130 <+0x160>
087230e4 +0x114:  mov    0x14(%ebp),%ecx
087230e7 +0x117:  mov    (%ecx),%eax
087230e9 +0x119:  cmp    -0x28(%ebp),%eax
087230ec +0x11c:  jne    087231e3 <+0x213>
087230f2 +0x122:  test   %eax,%eax
087230f4 +0x124:  je     08723170 <+0x1a0>
087230f6 +0x126:  mov    0x14(%ebp),%edx
087230f9 +0x129:  mov    -0x24(%ebp),%eax
087230fc +0x12c:  or     %eax,0x4(%edx)
087230ff +0x12f:  test   %esi,%esi
08723101 +0x131:  jne    08723038 <+0x68>
08723107 +0x137:  mov    0x14(%ebp),%eax
0872310a +0x13a:  mov    0x4(%eax),%eax
0872310d +0x13d:  test   %eax,%eax
0872310f +0x13f:  setne  %al
08723112 +0x142:  add    $0x4c,%esp
08723115 +0x145:  pop    %ebx
08723116 +0x146:  pop    %esi
08723117 +0x147:  pop    %edi
08723118 +0x148:  pop    %ebp
08723119 +0x149:  ret
0872311a +0x14a:  lea    0x0(%esi),%esi
08723120 +0x150:  cmpb   $0x0,-0x29(%ebp)
08723124 +0x154:  je     087230c6 <+0xf6>
08723126 +0x156:  mov    0x10(%edi,%esi,8),%eax
0872312a +0x15a:  mov    %eax,-0x1c(%ebp)
0872312d +0x15d:  jmp    087230c6 <+0xf6>
0872312f +0x15f:  nop
08723130 +0x160:  mov    -0x28(%ebp),%eax
08723133 +0x163:  mov    0x14(%ebp),%edx
08723136 +0x166:  mov    0x14(%ebp),%ecx
08723139 +0x169:  mov    %eax,(%edx)
0872313b +0x16b:  mov    -0x24(%ebp),%eax
0872313e +0x16e:  mov    %eax,0x4(%edx)
08723141 +0x171:  mov    -0x20(%ebp),%edx
08723144 +0x174:  cmp    $0x3,%eax
08723147 +0x177:  mov    %edx,0x8(%ecx)
0872314a +0x17a:  mov    -0x1c(%ebp),%edx
0872314d +0x17d:  mov    %edx,0xc(%ecx)
08723150 +0x180:  jle    08723160 <+0x190>
08723152 +0x182:  test   $0x2,%al
08723154 +0x184:  je     087231c0 <+0x1f0>
08723156 +0x186:  testb  $0x1,0x8(%edi)
0872315a +0x18a:  jne    08723030 <+0x60>
08723160 +0x190:  add    $0x4c,%esp
08723163 +0x193:  mov    $0x1,%eax
08723168 +0x198:  pop    %ebx
08723169 +0x199:  pop    %esi
0872316a +0x19a:  pop    %edi
0872316b +0x19b:  pop    %ebp
0872316c +0x19c:  ret
0872316d +0x19d:  lea    0x0(%esi),%esi
08723170 +0x1a0:  mov    -0x1c(%ebp),%eax
08723173 +0x1a3:  cmp    $0x8,%eax
08723176 +0x1a6:  je     087231a4 <+0x1d4>
08723178 +0x1a8:  cmp    $0x8,%edx
0872317b +0x1ab:  je     087231a4 <+0x1d4>
0872317d +0x1ad:  mov    0x4(%eax),%eax
08723180 +0x1b0:  mov    0x4(%edx),%edx
08723183 +0x1b3:  cmp    %edx,%eax
08723185 +0x1b5:  je     087230f6 <+0x126>
0872318b +0x1bb:  cmpb   $0x2a,(%eax)
0872318e +0x1be:  je     087231a4 <+0x1d4>
08723190 +0x1c0:  mov    %edx,0x4(%esp)
08723194 +0x1c4:  mov    %eax,(%esp)
08723197 +0x1c7:  call   0807e4e0 <_init+0xdd8>
0872319c +0x1cc:  test   %eax,%eax
0872319e +0x1ce:  je     087230f6 <+0x126>
087231a4 +0x1d4:  mov    0x14(%ebp),%ecx
087231a7 +0x1d7:  mov    $0x1,%eax
087231ac +0x1dc:  movl   $0x2,0x4(%ecx)
087231b3 +0x1e3:  add    $0x4c,%esp
087231b6 +0x1e6:  pop    %ebx
087231b7 +0x1e7:  pop    %esi
087231b8 +0x1e8:  pop    %edi
087231b9 +0x1e9:  pop    %ebp
087231ba +0x1ea:  ret
087231bb +0x1eb:  nop
087231bc +0x1ec:  lea    0x0(%esi,%eiz,1),%esi
087231c0 +0x1f0:  test   $0x1,%al
087231c2 +0x1f2:  je     08723160 <+0x190>
087231c4 +0x1f4:  testb  $0x2,0x8(%edi)
087231c8 +0x1f8:  jne    08723030 <+0x60>
087231ce +0x1fe:  xchg   %ax,%ax
087231d0 +0x200:  jmp    08723160 <+0x190>
087231d2 +0x202:  lea    0x0(%esi),%esi
087231d8 +0x208:  mov    0x8(%edi),%edx
087231db +0x20b:  mov    %edx,-0x30(%ebp)
087231de +0x20e:  jmp    0872301d <+0x4d>
087231e3 +0x213:  movl   $0x0,(%ecx)
087231e9 +0x219:  mov    $0x1,%eax
087231ee +0x21e:  movl   $0x2,0x4(%ecx)
087231f5 +0x225:  add    $0x4c,%esp
087231f8 +0x228:  pop    %ebx
087231f9 +0x229:  pop    %esi
087231fa +0x22a:  pop    %edi
087231fb +0x22b:  pop    %ebp
087231fc +0x22c:  ret
087231fd +0x22d:  nop
087231fe +0x22e:  nop
087231ff +0x22f:  nop
```

## 反编译 C

```c
// __cxxabiv1::__vmi_class_type_info::__do_upcast @ 0x8722fd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__vmi_class_type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void const*,
   __cxxabiv1::__class_type_info::__upcast_result&) const */

undefined4 __thiscall
__cxxabiv1::__vmi_class_type_info::__do_upcast
          (__vmi_class_type_info *this,__class_type_info *param_1,void *param_2,
          __upcast_result *param_3)

{
  uint uVar1;
  char *__s1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint local_34;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x8722fdb;
  cVar3 = __class_type_info::__do_upcast((__class_type_info *)this,param_1,param_2,param_3);
  if (cVar3 == '\0') {
    local_34 = *(uint *)(param_3 + 8);
    if ((local_34 & 0x10) != 0) {
      local_34 = *(uint *)(this + 8);
    }
    iVar6 = *(int *)(this + 0xc);
    do {
      while( true ) {
        do {
          do {
            if (iVar6 == 0) {
              return CONCAT31((int3)((uint)*(int *)(param_3 + 4) >> 8),*(int *)(param_3 + 4) != 0);
            }
            iVar6 = iVar6 + -1;
            uVar1 = *(uint *)(this + iVar6 * 8 + 0x14);
            local_2c = 0;
            local_28 = 0;
            local_24 = local_34;
            uVar4 = uVar1 >> 1 & 1;
            local_20 = 0;
          } while ((uVar4 == 0) && ((local_34 & 1) == 0));
          iVar5 = 0;
          if (param_2 != (void *)0x0) {
            iVar5 = (int)uVar1 >> 8;
            if ((uVar1 & 1) != 0) {
              iVar5 = *(int *)(iVar5 + *(int *)param_2);
            }
            iVar5 = (int)param_2 + iVar5;
          }
          cVar3 = (**(code **)(**(int **)(this + iVar6 * 8 + 0x10) + 0x18))
                            (*(int **)(this + iVar6 * 8 + 0x10),param_1,iVar5,&local_2c);
        } while (cVar3 == '\0');
        if ((local_20 == 8) && ((uVar1 & 1) != 0)) {
          local_20 = *(int *)(this + iVar6 * 8 + 0x10);
        }
        if ((3 < (int)local_28) && ((char)uVar4 == '\0')) {
          local_28 = local_28 & 0xfffffffd;
        }
        iVar5 = *(int *)(param_3 + 0xc);
        if (iVar5 == 0) break;
        if (*(int *)param_3 != local_2c) {
          *(undefined4 *)param_3 = 0;
          *(undefined4 *)(param_3 + 4) = 2;
          return 1;
        }
        if (*(int *)param_3 == 0) {
          if ((local_20 == 8) || (iVar5 == 8)) {
LAB_087231a4:
            *(undefined4 *)(param_3 + 4) = 2;
            return 1;
          }
          __s1 = *(char **)(local_20 + 4);
          if ((__s1 != *(char **)(iVar5 + 4)) &&
             ((*__s1 == '*' || (iVar5 = strcmp(__s1,*(char **)(iVar5 + 4)), iVar5 != 0))))
          goto LAB_087231a4;
        }
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | local_28;
      }
      *(int *)param_3 = local_2c;
      *(uint *)(param_3 + 4) = local_28;
      *(uint *)(param_3 + 8) = local_24;
      *(int *)(param_3 + 0xc) = local_20;
      if ((int)local_28 < 4) {
        return 1;
      }
      if ((local_28 & 2) == 0) {
        if ((local_28 & 1) == 0) {
          return 1;
        }
        bVar2 = (byte)this[8] & 2;
      }
      else {
        bVar2 = (byte)this[8] & 1;
      }
    } while (bVar2 != 0);
  }
  return 1;
}
```
