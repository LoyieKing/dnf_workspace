# clear

`_ZN25stFavorableRelationShip_t18stRewardItemInfo_t5clearEv`

`stFavorableRelationShip_t::stRewardItemInfo_t::clear()`

| 类 | 地址 |
|---|---|
| `stFavorableRelationShip_t::stRewardItemInfo_t` | `0x089fb4c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb4c0  _ZN25stFavorableRelationShip_t18stRewardItemInfo_t5clearEv
#           stFavorableRelationShip_t::stRewardItemInfo_t::clear()
# range [0x089fb4c0, 0x089fb507]
089fb4c0 +0x00:  push   %ebp
089fb4c1 +0x01:  mov    %esp,%ebp
089fb4c3 +0x03:  sub    $0x28,%esp
089fb4c6 +0x06:  movl   $0x0,-0xc(%ebp)
089fb4cd +0x0d:  jmp    089fb4fb <+0x3b>
089fb4cf +0x0f:  mov    -0xc(%ebp),%edx
089fb4d2 +0x12:  mov    %edx,%eax
089fb4d4 +0x14:  add    %eax,%eax
089fb4d6 +0x16:  add    %edx,%eax
089fb4d8 +0x18:  shl    $0x2,%eax
089fb4db +0x1b:  add    0x8(%ebp),%eax
089fb4de +0x1e:  mov    %eax,(%esp)
089fb4e1 +0x21:  call   08a01406 <_GLOBAL__I_g_npcScriptBaseDirectory+0xa98>  ; global constructors keyed to g_npcScriptBaseDirectory+0xa98
089fb4e6 +0x26:  mov    -0xc(%ebp),%edx
089fb4e9 +0x29:  mov    0x8(%ebp),%eax
089fb4ec +0x2c:  add    $0x8,%edx
089fb4ef +0x2f:  movl   $0x0,0x4(%eax,%edx,4)
089fb4f7 +0x37:  addl   $0x1,-0xc(%ebp)
089fb4fb +0x3b:  cmpl   $0x2,-0xc(%ebp)
089fb4ff +0x3f:  setle  %al
089fb502 +0x42:  test   %al,%al
089fb504 +0x44:  jne    089fb4cf <+0xf>
089fb506 +0x46:  leave
089fb507 +0x47:  ret
```

## 反编译 C

```c
// stFavorableRelationShip_t::stRewardItemInfo_t::clear @ 0x89fb4c0

/* stFavorableRelationShip_t::stRewardItemInfo_t::clear() */

void __thiscall stFavorableRelationShip_t::stRewardItemInfo_t::clear(stRewardItemInfo_t *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    std::
    vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
    ::clear((vector<stFavorableRelationShip_t::stRewardItemElement_t,std::allocator<stFavorableRelationShip_t::stRewardItemElement_t>>
             *)(this + local_10 * 0xc));
    *(undefined4 *)(this + (local_10 + 8) * 4 + 4) = 0;
  }
  return;
}
```
