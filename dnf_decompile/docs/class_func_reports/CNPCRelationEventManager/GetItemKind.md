# GetItemKind

`_ZN24CNPCRelationEventManager11GetItemKindEtjj`

`CNPCRelationEventManager::GetItemKind(unsigned short, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890d1c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890d1c0  _ZN24CNPCRelationEventManager11GetItemKindEtjj
#           CNPCRelationEventManager::GetItemKind(unsigned short, unsigned int, unsigned int)
# range [0x0890d1c0, 0x0890d325]
0890d1c0 +0x000:  push   %ebp
0890d1c1 +0x001:  mov    %esp,%ebp
0890d1c3 +0x003:  push   %ebx
0890d1c4 +0x004:  sub    $0x54,%esp
0890d1c7 +0x007:  mov    0x8(%ebp),%ebx
0890d1ca +0x00a:  mov    0x10(%ebp),%eax
0890d1cd +0x00d:  mov    %ax,-0x2c(%ebp)
0890d1d1 +0x011:  mov    %ebx,(%esp)
0890d1d4 +0x014:  call   0891b548 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x2227>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x2227
0890d1d9 +0x019:  mov    0xc(%ebp),%edx
0890d1dc +0x01c:  lea    -0x1c(%ebp),%eax
0890d1df +0x01f:  lea    -0x2c(%ebp),%ecx
0890d1e2 +0x022:  mov    %ecx,0x8(%esp)
0890d1e6 +0x026:  mov    %edx,0x4(%esp)
0890d1ea +0x02a:  mov    %eax,(%esp)
0890d1ed +0x02d:  call   0891feb6 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b95>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b95
0890d1f2 +0x032:  sub    $0x4,%esp
0890d1f5 +0x035:  mov    0xc(%ebp),%edx
0890d1f8 +0x038:  lea    -0x18(%ebp),%eax
0890d1fb +0x03b:  mov    %edx,0x4(%esp)
0890d1ff +0x03f:  mov    %eax,(%esp)
0890d202 +0x042:  call   0891fd56 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a35>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a35
0890d207 +0x047:  sub    $0x4,%esp
0890d20a +0x04a:  lea    -0x18(%ebp),%eax
0890d20d +0x04d:  mov    %eax,0x4(%esp)
0890d211 +0x051:  lea    -0x1c(%ebp),%eax
0890d214 +0x054:  mov    %eax,(%esp)
0890d217 +0x057:  call   0891fee2 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6bc1>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6bc1
0890d21c +0x05c:  test   %al,%al
0890d21e +0x05e:  jne    0890d318 <+0x158>
0890d224 +0x064:  lea    -0x1c(%ebp),%eax
0890d227 +0x067:  mov    %eax,(%esp)
0890d22a +0x06a:  call   0891fd90 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6a6f>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6a6f
0890d22f +0x06f:  mov    0x4(%eax),%eax
0890d232 +0x072:  mov    %eax,-0x14(%ebp)
0890d235 +0x075:  movl   $0x0,-0x10(%ebp)
0890d23c +0x07c:  jmp    0890d307 <+0x147>
0890d241 +0x081:  movl   $0x0,-0xc(%ebp)
0890d248 +0x088:  jmp    0890d2dd <+0x11d>
0890d24d +0x08d:  mov    -0x10(%ebp),%edx
0890d250 +0x090:  mov    %edx,%eax
0890d252 +0x092:  shl    $0x2,%eax
0890d255 +0x095:  add    %edx,%eax
0890d257 +0x097:  shl    $0x2,%eax
0890d25a +0x09a:  add    -0x14(%ebp),%eax
0890d25d +0x09d:  mov    -0xc(%ebp),%edx
0890d260 +0x0a0:  mov    %edx,0x4(%esp)
0890d264 +0x0a4:  mov    %eax,(%esp)
0890d267 +0x0a7:  call   0891ff86 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6c65>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6c65
0890d26c +0x0ac:  mov    0x4(%eax),%edx
0890d26f +0x0af:  mov    (%eax),%eax
0890d271 +0x0b1:  mov    %eax,-0x24(%ebp)
0890d274 +0x0b4:  mov    %edx,-0x20(%ebp)
0890d277 +0x0b7:  mov    -0x24(%ebp),%eax
0890d27a +0x0ba:  cmp    0x14(%ebp),%eax
0890d27d +0x0bd:  jne    0890d2d9 <+0x119>
0890d27f +0x0bf:  mov    -0x20(%ebp),%eax
0890d282 +0x0c2:  cmp    0x18(%ebp),%eax
0890d285 +0x0c5:  ja     0890d2d9 <+0x119>
0890d287 +0x0c7:  mov    -0x20(%ebp),%eax
0890d28a +0x0ca:  test   %eax,%eax
0890d28c +0x0cc:  je     0890d31b <+0x15b>
0890d292 +0x0d2:  mov    -0x10(%ebp),%eax
0890d295 +0x0d5:  mov    %eax,(%ebx)
0890d297 +0x0d7:  mov    0x18(%ebp),%eax
0890d29a +0x0da:  mov    $0x0,%edx
0890d29f +0x0df:  mov    %eax,-0x38(%ebp)
0890d2a2 +0x0e2:  mov    %edx,-0x34(%ebp)
0890d2a5 +0x0e5:  fildll -0x38(%ebp)
0890d2a8 +0x0e8:  mov    -0x20(%ebp),%eax
0890d2ab +0x0eb:  mov    $0x0,%edx
0890d2b0 +0x0f0:  mov    %eax,-0x38(%ebp)
0890d2b3 +0x0f3:  mov    %edx,-0x34(%ebp)
0890d2b6 +0x0f6:  fildll -0x38(%ebp)
0890d2b9 +0x0f9:  fdivrp %st,%st(1)
0890d2bb +0x0fb:  fnstcw -0x3a(%ebp)
0890d2be +0x0fe:  movzwl -0x3a(%ebp),%eax
0890d2c2 +0x102:  mov    $0xc,%ah
0890d2c4 +0x104:  mov    %ax,-0x3c(%ebp)
0890d2c8 +0x108:  fldcw  -0x3c(%ebp)
0890d2cb +0x10b:  fistpl -0x40(%ebp)
0890d2ce +0x10e:  fldcw  -0x3a(%ebp)
0890d2d1 +0x111:  mov    -0x40(%ebp),%eax
0890d2d4 +0x114:  mov    %eax,0x4(%ebx)
0890d2d7 +0x117:  jmp    0890d31c <+0x15c>
0890d2d9 +0x119:  addl   $0x1,-0xc(%ebp)
0890d2dd +0x11d:  mov    -0x10(%ebp),%edx
0890d2e0 +0x120:  mov    %edx,%eax
0890d2e2 +0x122:  shl    $0x2,%eax
0890d2e5 +0x125:  add    %edx,%eax
0890d2e7 +0x127:  shl    $0x2,%eax
0890d2ea +0x12a:  add    -0x14(%ebp),%eax
0890d2ed +0x12d:  mov    %eax,(%esp)
0890d2f0 +0x130:  call   0891ff6a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6c49>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6c49
0890d2f5 +0x135:  cmp    -0xc(%ebp),%eax
0890d2f8 +0x138:  seta   %al
0890d2fb +0x13b:  test   %al,%al
0890d2fd +0x13d:  jne    0890d24d <+0x8d>
0890d303 +0x143:  addl   $0x1,-0x10(%ebp)
0890d307 +0x147:  cmpl   $0x2,-0x10(%ebp)
0890d30b +0x14b:  setle  %al
0890d30e +0x14e:  test   %al,%al
0890d310 +0x150:  jne    0890d241 <+0x81>
0890d316 +0x156:  jmp    0890d31c <+0x15c>
0890d318 +0x158:  nop
0890d319 +0x159:  jmp    0890d31c <+0x15c>
0890d31b +0x15b:  nop
0890d31c +0x15c:  mov    %ebx,%eax
0890d31e +0x15e:  mov    -0x4(%ebp),%ebx
0890d321 +0x161:  leave
0890d322 +0x162:  ret    $0x4
0890d325 +0x165:  nop
```

## 反编译 C

```c
// CNPCRelationEventManager::GetItemKind @ 0x890d1c0

/* CNPCRelationEventManager::GetItemKind(unsigned short, unsigned int, unsigned int) */

stTempRewardInfo * CNPCRelationEventManager::GetItemKind(ushort param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined2 in_stack_00000006;
  int in_stack_00000010;
  uint in_stack_00000014;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_20 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_1c [4];
  int local_18;
  int local_14;
  uint local_10;
  
  stTempRewardInfo::stTempRewardInfo(_param_1);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_20);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_20);
    local_18 = *(int *)(iVar2 + 4);
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      local_10 = 0;
      while (uVar4 = std::vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>>::size
                               ((vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>> *)
                                (local_14 * 0x14 + local_18)), local_10 < uVar4) {
        piVar3 = (int *)std::vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>>::at
                                  ((vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>> *)
                                   (local_14 * 0x14 + local_18),local_10);
        uVar4 = piVar3[1];
        if ((*piVar3 == in_stack_00000010) && (uVar4 <= in_stack_00000014)) {
          if (uVar4 == 0) {
            return _param_1;
          }
          *(int *)_param_1 = local_14;
          *(int *)(_param_1 + 4) = (int)ROUND((longdouble)in_stack_00000014 / (longdouble)uVar4);
          return _param_1;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return _param_1;
}
```
