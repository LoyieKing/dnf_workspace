# Set

`_ZN8APSystem19CActionPointManager3SetERNS_22_SIG_LOAD_ACTION_POINTE`

`APSystem::CActionPointManager::Set(APSystem::_SIG_LOAD_ACTION_POINT&)`

| 类 | 地址 |
|---|---|
| `APSystem::CActionPointManager` | `0x08121b0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08121b0c  _ZN8APSystem19CActionPointManager3SetERNS_22_SIG_LOAD_ACTION_POINTE
#           APSystem::CActionPointManager::Set(APSystem::_SIG_LOAD_ACTION_POINT&)
# range [0x08121b0c, 0x08121b3d]
08121b0c +0x00:  push   %ebp
08121b0d +0x01:  mov    %esp,%ebp
08121b0f +0x03:  sub    $0x18,%esp
08121b12 +0x06:  mov    0x8(%ebp),%eax
08121b15 +0x09:  mov    0xc(%eax),%edx
08121b18 +0x0c:  mov    0x8(%ebp),%eax
08121b1b +0x0f:  mov    %edx,0x4(%eax)
08121b1e +0x12:  mov    0x8(%ebp),%eax
08121b21 +0x15:  lea    0x8(%eax),%edx
08121b24 +0x18:  movl   $0xcf1,0x8(%esp)
08121b2c +0x20:  mov    0xc(%ebp),%eax
08121b2f +0x23:  mov    %eax,0x4(%esp)
08121b33 +0x27:  mov    %edx,(%esp)
08121b36 +0x2a:  call   0807d8a0 <_init+0x198>
08121b3b +0x2f:  leave
08121b3c +0x30:  ret
08121b3d +0x31:  nop
```

## 反编译 C

```c
// APSystem::CActionPointManager::Set @ 0x8121b0c

/* APSystem::CActionPointManager::Set(APSystem::_SIG_LOAD_ACTION_POINT&) */

void __thiscall
APSystem::CActionPointManager::Set(CActionPointManager *this,_SIG_LOAD_ACTION_POINT *param_1)

{
  *(undefined4 *)(this + 4) = *(undefined4 *)(this + 0xc);
  memcpy(this + 8,param_1,0xcf1);
  return;
}
```
