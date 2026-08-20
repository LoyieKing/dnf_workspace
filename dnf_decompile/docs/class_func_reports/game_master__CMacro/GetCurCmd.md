# GetCurCmd

`_ZN11game_master6CMacro9GetCurCmdEv`

`game_master::CMacro::GetCurCmd()`

| 类 | 地址 |
|---|---|
| `game_master::CMacro` | `0x084a87e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a87e2  _ZN11game_master6CMacro9GetCurCmdEv
#           game_master::CMacro::GetCurCmd()
# range [0x084a87e2, 0x084a8801]
084a87e2 +0x00:  push   %ebp
084a87e3 +0x01:  mov    %esp,%ebp
084a87e5 +0x03:  sub    $0x18,%esp
084a87e8 +0x06:  mov    0x8(%ebp),%eax
084a87eb +0x09:  mov    0x10(%eax),%eax
084a87ee +0x0c:  mov    0x8(%ebp),%edx
084a87f1 +0x0f:  add    $0x4,%edx
084a87f4 +0x12:  mov    %eax,0x4(%esp)
084a87f8 +0x16:  mov    %edx,(%esp)
084a87fb +0x19:  call   084b4666 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x719>  ; global constructors keyed to game_master::CMacro::Reset()+0x719
084a8800 +0x1e:  leave
084a8801 +0x1f:  ret
```

## 反编译 C

```c
// game_master::CMacro::GetCurCmd @ 0x84a87e2

/* game_master::CMacro::GetCurCmd() */

void __thiscall game_master::CMacro::GetCurCmd(CMacro *this)

{
  std::vector<game_master::stMacroData,std::allocator<game_master::stMacroData>>::operator[]
            ((vector<game_master::stMacroData,std::allocator<game_master::stMacroData>> *)(this + 4)
             ,*(uint *)(this + 0x10));
  return;
}
```
