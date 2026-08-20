# clear

`_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv`

`stFavorableRelationShip_t::stRewardItem_t::clear()`

| 类 | 地址 |
|---|---|
| `stFavorableRelationShip_t::stRewardItem_t` | `0x089fb508` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089fb508  _ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv
#           stFavorableRelationShip_t::stRewardItem_t::clear()
# range [0x089fb508, 0x089fb56b]
089fb508 +0x00:  push   %ebp
089fb509 +0x01:  mov    %esp,%ebp
089fb50b +0x03:  sub    $0x28,%esp
089fb50e +0x06:  movl   $0x0,-0x10(%ebp)
089fb515 +0x0d:  jmp    089fb55e <+0x56>
089fb517 +0x0f:  movl   $0x0,-0xc(%ebp)
089fb51e +0x16:  jmp    089fb54f <+0x47>
089fb520 +0x18:  mov    -0x10(%ebp),%ecx
089fb523 +0x1b:  mov    -0xc(%ebp),%eax
089fb526 +0x1e:  mov    %eax,%edx
089fb528 +0x20:  add    %edx,%edx
089fb52a +0x22:  add    %eax,%edx
089fb52c +0x24:  mov    %edx,%eax
089fb52e +0x26:  shl    $0x4,%eax
089fb531 +0x29:  mov    %eax,%edx
089fb533 +0x2b:  mov    %ecx,%eax
089fb535 +0x2d:  shl    $0x3,%eax
089fb538 +0x30:  add    %ecx,%eax
089fb53a +0x32:  shl    $0x4,%eax
089fb53d +0x35:  lea    (%edx,%eax,1),%eax
089fb540 +0x38:  add    0x8(%ebp),%eax
089fb543 +0x3b:  mov    %eax,(%esp)
089fb546 +0x3e:  call   089fb4c0 <_ZN25stFavorableRelationShip_t18stRewardItemInfo_t5clearEv>  ; stFavorableRelationShip_t::stRewardItemInfo_t::clear()
089fb54b +0x43:  addl   $0x1,-0xc(%ebp)
089fb54f +0x47:  cmpl   $0x2,-0xc(%ebp)
089fb553 +0x4b:  setle  %al
089fb556 +0x4e:  test   %al,%al
089fb558 +0x50:  jne    089fb520 <+0x18>
089fb55a +0x52:  addl   $0x1,-0x10(%ebp)
089fb55e +0x56:  cmpl   $0x4,-0x10(%ebp)
089fb562 +0x5a:  setle  %al
089fb565 +0x5d:  test   %al,%al
089fb567 +0x5f:  jne    089fb517 <+0xf>
089fb569 +0x61:  leave
089fb56a +0x62:  ret
089fb56b +0x63:  nop
```

## 反编译 C

```c
// stFavorableRelationShip_t::stRewardItem_t::clear @ 0x89fb508

/* stFavorableRelationShip_t::stRewardItem_t::clear() */

void __thiscall stFavorableRelationShip_t::stRewardItem_t::clear(stRewardItem_t *this)

{
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
      stRewardItemInfo_t::clear((stRewardItemInfo_t *)(this + local_10 * 0x30 + local_14 * 0x90));
    }
  }
  return;
}
```
