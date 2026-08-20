# _getMeterialCount_NewNPC

`_ZN17Event_Upgrade_Jar24_getMeterialCount_NewNPCEj`

`Event_Upgrade_Jar::_getMeterialCount_NewNPC(unsigned int)`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f4ccc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f4ccc  _ZN17Event_Upgrade_Jar24_getMeterialCount_NewNPCEj
#           Event_Upgrade_Jar::_getMeterialCount_NewNPC(unsigned int)
# range [0x080f4ccc, 0x080f4d0b]
080f4ccc +0x00:  push   %ebp
080f4ccd +0x01:  mov    %esp,%ebp
080f4ccf +0x03:  sub    $0x18,%esp
080f4cd2 +0x06:  mov    0x8(%ebp),%eax
080f4cd5 +0x09:  add    $0x74,%eax
080f4cd8 +0x0c:  mov    %eax,(%esp)
080f4cdb +0x0f:  call   080f5644 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x5f5>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x5f5
080f4ce0 +0x14:  cmp    0xc(%ebp),%eax
080f4ce3 +0x17:  setbe  %al
080f4ce6 +0x1a:  test   %al,%al
080f4ce8 +0x1c:  je     080f4cf1 <+0x25>
080f4cea +0x1e:  mov    $0xf4240,%eax
080f4cef +0x23:  jmp    080f4d09 <+0x3d>
080f4cf1 +0x25:  mov    0x8(%ebp),%eax
080f4cf4 +0x28:  lea    0x74(%eax),%edx
080f4cf7 +0x2b:  mov    0xc(%ebp),%eax
080f4cfa +0x2e:  mov    %eax,0x4(%esp)
080f4cfe +0x32:  mov    %edx,(%esp)
080f4d01 +0x35:  call   080f5672 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x623>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x623
080f4d06 +0x3a:  mov    0x4(%eax),%eax
080f4d09 +0x3d:  leave
080f4d0a +0x3e:  ret
080f4d0b +0x3f:  nop
```

## 反编译 C

```c
// Event_Upgrade_Jar::_getMeterialCount_NewNPC @ 0x80f4ccc

/* Event_Upgrade_Jar::_getMeterialCount_NewNPC(unsigned int) */

undefined4 __thiscall
Event_Upgrade_Jar::_getMeterialCount_NewNPC(Event_Upgrade_Jar *this,uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = std::
          vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
          ::size((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                  *)(this + 0x74));
  if (param_1 < uVar1) {
    iVar3 = std::
            vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
            ::operator[]((vector<ST_Event_Upgrade_Jar_EventNPCs_Script,std::allocator<ST_Event_Upgrade_Jar_EventNPCs_Script>>
                          *)(this + 0x74),param_1);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 1000000;
  }
  return uVar2;
}
```
