# getDyeColorIndex

`_ZN7DyeInfo16getDyeColorIndexEv`

`DyeInfo::getDyeColorIndex()`

| 类 | 地址 |
|---|---|
| `DyeInfo` | `0x0898d37c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d37c  _ZN7DyeInfo16getDyeColorIndexEv
#           DyeInfo::getDyeColorIndex()
# range [0x0898d37c, 0x0898d3c5]
0898d37c +0x00:  push   %ebp
0898d37d +0x01:  mov    %esp,%ebp
0898d37f +0x03:  sub    $0x18,%esp
0898d382 +0x06:  mov    0x8(%ebp),%eax
0898d385 +0x09:  mov    (%eax),%eax
0898d387 +0x0b:  cmp    $0x1,%eax
0898d38a +0x0e:  jne    0898d3bf <+0x43>
0898d38c +0x10:  mov    0x8(%ebp),%eax
0898d38f +0x13:  add    $0x4,%eax
0898d392 +0x16:  mov    %eax,(%esp)
0898d395 +0x19:  call   0811119a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6ac>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6ac
0898d39a +0x1e:  test   %al,%al
0898d39c +0x20:  je     0898d3a5 <+0x29>
0898d39e +0x22:  mov    $0xffffffff,%eax
0898d3a3 +0x27:  jmp    0898d3c4 <+0x48>
0898d3a5 +0x29:  mov    0x8(%ebp),%eax
0898d3a8 +0x2c:  add    $0x4,%eax
0898d3ab +0x2f:  movl   $0x0,0x4(%esp)
0898d3b3 +0x37:  mov    %eax,(%esp)
0898d3b6 +0x3a:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
0898d3bb +0x3f:  mov    (%eax),%eax
0898d3bd +0x41:  jmp    0898d3c4 <+0x48>
0898d3bf +0x43:  mov    $0xffffffff,%eax
0898d3c4 +0x48:  leave
0898d3c5 +0x49:  ret
```

## 反编译 C

```c
// DyeInfo::getDyeColorIndex @ 0x898d37c

/* DyeInfo::getDyeColorIndex() */

undefined4 __thiscall DyeInfo::getDyeColorIndex(DyeInfo *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)this == 1) {
    cVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
    if (cVar1 == '\0') {
      puVar3 = (undefined4 *)
               std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                         ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                          (this + 4),0);
      uVar2 = *puVar3;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}
```
