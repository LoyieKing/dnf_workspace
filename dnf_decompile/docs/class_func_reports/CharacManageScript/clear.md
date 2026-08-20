# clear

`_ZN18CharacManageScript5clearEv`

`CharacManageScript::clear()`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0904` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0904  _ZN18CharacManageScript5clearEv
#           CharacManageScript::clear()
# range [0x088e0904, 0x088e0967]
088e0904 +0x00:  push   %ebp
088e0905 +0x01:  mov    %esp,%ebp
088e0907 +0x03:  sub    $0x18,%esp
088e090a +0x06:  mov    0x8(%ebp),%eax
088e090d +0x09:  mov    %eax,(%esp)
088e0910 +0x0c:  call   088e1548 <_GLOBAL__I__ZN18CharacManageScript9instance_E+0x26f>  ; global constructors keyed to CharacManageScript::instance_+0x26f
088e0915 +0x11:  mov    0x8(%ebp),%eax
088e0918 +0x14:  add    $0xc,%eax
088e091b +0x17:  mov    %eax,(%esp)
088e091e +0x1a:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
088e0923 +0x1f:  mov    0x8(%ebp),%eax
088e0926 +0x22:  add    $0x18,%eax
088e0929 +0x25:  mov    %eax,(%esp)
088e092c +0x28:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088e0931 +0x2d:  mov    0x8(%ebp),%eax
088e0934 +0x30:  add    $0x30,%eax
088e0937 +0x33:  mov    %eax,(%esp)
088e093a +0x36:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088e093f +0x3b:  mov    0x8(%ebp),%eax
088e0942 +0x3e:  movl   $0x0,0x48(%eax)
088e0949 +0x45:  mov    0x8(%ebp),%eax
088e094c +0x48:  add    $0x4c,%eax
088e094f +0x4b:  mov    %eax,(%esp)
088e0952 +0x4e:  call   080c6bd6 <_GLOBAL__I_g_ServerString_+0x141>  ; global constructors keyed to g_ServerString_+0x141
088e0957 +0x53:  mov    0x8(%ebp),%eax
088e095a +0x56:  add    $0x64,%eax
088e095d +0x59:  mov    %eax,(%esp)
088e0960 +0x5c:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
088e0965 +0x61:  leave
088e0966 +0x62:  ret
088e0967 +0x63:  nop
```

## 反编译 C

```c
// CharacManageScript::clear @ 0x88e0904

/* CharacManageScript::clear() */

void __thiscall CharacManageScript::clear(CharacManageScript *this)

{
  std::vector<ManagePointBonus,std::allocator<ManagePointBonus>>::clear
            ((vector<ManagePointBonus,std::allocator<ManagePointBonus>> *)this);
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0xc));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x18));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x30));
  *(undefined4 *)(this + 0x48) = 0;
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )(this + 0x4c));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 100));
  return;
}
```
