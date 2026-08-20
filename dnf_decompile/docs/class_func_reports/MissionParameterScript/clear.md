# clear

`_ZN22MissionParameterScript5clearEv`

`MissionParameterScript::clear()`

| 类 | 地址 |
|---|---|
| `MissionParameterScript` | `0x08a5bca2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a5bca2  _ZN22MissionParameterScript5clearEv
#           MissionParameterScript::clear()
# range [0x08a5bca2, 0x08a5bce4]
08a5bca2 +0x00:  push   %ebp
08a5bca3 +0x01:  mov    %esp,%ebp
08a5bca5 +0x03:  sub    $0x18,%esp
08a5bca8 +0x06:  mov    0x8(%ebp),%eax
08a5bcab +0x09:  mov    %eax,(%esp)
08a5bcae +0x0c:  call   08557bb2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x713>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x713
08a5bcb3 +0x11:  mov    0x8(%ebp),%eax
08a5bcb6 +0x14:  movl   $0x0,0xc(%eax)
08a5bcbd +0x1b:  mov    0x8(%ebp),%eax
08a5bcc0 +0x1e:  add    $0x10,%eax
08a5bcc3 +0x21:  mov    %eax,(%esp)
08a5bcc6 +0x24:  call   08a5c054 <_GLOBAL__I_g_PvpMissionScriptBaseDirectory+0x306>  ; global constructors keyed to g_PvpMissionScriptBaseDirectory+0x306
08a5bccb +0x29:  mov    0x8(%ebp),%eax
08a5bcce +0x2c:  movl   $0x0,0x18(%eax)
08a5bcd5 +0x33:  mov    0x8(%ebp),%eax
08a5bcd8 +0x36:  add    $0x1c,%eax
08a5bcdb +0x39:  mov    %eax,(%esp)
08a5bcde +0x3c:  call   08557bb2 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x713>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x713
08a5bce3 +0x41:  leave
08a5bce4 +0x42:  ret
```

## 反编译 C

```c
// MissionParameterScript::clear @ 0x8a5bca2

/* MissionParameterScript::clear() */

void __thiscall MissionParameterScript::clear(MissionParameterScript *this)

{
  std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  std::
  list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>::
  clear((list<std::pair<unsigned_int,unsigned_int>,std::allocator<std::pair<unsigned_int,unsigned_int>>>
         *)(this + 0x10));
  *(undefined4 *)(this + 0x18) = 0;
  std::vector<unsigned_int,std::allocator<unsigned_int>>::clear
            ((vector<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x1c));
  return;
}
```
