# _getFailProb_NewNPC

`_ZNK17Event_Upgrade_Jar19_getFailProb_NewNPCEj`

`Event_Upgrade_Jar::_getFailProb_NewNPC(unsigned int) const`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4c8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4c8e  _ZNK17Event_Upgrade_Jar19_getFailProb_NewNPCEj
#           Event_Upgrade_Jar::_getFailProb_NewNPC(unsigned int) const
# range [0x080f4c8e, 0x080f4ccb]
080f4c8e +0x00:  push   %ebp
080f4c8f +0x01:  mov    %esp,%ebp
080f4c91 +0x03:  sub    $0x18,%esp
080f4c94 +0x06:  mov    0x8(%ebp),%eax
080f4c97 +0x09:  add    $0x74,%eax
080f4c9a +0x0c:  mov    %eax,(%esp)
080f4c9d +0x0f:  call   080f5644 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5f5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5f5
080f4ca2 +0x14:  cmp    0xc(%ebp),%eax
080f4ca5 +0x17:  setbe  %al
080f4ca8 +0x1a:  test   %al,%al
080f4caa +0x1c:  je     080f4cb3 <+0x25>
080f4cac +0x1e:  mov    $&_ZL14gUnicodeBuffer+0xe174,%eax
080f4cb1 +0x23:  jmp    080f4cca <+0x3c>
080f4cb3 +0x25:  mov    0x8(%ebp),%eax
080f4cb6 +0x28:  lea    0x74(%eax),%edx
080f4cb9 +0x2b:  mov    0xc(%ebp),%eax
080f4cbc +0x2e:  mov    %eax,0x4(%esp)
080f4cc0 +0x32:  mov    %edx,(%esp)
080f4cc3 +0x35:  call   080f5660 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x611>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x611
080f4cc8 +0x3a:  mov    (%eax),%eax
080f4cca +0x3c:  leave
080f4ccb +0x3d:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::_getFailProb_NewNPC @ 0x80f4c8e

/* Event_Upgrade_Jar::_getFailProb_NewNPC(unsigned int) const */

undefined4 __thiscall Event_Upgrade_Jar::_getFailProb_NewNPC(Event_Upgrade_Jar *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar1 = std::
          vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
          ::size((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                  *)(this + 0x74));
  if (param_1 < uVar1) {
    puVar3 = (undefined4 *)
             std::
             vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
             ::operator[]((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                           *)(this + 0x74),param_1);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 100000;
  }
  return uVar2;
}
```
