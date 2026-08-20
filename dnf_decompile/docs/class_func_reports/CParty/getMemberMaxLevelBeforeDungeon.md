# getMemberMaxLevelBeforeDungeon

`_ZN6CParty30getMemberMaxLevelBeforeDungeonEv`

`CParty::getMemberMaxLevelBeforeDungeon()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b613e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b613e  _ZN6CParty30getMemberMaxLevelBeforeDungeonEv
#           CParty::getMemberMaxLevelBeforeDungeon()
# range [0x085b613e, 0x085b61bd]
085b613e +0x00:  push   %ebp
085b613f +0x01:  mov    %esp,%ebp
085b6141 +0x03:  sub    $0x28,%esp
085b6144 +0x06:  movl   $0x0,-0x14(%ebp)
085b614b +0x0d:  movl   $0x0,-0xc(%ebp)
085b6152 +0x14:  jmp    085b61ad <+0x6f>
085b6154 +0x16:  mov    -0xc(%ebp),%eax
085b6157 +0x19:  mov    %eax,0x4(%esp)
085b615b +0x1d:  mov    0x8(%ebp),%eax
085b615e +0x20:  mov    %eax,(%esp)
085b6161 +0x23:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b6166 +0x28:  xor    $0x1,%eax
085b6169 +0x2b:  test   %al,%al
085b616b +0x2d:  jne    085b61a8 <+0x6a>
085b616d +0x2f:  mov    -0xc(%ebp),%edx
085b6170 +0x32:  mov    0x8(%ebp),%ecx
085b6173 +0x35:  mov    %edx,%eax
085b6175 +0x37:  add    %eax,%eax
085b6177 +0x39:  add    %edx,%eax
085b6179 +0x3b:  shl    $0x3,%eax
085b617c +0x3e:  lea    (%ecx,%eax,1),%eax
085b617f +0x41:  add    $0x78,%eax
085b6182 +0x44:  mov    (%eax),%eax
085b6184 +0x46:  mov    %eax,(%esp)
085b6187 +0x49:  call   08645d52 <_ZNK15CUserCharacInfo31get_charac_level_before_dungeonEv>  ; CUserCharacInfo::get_charac_level_before_dungeon() const
085b618c +0x4e:  mov    %eax,-0x10(%ebp)
085b618f +0x51:  lea    -0x10(%ebp),%eax
085b6192 +0x54:  mov    %eax,0x4(%esp)
085b6196 +0x58:  lea    -0x14(%ebp),%eax
085b6199 +0x5b:  mov    %eax,(%esp)
085b619c +0x5e:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
085b61a1 +0x63:  mov    (%eax),%eax
085b61a3 +0x65:  mov    %eax,-0x14(%ebp)
085b61a6 +0x68:  jmp    085b61a9 <+0x6b>
085b61a8 +0x6a:  nop
085b61a9 +0x6b:  addl   $0x1,-0xc(%ebp)
085b61ad +0x6f:  cmpl   $0x3,-0xc(%ebp)
085b61b1 +0x73:  setle  %al
085b61b4 +0x76:  test   %al,%al
085b61b6 +0x78:  jne    085b6154 <+0x16>
085b61b8 +0x7a:  mov    -0x14(%ebp),%eax
085b61bb +0x7d:  leave
085b61bc +0x7e:  ret
085b61bd +0x7f:  nop
```

## 反编译 C

```c
// CParty::getMemberMaxLevelBeforeDungeon @ 0x85b613e

/* CParty::getMemberMaxLevelBeforeDungeon() */

int __thiscall CParty::getMemberMaxLevelBeforeDungeon(CParty *this)

{
  char cVar1;
  int *piVar2;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(this,local_10);
    if (cVar1 == '\x01') {
      local_14 = CUserCharacInfo::get_charac_level_before_dungeon
                           (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
      piVar2 = std::max<int>(&local_18,&local_14);
      local_18 = *piVar2;
    }
  }
  return local_18;
}
```
