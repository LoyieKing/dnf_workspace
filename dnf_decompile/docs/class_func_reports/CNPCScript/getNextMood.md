# getNextMood

`_ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj`

`CNPCScript::getNextMood(ENUM_NPC_MOOD&, unsigned int&) const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x08580f28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580f28  _ZNK10CNPCScript11getNextMoodER13ENUM_NPC_MOODRj
#           CNPCScript::getNextMood(ENUM_NPC_MOOD&, unsigned int&) const
# range [0x08580f28, 0x08580fcf]
08580f28 +0x00:  push   %ebp
08580f29 +0x01:  mov    %esp,%ebp
08580f2b +0x03:  sub    $0x18,%esp
08580f2e +0x06:  mov    0x8(%ebp),%eax
08580f31 +0x09:  add    $0x184,%eax
08580f36 +0x0e:  mov    %eax,(%esp)
08580f39 +0x11:  call   08582c82 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1414>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1414
08580f3e +0x16:  test   %al,%al
08580f40 +0x18:  je     08580f5b <+0x33>
08580f42 +0x1a:  mov    0xc(%ebp),%eax
08580f45 +0x1d:  movl   $0x1,(%eax)
08580f4b +0x23:  mov    0x10(%ebp),%eax
08580f4e +0x26:  movl   $0x0,(%eax)
08580f54 +0x2c:  mov    $0x0,%eax
08580f59 +0x31:  jmp    08580fcd <+0xa5>
08580f5b +0x33:  mov    0x10(%ebp),%eax
08580f5e +0x36:  mov    (%eax),%eax
08580f60 +0x38:  lea    0x1(%eax),%edx
08580f63 +0x3b:  mov    0x10(%ebp),%eax
08580f66 +0x3e:  mov    %edx,(%eax)
08580f68 +0x40:  mov    0x8(%ebp),%eax
08580f6b +0x43:  add    $0x184,%eax
08580f70 +0x48:  mov    %eax,(%esp)
08580f73 +0x4b:  call   08582cc6 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1458>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1458
08580f78 +0x50:  mov    0x10(%ebp),%edx
08580f7b +0x53:  mov    (%edx),%edx
08580f7d +0x55:  cmp    %edx,%eax
08580f7f +0x57:  setbe  %al
08580f82 +0x5a:  test   %al,%al
08580f84 +0x5c:  je     08580f8f <+0x67>
08580f86 +0x5e:  mov    0x10(%ebp),%eax
08580f89 +0x61:  movl   $0x0,(%eax)
08580f8f +0x67:  mov    0x10(%ebp),%eax
08580f92 +0x6a:  mov    (%eax),%eax
08580f94 +0x6c:  mov    0x8(%ebp),%edx
08580f97 +0x6f:  add    $0x184,%edx
08580f9d +0x75:  mov    %eax,0x4(%esp)
08580fa1 +0x79:  mov    %edx,(%esp)
08580fa4 +0x7c:  call   08582ce2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1474>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1474
08580fa9 +0x81:  mov    (%eax),%edx
08580fab +0x83:  mov    0xc(%ebp),%eax
08580fae +0x86:  mov    %edx,(%eax)
08580fb0 +0x88:  mov    0x10(%ebp),%eax
08580fb3 +0x8b:  mov    (%eax),%eax
08580fb5 +0x8d:  mov    0x8(%ebp),%edx
08580fb8 +0x90:  add    $0x184,%edx
08580fbe +0x96:  mov    %eax,0x4(%esp)
08580fc2 +0x9a:  mov    %edx,(%esp)
08580fc5 +0x9d:  call   08582ce2 <_GLOBAL__I__ZN15CNPCDynamicInfo10changeMoodEb+0x1474>  ; global constructors keyed to CNPCDynamicInfo::changeMood(bool)+0x1474
08580fca +0xa2:  mov    0x4(%eax),%eax
08580fcd +0xa5:  leave
08580fce +0xa6:  ret
08580fcf +0xa7:  nop
```

## 反编译 C

```c
// CNPCScript::getNextMood @ 0x8580f28

/* CNPCScript::getNextMood(ENUM_NPC_MOOD&, unsigned int&) const */

undefined4 __thiscall CNPCScript::getNextMood(CNPCScript *this,ENUM_NPC_MOOD *param_1,uint *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  cVar1 = std::
          vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
          ::empty();
  if (cVar1 == '\0') {
    *param_2 = *param_2 + 1;
    uVar3 = std::
            vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
            ::size((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
                    *)(this + 0x184));
    if (uVar3 <= *param_2) {
      *param_2 = 0;
    }
    puVar4 = (undefined4 *)
             std::
             vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
             ::at((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
                   *)(this + 0x184),*param_2);
    *(undefined4 *)param_1 = *puVar4;
    iVar5 = std::
            vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
            ::at((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
                  *)(this + 0x184),*param_2);
    uVar2 = *(undefined4 *)(iVar5 + 4);
  }
  else {
    *(undefined4 *)param_1 = 1;
    *param_2 = 0;
    uVar2 = 0;
  }
  return uVar2;
}
```
