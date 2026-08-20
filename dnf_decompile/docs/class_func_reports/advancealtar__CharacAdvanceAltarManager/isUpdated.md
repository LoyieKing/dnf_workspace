# isUpdated

`_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv`

`advancealtar::CharacAdvanceAltarManager::isUpdated() const`

| 类 | 地址 |
|---|---|
| `advancealtar::CharacAdvanceAltarManager` | `0x081316a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081316a0  _ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv
#           advancealtar::CharacAdvanceAltarManager::isUpdated() const
# range [0x081316a0, 0x081316e7]
081316a0 +0x00:  push   %ebp
081316a1 +0x01:  mov    %esp,%ebp
081316a3 +0x03:  sub    $0x10,%esp
081316a6 +0x06:  movl   $0x0,-0x4(%ebp)
081316ad +0x0d:  jmp    081316d6 <+0x36>
081316af +0x0f:  mov    -0x4(%ebp),%eax
081316b2 +0x12:  mov    0x8(%ebp),%edx
081316b5 +0x15:  imul   $0xd0,%eax,%eax
081316bb +0x1b:  lea    (%edx,%eax,1),%eax
081316be +0x1e:  add    $0xc0,%eax
081316c3 +0x23:  movzbl 0x10(%eax),%eax
081316c7 +0x27:  test   %al,%al
081316c9 +0x29:  je     081316d2 <+0x32>
081316cb +0x2b:  mov    $0x1,%eax
081316d0 +0x30:  jmp    081316e6 <+0x46>
081316d2 +0x32:  addl   $0x1,-0x4(%ebp)
081316d6 +0x36:  cmpl   $0x0,-0x4(%ebp)
081316da +0x3a:  setle  %al
081316dd +0x3d:  test   %al,%al
081316df +0x3f:  jne    081316af <+0xf>
081316e1 +0x41:  mov    $0x0,%eax
081316e6 +0x46:  leave
081316e7 +0x47:  ret
```

## 反编译 C

```c
// advancealtar::CharacAdvanceAltarManager::isUpdated @ 0x81316a0

/* advancealtar::CharacAdvanceAltarManager::isUpdated() const */

undefined4 __thiscall
advancealtar::CharacAdvanceAltarManager::isUpdated(CharacAdvanceAltarManager *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0 < local_8) {
      return 0;
    }
    if (this[local_8 * 0xd0 + 0xd0] != (CharacAdvanceAltarManager)0x0) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
