# addAniInfo

`_ZN17STEquipmentScript10addAniInfoE17ENUM_CHARACTERJOB`

`STEquipmentScript::addAniInfo(ENUM_CHARACTERJOB)`

| 类 | 地址 |
|---|---|
| `STEquipmentScript` | `0x0898efa8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898efa8  _ZN17STEquipmentScript10addAniInfoE17ENUM_CHARACTERJOB
#           STEquipmentScript::addAniInfo(ENUM_CHARACTERJOB)
# range [0x0898efa8, 0x0898efc7]
0898efa8 +0x00:  push   %ebp
0898efa9 +0x01:  mov    %esp,%ebp
0898efab +0x03:  sub    $0x18,%esp
0898efae +0x06:  mov    0x8(%ebp),%eax
0898efb1 +0x09:  lea    0x640(%eax),%edx
0898efb7 +0x0f:  lea    0xc(%ebp),%eax
0898efba +0x12:  mov    %eax,0x4(%esp)
0898efbe +0x16:  mov    %edx,(%esp)
0898efc1 +0x19:  call   089c5966 <_GLOBAL__I_g_npcNameVector+0x2d41>  ; global constructors keyed to g_npcNameVector+0x2d41
0898efc6 +0x1e:  leave
0898efc7 +0x1f:  ret
```

## 反编译 C

```c
// STEquipmentScript::addAniInfo @ 0x898efa8

/* STEquipmentScript::addAniInfo(ENUM_CHARACTERJOB) */

void STEquipmentScript::addAniInfo(int param_1)

{
  std::
  map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
  ::operator[]((map<ENUM_CHARACTERJOB,EquipmentAniInfoScript,std::less<ENUM_CHARACTERJOB>,std::allocator<std::pair<ENUM_CHARACTERJOB_const,EquipmentAniInfoScript>>>
                *)(param_1 + 0x640),&stack0x00000008);
  return;
}
```
