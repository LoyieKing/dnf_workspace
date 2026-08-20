# AddNPCInfo

`_ZN24CNPCRelationEventManager10AddNPCInfoEtP22stNPCRelationEventInfo`

`CNPCRelationEventManager::AddNPCInfo(unsigned short, stNPCRelationEventInfo*)`

| 类 | 地址 |
|---|---|
| `CNPCRelationEventManager` | `0x0890ceea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0890ceea  _ZN24CNPCRelationEventManager10AddNPCInfoEtP22stNPCRelationEventInfo
#           CNPCRelationEventManager::AddNPCInfo(unsigned short, stNPCRelationEventInfo*)
# range [0x0890ceea, 0x0890cf43]
0890ceea +0x00:  push   %ebp
0890ceeb +0x01:  mov    %esp,%ebp
0890ceed +0x03:  sub    $0x48,%esp
0890cef0 +0x06:  mov    0xc(%ebp),%eax
0890cef3 +0x09:  mov    %ax,-0x2c(%ebp)
0890cef7 +0x0d:  lea    -0x10(%ebp),%eax
0890cefa +0x10:  lea    0x10(%ebp),%edx
0890cefd +0x13:  mov    %edx,0x8(%esp)
0890cf01 +0x17:  lea    -0x2c(%ebp),%edx
0890cf04 +0x1a:  mov    %edx,0x4(%esp)
0890cf08 +0x1e:  mov    %eax,(%esp)
0890cf0b +0x21:  call   0891fe19 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6af8>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6af8
0890cf10 +0x26:  sub    $0x4,%esp
0890cf13 +0x29:  lea    -0x10(%ebp),%eax
0890cf16 +0x2c:  mov    %eax,0x4(%esp)
0890cf1a +0x30:  lea    -0x18(%ebp),%eax
0890cf1d +0x33:  mov    %eax,(%esp)
0890cf20 +0x36:  call   0891fe58 <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b37>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b37
0890cf25 +0x3b:  mov    0x8(%ebp),%edx
0890cf28 +0x3e:  lea    -0x20(%ebp),%eax
0890cf2b +0x41:  lea    -0x18(%ebp),%ecx
0890cf2e +0x44:  mov    %ecx,0x8(%esp)
0890cf32 +0x48:  mov    %edx,0x4(%esp)
0890cf36 +0x4c:  mov    %eax,(%esp)
0890cf39 +0x4f:  call   0891fe8a <_GLOBAL__I_PVP_NORMAL_BATTLE_TIME+0x6b69>  ; global constructors keyed to PVP_NORMAL_BATTLE_TIME+0x6b69
0890cf3e +0x54:  sub    $0x4,%esp
0890cf41 +0x57:  leave
0890cf42 +0x58:  ret
0890cf43 +0x59:  nop
```

## 反编译 C

```c
// CNPCRelationEventManager::AddNPCInfo @ 0x890ceea

/* CNPCRelationEventManager::AddNPCInfo(unsigned short, stNPCRelationEventInfo*) */

void CNPCRelationEventManager::AddNPCInfo(ushort param_1,stNPCRelationEventInfo *param_2)

{
  undefined2 local_30 [6];
  pair local_24 [8];
  pair<unsigned_short_const,stNPCRelationEventInfo*> local_1c [8];
  ushort local_14 [8];
  
  local_30[0] = SUB42(param_2,0);
  std::make_pair<unsigned_short_const&,stNPCRelationEventInfo*&>
            (local_14,(stNPCRelationEventInfo **)local_30);
  std::pair<unsigned_short_const,stNPCRelationEventInfo*>::
  pair<unsigned_short,stNPCRelationEventInfo*>(local_1c,(pair *)local_14);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::insert(local_24);
  return;
}
```
