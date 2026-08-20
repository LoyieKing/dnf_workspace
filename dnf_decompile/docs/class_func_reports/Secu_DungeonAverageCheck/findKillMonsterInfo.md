# findKillMonsterInfo

`_ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj`

`Secu_DungeonAverageCheck::findKillMonsterInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_DungeonAverageCheck` | `0x0827993c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827993c  _ZN24Secu_DungeonAverageCheck19findKillMonsterInfoEj
#           Secu_DungeonAverageCheck::findKillMonsterInfo(unsigned int)
# range [0x0827993c, 0x082799d5]
0827993c +0x00:  push   %ebp
0827993d +0x01:  mov    %esp,%ebp
0827993f +0x03:  push   %ebx
08279940 +0x04:  sub    $0x24,%esp
08279943 +0x07:  mov    0x8(%ebp),%ebx
08279946 +0x0a:  mov    0xc(%ebp),%eax
08279949 +0x0d:  lea    0x4(%eax),%edx
0827994c +0x10:  lea    -0x10(%ebp),%eax
0827994f +0x13:  mov    %edx,0x4(%esp)
08279953 +0x17:  mov    %eax,(%esp)
08279956 +0x1a:  call   08279e06 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xf3>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xf3
0827995b +0x1f:  sub    $0x4,%esp
0827995e +0x22:  jmp    08279989 <+0x4d>
08279960 +0x24:  lea    -0x10(%ebp),%eax
08279963 +0x27:  mov    %eax,(%esp)
08279966 +0x2a:  call   08279dda <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0xc7>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0xc7
0827996b +0x2f:  mov    (%eax),%eax
0827996d +0x31:  cmp    0x10(%ebp),%eax
08279970 +0x34:  sete   %al
08279973 +0x37:  test   %al,%al
08279975 +0x39:  je     0827997e <+0x42>
08279977 +0x3b:  mov    -0x10(%ebp),%eax
0827997a +0x3e:  mov    %eax,(%ebx)
0827997c +0x40:  jmp    082799cc <+0x90>
0827997e +0x42:  lea    -0x10(%ebp),%eax
08279981 +0x45:  mov    %eax,(%esp)
08279984 +0x48:  call   08279e2a <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x117>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x117
08279989 +0x4d:  mov    0xc(%ebp),%eax
0827998c +0x50:  lea    0x4(%eax),%edx
0827998f +0x53:  lea    -0xc(%ebp),%eax
08279992 +0x56:  mov    %edx,0x4(%esp)
08279996 +0x5a:  mov    %eax,(%esp)
08279999 +0x5d:  call   08279d88 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x75>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x75
0827999e +0x62:  sub    $0x4,%esp
082799a1 +0x65:  lea    -0xc(%ebp),%eax
082799a4 +0x68:  mov    %eax,0x4(%esp)
082799a8 +0x6c:  lea    -0x10(%ebp),%eax
082799ab +0x6f:  mov    %eax,(%esp)
082799ae +0x72:  call   08279dae <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x9b>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x9b
082799b3 +0x77:  test   %al,%al
082799b5 +0x79:  jne    08279960 <+0x24>
082799b7 +0x7b:  mov    0xc(%ebp),%eax
082799ba +0x7e:  add    $0x4,%eax
082799bd +0x81:  mov    %eax,0x4(%esp)
082799c1 +0x85:  mov    %ebx,(%esp)
082799c4 +0x88:  call   08279d88 <_GLOBAL__I__ZN24Secu_DungeonAverageCheck5resetEv+0x75>  ; global constructors keyed to Secu_DungeonAverageCheck::reset()+0x75
082799c9 +0x8d:  sub    $0x4,%esp
082799cc +0x90:  mov    %ebx,%eax
082799ce +0x92:  mov    -0x4(%ebp),%ebx
082799d1 +0x95:  leave
082799d2 +0x96:  ret    $0x4
082799d5 +0x99:  nop
```

## 反编译 C

```c
// Secu_DungeonAverageCheck::findKillMonsterInfo @ 0x827993c

/* Secu_DungeonAverageCheck::findKillMonsterInfo(unsigned int) */

uint Secu_DungeonAverageCheck::findKillMonsterInfo(uint param_1)

{
  bool bVar1;
  int *piVar2;
  int in_stack_0000000c;
  undefined4 local_14;
  __normal_iterator local_10 [8];
  
  std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::begin();
  while( true ) {
    std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_14,local_10);
    if (!bVar1) {
      std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>::end();
      return param_1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                    ::operator->((__normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                                  *)&local_14);
    if (*piVar2 == in_stack_0000000c) break;
    __gnu_cxx::
    __normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
    ::operator++((__normal_iterator<SecKillMonsterInfo*,std::vector<SecKillMonsterInfo,std::allocator<SecKillMonsterInfo>>>
                  *)&local_14);
  }
  *(undefined4 *)param_1 = local_14;
  return param_1;
}
```
