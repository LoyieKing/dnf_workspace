# IsOpenScheduleDungeon

`_ZNK8CDungeon21IsOpenScheduleDungeonEv`

`CDungeon::IsOpenScheduleDungeon() const`

| 类 | 地址 |
|---|---|
| `CDungeon` | `0x0834d2d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d2d4  _ZNK8CDungeon21IsOpenScheduleDungeonEv
#           CDungeon::IsOpenScheduleDungeon() const
# range [0x0834d2d4, 0x0834d31f]
0834d2d4 +0x00:  push   %ebp
0834d2d5 +0x01:  mov    %esp,%ebp
0834d2d7 +0x03:  sub    $0x28,%esp
0834d2da +0x06:  movl   $0x0,-0x10(%ebp)
0834d2e1 +0x0d:  mov    0x8(%ebp),%eax
0834d2e4 +0x10:  mov    0x8(%eax),%eax
0834d2e7 +0x13:  mov    %eax,%edx
0834d2e9 +0x15:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%eax
0834d2ee +0x1a:  mov    %edx,0x8(%esp)
0834d2f2 +0x1e:  movl   $0x0,0x4(%esp)
0834d2fa +0x26:  mov    %eax,(%esp)
0834d2fd +0x29:  call   081266e2 <_ZNK21CDailyScheduleManager16GetScheduleStateE18_DailyScheduleTypej>  ; CDailyScheduleManager::GetScheduleState(_DailyScheduleType, unsigned int) const
0834d302 +0x2e:  mov    %eax,-0xc(%ebp)
0834d305 +0x31:  cmpl   $0x1,-0xc(%ebp)
0834d309 +0x35:  je     0834d311 <+0x3d>
0834d30b +0x37:  cmpl   $0x2,-0xc(%ebp)
0834d30f +0x3b:  jne    0834d318 <+0x44>
0834d311 +0x3d:  mov    $0x1,%eax
0834d316 +0x42:  jmp    0834d31d <+0x49>
0834d318 +0x44:  mov    $0x0,%eax
0834d31d +0x49:  leave
0834d31e +0x4a:  ret
0834d31f +0x4b:  nop
```

## 反编译 C

```c
// CDungeon::IsOpenScheduleDungeon @ 0x834d2d4

/* CDungeon::IsOpenScheduleDungeon() const */

undefined4 __thiscall CDungeon::IsOpenScheduleDungeon(CDungeon *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CDailyScheduleManager::GetScheduleState
                    (GlobalData::s_DailyScheduleManager,0,*(undefined4 *)(this + 8));
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
