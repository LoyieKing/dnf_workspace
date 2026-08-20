# GetMinimumPointCharacterLevel

`_ZN18CharacManageScript29GetMinimumPointCharacterLevelEv`

`CharacManageScript::GetMinimumPointCharacterLevel()`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e1266` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e1266  _ZN18CharacManageScript29GetMinimumPointCharacterLevelEv
#           CharacManageScript::GetMinimumPointCharacterLevel()
# range [0x088e1266, 0x088e1298]
088e1266 +0x00:  push   %ebp
088e1267 +0x01:  mov    %esp,%ebp
088e1269 +0x03:  sub    $0x18,%esp
088e126c +0x06:  mov    0x8(%ebp),%eax
088e126f +0x09:  mov    %eax,(%esp)
088e1272 +0x0c:  call   088e1726 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x44d>  ; global constructors keyed to CharacManageScript::instance_+0x44d
088e1277 +0x11:  test   %al,%al
088e1279 +0x13:  je     088e1282 <+0x1c>
088e127b +0x15:  mov    $0x28,%eax
088e1280 +0x1a:  jmp    088e1297 <+0x31>
088e1282 +0x1c:  mov    0x8(%ebp),%eax
088e1285 +0x1f:  movl   $0x0,0x4(%esp)
088e128d +0x27:  mov    %eax,(%esp)
088e1290 +0x2a:  call   088e176a <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x491>  ; global constructors keyed to CharacManageScript::instance_+0x491
088e1295 +0x2f:  mov    (%eax),%eax
088e1297 +0x31:  leave
088e1298 +0x32:  ret
```

## 反编译 C

```c
// CharacManageScript::GetMinimumPointCharacterLevel @ 0x88e1266

/* CharacManageScript::GetMinimumPointCharacterLevel() */

undefined4 __thiscall CharacManageScript::GetMinimumPointCharacterLevel(CharacManageScript *this)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  cVar1 = std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::empty();
  if (cVar1 == '\0') {
    puVar3 = (undefined4 *)
             std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::operator[]
                       ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this,0);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 0x28;
  }
  return uVar2;
}
```
