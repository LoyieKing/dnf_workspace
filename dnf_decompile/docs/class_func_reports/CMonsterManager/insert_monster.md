# insert_monster

`_ZN15CMonsterManager14insert_monsterEii`

`CMonsterManager::insert_monster(int, int)`

| 类 | 地址 |
|---|---|
| `CMonsterManager` | `0x0834fdac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834fdac  _ZN15CMonsterManager14insert_monsterEii
#           CMonsterManager::insert_monster(int, int)
# range [0x0834fdac, 0x0834fded]
0834fdac +0x00:  push   %ebp
0834fdad +0x01:  mov    %esp,%ebp
0834fdaf +0x03:  sub    $0x28,%esp
0834fdb2 +0x06:  lea    0x10(%ebp),%eax
0834fdb5 +0x09:  mov    %eax,0x8(%esp)
0834fdb9 +0x0d:  lea    0xc(%ebp),%eax
0834fdbc +0x10:  mov    %eax,0x4(%esp)
0834fdc0 +0x14:  lea    -0x10(%ebp),%eax
0834fdc3 +0x17:  mov    %eax,(%esp)
0834fdc6 +0x1a:  call   082faac0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8f2
0834fdcb +0x1f:  mov    0x8(%ebp),%edx
0834fdce +0x22:  lea    -0x14(%ebp),%eax
0834fdd1 +0x25:  lea    -0x10(%ebp),%ecx
0834fdd4 +0x28:  mov    %ecx,0x8(%esp)
0834fdd8 +0x2c:  mov    %edx,0x4(%esp)
0834fddc +0x30:  mov    %eax,(%esp)
0834fddf +0x33:  call   081b8d8c <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x593>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x593
0834fde4 +0x38:  sub    $0x4,%esp
0834fde7 +0x3b:  mov    $0x1,%eax
0834fdec +0x40:  leave
0834fded +0x41:  ret
```

## 反编译 C

```c
// CMonsterManager::insert_monster @ 0x834fdac

/* CMonsterManager::insert_monster(int, int) */

undefined4 CMonsterManager::insert_monster(int param_1,int param_2)

{
  pair local_18 [4];
  pair<int_const,int> local_14 [16];
  
  std::pair<int_const,int>::pair<int&,int&>(local_14,&param_2,(int *)&stack0x0000000c);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_18);
  return 1;
}
```
